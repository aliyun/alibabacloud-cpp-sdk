// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACHECKTASKHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACHECKTASKHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ListDataCheckTaskHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCheckTaskHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(batchId, batchId_);
      DARABONBA_PTR_TO_JSON(checkResult, checkResult_);
      DARABONBA_PTR_TO_JSON(createEndTime, createEndTime_);
      DARABONBA_PTR_TO_JSON(createStartTime, createStartTime_);
      DARABONBA_PTR_TO_JSON(execEndTime, execEndTime_);
      DARABONBA_PTR_TO_JSON(execStartTime, execStartTime_);
      DARABONBA_PTR_TO_JSON(execStatus, execStatus_);
      DARABONBA_PTR_TO_JSON(finishEndTime, finishEndTime_);
      DARABONBA_PTR_TO_JSON(finishStartTime, finishStartTime_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCheckTaskHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(batchId, batchId_);
      DARABONBA_PTR_FROM_JSON(checkResult, checkResult_);
      DARABONBA_PTR_FROM_JSON(createEndTime, createEndTime_);
      DARABONBA_PTR_FROM_JSON(createStartTime, createStartTime_);
      DARABONBA_PTR_FROM_JSON(execEndTime, execEndTime_);
      DARABONBA_PTR_FROM_JSON(execStartTime, execStartTime_);
      DARABONBA_PTR_FROM_JSON(execStatus, execStatus_);
      DARABONBA_PTR_FROM_JSON(finishEndTime, finishEndTime_);
      DARABONBA_PTR_FROM_JSON(finishStartTime, finishStartTime_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    ListDataCheckTaskHistoryRequest() = default ;
    ListDataCheckTaskHistoryRequest(const ListDataCheckTaskHistoryRequest &) = default ;
    ListDataCheckTaskHistoryRequest(ListDataCheckTaskHistoryRequest &&) = default ;
    ListDataCheckTaskHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCheckTaskHistoryRequest() = default ;
    ListDataCheckTaskHistoryRequest& operator=(const ListDataCheckTaskHistoryRequest &) = default ;
    ListDataCheckTaskHistoryRequest& operator=(ListDataCheckTaskHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr
        && this->checkResult_ == nullptr && this->createEndTime_ == nullptr && this->createStartTime_ == nullptr && this->execEndTime_ == nullptr && this->execStartTime_ == nullptr
        && this->execStatus_ == nullptr && this->finishEndTime_ == nullptr && this->finishStartTime_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr
        && this->taskId_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline int64_t getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
    inline ListDataCheckTaskHistoryRequest& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // checkResult Field Functions 
    bool hasCheckResult() const { return this->checkResult_ != nullptr;};
    void deleteCheckResult() { this->checkResult_ = nullptr;};
    inline int32_t getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, 0) };
    inline ListDataCheckTaskHistoryRequest& setCheckResult(int32_t checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


    // createEndTime Field Functions 
    bool hasCreateEndTime() const { return this->createEndTime_ != nullptr;};
    void deleteCreateEndTime() { this->createEndTime_ = nullptr;};
    inline string getCreateEndTime() const { DARABONBA_PTR_GET_DEFAULT(createEndTime_, "") };
    inline ListDataCheckTaskHistoryRequest& setCreateEndTime(string createEndTime) { DARABONBA_PTR_SET_VALUE(createEndTime_, createEndTime) };


    // createStartTime Field Functions 
    bool hasCreateStartTime() const { return this->createStartTime_ != nullptr;};
    void deleteCreateStartTime() { this->createStartTime_ = nullptr;};
    inline string getCreateStartTime() const { DARABONBA_PTR_GET_DEFAULT(createStartTime_, "") };
    inline ListDataCheckTaskHistoryRequest& setCreateStartTime(string createStartTime) { DARABONBA_PTR_SET_VALUE(createStartTime_, createStartTime) };


    // execEndTime Field Functions 
    bool hasExecEndTime() const { return this->execEndTime_ != nullptr;};
    void deleteExecEndTime() { this->execEndTime_ = nullptr;};
    inline string getExecEndTime() const { DARABONBA_PTR_GET_DEFAULT(execEndTime_, "") };
    inline ListDataCheckTaskHistoryRequest& setExecEndTime(string execEndTime) { DARABONBA_PTR_SET_VALUE(execEndTime_, execEndTime) };


    // execStartTime Field Functions 
    bool hasExecStartTime() const { return this->execStartTime_ != nullptr;};
    void deleteExecStartTime() { this->execStartTime_ = nullptr;};
    inline string getExecStartTime() const { DARABONBA_PTR_GET_DEFAULT(execStartTime_, "") };
    inline ListDataCheckTaskHistoryRequest& setExecStartTime(string execStartTime) { DARABONBA_PTR_SET_VALUE(execStartTime_, execStartTime) };


    // execStatus Field Functions 
    bool hasExecStatus() const { return this->execStatus_ != nullptr;};
    void deleteExecStatus() { this->execStatus_ = nullptr;};
    inline int32_t getExecStatus() const { DARABONBA_PTR_GET_DEFAULT(execStatus_, 0) };
    inline ListDataCheckTaskHistoryRequest& setExecStatus(int32_t execStatus) { DARABONBA_PTR_SET_VALUE(execStatus_, execStatus) };


    // finishEndTime Field Functions 
    bool hasFinishEndTime() const { return this->finishEndTime_ != nullptr;};
    void deleteFinishEndTime() { this->finishEndTime_ = nullptr;};
    inline string getFinishEndTime() const { DARABONBA_PTR_GET_DEFAULT(finishEndTime_, "") };
    inline ListDataCheckTaskHistoryRequest& setFinishEndTime(string finishEndTime) { DARABONBA_PTR_SET_VALUE(finishEndTime_, finishEndTime) };


    // finishStartTime Field Functions 
    bool hasFinishStartTime() const { return this->finishStartTime_ != nullptr;};
    void deleteFinishStartTime() { this->finishStartTime_ = nullptr;};
    inline string getFinishStartTime() const { DARABONBA_PTR_GET_DEFAULT(finishStartTime_, "") };
    inline ListDataCheckTaskHistoryRequest& setFinishStartTime(string finishStartTime) { DARABONBA_PTR_SET_VALUE(finishStartTime_, finishStartTime) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListDataCheckTaskHistoryRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataCheckTaskHistoryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ListDataCheckTaskHistoryRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the validation job.
    // 
    // This parameter is required.
    shared_ptr<int64_t> batchId_ {};
    // Filters by validation result. Valid values:
    // 
    // - 0: No records.
    // - 1: Passed.
    // - 2: Failed.
    shared_ptr<int32_t> checkResult_ {};
    // The end of the job creation time filter range. Format: YYYY-MM-DD HH:MM:SS.
    shared_ptr<string> createEndTime_ {};
    // The start of the job creation time filter range. Format: YYYY-MM-DD HH:MM:SS.
    shared_ptr<string> createStartTime_ {};
    // The end of the execution start time filter range. Format: YYYY-MM-DD HH:MM:SS.
    shared_ptr<string> execEndTime_ {};
    // The start of the execution start time filter range. Format: YYYY-MM-DD HH:MM:SS.
    shared_ptr<string> execStartTime_ {};
    // Filters by execution status. Valid values:
    // 
    // - 0: Pending.
    // - 1: Running.
    // - 2: Stopped.
    // - 3: Failed.
    // - 4: Completed.
    shared_ptr<int32_t> execStatus_ {};
    // The end of the execution end time filter range. Format: YYYY-MM-DD HH:MM:SS.
    shared_ptr<string> finishEndTime_ {};
    // The start of the execution end time filter range. Format: YYYY-MM-DD HH:MM:SS.
    shared_ptr<string> finishStartTime_ {};
    // The page number of the page to return.
    shared_ptr<int32_t> pageIndex_ {};
    // The maximum number of entries to return per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the data validation task.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
