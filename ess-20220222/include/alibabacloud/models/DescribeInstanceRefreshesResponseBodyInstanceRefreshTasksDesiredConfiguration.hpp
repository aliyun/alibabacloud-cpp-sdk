// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREFRESHESRESPONSEBODYINSTANCEREFRESHTASKSDESIREDCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREFRESHESRESPONSEBODYINSTANCEREFRESHTASKSDESIREDCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfigurationContainers.hpp>
#include <alibabacloud/models/DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfigurationLaunchTemplateOverrides.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(Containers, containers_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateOverrides, launchTemplateOverrides_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationId, scalingConfigurationId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(Containers, containers_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateOverrides, launchTemplateOverrides_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationId, scalingConfigurationId_);
    };
    DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration() = default ;
    DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration(const DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration &) = default ;
    DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration(DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration &&) = default ;
    DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration() = default ;
    DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration& operator=(const DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration &) = default ;
    DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration& operator=(DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->containers_ != nullptr
        && this->imageId_ != nullptr && this->launchTemplateId_ != nullptr && this->launchTemplateOverrides_ != nullptr && this->launchTemplateVersion_ != nullptr && this->scalingConfigurationId_ != nullptr; };
    // containers Field Functions 
    bool hasContainers() const { return this->containers_ != nullptr;};
    void deleteContainers() { this->containers_ = nullptr;};
    inline const vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfigurationContainers> & containers() const { DARABONBA_PTR_GET_CONST(containers_, vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfigurationContainers>) };
    inline vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfigurationContainers> containers() { DARABONBA_PTR_GET(containers_, vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfigurationContainers>) };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration& setContainers(const vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfigurationContainers> & containers) { DARABONBA_PTR_SET_VALUE(containers_, containers) };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration& setContainers(vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfigurationContainers> && containers) { DARABONBA_PTR_SET_RVALUE(containers_, containers) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string launchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateOverrides Field Functions 
    bool hasLaunchTemplateOverrides() const { return this->launchTemplateOverrides_ != nullptr;};
    void deleteLaunchTemplateOverrides() { this->launchTemplateOverrides_ = nullptr;};
    inline const vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfigurationLaunchTemplateOverrides> & launchTemplateOverrides() const { DARABONBA_PTR_GET_CONST(launchTemplateOverrides_, vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfigurationLaunchTemplateOverrides>) };
    inline vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfigurationLaunchTemplateOverrides> launchTemplateOverrides() { DARABONBA_PTR_GET(launchTemplateOverrides_, vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfigurationLaunchTemplateOverrides>) };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration& setLaunchTemplateOverrides(const vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfigurationLaunchTemplateOverrides> & launchTemplateOverrides) { DARABONBA_PTR_SET_VALUE(launchTemplateOverrides_, launchTemplateOverrides) };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration& setLaunchTemplateOverrides(vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfigurationLaunchTemplateOverrides> && launchTemplateOverrides) { DARABONBA_PTR_SET_RVALUE(launchTemplateOverrides_, launchTemplateOverrides) };


    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline string launchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


    // scalingConfigurationId Field Functions 
    bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
    void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
    inline string scalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfigurationContainers>> containers_ = nullptr;
    // The ID of the image file that provides the image resource for Auto Scaling to create instances.
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> launchTemplateId_ = nullptr;
    std::shared_ptr<vector<Models::DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfigurationLaunchTemplateOverrides>> launchTemplateOverrides_ = nullptr;
    std::shared_ptr<string> launchTemplateVersion_ = nullptr;
    // The ID of the scaling configuration.
    std::shared_ptr<string> scalingConfigurationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
