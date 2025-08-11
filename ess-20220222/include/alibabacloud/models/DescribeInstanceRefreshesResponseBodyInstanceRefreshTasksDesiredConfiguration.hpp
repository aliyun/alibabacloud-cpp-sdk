// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREFRESHESRESPONSEBODYINSTANCEREFRESHTASKSDESIREDCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREFRESHESRESPONSEBODYINSTANCEREFRESHTASKSDESIREDCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
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
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationId, scalingConfigurationId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
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
    virtual bool empty() const override { this->imageId_ != nullptr
        && this->scalingConfigurationId_ != nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // scalingConfigurationId Field Functions 
    bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
    void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
    inline string scalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
    inline DescribeInstanceRefreshesResponseBodyInstanceRefreshTasksDesiredConfiguration& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


  protected:
    // The ID of the image file that provides the image resource for Auto Scaling to create instances.
    std::shared_ptr<string> imageId_ = nullptr;
    // The ID of the scaling configuration.
    std::shared_ptr<string> scalingConfigurationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
