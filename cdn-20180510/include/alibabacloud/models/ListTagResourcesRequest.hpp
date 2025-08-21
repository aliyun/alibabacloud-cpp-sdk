// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTagResourcesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ListTagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TagOwnerBid, tagOwnerBid_);
      DARABONBA_PTR_TO_JSON(TagOwnerUid, tagOwnerUid_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TagOwnerBid, tagOwnerBid_);
      DARABONBA_PTR_FROM_JSON(TagOwnerUid, tagOwnerUid_);
    };
    ListTagResourcesRequest() = default ;
    ListTagResourcesRequest(const ListTagResourcesRequest &) = default ;
    ListTagResourcesRequest(ListTagResourcesRequest &&) = default ;
    ListTagResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagResourcesRequest() = default ;
    ListTagResourcesRequest& operator=(const ListTagResourcesRequest &) = default ;
    ListTagResourcesRequest& operator=(ListTagResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->resourceId_ != nullptr && this->resourceType_ != nullptr && this->tag_ != nullptr && this->tagOwnerBid_ != nullptr && this->tagOwnerUid_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline const vector<string> & resourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
    inline vector<string> resourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
    inline ListTagResourcesRequest& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline ListTagResourcesRequest& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTagResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListTagResourcesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListTagResourcesRequestTag>) };
    inline vector<ListTagResourcesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListTagResourcesRequestTag>) };
    inline ListTagResourcesRequest& setTag(const vector<ListTagResourcesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListTagResourcesRequest& setTag(vector<ListTagResourcesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tagOwnerBid Field Functions 
    bool hasTagOwnerBid() const { return this->tagOwnerBid_ != nullptr;};
    void deleteTagOwnerBid() { this->tagOwnerBid_ = nullptr;};
    inline string tagOwnerBid() const { DARABONBA_PTR_GET_DEFAULT(tagOwnerBid_, "") };
    inline ListTagResourcesRequest& setTagOwnerBid(string tagOwnerBid) { DARABONBA_PTR_SET_VALUE(tagOwnerBid_, tagOwnerBid) };


    // tagOwnerUid Field Functions 
    bool hasTagOwnerUid() const { return this->tagOwnerUid_ != nullptr;};
    void deleteTagOwnerUid() { this->tagOwnerUid_ = nullptr;};
    inline string tagOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(tagOwnerUid_, "") };
    inline ListTagResourcesRequest& setTagOwnerUid(string tagOwnerUid) { DARABONBA_PTR_SET_VALUE(tagOwnerUid_, tagOwnerUid) };


  protected:
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<vector<string>> resourceId_ = nullptr;
    // The type of the resource. Set the value to **DOMAIN**.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The key-value pair of a tag.
    std::shared_ptr<vector<ListTagResourcesRequestTag>> tag_ = nullptr;
    // The business ID of the tag owner.
    std::shared_ptr<string> tagOwnerBid_ = nullptr;
    // The ID of the Alibaba Cloud account to which the tag belongs.
    std::shared_ptr<string> tagOwnerUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
