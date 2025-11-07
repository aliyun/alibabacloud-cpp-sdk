// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTATECONFIGURATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTATECONFIGURATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UpdateStateConfigurationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStateConfigurationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConfigureMode, configureMode_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ScheduleExpression, scheduleExpression_);
      DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_TO_JSON(StateConfigurationId, stateConfigurationId_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStateConfigurationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConfigureMode, configureMode_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ScheduleExpression, scheduleExpression_);
      DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_FROM_JSON(StateConfigurationId, stateConfigurationId_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
    };
    UpdateStateConfigurationShrinkRequest() = default ;
    UpdateStateConfigurationShrinkRequest(const UpdateStateConfigurationShrinkRequest &) = default ;
    UpdateStateConfigurationShrinkRequest(UpdateStateConfigurationShrinkRequest &&) = default ;
    UpdateStateConfigurationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStateConfigurationShrinkRequest() = default ;
    UpdateStateConfigurationShrinkRequest& operator=(const UpdateStateConfigurationShrinkRequest &) = default ;
    UpdateStateConfigurationShrinkRequest& operator=(UpdateStateConfigurationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->configureMode_ == nullptr && return this->description_ == nullptr && return this->parametersShrink_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->scheduleExpression_ == nullptr && return this->scheduleType_ == nullptr && return this->stateConfigurationId_ == nullptr && return this->tagsShrink_ == nullptr && return this->targets_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateStateConfigurationShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configureMode Field Functions 
    bool hasConfigureMode() const { return this->configureMode_ != nullptr;};
    void deleteConfigureMode() { this->configureMode_ = nullptr;};
    inline string configureMode() const { DARABONBA_PTR_GET_DEFAULT(configureMode_, "") };
    inline UpdateStateConfigurationShrinkRequest& setConfigureMode(string configureMode) { DARABONBA_PTR_SET_VALUE(configureMode_, configureMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateStateConfigurationShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // parametersShrink Field Functions 
    bool hasParametersShrink() const { return this->parametersShrink_ != nullptr;};
    void deleteParametersShrink() { this->parametersShrink_ = nullptr;};
    inline string parametersShrink() const { DARABONBA_PTR_GET_DEFAULT(parametersShrink_, "") };
    inline UpdateStateConfigurationShrinkRequest& setParametersShrink(string parametersShrink) { DARABONBA_PTR_SET_VALUE(parametersShrink_, parametersShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateStateConfigurationShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateStateConfigurationShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scheduleExpression Field Functions 
    bool hasScheduleExpression() const { return this->scheduleExpression_ != nullptr;};
    void deleteScheduleExpression() { this->scheduleExpression_ = nullptr;};
    inline string scheduleExpression() const { DARABONBA_PTR_GET_DEFAULT(scheduleExpression_, "") };
    inline UpdateStateConfigurationShrinkRequest& setScheduleExpression(string scheduleExpression) { DARABONBA_PTR_SET_VALUE(scheduleExpression_, scheduleExpression) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string scheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline UpdateStateConfigurationShrinkRequest& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // stateConfigurationId Field Functions 
    bool hasStateConfigurationId() const { return this->stateConfigurationId_ != nullptr;};
    void deleteStateConfigurationId() { this->stateConfigurationId_ = nullptr;};
    inline string stateConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(stateConfigurationId_, "") };
    inline UpdateStateConfigurationShrinkRequest& setStateConfigurationId(string stateConfigurationId) { DARABONBA_PTR_SET_VALUE(stateConfigurationId_, stateConfigurationId) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline UpdateStateConfigurationShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline string targets() const { DARABONBA_PTR_GET_DEFAULT(targets_, "") };
    inline UpdateStateConfigurationShrinkRequest& setTargets(string targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The configuration mode. Valid values: ApplyOnce: The configuration is applied only once. After a configuration is updated, the new configuration is applied. ApplyAndMonitor: The configuration is applied only once. After the configuration is applied, the system only checks whether the configuration is migrated in the future. ApplyAndAutoCorrect: The configuration is always applied.
    std::shared_ptr<string> configureMode_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The parameters.
    std::shared_ptr<string> parametersShrink_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The schedule expression.
    std::shared_ptr<string> scheduleExpression_ = nullptr;
    // The schedule type.
    std::shared_ptr<string> scheduleType_ = nullptr;
    // The ID of the desired-state configuration.
    // 
    // This parameter is required.
    std::shared_ptr<string> stateConfigurationId_ = nullptr;
    // The tags to be added to the configuration.
    std::shared_ptr<string> tagsShrink_ = nullptr;
    // The resources to be queried.
    std::shared_ptr<string> targets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
