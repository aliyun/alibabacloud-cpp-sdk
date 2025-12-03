// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTINSTANCEREFRESHREQUESTDESIREDCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_STARTINSTANCEREFRESHREQUESTDESIREDCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartInstanceRefreshRequestDesiredConfigurationContainers.hpp>
#include <alibabacloud/models/StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class StartInstanceRefreshRequestDesiredConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartInstanceRefreshRequestDesiredConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(Containers, containers_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateOverrides, launchTemplateOverrides_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationId, scalingConfigurationId_);
    };
    friend void from_json(const Darabonba::Json& j, StartInstanceRefreshRequestDesiredConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(Containers, containers_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateOverrides, launchTemplateOverrides_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationId, scalingConfigurationId_);
    };
    StartInstanceRefreshRequestDesiredConfiguration() = default ;
    StartInstanceRefreshRequestDesiredConfiguration(const StartInstanceRefreshRequestDesiredConfiguration &) = default ;
    StartInstanceRefreshRequestDesiredConfiguration(StartInstanceRefreshRequestDesiredConfiguration &&) = default ;
    StartInstanceRefreshRequestDesiredConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartInstanceRefreshRequestDesiredConfiguration() = default ;
    StartInstanceRefreshRequestDesiredConfiguration& operator=(const StartInstanceRefreshRequestDesiredConfiguration &) = default ;
    StartInstanceRefreshRequestDesiredConfiguration& operator=(StartInstanceRefreshRequestDesiredConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containers_ == nullptr
        && return this->imageId_ == nullptr && return this->launchTemplateId_ == nullptr && return this->launchTemplateOverrides_ == nullptr && return this->launchTemplateVersion_ == nullptr && return this->scalingConfigurationId_ == nullptr; };
    // containers Field Functions 
    bool hasContainers() const { return this->containers_ != nullptr;};
    void deleteContainers() { this->containers_ = nullptr;};
    inline const vector<Models::StartInstanceRefreshRequestDesiredConfigurationContainers> & containers() const { DARABONBA_PTR_GET_CONST(containers_, vector<Models::StartInstanceRefreshRequestDesiredConfigurationContainers>) };
    inline vector<Models::StartInstanceRefreshRequestDesiredConfigurationContainers> containers() { DARABONBA_PTR_GET(containers_, vector<Models::StartInstanceRefreshRequestDesiredConfigurationContainers>) };
    inline StartInstanceRefreshRequestDesiredConfiguration& setContainers(const vector<Models::StartInstanceRefreshRequestDesiredConfigurationContainers> & containers) { DARABONBA_PTR_SET_VALUE(containers_, containers) };
    inline StartInstanceRefreshRequestDesiredConfiguration& setContainers(vector<Models::StartInstanceRefreshRequestDesiredConfigurationContainers> && containers) { DARABONBA_PTR_SET_RVALUE(containers_, containers) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline StartInstanceRefreshRequestDesiredConfiguration& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string launchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline StartInstanceRefreshRequestDesiredConfiguration& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateOverrides Field Functions 
    bool hasLaunchTemplateOverrides() const { return this->launchTemplateOverrides_ != nullptr;};
    void deleteLaunchTemplateOverrides() { this->launchTemplateOverrides_ = nullptr;};
    inline const vector<Models::StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides> & launchTemplateOverrides() const { DARABONBA_PTR_GET_CONST(launchTemplateOverrides_, vector<Models::StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides>) };
    inline vector<Models::StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides> launchTemplateOverrides() { DARABONBA_PTR_GET(launchTemplateOverrides_, vector<Models::StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides>) };
    inline StartInstanceRefreshRequestDesiredConfiguration& setLaunchTemplateOverrides(const vector<Models::StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides> & launchTemplateOverrides) { DARABONBA_PTR_SET_VALUE(launchTemplateOverrides_, launchTemplateOverrides) };
    inline StartInstanceRefreshRequestDesiredConfiguration& setLaunchTemplateOverrides(vector<Models::StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides> && launchTemplateOverrides) { DARABONBA_PTR_SET_RVALUE(launchTemplateOverrides_, launchTemplateOverrides) };


    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline string launchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
    inline StartInstanceRefreshRequestDesiredConfiguration& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


    // scalingConfigurationId Field Functions 
    bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
    void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
    inline string scalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
    inline StartInstanceRefreshRequestDesiredConfiguration& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


  protected:
    // The containers in the elastic container instance.
    // 
    // > 
    // 
    // *   This parameter supports only scaling groups of the ECI type.
    // 
    // *   Only the containers in the scaling configuration list that are the same as those in the `Container.Name` are refreshed.
    std::shared_ptr<vector<Models::StartInstanceRefreshRequestDesiredConfigurationContainers>> containers_ = nullptr;
    // The image ID.
    // 
    // > 
    // 
    // *   After the instance refresh task is complete, the active scaling configuration uses the image specified by this parameter.
    // 
    // *   If the instance configuration source of the scaling group is a launch template, you cannot specify this parameter.
    std::shared_ptr<string> imageId_ = nullptr;
    // The ID of the launch template that you want to enable in the scaling group.
    std::shared_ptr<string> launchTemplateId_ = nullptr;
    // The information about the instance types that are extended in the launch template.
    std::shared_ptr<vector<Models::StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides>> launchTemplateOverrides_ = nullptr;
    // The version number of the launch template. Valid value:
    // 
    // *   A fixed template version number.
    // *   Default: the default version of the template.
    // *   Latest: the latest version of the template.
    // 
    // >  If you set the version to Default or Latest, the instance refresh task cannot be rolled back.
    std::shared_ptr<string> launchTemplateVersion_ = nullptr;
    // The ID of the scaling configuration.
    std::shared_ptr<string> scalingConfigurationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
