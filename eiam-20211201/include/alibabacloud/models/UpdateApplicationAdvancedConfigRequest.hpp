// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONADVANCEDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONADVANCEDCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateApplicationAdvancedConfigRequestScimServerAdvancedConfig.hpp>
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
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->instanceId_ == nullptr && return this->scimServerAdvancedConfig_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdateApplicationAdvancedConfigRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateApplicationAdvancedConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scimServerAdvancedConfig Field Functions 
    bool hasScimServerAdvancedConfig() const { return this->scimServerAdvancedConfig_ != nullptr;};
    void deleteScimServerAdvancedConfig() { this->scimServerAdvancedConfig_ = nullptr;};
    inline const UpdateApplicationAdvancedConfigRequestScimServerAdvancedConfig & scimServerAdvancedConfig() const { DARABONBA_PTR_GET_CONST(scimServerAdvancedConfig_, UpdateApplicationAdvancedConfigRequestScimServerAdvancedConfig) };
    inline UpdateApplicationAdvancedConfigRequestScimServerAdvancedConfig scimServerAdvancedConfig() { DARABONBA_PTR_GET(scimServerAdvancedConfig_, UpdateApplicationAdvancedConfigRequestScimServerAdvancedConfig) };
    inline UpdateApplicationAdvancedConfigRequest& setScimServerAdvancedConfig(const UpdateApplicationAdvancedConfigRequestScimServerAdvancedConfig & scimServerAdvancedConfig) { DARABONBA_PTR_SET_VALUE(scimServerAdvancedConfig_, scimServerAdvancedConfig) };
    inline UpdateApplicationAdvancedConfigRequest& setScimServerAdvancedConfig(UpdateApplicationAdvancedConfigRequestScimServerAdvancedConfig && scimServerAdvancedConfig) { DARABONBA_PTR_SET_RVALUE(scimServerAdvancedConfig_, scimServerAdvancedConfig) };


  protected:
    // IDaaS的应用资源ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Scim Server 高阶配置
    std::shared_ptr<UpdateApplicationAdvancedConfigRequestScimServerAdvancedConfig> scimServerAdvancedConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
