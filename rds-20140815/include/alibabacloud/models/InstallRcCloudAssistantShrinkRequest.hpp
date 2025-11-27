// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLRCCLOUDASSISTANTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLRCCLOUDASSISTANTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class InstallRCCloudAssistantShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallRCCloudAssistantShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, InstallRCCloudAssistantShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    InstallRCCloudAssistantShrinkRequest() = default ;
    InstallRCCloudAssistantShrinkRequest(const InstallRCCloudAssistantShrinkRequest &) = default ;
    InstallRCCloudAssistantShrinkRequest(InstallRCCloudAssistantShrinkRequest &&) = default ;
    InstallRCCloudAssistantShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallRCCloudAssistantShrinkRequest() = default ;
    InstallRCCloudAssistantShrinkRequest& operator=(const InstallRCCloudAssistantShrinkRequest &) = default ;
    InstallRCCloudAssistantShrinkRequest& operator=(InstallRCCloudAssistantShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIdsShrink_ == nullptr
        && return this->regionId_ == nullptr; };
    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string instanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline InstallRCCloudAssistantShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline InstallRCCloudAssistantShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceIdsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
