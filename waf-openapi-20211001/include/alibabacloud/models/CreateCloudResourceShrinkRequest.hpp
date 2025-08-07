// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDRESOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDRESOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCloudResourceShrinkRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateCloudResourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudResourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Listen, listenShrink_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(Redirect, redirectShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudResourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Listen, listenShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(Redirect, redirectShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateCloudResourceShrinkRequest() = default ;
    CreateCloudResourceShrinkRequest(const CreateCloudResourceShrinkRequest &) = default ;
    CreateCloudResourceShrinkRequest(CreateCloudResourceShrinkRequest &&) = default ;
    CreateCloudResourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudResourceShrinkRequest() = default ;
    CreateCloudResourceShrinkRequest& operator=(const CreateCloudResourceShrinkRequest &) = default ;
    CreateCloudResourceShrinkRequest& operator=(CreateCloudResourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->listenShrink_ != nullptr && this->ownerUserId_ != nullptr && this->redirectShrink_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr
        && this->tag_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCloudResourceShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // listenShrink Field Functions 
    bool hasListenShrink() const { return this->listenShrink_ != nullptr;};
    void deleteListenShrink() { this->listenShrink_ = nullptr;};
    inline string listenShrink() const { DARABONBA_PTR_GET_DEFAULT(listenShrink_, "") };
    inline CreateCloudResourceShrinkRequest& setListenShrink(string listenShrink) { DARABONBA_PTR_SET_VALUE(listenShrink_, listenShrink) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline CreateCloudResourceShrinkRequest& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // redirectShrink Field Functions 
    bool hasRedirectShrink() const { return this->redirectShrink_ != nullptr;};
    void deleteRedirectShrink() { this->redirectShrink_ = nullptr;};
    inline string redirectShrink() const { DARABONBA_PTR_GET_DEFAULT(redirectShrink_, "") };
    inline CreateCloudResourceShrinkRequest& setRedirectShrink(string redirectShrink) { DARABONBA_PTR_SET_VALUE(redirectShrink_, redirectShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCloudResourceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline CreateCloudResourceShrinkRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateCloudResourceShrinkRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateCloudResourceShrinkRequestTag>) };
    inline vector<CreateCloudResourceShrinkRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateCloudResourceShrinkRequestTag>) };
    inline CreateCloudResourceShrinkRequest& setTag(const vector<CreateCloudResourceShrinkRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateCloudResourceShrinkRequest& setTag(vector<CreateCloudResourceShrinkRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


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
    // The ID of the Alibaba Cloud account to which the resource belongs.
    std::shared_ptr<string> ownerUserId_ = nullptr;
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
    // The tags. You can specify up to 20 tags.
    std::shared_ptr<vector<CreateCloudResourceShrinkRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
