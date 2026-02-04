// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERADVANCEDCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERADVANCEDCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetIdentityProviderAdvancedConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderAdvancedConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedConfiguration, advancedConfiguration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderAdvancedConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedConfiguration, advancedConfiguration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetIdentityProviderAdvancedConfigurationResponseBody() = default ;
    GetIdentityProviderAdvancedConfigurationResponseBody(const GetIdentityProviderAdvancedConfigurationResponseBody &) = default ;
    GetIdentityProviderAdvancedConfigurationResponseBody(GetIdentityProviderAdvancedConfigurationResponseBody &&) = default ;
    GetIdentityProviderAdvancedConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderAdvancedConfigurationResponseBody() = default ;
    GetIdentityProviderAdvancedConfigurationResponseBody& operator=(const GetIdentityProviderAdvancedConfigurationResponseBody &) = default ;
    GetIdentityProviderAdvancedConfigurationResponseBody& operator=(GetIdentityProviderAdvancedConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AdvancedConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdvancedConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(DingtalkAdvancedConfig, dingtalkAdvancedConfig_);
        DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, AdvancedConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(DingtalkAdvancedConfig, dingtalkAdvancedConfig_);
        DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      AdvancedConfiguration() = default ;
      AdvancedConfiguration(const AdvancedConfiguration &) = default ;
      AdvancedConfiguration(AdvancedConfiguration &&) = default ;
      AdvancedConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdvancedConfiguration() = default ;
      AdvancedConfiguration& operator=(const AdvancedConfiguration &) = default ;
      AdvancedConfiguration& operator=(AdvancedConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DingtalkAdvancedConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DingtalkAdvancedConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AppKey, appKey_);
          DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
        };
        friend void from_json(const Darabonba::Json& j, DingtalkAdvancedConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
          DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
        };
        DingtalkAdvancedConfig() = default ;
        DingtalkAdvancedConfig(const DingtalkAdvancedConfig &) = default ;
        DingtalkAdvancedConfig(DingtalkAdvancedConfig &&) = default ;
        DingtalkAdvancedConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DingtalkAdvancedConfig() = default ;
        DingtalkAdvancedConfig& operator=(const DingtalkAdvancedConfig &) = default ;
        DingtalkAdvancedConfig& operator=(DingtalkAdvancedConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appKey_ == nullptr
        && this->appSecret_ == nullptr; };
        // appKey Field Functions 
        bool hasAppKey() const { return this->appKey_ != nullptr;};
        void deleteAppKey() { this->appKey_ = nullptr;};
        inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
        inline DingtalkAdvancedConfig& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


        // appSecret Field Functions 
        bool hasAppSecret() const { return this->appSecret_ != nullptr;};
        void deleteAppSecret() { this->appSecret_ = nullptr;};
        inline string getAppSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
        inline DingtalkAdvancedConfig& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


      protected:
        // IDaaS EIAM 钉钉一方应用的AppKey
        shared_ptr<string> appKey_ {};
        // IDaaS EIAM 钉钉一方应用的AppSecret
        shared_ptr<string> appSecret_ {};
      };

      virtual bool empty() const override { return this->dingtalkAdvancedConfig_ == nullptr
        && this->identityProviderId_ == nullptr && this->instanceId_ == nullptr; };
      // dingtalkAdvancedConfig Field Functions 
      bool hasDingtalkAdvancedConfig() const { return this->dingtalkAdvancedConfig_ != nullptr;};
      void deleteDingtalkAdvancedConfig() { this->dingtalkAdvancedConfig_ = nullptr;};
      inline const AdvancedConfiguration::DingtalkAdvancedConfig & getDingtalkAdvancedConfig() const { DARABONBA_PTR_GET_CONST(dingtalkAdvancedConfig_, AdvancedConfiguration::DingtalkAdvancedConfig) };
      inline AdvancedConfiguration::DingtalkAdvancedConfig getDingtalkAdvancedConfig() { DARABONBA_PTR_GET(dingtalkAdvancedConfig_, AdvancedConfiguration::DingtalkAdvancedConfig) };
      inline AdvancedConfiguration& setDingtalkAdvancedConfig(const AdvancedConfiguration::DingtalkAdvancedConfig & dingtalkAdvancedConfig) { DARABONBA_PTR_SET_VALUE(dingtalkAdvancedConfig_, dingtalkAdvancedConfig) };
      inline AdvancedConfiguration& setDingtalkAdvancedConfig(AdvancedConfiguration::DingtalkAdvancedConfig && dingtalkAdvancedConfig) { DARABONBA_PTR_SET_RVALUE(dingtalkAdvancedConfig_, dingtalkAdvancedConfig) };


      // identityProviderId Field Functions 
      bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
      void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
      inline string getIdentityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
      inline AdvancedConfiguration& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AdvancedConfiguration& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // 钉钉高阶配置
      shared_ptr<AdvancedConfiguration::DingtalkAdvancedConfig> dingtalkAdvancedConfig_ {};
      // IDaaS EIAM 身份提供方ID
      shared_ptr<string> identityProviderId_ {};
      // IDaaS EIAM 实例Id
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->advancedConfiguration_ == nullptr
        && this->requestId_ == nullptr; };
    // advancedConfiguration Field Functions 
    bool hasAdvancedConfiguration() const { return this->advancedConfiguration_ != nullptr;};
    void deleteAdvancedConfiguration() { this->advancedConfiguration_ = nullptr;};
    inline const GetIdentityProviderAdvancedConfigurationResponseBody::AdvancedConfiguration & getAdvancedConfiguration() const { DARABONBA_PTR_GET_CONST(advancedConfiguration_, GetIdentityProviderAdvancedConfigurationResponseBody::AdvancedConfiguration) };
    inline GetIdentityProviderAdvancedConfigurationResponseBody::AdvancedConfiguration getAdvancedConfiguration() { DARABONBA_PTR_GET(advancedConfiguration_, GetIdentityProviderAdvancedConfigurationResponseBody::AdvancedConfiguration) };
    inline GetIdentityProviderAdvancedConfigurationResponseBody& setAdvancedConfiguration(const GetIdentityProviderAdvancedConfigurationResponseBody::AdvancedConfiguration & advancedConfiguration) { DARABONBA_PTR_SET_VALUE(advancedConfiguration_, advancedConfiguration) };
    inline GetIdentityProviderAdvancedConfigurationResponseBody& setAdvancedConfiguration(GetIdentityProviderAdvancedConfigurationResponseBody::AdvancedConfiguration && advancedConfiguration) { DARABONBA_PTR_SET_RVALUE(advancedConfiguration_, advancedConfiguration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIdentityProviderAdvancedConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetIdentityProviderAdvancedConfigurationResponseBody::AdvancedConfiguration> advancedConfiguration_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
