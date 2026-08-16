// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERUNIDDEDUCTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERUNIDDEDUCTIONSRESPONSEBODY_HPP_
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
  class DescribeRunIdDeductionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRunIdDeductionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Deductions, deductions_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalUsedTime, totalUsedTime_);
      DARABONBA_PTR_TO_JSON(TotalUsedTimeDecimal, totalUsedTimeDecimal_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRunIdDeductionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Deductions, deductions_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalUsedTime, totalUsedTime_);
      DARABONBA_PTR_FROM_JSON(TotalUsedTimeDecimal, totalUsedTimeDecimal_);
    };
    DescribeRunIdDeductionsResponseBody() = default ;
    DescribeRunIdDeductionsResponseBody(const DescribeRunIdDeductionsResponseBody &) = default ;
    DescribeRunIdDeductionsResponseBody(DescribeRunIdDeductionsResponseBody &&) = default ;
    DescribeRunIdDeductionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRunIdDeductionsResponseBody() = default ;
    DescribeRunIdDeductionsResponseBody& operator=(const DescribeRunIdDeductionsResponseBody &) = default ;
    DescribeRunIdDeductionsResponseBody& operator=(DescribeRunIdDeductionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Deductions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Deductions& obj) { 
        DARABONBA_PTR_TO_JSON(AgentType, agentType_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(GroupResourceType, groupResourceType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(PackageId, packageId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(RunId, runId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
        DARABONBA_PTR_TO_JSON(UsedTimeDecimal, usedTimeDecimal_);
      };
      friend void from_json(const Darabonba::Json& j, Deductions& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(GroupResourceType, groupResourceType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(RunId, runId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
        DARABONBA_PTR_FROM_JSON(UsedTimeDecimal, usedTimeDecimal_);
      };
      Deductions() = default ;
      Deductions(const Deductions &) = default ;
      Deductions(Deductions &&) = default ;
      Deductions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Deductions() = default ;
      Deductions& operator=(const Deductions &) = default ;
      Deductions& operator=(Deductions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentType_ == nullptr
        && this->endTime_ == nullptr && this->groupResourceType_ == nullptr && this->instanceId_ == nullptr && this->model_ == nullptr && this->packageId_ == nullptr
        && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->runId_ == nullptr && this->startTime_ == nullptr && this->summary_ == nullptr
        && this->usedTime_ == nullptr && this->usedTimeDecimal_ == nullptr; };
      // agentType Field Functions 
      bool hasAgentType() const { return this->agentType_ != nullptr;};
      void deleteAgentType() { this->agentType_ = nullptr;};
      inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
      inline Deductions& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Deductions& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // groupResourceType Field Functions 
      bool hasGroupResourceType() const { return this->groupResourceType_ != nullptr;};
      void deleteGroupResourceType() { this->groupResourceType_ = nullptr;};
      inline string getGroupResourceType() const { DARABONBA_PTR_GET_DEFAULT(groupResourceType_, "") };
      inline Deductions& setGroupResourceType(string groupResourceType) { DARABONBA_PTR_SET_VALUE(groupResourceType_, groupResourceType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Deductions& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Deductions& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // packageId Field Functions 
      bool hasPackageId() const { return this->packageId_ != nullptr;};
      void deletePackageId() { this->packageId_ = nullptr;};
      inline string getPackageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, "") };
      inline Deductions& setPackageId(string packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Deductions& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Deductions& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // runId Field Functions 
      bool hasRunId() const { return this->runId_ != nullptr;};
      void deleteRunId() { this->runId_ = nullptr;};
      inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
      inline Deductions& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Deductions& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Deductions& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // usedTime Field Functions 
      bool hasUsedTime() const { return this->usedTime_ != nullptr;};
      void deleteUsedTime() { this->usedTime_ = nullptr;};
      inline int64_t getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0L) };
      inline Deductions& setUsedTime(int64_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


      // usedTimeDecimal Field Functions 
      bool hasUsedTimeDecimal() const { return this->usedTimeDecimal_ != nullptr;};
      void deleteUsedTimeDecimal() { this->usedTimeDecimal_ = nullptr;};
      inline string getUsedTimeDecimal() const { DARABONBA_PTR_GET_DEFAULT(usedTimeDecimal_, "") };
      inline Deductions& setUsedTimeDecimal(string usedTimeDecimal) { DARABONBA_PTR_SET_VALUE(usedTimeDecimal_, usedTimeDecimal) };


    protected:
      // The agent type: `CREDIT_PACKAGE` / `JVS_CLAW` / `OPEN_CLAW` / `JVS_COPILOT`.
      shared_ptr<string> agentType_ {};
      // The end time of the period.
      shared_ptr<string> endTime_ {};
      // The group resource type.
      shared_ptr<string> groupResourceType_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> model_ {};
      // The credit or plan package ID.
      shared_ptr<string> packageId_ {};
      // The resource ID.
      shared_ptr<string> resourceId_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
      // The unique run ID.
      shared_ptr<string> runId_ {};
      // The start time.
      shared_ptr<string> startTime_ {};
      // The summary of the large language model call.
      shared_ptr<string> summary_ {};
      // The usage duration. Unit: seconds. Do not use this field for AI scenarios.
      shared_ptr<int64_t> usedTime_ {};
      // The credits used.
      shared_ptr<string> usedTimeDecimal_ {};
    };

    virtual bool empty() const override { return this->deductions_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->totalUsedTime_ == nullptr && this->totalUsedTimeDecimal_ == nullptr; };
    // deductions Field Functions 
    bool hasDeductions() const { return this->deductions_ != nullptr;};
    void deleteDeductions() { this->deductions_ = nullptr;};
    inline const vector<DescribeRunIdDeductionsResponseBody::Deductions> & getDeductions() const { DARABONBA_PTR_GET_CONST(deductions_, vector<DescribeRunIdDeductionsResponseBody::Deductions>) };
    inline vector<DescribeRunIdDeductionsResponseBody::Deductions> getDeductions() { DARABONBA_PTR_GET(deductions_, vector<DescribeRunIdDeductionsResponseBody::Deductions>) };
    inline DescribeRunIdDeductionsResponseBody& setDeductions(const vector<DescribeRunIdDeductionsResponseBody::Deductions> & deductions) { DARABONBA_PTR_SET_VALUE(deductions_, deductions) };
    inline DescribeRunIdDeductionsResponseBody& setDeductions(vector<DescribeRunIdDeductionsResponseBody::Deductions> && deductions) { DARABONBA_PTR_SET_RVALUE(deductions_, deductions) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeRunIdDeductionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeRunIdDeductionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeRunIdDeductionsResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRunIdDeductionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRunIdDeductionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeRunIdDeductionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalUsedTime Field Functions 
    bool hasTotalUsedTime() const { return this->totalUsedTime_ != nullptr;};
    void deleteTotalUsedTime() { this->totalUsedTime_ = nullptr;};
    inline int64_t getTotalUsedTime() const { DARABONBA_PTR_GET_DEFAULT(totalUsedTime_, 0L) };
    inline DescribeRunIdDeductionsResponseBody& setTotalUsedTime(int64_t totalUsedTime) { DARABONBA_PTR_SET_VALUE(totalUsedTime_, totalUsedTime) };


    // totalUsedTimeDecimal Field Functions 
    bool hasTotalUsedTimeDecimal() const { return this->totalUsedTimeDecimal_ != nullptr;};
    void deleteTotalUsedTimeDecimal() { this->totalUsedTimeDecimal_ = nullptr;};
    inline string getTotalUsedTimeDecimal() const { DARABONBA_PTR_GET_DEFAULT(totalUsedTimeDecimal_, "") };
    inline DescribeRunIdDeductionsResponseBody& setTotalUsedTimeDecimal(string totalUsedTimeDecimal) { DARABONBA_PTR_SET_VALUE(totalUsedTimeDecimal_, totalUsedTimeDecimal) };


  protected:
    // The deduction details.
    shared_ptr<vector<DescribeRunIdDeductionsResponseBody::Deductions>> deductions_ {};
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Leave this parameter empty for the first request. For subsequent requests, use the `nextToken` value from the previous response.
    shared_ptr<string> nextToken_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page for a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of core-hour package deduction details in the query result.
    shared_ptr<int64_t> totalCount_ {};
    // The total usage duration. Unit: seconds. Do not use this field for AI scenarios.
    shared_ptr<int64_t> totalUsedTime_ {};
    // The total credits used that match the specified conditions.
    shared_ptr<string> totalUsedTimeDecimal_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
