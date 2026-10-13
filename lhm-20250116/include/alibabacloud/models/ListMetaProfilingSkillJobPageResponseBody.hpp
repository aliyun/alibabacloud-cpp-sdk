// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETAPROFILINGSKILLJOBPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMETAPROFILINGSKILLJOBPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ListMetaProfilingSkillJobPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaProfilingSkillJobPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaProfilingSkillJobPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListMetaProfilingSkillJobPageResponseBody() = default ;
    ListMetaProfilingSkillJobPageResponseBody(const ListMetaProfilingSkillJobPageResponseBody &) = default ;
    ListMetaProfilingSkillJobPageResponseBody(ListMetaProfilingSkillJobPageResponseBody &&) = default ;
    ListMetaProfilingSkillJobPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaProfilingSkillJobPageResponseBody() = default ;
    ListMetaProfilingSkillJobPageResponseBody& operator=(const ListMetaProfilingSkillJobPageResponseBody &) = default ;
    ListMetaProfilingSkillJobPageResponseBody& operator=(ListMetaProfilingSkillJobPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(componentId, componentId_);
        DARABONBA_PTR_TO_JSON(currentTaskStatus, currentTaskStatus_);
        DARABONBA_PTR_TO_JSON(dcName, dcName_);
        DARABONBA_PTR_TO_JSON(dcStatus, dcStatus_);
        DARABONBA_PTR_TO_JSON(dcType, dcType_);
        DARABONBA_PTR_TO_JSON(diffNodeNum, diffNodeNum_);
        DARABONBA_PTR_TO_JSON(diffPartitionNum, diffPartitionNum_);
        DARABONBA_PTR_TO_JSON(diffTableNum, diffTableNum_);
        DARABONBA_PTR_TO_JSON(diffWorkflowNum, diffWorkflowNum_);
        DARABONBA_PTR_TO_JSON(dsCategoryType, dsCategoryType_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(hasIncrementChanges, hasIncrementChanges_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(jobDesc, jobDesc_);
        DARABONBA_PTR_TO_JSON(jobName, jobName_);
        DARABONBA_PTR_TO_JSON(jobStatus, jobStatus_);
        DARABONBA_PTR_TO_JSON(lastBatchId, lastBatchId_);
        DARABONBA_PTR_TO_JSON(lastTaskId, lastTaskId_);
        DARABONBA_PTR_TO_JSON(nextCronTime, nextCronTime_);
        DARABONBA_PTR_TO_JSON(profilingEnable, profilingEnable_);
        DARABONBA_PTR_TO_JSON(profilingSchemaList, profilingSchemaList_);
        DARABONBA_PTR_TO_JSON(taskExecResult, taskExecResult_);
        DARABONBA_PTR_TO_JSON(taskFinishTime, taskFinishTime_);
        DARABONBA_PTR_TO_JSON(taskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(componentId, componentId_);
        DARABONBA_PTR_FROM_JSON(currentTaskStatus, currentTaskStatus_);
        DARABONBA_PTR_FROM_JSON(dcName, dcName_);
        DARABONBA_PTR_FROM_JSON(dcStatus, dcStatus_);
        DARABONBA_PTR_FROM_JSON(dcType, dcType_);
        DARABONBA_PTR_FROM_JSON(diffNodeNum, diffNodeNum_);
        DARABONBA_PTR_FROM_JSON(diffPartitionNum, diffPartitionNum_);
        DARABONBA_PTR_FROM_JSON(diffTableNum, diffTableNum_);
        DARABONBA_PTR_FROM_JSON(diffWorkflowNum, diffWorkflowNum_);
        DARABONBA_PTR_FROM_JSON(dsCategoryType, dsCategoryType_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(hasIncrementChanges, hasIncrementChanges_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(jobDesc, jobDesc_);
        DARABONBA_PTR_FROM_JSON(jobName, jobName_);
        DARABONBA_PTR_FROM_JSON(jobStatus, jobStatus_);
        DARABONBA_PTR_FROM_JSON(lastBatchId, lastBatchId_);
        DARABONBA_PTR_FROM_JSON(lastTaskId, lastTaskId_);
        DARABONBA_PTR_FROM_JSON(nextCronTime, nextCronTime_);
        DARABONBA_PTR_FROM_JSON(profilingEnable, profilingEnable_);
        DARABONBA_PTR_FROM_JSON(profilingSchemaList, profilingSchemaList_);
        DARABONBA_PTR_FROM_JSON(taskExecResult, taskExecResult_);
        DARABONBA_PTR_FROM_JSON(taskFinishTime, taskFinishTime_);
        DARABONBA_PTR_FROM_JSON(taskType, taskType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->componentId_ == nullptr
        && this->currentTaskStatus_ == nullptr && this->dcName_ == nullptr && this->dcStatus_ == nullptr && this->dcType_ == nullptr && this->diffNodeNum_ == nullptr
        && this->diffPartitionNum_ == nullptr && this->diffTableNum_ == nullptr && this->diffWorkflowNum_ == nullptr && this->dsCategoryType_ == nullptr && this->gmtCreate_ == nullptr
        && this->hasIncrementChanges_ == nullptr && this->id_ == nullptr && this->jobDesc_ == nullptr && this->jobName_ == nullptr && this->jobStatus_ == nullptr
        && this->lastBatchId_ == nullptr && this->lastTaskId_ == nullptr && this->nextCronTime_ == nullptr && this->profilingEnable_ == nullptr && this->profilingSchemaList_ == nullptr
        && this->taskExecResult_ == nullptr && this->taskFinishTime_ == nullptr && this->taskType_ == nullptr; };
      // componentId Field Functions 
      bool hasComponentId() const { return this->componentId_ != nullptr;};
      void deleteComponentId() { this->componentId_ = nullptr;};
      inline int64_t getComponentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, 0L) };
      inline Data& setComponentId(int64_t componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


      // currentTaskStatus Field Functions 
      bool hasCurrentTaskStatus() const { return this->currentTaskStatus_ != nullptr;};
      void deleteCurrentTaskStatus() { this->currentTaskStatus_ = nullptr;};
      inline int32_t getCurrentTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(currentTaskStatus_, 0) };
      inline Data& setCurrentTaskStatus(int32_t currentTaskStatus) { DARABONBA_PTR_SET_VALUE(currentTaskStatus_, currentTaskStatus) };


      // dcName Field Functions 
      bool hasDcName() const { return this->dcName_ != nullptr;};
      void deleteDcName() { this->dcName_ = nullptr;};
      inline string getDcName() const { DARABONBA_PTR_GET_DEFAULT(dcName_, "") };
      inline Data& setDcName(string dcName) { DARABONBA_PTR_SET_VALUE(dcName_, dcName) };


      // dcStatus Field Functions 
      bool hasDcStatus() const { return this->dcStatus_ != nullptr;};
      void deleteDcStatus() { this->dcStatus_ = nullptr;};
      inline int32_t getDcStatus() const { DARABONBA_PTR_GET_DEFAULT(dcStatus_, 0) };
      inline Data& setDcStatus(int32_t dcStatus) { DARABONBA_PTR_SET_VALUE(dcStatus_, dcStatus) };


      // dcType Field Functions 
      bool hasDcType() const { return this->dcType_ != nullptr;};
      void deleteDcType() { this->dcType_ = nullptr;};
      inline string getDcType() const { DARABONBA_PTR_GET_DEFAULT(dcType_, "") };
      inline Data& setDcType(string dcType) { DARABONBA_PTR_SET_VALUE(dcType_, dcType) };


      // diffNodeNum Field Functions 
      bool hasDiffNodeNum() const { return this->diffNodeNum_ != nullptr;};
      void deleteDiffNodeNum() { this->diffNodeNum_ = nullptr;};
      inline int32_t getDiffNodeNum() const { DARABONBA_PTR_GET_DEFAULT(diffNodeNum_, 0) };
      inline Data& setDiffNodeNum(int32_t diffNodeNum) { DARABONBA_PTR_SET_VALUE(diffNodeNum_, diffNodeNum) };


      // diffPartitionNum Field Functions 
      bool hasDiffPartitionNum() const { return this->diffPartitionNum_ != nullptr;};
      void deleteDiffPartitionNum() { this->diffPartitionNum_ = nullptr;};
      inline int32_t getDiffPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(diffPartitionNum_, 0) };
      inline Data& setDiffPartitionNum(int32_t diffPartitionNum) { DARABONBA_PTR_SET_VALUE(diffPartitionNum_, diffPartitionNum) };


      // diffTableNum Field Functions 
      bool hasDiffTableNum() const { return this->diffTableNum_ != nullptr;};
      void deleteDiffTableNum() { this->diffTableNum_ = nullptr;};
      inline int32_t getDiffTableNum() const { DARABONBA_PTR_GET_DEFAULT(diffTableNum_, 0) };
      inline Data& setDiffTableNum(int32_t diffTableNum) { DARABONBA_PTR_SET_VALUE(diffTableNum_, diffTableNum) };


      // diffWorkflowNum Field Functions 
      bool hasDiffWorkflowNum() const { return this->diffWorkflowNum_ != nullptr;};
      void deleteDiffWorkflowNum() { this->diffWorkflowNum_ = nullptr;};
      inline int32_t getDiffWorkflowNum() const { DARABONBA_PTR_GET_DEFAULT(diffWorkflowNum_, 0) };
      inline Data& setDiffWorkflowNum(int32_t diffWorkflowNum) { DARABONBA_PTR_SET_VALUE(diffWorkflowNum_, diffWorkflowNum) };


      // dsCategoryType Field Functions 
      bool hasDsCategoryType() const { return this->dsCategoryType_ != nullptr;};
      void deleteDsCategoryType() { this->dsCategoryType_ = nullptr;};
      inline string getDsCategoryType() const { DARABONBA_PTR_GET_DEFAULT(dsCategoryType_, "") };
      inline Data& setDsCategoryType(string dsCategoryType) { DARABONBA_PTR_SET_VALUE(dsCategoryType_, dsCategoryType) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // hasIncrementChanges Field Functions 
      bool hasHasIncrementChanges() const { return this->hasIncrementChanges_ != nullptr;};
      void deleteHasIncrementChanges() { this->hasIncrementChanges_ = nullptr;};
      inline bool getHasIncrementChanges() const { DARABONBA_PTR_GET_DEFAULT(hasIncrementChanges_, false) };
      inline Data& setHasIncrementChanges(bool hasIncrementChanges) { DARABONBA_PTR_SET_VALUE(hasIncrementChanges_, hasIncrementChanges) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // jobDesc Field Functions 
      bool hasJobDesc() const { return this->jobDesc_ != nullptr;};
      void deleteJobDesc() { this->jobDesc_ = nullptr;};
      inline string getJobDesc() const { DARABONBA_PTR_GET_DEFAULT(jobDesc_, "") };
      inline Data& setJobDesc(string jobDesc) { DARABONBA_PTR_SET_VALUE(jobDesc_, jobDesc) };


      // jobName Field Functions 
      bool hasJobName() const { return this->jobName_ != nullptr;};
      void deleteJobName() { this->jobName_ = nullptr;};
      inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
      inline Data& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


      // jobStatus Field Functions 
      bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
      void deleteJobStatus() { this->jobStatus_ = nullptr;};
      inline int32_t getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, 0) };
      inline Data& setJobStatus(int32_t jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


      // lastBatchId Field Functions 
      bool hasLastBatchId() const { return this->lastBatchId_ != nullptr;};
      void deleteLastBatchId() { this->lastBatchId_ = nullptr;};
      inline string getLastBatchId() const { DARABONBA_PTR_GET_DEFAULT(lastBatchId_, "") };
      inline Data& setLastBatchId(string lastBatchId) { DARABONBA_PTR_SET_VALUE(lastBatchId_, lastBatchId) };


      // lastTaskId Field Functions 
      bool hasLastTaskId() const { return this->lastTaskId_ != nullptr;};
      void deleteLastTaskId() { this->lastTaskId_ = nullptr;};
      inline int64_t getLastTaskId() const { DARABONBA_PTR_GET_DEFAULT(lastTaskId_, 0L) };
      inline Data& setLastTaskId(int64_t lastTaskId) { DARABONBA_PTR_SET_VALUE(lastTaskId_, lastTaskId) };


      // nextCronTime Field Functions 
      bool hasNextCronTime() const { return this->nextCronTime_ != nullptr;};
      void deleteNextCronTime() { this->nextCronTime_ = nullptr;};
      inline string getNextCronTime() const { DARABONBA_PTR_GET_DEFAULT(nextCronTime_, "") };
      inline Data& setNextCronTime(string nextCronTime) { DARABONBA_PTR_SET_VALUE(nextCronTime_, nextCronTime) };


      // profilingEnable Field Functions 
      bool hasProfilingEnable() const { return this->profilingEnable_ != nullptr;};
      void deleteProfilingEnable() { this->profilingEnable_ = nullptr;};
      inline int32_t getProfilingEnable() const { DARABONBA_PTR_GET_DEFAULT(profilingEnable_, 0) };
      inline Data& setProfilingEnable(int32_t profilingEnable) { DARABONBA_PTR_SET_VALUE(profilingEnable_, profilingEnable) };


      // profilingSchemaList Field Functions 
      bool hasProfilingSchemaList() const { return this->profilingSchemaList_ != nullptr;};
      void deleteProfilingSchemaList() { this->profilingSchemaList_ = nullptr;};
      inline const vector<string> & getProfilingSchemaList() const { DARABONBA_PTR_GET_CONST(profilingSchemaList_, vector<string>) };
      inline vector<string> getProfilingSchemaList() { DARABONBA_PTR_GET(profilingSchemaList_, vector<string>) };
      inline Data& setProfilingSchemaList(const vector<string> & profilingSchemaList) { DARABONBA_PTR_SET_VALUE(profilingSchemaList_, profilingSchemaList) };
      inline Data& setProfilingSchemaList(vector<string> && profilingSchemaList) { DARABONBA_PTR_SET_RVALUE(profilingSchemaList_, profilingSchemaList) };


      // taskExecResult Field Functions 
      bool hasTaskExecResult() const { return this->taskExecResult_ != nullptr;};
      void deleteTaskExecResult() { this->taskExecResult_ = nullptr;};
      inline int32_t getTaskExecResult() const { DARABONBA_PTR_GET_DEFAULT(taskExecResult_, 0) };
      inline Data& setTaskExecResult(int32_t taskExecResult) { DARABONBA_PTR_SET_VALUE(taskExecResult_, taskExecResult) };


      // taskFinishTime Field Functions 
      bool hasTaskFinishTime() const { return this->taskFinishTime_ != nullptr;};
      void deleteTaskFinishTime() { this->taskFinishTime_ = nullptr;};
      inline string getTaskFinishTime() const { DARABONBA_PTR_GET_DEFAULT(taskFinishTime_, "") };
      inline Data& setTaskFinishTime(string taskFinishTime) { DARABONBA_PTR_SET_VALUE(taskFinishTime_, taskFinishTime) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Data& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The component ID, which is the primary key identifier of the data source component.
      shared_ptr<int64_t> componentId_ {};
      // The identifier of the current execution status of the task.
      shared_ptr<int32_t> currentTaskStatus_ {};
      // The data component name.
      shared_ptr<string> dcName_ {};
      // The status identifier of the data component.
      shared_ptr<int32_t> dcStatus_ {};
      // The type identifier of the data component.
      shared_ptr<string> dcType_ {};
      // The number of differing nodes.
      shared_ptr<int32_t> diffNodeNum_ {};
      // The number of differing partitions.
      shared_ptr<int32_t> diffPartitionNum_ {};
      // The number of differing tables.
      shared_ptr<int32_t> diffTableNum_ {};
      // The number of differing workflows.
      shared_ptr<int32_t> diffWorkflowNum_ {};
      // The category type identifier of the data source.
      shared_ptr<string> dsCategoryType_ {};
      // The time when the record was created.
      shared_ptr<string> gmtCreate_ {};
      // Indicates whether incremental changes exist.
      shared_ptr<bool> hasIncrementChanges_ {};
      // The primary key ID of the object.
      shared_ptr<int64_t> id_ {};
      // The description of the profiling task.
      shared_ptr<string> jobDesc_ {};
      // The profiling task name.
      shared_ptr<string> jobName_ {};
      // The status identifier of the profiling task.
      shared_ptr<int32_t> jobStatus_ {};
      // The ID of the most recent execution batch.
      shared_ptr<string> lastBatchId_ {};
      // The ID of the most recently executed task.
      shared_ptr<int64_t> lastTaskId_ {};
      // The estimated time for the next scheduled execution.
      shared_ptr<string> nextCronTime_ {};
      // Indicates whether data profiling is enabled.
      shared_ptr<int32_t> profilingEnable_ {};
      // The list of schemas (databases) to be profiled.
      shared_ptr<vector<string>> profilingSchemaList_ {};
      // The identifier of the task execution result.
      shared_ptr<int32_t> taskExecResult_ {};
      // The time when the task execution was completed.
      shared_ptr<string> taskFinishTime_ {};
      // The type identifier of the task.
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListMetaProfilingSkillJobPageResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListMetaProfilingSkillJobPageResponseBody::Data>) };
    inline vector<ListMetaProfilingSkillJobPageResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListMetaProfilingSkillJobPageResponseBody::Data>) };
    inline ListMetaProfilingSkillJobPageResponseBody& setData(const vector<ListMetaProfilingSkillJobPageResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMetaProfilingSkillJobPageResponseBody& setData(vector<ListMetaProfilingSkillJobPageResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListMetaProfilingSkillJobPageResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListMetaProfilingSkillJobPageResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListMetaProfilingSkillJobPageResponseBody& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMetaProfilingSkillJobPageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMetaProfilingSkillJobPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMetaProfilingSkillJobPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMetaProfilingSkillJobPageResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of profiling tasks. For the element structure, see the descriptions of the child fields.
    shared_ptr<vector<ListMetaProfilingSkillJobPageResponseBody::Data>> data_ {};
    // The error code. This parameter is an empty string if the call is successful.
    shared_ptr<string> errCode_ {};
    // The error message. This parameter is an empty string if the call is successful.
    shared_ptr<string> errMessage_ {};
    // The current page number, starting from 1.
    shared_ptr<int32_t> pageIndex_ {};
    // The number of records to return per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID used to locate and troubleshoot issues for this call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. A value of true indicates success, and a value of false indicates failure. If the call fails, troubleshoot the issue based on the errCode and errMessage parameters.
    shared_ptr<bool> success_ {};
    // The total number of records that meet the specified conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
