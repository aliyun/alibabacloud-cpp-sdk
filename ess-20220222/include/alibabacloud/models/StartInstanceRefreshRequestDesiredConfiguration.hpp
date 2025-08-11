// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTINSTANCEREFRESHREQUESTDESIREDCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_STARTINSTANCEREFRESHREQUESTDESIREDCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
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
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationId, scalingConfigurationId_);
    };
    friend void from_json(const Darabonba::Json& j, StartInstanceRefreshRequestDesiredConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
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
    virtual bool empty() const override { this->imageId_ != nullptr
        && this->scalingConfigurationId_ != nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline StartInstanceRefreshRequestDesiredConfiguration& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // scalingConfigurationId Field Functions 
    bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
    void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
    inline string scalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
    inline StartInstanceRefreshRequestDesiredConfiguration& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


  protected:
    // The image ID.
    // 
    // > 
    // 
    // *   After the instance refresh task is complete, the active scaling configuration uses the image specified by this parameter.
    // 
    // *   If the instance configuration source of the scaling group is a launch template, you cannot specify this parameter.
    std::shared_ptr<string> imageId_ = nullptr;
    // The ID of the scaling configuration.
    // 
    // >  After the instance refresh task is complete, the scaling group uses the scaling configuration specified by this parameter.
    std::shared_ptr<string> scalingConfigurationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
