pipeline {
    agent any
    stages {
        stage('build') {
		    steps {
				echo 'Building the application...'
				bat 'make'
				bat 'MSBuild win32-project/win32-project.sln /p:Configuration=Debug /p:Platform=X86'
            }
        }
		
		stage('test') {
		    steps {
				echo 'Testing the application...'
				bat 'MSBuild unittest-win32-project/unittest-win32-project.sln /p:Configuration=Debug /p:Platform=X86'
				bat """
					cd unittest-win32-project/Debug
					.\UnittestHinhChuNhat.exe --gtest_output="xml:XML_Report.xml" >> unit-test.log
				"""
            }
        }
		
    }
}