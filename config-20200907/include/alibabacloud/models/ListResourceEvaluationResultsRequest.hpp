// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEEVALUATIONRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEEVALUATIONRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListResourceEvaluationResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceEvaluationResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceEvaluationResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
    };
    ListResourceEvaluationResultsRequest() = default ;
    ListResourceEvaluationResultsRequest(const ListResourceEvaluationResultsRequest &) = default ;
    ListResourceEvaluationResultsRequest(ListResourceEvaluationResultsRequest &&) = default ;
    ListResourceEvaluationResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceEvaluationResultsRequest() = default ;
    ListResourceEvaluationResultsRequest& operator=(const ListResourceEvaluationResultsRequest &) = default ;
    ListResourceEvaluationResultsRequest& operator=(ListResourceEvaluationResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceType_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->region_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr
        && this->riskLevel_ == nullptr && this->sortBy_ == nullptr; };
    // complianceType Field Functions 
    bool hasComplianceType() const { return this->complianceType_ != nullptr;};
    void deleteComplianceType() { this->complianceType_ = nullptr;};
    inline string getComplianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
    inline ListResourceEvaluationResultsRequest& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceEvaluationResultsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceEvaluationResultsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListResourceEvaluationResultsRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListResourceEvaluationResultsRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListResourceEvaluationResultsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline ListResourceEvaluationResultsRequest& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListResourceEvaluationResultsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


  protected:
    // The compliance evaluation result. Valid values:
    // 
    // - COMPLIANT: The resource is compliant.
    // 
    // - NON_COMPLIANT: The resource is non-compliant.
    // 
    // - NOT_APPLICABLE: The rule does not apply to the resource.
    // 
    // - INSUFFICIENT_DATA: No data is available for the resource.
    // 
    // - IGNORED: The evaluation result is ignored.
    shared_ptr<string> complianceType_ {};
    // The maximum number of entries to return for a single request. Valid values: 1 to 100.
    shared_ptr<int32_t> maxResults_ {};
    // If the response is truncated, pass the `NextToken` value in a subsequent request to retrieve the remaining results.
    shared_ptr<string> nextToken_ {};
    // The ID of the region where the resource resides. For example, `global` indicates Global, and `cn-hangzhou` indicates China (Hangzhou).
    // 
    // For more information, see [ListDiscoveredResources](https://help.aliyun.com/document_detail/169620.html).
    shared_ptr<string> region_ {};
    // The resource ID.
    // 
    // For more information, see [ListDiscoveredResources](https://help.aliyun.com/document_detail/169620.html).
    shared_ptr<string> resourceId_ {};
    // The resource type.
    // 
    // For more information, see [ListDiscoveredResources](https://help.aliyun.com/document_detail/169620.html).
    shared_ptr<string> resourceType_ {};
    // The risk level of the rule. Valid values:
    // 
    // - 1: High risk.
    // 
    // - 2: Medium risk.
    // 
    // - 3: Low risk.
    shared_ptr<int32_t> riskLevel_ {};
    // This parameter is optional. The only supported value is `LastNonCompliantRecordTimestamp-Asc`. This value sorts resources based on when they first became non-compliant, with the earliest appearing first. Use this parameter only when you set the `ComplianceType` parameter to `NON_COMPLIANT`.
    shared_ptr<string> sortBy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
