// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESBYTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESBYTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListResourcesByTagRequestTagFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListResourcesByTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesByTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TagFilter, tagFilter_);
      DARABONBA_PTR_TO_JSON(FuzzyType, fuzzyType_);
      DARABONBA_PTR_TO_JSON(IncludeAllTags, includeAllTags_);
      DARABONBA_PTR_TO_JSON(MaxResult, maxResult_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesByTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TagFilter, tagFilter_);
      DARABONBA_PTR_FROM_JSON(FuzzyType, fuzzyType_);
      DARABONBA_PTR_FROM_JSON(IncludeAllTags, includeAllTags_);
      DARABONBA_PTR_FROM_JSON(MaxResult, maxResult_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ListResourcesByTagRequest() = default ;
    ListResourcesByTagRequest(const ListResourcesByTagRequest &) = default ;
    ListResourcesByTagRequest(ListResourcesByTagRequest &&) = default ;
    ListResourcesByTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesByTagRequest() = default ;
    ListResourcesByTagRequest& operator=(const ListResourcesByTagRequest &) = default ;
    ListResourcesByTagRequest& operator=(ListResourcesByTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagFilter_ != nullptr
        && this->fuzzyType_ != nullptr && this->includeAllTags_ != nullptr && this->maxResult_ != nullptr && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceType_ != nullptr; };
    // tagFilter Field Functions 
    bool hasTagFilter() const { return this->tagFilter_ != nullptr;};
    void deleteTagFilter() { this->tagFilter_ = nullptr;};
    inline const ListResourcesByTagRequestTagFilter & tagFilter() const { DARABONBA_PTR_GET_CONST(tagFilter_, ListResourcesByTagRequestTagFilter) };
    inline ListResourcesByTagRequestTagFilter tagFilter() { DARABONBA_PTR_GET(tagFilter_, ListResourcesByTagRequestTagFilter) };
    inline ListResourcesByTagRequest& setTagFilter(const ListResourcesByTagRequestTagFilter & tagFilter) { DARABONBA_PTR_SET_VALUE(tagFilter_, tagFilter) };
    inline ListResourcesByTagRequest& setTagFilter(ListResourcesByTagRequestTagFilter && tagFilter) { DARABONBA_PTR_SET_RVALUE(tagFilter_, tagFilter) };


    // fuzzyType Field Functions 
    bool hasFuzzyType() const { return this->fuzzyType_ != nullptr;};
    void deleteFuzzyType() { this->fuzzyType_ = nullptr;};
    inline string fuzzyType() const { DARABONBA_PTR_GET_DEFAULT(fuzzyType_, "") };
    inline ListResourcesByTagRequest& setFuzzyType(string fuzzyType) { DARABONBA_PTR_SET_VALUE(fuzzyType_, fuzzyType) };


    // includeAllTags Field Functions 
    bool hasIncludeAllTags() const { return this->includeAllTags_ != nullptr;};
    void deleteIncludeAllTags() { this->includeAllTags_ = nullptr;};
    inline bool includeAllTags() const { DARABONBA_PTR_GET_DEFAULT(includeAllTags_, false) };
    inline ListResourcesByTagRequest& setIncludeAllTags(bool includeAllTags) { DARABONBA_PTR_SET_VALUE(includeAllTags_, includeAllTags) };


    // maxResult Field Functions 
    bool hasMaxResult() const { return this->maxResult_ != nullptr;};
    void deleteMaxResult() { this->maxResult_ = nullptr;};
    inline int32_t maxResult() const { DARABONBA_PTR_GET_DEFAULT(maxResult_, 0) };
    inline ListResourcesByTagRequest& setMaxResult(int32_t maxResult) { DARABONBA_PTR_SET_VALUE(maxResult_, maxResult) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourcesByTagRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListResourcesByTagRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListResourcesByTagRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListResourcesByTagRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListResourcesByTagRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListResourcesByTagRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<ListResourcesByTagRequestTagFilter> tagFilter_ = nullptr;
    // The type of the query. Valid values:
    // 
    // *   EQUAL: exact match for resources to which the specified tag is added. This is the default value.
    // *   NOT: exact match for resources to which the specified tag is not added.
    std::shared_ptr<string> fuzzyType_ = nullptr;
    // Specifies whether to return the information of tags added to the resources. Valid values:
    // 
    // *   False: does not return the information of tags added to the resources. This is the default value.
    // *   True: returns the information of all tags added to the resources.
    std::shared_ptr<bool> includeAllTags_ = nullptr;
    // The number of entries to return on each page.
    // 
    // Default value: 50. Maximum value: 1000.
    std::shared_ptr<int32_t> maxResult_ = nullptr;
    // The token that is used to start the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID.
    // 
    // For more information about region IDs, see [Endpoints](https://help.aliyun.com/document_detail/2330902.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The resource type. This parameter specifies a filter condition for the query.
    // 
    // *   If you set the FuzzyType parameter to EQUAL, you can set this parameter to a value obtained from the response of the [ListSupportResourceTypes](https://help.aliyun.com/document_detail/2330915.html) operation.
    // *   If you set the FuzzyType parameter to NOT, you can set this parameter to a resource type provided in **Types of resources that support queries based on the NOT operator**.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
