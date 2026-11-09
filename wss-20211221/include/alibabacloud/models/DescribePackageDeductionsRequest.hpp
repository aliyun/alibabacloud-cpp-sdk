// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPACKAGEDEDUCTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPACKAGEDEDUCTIONSREQUEST_HPP_
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
  class DescribePackageDeductionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePackageDeductionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentType, agentType_);
      DARABONBA_PTR_TO_JSON(AgentTypes, agentTypes_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ConsumeWyId, consumeWyId_);
      DARABONBA_PTR_TO_JSON(ConsumeWyIds, consumeWyIds_);
      DARABONBA_PTR_TO_JSON(DeductionRequestId, deductionRequestId_);
      DARABONBA_PTR_TO_JSON(DeductionTypes, deductionTypes_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GroupResourceTypes, groupResourceTypes_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceIdType, instanceIdType_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(PackageIds, packageIds_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_TO_JSON(RunId, runId_);
      DARABONBA_PTR_TO_JSON(RunIdList, runIdList_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(WyId, wyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePackageDeductionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
      DARABONBA_PTR_FROM_JSON(AgentTypes, agentTypes_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ConsumeWyId, consumeWyId_);
      DARABONBA_PTR_FROM_JSON(ConsumeWyIds, consumeWyIds_);
      DARABONBA_PTR_FROM_JSON(DeductionRequestId, deductionRequestId_);
      DARABONBA_PTR_FROM_JSON(DeductionTypes, deductionTypes_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GroupResourceTypes, groupResourceTypes_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceIdType, instanceIdType_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(PackageIds, packageIds_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_FROM_JSON(RunId, runId_);
      DARABONBA_PTR_FROM_JSON(RunIdList, runIdList_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(WyId, wyId_);
    };
    DescribePackageDeductionsRequest() = default ;
    DescribePackageDeductionsRequest(const DescribePackageDeductionsRequest &) = default ;
    DescribePackageDeductionsRequest(DescribePackageDeductionsRequest &&) = default ;
    DescribePackageDeductionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePackageDeductionsRequest() = default ;
    DescribePackageDeductionsRequest& operator=(const DescribePackageDeductionsRequest &) = default ;
    DescribePackageDeductionsRequest& operator=(DescribePackageDeductionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentType_ == nullptr
        && this->agentTypes_ == nullptr && this->bizType_ == nullptr && this->consumeWyId_ == nullptr && this->consumeWyIds_ == nullptr && this->deductionRequestId_ == nullptr
        && this->deductionTypes_ == nullptr && this->endTime_ == nullptr && this->groupResourceTypes_ == nullptr && this->instanceId_ == nullptr && this->instanceIdType_ == nullptr
        && this->instanceIds_ == nullptr && this->model_ == nullptr && this->packageIds_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
        && this->resourceType_ == nullptr && this->resourceTypes_ == nullptr && this->runId_ == nullptr && this->runIdList_ == nullptr && this->startTime_ == nullptr
        && this->wyId_ == nullptr; };
    // agentType Field Functions 
    bool hasAgentType() const { return this->agentType_ != nullptr;};
    void deleteAgentType() { this->agentType_ = nullptr;};
    inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
    inline DescribePackageDeductionsRequest& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


    // agentTypes Field Functions 
    bool hasAgentTypes() const { return this->agentTypes_ != nullptr;};
    void deleteAgentTypes() { this->agentTypes_ = nullptr;};
    inline const vector<string> & getAgentTypes() const { DARABONBA_PTR_GET_CONST(agentTypes_, vector<string>) };
    inline vector<string> getAgentTypes() { DARABONBA_PTR_GET(agentTypes_, vector<string>) };
    inline DescribePackageDeductionsRequest& setAgentTypes(const vector<string> & agentTypes) { DARABONBA_PTR_SET_VALUE(agentTypes_, agentTypes) };
    inline DescribePackageDeductionsRequest& setAgentTypes(vector<string> && agentTypes) { DARABONBA_PTR_SET_RVALUE(agentTypes_, agentTypes) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribePackageDeductionsRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // consumeWyId Field Functions 
    bool hasConsumeWyId() const { return this->consumeWyId_ != nullptr;};
    void deleteConsumeWyId() { this->consumeWyId_ = nullptr;};
    inline string getConsumeWyId() const { DARABONBA_PTR_GET_DEFAULT(consumeWyId_, "") };
    inline DescribePackageDeductionsRequest& setConsumeWyId(string consumeWyId) { DARABONBA_PTR_SET_VALUE(consumeWyId_, consumeWyId) };


    // consumeWyIds Field Functions 
    bool hasConsumeWyIds() const { return this->consumeWyIds_ != nullptr;};
    void deleteConsumeWyIds() { this->consumeWyIds_ = nullptr;};
    inline const vector<string> & getConsumeWyIds() const { DARABONBA_PTR_GET_CONST(consumeWyIds_, vector<string>) };
    inline vector<string> getConsumeWyIds() { DARABONBA_PTR_GET(consumeWyIds_, vector<string>) };
    inline DescribePackageDeductionsRequest& setConsumeWyIds(const vector<string> & consumeWyIds) { DARABONBA_PTR_SET_VALUE(consumeWyIds_, consumeWyIds) };
    inline DescribePackageDeductionsRequest& setConsumeWyIds(vector<string> && consumeWyIds) { DARABONBA_PTR_SET_RVALUE(consumeWyIds_, consumeWyIds) };


    // deductionRequestId Field Functions 
    bool hasDeductionRequestId() const { return this->deductionRequestId_ != nullptr;};
    void deleteDeductionRequestId() { this->deductionRequestId_ = nullptr;};
    inline string getDeductionRequestId() const { DARABONBA_PTR_GET_DEFAULT(deductionRequestId_, "") };
    inline DescribePackageDeductionsRequest& setDeductionRequestId(string deductionRequestId) { DARABONBA_PTR_SET_VALUE(deductionRequestId_, deductionRequestId) };


    // deductionTypes Field Functions 
    bool hasDeductionTypes() const { return this->deductionTypes_ != nullptr;};
    void deleteDeductionTypes() { this->deductionTypes_ = nullptr;};
    inline const vector<string> & getDeductionTypes() const { DARABONBA_PTR_GET_CONST(deductionTypes_, vector<string>) };
    inline vector<string> getDeductionTypes() { DARABONBA_PTR_GET(deductionTypes_, vector<string>) };
    inline DescribePackageDeductionsRequest& setDeductionTypes(const vector<string> & deductionTypes) { DARABONBA_PTR_SET_VALUE(deductionTypes_, deductionTypes) };
    inline DescribePackageDeductionsRequest& setDeductionTypes(vector<string> && deductionTypes) { DARABONBA_PTR_SET_RVALUE(deductionTypes_, deductionTypes) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribePackageDeductionsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupResourceTypes Field Functions 
    bool hasGroupResourceTypes() const { return this->groupResourceTypes_ != nullptr;};
    void deleteGroupResourceTypes() { this->groupResourceTypes_ = nullptr;};
    inline const vector<string> & getGroupResourceTypes() const { DARABONBA_PTR_GET_CONST(groupResourceTypes_, vector<string>) };
    inline vector<string> getGroupResourceTypes() { DARABONBA_PTR_GET(groupResourceTypes_, vector<string>) };
    inline DescribePackageDeductionsRequest& setGroupResourceTypes(const vector<string> & groupResourceTypes) { DARABONBA_PTR_SET_VALUE(groupResourceTypes_, groupResourceTypes) };
    inline DescribePackageDeductionsRequest& setGroupResourceTypes(vector<string> && groupResourceTypes) { DARABONBA_PTR_SET_RVALUE(groupResourceTypes_, groupResourceTypes) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribePackageDeductionsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceIdType Field Functions 
    bool hasInstanceIdType() const { return this->instanceIdType_ != nullptr;};
    void deleteInstanceIdType() { this->instanceIdType_ = nullptr;};
    inline string getInstanceIdType() const { DARABONBA_PTR_GET_DEFAULT(instanceIdType_, "") };
    inline DescribePackageDeductionsRequest& setInstanceIdType(string instanceIdType) { DARABONBA_PTR_SET_VALUE(instanceIdType_, instanceIdType) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribePackageDeductionsRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribePackageDeductionsRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline DescribePackageDeductionsRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // packageIds Field Functions 
    bool hasPackageIds() const { return this->packageIds_ != nullptr;};
    void deletePackageIds() { this->packageIds_ = nullptr;};
    inline const vector<string> & getPackageIds() const { DARABONBA_PTR_GET_CONST(packageIds_, vector<string>) };
    inline vector<string> getPackageIds() { DARABONBA_PTR_GET(packageIds_, vector<string>) };
    inline DescribePackageDeductionsRequest& setPackageIds(const vector<string> & packageIds) { DARABONBA_PTR_SET_VALUE(packageIds_, packageIds) };
    inline DescribePackageDeductionsRequest& setPackageIds(vector<string> && packageIds) { DARABONBA_PTR_SET_RVALUE(packageIds_, packageIds) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribePackageDeductionsRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePackageDeductionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribePackageDeductionsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<string> & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
    inline vector<string> getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
    inline DescribePackageDeductionsRequest& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline DescribePackageDeductionsRequest& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline DescribePackageDeductionsRequest& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // runIdList Field Functions 
    bool hasRunIdList() const { return this->runIdList_ != nullptr;};
    void deleteRunIdList() { this->runIdList_ = nullptr;};
    inline const vector<string> & getRunIdList() const { DARABONBA_PTR_GET_CONST(runIdList_, vector<string>) };
    inline vector<string> getRunIdList() { DARABONBA_PTR_GET(runIdList_, vector<string>) };
    inline DescribePackageDeductionsRequest& setRunIdList(const vector<string> & runIdList) { DARABONBA_PTR_SET_VALUE(runIdList_, runIdList) };
    inline DescribePackageDeductionsRequest& setRunIdList(vector<string> && runIdList) { DARABONBA_PTR_SET_RVALUE(runIdList_, runIdList) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribePackageDeductionsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // wyId Field Functions 
    bool hasWyId() const { return this->wyId_ != nullptr;};
    void deleteWyId() { this->wyId_ = nullptr;};
    inline string getWyId() const { DARABONBA_PTR_GET_DEFAULT(wyId_, "") };
    inline DescribePackageDeductionsRequest& setWyId(string wyId) { DARABONBA_PTR_SET_VALUE(wyId_, wyId) };


  protected:
    // The agent type.
    shared_ptr<string> agentType_ {};
    // The list of agent types.
    shared_ptr<vector<string>> agentTypes_ {};
    // The business type.
    shared_ptr<string> bizType_ {};
    // The WUYING user ID. You can obtain it by calling the GetLoginToken operation. The response parameter is WyId.
    shared_ptr<string> consumeWyId_ {};
    // The WUYING user ID. You can obtain it by calling the GetLoginToken operation. The response parameter is WyId.
    shared_ptr<vector<string>> consumeWyIds_ {};
    // The request ID.
    shared_ptr<string> deductionRequestId_ {};
    // The deduction types.
    shared_ptr<vector<string>> deductionTypes_ {};
    // The end time of the query. The time is a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> endTime_ {};
    // The list of resource group types.
    shared_ptr<vector<string>> groupResourceTypes_ {};
    // The instance ID, such as ecd-xxx.
    shared_ptr<string> instanceId_ {};
    // The instance ID type.
    shared_ptr<string> instanceIdType_ {};
    // The list of Cloud Desktop IDs. If this field is specified, the PackageIds field is required.
    shared_ptr<vector<string>> instanceIds_ {};
    // The model name.
    shared_ptr<string> model_ {};
    // The list of core-hour package IDs in JSON format.
    shared_ptr<vector<string>> packageIds_ {};
    // The current page number. Default value: 1.
    shared_ptr<int32_t> pageNum_ {};
    // The paging Settings for the number of entries to return on each page in a paged query. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The resource type.
    shared_ptr<string> resourceType_ {};
    // The array of resource types.
    shared_ptr<vector<string>> resourceTypes_ {};
    // The run ID.
    shared_ptr<string> runId_ {};
    // The list of run IDs.
    shared_ptr<vector<string>> runIdList_ {};
    // The start time of the query. The time is a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> startTime_ {};
    // The WUYING user ID. You can obtain it by calling the GetLoginToken operation. The response parameter is WyId.
    shared_ptr<string> wyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
