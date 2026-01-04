// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONADVANCEDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONADVANCEDCONFIGREQUEST_HPP_
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
  class UpdateApplicationAdvancedConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationAdvancedConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScimServerAdvancedConfig, scimServerAdvancedConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationAdvancedConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScimServerAdvancedConfig, scimServerAdvancedConfig_);
    };
    UpdateApplicationAdvancedConfigRequest() = default ;
    UpdateApplicationAdvancedConfigRequest(const UpdateApplicationAdvancedConfigRequest &) = default ;
    UpdateApplicationAdvancedConfigRequest(UpdateApplicationAdvancedConfigRequest &&) = default ;
    UpdateApplicationAdvancedConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationAdvancedConfigRequest() = default ;
    UpdateApplicationAdvancedConfigRequest& operator=(const UpdateApplicationAdvancedConfigRequest &) = default ;
    UpdateApplicationAdvancedConfigRequest& operator=(UpdateApplicationAdvancedConfigRequest &&) = default ;
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
    inline UpdateApplicationAdvancedConfigRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateApplicationAdvancedConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scimServerAdvancedConfig Field Functions 
    bool hasScimServerAdvancedConfig() const { return this->scimServerAdvancedConfig_ != nullptr;};
    void deleteScimServerAdvancedConfig() { this->scimServerAdvancedConfig_ = nullptr;};
    inline const UpdateApplicationAdvancedConfigRequest::ScimServerAdvancedConfig & getScimServerAdvancedConfig() const { DARABONBA_PTR_GET_CONST(scimServerAdvancedConfig_, UpdateApplicationAdvancedConfigRequest::ScimServerAdvancedConfig) };
    inline UpdateApplicationAdvancedConfigRequest::ScimServerAdvancedConfig getScimServerAdvancedConfig() { DARABONBA_PTR_GET(scimServerAdvancedConfig_, UpdateApplicationAdvancedConfigRequest::ScimServerAdvancedConfig) };
    inline UpdateApplicationAdvancedConfigRequest& setScimServerAdvancedConfig(const UpdateApplicationAdvancedConfigRequest::ScimServerAdvancedConfig & scimServerAdvancedConfig) { DARABONBA_PTR_SET_VALUE(scimServerAdvancedConfig_, scimServerAdvancedConfig) };
    inline UpdateApplicationAdvancedConfigRequest& setScimServerAdvancedConfig(UpdateApplicationAdvancedConfigRequest::ScimServerAdvancedConfig && scimServerAdvancedConfig) { DARABONBA_PTR_SET_RVALUE(scimServerAdvancedConfig_, scimServerAdvancedConfig) };


  protected:
    // IDaaS的应用资源ID。
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Scim Server 高阶配置
    shared_ptr<UpdateApplicationAdvancedConfigRequest::ScimServerAdvancedConfig> scimServerAdvancedConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
