# BUG LOG

[ FAILED ] FieldTest.constructorWithArgument // This test fails because when you call the constructor with an argument (20 in this case) it will makes the map the size 20X20, but it doesn't store the size in the variable "FIELD_DIMENSION", especially since it is declared const. It fails when placing a mine at  a location that should be valid, such as (17, 17),  because it checks against FIELD_DIMENSION, which is set to 10 by default.
