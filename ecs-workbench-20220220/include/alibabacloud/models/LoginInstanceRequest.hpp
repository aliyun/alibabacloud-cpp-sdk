// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGININSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LOGININSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class LoginInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoginInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceLoginInfo, instanceLoginInfo_);
      DARABONBA_PTR_TO_JSON(PartnerInfo, partnerInfo_);
      DARABONBA_PTR_TO_JSON(UserAccount, userAccount_);
    };
    friend void from_json(const Darabonba::Json& j, LoginInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceLoginInfo, instanceLoginInfo_);
      DARABONBA_PTR_FROM_JSON(PartnerInfo, partnerInfo_);
      DARABONBA_PTR_FROM_JSON(UserAccount, userAccount_);
    };
    LoginInstanceRequest() = default ;
    LoginInstanceRequest(const LoginInstanceRequest &) = default ;
    LoginInstanceRequest(LoginInstanceRequest &&) = default ;
    LoginInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoginInstanceRequest() = default ;
    LoginInstanceRequest& operator=(const LoginInstanceRequest &) = default ;
    LoginInstanceRequest& operator=(LoginInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserAccount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserAccount& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AccountPlatform, accountPlatform_);
        DARABONBA_PTR_TO_JSON(AccountStructure, accountStructure_);
        DARABONBA_PTR_TO_JSON(DurationSeconds, durationSeconds_);
        DARABONBA_PTR_TO_JSON(EmpId, empId_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(LoginName, loginName_);
        DARABONBA_PTR_TO_JSON(Options, options_);
        DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      };
      friend void from_json(const Darabonba::Json& j, UserAccount& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AccountPlatform, accountPlatform_);
        DARABONBA_PTR_FROM_JSON(AccountStructure, accountStructure_);
        DARABONBA_PTR_FROM_JSON(DurationSeconds, durationSeconds_);
        DARABONBA_PTR_FROM_JSON(EmpId, empId_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
        DARABONBA_PTR_FROM_JSON(Options, options_);
        DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      };
      UserAccount() = default ;
      UserAccount(const UserAccount &) = default ;
      UserAccount(UserAccount &&) = default ;
      UserAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserAccount() = default ;
      UserAccount& operator=(const UserAccount &) = default ;
      UserAccount& operator=(UserAccount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Options : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Options& obj) { 
          DARABONBA_PTR_TO_JSON(LoginLimit, loginLimit_);
        };
        friend void from_json(const Darabonba::Json& j, Options& obj) { 
          DARABONBA_PTR_FROM_JSON(LoginLimit, loginLimit_);
        };
        Options() = default ;
        Options(const Options &) = default ;
        Options(Options &&) = default ;
        Options(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Options() = default ;
        Options& operator=(const Options &) = default ;
        Options& operator=(Options &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->loginLimit_ == nullptr; };
        // loginLimit Field Functions 
        bool hasLoginLimit() const { return this->loginLimit_ != nullptr;};
        void deleteLoginLimit() { this->loginLimit_ = nullptr;};
        inline int64_t getLoginLimit() const { DARABONBA_PTR_GET_DEFAULT(loginLimit_, 0L) };
        inline Options& setLoginLimit(int64_t loginLimit) { DARABONBA_PTR_SET_VALUE(loginLimit_, loginLimit) };


      protected:
        shared_ptr<int64_t> loginLimit_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountPlatform_ == nullptr && this->accountStructure_ == nullptr && this->durationSeconds_ == nullptr && this->empId_ == nullptr && this->expireTime_ == nullptr
        && this->loginName_ == nullptr && this->options_ == nullptr && this->parentId_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
      inline UserAccount& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // accountPlatform Field Functions 
      bool hasAccountPlatform() const { return this->accountPlatform_ != nullptr;};
      void deleteAccountPlatform() { this->accountPlatform_ = nullptr;};
      inline string getAccountPlatform() const { DARABONBA_PTR_GET_DEFAULT(accountPlatform_, "") };
      inline UserAccount& setAccountPlatform(string accountPlatform) { DARABONBA_PTR_SET_VALUE(accountPlatform_, accountPlatform) };


      // accountStructure Field Functions 
      bool hasAccountStructure() const { return this->accountStructure_ != nullptr;};
      void deleteAccountStructure() { this->accountStructure_ = nullptr;};
      inline string getAccountStructure() const { DARABONBA_PTR_GET_DEFAULT(accountStructure_, "") };
      inline UserAccount& setAccountStructure(string accountStructure) { DARABONBA_PTR_SET_VALUE(accountStructure_, accountStructure) };


      // durationSeconds Field Functions 
      bool hasDurationSeconds() const { return this->durationSeconds_ != nullptr;};
      void deleteDurationSeconds() { this->durationSeconds_ = nullptr;};
      inline int64_t getDurationSeconds() const { DARABONBA_PTR_GET_DEFAULT(durationSeconds_, 0L) };
      inline UserAccount& setDurationSeconds(int64_t durationSeconds) { DARABONBA_PTR_SET_VALUE(durationSeconds_, durationSeconds) };


      // empId Field Functions 
      bool hasEmpId() const { return this->empId_ != nullptr;};
      void deleteEmpId() { this->empId_ = nullptr;};
      inline string getEmpId() const { DARABONBA_PTR_GET_DEFAULT(empId_, "") };
      inline UserAccount& setEmpId(string empId) { DARABONBA_PTR_SET_VALUE(empId_, empId) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline UserAccount& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // loginName Field Functions 
      bool hasLoginName() const { return this->loginName_ != nullptr;};
      void deleteLoginName() { this->loginName_ = nullptr;};
      inline string getLoginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
      inline UserAccount& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


      // options Field Functions 
      bool hasOptions() const { return this->options_ != nullptr;};
      void deleteOptions() { this->options_ = nullptr;};
      inline const UserAccount::Options & getOptions() const { DARABONBA_PTR_GET_CONST(options_, UserAccount::Options) };
      inline UserAccount::Options getOptions() { DARABONBA_PTR_GET(options_, UserAccount::Options) };
      inline UserAccount& setOptions(const UserAccount::Options & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
      inline UserAccount& setOptions(UserAccount::Options && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
      inline UserAccount& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    protected:
      shared_ptr<int64_t> accountId_ {};
      shared_ptr<string> accountPlatform_ {};
      shared_ptr<string> accountStructure_ {};
      shared_ptr<int64_t> durationSeconds_ {};
      shared_ptr<string> empId_ {};
      shared_ptr<string> expireTime_ {};
      shared_ptr<string> loginName_ {};
      shared_ptr<UserAccount::Options> options_ {};
      shared_ptr<int64_t> parentId_ {};
    };

    class PartnerInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PartnerInfo& obj) { 
        DARABONBA_PTR_TO_JSON(PartnerId, partnerId_);
        DARABONBA_PTR_TO_JSON(PartnerName, partnerName_);
      };
      friend void from_json(const Darabonba::Json& j, PartnerInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(PartnerId, partnerId_);
        DARABONBA_PTR_FROM_JSON(PartnerName, partnerName_);
      };
      PartnerInfo() = default ;
      PartnerInfo(const PartnerInfo &) = default ;
      PartnerInfo(PartnerInfo &&) = default ;
      PartnerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PartnerInfo() = default ;
      PartnerInfo& operator=(const PartnerInfo &) = default ;
      PartnerInfo& operator=(PartnerInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->partnerId_ == nullptr
        && this->partnerName_ == nullptr; };
      // partnerId Field Functions 
      bool hasPartnerId() const { return this->partnerId_ != nullptr;};
      void deletePartnerId() { this->partnerId_ = nullptr;};
      inline string getPartnerId() const { DARABONBA_PTR_GET_DEFAULT(partnerId_, "") };
      inline PartnerInfo& setPartnerId(string partnerId) { DARABONBA_PTR_SET_VALUE(partnerId_, partnerId) };


      // partnerName Field Functions 
      bool hasPartnerName() const { return this->partnerName_ != nullptr;};
      void deletePartnerName() { this->partnerName_ = nullptr;};
      inline string getPartnerName() const { DARABONBA_PTR_GET_DEFAULT(partnerName_, "") };
      inline PartnerInfo& setPartnerName(string partnerName) { DARABONBA_PTR_SET_VALUE(partnerName_, partnerName) };


    protected:
      shared_ptr<string> partnerId_ {};
      shared_ptr<string> partnerName_ {};
    };

    class InstanceLoginInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceLoginInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AuthenticationType, authenticationType_);
        DARABONBA_PTR_TO_JSON(Certificate, certificate_);
        DARABONBA_PTR_TO_JSON(CredentialToken, credentialToken_);
        DARABONBA_PTR_TO_JSON(DockerContainerName, dockerContainerName_);
        DARABONBA_PTR_TO_JSON(DockerExec, dockerExec_);
        DARABONBA_PTR_TO_JSON(DurationSeconds, durationSeconds_);
        DARABONBA_PTR_TO_JSON(EncryptionOptions, encryptionOptions_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(LoginByInstanceCredential, loginByInstanceCredential_);
        DARABONBA_PTR_TO_JSON(LoginByInstanceShortcut, loginByInstanceShortcut_);
        DARABONBA_PTR_TO_JSON(NetworkAccessMode, networkAccessMode_);
        DARABONBA_PTR_TO_JSON(Options, options_);
        DARABONBA_PTR_TO_JSON(PassPhrase, passPhrase_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ShortcutToken, shortcutToken_);
        DARABONBA_PTR_TO_JSON(Username, username_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceLoginInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthenticationType, authenticationType_);
        DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
        DARABONBA_PTR_FROM_JSON(CredentialToken, credentialToken_);
        DARABONBA_PTR_FROM_JSON(DockerContainerName, dockerContainerName_);
        DARABONBA_PTR_FROM_JSON(DockerExec, dockerExec_);
        DARABONBA_PTR_FROM_JSON(DurationSeconds, durationSeconds_);
        DARABONBA_PTR_FROM_JSON(EncryptionOptions, encryptionOptions_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(LoginByInstanceCredential, loginByInstanceCredential_);
        DARABONBA_PTR_FROM_JSON(LoginByInstanceShortcut, loginByInstanceShortcut_);
        DARABONBA_PTR_FROM_JSON(NetworkAccessMode, networkAccessMode_);
        DARABONBA_PTR_FROM_JSON(Options, options_);
        DARABONBA_PTR_FROM_JSON(PassPhrase, passPhrase_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ShortcutToken, shortcutToken_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      InstanceLoginInfo() = default ;
      InstanceLoginInfo(const InstanceLoginInfo &) = default ;
      InstanceLoginInfo(InstanceLoginInfo &&) = default ;
      InstanceLoginInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceLoginInfo() = default ;
      InstanceLoginInfo& operator=(const InstanceLoginInfo &) = default ;
      InstanceLoginInfo& operator=(InstanceLoginInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Options : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Options& obj) { 
          DARABONBA_PTR_TO_JSON(AudioMuteSeconds, audioMuteSeconds_);
          DARABONBA_PTR_TO_JSON(ContainerInfo, containerInfo_);
          DARABONBA_PTR_TO_JSON(FixedHeight, fixedHeight_);
          DARABONBA_PTR_TO_JSON(FixedWidth, fixedWidth_);
          DARABONBA_PTR_TO_JSON(NotificationEventTypes, notificationEventTypes_);
          DARABONBA_PTR_TO_JSON(NotificationRecipientUrl, notificationRecipientUrl_);
          DARABONBA_PTR_TO_JSON(NotificationRetryIntervalSeconds, notificationRetryIntervalSeconds_);
          DARABONBA_PTR_TO_JSON(NotificationRetryLimit, notificationRetryLimit_);
          DARABONBA_PTR_TO_JSON(OperationDisableSeconds, operationDisableSeconds_);
          DARABONBA_PTR_TO_JSON(SessionControl, sessionControl_);
          DARABONBA_PTR_TO_JSON(VideoFreezeSeconds, videoFreezeSeconds_);
        };
        friend void from_json(const Darabonba::Json& j, Options& obj) { 
          DARABONBA_PTR_FROM_JSON(AudioMuteSeconds, audioMuteSeconds_);
          DARABONBA_PTR_FROM_JSON(ContainerInfo, containerInfo_);
          DARABONBA_PTR_FROM_JSON(FixedHeight, fixedHeight_);
          DARABONBA_PTR_FROM_JSON(FixedWidth, fixedWidth_);
          DARABONBA_PTR_FROM_JSON(NotificationEventTypes, notificationEventTypes_);
          DARABONBA_PTR_FROM_JSON(NotificationRecipientUrl, notificationRecipientUrl_);
          DARABONBA_PTR_FROM_JSON(NotificationRetryIntervalSeconds, notificationRetryIntervalSeconds_);
          DARABONBA_PTR_FROM_JSON(NotificationRetryLimit, notificationRetryLimit_);
          DARABONBA_PTR_FROM_JSON(OperationDisableSeconds, operationDisableSeconds_);
          DARABONBA_PTR_FROM_JSON(SessionControl, sessionControl_);
          DARABONBA_PTR_FROM_JSON(VideoFreezeSeconds, videoFreezeSeconds_);
        };
        Options() = default ;
        Options(const Options &) = default ;
        Options(Options &&) = default ;
        Options(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Options() = default ;
        Options& operator=(const Options &) = default ;
        Options& operator=(Options &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ContainerInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ContainerInfo& obj) { 
            DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
            DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
            DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
            DARABONBA_PTR_TO_JSON(Deployment, deployment_);
            DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
            DARABONBA_ANY_TO_JSON(Headers, headers_);
            DARABONBA_PTR_TO_JSON(Namespace, namespace_);
            DARABONBA_PTR_TO_JSON(PodName, podName_);
          };
          friend void from_json(const Darabonba::Json& j, ContainerInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
            DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
            DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
            DARABONBA_PTR_FROM_JSON(Deployment, deployment_);
            DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
            DARABONBA_ANY_FROM_JSON(Headers, headers_);
            DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
            DARABONBA_PTR_FROM_JSON(PodName, podName_);
          };
          ContainerInfo() = default ;
          ContainerInfo(const ContainerInfo &) = default ;
          ContainerInfo(ContainerInfo &&) = default ;
          ContainerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ContainerInfo() = default ;
          ContainerInfo& operator=(const ContainerInfo &) = default ;
          ContainerInfo& operator=(ContainerInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->containerName_ == nullptr && this->deployment_ == nullptr && this->endpoint_ == nullptr && this->headers_ == nullptr
        && this->namespace_ == nullptr && this->podName_ == nullptr; };
          // clusterId Field Functions 
          bool hasClusterId() const { return this->clusterId_ != nullptr;};
          void deleteClusterId() { this->clusterId_ = nullptr;};
          inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
          inline ContainerInfo& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


          // clusterName Field Functions 
          bool hasClusterName() const { return this->clusterName_ != nullptr;};
          void deleteClusterName() { this->clusterName_ = nullptr;};
          inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
          inline ContainerInfo& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


          // containerName Field Functions 
          bool hasContainerName() const { return this->containerName_ != nullptr;};
          void deleteContainerName() { this->containerName_ = nullptr;};
          inline string getContainerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
          inline ContainerInfo& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


          // deployment Field Functions 
          bool hasDeployment() const { return this->deployment_ != nullptr;};
          void deleteDeployment() { this->deployment_ = nullptr;};
          inline string getDeployment() const { DARABONBA_PTR_GET_DEFAULT(deployment_, "") };
          inline ContainerInfo& setDeployment(string deployment) { DARABONBA_PTR_SET_VALUE(deployment_, deployment) };


          // endpoint Field Functions 
          bool hasEndpoint() const { return this->endpoint_ != nullptr;};
          void deleteEndpoint() { this->endpoint_ = nullptr;};
          inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
          inline ContainerInfo& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


          // headers Field Functions 
          bool hasHeaders() const { return this->headers_ != nullptr;};
          void deleteHeaders() { this->headers_ = nullptr;};
          inline           const Darabonba::Json & getHeaders() const { DARABONBA_GET(headers_) };
          Darabonba::Json & getHeaders() { DARABONBA_GET(headers_) };
          inline ContainerInfo& setHeaders(const Darabonba::Json & headers) { DARABONBA_SET_VALUE(headers_, headers) };
          inline ContainerInfo& setHeaders(Darabonba::Json && headers) { DARABONBA_SET_RVALUE(headers_, headers) };


          // namespace Field Functions 
          bool hasNamespace() const { return this->namespace_ != nullptr;};
          void deleteNamespace() { this->namespace_ = nullptr;};
          inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
          inline ContainerInfo& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


          // podName Field Functions 
          bool hasPodName() const { return this->podName_ != nullptr;};
          void deletePodName() { this->podName_ = nullptr;};
          inline string getPodName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
          inline ContainerInfo& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


        protected:
          shared_ptr<string> clusterId_ {};
          shared_ptr<string> clusterName_ {};
          shared_ptr<string> containerName_ {};
          shared_ptr<string> deployment_ {};
          shared_ptr<string> endpoint_ {};
          Darabonba::Json headers_ {};
          shared_ptr<string> namespace_ {};
          shared_ptr<string> podName_ {};
        };

        virtual bool empty() const override { return this->audioMuteSeconds_ == nullptr
        && this->containerInfo_ == nullptr && this->fixedHeight_ == nullptr && this->fixedWidth_ == nullptr && this->notificationEventTypes_ == nullptr && this->notificationRecipientUrl_ == nullptr
        && this->notificationRetryIntervalSeconds_ == nullptr && this->notificationRetryLimit_ == nullptr && this->operationDisableSeconds_ == nullptr && this->sessionControl_ == nullptr && this->videoFreezeSeconds_ == nullptr; };
        // audioMuteSeconds Field Functions 
        bool hasAudioMuteSeconds() const { return this->audioMuteSeconds_ != nullptr;};
        void deleteAudioMuteSeconds() { this->audioMuteSeconds_ = nullptr;};
        inline int32_t getAudioMuteSeconds() const { DARABONBA_PTR_GET_DEFAULT(audioMuteSeconds_, 0) };
        inline Options& setAudioMuteSeconds(int32_t audioMuteSeconds) { DARABONBA_PTR_SET_VALUE(audioMuteSeconds_, audioMuteSeconds) };


        // containerInfo Field Functions 
        bool hasContainerInfo() const { return this->containerInfo_ != nullptr;};
        void deleteContainerInfo() { this->containerInfo_ = nullptr;};
        inline const Options::ContainerInfo & getContainerInfo() const { DARABONBA_PTR_GET_CONST(containerInfo_, Options::ContainerInfo) };
        inline Options::ContainerInfo getContainerInfo() { DARABONBA_PTR_GET(containerInfo_, Options::ContainerInfo) };
        inline Options& setContainerInfo(const Options::ContainerInfo & containerInfo) { DARABONBA_PTR_SET_VALUE(containerInfo_, containerInfo) };
        inline Options& setContainerInfo(Options::ContainerInfo && containerInfo) { DARABONBA_PTR_SET_RVALUE(containerInfo_, containerInfo) };


        // fixedHeight Field Functions 
        bool hasFixedHeight() const { return this->fixedHeight_ != nullptr;};
        void deleteFixedHeight() { this->fixedHeight_ = nullptr;};
        inline int32_t getFixedHeight() const { DARABONBA_PTR_GET_DEFAULT(fixedHeight_, 0) };
        inline Options& setFixedHeight(int32_t fixedHeight) { DARABONBA_PTR_SET_VALUE(fixedHeight_, fixedHeight) };


        // fixedWidth Field Functions 
        bool hasFixedWidth() const { return this->fixedWidth_ != nullptr;};
        void deleteFixedWidth() { this->fixedWidth_ = nullptr;};
        inline int32_t getFixedWidth() const { DARABONBA_PTR_GET_DEFAULT(fixedWidth_, 0) };
        inline Options& setFixedWidth(int32_t fixedWidth) { DARABONBA_PTR_SET_VALUE(fixedWidth_, fixedWidth) };


        // notificationEventTypes Field Functions 
        bool hasNotificationEventTypes() const { return this->notificationEventTypes_ != nullptr;};
        void deleteNotificationEventTypes() { this->notificationEventTypes_ = nullptr;};
        inline string getNotificationEventTypes() const { DARABONBA_PTR_GET_DEFAULT(notificationEventTypes_, "") };
        inline Options& setNotificationEventTypes(string notificationEventTypes) { DARABONBA_PTR_SET_VALUE(notificationEventTypes_, notificationEventTypes) };


        // notificationRecipientUrl Field Functions 
        bool hasNotificationRecipientUrl() const { return this->notificationRecipientUrl_ != nullptr;};
        void deleteNotificationRecipientUrl() { this->notificationRecipientUrl_ = nullptr;};
        inline string getNotificationRecipientUrl() const { DARABONBA_PTR_GET_DEFAULT(notificationRecipientUrl_, "") };
        inline Options& setNotificationRecipientUrl(string notificationRecipientUrl) { DARABONBA_PTR_SET_VALUE(notificationRecipientUrl_, notificationRecipientUrl) };


        // notificationRetryIntervalSeconds Field Functions 
        bool hasNotificationRetryIntervalSeconds() const { return this->notificationRetryIntervalSeconds_ != nullptr;};
        void deleteNotificationRetryIntervalSeconds() { this->notificationRetryIntervalSeconds_ = nullptr;};
        inline int32_t getNotificationRetryIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(notificationRetryIntervalSeconds_, 0) };
        inline Options& setNotificationRetryIntervalSeconds(int32_t notificationRetryIntervalSeconds) { DARABONBA_PTR_SET_VALUE(notificationRetryIntervalSeconds_, notificationRetryIntervalSeconds) };


        // notificationRetryLimit Field Functions 
        bool hasNotificationRetryLimit() const { return this->notificationRetryLimit_ != nullptr;};
        void deleteNotificationRetryLimit() { this->notificationRetryLimit_ = nullptr;};
        inline int32_t getNotificationRetryLimit() const { DARABONBA_PTR_GET_DEFAULT(notificationRetryLimit_, 0) };
        inline Options& setNotificationRetryLimit(int32_t notificationRetryLimit) { DARABONBA_PTR_SET_VALUE(notificationRetryLimit_, notificationRetryLimit) };


        // operationDisableSeconds Field Functions 
        bool hasOperationDisableSeconds() const { return this->operationDisableSeconds_ != nullptr;};
        void deleteOperationDisableSeconds() { this->operationDisableSeconds_ = nullptr;};
        inline int32_t getOperationDisableSeconds() const { DARABONBA_PTR_GET_DEFAULT(operationDisableSeconds_, 0) };
        inline Options& setOperationDisableSeconds(int32_t operationDisableSeconds) { DARABONBA_PTR_SET_VALUE(operationDisableSeconds_, operationDisableSeconds) };


        // sessionControl Field Functions 
        bool hasSessionControl() const { return this->sessionControl_ != nullptr;};
        void deleteSessionControl() { this->sessionControl_ = nullptr;};
        inline string getSessionControl() const { DARABONBA_PTR_GET_DEFAULT(sessionControl_, "") };
        inline Options& setSessionControl(string sessionControl) { DARABONBA_PTR_SET_VALUE(sessionControl_, sessionControl) };


        // videoFreezeSeconds Field Functions 
        bool hasVideoFreezeSeconds() const { return this->videoFreezeSeconds_ != nullptr;};
        void deleteVideoFreezeSeconds() { this->videoFreezeSeconds_ = nullptr;};
        inline int32_t getVideoFreezeSeconds() const { DARABONBA_PTR_GET_DEFAULT(videoFreezeSeconds_, 0) };
        inline Options& setVideoFreezeSeconds(int32_t videoFreezeSeconds) { DARABONBA_PTR_SET_VALUE(videoFreezeSeconds_, videoFreezeSeconds) };


      protected:
        shared_ptr<int32_t> audioMuteSeconds_ {};
        shared_ptr<Options::ContainerInfo> containerInfo_ {};
        shared_ptr<int32_t> fixedHeight_ {};
        shared_ptr<int32_t> fixedWidth_ {};
        shared_ptr<string> notificationEventTypes_ {};
        shared_ptr<string> notificationRecipientUrl_ {};
        shared_ptr<int32_t> notificationRetryIntervalSeconds_ {};
        shared_ptr<int32_t> notificationRetryLimit_ {};
        shared_ptr<int32_t> operationDisableSeconds_ {};
        shared_ptr<string> sessionControl_ {};
        shared_ptr<int32_t> videoFreezeSeconds_ {};
      };

      class EncryptionOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EncryptionOptions& obj) { 
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
        };
        friend void from_json(const Darabonba::Json& j, EncryptionOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
        };
        EncryptionOptions() = default ;
        EncryptionOptions(const EncryptionOptions &) = default ;
        EncryptionOptions(EncryptionOptions &&) = default ;
        EncryptionOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EncryptionOptions() = default ;
        EncryptionOptions& operator=(const EncryptionOptions &) = default ;
        EncryptionOptions& operator=(EncryptionOptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->KMSKeyId_ == nullptr && this->mode_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline EncryptionOptions& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // KMSKeyId Field Functions 
        bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
        void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
        inline string getKMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
        inline EncryptionOptions& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline EncryptionOptions& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      protected:
        shared_ptr<bool> enabled_ {};
        shared_ptr<string> KMSKeyId_ {};
        shared_ptr<string> mode_ {};
      };

      virtual bool empty() const override { return this->authenticationType_ == nullptr
        && this->certificate_ == nullptr && this->credentialToken_ == nullptr && this->dockerContainerName_ == nullptr && this->dockerExec_ == nullptr && this->durationSeconds_ == nullptr
        && this->encryptionOptions_ == nullptr && this->expireTime_ == nullptr && this->host_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr
        && this->loginByInstanceCredential_ == nullptr && this->loginByInstanceShortcut_ == nullptr && this->networkAccessMode_ == nullptr && this->options_ == nullptr && this->passPhrase_ == nullptr
        && this->password_ == nullptr && this->port_ == nullptr && this->protocol_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->shortcutToken_ == nullptr && this->username_ == nullptr && this->vpcId_ == nullptr; };
      // authenticationType Field Functions 
      bool hasAuthenticationType() const { return this->authenticationType_ != nullptr;};
      void deleteAuthenticationType() { this->authenticationType_ = nullptr;};
      inline string getAuthenticationType() const { DARABONBA_PTR_GET_DEFAULT(authenticationType_, "") };
      inline InstanceLoginInfo& setAuthenticationType(string authenticationType) { DARABONBA_PTR_SET_VALUE(authenticationType_, authenticationType) };


      // certificate Field Functions 
      bool hasCertificate() const { return this->certificate_ != nullptr;};
      void deleteCertificate() { this->certificate_ = nullptr;};
      inline string getCertificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
      inline InstanceLoginInfo& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


      // credentialToken Field Functions 
      bool hasCredentialToken() const { return this->credentialToken_ != nullptr;};
      void deleteCredentialToken() { this->credentialToken_ = nullptr;};
      inline string getCredentialToken() const { DARABONBA_PTR_GET_DEFAULT(credentialToken_, "") };
      inline InstanceLoginInfo& setCredentialToken(string credentialToken) { DARABONBA_PTR_SET_VALUE(credentialToken_, credentialToken) };


      // dockerContainerName Field Functions 
      bool hasDockerContainerName() const { return this->dockerContainerName_ != nullptr;};
      void deleteDockerContainerName() { this->dockerContainerName_ = nullptr;};
      inline string getDockerContainerName() const { DARABONBA_PTR_GET_DEFAULT(dockerContainerName_, "") };
      inline InstanceLoginInfo& setDockerContainerName(string dockerContainerName) { DARABONBA_PTR_SET_VALUE(dockerContainerName_, dockerContainerName) };


      // dockerExec Field Functions 
      bool hasDockerExec() const { return this->dockerExec_ != nullptr;};
      void deleteDockerExec() { this->dockerExec_ = nullptr;};
      inline string getDockerExec() const { DARABONBA_PTR_GET_DEFAULT(dockerExec_, "") };
      inline InstanceLoginInfo& setDockerExec(string dockerExec) { DARABONBA_PTR_SET_VALUE(dockerExec_, dockerExec) };


      // durationSeconds Field Functions 
      bool hasDurationSeconds() const { return this->durationSeconds_ != nullptr;};
      void deleteDurationSeconds() { this->durationSeconds_ = nullptr;};
      inline int64_t getDurationSeconds() const { DARABONBA_PTR_GET_DEFAULT(durationSeconds_, 0L) };
      inline InstanceLoginInfo& setDurationSeconds(int64_t durationSeconds) { DARABONBA_PTR_SET_VALUE(durationSeconds_, durationSeconds) };


      // encryptionOptions Field Functions 
      bool hasEncryptionOptions() const { return this->encryptionOptions_ != nullptr;};
      void deleteEncryptionOptions() { this->encryptionOptions_ = nullptr;};
      inline const InstanceLoginInfo::EncryptionOptions & getEncryptionOptions() const { DARABONBA_PTR_GET_CONST(encryptionOptions_, InstanceLoginInfo::EncryptionOptions) };
      inline InstanceLoginInfo::EncryptionOptions getEncryptionOptions() { DARABONBA_PTR_GET(encryptionOptions_, InstanceLoginInfo::EncryptionOptions) };
      inline InstanceLoginInfo& setEncryptionOptions(const InstanceLoginInfo::EncryptionOptions & encryptionOptions) { DARABONBA_PTR_SET_VALUE(encryptionOptions_, encryptionOptions) };
      inline InstanceLoginInfo& setEncryptionOptions(InstanceLoginInfo::EncryptionOptions && encryptionOptions) { DARABONBA_PTR_SET_RVALUE(encryptionOptions_, encryptionOptions) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline InstanceLoginInfo& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline InstanceLoginInfo& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceLoginInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline InstanceLoginInfo& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // loginByInstanceCredential Field Functions 
      bool hasLoginByInstanceCredential() const { return this->loginByInstanceCredential_ != nullptr;};
      void deleteLoginByInstanceCredential() { this->loginByInstanceCredential_ = nullptr;};
      inline bool getLoginByInstanceCredential() const { DARABONBA_PTR_GET_DEFAULT(loginByInstanceCredential_, false) };
      inline InstanceLoginInfo& setLoginByInstanceCredential(bool loginByInstanceCredential) { DARABONBA_PTR_SET_VALUE(loginByInstanceCredential_, loginByInstanceCredential) };


      // loginByInstanceShortcut Field Functions 
      bool hasLoginByInstanceShortcut() const { return this->loginByInstanceShortcut_ != nullptr;};
      void deleteLoginByInstanceShortcut() { this->loginByInstanceShortcut_ = nullptr;};
      inline bool getLoginByInstanceShortcut() const { DARABONBA_PTR_GET_DEFAULT(loginByInstanceShortcut_, false) };
      inline InstanceLoginInfo& setLoginByInstanceShortcut(bool loginByInstanceShortcut) { DARABONBA_PTR_SET_VALUE(loginByInstanceShortcut_, loginByInstanceShortcut) };


      // networkAccessMode Field Functions 
      bool hasNetworkAccessMode() const { return this->networkAccessMode_ != nullptr;};
      void deleteNetworkAccessMode() { this->networkAccessMode_ = nullptr;};
      inline string getNetworkAccessMode() const { DARABONBA_PTR_GET_DEFAULT(networkAccessMode_, "") };
      inline InstanceLoginInfo& setNetworkAccessMode(string networkAccessMode) { DARABONBA_PTR_SET_VALUE(networkAccessMode_, networkAccessMode) };


      // options Field Functions 
      bool hasOptions() const { return this->options_ != nullptr;};
      void deleteOptions() { this->options_ = nullptr;};
      inline const InstanceLoginInfo::Options & getOptions() const { DARABONBA_PTR_GET_CONST(options_, InstanceLoginInfo::Options) };
      inline InstanceLoginInfo::Options getOptions() { DARABONBA_PTR_GET(options_, InstanceLoginInfo::Options) };
      inline InstanceLoginInfo& setOptions(const InstanceLoginInfo::Options & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
      inline InstanceLoginInfo& setOptions(InstanceLoginInfo::Options && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


      // passPhrase Field Functions 
      bool hasPassPhrase() const { return this->passPhrase_ != nullptr;};
      void deletePassPhrase() { this->passPhrase_ = nullptr;};
      inline string getPassPhrase() const { DARABONBA_PTR_GET_DEFAULT(passPhrase_, "") };
      inline InstanceLoginInfo& setPassPhrase(string passPhrase) { DARABONBA_PTR_SET_VALUE(passPhrase_, passPhrase) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline InstanceLoginInfo& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline InstanceLoginInfo& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline InstanceLoginInfo& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline InstanceLoginInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline InstanceLoginInfo& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // shortcutToken Field Functions 
      bool hasShortcutToken() const { return this->shortcutToken_ != nullptr;};
      void deleteShortcutToken() { this->shortcutToken_ = nullptr;};
      inline string getShortcutToken() const { DARABONBA_PTR_GET_DEFAULT(shortcutToken_, "") };
      inline InstanceLoginInfo& setShortcutToken(string shortcutToken) { DARABONBA_PTR_SET_VALUE(shortcutToken_, shortcutToken) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline InstanceLoginInfo& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline InstanceLoginInfo& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<string> authenticationType_ {};
      shared_ptr<string> certificate_ {};
      shared_ptr<string> credentialToken_ {};
      shared_ptr<string> dockerContainerName_ {};
      shared_ptr<string> dockerExec_ {};
      shared_ptr<int64_t> durationSeconds_ {};
      shared_ptr<InstanceLoginInfo::EncryptionOptions> encryptionOptions_ {};
      shared_ptr<string> expireTime_ {};
      shared_ptr<string> host_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instanceType_ {};
      shared_ptr<bool> loginByInstanceCredential_ {};
      shared_ptr<bool> loginByInstanceShortcut_ {};
      shared_ptr<string> networkAccessMode_ {};
      shared_ptr<InstanceLoginInfo::Options> options_ {};
      shared_ptr<string> passPhrase_ {};
      shared_ptr<string> password_ {};
      shared_ptr<int32_t> port_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> shortcutToken_ {};
      shared_ptr<string> username_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->instanceLoginInfo_ == nullptr
        && this->partnerInfo_ == nullptr && this->userAccount_ == nullptr; };
    // instanceLoginInfo Field Functions 
    bool hasInstanceLoginInfo() const { return this->instanceLoginInfo_ != nullptr;};
    void deleteInstanceLoginInfo() { this->instanceLoginInfo_ = nullptr;};
    inline const LoginInstanceRequest::InstanceLoginInfo & getInstanceLoginInfo() const { DARABONBA_PTR_GET_CONST(instanceLoginInfo_, LoginInstanceRequest::InstanceLoginInfo) };
    inline LoginInstanceRequest::InstanceLoginInfo getInstanceLoginInfo() { DARABONBA_PTR_GET(instanceLoginInfo_, LoginInstanceRequest::InstanceLoginInfo) };
    inline LoginInstanceRequest& setInstanceLoginInfo(const LoginInstanceRequest::InstanceLoginInfo & instanceLoginInfo) { DARABONBA_PTR_SET_VALUE(instanceLoginInfo_, instanceLoginInfo) };
    inline LoginInstanceRequest& setInstanceLoginInfo(LoginInstanceRequest::InstanceLoginInfo && instanceLoginInfo) { DARABONBA_PTR_SET_RVALUE(instanceLoginInfo_, instanceLoginInfo) };


    // partnerInfo Field Functions 
    bool hasPartnerInfo() const { return this->partnerInfo_ != nullptr;};
    void deletePartnerInfo() { this->partnerInfo_ = nullptr;};
    inline const LoginInstanceRequest::PartnerInfo & getPartnerInfo() const { DARABONBA_PTR_GET_CONST(partnerInfo_, LoginInstanceRequest::PartnerInfo) };
    inline LoginInstanceRequest::PartnerInfo getPartnerInfo() { DARABONBA_PTR_GET(partnerInfo_, LoginInstanceRequest::PartnerInfo) };
    inline LoginInstanceRequest& setPartnerInfo(const LoginInstanceRequest::PartnerInfo & partnerInfo) { DARABONBA_PTR_SET_VALUE(partnerInfo_, partnerInfo) };
    inline LoginInstanceRequest& setPartnerInfo(LoginInstanceRequest::PartnerInfo && partnerInfo) { DARABONBA_PTR_SET_RVALUE(partnerInfo_, partnerInfo) };


    // userAccount Field Functions 
    bool hasUserAccount() const { return this->userAccount_ != nullptr;};
    void deleteUserAccount() { this->userAccount_ = nullptr;};
    inline const LoginInstanceRequest::UserAccount & getUserAccount() const { DARABONBA_PTR_GET_CONST(userAccount_, LoginInstanceRequest::UserAccount) };
    inline LoginInstanceRequest::UserAccount getUserAccount() { DARABONBA_PTR_GET(userAccount_, LoginInstanceRequest::UserAccount) };
    inline LoginInstanceRequest& setUserAccount(const LoginInstanceRequest::UserAccount & userAccount) { DARABONBA_PTR_SET_VALUE(userAccount_, userAccount) };
    inline LoginInstanceRequest& setUserAccount(LoginInstanceRequest::UserAccount && userAccount) { DARABONBA_PTR_SET_RVALUE(userAccount_, userAccount) };


  protected:
    shared_ptr<LoginInstanceRequest::InstanceLoginInfo> instanceLoginInfo_ {};
    shared_ptr<LoginInstanceRequest::PartnerInfo> partnerInfo_ {};
    shared_ptr<LoginInstanceRequest::UserAccount> userAccount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
