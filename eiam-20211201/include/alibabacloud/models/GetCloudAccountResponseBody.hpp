// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetCloudAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAccount, cloudAccount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAccount, cloudAccount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCloudAccountResponseBody() = default ;
    GetCloudAccountResponseBody(const GetCloudAccountResponseBody &) = default ;
    GetCloudAccountResponseBody(GetCloudAccountResponseBody &&) = default ;
    GetCloudAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAccountResponseBody() = default ;
    GetCloudAccountResponseBody& operator=(const GetCloudAccountResponseBody &) = default ;
    GetCloudAccountResponseBody& operator=(GetCloudAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudAccount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudAccount& obj) { 
        DARABONBA_PTR_TO_JSON(CloudAccountExternalId, cloudAccountExternalId_);
        DARABONBA_PTR_TO_JSON(CloudAccountHealth, cloudAccountHealth_);
        DARABONBA_PTR_TO_JSON(CloudAccountHealthCheckResult, cloudAccountHealthCheckResult_);
        DARABONBA_PTR_TO_JSON(CloudAccountId, cloudAccountId_);
        DARABONBA_PTR_TO_JSON(CloudAccountName, cloudAccountName_);
        DARABONBA_PTR_TO_JSON(CloudAccountProviderConfig, cloudAccountProviderConfig_);
        DARABONBA_PTR_TO_JSON(CloudAccountProviderName, cloudAccountProviderName_);
        DARABONBA_PTR_TO_JSON(CloudAccountVendorType, cloudAccountVendorType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, CloudAccount& obj) { 
        DARABONBA_PTR_FROM_JSON(CloudAccountExternalId, cloudAccountExternalId_);
        DARABONBA_PTR_FROM_JSON(CloudAccountHealth, cloudAccountHealth_);
        DARABONBA_PTR_FROM_JSON(CloudAccountHealthCheckResult, cloudAccountHealthCheckResult_);
        DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
        DARABONBA_PTR_FROM_JSON(CloudAccountName, cloudAccountName_);
        DARABONBA_PTR_FROM_JSON(CloudAccountProviderConfig, cloudAccountProviderConfig_);
        DARABONBA_PTR_FROM_JSON(CloudAccountProviderName, cloudAccountProviderName_);
        DARABONBA_PTR_FROM_JSON(CloudAccountVendorType, cloudAccountVendorType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      CloudAccount() = default ;
      CloudAccount(const CloudAccount &) = default ;
      CloudAccount(CloudAccount &&) = default ;
      CloudAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudAccount() = default ;
      CloudAccount& operator=(const CloudAccount &) = default ;
      CloudAccount& operator=(CloudAccount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CloudAccountProviderConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CloudAccountProviderConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Audience, audience_);
          DARABONBA_PTR_TO_JSON(AuthorizationServerId, authorizationServerId_);
          DARABONBA_PTR_TO_JSON(Issuer, issuer_);
          DARABONBA_PTR_TO_JSON(OidcJwksEndpoint, oidcJwksEndpoint_);
        };
        friend void from_json(const Darabonba::Json& j, CloudAccountProviderConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Audience, audience_);
          DARABONBA_PTR_FROM_JSON(AuthorizationServerId, authorizationServerId_);
          DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
          DARABONBA_PTR_FROM_JSON(OidcJwksEndpoint, oidcJwksEndpoint_);
        };
        CloudAccountProviderConfig() = default ;
        CloudAccountProviderConfig(const CloudAccountProviderConfig &) = default ;
        CloudAccountProviderConfig(CloudAccountProviderConfig &&) = default ;
        CloudAccountProviderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CloudAccountProviderConfig() = default ;
        CloudAccountProviderConfig& operator=(const CloudAccountProviderConfig &) = default ;
        CloudAccountProviderConfig& operator=(CloudAccountProviderConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->audience_ == nullptr
        && this->authorizationServerId_ == nullptr && this->issuer_ == nullptr && this->oidcJwksEndpoint_ == nullptr; };
        // audience Field Functions 
        bool hasAudience() const { return this->audience_ != nullptr;};
        void deleteAudience() { this->audience_ = nullptr;};
        inline string getAudience() const { DARABONBA_PTR_GET_DEFAULT(audience_, "") };
        inline CloudAccountProviderConfig& setAudience(string audience) { DARABONBA_PTR_SET_VALUE(audience_, audience) };


        // authorizationServerId Field Functions 
        bool hasAuthorizationServerId() const { return this->authorizationServerId_ != nullptr;};
        void deleteAuthorizationServerId() { this->authorizationServerId_ = nullptr;};
        inline string getAuthorizationServerId() const { DARABONBA_PTR_GET_DEFAULT(authorizationServerId_, "") };
        inline CloudAccountProviderConfig& setAuthorizationServerId(string authorizationServerId) { DARABONBA_PTR_SET_VALUE(authorizationServerId_, authorizationServerId) };


        // issuer Field Functions 
        bool hasIssuer() const { return this->issuer_ != nullptr;};
        void deleteIssuer() { this->issuer_ = nullptr;};
        inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
        inline CloudAccountProviderConfig& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


        // oidcJwksEndpoint Field Functions 
        bool hasOidcJwksEndpoint() const { return this->oidcJwksEndpoint_ != nullptr;};
        void deleteOidcJwksEndpoint() { this->oidcJwksEndpoint_ = nullptr;};
        inline string getOidcJwksEndpoint() const { DARABONBA_PTR_GET_DEFAULT(oidcJwksEndpoint_, "") };
        inline CloudAccountProviderConfig& setOidcJwksEndpoint(string oidcJwksEndpoint) { DARABONBA_PTR_SET_VALUE(oidcJwksEndpoint_, oidcJwksEndpoint) };


      protected:
        // 受众标识
        shared_ptr<string> audience_ {};
        // 授权服务ID
        shared_ptr<string> authorizationServerId_ {};
        // Issuer。
        shared_ptr<string> issuer_ {};
        // 验签公钥端点
        shared_ptr<string> oidcJwksEndpoint_ {};
      };

      class CloudAccountHealthCheckResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CloudAccountHealthCheckResult& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorReason, errorReason_);
          DARABONBA_PTR_TO_JSON(LastCheckTime, lastCheckTime_);
          DARABONBA_PTR_TO_JSON(Result, result_);
        };
        friend void from_json(const Darabonba::Json& j, CloudAccountHealthCheckResult& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorReason, errorReason_);
          DARABONBA_PTR_FROM_JSON(LastCheckTime, lastCheckTime_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
        };
        CloudAccountHealthCheckResult() = default ;
        CloudAccountHealthCheckResult(const CloudAccountHealthCheckResult &) = default ;
        CloudAccountHealthCheckResult(CloudAccountHealthCheckResult &&) = default ;
        CloudAccountHealthCheckResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CloudAccountHealthCheckResult() = default ;
        CloudAccountHealthCheckResult& operator=(const CloudAccountHealthCheckResult &) = default ;
        CloudAccountHealthCheckResult& operator=(CloudAccountHealthCheckResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ErrorReason : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ErrorReason& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          };
          friend void from_json(const Darabonba::Json& j, ErrorReason& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          };
          ErrorReason() = default ;
          ErrorReason(const ErrorReason &) = default ;
          ErrorReason(ErrorReason &&) = default ;
          ErrorReason(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ErrorReason() = default ;
          ErrorReason& operator=(const ErrorReason &) = default ;
          ErrorReason& operator=(ErrorReason &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr; };
          // errorCode Field Functions 
          bool hasErrorCode() const { return this->errorCode_ != nullptr;};
          void deleteErrorCode() { this->errorCode_ = nullptr;};
          inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
          inline ErrorReason& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline ErrorReason& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        protected:
          shared_ptr<string> errorCode_ {};
          shared_ptr<string> errorMessage_ {};
        };

        virtual bool empty() const override { return this->errorReason_ == nullptr
        && this->lastCheckTime_ == nullptr && this->result_ == nullptr; };
        // errorReason Field Functions 
        bool hasErrorReason() const { return this->errorReason_ != nullptr;};
        void deleteErrorReason() { this->errorReason_ = nullptr;};
        inline const CloudAccountHealthCheckResult::ErrorReason & getErrorReason() const { DARABONBA_PTR_GET_CONST(errorReason_, CloudAccountHealthCheckResult::ErrorReason) };
        inline CloudAccountHealthCheckResult::ErrorReason getErrorReason() { DARABONBA_PTR_GET(errorReason_, CloudAccountHealthCheckResult::ErrorReason) };
        inline CloudAccountHealthCheckResult& setErrorReason(const CloudAccountHealthCheckResult::ErrorReason & errorReason) { DARABONBA_PTR_SET_VALUE(errorReason_, errorReason) };
        inline CloudAccountHealthCheckResult& setErrorReason(CloudAccountHealthCheckResult::ErrorReason && errorReason) { DARABONBA_PTR_SET_RVALUE(errorReason_, errorReason) };


        // lastCheckTime Field Functions 
        bool hasLastCheckTime() const { return this->lastCheckTime_ != nullptr;};
        void deleteLastCheckTime() { this->lastCheckTime_ = nullptr;};
        inline int64_t getLastCheckTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckTime_, 0L) };
        inline CloudAccountHealthCheckResult& setLastCheckTime(int64_t lastCheckTime) { DARABONBA_PTR_SET_VALUE(lastCheckTime_, lastCheckTime) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline CloudAccountHealthCheckResult& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      protected:
        shared_ptr<CloudAccountHealthCheckResult::ErrorReason> errorReason_ {};
        shared_ptr<int64_t> lastCheckTime_ {};
        shared_ptr<string> result_ {};
      };

      virtual bool empty() const override { return this->cloudAccountExternalId_ == nullptr
        && this->cloudAccountHealth_ == nullptr && this->cloudAccountHealthCheckResult_ == nullptr && this->cloudAccountId_ == nullptr && this->cloudAccountName_ == nullptr && this->cloudAccountProviderConfig_ == nullptr
        && this->cloudAccountProviderName_ == nullptr && this->cloudAccountVendorType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr
        && this->updateTime_ == nullptr; };
      // cloudAccountExternalId Field Functions 
      bool hasCloudAccountExternalId() const { return this->cloudAccountExternalId_ != nullptr;};
      void deleteCloudAccountExternalId() { this->cloudAccountExternalId_ = nullptr;};
      inline string getCloudAccountExternalId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountExternalId_, "") };
      inline CloudAccount& setCloudAccountExternalId(string cloudAccountExternalId) { DARABONBA_PTR_SET_VALUE(cloudAccountExternalId_, cloudAccountExternalId) };


      // cloudAccountHealth Field Functions 
      bool hasCloudAccountHealth() const { return this->cloudAccountHealth_ != nullptr;};
      void deleteCloudAccountHealth() { this->cloudAccountHealth_ = nullptr;};
      inline string getCloudAccountHealth() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountHealth_, "") };
      inline CloudAccount& setCloudAccountHealth(string cloudAccountHealth) { DARABONBA_PTR_SET_VALUE(cloudAccountHealth_, cloudAccountHealth) };


      // cloudAccountHealthCheckResult Field Functions 
      bool hasCloudAccountHealthCheckResult() const { return this->cloudAccountHealthCheckResult_ != nullptr;};
      void deleteCloudAccountHealthCheckResult() { this->cloudAccountHealthCheckResult_ = nullptr;};
      inline const CloudAccount::CloudAccountHealthCheckResult & getCloudAccountHealthCheckResult() const { DARABONBA_PTR_GET_CONST(cloudAccountHealthCheckResult_, CloudAccount::CloudAccountHealthCheckResult) };
      inline CloudAccount::CloudAccountHealthCheckResult getCloudAccountHealthCheckResult() { DARABONBA_PTR_GET(cloudAccountHealthCheckResult_, CloudAccount::CloudAccountHealthCheckResult) };
      inline CloudAccount& setCloudAccountHealthCheckResult(const CloudAccount::CloudAccountHealthCheckResult & cloudAccountHealthCheckResult) { DARABONBA_PTR_SET_VALUE(cloudAccountHealthCheckResult_, cloudAccountHealthCheckResult) };
      inline CloudAccount& setCloudAccountHealthCheckResult(CloudAccount::CloudAccountHealthCheckResult && cloudAccountHealthCheckResult) { DARABONBA_PTR_SET_RVALUE(cloudAccountHealthCheckResult_, cloudAccountHealthCheckResult) };


      // cloudAccountId Field Functions 
      bool hasCloudAccountId() const { return this->cloudAccountId_ != nullptr;};
      void deleteCloudAccountId() { this->cloudAccountId_ = nullptr;};
      inline string getCloudAccountId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountId_, "") };
      inline CloudAccount& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


      // cloudAccountName Field Functions 
      bool hasCloudAccountName() const { return this->cloudAccountName_ != nullptr;};
      void deleteCloudAccountName() { this->cloudAccountName_ = nullptr;};
      inline string getCloudAccountName() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountName_, "") };
      inline CloudAccount& setCloudAccountName(string cloudAccountName) { DARABONBA_PTR_SET_VALUE(cloudAccountName_, cloudAccountName) };


      // cloudAccountProviderConfig Field Functions 
      bool hasCloudAccountProviderConfig() const { return this->cloudAccountProviderConfig_ != nullptr;};
      void deleteCloudAccountProviderConfig() { this->cloudAccountProviderConfig_ = nullptr;};
      inline const CloudAccount::CloudAccountProviderConfig & getCloudAccountProviderConfig() const { DARABONBA_PTR_GET_CONST(cloudAccountProviderConfig_, CloudAccount::CloudAccountProviderConfig) };
      inline CloudAccount::CloudAccountProviderConfig getCloudAccountProviderConfig() { DARABONBA_PTR_GET(cloudAccountProviderConfig_, CloudAccount::CloudAccountProviderConfig) };
      inline CloudAccount& setCloudAccountProviderConfig(const CloudAccount::CloudAccountProviderConfig & cloudAccountProviderConfig) { DARABONBA_PTR_SET_VALUE(cloudAccountProviderConfig_, cloudAccountProviderConfig) };
      inline CloudAccount& setCloudAccountProviderConfig(CloudAccount::CloudAccountProviderConfig && cloudAccountProviderConfig) { DARABONBA_PTR_SET_RVALUE(cloudAccountProviderConfig_, cloudAccountProviderConfig) };


      // cloudAccountProviderName Field Functions 
      bool hasCloudAccountProviderName() const { return this->cloudAccountProviderName_ != nullptr;};
      void deleteCloudAccountProviderName() { this->cloudAccountProviderName_ = nullptr;};
      inline string getCloudAccountProviderName() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountProviderName_, "") };
      inline CloudAccount& setCloudAccountProviderName(string cloudAccountProviderName) { DARABONBA_PTR_SET_VALUE(cloudAccountProviderName_, cloudAccountProviderName) };


      // cloudAccountVendorType Field Functions 
      bool hasCloudAccountVendorType() const { return this->cloudAccountVendorType_ != nullptr;};
      void deleteCloudAccountVendorType() { this->cloudAccountVendorType_ = nullptr;};
      inline string getCloudAccountVendorType() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountVendorType_, "") };
      inline CloudAccount& setCloudAccountVendorType(string cloudAccountVendorType) { DARABONBA_PTR_SET_VALUE(cloudAccountVendorType_, cloudAccountVendorType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline CloudAccount& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CloudAccount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CloudAccount& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline CloudAccount& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // 云账号外部唯一ID
      shared_ptr<string> cloudAccountExternalId_ {};
      // 云账号状态
      shared_ptr<string> cloudAccountHealth_ {};
      shared_ptr<CloudAccount::CloudAccountHealthCheckResult> cloudAccountHealthCheckResult_ {};
      // 云账号ID
      shared_ptr<string> cloudAccountId_ {};
      // 云账号名称
      shared_ptr<string> cloudAccountName_ {};
      // 云账号提供商配置
      shared_ptr<CloudAccount::CloudAccountProviderConfig> cloudAccountProviderConfig_ {};
      // 云账号提供商名称
      shared_ptr<string> cloudAccountProviderName_ {};
      // 云账号类别
      shared_ptr<string> cloudAccountVendorType_ {};
      shared_ptr<int64_t> createTime_ {};
      // 云账号描述
      shared_ptr<string> description_ {};
      // IDaaS EIAM 实例Id
      shared_ptr<string> instanceId_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->cloudAccount_ == nullptr
        && this->requestId_ == nullptr; };
    // cloudAccount Field Functions 
    bool hasCloudAccount() const { return this->cloudAccount_ != nullptr;};
    void deleteCloudAccount() { this->cloudAccount_ = nullptr;};
    inline const GetCloudAccountResponseBody::CloudAccount & getCloudAccount() const { DARABONBA_PTR_GET_CONST(cloudAccount_, GetCloudAccountResponseBody::CloudAccount) };
    inline GetCloudAccountResponseBody::CloudAccount getCloudAccount() { DARABONBA_PTR_GET(cloudAccount_, GetCloudAccountResponseBody::CloudAccount) };
    inline GetCloudAccountResponseBody& setCloudAccount(const GetCloudAccountResponseBody::CloudAccount & cloudAccount) { DARABONBA_PTR_SET_VALUE(cloudAccount_, cloudAccount) };
    inline GetCloudAccountResponseBody& setCloudAccount(GetCloudAccountResponseBody::CloudAccount && cloudAccount) { DARABONBA_PTR_SET_RVALUE(cloudAccount_, cloudAccount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCloudAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetCloudAccountResponseBody::CloudAccount> cloudAccount_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
