// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYSCALINGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYSCALINGGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ApplyScalingGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyScalingGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyScalingGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ApplyScalingGroupRequest() = default ;
    ApplyScalingGroupRequest(const ApplyScalingGroupRequest &) = default ;
    ApplyScalingGroupRequest(ApplyScalingGroupRequest &&) = default ;
    ApplyScalingGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyScalingGroupRequest() = default ;
    ApplyScalingGroupRequest& operator=(const ApplyScalingGroupRequest &) = default ;
    ApplyScalingGroupRequest& operator=(ApplyScalingGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->format_ != nullptr && this->regionId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ApplyScalingGroupRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline ApplyScalingGroupRequest& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ApplyScalingGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The content of the configuration file.
    // 
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // Optional. The format of the configuration file. Default value: YAML. Set the value to YAML.
    std::shared_ptr<string> format_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
