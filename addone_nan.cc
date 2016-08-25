#include <nan.h>
#include "addone_inner.cc"

using namespace Nan;
using v8::FunctionTemplate;


NAN_METHOD(addone) {
  double value = info[0]->IsUndefined() ? 0 : Nan::To<double>(info[0]).FromJust();
  info.GetReturnValue().Set(Nan::New(addone(value)));
}
NAN_MODULE_INIT(InitAll) {
  Nan::Set(target, Nan::New("addone").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(addone)).ToLocalChecked());
}

NODE_MODULE(addone_nan, InitAll)