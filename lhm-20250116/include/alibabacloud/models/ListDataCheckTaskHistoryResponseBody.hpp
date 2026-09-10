// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACHECKTASKHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACHECKTASKHISTORYRESPONSEBODY_HPP_
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
  class ListDataCheckTaskHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCheckTaskHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCheckTaskHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListDataCheckTaskHistoryResponseBody() = default ;
    ListDataCheckTaskHistoryResponseBody(const ListDataCheckTaskHistoryResponseBody &) = default ;
    ListDataCheckTaskHistoryResponseBody(ListDataCheckTaskHistoryResponseBody &&) = default ;
    ListDataCheckTaskHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCheckTaskHistoryResponseBody() = default ;
    ListDataCheckTaskHistoryResponseBody& operator=(const ListDataCheckTaskHistoryResponseBody &) = default ;
    ListDataCheckTaskHistoryResponseBody& operator=(ListDataCheckTaskHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(batchId, batchId_);
        DARABONBA_PTR_TO_JSON(biz, biz_);
        DARABONBA_PTR_TO_JSON(checkResult, checkResult_);
        DARABONBA_PTR_TO_JSON(checkTableNum, checkTableNum_);
        DARABONBA_PTR_TO_JSON(concurrency, concurrency_);
        DARABONBA_PTR_TO_JSON(creator, creator_);
        DARABONBA_PTR_TO_JSON(cronExp, cronExp_);
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(errorTableNum, errorTableNum_);
        DARABONBA_PTR_TO_JSON(execStatus, execStatus_);
        DARABONBA_PTR_TO_JSON(execTime, execTime_);
        DARABONBA_PTR_TO_JSON(extra, extra_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(operator, operator_);
        DARABONBA_PTR_TO_JSON(originBatchId, originBatchId_);
        DARABONBA_PTR_TO_JSON(passProcess, passProcess_);
        DARABONBA_PTR_TO_JSON(passProcessExport, passProcessExport_);
        DARABONBA_PTR_TO_JSON(progress, progress_);
        DARABONBA_PTR_TO_JSON(reportTime, reportTime_);
        DARABONBA_PTR_TO_JSON(reportTitle, reportTitle_);
        DARABONBA_PTR_TO_JSON(scheduleId, scheduleId_);
        DARABONBA_PTR_TO_JSON(seqId, seqId_);
        DARABONBA_PTR_TO_JSON(skipTableNum, skipTableNum_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(successfulTableNum, successfulTableNum_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(batchId, batchId_);
        DARABONBA_PTR_FROM_JSON(biz, biz_);
        DARABONBA_PTR_FROM_JSON(checkResult, checkResult_);
        DARABONBA_PTR_FROM_JSON(checkTableNum, checkTableNum_);
        DARABONBA_PTR_FROM_JSON(concurrency, concurrency_);
        DARABONBA_PTR_FROM_JSON(creator, creator_);
        DARABONBA_PTR_FROM_JSON(cronExp, cronExp_);
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(errorTableNum, errorTableNum_);
        DARABONBA_PTR_FROM_JSON(execStatus, execStatus_);
        DARABONBA_PTR_FROM_JSON(execTime, execTime_);
        DARABONBA_PTR_FROM_JSON(extra, extra_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(operator, operator_);
        DARABONBA_PTR_FROM_JSON(originBatchId, originBatchId_);
        DARABONBA_PTR_FROM_JSON(passProcess, passProcess_);
        DARABONBA_PTR_FROM_JSON(passProcessExport, passProcessExport_);
        DARABONBA_PTR_FROM_JSON(progress, progress_);
        DARABONBA_PTR_FROM_JSON(reportTime, reportTime_);
        DARABONBA_PTR_FROM_JSON(reportTitle, reportTitle_);
        DARABONBA_PTR_FROM_JSON(scheduleId, scheduleId_);
        DARABONBA_PTR_FROM_JSON(seqId, seqId_);
        DARABONBA_PTR_FROM_JSON(skipTableNum, skipTableNum_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(successfulTableNum, successfulTableNum_);
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
      virtual bool empty() const override { return this->batchId_ == nullptr
        && this->biz_ == nullptr && this->checkResult_ == nullptr && this->checkTableNum_ == nullptr && this->concurrency_ == nullptr && this->creator_ == nullptr
        && this->cronExp_ == nullptr && this->endTime_ == nullptr && this->errorMsg_ == nullptr && this->errorTableNum_ == nullptr && this->execStatus_ == nullptr
        && this->execTime_ == nullptr && this->extra_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->operator_ == nullptr
        && this->originBatchId_ == nullptr && this->passProcess_ == nullptr && this->passProcessExport_ == nullptr && this->progress_ == nullptr && this->reportTime_ == nullptr
        && this->reportTitle_ == nullptr && this->scheduleId_ == nullptr && this->seqId_ == nullptr && this->skipTableNum_ == nullptr && this->startTime_ == nullptr
        && this->successfulTableNum_ == nullptr; };
      // batchId Field Functions 
      bool hasBatchId() const { return this->batchId_ != nullptr;};
      void deleteBatchId() { this->batchId_ = nullptr;};
      inline int64_t getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
      inline Data& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


      // biz Field Functions 
      bool hasBiz() const { return this->biz_ != nullptr;};
      void deleteBiz() { this->biz_ = nullptr;};
      inline string getBiz() const { DARABONBA_PTR_GET_DEFAULT(biz_, "") };
      inline Data& setBiz(string biz) { DARABONBA_PTR_SET_VALUE(biz_, biz) };


      // checkResult Field Functions 
      bool hasCheckResult() const { return this->checkResult_ != nullptr;};
      void deleteCheckResult() { this->checkResult_ = nullptr;};
      inline int32_t getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, 0) };
      inline Data& setCheckResult(int32_t checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


      // checkTableNum Field Functions 
      bool hasCheckTableNum() const { return this->checkTableNum_ != nullptr;};
      void deleteCheckTableNum() { this->checkTableNum_ = nullptr;};
      inline int64_t getCheckTableNum() const { DARABONBA_PTR_GET_DEFAULT(checkTableNum_, 0L) };
      inline Data& setCheckTableNum(int64_t checkTableNum) { DARABONBA_PTR_SET_VALUE(checkTableNum_, checkTableNum) };


      // concurrency Field Functions 
      bool hasConcurrency() const { return this->concurrency_ != nullptr;};
      void deleteConcurrency() { this->concurrency_ = nullptr;};
      inline int64_t getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0L) };
      inline Data& setConcurrency(int64_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Data& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // cronExp Field Functions 
      bool hasCronExp() const { return this->cronExp_ != nullptr;};
      void deleteCronExp() { this->cronExp_ = nullptr;};
      inline string getCronExp() const { DARABONBA_PTR_GET_DEFAULT(cronExp_, "") };
      inline Data& setCronExp(string cronExp) { DARABONBA_PTR_SET_VALUE(cronExp_, cronExp) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline Data& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // errorTableNum Field Functions 
      bool hasErrorTableNum() const { return this->errorTableNum_ != nullptr;};
      void deleteErrorTableNum() { this->errorTableNum_ = nullptr;};
      inline int64_t getErrorTableNum() const { DARABONBA_PTR_GET_DEFAULT(errorTableNum_, 0L) };
      inline Data& setErrorTableNum(int64_t errorTableNum) { DARABONBA_PTR_SET_VALUE(errorTableNum_, errorTableNum) };


      // execStatus Field Functions 
      bool hasExecStatus() const { return this->execStatus_ != nullptr;};
      void deleteExecStatus() { this->execStatus_ = nullptr;};
      inline int32_t getExecStatus() const { DARABONBA_PTR_GET_DEFAULT(execStatus_, 0) };
      inline Data& setExecStatus(int32_t execStatus) { DARABONBA_PTR_SET_VALUE(execStatus_, execStatus) };


      // execTime Field Functions 
      bool hasExecTime() const { return this->execTime_ != nullptr;};
      void deleteExecTime() { this->execTime_ = nullptr;};
      inline string getExecTime() const { DARABONBA_PTR_GET_DEFAULT(execTime_, "") };
      inline Data& setExecTime(string execTime) { DARABONBA_PTR_SET_VALUE(execTime_, execTime) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline Data& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline Data& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // originBatchId Field Functions 
      bool hasOriginBatchId() const { return this->originBatchId_ != nullptr;};
      void deleteOriginBatchId() { this->originBatchId_ = nullptr;};
      inline int64_t getOriginBatchId() const { DARABONBA_PTR_GET_DEFAULT(originBatchId_, 0L) };
      inline Data& setOriginBatchId(int64_t originBatchId) { DARABONBA_PTR_SET_VALUE(originBatchId_, originBatchId) };


      // passProcess Field Functions 
      bool hasPassProcess() const { return this->passProcess_ != nullptr;};
      void deletePassProcess() { this->passProcess_ = nullptr;};
      inline double getPassProcess() const { DARABONBA_PTR_GET_DEFAULT(passProcess_, 0.0) };
      inline Data& setPassProcess(double passProcess) { DARABONBA_PTR_SET_VALUE(passProcess_, passProcess) };


      // passProcessExport Field Functions 
      bool hasPassProcessExport() const { return this->passProcessExport_ != nullptr;};
      void deletePassProcessExport() { this->passProcessExport_ = nullptr;};
      inline string getPassProcessExport() const { DARABONBA_PTR_GET_DEFAULT(passProcessExport_, "") };
      inline Data& setPassProcessExport(string passProcessExport) { DARABONBA_PTR_SET_VALUE(passProcessExport_, passProcessExport) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline double getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0.0) };
      inline Data& setProgress(double progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // reportTime Field Functions 
      bool hasReportTime() const { return this->reportTime_ != nullptr;};
      void deleteReportTime() { this->reportTime_ = nullptr;};
      inline string getReportTime() const { DARABONBA_PTR_GET_DEFAULT(reportTime_, "") };
      inline Data& setReportTime(string reportTime) { DARABONBA_PTR_SET_VALUE(reportTime_, reportTime) };


      // reportTitle Field Functions 
      bool hasReportTitle() const { return this->reportTitle_ != nullptr;};
      void deleteReportTitle() { this->reportTitle_ = nullptr;};
      inline string getReportTitle() const { DARABONBA_PTR_GET_DEFAULT(reportTitle_, "") };
      inline Data& setReportTitle(string reportTitle) { DARABONBA_PTR_SET_VALUE(reportTitle_, reportTitle) };


      // scheduleId Field Functions 
      bool hasScheduleId() const { return this->scheduleId_ != nullptr;};
      void deleteScheduleId() { this->scheduleId_ = nullptr;};
      inline int64_t getScheduleId() const { DARABONBA_PTR_GET_DEFAULT(scheduleId_, 0L) };
      inline Data& setScheduleId(int64_t scheduleId) { DARABONBA_PTR_SET_VALUE(scheduleId_, scheduleId) };


      // seqId Field Functions 
      bool hasSeqId() const { return this->seqId_ != nullptr;};
      void deleteSeqId() { this->seqId_ = nullptr;};
      inline string getSeqId() const { DARABONBA_PTR_GET_DEFAULT(seqId_, "") };
      inline Data& setSeqId(string seqId) { DARABONBA_PTR_SET_VALUE(seqId_, seqId) };


      // skipTableNum Field Functions 
      bool hasSkipTableNum() const { return this->skipTableNum_ != nullptr;};
      void deleteSkipTableNum() { this->skipTableNum_ = nullptr;};
      inline int32_t getSkipTableNum() const { DARABONBA_PTR_GET_DEFAULT(skipTableNum_, 0) };
      inline Data& setSkipTableNum(int32_t skipTableNum) { DARABONBA_PTR_SET_VALUE(skipTableNum_, skipTableNum) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // successfulTableNum Field Functions 
      bool hasSuccessfulTableNum() const { return this->successfulTableNum_ != nullptr;};
      void deleteSuccessfulTableNum() { this->successfulTableNum_ = nullptr;};
      inline int64_t getSuccessfulTableNum() const { DARABONBA_PTR_GET_DEFAULT(successfulTableNum_, 0L) };
      inline Data& setSuccessfulTableNum(int64_t successfulTableNum) { DARABONBA_PTR_SET_VALUE(successfulTableNum_, successfulTableNum) };


    protected:
      // The batch ID.
      shared_ptr<int64_t> batchId_ {};
      // The business field.
      shared_ptr<string> biz_ {};
      // The execution result. Valid values: no record, passed, or not passed.
      shared_ptr<int32_t> checkResult_ {};
      // The number of checked tables.
      shared_ptr<int64_t> checkTableNum_ {};
      // The concurrency of the batch.
      shared_ptr<int64_t> concurrency_ {};
      // The creator.
      shared_ptr<string> creator_ {};
      // The scheduling cycle expression.
      shared_ptr<string> cronExp_ {};
      // The end time, in the format of YYYY-MM-DD HH:MM:SS.
      shared_ptr<string> endTime_ {};
      // The error message.
      shared_ptr<string> errorMsg_ {};
      // The number of error tables.
      shared_ptr<int64_t> errorTableNum_ {};
      // The execution status. Valid values: pending, running, stopped, failed, or completed.
      shared_ptr<int32_t> execStatus_ {};
      // The execution duration, in the format of HH:MM:SS.
      shared_ptr<string> execTime_ {};
      // The reserved field.
      shared_ptr<string> extra_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The last modification time.
      shared_ptr<string> gmtModified_ {};
      // The updater.
      shared_ptr<string> operator_ {};
      // The original batch ID.
      shared_ptr<int64_t> originBatchId_ {};
      // The check pass rate.
      shared_ptr<double> passProcess_ {};
      // The pass rate (export report field), calculated by dividing the number of passed tables by the total number of checked tables. The value is returned as a string with a percent sign and two decimal places (for example, 100.00%). If no checked table data exists, the value is -.
      shared_ptr<string> passProcessExport_ {};
      // The task progress.
      shared_ptr<double> progress_ {};
      // The check report time, which is the completion time of the last job.
      shared_ptr<string> reportTime_ {};
      // The check report title.
      shared_ptr<string> reportTitle_ {};
      // The scheduled task ID.
      shared_ptr<int64_t> scheduleId_ {};
      // The task number.
      shared_ptr<string> seqId_ {};
      // The number of skipped tables.
      shared_ptr<int32_t> skipTableNum_ {};
      // The start time, in the format of YYYY-MM-DD HH:MM:SS.
      shared_ptr<string> startTime_ {};
      // The number of successful tables.
      shared_ptr<int64_t> successfulTableNum_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDataCheckTaskHistoryResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDataCheckTaskHistoryResponseBody::Data>) };
    inline vector<ListDataCheckTaskHistoryResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDataCheckTaskHistoryResponseBody::Data>) };
    inline ListDataCheckTaskHistoryResponseBody& setData(const vector<ListDataCheckTaskHistoryResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataCheckTaskHistoryResponseBody& setData(vector<ListDataCheckTaskHistoryResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListDataCheckTaskHistoryResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListDataCheckTaskHistoryResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListDataCheckTaskHistoryResponseBody& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataCheckTaskHistoryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataCheckTaskHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataCheckTaskHistoryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataCheckTaskHistoryResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The data list returned by the operation. For the element structure, see the child field descriptions.
    shared_ptr<vector<ListDataCheckTaskHistoryResponseBody::Data>> data_ {};
    // The error code. An empty string is returned if the call is successful.
    shared_ptr<string> errCode_ {};
    // The error message. An empty string is returned if the call is successful.
    shared_ptr<string> errMessage_ {};
    // The page number, starting from 1.
    shared_ptr<int32_t> pageIndex_ {};
    // The page size, which is the number of records returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. A value of true indicates success. A value of false indicates failure. If the call fails, check errCode and errMessage for troubleshooting.
    shared_ptr<bool> success_ {};
    // The total number of records that match the query conditions. This value is used for pagination.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
