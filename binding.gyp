{
    "targets": [
        {
            "target_name": "addone_nan",
            "sources": [ "addone_nan.cc"],
            "include_dirs" : [
 	 			"<!(node -e \"require('nan')\")"
			]
        }
    ],
}