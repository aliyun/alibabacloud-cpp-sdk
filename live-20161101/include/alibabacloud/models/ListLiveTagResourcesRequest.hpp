// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVETAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVETAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLiveTagResourcesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveTagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveTagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TagOwnerBid, tagOwnerBid_);
      DARABONBA_PTR_TO_JSON(TagOwnerUid, tagOwnerUid_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveTagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TagOwnerBid, tagOwnerBid_);
      DARABONBA_PTR_FROM_JSON(TagOwnerUid, tagOwnerUid_);
    };
    ListLiveTagResourcesRequest() = default ;
    ListLiveTagResourcesRequest(const ListLiveTagResourcesRequest &) = default ;
    ListLiveTagResourcesRequest(ListLiveTagResourcesRequest &&) = default ;
    ListLiveTagResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveTagResourcesRequest() = default ;
    ListLiveTagResourcesRequest& operator=(const ListLiveTagResourcesRequest &) = default ;
    ListLiveTagResourcesRequest& operator=(ListLiveTagResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceId_ == nullptr && return this->resourceType_ == nullptr && return this->tag_ == nullptr
        && return this->tagOwnerBid_ == nullptr && return this->tagOwnerUid_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListLiveTagResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListLiveTagResourcesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListLiveTagResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline const vector<string> & resourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
    inline vector<string> resourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
    inline ListLiveTagResourcesRequest& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline ListLiveTagResourcesRequest& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListLiveTagResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListLiveTagResourcesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListLiveTagResourcesRequestTag>) };
    inline vector<ListLiveTagResourcesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListLiveTagResourcesRequestTag>) };
    inline ListLiveTagResourcesRequest& setTag(const vector<ListLiveTagResourcesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListLiveTagResourcesRequest& setTag(vector<ListLiveTagResourcesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tagOwnerBid Field Functions 
    bool hasTagOwnerBid() const { return this->tagOwnerBid_ != nullptr;};
    void deleteTagOwnerBid() { this->tagOwnerBid_ = nullptr;};
    inline string tagOwnerBid() const { DARABONBA_PTR_GET_DEFAULT(tagOwnerBid_, "") };
    inline ListLiveTagResourcesRequest& setTagOwnerBid(string tagOwnerBid) { DARABONBA_PTR_SET_VALUE(tagOwnerBid_, tagOwnerBid) };


    // tagOwnerUid Field Functions 
    bool hasTagOwnerUid() const { return this->tagOwnerUid_ != nullptr;};
    void deleteTagOwnerUid() { this->tagOwnerUid_ = nullptr;};
    inline string tagOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(tagOwnerUid_, "") };
    inline ListLiveTagResourcesRequest& setTagOwnerUid(string tagOwnerUid) { DARABONBA_PTR_SET_VALUE(tagOwnerUid_, tagOwnerUid) };


  protected:
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<vector<string>> resourceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<vector<ListLiveTagResourcesRequestTag>> tag_ = nullptr;
    std::shared_ptr<string> tagOwnerBid_ = nullptr;
    std::shared_ptr<string> tagOwnerUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
