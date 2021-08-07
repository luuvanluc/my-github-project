pipeline {
    agent any
    stages {
        stage('build') {
            steps {
				echo 'Building the application...'
                sh 'make'
            }
        }
		
        stage('test') {
            steps {
                sh 'MSBuild unittest-win32-project\unittest-win32-project.sln /p:Configuration=Debug /p:Platform=X86'
            }
			
			steps {
                sh 'cd unittest-win32-project\Debug'
				sh '.\UnittestHinhChuNhat.exe --gtest_output="xml:XML_Report.xml" >> unit-test.log'
            }
        }	

        stage('deploy') {
            steps {
                echo 'Deploying the application...'
            }
        }		
    }
}