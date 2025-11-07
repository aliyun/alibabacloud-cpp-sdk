// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateApplicationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmConfig, alarmConfigShrink_);
      DARABONBA_PTR_TO_JSON(ApplicationSource, applicationSource_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmConfig, alarmConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ApplicationSource, applicationSource_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    CreateApplicationShrinkRequest() = default ;
    CreateApplicationShrinkRequest(const CreateApplicationShrinkRequest &) = default ;
    CreateApplicationShrinkRequest(CreateApplicationShrinkRequest &&) = default ;
    CreateApplicationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationShrinkRequest() = default ;
    CreateApplicationShrinkRequest& operator=(const CreateApplicationShrinkRequest &) = default ;
    CreateApplicationShrinkRequest& operator=(CreateApplicationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmConfigShrink_ == nullptr
        && return this->applicationSource_ == nullptr && return this->clientToken_ == nullptr && return this->description_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->serviceId_ == nullptr && return this->tagsShrink_ == nullptr; };
    // alarmConfigShrink Field Functions 
    bool hasAlarmConfigShrink() const { return this->alarmConfigShrink_ != nullptr;};
    void deleteAlarmConfigShrink() { this->alarmConfigShrink_ = nullptr;};
    inline string alarmConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(alarmConfigShrink_, "") };
    inline CreateApplicationShrinkRequest& setAlarmConfigShrink(string alarmConfigShrink) { DARABONBA_PTR_SET_VALUE(alarmConfigShrink_, alarmConfigShrink) };


    // applicationSource Field Functions 
    bool hasApplicationSource() const { return this->applicationSource_ != nullptr;};
    void deleteApplicationSource() { this->applicationSource_ = nullptr;};
    inline string applicationSource() const { DARABONBA_PTR_GET_DEFAULT(applicationSource_, "") };
    inline CreateApplicationShrinkRequest& setApplicationSource(string applicationSource) { DARABONBA_PTR_SET_VALUE(applicationSource_, applicationSource) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateApplicationShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApplicationShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateApplicationShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApplicationShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateApplicationShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateApplicationShrinkRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateApplicationShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // The configurations of application alerts.
    std::shared_ptr<string> alarmConfigShrink_ = nullptr;
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
    std::shared_ptr<string> tagsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
