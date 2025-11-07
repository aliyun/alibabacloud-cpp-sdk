// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEPACKAGESTATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEPACKAGESTATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UpdateInstancePackageStateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstancePackageStateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigurationInfo, configurationInfo_);
      DARABONBA_PTR_TO_JSON(ConfigureAction, configureAction_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstancePackageStateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigurationInfo, configurationInfo_);
      DARABONBA_PTR_FROM_JSON(ConfigureAction, configureAction_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    UpdateInstancePackageStateShrinkRequest() = default ;
    UpdateInstancePackageStateShrinkRequest(const UpdateInstancePackageStateShrinkRequest &) = default ;
    UpdateInstancePackageStateShrinkRequest(UpdateInstancePackageStateShrinkRequest &&) = default ;
    UpdateInstancePackageStateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstancePackageStateShrinkRequest() = default ;
    UpdateInstancePackageStateShrinkRequest& operator=(const UpdateInstancePackageStateShrinkRequest &) = default ;
    UpdateInstancePackageStateShrinkRequest& operator=(UpdateInstancePackageStateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configurationInfo_ == nullptr
        && return this->configureAction_ == nullptr && return this->instanceId_ == nullptr && return this->parametersShrink_ == nullptr && return this->regionId_ == nullptr && return this->templateName_ == nullptr
        && return this->templateVersion_ == nullptr; };
    // configurationInfo Field Functions 
    bool hasConfigurationInfo() const { return this->configurationInfo_ != nullptr;};
    void deleteConfigurationInfo() { this->configurationInfo_ = nullptr;};
    inline string configurationInfo() const { DARABONBA_PTR_GET_DEFAULT(configurationInfo_, "") };
    inline UpdateInstancePackageStateShrinkRequest& setConfigurationInfo(string configurationInfo) { DARABONBA_PTR_SET_VALUE(configurationInfo_, configurationInfo) };


    // configureAction Field Functions 
    bool hasConfigureAction() const { return this->configureAction_ != nullptr;};
    void deleteConfigureAction() { this->configureAction_ = nullptr;};
    inline string configureAction() const { DARABONBA_PTR_GET_DEFAULT(configureAction_, "") };
    inline UpdateInstancePackageStateShrinkRequest& setConfigureAction(string configureAction) { DARABONBA_PTR_SET_VALUE(configureAction_, configureAction) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateInstancePackageStateShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // parametersShrink Field Functions 
    bool hasParametersShrink() const { return this->parametersShrink_ != nullptr;};
    void deleteParametersShrink() { this->parametersShrink_ = nullptr;};
    inline string parametersShrink() const { DARABONBA_PTR_GET_DEFAULT(parametersShrink_, "") };
    inline UpdateInstancePackageStateShrinkRequest& setParametersShrink(string parametersShrink) { DARABONBA_PTR_SET_VALUE(parametersShrink_, parametersShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateInstancePackageStateShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline UpdateInstancePackageStateShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline UpdateInstancePackageStateShrinkRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    std::shared_ptr<string> configurationInfo_ = nullptr;
    // The operation type.
    // 
    // Valid values:
    // 
    // *   uninstall
    // *   install
    // 
    // This parameter is required.
    std::shared_ptr<string> configureAction_ = nullptr;
    // The ID of the Elastic Compute Service (ECS) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The parameters for installing or uninstalling the extensions.
    std::shared_ptr<string> parametersShrink_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the template.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
    // The version of the template.
    std::shared_ptr<string> templateVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
