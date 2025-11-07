// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateApplicationRequestAlarmConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmConfig, alarmConfig_);
      DARABONBA_PTR_TO_JSON(ApplicationSource, applicationSource_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmConfig, alarmConfig_);
      DARABONBA_PTR_FROM_JSON(ApplicationSource, applicationSource_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
    };
    CreateApplicationRequest() = default ;
    CreateApplicationRequest(const CreateApplicationRequest &) = default ;
    CreateApplicationRequest(CreateApplicationRequest &&) = default ;
    CreateApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationRequest() = default ;
    CreateApplicationRequest& operator=(const CreateApplicationRequest &) = default ;
    CreateApplicationRequest& operator=(CreateApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmConfig_ == nullptr
        && return this->applicationSource_ == nullptr && return this->clientToken_ == nullptr && return this->description_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->serviceId_ == nullptr && return this->tags_ == nullptr; };
    // alarmConfig Field Functions 
    bool hasAlarmConfig() const { return this->alarmConfig_ != nullptr;};
    void deleteAlarmConfig() { this->alarmConfig_ = nullptr;};
    inline const CreateApplicationRequestAlarmConfig & alarmConfig() const { DARABONBA_PTR_GET_CONST(alarmConfig_, CreateApplicationRequestAlarmConfig) };
    inline CreateApplicationRequestAlarmConfig alarmConfig() { DARABONBA_PTR_GET(alarmConfig_, CreateApplicationRequestAlarmConfig) };
    inline CreateApplicationRequest& setAlarmConfig(const CreateApplicationRequestAlarmConfig & alarmConfig) { DARABONBA_PTR_SET_VALUE(alarmConfig_, alarmConfig) };
    inline CreateApplicationRequest& setAlarmConfig(CreateApplicationRequestAlarmConfig && alarmConfig) { DARABONBA_PTR_SET_RVALUE(alarmConfig_, alarmConfig) };


    // applicationSource Field Functions 
    bool hasApplicationSource() const { return this->applicationSource_ != nullptr;};
    void deleteApplicationSource() { this->applicationSource_ = nullptr;};
    inline string applicationSource() const { DARABONBA_PTR_GET_DEFAULT(applicationSource_, "") };
    inline CreateApplicationRequest& setApplicationSource(string applicationSource) { DARABONBA_PTR_SET_VALUE(applicationSource_, applicationSource) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateApplicationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApplicationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateApplicationRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApplicationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateApplicationRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateApplicationRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline CreateApplicationRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateApplicationRequest& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


  protected:
    // The configurations of application alerts.
    std::shared_ptr<CreateApplicationRequestAlarmConfig> alarmConfig_ = nullptr;
    // The source of application.
    std::shared_ptr<string> applicationSource_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The application name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The region ID. Set the value to cn-hangzhou.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the Compute Nest service that corresponds to the application template.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The tags.
    Darabonba::Json tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
