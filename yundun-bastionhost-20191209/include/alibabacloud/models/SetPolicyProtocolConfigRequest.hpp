// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYPROTOCOLCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYPROTOCOLCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyProtocolConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyProtocolConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProtocolConfig, protocolConfig_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyProtocolConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProtocolConfig, protocolConfig_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetPolicyProtocolConfigRequest() = default ;
    SetPolicyProtocolConfigRequest(const SetPolicyProtocolConfigRequest &) = default ;
    SetPolicyProtocolConfigRequest(SetPolicyProtocolConfigRequest &&) = default ;
    SetPolicyProtocolConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyProtocolConfigRequest() = default ;
    SetPolicyProtocolConfigRequest& operator=(const SetPolicyProtocolConfigRequest &) = default ;
    SetPolicyProtocolConfigRequest& operator=(SetPolicyProtocolConfigRequest &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AllowDirectTcp, allowDirectTcp_);
          DARABONBA_PTR_TO_JSON(AllowTcpForwarding, allowTcpForwarding_);
          DARABONBA_PTR_TO_JSON(ExecCommand, execCommand_);
          DARABONBA_PTR_TO_JSON(SFTPChannel, SFTPChannel_);
          DARABONBA_PTR_TO_JSON(SFTPDownloadFile, SFTPDownloadFile_);
          DARABONBA_PTR_TO_JSON(SFTPMkdir, SFTPMkdir_);
          DARABONBA_PTR_TO_JSON(SFTPRemoveFile, SFTPRemoveFile_);
          DARABONBA_PTR_TO_JSON(SFTPRenameFile, SFTPRenameFile_);
          DARABONBA_PTR_TO_JSON(SFTPRmdir, SFTPRmdir_);
          DARABONBA_PTR_TO_JSON(SFTPUploadFile, SFTPUploadFile_);
          DARABONBA_PTR_TO_JSON(SSHChannel, SSHChannel_);
          DARABONBA_PTR_TO_JSON(TcpForwarding, tcpForwarding_);
          DARABONBA_PTR_TO_JSON(X11Forwarding, x11Forwarding_);
        };
        friend void from_json(const Darabonba::Json& j, SSH& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowDirectTcp, allowDirectTcp_);
          DARABONBA_PTR_FROM_JSON(AllowTcpForwarding, allowTcpForwarding_);
          DARABONBA_PTR_FROM_JSON(ExecCommand, execCommand_);
          DARABONBA_PTR_FROM_JSON(SFTPChannel, SFTPChannel_);
          DARABONBA_PTR_FROM_JSON(SFTPDownloadFile, SFTPDownloadFile_);
          DARABONBA_PTR_FROM_JSON(SFTPMkdir, SFTPMkdir_);
          DARABONBA_PTR_FROM_JSON(SFTPRemoveFile, SFTPRemoveFile_);
          DARABONBA_PTR_FROM_JSON(SFTPRenameFile, SFTPRenameFile_);
          DARABONBA_PTR_FROM_JSON(SFTPRmdir, SFTPRmdir_);
          DARABONBA_PTR_FROM_JSON(SFTPUploadFile, SFTPUploadFile_);
          DARABONBA_PTR_FROM_JSON(SSHChannel, SSHChannel_);
          DARABONBA_PTR_FROM_JSON(TcpForwarding, tcpForwarding_);
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
        virtual bool empty() const override { return this->allowDirectTcp_ == nullptr
        && this->allowTcpForwarding_ == nullptr && this->execCommand_ == nullptr && this->SFTPChannel_ == nullptr && this->SFTPDownloadFile_ == nullptr && this->SFTPMkdir_ == nullptr
        && this->SFTPRemoveFile_ == nullptr && this->SFTPRenameFile_ == nullptr && this->SFTPRmdir_ == nullptr && this->SFTPUploadFile_ == nullptr && this->SSHChannel_ == nullptr
        && this->tcpForwarding_ == nullptr && this->x11Forwarding_ == nullptr; };
        // allowDirectTcp Field Functions 
        bool hasAllowDirectTcp() const { return this->allowDirectTcp_ != nullptr;};
        void deleteAllowDirectTcp() { this->allowDirectTcp_ = nullptr;};
        inline string getAllowDirectTcp() const { DARABONBA_PTR_GET_DEFAULT(allowDirectTcp_, "") };
        inline SSH& setAllowDirectTcp(string allowDirectTcp) { DARABONBA_PTR_SET_VALUE(allowDirectTcp_, allowDirectTcp) };


        // allowTcpForwarding Field Functions 
        bool hasAllowTcpForwarding() const { return this->allowTcpForwarding_ != nullptr;};
        void deleteAllowTcpForwarding() { this->allowTcpForwarding_ = nullptr;};
        inline string getAllowTcpForwarding() const { DARABONBA_PTR_GET_DEFAULT(allowTcpForwarding_, "") };
        inline SSH& setAllowTcpForwarding(string allowTcpForwarding) { DARABONBA_PTR_SET_VALUE(allowTcpForwarding_, allowTcpForwarding) };


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


        // tcpForwarding Field Functions 
        bool hasTcpForwarding() const { return this->tcpForwarding_ != nullptr;};
        void deleteTcpForwarding() { this->tcpForwarding_ = nullptr;};
        inline string getTcpForwarding() const { DARABONBA_PTR_GET_DEFAULT(tcpForwarding_, "") };
        inline SSH& setTcpForwarding(string tcpForwarding) { DARABONBA_PTR_SET_VALUE(tcpForwarding_, tcpForwarding) };


        // x11Forwarding Field Functions 
        bool hasX11Forwarding() const { return this->x11Forwarding_ != nullptr;};
        void deleteX11Forwarding() { this->x11Forwarding_ = nullptr;};
        inline string getX11Forwarding() const { DARABONBA_PTR_GET_DEFAULT(x11Forwarding_, "") };
        inline SSH& setX11Forwarding(string x11Forwarding) { DARABONBA_PTR_SET_VALUE(x11Forwarding_, x11Forwarding) };


      protected:
        // Specifies whether to allow direct TCP connection.
        shared_ptr<string> allowDirectTcp_ {};
        // Specifies whether to allow TCP forwarding.
        shared_ptr<string> allowTcpForwarding_ {};
        // The remote command execution configuration. Valid values:
        // 
        // - Enable: Enabled.
        // - Disable: Disabled.
        // > If this parameter is not specified, the default value is Disable.
        shared_ptr<string> execCommand_ {};
        // The SFTP channel configuration. Valid values:
        // 
        // - Enable: Enabled.
        // - Disable: Disabled.
        // 
        // > - If this parameter is not specified, the default value is Disable.
        // > - At least one of the SSH channel and SFTP channel must be set to Enable.
        // > - If you enable the SFTP-only permission for a host account, do not disable both the SSH channel and SFTP channel for that account in the control policy. Otherwise, you cannot use the host account to access the target server through the bastion host.
        shared_ptr<string> SFTPChannel_ {};
        // The SFTP file download configuration. Valid values:
        // 
        // - Enable: Enabled.
        // - Disable: Disabled.
        // > If this parameter is not specified, the default value is Disable.
        shared_ptr<string> SFTPDownloadFile_ {};
        // The SFTP folder creation configuration. Valid values:
        // 
        // - Enable: Enabled.
        // - Disable: Disabled.
        // > If this parameter is not specified, the default value is Disable.
        shared_ptr<string> SFTPMkdir_ {};
        // The SFTP file deletion configuration. Valid values:
        // 
        // - Enable: Enabled.
        // - Disable: Disabled.
        // > If this parameter is not specified, the default value is Disable.
        shared_ptr<string> SFTPRemoveFile_ {};
        // The SFTP file rename configuration. Valid values:
        // 
        // - Enable: Enabled.
        // - Disable: Disabled.
        // > If this parameter is not specified, the default value is Disable.
        shared_ptr<string> SFTPRenameFile_ {};
        // The SFTP folder deletion configuration. Valid values:
        // 
        // - Enable: Enabled.
        // - Disable: Disabled.
        // > If this parameter is not specified, the default value is Disable.
        shared_ptr<string> SFTPRmdir_ {};
        // The SFTP file upload configuration. Valid values:
        // 
        // - Enable: Enabled.
        // - Disable: Disabled.
        // > If this parameter is not specified, the default value is Disable.
        shared_ptr<string> SFTPUploadFile_ {};
        // The SSH channel configuration. Valid values:
        // 
        // - Enable: Enabled.
        // - Disable: Disabled.
        // 
        // > - If this parameter is not specified, the default value is Disable.
        // > - At least one of the SSH channel and SFTP channel must be set to Enable. If the SSH channel is set to Disable, you cannot log on to asset accounts by using SSH permissions. Proceed with caution.
        // > - If you enable the SFTP-only permission for a host account, do not disable both the SSH channel and SFTP channel for that account in the control policy. Otherwise, you cannot use the host account to access the target server through the bastion host.
        shared_ptr<string> SSHChannel_ {};
        // Specifies whether to allow TCP forwarding.
        shared_ptr<string> tcpForwarding_ {};
        // The X11 forwarding configuration. Valid values:
        // 
        // - Enable: Enabled.
        // - Disable: Disabled.
        // > If this parameter is not specified, the default value is Disable.
        shared_ptr<string> x11Forwarding_ {};
      };

      class RDP : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RDP& obj) { 
          DARABONBA_PTR_TO_JSON(ClipboardDownload, clipboardDownload_);
          DARABONBA_PTR_TO_JSON(ClipboardUpload, clipboardUpload_);
          DARABONBA_PTR_TO_JSON(DiskRedirection, diskRedirection_);
          DARABONBA_PTR_TO_JSON(DiskRedirectionDownload, diskRedirectionDownload_);
          DARABONBA_PTR_TO_JSON(DiskRedirectionUpload, diskRedirectionUpload_);
          DARABONBA_PTR_TO_JSON(RecordKeyboard, recordKeyboard_);
        };
        friend void from_json(const Darabonba::Json& j, RDP& obj) { 
          DARABONBA_PTR_FROM_JSON(ClipboardDownload, clipboardDownload_);
          DARABONBA_PTR_FROM_JSON(ClipboardUpload, clipboardUpload_);
          DARABONBA_PTR_FROM_JSON(DiskRedirection, diskRedirection_);
          DARABONBA_PTR_FROM_JSON(DiskRedirectionDownload, diskRedirectionDownload_);
          DARABONBA_PTR_FROM_JSON(DiskRedirectionUpload, diskRedirectionUpload_);
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
        && this->clipboardUpload_ == nullptr && this->diskRedirection_ == nullptr && this->diskRedirectionDownload_ == nullptr && this->diskRedirectionUpload_ == nullptr && this->recordKeyboard_ == nullptr; };
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


        // diskRedirectionDownload Field Functions 
        bool hasDiskRedirectionDownload() const { return this->diskRedirectionDownload_ != nullptr;};
        void deleteDiskRedirectionDownload() { this->diskRedirectionDownload_ = nullptr;};
        inline string getDiskRedirectionDownload() const { DARABONBA_PTR_GET_DEFAULT(diskRedirectionDownload_, "") };
        inline RDP& setDiskRedirectionDownload(string diskRedirectionDownload) { DARABONBA_PTR_SET_VALUE(diskRedirectionDownload_, diskRedirectionDownload) };


        // diskRedirectionUpload Field Functions 
        bool hasDiskRedirectionUpload() const { return this->diskRedirectionUpload_ != nullptr;};
        void deleteDiskRedirectionUpload() { this->diskRedirectionUpload_ = nullptr;};
        inline string getDiskRedirectionUpload() const { DARABONBA_PTR_GET_DEFAULT(diskRedirectionUpload_, "") };
        inline RDP& setDiskRedirectionUpload(string diskRedirectionUpload) { DARABONBA_PTR_SET_VALUE(diskRedirectionUpload_, diskRedirectionUpload) };


        // recordKeyboard Field Functions 
        bool hasRecordKeyboard() const { return this->recordKeyboard_ != nullptr;};
        void deleteRecordKeyboard() { this->recordKeyboard_ = nullptr;};
        inline string getRecordKeyboard() const { DARABONBA_PTR_GET_DEFAULT(recordKeyboard_, "") };
        inline RDP& setRecordKeyboard(string recordKeyboard) { DARABONBA_PTR_SET_VALUE(recordKeyboard_, recordKeyboard) };


      protected:
        // The clipboard download configuration. Valid values:
        // 
        // - Enable: Enabled.
        // - Disable: Disabled.
        // 
        // > If this parameter is not specified, the default value is Disable.
        shared_ptr<string> clipboardDownload_ {};
        // The clipboard upload configuration. Valid values:
        // 
        // - Enable: Enabled.
        // - Disable: Disabled.
        // > If this parameter is not specified, the default value is Disable.
        shared_ptr<string> clipboardUpload_ {};
        // The drive/printer mapping configuration. Valid values:
        // 
        // - Enable: Enabled.
        // - Disable: Disabled.
        // > If this parameter is not specified, the default value is Disable.
        shared_ptr<string> diskRedirection_ {};
        // Specifies whether to allow disk download.
        shared_ptr<string> diskRedirectionDownload_ {};
        // Specifies whether to allow disk upload.
        shared_ptr<string> diskRedirectionUpload_ {};
        // The keyboard recording configuration. Valid values:
        // 
        // - Enable: Enabled.
        // - Disable: Disabled.
        // > If this parameter is not specified, the default value is Disable.
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
      // The RDP option configuration details.
      shared_ptr<ProtocolConfig::RDP> RDP_ {};
      // The SSH and SFTP option configuration details.
      shared_ptr<ProtocolConfig::SSH> SSH_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->policyId_ == nullptr && this->projectId_ == nullptr && this->protocolConfig_ == nullptr && this->regionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetPolicyProtocolConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline SetPolicyProtocolConfigRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline SetPolicyProtocolConfigRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // protocolConfig Field Functions 
    bool hasProtocolConfig() const { return this->protocolConfig_ != nullptr;};
    void deleteProtocolConfig() { this->protocolConfig_ = nullptr;};
    inline const SetPolicyProtocolConfigRequest::ProtocolConfig & getProtocolConfig() const { DARABONBA_PTR_GET_CONST(protocolConfig_, SetPolicyProtocolConfigRequest::ProtocolConfig) };
    inline SetPolicyProtocolConfigRequest::ProtocolConfig getProtocolConfig() { DARABONBA_PTR_GET(protocolConfig_, SetPolicyProtocolConfigRequest::ProtocolConfig) };
    inline SetPolicyProtocolConfigRequest& setProtocolConfig(const SetPolicyProtocolConfigRequest::ProtocolConfig & protocolConfig) { DARABONBA_PTR_SET_VALUE(protocolConfig_, protocolConfig) };
    inline SetPolicyProtocolConfigRequest& setProtocolConfig(SetPolicyProtocolConfigRequest::ProtocolConfig && protocolConfig) { DARABONBA_PTR_SET_RVALUE(protocolConfig_, protocolConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetPolicyProtocolConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance ID of the bastion host.
    // > You can invoke [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the control policy to modify.
    // 
    // > You can call [ListPolicies](https://help.aliyun.com/document_detail/2758876.html) to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The protocol control configuration.
    // 
    // This parameter is required.
    shared_ptr<SetPolicyProtocolConfigRequest::ProtocolConfig> protocolConfig_ {};
    // The region ID of the bastion host.
    // > For the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
