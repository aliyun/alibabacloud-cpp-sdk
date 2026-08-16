// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERUNIDDEDUCTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERUNIDDEDUCTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeRunIdDeductionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRunIdDeductionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentType, agentType_);
      DARABONBA_PTR_TO_JSON(AgentTypes, agentTypes_);
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(DeductionTypes, deductionTypes_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GroupByFields, groupByFields_);
      DARABONBA_PTR_TO_JSON(GroupResourceTypes, groupResourceTypes_);
      DARABONBA_PTR_TO_JSON(GroupSeparator, groupSeparator_);
      DARABONBA_PTR_TO_JSON(InstanceIdType, instanceIdType_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PackageIds, packageIds_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(WyId, wyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRunIdDeductionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
      DARABONBA_PTR_FROM_JSON(AgentTypes, agentTypes_);
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(DeductionTypes, deductionTypes_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GroupByFields, groupByFields_);
      DARABONBA_PTR_FROM_JSON(GroupResourceTypes, groupResourceTypes_);
      DARABONBA_PTR_FROM_JSON(GroupSeparator, groupSeparator_);
      DARABONBA_PTR_FROM_JSON(InstanceIdType, instanceIdType_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PackageIds, packageIds_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(WyId, wyId_);
    };
    DescribeRunIdDeductionsRequest() = default ;
    DescribeRunIdDeductionsRequest(const DescribeRunIdDeductionsRequest &) = default ;
    DescribeRunIdDeductionsRequest(DescribeRunIdDeductionsRequest &&) = default ;
    DescribeRunIdDeductionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRunIdDeductionsRequest() = default ;
    DescribeRunIdDeductionsRequest& operator=(const DescribeRunIdDeductionsRequest &) = default ;
    DescribeRunIdDeductionsRequest& operator=(DescribeRunIdDeductionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentType_ == nullptr
        && this->agentTypes_ == nullptr && this->aliUid_ == nullptr && this->bizType_ == nullptr && this->deductionTypes_ == nullptr && this->endTime_ == nullptr
        && this->groupByFields_ == nullptr && this->groupResourceTypes_ == nullptr && this->groupSeparator_ == nullptr && this->instanceIdType_ == nullptr && this->instanceIds_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->packageIds_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
        && this->resourceType_ == nullptr && this->resourceTypes_ == nullptr && this->startTime_ == nullptr && this->wyId_ == nullptr; };
    // agentType Field Functions 
    bool hasAgentType() const { return this->agentType_ != nullptr;};
    void deleteAgentType() { this->agentType_ = nullptr;};
    inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
    inline DescribeRunIdDeductionsRequest& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


    // agentTypes Field Functions 
    bool hasAgentTypes() const { return this->agentTypes_ != nullptr;};
    void deleteAgentTypes() { this->agentTypes_ = nullptr;};
    inline const vector<string> & getAgentTypes() const { DARABONBA_PTR_GET_CONST(agentTypes_, vector<string>) };
    inline vector<string> getAgentTypes() { DARABONBA_PTR_GET(agentTypes_, vector<string>) };
    inline DescribeRunIdDeductionsRequest& setAgentTypes(const vector<string> & agentTypes) { DARABONBA_PTR_SET_VALUE(agentTypes_, agentTypes) };
    inline DescribeRunIdDeductionsRequest& setAgentTypes(vector<string> && agentTypes) { DARABONBA_PTR_SET_RVALUE(agentTypes_, agentTypes) };


    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeRunIdDeductionsRequest& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeRunIdDeductionsRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // deductionTypes Field Functions 
    bool hasDeductionTypes() const { return this->deductionTypes_ != nullptr;};
    void deleteDeductionTypes() { this->deductionTypes_ = nullptr;};
    inline const vector<string> & getDeductionTypes() const { DARABONBA_PTR_GET_CONST(deductionTypes_, vector<string>) };
    inline vector<string> getDeductionTypes() { DARABONBA_PTR_GET(deductionTypes_, vector<string>) };
    inline DescribeRunIdDeductionsRequest& setDeductionTypes(const vector<string> & deductionTypes) { DARABONBA_PTR_SET_VALUE(deductionTypes_, deductionTypes) };
    inline DescribeRunIdDeductionsRequest& setDeductionTypes(vector<string> && deductionTypes) { DARABONBA_PTR_SET_RVALUE(deductionTypes_, deductionTypes) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeRunIdDeductionsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupByFields Field Functions 
    bool hasGroupByFields() const { return this->groupByFields_ != nullptr;};
    void deleteGroupByFields() { this->groupByFields_ = nullptr;};
    inline const vector<string> & getGroupByFields() const { DARABONBA_PTR_GET_CONST(groupByFields_, vector<string>) };
    inline vector<string> getGroupByFields() { DARABONBA_PTR_GET(groupByFields_, vector<string>) };
    inline DescribeRunIdDeductionsRequest& setGroupByFields(const vector<string> & groupByFields) { DARABONBA_PTR_SET_VALUE(groupByFields_, groupByFields) };
    inline DescribeRunIdDeductionsRequest& setGroupByFields(vector<string> && groupByFields) { DARABONBA_PTR_SET_RVALUE(groupByFields_, groupByFields) };


    // groupResourceTypes Field Functions 
    bool hasGroupResourceTypes() const { return this->groupResourceTypes_ != nullptr;};
    void deleteGroupResourceTypes() { this->groupResourceTypes_ = nullptr;};
    inline const vector<string> & getGroupResourceTypes() const { DARABONBA_PTR_GET_CONST(groupResourceTypes_, vector<string>) };
    inline vector<string> getGroupResourceTypes() { DARABONBA_PTR_GET(groupResourceTypes_, vector<string>) };
    inline DescribeRunIdDeductionsRequest& setGroupResourceTypes(const vector<string> & groupResourceTypes) { DARABONBA_PTR_SET_VALUE(groupResourceTypes_, groupResourceTypes) };
    inline DescribeRunIdDeductionsRequest& setGroupResourceTypes(vector<string> && groupResourceTypes) { DARABONBA_PTR_SET_RVALUE(groupResourceTypes_, groupResourceTypes) };


    // groupSeparator Field Functions 
    bool hasGroupSeparator() const { return this->groupSeparator_ != nullptr;};
    void deleteGroupSeparator() { this->groupSeparator_ = nullptr;};
    inline bool getGroupSeparator() const { DARABONBA_PTR_GET_DEFAULT(groupSeparator_, false) };
    inline DescribeRunIdDeductionsRequest& setGroupSeparator(bool groupSeparator) { DARABONBA_PTR_SET_VALUE(groupSeparator_, groupSeparator) };


    // instanceIdType Field Functions 
    bool hasInstanceIdType() const { return this->instanceIdType_ != nullptr;};
    void deleteInstanceIdType() { this->instanceIdType_ = nullptr;};
    inline string getInstanceIdType() const { DARABONBA_PTR_GET_DEFAULT(instanceIdType_, "") };
    inline DescribeRunIdDeductionsRequest& setInstanceIdType(string instanceIdType) { DARABONBA_PTR_SET_VALUE(instanceIdType_, instanceIdType) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeRunIdDeductionsRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeRunIdDeductionsRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeRunIdDeductionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeRunIdDeductionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // packageIds Field Functions 
    bool hasPackageIds() const { return this->packageIds_ != nullptr;};
    void deletePackageIds() { this->packageIds_ = nullptr;};
    inline const vector<string> & getPackageIds() const { DARABONBA_PTR_GET_CONST(packageIds_, vector<string>) };
    inline vector<string> getPackageIds() { DARABONBA_PTR_GET(packageIds_, vector<string>) };
    inline DescribeRunIdDeductionsRequest& setPackageIds(const vector<string> & packageIds) { DARABONBA_PTR_SET_VALUE(packageIds_, packageIds) };
    inline DescribeRunIdDeductionsRequest& setPackageIds(vector<string> && packageIds) { DARABONBA_PTR_SET_RVALUE(packageIds_, packageIds) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeRunIdDeductionsRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRunIdDeductionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeRunIdDeductionsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<string> & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
    inline vector<string> getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
    inline DescribeRunIdDeductionsRequest& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline DescribeRunIdDeductionsRequest& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeRunIdDeductionsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // wyId Field Functions 
    bool hasWyId() const { return this->wyId_ != nullptr;};
    void deleteWyId() { this->wyId_ = nullptr;};
    inline string getWyId() const { DARABONBA_PTR_GET_DEFAULT(wyId_, "") };
    inline DescribeRunIdDeductionsRequest& setWyId(string wyId) { DARABONBA_PTR_SET_VALUE(wyId_, wyId) };


  protected:
    // The agent type: `CREDIT_PACKAGE` / `JVS_CLAW` / `OPEN_CLAW` / `JVS_COPILOT`.
    shared_ptr<string> agentType_ {};
    shared_ptr<vector<string>> agentTypes_ {};
    // The Alibaba Cloud UID.
    shared_ptr<int64_t> aliUid_ {};
    // The business type.
    shared_ptr<string> bizType_ {};
    // The deduction types. Do not specify this parameter for non-knowledge base scenarios.
    shared_ptr<vector<string>> deductionTypes_ {};
    // The end time of the period.
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<vector<string>> groupByFields_ {};
    shared_ptr<vector<string>> groupResourceTypes_ {};
    // Specifies whether to group results by deduction type.
    shared_ptr<bool> groupSeparator_ {};
    // The instance ID type. Do not specify this parameter for non-knowledge base scenarios.
    shared_ptr<string> instanceIdType_ {};
    // The list of cloud computer IDs. If this field has a value, the `PackageIds` field is required.
    shared_ptr<vector<string>> instanceIds_ {};
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Leave this parameter empty for the first request. For subsequent requests, use the `nextToken` value from the previous response.
    shared_ptr<string> nextToken_ {};
    // The list of core-hour package IDs in JSON format.
    shared_ptr<vector<string>> packageIds_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page for a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // The resource type.
    shared_ptr<string> resourceType_ {};
    // The list of resource types in JSON array format.
    shared_ptr<vector<string>> resourceTypes_ {};
    // The start time.
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<string> wyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
