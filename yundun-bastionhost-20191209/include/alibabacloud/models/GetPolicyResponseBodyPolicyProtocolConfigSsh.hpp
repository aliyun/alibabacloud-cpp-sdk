// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICYPROTOCOLCONFIGSSH_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICYPROTOCOLCONFIGSSH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetPolicyResponseBodyPolicyProtocolConfigSSH : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyResponseBodyPolicyProtocolConfigSSH& obj) { 
      DARABONBA_PTR_TO_JSON(ExecCommand, execCommand_);
      DARABONBA_PTR_TO_JSON(SFTPChannel, SFTPChannel_);
      DARABONBA_PTR_TO_JSON(SFTPDownloadFile, SFTPDownloadFile_);
      DARABONBA_PTR_TO_JSON(SFTPMkdir, SFTPMkdir_);
      DARABONBA_PTR_TO_JSON(SFTPRemoveFile, SFTPRemoveFile_);
      DARABONBA_PTR_TO_JSON(SFTPRenameFile, SFTPRenameFile_);
      DARABONBA_PTR_TO_JSON(SFTPRmdir, SFTPRmdir_);
      DARABONBA_PTR_TO_JSON(SFTPUploadFile, SFTPUploadFile_);
      DARABONBA_PTR_TO_JSON(SSHChannel, SSHChannel_);
      DARABONBA_PTR_TO_JSON(X11Forwarding, x11Forwarding_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyResponseBodyPolicyProtocolConfigSSH& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecCommand, execCommand_);
      DARABONBA_PTR_FROM_JSON(SFTPChannel, SFTPChannel_);
      DARABONBA_PTR_FROM_JSON(SFTPDownloadFile, SFTPDownloadFile_);
      DARABONBA_PTR_FROM_JSON(SFTPMkdir, SFTPMkdir_);
      DARABONBA_PTR_FROM_JSON(SFTPRemoveFile, SFTPRemoveFile_);
      DARABONBA_PTR_FROM_JSON(SFTPRenameFile, SFTPRenameFile_);
      DARABONBA_PTR_FROM_JSON(SFTPRmdir, SFTPRmdir_);
      DARABONBA_PTR_FROM_JSON(SFTPUploadFile, SFTPUploadFile_);
      DARABONBA_PTR_FROM_JSON(SSHChannel, SSHChannel_);
      DARABONBA_PTR_FROM_JSON(X11Forwarding, x11Forwarding_);
    };
    GetPolicyResponseBodyPolicyProtocolConfigSSH() = default ;
    GetPolicyResponseBodyPolicyProtocolConfigSSH(const GetPolicyResponseBodyPolicyProtocolConfigSSH &) = default ;
    GetPolicyResponseBodyPolicyProtocolConfigSSH(GetPolicyResponseBodyPolicyProtocolConfigSSH &&) = default ;
    GetPolicyResponseBodyPolicyProtocolConfigSSH(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyResponseBodyPolicyProtocolConfigSSH() = default ;
    GetPolicyResponseBodyPolicyProtocolConfigSSH& operator=(const GetPolicyResponseBodyPolicyProtocolConfigSSH &) = default ;
    GetPolicyResponseBodyPolicyProtocolConfigSSH& operator=(GetPolicyResponseBodyPolicyProtocolConfigSSH &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->execCommand_ == nullptr
        && return this->SFTPChannel_ == nullptr && return this->SFTPDownloadFile_ == nullptr && return this->SFTPMkdir_ == nullptr && return this->SFTPRemoveFile_ == nullptr && return this->SFTPRenameFile_ == nullptr
        && return this->SFTPRmdir_ == nullptr && return this->SFTPUploadFile_ == nullptr && return this->SSHChannel_ == nullptr && return this->x11Forwarding_ == nullptr; };
    // execCommand Field Functions 
    bool hasExecCommand() const { return this->execCommand_ != nullptr;};
    void deleteExecCommand() { this->execCommand_ = nullptr;};
    inline string execCommand() const { DARABONBA_PTR_GET_DEFAULT(execCommand_, "") };
    inline GetPolicyResponseBodyPolicyProtocolConfigSSH& setExecCommand(string execCommand) { DARABONBA_PTR_SET_VALUE(execCommand_, execCommand) };


    // SFTPChannel Field Functions 
    bool hasSFTPChannel() const { return this->SFTPChannel_ != nullptr;};
    void deleteSFTPChannel() { this->SFTPChannel_ = nullptr;};
    inline string SFTPChannel() const { DARABONBA_PTR_GET_DEFAULT(SFTPChannel_, "") };
    inline GetPolicyResponseBodyPolicyProtocolConfigSSH& setSFTPChannel(string SFTPChannel) { DARABONBA_PTR_SET_VALUE(SFTPChannel_, SFTPChannel) };


    // SFTPDownloadFile Field Functions 
    bool hasSFTPDownloadFile() const { return this->SFTPDownloadFile_ != nullptr;};
    void deleteSFTPDownloadFile() { this->SFTPDownloadFile_ = nullptr;};
    inline string SFTPDownloadFile() const { DARABONBA_PTR_GET_DEFAULT(SFTPDownloadFile_, "") };
    inline GetPolicyResponseBodyPolicyProtocolConfigSSH& setSFTPDownloadFile(string SFTPDownloadFile) { DARABONBA_PTR_SET_VALUE(SFTPDownloadFile_, SFTPDownloadFile) };


    // SFTPMkdir Field Functions 
    bool hasSFTPMkdir() const { return this->SFTPMkdir_ != nullptr;};
    void deleteSFTPMkdir() { this->SFTPMkdir_ = nullptr;};
    inline string SFTPMkdir() const { DARABONBA_PTR_GET_DEFAULT(SFTPMkdir_, "") };
    inline GetPolicyResponseBodyPolicyProtocolConfigSSH& setSFTPMkdir(string SFTPMkdir) { DARABONBA_PTR_SET_VALUE(SFTPMkdir_, SFTPMkdir) };


    // SFTPRemoveFile Field Functions 
    bool hasSFTPRemoveFile() const { return this->SFTPRemoveFile_ != nullptr;};
    void deleteSFTPRemoveFile() { this->SFTPRemoveFile_ = nullptr;};
    inline string SFTPRemoveFile() const { DARABONBA_PTR_GET_DEFAULT(SFTPRemoveFile_, "") };
    inline GetPolicyResponseBodyPolicyProtocolConfigSSH& setSFTPRemoveFile(string SFTPRemoveFile) { DARABONBA_PTR_SET_VALUE(SFTPRemoveFile_, SFTPRemoveFile) };


    // SFTPRenameFile Field Functions 
    bool hasSFTPRenameFile() const { return this->SFTPRenameFile_ != nullptr;};
    void deleteSFTPRenameFile() { this->SFTPRenameFile_ = nullptr;};
    inline string SFTPRenameFile() const { DARABONBA_PTR_GET_DEFAULT(SFTPRenameFile_, "") };
    inline GetPolicyResponseBodyPolicyProtocolConfigSSH& setSFTPRenameFile(string SFTPRenameFile) { DARABONBA_PTR_SET_VALUE(SFTPRenameFile_, SFTPRenameFile) };


    // SFTPRmdir Field Functions 
    bool hasSFTPRmdir() const { return this->SFTPRmdir_ != nullptr;};
    void deleteSFTPRmdir() { this->SFTPRmdir_ = nullptr;};
    inline string SFTPRmdir() const { DARABONBA_PTR_GET_DEFAULT(SFTPRmdir_, "") };
    inline GetPolicyResponseBodyPolicyProtocolConfigSSH& setSFTPRmdir(string SFTPRmdir) { DARABONBA_PTR_SET_VALUE(SFTPRmdir_, SFTPRmdir) };


    // SFTPUploadFile Field Functions 
    bool hasSFTPUploadFile() const { return this->SFTPUploadFile_ != nullptr;};
    void deleteSFTPUploadFile() { this->SFTPUploadFile_ = nullptr;};
    inline string SFTPUploadFile() const { DARABONBA_PTR_GET_DEFAULT(SFTPUploadFile_, "") };
    inline GetPolicyResponseBodyPolicyProtocolConfigSSH& setSFTPUploadFile(string SFTPUploadFile) { DARABONBA_PTR_SET_VALUE(SFTPUploadFile_, SFTPUploadFile) };


    // SSHChannel Field Functions 
    bool hasSSHChannel() const { return this->SSHChannel_ != nullptr;};
    void deleteSSHChannel() { this->SSHChannel_ = nullptr;};
    inline string SSHChannel() const { DARABONBA_PTR_GET_DEFAULT(SSHChannel_, "") };
    inline GetPolicyResponseBodyPolicyProtocolConfigSSH& setSSHChannel(string SSHChannel) { DARABONBA_PTR_SET_VALUE(SSHChannel_, SSHChannel) };


    // x11Forwarding Field Functions 
    bool hasX11Forwarding() const { return this->x11Forwarding_ != nullptr;};
    void deleteX11Forwarding() { this->x11Forwarding_ = nullptr;};
    inline string x11Forwarding() const { DARABONBA_PTR_GET_DEFAULT(x11Forwarding_, "") };
    inline GetPolicyResponseBodyPolicyProtocolConfigSSH& setX11Forwarding(string x11Forwarding) { DARABONBA_PTR_SET_VALUE(x11Forwarding_, x11Forwarding) };


  protected:
    // Indicates whether remote command execution is enabled. Valid values:
    // 
    // *   Enable
    // *   Disable
    std::shared_ptr<string> execCommand_ = nullptr;
    // Indicates whether the SFTP channel option is enabled. Valid values:
    // 
    // *   Enable
    // *   Disable
    std::shared_ptr<string> SFTPChannel_ = nullptr;
    // Indicates whether file downloading is enabled in SFTP-based O\\&M. Valid values:
    // 
    // *   Enable
    // *   Disable
    std::shared_ptr<string> SFTPDownloadFile_ = nullptr;
    // Indicates whether folder creation is enabled in SFTP-based O\\&M. Valid values:
    // 
    // *   Enable
    // *   Disable
    std::shared_ptr<string> SFTPMkdir_ = nullptr;
    // Indicates whether file deletion is enabled in SFTP-based O\\&M. Valid values:
    // 
    // *   Enable
    // *   Disable
    std::shared_ptr<string> SFTPRemoveFile_ = nullptr;
    // Indicates whether file renaming is enabled in SFTP-based O\\&M. Valid values:
    // 
    // *   Enable
    // *   Disable
    std::shared_ptr<string> SFTPRenameFile_ = nullptr;
    // Indicates whether folder deletion is enabled in SFTP-based O\\&M. Valid values:
    // 
    // *   Enable
    // *   Disable
    std::shared_ptr<string> SFTPRmdir_ = nullptr;
    // Indicates whether file uploading is enabled in SFTP-based O\\&M. Valid values:
    // 
    // *   Enable
    // *   Disable
    std::shared_ptr<string> SFTPUploadFile_ = nullptr;
    // Indicates whether the SSH channel option is enabled. Valid values:
    // 
    // *   Enable
    // *   Disable
    std::shared_ptr<string> SSHChannel_ = nullptr;
    // Indicates whether X11 forwarding is enabled. Valid values:
    // 
    // *   Enable
    // *   Disable
    std::shared_ptr<string> x11Forwarding_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
