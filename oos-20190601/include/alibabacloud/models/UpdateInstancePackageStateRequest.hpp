// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEPACKAGESTATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEPACKAGESTATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UpdateInstancePackageStateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstancePackageStateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigurationInfo, configurationInfo_);
      DARABONBA_PTR_TO_JSON(ConfigureAction, configureAction_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_ANY_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstancePackageStateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigurationInfo, configurationInfo_);
      DARABONBA_PTR_FROM_JSON(ConfigureAction, configureAction_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    UpdateInstancePackageStateRequest() = default ;
    UpdateInstancePackageStateRequest(const UpdateInstancePackageStateRequest &) = default ;
    UpdateInstancePackageStateRequest(UpdateInstancePackageStateRequest &&) = default ;
    UpdateInstancePackageStateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstancePackageStateRequest() = default ;
    UpdateInstancePackageStateRequest& operator=(const UpdateInstancePackageStateRequest &) = default ;
    UpdateInstancePackageStateRequest& operator=(UpdateInstancePackageStateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configurationInfo_ == nullptr
        && return this->configureAction_ == nullptr && return this->instanceId_ == nullptr && return this->parameters_ == nullptr && return this->regionId_ == nullptr && return this->templateName_ == nullptr
        && return this->templateVersion_ == nullptr; };
    // configurationInfo Field Functions 
    bool hasConfigurationInfo() const { return this->configurationInfo_ != nullptr;};
    void deleteConfigurationInfo() { this->configurationInfo_ = nullptr;};
    inline string configurationInfo() const { DARABONBA_PTR_GET_DEFAULT(configurationInfo_, "") };
    inline UpdateInstancePackageStateRequest& setConfigurationInfo(string configurationInfo) { DARABONBA_PTR_SET_VALUE(configurationInfo_, configurationInfo) };


    // configureAction Field Functions 
    bool hasConfigureAction() const { return this->configureAction_ != nullptr;};
    void deleteConfigureAction() { this->configureAction_ = nullptr;};
    inline string configureAction() const { DARABONBA_PTR_GET_DEFAULT(configureAction_, "") };
    inline UpdateInstancePackageStateRequest& setConfigureAction(string configureAction) { DARABONBA_PTR_SET_VALUE(configureAction_, configureAction) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateInstancePackageStateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & parameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & parameters() { DARABONBA_GET(parameters_) };
    inline UpdateInstancePackageStateRequest& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline UpdateInstancePackageStateRequest& setParameters(Darabonba::Json & parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateInstancePackageStateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline UpdateInstancePackageStateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline UpdateInstancePackageStateRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


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
    Darabonba::Json parameters_ = nullptr;
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
