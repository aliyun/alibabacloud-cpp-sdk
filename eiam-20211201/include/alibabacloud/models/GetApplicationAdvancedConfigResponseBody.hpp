// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONADVANCEDCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONADVANCEDCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationAdvancedConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationAdvancedConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationAdvancedConfig, applicationAdvancedConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationAdvancedConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationAdvancedConfig, applicationAdvancedConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApplicationAdvancedConfigResponseBody() = default ;
    GetApplicationAdvancedConfigResponseBody(const GetApplicationAdvancedConfigResponseBody &) = default ;
    GetApplicationAdvancedConfigResponseBody(GetApplicationAdvancedConfigResponseBody &&) = default ;
    GetApplicationAdvancedConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationAdvancedConfigResponseBody() = default ;
    GetApplicationAdvancedConfigResponseBody& operator=(const GetApplicationAdvancedConfigResponseBody &) = default ;
    GetApplicationAdvancedConfigResponseBody& operator=(GetApplicationAdvancedConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationAdvancedConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationAdvancedConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ScimServerAdvancedConfig, scimServerAdvancedConfig_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationAdvancedConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ScimServerAdvancedConfig, scimServerAdvancedConfig_);
      };
      ApplicationAdvancedConfig() = default ;
      ApplicationAdvancedConfig(const ApplicationAdvancedConfig &) = default ;
      ApplicationAdvancedConfig(ApplicationAdvancedConfig &&) = default ;
      ApplicationAdvancedConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationAdvancedConfig() = default ;
      ApplicationAdvancedConfig& operator=(const ApplicationAdvancedConfig &) = default ;
      ApplicationAdvancedConfig& operator=(ApplicationAdvancedConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ScimServerAdvancedConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScimServerAdvancedConfig& obj) { 
          DARABONBA_PTR_TO_JSON(SupportedUserCustomFieldIds, supportedUserCustomFieldIds_);
          DARABONBA_PTR_TO_JSON(UserCustomFieldNamespace, userCustomFieldNamespace_);
        };
        friend void from_json(const Darabonba::Json& j, ScimServerAdvancedConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(SupportedUserCustomFieldIds, supportedUserCustomFieldIds_);
          DARABONBA_PTR_FROM_JSON(UserCustomFieldNamespace, userCustomFieldNamespace_);
        };
        ScimServerAdvancedConfig() = default ;
        ScimServerAdvancedConfig(const ScimServerAdvancedConfig &) = default ;
        ScimServerAdvancedConfig(ScimServerAdvancedConfig &&) = default ;
        ScimServerAdvancedConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScimServerAdvancedConfig() = default ;
        ScimServerAdvancedConfig& operator=(const ScimServerAdvancedConfig &) = default ;
        ScimServerAdvancedConfig& operator=(ScimServerAdvancedConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->supportedUserCustomFieldIds_ == nullptr
        && this->userCustomFieldNamespace_ == nullptr; };
        // supportedUserCustomFieldIds Field Functions 
        bool hasSupportedUserCustomFieldIds() const { return this->supportedUserCustomFieldIds_ != nullptr;};
        void deleteSupportedUserCustomFieldIds() { this->supportedUserCustomFieldIds_ = nullptr;};
        inline const vector<string> & getSupportedUserCustomFieldIds() const { DARABONBA_PTR_GET_CONST(supportedUserCustomFieldIds_, vector<string>) };
        inline vector<string> getSupportedUserCustomFieldIds() { DARABONBA_PTR_GET(supportedUserCustomFieldIds_, vector<string>) };
        inline ScimServerAdvancedConfig& setSupportedUserCustomFieldIds(const vector<string> & supportedUserCustomFieldIds) { DARABONBA_PTR_SET_VALUE(supportedUserCustomFieldIds_, supportedUserCustomFieldIds) };
        inline ScimServerAdvancedConfig& setSupportedUserCustomFieldIds(vector<string> && supportedUserCustomFieldIds) { DARABONBA_PTR_SET_RVALUE(supportedUserCustomFieldIds_, supportedUserCustomFieldIds) };


        // userCustomFieldNamespace Field Functions 
        bool hasUserCustomFieldNamespace() const { return this->userCustomFieldNamespace_ != nullptr;};
        void deleteUserCustomFieldNamespace() { this->userCustomFieldNamespace_ = nullptr;};
        inline string getUserCustomFieldNamespace() const { DARABONBA_PTR_GET_DEFAULT(userCustomFieldNamespace_, "") };
        inline ScimServerAdvancedConfig& setUserCustomFieldNamespace(string userCustomFieldNamespace) { DARABONBA_PTR_SET_VALUE(userCustomFieldNamespace_, userCustomFieldNamespace) };


      protected:
        // 支持的用户自定义字段ID列表。
        shared_ptr<vector<string>> supportedUserCustomFieldIds_ {};
        // 用户扩展字段的命名空间。
        shared_ptr<string> userCustomFieldNamespace_ {};
      };

      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->instanceId_ == nullptr && this->scimServerAdvancedConfig_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline ApplicationAdvancedConfig& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ApplicationAdvancedConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // scimServerAdvancedConfig Field Functions 
      bool hasScimServerAdvancedConfig() const { return this->scimServerAdvancedConfig_ != nullptr;};
      void deleteScimServerAdvancedConfig() { this->scimServerAdvancedConfig_ = nullptr;};
      inline const ApplicationAdvancedConfig::ScimServerAdvancedConfig & getScimServerAdvancedConfig() const { DARABONBA_PTR_GET_CONST(scimServerAdvancedConfig_, ApplicationAdvancedConfig::ScimServerAdvancedConfig) };
      inline ApplicationAdvancedConfig::ScimServerAdvancedConfig getScimServerAdvancedConfig() { DARABONBA_PTR_GET(scimServerAdvancedConfig_, ApplicationAdvancedConfig::ScimServerAdvancedConfig) };
      inline ApplicationAdvancedConfig& setScimServerAdvancedConfig(const ApplicationAdvancedConfig::ScimServerAdvancedConfig & scimServerAdvancedConfig) { DARABONBA_PTR_SET_VALUE(scimServerAdvancedConfig_, scimServerAdvancedConfig) };
      inline ApplicationAdvancedConfig& setScimServerAdvancedConfig(ApplicationAdvancedConfig::ScimServerAdvancedConfig && scimServerAdvancedConfig) { DARABONBA_PTR_SET_RVALUE(scimServerAdvancedConfig_, scimServerAdvancedConfig) };


    protected:
      // IDaaS EIAM 应用Id
      shared_ptr<string> applicationId_ {};
      // IDaaS EIAM 实例Id
      shared_ptr<string> instanceId_ {};
      // Scim Server 高阶配置
      shared_ptr<ApplicationAdvancedConfig::ScimServerAdvancedConfig> scimServerAdvancedConfig_ {};
    };

    virtual bool empty() const override { return this->applicationAdvancedConfig_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationAdvancedConfig Field Functions 
    bool hasApplicationAdvancedConfig() const { return this->applicationAdvancedConfig_ != nullptr;};
    void deleteApplicationAdvancedConfig() { this->applicationAdvancedConfig_ = nullptr;};
    inline const GetApplicationAdvancedConfigResponseBody::ApplicationAdvancedConfig & getApplicationAdvancedConfig() const { DARABONBA_PTR_GET_CONST(applicationAdvancedConfig_, GetApplicationAdvancedConfigResponseBody::ApplicationAdvancedConfig) };
    inline GetApplicationAdvancedConfigResponseBody::ApplicationAdvancedConfig getApplicationAdvancedConfig() { DARABONBA_PTR_GET(applicationAdvancedConfig_, GetApplicationAdvancedConfigResponseBody::ApplicationAdvancedConfig) };
    inline GetApplicationAdvancedConfigResponseBody& setApplicationAdvancedConfig(const GetApplicationAdvancedConfigResponseBody::ApplicationAdvancedConfig & applicationAdvancedConfig) { DARABONBA_PTR_SET_VALUE(applicationAdvancedConfig_, applicationAdvancedConfig) };
    inline GetApplicationAdvancedConfigResponseBody& setApplicationAdvancedConfig(GetApplicationAdvancedConfigResponseBody::ApplicationAdvancedConfig && applicationAdvancedConfig) { DARABONBA_PTR_SET_RVALUE(applicationAdvancedConfig_, applicationAdvancedConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationAdvancedConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetApplicationAdvancedConfigResponseBody::ApplicationAdvancedConfig> applicationAdvancedConfig_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
