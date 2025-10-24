// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateCloudResourceRequestListen.hpp>
#include <alibabacloud/models/CreateCloudResourceRequestRedirect.hpp>
#include <vector>
#include <alibabacloud/models/CreateCloudResourceRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateCloudResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Listen, listen_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(Redirect, redirect_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Listen, listen_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(Redirect, redirect_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateCloudResourceRequest() = default ;
    CreateCloudResourceRequest(const CreateCloudResourceRequest &) = default ;
    CreateCloudResourceRequest(CreateCloudResourceRequest &&) = default ;
    CreateCloudResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudResourceRequest() = default ;
    CreateCloudResourceRequest& operator=(const CreateCloudResourceRequest &) = default ;
    CreateCloudResourceRequest& operator=(CreateCloudResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->listen_ == nullptr && return this->ownerUserId_ == nullptr && return this->redirect_ == nullptr && return this->regionId_ == nullptr && return this->resourceManagerResourceGroupId_ == nullptr
        && return this->tag_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCloudResourceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // listen Field Functions 
    bool hasListen() const { return this->listen_ != nullptr;};
    void deleteListen() { this->listen_ = nullptr;};
    inline const CreateCloudResourceRequestListen & listen() const { DARABONBA_PTR_GET_CONST(listen_, CreateCloudResourceRequestListen) };
    inline CreateCloudResourceRequestListen listen() { DARABONBA_PTR_GET(listen_, CreateCloudResourceRequestListen) };
    inline CreateCloudResourceRequest& setListen(const CreateCloudResourceRequestListen & listen) { DARABONBA_PTR_SET_VALUE(listen_, listen) };
    inline CreateCloudResourceRequest& setListen(CreateCloudResourceRequestListen && listen) { DARABONBA_PTR_SET_RVALUE(listen_, listen) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline CreateCloudResourceRequest& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // redirect Field Functions 
    bool hasRedirect() const { return this->redirect_ != nullptr;};
    void deleteRedirect() { this->redirect_ = nullptr;};
    inline const CreateCloudResourceRequestRedirect & redirect() const { DARABONBA_PTR_GET_CONST(redirect_, CreateCloudResourceRequestRedirect) };
    inline CreateCloudResourceRequestRedirect redirect() { DARABONBA_PTR_GET(redirect_, CreateCloudResourceRequestRedirect) };
    inline CreateCloudResourceRequest& setRedirect(const CreateCloudResourceRequestRedirect & redirect) { DARABONBA_PTR_SET_VALUE(redirect_, redirect) };
    inline CreateCloudResourceRequest& setRedirect(CreateCloudResourceRequestRedirect && redirect) { DARABONBA_PTR_SET_RVALUE(redirect_, redirect) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCloudResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline CreateCloudResourceRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateCloudResourceRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateCloudResourceRequestTag>) };
    inline vector<CreateCloudResourceRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateCloudResourceRequestTag>) };
    inline CreateCloudResourceRequest& setTag(const vector<CreateCloudResourceRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateCloudResourceRequest& setTag(vector<CreateCloudResourceRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


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
    std::shared_ptr<CreateCloudResourceRequestListen> listen_ = nullptr;
    // The ID of the Alibaba Cloud account to which the resource belongs.
    std::shared_ptr<string> ownerUserId_ = nullptr;
    // The forwarding configurations.
    std::shared_ptr<CreateCloudResourceRequestRedirect> redirect_ = nullptr;
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
    std::shared_ptr<vector<CreateCloudResourceRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
