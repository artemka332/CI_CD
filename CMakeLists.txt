cmake_minimum_required(VERSION 3.10)

project(CI_CD VERSION 1.1)

# Главный исполняемый файл
add_executable(main main.cpp statistics.cpp)

# Unit-тесты
enable_testing()                                        # включем поддержку тестирования в CMake
add_executable(test_statistics statistics.cpp test_statistics.cpp) # выбрали исполняемый файл
add_test(NAME StatisticsTests COMMAND test_statistics)  # регистрируем тесты в системе CTest под именем StatisticsTests, который запускает исполняемый файл