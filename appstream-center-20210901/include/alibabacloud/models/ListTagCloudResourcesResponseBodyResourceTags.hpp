// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGCLOUDRESOURCESRESPONSEBODYRESOURCETAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGCLOUDRESOURCESRESPONSEBODYRESOURCETAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTagCloudResourcesResponseBodyResourceTagsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListTagCloudResourcesResponseBodyResourceTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagCloudResourcesResponseBodyResourceTags& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagCloudResourcesResponseBodyResourceTags& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListTagCloudResourcesResponseBodyResourceTags() = default ;
    ListTagCloudResourcesResponseBodyResourceTags(const ListTagCloudResourcesResponseBodyResourceTags &) = default ;
    ListTagCloudResourcesResponseBodyResourceTags(ListTagCloudResourcesResponseBodyResourceTags &&) = default ;
    ListTagCloudResourcesResponseBodyResourceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagCloudResourcesResponseBodyResourceTags() = default ;
    ListTagCloudResourcesResponseBodyResourceTags& operator=(const ListTagCloudResourcesResponseBodyResourceTags &) = default ;
    ListTagCloudResourcesResponseBodyResourceTags& operator=(ListTagCloudResourcesResponseBodyResourceTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr
        && return this->resourceType_ == nullptr && return this->tags_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListTagCloudResourcesResponseBodyResourceTags& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTagCloudResourcesResponseBodyResourceTags& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListTagCloudResourcesResponseBodyResourceTagsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListTagCloudResourcesResponseBodyResourceTagsTags>) };
    inline vector<Models::ListTagCloudResourcesResponseBodyResourceTagsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListTagCloudResourcesResponseBodyResourceTagsTags>) };
    inline ListTagCloudResourcesResponseBodyResourceTags& setTags(const vector<Models::ListTagCloudResourcesResponseBodyResourceTagsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTagCloudResourcesResponseBodyResourceTags& setTags(vector<Models::ListTagCloudResourcesResponseBodyResourceTagsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the cloud resource.
    // 
    // Valid values:
    // 
    // *   AppId: app ID.
    // *   WyId: Alibaba Cloud Workspace user ID.
    // *   AppInstanceGroupId: delivery group ID.
    // *   AliUid: tenant ID.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListTagCloudResourcesResponseBodyResourceTagsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
