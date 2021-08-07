pipeline {
    agent any
    stages {
        stage('build') {
		    steps {
				echo 'Building the application...'
            }
			
            steps {
                bat 'make'
            }
        }
		
        stage('test') {
		
		    steps {
				echo 'Testing the application...'
            }
			
            steps {
                bat 'MSBuild unittest-win32-project\unittest-win32-project.sln /p:Configuration=Debug /p:Platform=X86'
            }
			
			steps {
                bat 'cd unittest-win32-project\Debug'
				bat '.\UnittestHinhChuNhat.exe --gtest_output="xml:XML_Report.xml" >> unit-test.log'
            }
        }	

        stage('deploy') {
            steps {
                echo 'Deploying the application...'
            }
        }		
    }
}