// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyCloudResourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudResourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Listen, listenShrink_);
      DARABONBA_PTR_TO_JSON(Redirect, redirectShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudResourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Listen, listenShrink_);
      DARABONBA_PTR_FROM_JSON(Redirect, redirectShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    ModifyCloudResourceShrinkRequest() = default ;
    ModifyCloudResourceShrinkRequest(const ModifyCloudResourceShrinkRequest &) = default ;
    ModifyCloudResourceShrinkRequest(ModifyCloudResourceShrinkRequest &&) = default ;
    ModifyCloudResourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudResourceShrinkRequest() = default ;
    ModifyCloudResourceShrinkRequest& operator=(const ModifyCloudResourceShrinkRequest &) = default ;
    ModifyCloudResourceShrinkRequest& operator=(ModifyCloudResourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->listenShrink_ != nullptr && this->redirectShrink_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyCloudResourceShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // listenShrink Field Functions 
    bool hasListenShrink() const { return this->listenShrink_ != nullptr;};
    void deleteListenShrink() { this->listenShrink_ = nullptr;};
    inline string listenShrink() const { DARABONBA_PTR_GET_DEFAULT(listenShrink_, "") };
    inline ModifyCloudResourceShrinkRequest& setListenShrink(string listenShrink) { DARABONBA_PTR_SET_VALUE(listenShrink_, listenShrink) };


    // redirectShrink Field Functions 
    bool hasRedirectShrink() const { return this->redirectShrink_ != nullptr;};
    void deleteRedirectShrink() { this->redirectShrink_ = nullptr;};
    inline string redirectShrink() const { DARABONBA_PTR_GET_DEFAULT(redirectShrink_, "") };
    inline ModifyCloudResourceShrinkRequest& setRedirectShrink(string redirectShrink) { DARABONBA_PTR_SET_VALUE(redirectShrink_, redirectShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCloudResourceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyCloudResourceShrinkRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The listener configurations.
    // 
    // This parameter is required.
    std::shared_ptr<string> listenShrink_ = nullptr;
    // The forwarding configurations.
    std::shared_ptr<string> redirectShrink_ = nullptr;
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: the Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
