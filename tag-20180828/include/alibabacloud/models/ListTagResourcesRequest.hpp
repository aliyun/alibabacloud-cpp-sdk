// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListTagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceARN, resourceARN_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceARN, resourceARN_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
    virtual bool empty() const override { this->category_ != nullptr
        && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr
        && this->resourceARN_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->tags_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListTagResourcesRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListTagResourcesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListTagResourcesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTagResourcesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTagResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceARN Field Functions 
    bool hasResourceARN() const { return this->resourceARN_ != nullptr;};
    void deleteResourceARN() { this->resourceARN_ = nullptr;};
    inline const vector<string> & resourceARN() const { DARABONBA_PTR_GET_CONST(resourceARN_, vector<string>) };
    inline vector<string> resourceARN() { DARABONBA_PTR_GET(resourceARN_, vector<string>) };
    inline ListTagResourcesRequest& setResourceARN(const vector<string> & resourceARN) { DARABONBA_PTR_SET_VALUE(resourceARN_, resourceARN) };
    inline ListTagResourcesRequest& setResourceARN(vector<string> && resourceARN) { DARABONBA_PTR_SET_RVALUE(resourceARN_, resourceARN) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListTagResourcesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ListTagResourcesRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // The type of the tag. Valid values:
    // 
    // *   Custom
    // *   System
    // *   All
    // 
    // Default value: All.
    std::shared_ptr<string> category_ = nullptr;
    // The token that is used to start the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of entries to return on each page.
    // 
    // Maximum value: 1000. Default value: 50.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID.
    // 
    // *   If the resources belong to a service that is centrally deployed, set the value to the region ID of the resources by referring to [Regions supported by tag-related operations on resources of centrally deployed Alibaba Cloud services](https://help.aliyun.com/document_detail/2579691.html).
    // *   If the resources belong to a service that is not centrally deployed, set the value to the region ID of the resources.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of a resource.
    // 
    // Valid values of N: 1 to 50.
    // 
    // ARN format: `arn:acs:${ProductCode}:${Region}:${Account}:${ResourceType}/${ResourceId}` Fields:
    // 
    // *   `ProductCode`: the service code. You can set this field to a value obtained from the response of the [ListSupportResourceTypes](https://help.aliyun.com/document_detail/2330915.html) operation.
    // *   `Region`: the region ID of the resource. You can set this field to an asterisk (\\*) to indicate the current region.
    // *   `Account`: the ID of the Alibaba Cloud account to which the resource belongs. You can set this field to an asterisk (\\*) to indicate the current Alibaba Cloud account.
    // *   `ResourceType`: the resource type. You can set this field to a value obtained from the response of the [ListSupportResourceTypes](https://help.aliyun.com/document_detail/2330915.html) operation.
    // *   `ResourceId`: the ID of the resource.
    // 
    // >  You can set `ProductCode` and `ResourceType` in ResourceARN to values defined in Resource Group, ActionTrail, or Resource Center.
    std::shared_ptr<vector<string>> resourceARN_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The key-value pairs of tags. You can specify 1 to 10 key-value pairs.
    // 
    // If you specify multiple tags, the system queries the resources to which all these tags are added.
    // 
    // Limits:
    // 
    // *   A tag key must be 1 to 128 characters in length.
    // *   A tag value must be 1 to 128 characters in length.
    // *   Tag keys and tag values are case-sensitive.
    // *   Each tag key on a resource can have only one tag value. If you create a tag that has the same key as an existing tag, the value of the existing tag is overwritten.
    std::shared_ptr<string> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
