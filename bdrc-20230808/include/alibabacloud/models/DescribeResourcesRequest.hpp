// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class DescribeResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataRedundancyType, dataRedundancyType_);
      DARABONBA_PTR_TO_JSON(FailedRuleTemplate, failedRuleTemplate_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
      DARABONBA_PTR_TO_JSON(ResourceCategoryId, resourceCategoryId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerIds, resourceOwnerIds_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataRedundancyType, dataRedundancyType_);
      DARABONBA_PTR_FROM_JSON(FailedRuleTemplate, failedRuleTemplate_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
      DARABONBA_PTR_FROM_JSON(ResourceCategoryId, resourceCategoryId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerIds, resourceOwnerIds_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
    };
    DescribeResourcesRequest() = default ;
    DescribeResourcesRequest(const DescribeResourcesRequest &) = default ;
    DescribeResourcesRequest(DescribeResourcesRequest &&) = default ;
    DescribeResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcesRequest() = default ;
    DescribeResourcesRequest& operator=(const DescribeResourcesRequest &) = default ;
    DescribeResourcesRequest& operator=(DescribeResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataRedundancyType_ == nullptr
        && this->failedRuleTemplate_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->resourceArn_ == nullptr && this->resourceCategoryId_ == nullptr
        && this->resourceId_ == nullptr && this->resourceOwnerIds_ == nullptr && this->resourceRegionId_ == nullptr && this->resourceType_ == nullptr && this->sortBy_ == nullptr
        && this->sortOrder_ == nullptr && this->storageClass_ == nullptr; };
    // dataRedundancyType Field Functions 
    bool hasDataRedundancyType() const { return this->dataRedundancyType_ != nullptr;};
    void deleteDataRedundancyType() { this->dataRedundancyType_ = nullptr;};
    inline string getDataRedundancyType() const { DARABONBA_PTR_GET_DEFAULT(dataRedundancyType_, "") };
    inline DescribeResourcesRequest& setDataRedundancyType(string dataRedundancyType) { DARABONBA_PTR_SET_VALUE(dataRedundancyType_, dataRedundancyType) };


    // failedRuleTemplate Field Functions 
    bool hasFailedRuleTemplate() const { return this->failedRuleTemplate_ != nullptr;};
    void deleteFailedRuleTemplate() { this->failedRuleTemplate_ = nullptr;};
    inline string getFailedRuleTemplate() const { DARABONBA_PTR_GET_DEFAULT(failedRuleTemplate_, "") };
    inline DescribeResourcesRequest& setFailedRuleTemplate(string failedRuleTemplate) { DARABONBA_PTR_SET_VALUE(failedRuleTemplate_, failedRuleTemplate) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeResourcesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceArn Field Functions 
    bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
    void deleteResourceArn() { this->resourceArn_ = nullptr;};
    inline string getResourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
    inline DescribeResourcesRequest& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


    // resourceCategoryId Field Functions 
    bool hasResourceCategoryId() const { return this->resourceCategoryId_ != nullptr;};
    void deleteResourceCategoryId() { this->resourceCategoryId_ = nullptr;};
    inline string getResourceCategoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceCategoryId_, "") };
    inline DescribeResourcesRequest& setResourceCategoryId(string resourceCategoryId) { DARABONBA_PTR_SET_VALUE(resourceCategoryId_, resourceCategoryId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeResourcesRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceOwnerIds Field Functions 
    bool hasResourceOwnerIds() const { return this->resourceOwnerIds_ != nullptr;};
    void deleteResourceOwnerIds() { this->resourceOwnerIds_ = nullptr;};
    inline const vector<int64_t> & getResourceOwnerIds() const { DARABONBA_PTR_GET_CONST(resourceOwnerIds_, vector<int64_t>) };
    inline vector<int64_t> getResourceOwnerIds() { DARABONBA_PTR_GET(resourceOwnerIds_, vector<int64_t>) };
    inline DescribeResourcesRequest& setResourceOwnerIds(const vector<int64_t> & resourceOwnerIds) { DARABONBA_PTR_SET_VALUE(resourceOwnerIds_, resourceOwnerIds) };
    inline DescribeResourcesRequest& setResourceOwnerIds(vector<int64_t> && resourceOwnerIds) { DARABONBA_PTR_SET_RVALUE(resourceOwnerIds_, resourceOwnerIds) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline DescribeResourcesRequest& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline DescribeResourcesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline DescribeResourcesRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline DescribeResourcesRequest& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


  protected:
    // The data redundancy type.
    shared_ptr<string> dataRedundancyType_ {};
    // A filter for rules that failed the scoring.
    shared_ptr<string> failedRuleTemplate_ {};
    // The page size. Default: 10. Maximum: 100. Values less than 10 are set to 10, and values greater than 100 are set to 100.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. The service returns a token if the response is truncated. To retrieve the next page of results, include this token in your next request. If no token is returned, all results have been retrieved.
    shared_ptr<string> nextToken_ {};
    // The Resource ARN.
    shared_ptr<string> resourceArn_ {};
    // The ID of the resource category.
    shared_ptr<string> resourceCategoryId_ {};
    // The resource ID. For example, for an instance, this is the instance ID.
    shared_ptr<string> resourceId_ {};
    // A list of resource owner IDs. Use this parameter for cross-account scenarios. If you omit this parameter, the service returns data for the current account by default.
    shared_ptr<vector<int64_t>> resourceOwnerIds_ {};
    // The resource region ID.
    shared_ptr<string> resourceRegionId_ {};
    // The resource type.
    shared_ptr<string> resourceType_ {};
    // The sort key.
    shared_ptr<string> sortBy_ {};
    // The sort order.
    shared_ptr<string> sortOrder_ {};
    // The storage class.
    shared_ptr<string> storageClass_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
