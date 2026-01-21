// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPolicyResponseBody() = default ;
    GetPolicyResponseBody(const GetPolicyResponseBody &) = default ;
    GetPolicyResponseBody(GetPolicyResponseBody &&) = default ;
    GetPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyResponseBody() = default ;
    GetPolicyResponseBody& operator=(const GetPolicyResponseBody &) = default ;
    GetPolicyResponseBody& operator=(GetPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policy& obj) { 
        DARABONBA_PTR_TO_JSON(AccessTimeRangeConfig, accessTimeRangeConfig_);
        DARABONBA_PTR_TO_JSON(ApprovalConfig, approvalConfig_);
        DARABONBA_PTR_TO_JSON(CommandConfig, commandConfig_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(IPAclConfig, IPAclConfig_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(ProtocolConfig, protocolConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Policy& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessTimeRangeConfig, accessTimeRangeConfig_);
        DARABONBA_PTR_FROM_JSON(ApprovalConfig, approvalConfig_);
        DARABONBA_PTR_FROM_JSON(CommandConfig, commandConfig_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(IPAclConfig, IPAclConfig_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(ProtocolConfig, protocolConfig_);
      };
      Policy() = default ;
      Policy(const Policy &) = default ;
      Policy(Policy &&) = default ;
      Policy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policy() = default ;
      Policy& operator=(const Policy &) = default ;
      Policy& operator=(Policy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProtocolConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProtocolConfig& obj) { 
          DARABONBA_PTR_TO_JSON(RDP, RDP_);
          DARABONBA_PTR_TO_JSON(SSH, SSH_);
        };
        friend void from_json(const Darabonba::Json& j, ProtocolConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(RDP, RDP_);
          DARABONBA_PTR_FROM_JSON(SSH, SSH_);
        };
        ProtocolConfig() = default ;
        ProtocolConfig(const ProtocolConfig &) = default ;
        ProtocolConfig(ProtocolConfig &&) = default ;
        ProtocolConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProtocolConfig() = default ;
        ProtocolConfig& operator=(const ProtocolConfig &) = default ;
        ProtocolConfig& operator=(ProtocolConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SSH : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SSH& obj) { 
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
          friend void from_json(const Darabonba::Json& j, SSH& obj) { 
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
          SSH() = default ;
          SSH(const SSH &) = default ;
          SSH(SSH &&) = default ;
          SSH(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SSH() = default ;
          SSH& operator=(const SSH &) = default ;
          SSH& operator=(SSH &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->execCommand_ == nullptr
        && this->SFTPChannel_ == nullptr && this->SFTPDownloadFile_ == nullptr && this->SFTPMkdir_ == nullptr && this->SFTPRemoveFile_ == nullptr && this->SFTPRenameFile_ == nullptr
        && this->SFTPRmdir_ == nullptr && this->SFTPUploadFile_ == nullptr && this->SSHChannel_ == nullptr && this->x11Forwarding_ == nullptr; };
          // execCommand Field Functions 
          bool hasExecCommand() const { return this->execCommand_ != nullptr;};
          void deleteExecCommand() { this->execCommand_ = nullptr;};
          inline string getExecCommand() const { DARABONBA_PTR_GET_DEFAULT(execCommand_, "") };
          inline SSH& setExecCommand(string execCommand) { DARABONBA_PTR_SET_VALUE(execCommand_, execCommand) };


          // SFTPChannel Field Functions 
          bool hasSFTPChannel() const { return this->SFTPChannel_ != nullptr;};
          void deleteSFTPChannel() { this->SFTPChannel_ = nullptr;};
          inline string getSFTPChannel() const { DARABONBA_PTR_GET_DEFAULT(SFTPChannel_, "") };
          inline SSH& setSFTPChannel(string SFTPChannel) { DARABONBA_PTR_SET_VALUE(SFTPChannel_, SFTPChannel) };


          // SFTPDownloadFile Field Functions 
          bool hasSFTPDownloadFile() const { return this->SFTPDownloadFile_ != nullptr;};
          void deleteSFTPDownloadFile() { this->SFTPDownloadFile_ = nullptr;};
          inline string getSFTPDownloadFile() const { DARABONBA_PTR_GET_DEFAULT(SFTPDownloadFile_, "") };
          inline SSH& setSFTPDownloadFile(string SFTPDownloadFile) { DARABONBA_PTR_SET_VALUE(SFTPDownloadFile_, SFTPDownloadFile) };


          // SFTPMkdir Field Functions 
          bool hasSFTPMkdir() const { return this->SFTPMkdir_ != nullptr;};
          void deleteSFTPMkdir() { this->SFTPMkdir_ = nullptr;};
          inline string getSFTPMkdir() const { DARABONBA_PTR_GET_DEFAULT(SFTPMkdir_, "") };
          inline SSH& setSFTPMkdir(string SFTPMkdir) { DARABONBA_PTR_SET_VALUE(SFTPMkdir_, SFTPMkdir) };


          // SFTPRemoveFile Field Functions 
          bool hasSFTPRemoveFile() const { return this->SFTPRemoveFile_ != nullptr;};
          void deleteSFTPRemoveFile() { this->SFTPRemoveFile_ = nullptr;};
          inline string getSFTPRemoveFile() const { DARABONBA_PTR_GET_DEFAULT(SFTPRemoveFile_, "") };
          inline SSH& setSFTPRemoveFile(string SFTPRemoveFile) { DARABONBA_PTR_SET_VALUE(SFTPRemoveFile_, SFTPRemoveFile) };


          // SFTPRenameFile Field Functions 
          bool hasSFTPRenameFile() const { return this->SFTPRenameFile_ != nullptr;};
          void deleteSFTPRenameFile() { this->SFTPRenameFile_ = nullptr;};
          inline string getSFTPRenameFile() const { DARABONBA_PTR_GET_DEFAULT(SFTPRenameFile_, "") };
          inline SSH& setSFTPRenameFile(string SFTPRenameFile) { DARABONBA_PTR_SET_VALUE(SFTPRenameFile_, SFTPRenameFile) };


          // SFTPRmdir Field Functions 
          bool hasSFTPRmdir() const { return this->SFTPRmdir_ != nullptr;};
          void deleteSFTPRmdir() { this->SFTPRmdir_ = nullptr;};
          inline string getSFTPRmdir() const { DARABONBA_PTR_GET_DEFAULT(SFTPRmdir_, "") };
          inline SSH& setSFTPRmdir(string SFTPRmdir) { DARABONBA_PTR_SET_VALUE(SFTPRmdir_, SFTPRmdir) };


          // SFTPUploadFile Field Functions 
          bool hasSFTPUploadFile() const { return this->SFTPUploadFile_ != nullptr;};
          void deleteSFTPUploadFile() { this->SFTPUploadFile_ = nullptr;};
          inline string getSFTPUploadFile() const { DARABONBA_PTR_GET_DEFAULT(SFTPUploadFile_, "") };
          inline SSH& setSFTPUploadFile(string SFTPUploadFile) { DARABONBA_PTR_SET_VALUE(SFTPUploadFile_, SFTPUploadFile) };


          // SSHChannel Field Functions 
          bool hasSSHChannel() const { return this->SSHChannel_ != nullptr;};
          void deleteSSHChannel() { this->SSHChannel_ = nullptr;};
          inline string getSSHChannel() const { DARABONBA_PTR_GET_DEFAULT(SSHChannel_, "") };
          inline SSH& setSSHChannel(string SSHChannel) { DARABONBA_PTR_SET_VALUE(SSHChannel_, SSHChannel) };


          // x11Forwarding Field Functions 
          bool hasX11Forwarding() const { return this->x11Forwarding_ != nullptr;};
          void deleteX11Forwarding() { this->x11Forwarding_ = nullptr;};
          inline string getX11Forwarding() const { DARABONBA_PTR_GET_DEFAULT(x11Forwarding_, "") };
          inline SSH& setX11Forwarding(string x11Forwarding) { DARABONBA_PTR_SET_VALUE(x11Forwarding_, x11Forwarding) };


        protected:
          // Indicates whether remote command execution is enabled. Valid values:
          // 
          // *   Enable
          // *   Disable
          shared_ptr<string> execCommand_ {};
          // Indicates whether the SFTP channel option is enabled. Valid values:
          // 
          // *   Enable
          // *   Disable
          shared_ptr<string> SFTPChannel_ {};
          // Indicates whether file downloading is enabled in SFTP-based O\\&M. Valid values:
          // 
          // *   Enable
          // *   Disable
          shared_ptr<string> SFTPDownloadFile_ {};
          // Indicates whether folder creation is enabled in SFTP-based O\\&M. Valid values:
          // 
          // *   Enable
          // *   Disable
          shared_ptr<string> SFTPMkdir_ {};
          // Indicates whether file deletion is enabled in SFTP-based O\\&M. Valid values:
          // 
          // *   Enable
          // *   Disable
          shared_ptr<string> SFTPRemoveFile_ {};
          // Indicates whether file renaming is enabled in SFTP-based O\\&M. Valid values:
          // 
          // *   Enable
          // *   Disable
          shared_ptr<string> SFTPRenameFile_ {};
          // Indicates whether folder deletion is enabled in SFTP-based O\\&M. Valid values:
          // 
          // *   Enable
          // *   Disable
          shared_ptr<string> SFTPRmdir_ {};
          // Indicates whether file uploading is enabled in SFTP-based O\\&M. Valid values:
          // 
          // *   Enable
          // *   Disable
          shared_ptr<string> SFTPUploadFile_ {};
          // Indicates whether the SSH channel option is enabled. Valid values:
          // 
          // *   Enable
          // *   Disable
          shared_ptr<string> SSHChannel_ {};
          // Indicates whether X11 forwarding is enabled. Valid values:
          // 
          // *   Enable
          // *   Disable
          shared_ptr<string> x11Forwarding_ {};
        };

        class RDP : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RDP& obj) { 
            DARABONBA_PTR_TO_JSON(ClipboardDownload, clipboardDownload_);
            DARABONBA_PTR_TO_JSON(ClipboardUpload, clipboardUpload_);
            DARABONBA_PTR_TO_JSON(DiskRedirection, diskRedirection_);
            DARABONBA_PTR_TO_JSON(RecordKeyboard, recordKeyboard_);
          };
          friend void from_json(const Darabonba::Json& j, RDP& obj) { 
            DARABONBA_PTR_FROM_JSON(ClipboardDownload, clipboardDownload_);
            DARABONBA_PTR_FROM_JSON(ClipboardUpload, clipboardUpload_);
            DARABONBA_PTR_FROM_JSON(DiskRedirection, diskRedirection_);
            DARABONBA_PTR_FROM_JSON(RecordKeyboard, recordKeyboard_);
          };
          RDP() = default ;
          RDP(const RDP &) = default ;
          RDP(RDP &&) = default ;
          RDP(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RDP() = default ;
          RDP& operator=(const RDP &) = default ;
          RDP& operator=(RDP &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->clipboardDownload_ == nullptr
        && this->clipboardUpload_ == nullptr && this->diskRedirection_ == nullptr && this->recordKeyboard_ == nullptr; };
          // clipboardDownload Field Functions 
          bool hasClipboardDownload() const { return this->clipboardDownload_ != nullptr;};
          void deleteClipboardDownload() { this->clipboardDownload_ = nullptr;};
          inline string getClipboardDownload() const { DARABONBA_PTR_GET_DEFAULT(clipboardDownload_, "") };
          inline RDP& setClipboardDownload(string clipboardDownload) { DARABONBA_PTR_SET_VALUE(clipboardDownload_, clipboardDownload) };


          // clipboardUpload Field Functions 
          bool hasClipboardUpload() const { return this->clipboardUpload_ != nullptr;};
          void deleteClipboardUpload() { this->clipboardUpload_ = nullptr;};
          inline string getClipboardUpload() const { DARABONBA_PTR_GET_DEFAULT(clipboardUpload_, "") };
          inline RDP& setClipboardUpload(string clipboardUpload) { DARABONBA_PTR_SET_VALUE(clipboardUpload_, clipboardUpload) };


          // diskRedirection Field Functions 
          bool hasDiskRedirection() const { return this->diskRedirection_ != nullptr;};
          void deleteDiskRedirection() { this->diskRedirection_ = nullptr;};
          inline string getDiskRedirection() const { DARABONBA_PTR_GET_DEFAULT(diskRedirection_, "") };
          inline RDP& setDiskRedirection(string diskRedirection) { DARABONBA_PTR_SET_VALUE(diskRedirection_, diskRedirection) };


          // recordKeyboard Field Functions 
          bool hasRecordKeyboard() const { return this->recordKeyboard_ != nullptr;};
          void deleteRecordKeyboard() { this->recordKeyboard_ = nullptr;};
          inline string getRecordKeyboard() const { DARABONBA_PTR_GET_DEFAULT(recordKeyboard_, "") };
          inline RDP& setRecordKeyboard(string recordKeyboard) { DARABONBA_PTR_SET_VALUE(recordKeyboard_, recordKeyboard) };


        protected:
          // Indicates whether downloading from the clipboard is enabled. Valid values:
          // 
          // *   Enable
          // *   Disable
          shared_ptr<string> clipboardDownload_ {};
          // Indicates whether file uploading from the clipboard is enabled. Valid values:
          // 
          // *   Enable
          // *   Disable
          shared_ptr<string> clipboardUpload_ {};
          // Indicates whether driver mapping is enabled. Valid values:
          // 
          // *   Enable
          // *   Disable
          shared_ptr<string> diskRedirection_ {};
          // Indicates whether keyboard recording is enabled. Valid values:
          // 
          // *   Enable
          // *   Disable
          shared_ptr<string> recordKeyboard_ {};
        };

        virtual bool empty() const override { return this->RDP_ == nullptr
        && this->SSH_ == nullptr; };
        // RDP Field Functions 
        bool hasRDP() const { return this->RDP_ != nullptr;};
        void deleteRDP() { this->RDP_ = nullptr;};
        inline const ProtocolConfig::RDP & getRDP() const { DARABONBA_PTR_GET_CONST(RDP_, ProtocolConfig::RDP) };
        inline ProtocolConfig::RDP getRDP() { DARABONBA_PTR_GET(RDP_, ProtocolConfig::RDP) };
        inline ProtocolConfig& setRDP(const ProtocolConfig::RDP & rDP) { DARABONBA_PTR_SET_VALUE(RDP_, rDP) };
        inline ProtocolConfig& setRDP(ProtocolConfig::RDP && rDP) { DARABONBA_PTR_SET_RVALUE(RDP_, rDP) };


        // SSH Field Functions 
        bool hasSSH() const { return this->SSH_ != nullptr;};
        void deleteSSH() { this->SSH_ = nullptr;};
        inline const ProtocolConfig::SSH & getSSH() const { DARABONBA_PTR_GET_CONST(SSH_, ProtocolConfig::SSH) };
        inline ProtocolConfig::SSH getSSH() { DARABONBA_PTR_GET(SSH_, ProtocolConfig::SSH) };
        inline ProtocolConfig& setSSH(const ProtocolConfig::SSH & sSH) { DARABONBA_PTR_SET_VALUE(SSH_, sSH) };
        inline ProtocolConfig& setSSH(ProtocolConfig::SSH && sSH) { DARABONBA_PTR_SET_RVALUE(SSH_, sSH) };


      protected:
        // The configuration details of Remote Desktop Protocol (RDP) options.
        shared_ptr<ProtocolConfig::RDP> RDP_ {};
        // The configuration details of SSH and SSH File Transfer Protocol (SFTP) options.
        shared_ptr<ProtocolConfig::SSH> SSH_ {};
      };

      class IPAclConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IPAclConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AclType, aclType_);
          DARABONBA_PTR_TO_JSON(IPs, IPs_);
        };
        friend void from_json(const Darabonba::Json& j, IPAclConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AclType, aclType_);
          DARABONBA_PTR_FROM_JSON(IPs, IPs_);
        };
        IPAclConfig() = default ;
        IPAclConfig(const IPAclConfig &) = default ;
        IPAclConfig(IPAclConfig &&) = default ;
        IPAclConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IPAclConfig() = default ;
        IPAclConfig& operator=(const IPAclConfig &) = default ;
        IPAclConfig& operator=(IPAclConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aclType_ == nullptr
        && this->IPs_ == nullptr; };
        // aclType Field Functions 
        bool hasAclType() const { return this->aclType_ != nullptr;};
        void deleteAclType() { this->aclType_ = nullptr;};
        inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
        inline IPAclConfig& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


        // IPs Field Functions 
        bool hasIPs() const { return this->IPs_ != nullptr;};
        void deleteIPs() { this->IPs_ = nullptr;};
        inline const vector<string> & getIPs() const { DARABONBA_PTR_GET_CONST(IPs_, vector<string>) };
        inline vector<string> getIPs() { DARABONBA_PTR_GET(IPs_, vector<string>) };
        inline IPAclConfig& setIPs(const vector<string> & IPs) { DARABONBA_PTR_SET_VALUE(IPs_, IPs) };
        inline IPAclConfig& setIPs(vector<string> && IPs) { DARABONBA_PTR_SET_RVALUE(IPs_, IPs) };


      protected:
        // The mode of access control on source IP addresses. Valid values:
        // 
        // *   white: whitelist mode.
        // *   black: blacklist mode.
        shared_ptr<string> aclType_ {};
        // The IP addresses from which logons are not allowed.
        shared_ptr<vector<string>> IPs_ {};
      };

      class CommandConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CommandConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Approval, approval_);
          DARABONBA_PTR_TO_JSON(Deny, deny_);
        };
        friend void from_json(const Darabonba::Json& j, CommandConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Approval, approval_);
          DARABONBA_PTR_FROM_JSON(Deny, deny_);
        };
        CommandConfig() = default ;
        CommandConfig(const CommandConfig &) = default ;
        CommandConfig(CommandConfig &&) = default ;
        CommandConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CommandConfig() = default ;
        CommandConfig& operator=(const CommandConfig &) = default ;
        CommandConfig& operator=(CommandConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Deny : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Deny& obj) { 
            DARABONBA_PTR_TO_JSON(AclType, aclType_);
            DARABONBA_PTR_TO_JSON(Commands, commands_);
          };
          friend void from_json(const Darabonba::Json& j, Deny& obj) { 
            DARABONBA_PTR_FROM_JSON(AclType, aclType_);
            DARABONBA_PTR_FROM_JSON(Commands, commands_);
          };
          Deny() = default ;
          Deny(const Deny &) = default ;
          Deny(Deny &&) = default ;
          Deny(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Deny() = default ;
          Deny& operator=(const Deny &) = default ;
          Deny& operator=(Deny &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->aclType_ == nullptr
        && this->commands_ == nullptr; };
          // aclType Field Functions 
          bool hasAclType() const { return this->aclType_ != nullptr;};
          void deleteAclType() { this->aclType_ = nullptr;};
          inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
          inline Deny& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


          // commands Field Functions 
          bool hasCommands() const { return this->commands_ != nullptr;};
          void deleteCommands() { this->commands_ = nullptr;};
          inline const vector<string> & getCommands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
          inline vector<string> getCommands() { DARABONBA_PTR_GET(commands_, vector<string>) };
          inline Deny& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
          inline Deny& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


        protected:
          // The type of command control. Valid values:
          // 
          // *   white: whitelist mode.
          // *   black: blacklist mode.
          shared_ptr<string> aclType_ {};
          // An array of controlled commands.
          shared_ptr<vector<string>> commands_ {};
        };

        class Approval : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Approval& obj) { 
            DARABONBA_PTR_TO_JSON(Commands, commands_);
          };
          friend void from_json(const Darabonba::Json& j, Approval& obj) { 
            DARABONBA_PTR_FROM_JSON(Commands, commands_);
          };
          Approval() = default ;
          Approval(const Approval &) = default ;
          Approval(Approval &&) = default ;
          Approval(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Approval() = default ;
          Approval& operator=(const Approval &) = default ;
          Approval& operator=(Approval &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->commands_ == nullptr; };
          // commands Field Functions 
          bool hasCommands() const { return this->commands_ != nullptr;};
          void deleteCommands() { this->commands_ = nullptr;};
          inline const vector<string> & getCommands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
          inline vector<string> getCommands() { DARABONBA_PTR_GET(commands_, vector<string>) };
          inline Approval& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
          inline Approval& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


        protected:
          // An array of commands that can be run only after approval.
          shared_ptr<vector<string>> commands_ {};
        };

        virtual bool empty() const override { return this->approval_ == nullptr
        && this->deny_ == nullptr; };
        // approval Field Functions 
        bool hasApproval() const { return this->approval_ != nullptr;};
        void deleteApproval() { this->approval_ = nullptr;};
        inline const CommandConfig::Approval & getApproval() const { DARABONBA_PTR_GET_CONST(approval_, CommandConfig::Approval) };
        inline CommandConfig::Approval getApproval() { DARABONBA_PTR_GET(approval_, CommandConfig::Approval) };
        inline CommandConfig& setApproval(const CommandConfig::Approval & approval) { DARABONBA_PTR_SET_VALUE(approval_, approval) };
        inline CommandConfig& setApproval(CommandConfig::Approval && approval) { DARABONBA_PTR_SET_RVALUE(approval_, approval) };


        // deny Field Functions 
        bool hasDeny() const { return this->deny_ != nullptr;};
        void deleteDeny() { this->deny_ = nullptr;};
        inline const CommandConfig::Deny & getDeny() const { DARABONBA_PTR_GET_CONST(deny_, CommandConfig::Deny) };
        inline CommandConfig::Deny getDeny() { DARABONBA_PTR_GET(deny_, CommandConfig::Deny) };
        inline CommandConfig& setDeny(const CommandConfig::Deny & deny) { DARABONBA_PTR_SET_VALUE(deny_, deny) };
        inline CommandConfig& setDeny(CommandConfig::Deny && deny) { DARABONBA_PTR_SET_RVALUE(deny_, deny) };


      protected:
        // The details of the command approval settings.
        shared_ptr<CommandConfig::Approval> approval_ {};
        // The details of the command control setting.
        shared_ptr<CommandConfig::Deny> deny_ {};
      };

      class ApprovalConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApprovalConfig& obj) { 
          DARABONBA_PTR_TO_JSON(SwitchStatus, switchStatus_);
        };
        friend void from_json(const Darabonba::Json& j, ApprovalConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(SwitchStatus, switchStatus_);
        };
        ApprovalConfig() = default ;
        ApprovalConfig(const ApprovalConfig &) = default ;
        ApprovalConfig(ApprovalConfig &&) = default ;
        ApprovalConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApprovalConfig() = default ;
        ApprovalConfig& operator=(const ApprovalConfig &) = default ;
        ApprovalConfig& operator=(ApprovalConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->switchStatus_ == nullptr; };
        // switchStatus Field Functions 
        bool hasSwitchStatus() const { return this->switchStatus_ != nullptr;};
        void deleteSwitchStatus() { this->switchStatus_ = nullptr;};
        inline string getSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(switchStatus_, "") };
        inline ApprovalConfig& setSwitchStatus(string switchStatus) { DARABONBA_PTR_SET_VALUE(switchStatus_, switchStatus) };


      protected:
        // Indicates whether O\\&M approval is enabled in the control policy. Valid values:
        // 
        // *   **On**: O\\&M approval is enabled.
        // *   **Off**: O\\&M approval is disabled.
        shared_ptr<string> switchStatus_ {};
      };

      class AccessTimeRangeConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccessTimeRangeConfig& obj) { 
          DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
        };
        friend void from_json(const Darabonba::Json& j, AccessTimeRangeConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
        };
        AccessTimeRangeConfig() = default ;
        AccessTimeRangeConfig(const AccessTimeRangeConfig &) = default ;
        AccessTimeRangeConfig(AccessTimeRangeConfig &&) = default ;
        AccessTimeRangeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccessTimeRangeConfig() = default ;
        AccessTimeRangeConfig& operator=(const AccessTimeRangeConfig &) = default ;
        AccessTimeRangeConfig& operator=(AccessTimeRangeConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EffectiveTime : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EffectiveTime& obj) { 
            DARABONBA_PTR_TO_JSON(Days, days_);
            DARABONBA_PTR_TO_JSON(Hours, hours_);
          };
          friend void from_json(const Darabonba::Json& j, EffectiveTime& obj) { 
            DARABONBA_PTR_FROM_JSON(Days, days_);
            DARABONBA_PTR_FROM_JSON(Hours, hours_);
          };
          EffectiveTime() = default ;
          EffectiveTime(const EffectiveTime &) = default ;
          EffectiveTime(EffectiveTime &&) = default ;
          EffectiveTime(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EffectiveTime() = default ;
          EffectiveTime& operator=(const EffectiveTime &) = default ;
          EffectiveTime& operator=(EffectiveTime &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->days_ == nullptr
        && this->hours_ == nullptr; };
          // days Field Functions 
          bool hasDays() const { return this->days_ != nullptr;};
          void deleteDays() { this->days_ = nullptr;};
          inline const vector<string> & getDays() const { DARABONBA_PTR_GET_CONST(days_, vector<string>) };
          inline vector<string> getDays() { DARABONBA_PTR_GET(days_, vector<string>) };
          inline EffectiveTime& setDays(const vector<string> & days) { DARABONBA_PTR_SET_VALUE(days_, days) };
          inline EffectiveTime& setDays(vector<string> && days) { DARABONBA_PTR_SET_RVALUE(days_, days) };


          // hours Field Functions 
          bool hasHours() const { return this->hours_ != nullptr;};
          void deleteHours() { this->hours_ = nullptr;};
          inline const vector<string> & getHours() const { DARABONBA_PTR_GET_CONST(hours_, vector<string>) };
          inline vector<string> getHours() { DARABONBA_PTR_GET(hours_, vector<string>) };
          inline EffectiveTime& setHours(const vector<string> & hours) { DARABONBA_PTR_SET_VALUE(hours_, hours) };
          inline EffectiveTime& setHours(vector<string> && hours) { DARABONBA_PTR_SET_RVALUE(hours_, hours) };


        protected:
          // The days of a week on which logons are allowed.
          shared_ptr<vector<string>> days_ {};
          // The time periods during which logons are allowed.
          shared_ptr<vector<string>> hours_ {};
        };

        virtual bool empty() const override { return this->effectiveTime_ == nullptr; };
        // effectiveTime Field Functions 
        bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
        void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
        inline const vector<AccessTimeRangeConfig::EffectiveTime> & getEffectiveTime() const { DARABONBA_PTR_GET_CONST(effectiveTime_, vector<AccessTimeRangeConfig::EffectiveTime>) };
        inline vector<AccessTimeRangeConfig::EffectiveTime> getEffectiveTime() { DARABONBA_PTR_GET(effectiveTime_, vector<AccessTimeRangeConfig::EffectiveTime>) };
        inline AccessTimeRangeConfig& setEffectiveTime(const vector<AccessTimeRangeConfig::EffectiveTime> & effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };
        inline AccessTimeRangeConfig& setEffectiveTime(vector<AccessTimeRangeConfig::EffectiveTime> && effectiveTime) { DARABONBA_PTR_SET_RVALUE(effectiveTime_, effectiveTime) };


      protected:
        // The details of the periods during which logons are allowed.
        shared_ptr<vector<AccessTimeRangeConfig::EffectiveTime>> effectiveTime_ {};
      };

      virtual bool empty() const override { return this->accessTimeRangeConfig_ == nullptr
        && this->approvalConfig_ == nullptr && this->commandConfig_ == nullptr && this->comment_ == nullptr && this->IPAclConfig_ == nullptr && this->policyId_ == nullptr
        && this->policyName_ == nullptr && this->priority_ == nullptr && this->protocolConfig_ == nullptr; };
      // accessTimeRangeConfig Field Functions 
      bool hasAccessTimeRangeConfig() const { return this->accessTimeRangeConfig_ != nullptr;};
      void deleteAccessTimeRangeConfig() { this->accessTimeRangeConfig_ = nullptr;};
      inline const Policy::AccessTimeRangeConfig & getAccessTimeRangeConfig() const { DARABONBA_PTR_GET_CONST(accessTimeRangeConfig_, Policy::AccessTimeRangeConfig) };
      inline Policy::AccessTimeRangeConfig getAccessTimeRangeConfig() { DARABONBA_PTR_GET(accessTimeRangeConfig_, Policy::AccessTimeRangeConfig) };
      inline Policy& setAccessTimeRangeConfig(const Policy::AccessTimeRangeConfig & accessTimeRangeConfig) { DARABONBA_PTR_SET_VALUE(accessTimeRangeConfig_, accessTimeRangeConfig) };
      inline Policy& setAccessTimeRangeConfig(Policy::AccessTimeRangeConfig && accessTimeRangeConfig) { DARABONBA_PTR_SET_RVALUE(accessTimeRangeConfig_, accessTimeRangeConfig) };


      // approvalConfig Field Functions 
      bool hasApprovalConfig() const { return this->approvalConfig_ != nullptr;};
      void deleteApprovalConfig() { this->approvalConfig_ = nullptr;};
      inline const Policy::ApprovalConfig & getApprovalConfig() const { DARABONBA_PTR_GET_CONST(approvalConfig_, Policy::ApprovalConfig) };
      inline Policy::ApprovalConfig getApprovalConfig() { DARABONBA_PTR_GET(approvalConfig_, Policy::ApprovalConfig) };
      inline Policy& setApprovalConfig(const Policy::ApprovalConfig & approvalConfig) { DARABONBA_PTR_SET_VALUE(approvalConfig_, approvalConfig) };
      inline Policy& setApprovalConfig(Policy::ApprovalConfig && approvalConfig) { DARABONBA_PTR_SET_RVALUE(approvalConfig_, approvalConfig) };


      // commandConfig Field Functions 
      bool hasCommandConfig() const { return this->commandConfig_ != nullptr;};
      void deleteCommandConfig() { this->commandConfig_ = nullptr;};
      inline const Policy::CommandConfig & getCommandConfig() const { DARABONBA_PTR_GET_CONST(commandConfig_, Policy::CommandConfig) };
      inline Policy::CommandConfig getCommandConfig() { DARABONBA_PTR_GET(commandConfig_, Policy::CommandConfig) };
      inline Policy& setCommandConfig(const Policy::CommandConfig & commandConfig) { DARABONBA_PTR_SET_VALUE(commandConfig_, commandConfig) };
      inline Policy& setCommandConfig(Policy::CommandConfig && commandConfig) { DARABONBA_PTR_SET_RVALUE(commandConfig_, commandConfig) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Policy& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // IPAclConfig Field Functions 
      bool hasIPAclConfig() const { return this->IPAclConfig_ != nullptr;};
      void deleteIPAclConfig() { this->IPAclConfig_ = nullptr;};
      inline const Policy::IPAclConfig & getIPAclConfig() const { DARABONBA_PTR_GET_CONST(IPAclConfig_, Policy::IPAclConfig) };
      inline Policy::IPAclConfig getIPAclConfig() { DARABONBA_PTR_GET(IPAclConfig_, Policy::IPAclConfig) };
      inline Policy& setIPAclConfig(const Policy::IPAclConfig & iPAclConfig) { DARABONBA_PTR_SET_VALUE(IPAclConfig_, iPAclConfig) };
      inline Policy& setIPAclConfig(Policy::IPAclConfig && iPAclConfig) { DARABONBA_PTR_SET_RVALUE(IPAclConfig_, iPAclConfig) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Policy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline Policy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
      inline Policy& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // protocolConfig Field Functions 
      bool hasProtocolConfig() const { return this->protocolConfig_ != nullptr;};
      void deleteProtocolConfig() { this->protocolConfig_ = nullptr;};
      inline const Policy::ProtocolConfig & getProtocolConfig() const { DARABONBA_PTR_GET_CONST(protocolConfig_, Policy::ProtocolConfig) };
      inline Policy::ProtocolConfig getProtocolConfig() { DARABONBA_PTR_GET(protocolConfig_, Policy::ProtocolConfig) };
      inline Policy& setProtocolConfig(const Policy::ProtocolConfig & protocolConfig) { DARABONBA_PTR_SET_VALUE(protocolConfig_, protocolConfig) };
      inline Policy& setProtocolConfig(Policy::ProtocolConfig && protocolConfig) { DARABONBA_PTR_SET_RVALUE(protocolConfig_, protocolConfig) };


    protected:
      // The details of the logon period restrictions.
      shared_ptr<Policy::AccessTimeRangeConfig> accessTimeRangeConfig_ {};
      // The O\\&M approval setting.
      shared_ptr<Policy::ApprovalConfig> approvalConfig_ {};
      // The details of the command policy.
      shared_ptr<Policy::CommandConfig> commandConfig_ {};
      // The description of the control policy.
      shared_ptr<string> comment_ {};
      // The access control settings on source IP addresses.
      shared_ptr<Policy::IPAclConfig> IPAclConfig_ {};
      // The ID of the control policy.
      shared_ptr<string> policyId_ {};
      // The name of the control policy.
      shared_ptr<string> policyName_ {};
      // The priority of the control policy. A smaller value indicates a higher priority.
      shared_ptr<int64_t> priority_ {};
      // The details of protocol control.
      shared_ptr<Policy::ProtocolConfig> protocolConfig_ {};
    };

    virtual bool empty() const override { return this->policy_ == nullptr
        && this->requestId_ == nullptr; };
    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const GetPolicyResponseBody::Policy & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, GetPolicyResponseBody::Policy) };
    inline GetPolicyResponseBody::Policy getPolicy() { DARABONBA_PTR_GET(policy_, GetPolicyResponseBody::Policy) };
    inline GetPolicyResponseBody& setPolicy(const GetPolicyResponseBody::Policy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline GetPolicyResponseBody& setPolicy(GetPolicyResponseBody::Policy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the control policy.
    shared_ptr<GetPolicyResponseBody::Policy> policy_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
