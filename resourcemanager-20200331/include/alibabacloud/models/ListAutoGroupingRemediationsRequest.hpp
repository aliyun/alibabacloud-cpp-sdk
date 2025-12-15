// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOGROUPINGREMEDIATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOGROUPINGREMEDIATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListAutoGroupingRemediationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoGroupingRemediationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EarliestRemediationTime, earliestRemediationTime_);
      DARABONBA_PTR_TO_JSON(LatestRemediationTime, latestRemediationTime_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(TargetResourceGroupId, targetResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoGroupingRemediationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EarliestRemediationTime, earliestRemediationTime_);
      DARABONBA_PTR_FROM_JSON(LatestRemediationTime, latestRemediationTime_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(TargetResourceGroupId, targetResourceGroupId_);
    };
    ListAutoGroupingRemediationsRequest() = default ;
    ListAutoGroupingRemediationsRequest(const ListAutoGroupingRemediationsRequest &) = default ;
    ListAutoGroupingRemediationsRequest(ListAutoGroupingRemediationsRequest &&) = default ;
    ListAutoGroupingRemediationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoGroupingRemediationsRequest() = default ;
    ListAutoGroupingRemediationsRequest& operator=(const ListAutoGroupingRemediationsRequest &) = default ;
    ListAutoGroupingRemediationsRequest& operator=(ListAutoGroupingRemediationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->earliestRemediationTime_ == nullptr
        && return this->latestRemediationTime_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->resourceId_ == nullptr && return this->resourceType_ == nullptr
        && return this->ruleId_ == nullptr && return this->service_ == nullptr && return this->targetResourceGroupId_ == nullptr; };
    // earliestRemediationTime Field Functions 
    bool hasEarliestRemediationTime() const { return this->earliestRemediationTime_ != nullptr;};
    void deleteEarliestRemediationTime() { this->earliestRemediationTime_ = nullptr;};
    inline string earliestRemediationTime() const { DARABONBA_PTR_GET_DEFAULT(earliestRemediationTime_, "") };
    inline ListAutoGroupingRemediationsRequest& setEarliestRemediationTime(string earliestRemediationTime) { DARABONBA_PTR_SET_VALUE(earliestRemediationTime_, earliestRemediationTime) };


    // latestRemediationTime Field Functions 
    bool hasLatestRemediationTime() const { return this->latestRemediationTime_ != nullptr;};
    void deleteLatestRemediationTime() { this->latestRemediationTime_ = nullptr;};
    inline string latestRemediationTime() const { DARABONBA_PTR_GET_DEFAULT(latestRemediationTime_, "") };
    inline ListAutoGroupingRemediationsRequest& setLatestRemediationTime(string latestRemediationTime) { DARABONBA_PTR_SET_VALUE(latestRemediationTime_, latestRemediationTime) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAutoGroupingRemediationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAutoGroupingRemediationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListAutoGroupingRemediationsRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListAutoGroupingRemediationsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ListAutoGroupingRemediationsRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline ListAutoGroupingRemediationsRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // targetResourceGroupId Field Functions 
    bool hasTargetResourceGroupId() const { return this->targetResourceGroupId_ != nullptr;};
    void deleteTargetResourceGroupId() { this->targetResourceGroupId_ = nullptr;};
    inline string targetResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(targetResourceGroupId_, "") };
    inline ListAutoGroupingRemediationsRequest& setTargetResourceGroupId(string targetResourceGroupId) { DARABONBA_PTR_SET_VALUE(targetResourceGroupId_, targetResourceGroupId) };


  protected:
    // The earliest remediation time. This parameter is empty by default.
    std::shared_ptr<string> earliestRemediationTime_ = nullptr;
    // The latest remediation time. This parameter is empty by default.
    std::shared_ptr<string> latestRemediationTime_ = nullptr;
    // The maximum number of data entries to return.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. If you leave this parameter empty, the query starts from the beginning.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The resource ID,
    std::shared_ptr<string> resourceId_ = nullptr;
    // The resource type,
    // 
    // You can obtain the resource type from the **Resource type** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
    std::shared_ptr<string> resourceType_ = nullptr;
    // The rule ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The ID of the Alibaba Cloud service.
    // 
    // You can obtain the ID from the **Service code** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
    std::shared_ptr<string> service_ = nullptr;
    // The ID of the new resource group.
    std::shared_ptr<string> targetResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
