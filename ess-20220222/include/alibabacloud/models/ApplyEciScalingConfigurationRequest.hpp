// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYECISCALINGCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYECISCALINGCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ApplyEciScalingConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyEciScalingConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationId, scalingConfigurationId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyEciScalingConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationId, scalingConfigurationId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    ApplyEciScalingConfigurationRequest() = default ;
    ApplyEciScalingConfigurationRequest(const ApplyEciScalingConfigurationRequest &) = default ;
    ApplyEciScalingConfigurationRequest(ApplyEciScalingConfigurationRequest &&) = default ;
    ApplyEciScalingConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyEciScalingConfigurationRequest() = default ;
    ApplyEciScalingConfigurationRequest& operator=(const ApplyEciScalingConfigurationRequest &) = default ;
    ApplyEciScalingConfigurationRequest& operator=(ApplyEciScalingConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->format_ == nullptr && this->regionId_ == nullptr && this->scalingConfigurationId_ == nullptr && this->scalingGroupId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ApplyEciScalingConfigurationRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline ApplyEciScalingConfigurationRequest& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ApplyEciScalingConfigurationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scalingConfigurationId Field Functions 
    bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
    void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
    inline string getScalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
    inline ApplyEciScalingConfigurationRequest& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline ApplyEciScalingConfigurationRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The content of the configuration file.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
    // Optional. Set the value to YAML.
    shared_ptr<string> format_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The ID of the scaling configuration.
    // 
    // If you want the system to update a scaling configuration of the Elastic Container Instance type based on a YAML configuration file, you must specify `ScalingConfigurationId`. If you do not specify `ScalingConfigurationId`, the system creates a new scaling configuration based on the YAML configuration file.
    shared_ptr<string> scalingConfigurationId_ {};
    // The ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
