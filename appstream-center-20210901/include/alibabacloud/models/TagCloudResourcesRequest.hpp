// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGCLOUDRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TAGCLOUDRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TagCloudResourcesRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class TagCloudResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagCloudResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, TagCloudResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    TagCloudResourcesRequest() = default ;
    TagCloudResourcesRequest(const TagCloudResourcesRequest &) = default ;
    TagCloudResourcesRequest(TagCloudResourcesRequest &&) = default ;
    TagCloudResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagCloudResourcesRequest() = default ;
    TagCloudResourcesRequest& operator=(const TagCloudResourcesRequest &) = default ;
    TagCloudResourcesRequest& operator=(TagCloudResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceIds_ == nullptr
        && return this->resourceType_ == nullptr && return this->tags_ == nullptr; };
    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & resourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> resourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline TagCloudResourcesRequest& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline TagCloudResourcesRequest& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline TagCloudResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<TagCloudResourcesRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<TagCloudResourcesRequestTags>) };
    inline vector<TagCloudResourcesRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<TagCloudResourcesRequestTags>) };
    inline TagCloudResourcesRequest& setTags(const vector<TagCloudResourcesRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline TagCloudResourcesRequest& setTags(vector<TagCloudResourcesRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The resource IDs. You can specify up to 50 resource IDs. You do not need to specify this parameter if you set ResourceType to AliUid.
    std::shared_ptr<vector<string>> resourceIds_ = nullptr;
    // The type of the cloud resource.
    // 
    // Valid values:
    // 
    // *   CenterImageId: center image ID.
    // *   AppId: app ID.
    // *   WyId: Alibaba Cloud Workspace user ID.
    // *   AppInstanceGroupId: delivery group ID.
    // *   AliUid: tenant ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tags that you want to remove from the cloud resources. System and custom tags are supported.
    // 
    // *   Valid values for system tags:
    // 
    //     *   `System/Scheduler/GRAYSCALE`: canary tags.
    //     *   `System/Scheduler/STOP_NEW_USER_CONNECTION`: tags used to stop new users bound to the delivery group from establishing a connection.
    // 
    // *   You can create up to 20 custom tags.
    // 
    // > Each tag key on a resource can have only one tag value. If you create a tag that has the same key as an existing tag, the value of the existing tag is overwritten.
    // 
    // This parameter is required.
    std::shared_ptr<vector<TagCloudResourcesRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
