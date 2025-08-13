// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGKEYSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTagKeysRequestTagFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListTagKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TagFilter, tagFilter_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(FuzzyType, fuzzyType_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TagFilter, tagFilter_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(FuzzyType, fuzzyType_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ListTagKeysRequest() = default ;
    ListTagKeysRequest(const ListTagKeysRequest &) = default ;
    ListTagKeysRequest(ListTagKeysRequest &&) = default ;
    ListTagKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagKeysRequest() = default ;
    ListTagKeysRequest& operator=(const ListTagKeysRequest &) = default ;
    ListTagKeysRequest& operator=(ListTagKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagFilter_ != nullptr
        && this->category_ != nullptr && this->fuzzyType_ != nullptr && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->pageSize_ != nullptr && this->queryType_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceType_ != nullptr; };
    // tagFilter Field Functions 
    bool hasTagFilter() const { return this->tagFilter_ != nullptr;};
    void deleteTagFilter() { this->tagFilter_ = nullptr;};
    inline const ListTagKeysRequestTagFilter & tagFilter() const { DARABONBA_PTR_GET_CONST(tagFilter_, ListTagKeysRequestTagFilter) };
    inline ListTagKeysRequestTagFilter tagFilter() { DARABONBA_PTR_GET(tagFilter_, ListTagKeysRequestTagFilter) };
    inline ListTagKeysRequest& setTagFilter(const ListTagKeysRequestTagFilter & tagFilter) { DARABONBA_PTR_SET_VALUE(tagFilter_, tagFilter) };
    inline ListTagKeysRequest& setTagFilter(ListTagKeysRequestTagFilter && tagFilter) { DARABONBA_PTR_SET_RVALUE(tagFilter_, tagFilter) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListTagKeysRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // fuzzyType Field Functions 
    bool hasFuzzyType() const { return this->fuzzyType_ != nullptr;};
    void deleteFuzzyType() { this->fuzzyType_ = nullptr;};
    inline string fuzzyType() const { DARABONBA_PTR_GET_DEFAULT(fuzzyType_, "") };
    inline ListTagKeysRequest& setFuzzyType(string fuzzyType) { DARABONBA_PTR_SET_VALUE(fuzzyType_, fuzzyType) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagKeysRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListTagKeysRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListTagKeysRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTagKeysRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string queryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline ListTagKeysRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTagKeysRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListTagKeysRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTagKeysRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<ListTagKeysRequestTagFilter> tagFilter_ = nullptr;
    // The type of the resource tags. This parameter specifies a filter condition for the query. Valid values:
    // 
    // *   all (default value)
    // *   custom
    // *   system
    // 
    // >  The value of this parameter is not case-sensitive.
    std::shared_ptr<string> category_ = nullptr;
    // The type of the query. Valid values:
    // 
    // *   EQUAL (default): exact match
    // *   PREFIX: prefix-based fuzzy match
    std::shared_ptr<string> fuzzyType_ = nullptr;
    // The token that is used to start the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of tag keys to return on each page.
    // 
    // Maximum value: 1000. Default value: 50.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The category of the tags. This parameter specifies a filter condition for the query. Valid values:
    // 
    // *   ResourceTag: resource tags, including custom and system tags. This is the default value.
    // *   MetaTag: preset tags.
    // 
    // >  The value of this parameter is not case-sensitive.
    std::shared_ptr<string> queryType_ = nullptr;
    // The region ID.
    // 
    // For more information about region IDs, see [Endpoints](https://help.aliyun.com/document_detail/2330902.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The resource type. This parameter specifies a filter condition for the query.
    // 
    // Format: `ALIYUN::${ProductCode}::${ResourceType}`. All letters in the value of this parameter must be in uppercase.
    // 
    // *   `ProductCode`: the service code. You can set this field to a value obtained from the response of the [ListSupportResourceTypes](https://help.aliyun.com/document_detail/2330915.html) operation.
    // *   `ResourceType`: the resource type. You can set this field to a value obtained from the response of the [ListSupportResourceTypes](https://help.aliyun.com/document_detail/2330915.html) operation.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
