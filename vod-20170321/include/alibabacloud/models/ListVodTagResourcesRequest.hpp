// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVODTAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVODTAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVodTagResourcesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListVodTagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVodTagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TagOwnerBid, tagOwnerBid_);
      DARABONBA_PTR_TO_JSON(TagOwnerUid, tagOwnerUid_);
    };
    friend void from_json(const Darabonba::Json& j, ListVodTagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TagOwnerBid, tagOwnerBid_);
      DARABONBA_PTR_FROM_JSON(TagOwnerUid, tagOwnerUid_);
    };
    ListVodTagResourcesRequest() = default ;
    ListVodTagResourcesRequest(const ListVodTagResourcesRequest &) = default ;
    ListVodTagResourcesRequest(ListVodTagResourcesRequest &&) = default ;
    ListVodTagResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVodTagResourcesRequest() = default ;
    ListVodTagResourcesRequest& operator=(const ListVodTagResourcesRequest &) = default ;
    ListVodTagResourcesRequest& operator=(ListVodTagResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->ownerId_ != nullptr && this->resourceId_ != nullptr && this->resourceType_ != nullptr && this->tag_ != nullptr && this->tagOwnerBid_ != nullptr
        && this->tagOwnerUid_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVodTagResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListVodTagResourcesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline const vector<string> & resourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
    inline vector<string> resourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
    inline ListVodTagResourcesRequest& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline ListVodTagResourcesRequest& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListVodTagResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListVodTagResourcesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListVodTagResourcesRequestTag>) };
    inline vector<ListVodTagResourcesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListVodTagResourcesRequestTag>) };
    inline ListVodTagResourcesRequest& setTag(const vector<ListVodTagResourcesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListVodTagResourcesRequest& setTag(vector<ListVodTagResourcesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tagOwnerBid Field Functions 
    bool hasTagOwnerBid() const { return this->tagOwnerBid_ != nullptr;};
    void deleteTagOwnerBid() { this->tagOwnerBid_ = nullptr;};
    inline string tagOwnerBid() const { DARABONBA_PTR_GET_DEFAULT(tagOwnerBid_, "") };
    inline ListVodTagResourcesRequest& setTagOwnerBid(string tagOwnerBid) { DARABONBA_PTR_SET_VALUE(tagOwnerBid_, tagOwnerBid) };


    // tagOwnerUid Field Functions 
    bool hasTagOwnerUid() const { return this->tagOwnerUid_ != nullptr;};
    void deleteTagOwnerUid() { this->tagOwnerUid_ = nullptr;};
    inline string tagOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(tagOwnerUid_, "") };
    inline ListVodTagResourcesRequest& setTagOwnerUid(string tagOwnerUid) { DARABONBA_PTR_SET_VALUE(tagOwnerUid_, tagOwnerUid) };


  protected:
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<vector<string>> resourceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<vector<ListVodTagResourcesRequestTag>> tag_ = nullptr;
    std::shared_ptr<string> tagOwnerBid_ = nullptr;
    std::shared_ptr<string> tagOwnerUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
