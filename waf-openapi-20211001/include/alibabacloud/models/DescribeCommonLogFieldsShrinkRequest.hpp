// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONLOGFIELDSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONLOGFIELDSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCommonLogFieldsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonLogFieldsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(IsRequired, isRequired_);
      DARABONBA_PTR_TO_JSON(LogKeyList, logKeyListShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonLogFieldsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(IsRequired, isRequired_);
      DARABONBA_PTR_FROM_JSON(LogKeyList, logKeyListShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribeCommonLogFieldsShrinkRequest() = default ;
    DescribeCommonLogFieldsShrinkRequest(const DescribeCommonLogFieldsShrinkRequest &) = default ;
    DescribeCommonLogFieldsShrinkRequest(DescribeCommonLogFieldsShrinkRequest &&) = default ;
    DescribeCommonLogFieldsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonLogFieldsShrinkRequest() = default ;
    DescribeCommonLogFieldsShrinkRequest& operator=(const DescribeCommonLogFieldsShrinkRequest &) = default ;
    DescribeCommonLogFieldsShrinkRequest& operator=(DescribeCommonLogFieldsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->isDefault_ != nullptr && this->isRequired_ != nullptr && this->logKeyListShrink_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCommonLogFieldsShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline DescribeCommonLogFieldsShrinkRequest& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // isRequired Field Functions 
    bool hasIsRequired() const { return this->isRequired_ != nullptr;};
    void deleteIsRequired() { this->isRequired_ = nullptr;};
    inline bool isRequired() const { DARABONBA_PTR_GET_DEFAULT(isRequired_, false) };
    inline DescribeCommonLogFieldsShrinkRequest& setIsRequired(bool isRequired) { DARABONBA_PTR_SET_VALUE(isRequired_, isRequired) };


    // logKeyListShrink Field Functions 
    bool hasLogKeyListShrink() const { return this->logKeyListShrink_ != nullptr;};
    void deleteLogKeyListShrink() { this->logKeyListShrink_ = nullptr;};
    inline string logKeyListShrink() const { DARABONBA_PTR_GET_DEFAULT(logKeyListShrink_, "") };
    inline DescribeCommonLogFieldsShrinkRequest& setLogKeyListShrink(string logKeyListShrink) { DARABONBA_PTR_SET_VALUE(logKeyListShrink_, logKeyListShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCommonLogFieldsShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeCommonLogFieldsShrinkRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<bool> isDefault_ = nullptr;
    std::shared_ptr<bool> isRequired_ = nullptr;
    std::shared_ptr<string> logKeyListShrink_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
