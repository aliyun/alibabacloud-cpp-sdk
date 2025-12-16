// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONADVANCEDCONFIGRESPONSEBODYAPPLICATIONADVANCEDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONADVANCEDCONFIGRESPONSEBODYAPPLICATIONADVANCEDCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScimServerAdvancedConfig, scimServerAdvancedConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScimServerAdvancedConfig, scimServerAdvancedConfig_);
    };
    GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfig() = default ;
    GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfig(const GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfig &) = default ;
    GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfig(GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfig &&) = default ;
    GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfig() = default ;
    GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfig& operator=(const GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfig &) = default ;
    GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfig& operator=(GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfig &&) = default ;
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
    inline GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfig& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scimServerAdvancedConfig Field Functions 
    bool hasScimServerAdvancedConfig() const { return this->scimServerAdvancedConfig_ != nullptr;};
    void deleteScimServerAdvancedConfig() { this->scimServerAdvancedConfig_ = nullptr;};
    inline const Models::GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig & scimServerAdvancedConfig() const { DARABONBA_PTR_GET_CONST(scimServerAdvancedConfig_, Models::GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig) };
    inline Models::GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig scimServerAdvancedConfig() { DARABONBA_PTR_GET(scimServerAdvancedConfig_, Models::GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig) };
    inline GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfig& setScimServerAdvancedConfig(const Models::GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig & scimServerAdvancedConfig) { DARABONBA_PTR_SET_VALUE(scimServerAdvancedConfig_, scimServerAdvancedConfig) };
    inline GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfig& setScimServerAdvancedConfig(Models::GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig && scimServerAdvancedConfig) { DARABONBA_PTR_SET_RVALUE(scimServerAdvancedConfig_, scimServerAdvancedConfig) };


  protected:
    // IDaaS EIAM 应用Id
    std::shared_ptr<string> applicationId_ = nullptr;
    // IDaaS EIAM 实例Id
    std::shared_ptr<string> instanceId_ = nullptr;
    // Scim Server 高阶配置
    std::shared_ptr<Models::GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig> scimServerAdvancedConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
