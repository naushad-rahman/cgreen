Running "mock_messages" (6 tests)...
mock_messages_tests.c: Failure: Mocks -> calls_beyond_expected_sequence_fail_when_mocks_are_strict 
	Mocked function [integer_out] was called too many times

mock_messages_tests.c: Failure: Mocks -> calls_beyond_expected_sequence_fail_when_mocks_are_strict 
	Expected [integer_out()] to [equal] [3]
		actual value:			[0]
		expected value:			[3]

mock_messages_tests.c: Failure: Mocks -> can_declare_function_never_called 
	Mocked function [sample_mock] has an expectation that it will never be called, but it was

mock_messages_tests.c: Failure: Mocks -> failure_reported_when_expect_after_always_expect_for_same_function 
	Mocked function [integer_out] already has an expectation that it will always be called a certain way; any expectations declared after an always expectation are invalid

mock_messages_tests.c: Failure: Mocks -> failure_reported_when_expect_after_never_expect_for_same_function 
	Mocked function [integer_out] already has an expectation that it will never be called; any expectations declared after a never call expectation are invalid

mock_messages_tests.c: Failure: Mocks -> failure_when_no_presets_for_default_strict_mock 
	Mocked function [integer_out] did not have an expectation that it would be called

mock_messages_tests.c: Failure: Mocks -> single_uncalled_expectation_fails_tally 
	Expected call was not made to mocked function [string_out]

Completed "Mocks": 4 passes, 7 failures, 0 exceptions.
Completed "mock_messages": 4 passes, 7 failures, 0 exceptions.
