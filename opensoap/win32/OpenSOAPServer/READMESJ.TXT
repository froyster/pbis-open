OpenSOAP Server for Windows2000�@�C���X�g�[�����@

-------
�O��F
-------
�i�P�jlibxml2���C���X�g�[������Ă��邱�ƁB
�@�@�C���X�g�[����Ƃ��āAC:\libxml2�@��O��Ƃ��Ă���B
�@�@����ȊO�ɃC���X�g�[�������ꍇ�́A�ȉ��� OpenSOAPServer.dsw�ɓo�^����Ă���
�@�@�e�v���W�F�N�g�̐ݒ蒆��C:\libxml2\�̃p�X��ύX����K�v������B
�@�@�� �܂��AC:\libxml2\bin ���V�X�e����PATH�ɒǉ����邱�ƁB

�i�Q�jopenssl���C���X�g�[������Ă��邱�ƁB
�@�@�C���X�g�[����Ƃ��āAC:\openssl�@��O��Ƃ��Ă���B
�@�@����ȊO�ɃC���X�g�[�������ꍇ�́A�ȉ��� OpenSOAPServer.dsw�ɓo�^����Ă���
�@�@�e�v���W�F�N�g�̐ݒ蒆��C:\openssl\�̃p�X��ύX����K�v������B
    �� �܂��AC:\openssl\bin ���V�X�e����PATH�ɒǉ����邱�ƁB
�i�R�jApache���C���X�g�[������Ă��邱�ƁB
    �f�t�H���g�̃C���X�g�[�����ύX�����ꍇ�́AinstallOpenSOAPServer.bat�@����
�@�@APACHE_CGI_DIR�̋L�q��ύX���邱�ƁB
�i�S�j�p�b�P�[�W�� win32\READMESJ.TXT �ɏ]���AOpenSOAP.dsw ���R���p�C������A
    �C���X�g�[������Ă��邱�ƁB

-------
�C���X�g�[���菇�F
-------

�i�P�jOpenSOAPServer.dsw���J���A�u�r���h�v���j���[����
    �u�o�b�`�r���h�v��I�����u�r���h�v����B
    ������m�F�� Release ���[�h�ɂčs���Ă��邽�߁ADebug ���[�h�̃r���h��
�@�@�@�s��Ȃ��悤�e�v���W�F�N�g�� Debug �̃`�F�b�N�͊O���ARelease �̂�
�@�@�@�r���h���Ă��������B

�i�Q�jetc\installOpenSOAPServer.bat �����s����B
    - ����ɂ��A%SystemDrive%\OpenSOAP�f�B���N�g�����쐬����A�K�v��DLL��
    �@exe�t�@�C�������R�s�[�����B
      �܂��A%SystemDrive%\usr\local\opensoap\ �ȉ��Ɏ��s�����쐬�����B
      ���̎��s���ȉ��ɁA���O�t�@�C����ꎞ���b�Z�[�W�Ȃǂ��o�͂����B

   �� ���̎��s���� \usr\local\opensoap\ �́A�J�X�^�}�C�Y���\�ł��B
�@�@�@���̏ꍇ�́A��LinstallOpenSOAPServer.bat�̎��s�O�ɁA���t�@�C������
�@�@�@OPENSOAP_ROOT�̐ݒ���C�����Ă��������B
�@�@�@���̍ۂɒ��ӂ��K�v�Ȃ̂́A�C���X�g�[����ɁA\usr\local\opensoap\�ɂ�����
�@�@�@�f�B���N�g�����Q�Ƃ��Ă���ȉ��̃t�@�C���̓��e���J�X�^�}�C�Y�ɍ��킹��
�@�@�@�K�؂ȃf�B���N�g�����w���悤�ɏC��������AOpenSOAP Server�v���Z�X���N��
�@�@�@���Ă��������B

    �C�����K�v�ȃt�@�C���F
�@�@�@�@�@A) \OpenSOAP\etc\StartServerWinService.bat
�@�@�@�@�@�@- OPENSOAP_ROOT�̐ݒ��installOpenSOAPServer.bat���̕ύX���e��
�@�@�@�@�@�@�@���킹�ďC������B
          B) \OpenSOAP\etc\server.conf
            - �T�[�o�v���Z�X�̎��s���Ɋւ���path�ɂ����镔�������ׂďC������B
�@�@�@�@�@�@�@�Ⴆ�΁A\usr\local\opensoap\ �� \opensoap\ �ɃJ�X�^�}�C�Y����
�@�@�@�@�@�@�@�ꍇ�́A
               <!-- log -->
                 <log>
                   <path>/usr/local/opensoap/var/log/</path>
                 </log>

�@�@�@�@�@�@�@�@���A�ȉ��̂悤�ɏC������B

               <!-- log -->
                 <log>
                   <path>/opensoap/var/log/</path>
                 </log>

�@�@�@�@�@�@�@�@���l��/usr/local/opensoap/���w��path�����ׂďC������B

 ���ȍ~�� C: �͎��ۂ� %SystemDrive% ���w�����߁A�V�X�e���C���X�g�[������
   ���B

�i�R�j�V�X�e����PATH�Ɉȉ���ǉ����A�V�X�e�����ċN������B
    �ǉ��p�X�F
     C:\OpenSOAP\bin;C:\OpenSOAP\user\bin

�i�S�jC:\OpenSOAP\etc\SetUpServerWinService.bat �����s����B
     - ����ɂ��AOpenSOAPServer�e�v���Z�X��Windows�T�[�r�X�Ƃ��ēo�^�����B
     ���o�^�����T�[�r�X���폜����ꍇ�́A
       C:\OpenSOAP\etc\DeleteServerWinService.bat �����s�B

-------
���s���F
-------
�@�C���X�g�[����Ƃɂ���āAC:\usr\local\opensoap �f�B���N�g����
�@�쐬����A����ȉ��Ɉȉ��̃f�B���N�g�����쐬�����B
  ���ȉ��́i�P�j�ȊO�́A�C���X�g�[���菇�́i�Q�j�ŃJ�X�^�}�C�Y�������e��
�@�@����ĕς��B

�i�P�jC:\OpenSOAP\etc\server.conf
    - OpenSOAP Server �̊e��ݒ���t�@�C���B
�@�@�@�� �p�b�P�[�W���� doc\server\READMESJ.txt �� server.conf �Ɋւ���L�q��
�@�@�@�@�]���Apath�̐ݒ��A�]���T�[�o���Ȃǂ�K�؂ɐݒ肷�邱�ƁB

�i�Q�jetc\ssml
    - �T�[�r�X���`����SSML�t�@�C����u���f�B���N�g���B
�@�@�@���T�[�o�v���Z�X���N�����ɂ������Q�Ƃ��A�T�[�r�X���Ǘ����܂��B
�@�@�@�@(�T�[�r�X��).ssml�t�@�C�����������L�q����A�u����Ă���K�v������܂��B

�i�R�jvar\spool
    - ���������p�ꎞ���b�Z�[�W����шꎞ�e�[�u�����쐬�����f�B���N�g���B

�i�S�jvar\log
    - OpenSOAP Server �̊e�v���Z�X�̃��O�t�@�C�����쐬�����B

-------
OpenSOAP Server�v���Z�X�N���F
-------
�i�P�jC:\OpenSOAP\etc\StartServerWinService.bat �����s�B

-------
OpenSOAP Server�v���Z�X��~�F
-------
�i�P�jC:\OpenSOAP\etc\StopServerWinService.bat �����s�B

-------
OpenSOAP Server�ݒ���ēǂݍ��݁F
-------
 �T�[�r�X�pSSML�t�@�C�����X�V�����ꍇ�͈ȉ��ɂ��A
 �����X�V���邱�Ƃ��o����B
�i�P�jC:\OpenSOAP\etc\ReloadServerWinService.bat �����s�B
 
 ���C���̔��f�́A��L���@�̂ق��AOpenSOAP Server�v���Z�X�̍ċN���i��~�{�N���j
�@���s���Ă͂��߂čs���邱�Ƃɒ��ӂ���B

------
�e�X�g�T���v�����s��F
------
�@�ȉ��ɁA�Q�l�Ƃ��āAHello�T���v�������s����菇�������܂��B

�i�P�j�T���v���̃N���C�A���g����уT�[�r�X���쐬����B

�@�@�p�b�P�[�W�� win32\OpenSOAPSamples\ �ȉ��� HelloClient_DLL.dsp �����
�@�@HelloService_DLL.dsp �ɂ��r���h���s���A�쐬���ꂽ Debug_DLL\�ȉ���
�@�@HelloClient.exe ����� HelloService.exe �� C:\opensoap\user\bin �ȉ���
�@�@�R�s�[����B

    ��HelloClient�ł́A�T�[�r�X��CGI�o�R�ŌĂяo�����[�h�ƁAOpenSOAP�T�[�o�[
�@�@�@�Ǘ��ŌĂяo�����[�h��OpenSOAPTransportSetURL()�̓�߂̈����ŋ�ʂ���
�@�@�@���邽�߁AOpenSOAP�T�[�o�Ǘ��̃T�[�r�X�Ăяo���Ƃ���K�v������܂��B
�@�@�@�f�t�H���g�ł̓R���p�C���X�C�b�`(#if 1)�ɂ��CGI���[�h�ɂȂ��Ă���̂ŁA
�@�@�@OpenSOAP�T�[�o�Ăяo���ɏC�����Ă���(#if 0�ɏC��)�r���h���Ă��������B
�@�@�@�C���Ώۃ\�[�X�̓p�b�P�[�W�� samples\Hello\HelloClient.c �ł��B

�@�@���T�[�r�X�̃��W���[���Ɋւ��āAwin32\OpenSOAPSamples\HelloService_cgi_DLL.dsp ���A
�@�@�@*_cgi_DLL.dsp �́AOpenSOAP�T�[�o�o�R�ł̃T�[�r�X�Ăяo���p�ł͂Ȃ��A
�@�@�@CGI�o�R�Œ��ڃT�[�r�X���Ăяo�����߂̂��̂Ȃ̂ŁA���ӂ��K�v�ł��B
�@�@�@win32\OpenSOAPSampes\OpenSOAPSamples.dsw���g���Ĉꊇ�r���h�Ȃǂ��s����
�@�@�@�ꍇ�́ACGI�p�T�[�r�X�ł͂Ȃ��A�T�[�o�[�p�T�[�r�X�����r���h���쐬��������
�@�@�@���������B

�i�Q�jSSML�t�@�C���ɂ��T�[�r�X��o�^����B

�@�@�p�b�P�[�W�� samples\Hello\Hello.ssml �t�@�C��������̃f�B���N�g��
�@�@(server.conf�ɂĐݒ�)�ɃR�s�[���A�T�[�r�X�̃C���X�g�[���p�X���C����A
�@�@OpenSOAP�T�[�o�v���Z�X���ċN������B

�@�@�C���O�F
    <StdIO>
        <exec prog='/usr/local/opensoap/services/Hello/HelloService'/>
    </StdIO>

�@�@�C����F
    <StdIO>
        <exec prog='/opensoap/user/bin/HelloService'/>
    </StdIO>

�i�R�j�T���v���̎��s

�@�@cmd.exe��
�@�@cmd.exe���N�����A�R�}���h�v�����v�g���� HelloClient ���N������B

�@�@��j
     > HelloClient OpenSOAP


------
�g���u���V���[�e�B���O�F
------
�@���삪���Ғʂ�ɓ����Ȃ��ꍇ�͈ȉ��̃|�C���g���m�F���Ă��������B

�i�P�j�V�X�e���� PATH ���������ݒ肳��Ă��邩�B
�@�@�f�t�H���g�ł́A�ȉ��̃p�X���ǉ�����Ă���K�v������B
    C:\libxml2\bin;C:\openssl\bin;C:\opensoap\bin;C:\opensoap\user\bin

�i�Q�jserver.conf ���������ꏊ�ɒu����Ă��邩�A�܂����̓��e�ɊԈႢ���Ȃ����B
�@�@�f�t�H���g�ł́AC:\opensoap\etc �ȉ��ɒu�����K�v������܂��B
�@�@���O�̏o�͐��A�X�v�[���f�B���N�g���ASSML�t�@�C���̎Q�Ɛ�Ȃǂ��A�������
�@�@�ł́A/usr/local/opensoap/...�ɂȂ��Ă��邽�߁A/opensoap/...���Ɋ���ύX
�@�@���Ă���ꍇ�́A�����ɍ��킹�ďC������K�v������B
�@�@�܂��A�w�肳��Ă���f�B���N�g�������݂��Ă���K�v������B

�i�R�jSSML�t�@�C���͎Q�Ɛ�ɒu����Ă��邩�A�܂����e�͐��������B
�@�@SSML�t�@�C���́AC:\opensoap\etc\server.conf�Ŏw�肳��Ă���f�B���N�g����
�@�@�u���K�v������܂��B
�@�@�܂��ASSML�t�@�C�����̃T�[�r�X�̎��s���W���[���̃p�X���������w�肳��Ă���
�@�@�K�v������܂��B
�@�@�@��j
    <StdIO>
        <exec prog='/opensoap/user/bin/HelloService'/>
    </StdIO>

�i�S�j�T�[�r�X�̎��s���W���[���͐������쐬����Ă��邩�B
�@�@CGI�Ăяo���p�̃T�[�r�X���g���Ă���ꍇ�́A�T�[�o�o�R�ł͐���������
�@�@���܂���B

�i�T�jApache HTTP�T�[�o���N�����Ă��邩�B
�@�@�N�����Ă��Ȃ��ꍇ�́AApache HTTP�T�[�o���N�����Ă��������B
