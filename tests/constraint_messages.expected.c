Running "constraint_messages" (32 tests)...
constraint_messages_tests.c: Failure: FailureMessage -> for_always_followed_by_expectation 
	Mocked function [some_mock] already has an expectation that it will always be called a certain way; any expectations declared after an always expectation are invalid

constraint_messages_tests.c: Failure: FailureMessage -> for_assert_that 
	Expected [0 == 1] to [be true]

constraint_messages_tests.c: Failure: FailureMessage -> for_begins_with_string 
	Expected [does_not_begin_with_fourty_five] to [begin with string] [fourty_five]
		actual value:			["this string does not begin with fortyfive"]
		expected to begin with:		["fourtyfive"]

constraint_messages_tests.c: Failure: FailureMessage -> for_contains_string 
	Expected [not_containing_fourty_five] to [contain string] [fourty_five]
		actual value:			["this text is thirtythree"]
		expected to contain:		["fortyfive"]

constraint_messages_tests.c: Failure: FailureMessage -> for_does_not_contain_string 
	Expected [contains_fourty_five] to [not contain string] [fourty_five]
		actual value:			["this string is fourtyfive"]
		expected to not contain:	["fourtyfive"]

constraint_messages_tests.c: Failure: FailureMessage -> for_equal_to_double 
	Expected [0] to [equal double] [1] within [8] significant figures
		actual value:	0.000000
		expected value:	1.000000


constraint_messages_tests.c: Failure: FailureMessage -> for_equal_to_double_negative 
	Expected [-1] to [equal double] [-2] within [8] significant figures
		actual value:	-1.000000
		expected value:	-2.000000


constraint_messages_tests.c: Failure: FailureMessage -> for_is_equal_to 
	Expected [fourty_five] to [equal] [thirty_three]
		actual value:			[45]
		expected value:			[33]

constraint_messages_tests.c: Failure: FailureMessage -> for_is_equal_to_contents_of 
	Expected [thirty_three] to [equal contents of] [fourty_five]
		at offset:			[9]

constraint_messages_tests.c: Failure: FailureMessage -> for_is_equal_to_double 
	Expected [four_point_five] to [equal double] [three_point_three] within [8] significant figures
		actual value:	4.500000
		expected value:	3.300000


constraint_messages_tests.c: Failure: FailureMessage -> for_is_equal_to_string 
	Expected [thirty_three] to [equal string] [fourty_five]
		actual value:			["this string is thirtythree"]
		expected to equal:		["this string is fortyfive"]

constraint_messages_tests.c: Failure: FailureMessage -> for_is_greater_than 
	Expected [thirty_three] to [be greater than] [fourty_five]
		actual value:			[33]
		expected to be greater than:	[45]

constraint_messages_tests.c: Failure: FailureMessage -> for_is_greater_than_double 
	Expected [three_point_three] to [be greater than double] [four_point_five] within [8] significant figures
		actual value:	3.300000
		expected value:	4.500000


constraint_messages_tests.c: Failure: FailureMessage -> for_is_greater_than_double_with_accuracy 
	Expected [1.0] to [be greater than double] [1.0 + 1.0e-3 + DBL_EPSILON] within [4] significant figures
		actual value:	1.000000
		expected value:	1.001000


constraint_messages_tests.c: Failure: FailureMessage -> for_is_less_than 
	Expected [fourty_five] to [be less than] [thirty_three]
		actual value:			[45]
		expected to be less than:	[33]

constraint_messages_tests.c: Failure: FailureMessage -> for_is_less_than_double 
	Expected [four_point_five] to [be less than double] [three_point_three] within [8] significant figures
		actual value:	4.500000
		expected value:	3.300000


constraint_messages_tests.c: Failure: FailureMessage -> for_is_less_than_double_with_accuracy 
	Expected [1.0] to [be less than double] [1.0 - 1.0e-3 - DBL_EPSILON] within [4] significant figures
		actual value:	1.000000
		expected value:	0.999000


constraint_messages_tests.c: Failure: FailureMessage -> for_is_non_null 
	Expected [pointer] to [be non null]

constraint_messages_tests.c: Failure: FailureMessage -> for_is_not_equal_to 
	Expected [should_not_be_fourty_five] to [not equal] [forty_five]
		actual value:			[45]

constraint_messages_tests.c: Failure: FailureMessage -> for_is_not_equal_to_contents_of 
	Expected [fourty_five_and_up] to [not equal contents of] [another_fourty_five_and_up]
		at offset:			[-1]

constraint_messages_tests.c: Failure: FailureMessage -> for_is_not_equal_to_double 
	Expected [four_point_five] to [not equal double] [almost_four_point_five] within [4] significant figures
		actual value:	4.500000
		expected value:	4.499900


constraint_messages_tests.c: Failure: FailureMessage -> for_is_not_equal_to_string 
	Expected [another_fourty_five] to [not equal string] [fourty_five]
		actual value:			["this string is fourtyfive"]

constraint_messages_tests.c: Failure: FailureMessage -> for_is_null 
	Expected [pointer] to [be null]

constraint_messages_tests.c: Failure: FailureMessage -> for_mock_called_more_times_than_expected 
	Mocked function [some_mock] was called too many times

constraint_messages_tests.c: Failure: FailureMessage -> for_mock_called_with_unexpected_parameter_value 
	Expected [[parameter] parameter in [some_mock]] to [equal] [1]
		actual value:			[0]
		expected value:			[1]

constraint_messages_tests.c: Failure: FailureMessage -> for_mock_called_without_expectation 
	Mocked function [some_mock] did not have an expectation that it would be called

constraint_messages_tests.c: Failure: FailureMessage -> for_mock_parameter_name_not_matching_constraint_parameter_name 
	Mocked function [some_mock] did not define a parameter named [PARAMETER]. Did you misspell it in the expectation or forget it in the mock's argument list?

constraint_messages_tests.c: Failure: FailureMessage -> for_no_mock_parameters_with_parameter_constraint 
	Mocked function [forgot_to_pass_parameters_mock] did not define a parameter named [x]. Did you misspell it in the expectation or forget it in the mock's argument list?

constraint_messages_tests.c: Failure: FailureMessage -> for_not_equal_to_double 
	Expected [0] to [not equal double] [0] within [8] significant figures
		actual value:	0.000000
		expected value:	0.000000


constraint_messages_tests.c: Failure: FailureMessage -> for_not_equal_to_double_negative 
	Expected [-1] to [not equal double] [-1] within [8] significant figures
		actual value:	-1.000000
		expected value:	-1.000000


constraint_messages_tests.c: Failure: FailureMessage -> for_violated_never_expect 
	Mocked function [some_mock] has an expectation that it will never be called, but it was

constraint_messages_tests.c: Exception: FailureMessage -> increments_exception_count_when_terminating_via_SIGQUIT 
	Test terminated with signal: Terminated

Completed "FailureMessage": 0 passes, 31 failures, 1 exception.
Completed "constraint_messages": 0 passes, 31 failures, 1 exception.
