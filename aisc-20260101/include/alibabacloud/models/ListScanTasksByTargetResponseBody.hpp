// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCANTASKSBYTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCANTASKSBYTARGETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class ListScanTasksByTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScanTasksByTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListScanTasksByTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListScanTasksByTargetResponseBody() = default ;
    ListScanTasksByTargetResponseBody(const ListScanTasksByTargetResponseBody &) = default ;
    ListScanTasksByTargetResponseBody(ListScanTasksByTargetResponseBody &&) = default ;
    ListScanTasksByTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScanTasksByTargetResponseBody() = default ;
    ListScanTasksByTargetResponseBody& operator=(const ListScanTasksByTargetResponseBody &) = default ;
    ListScanTasksByTargetResponseBody& operator=(ListScanTasksByTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ExecuteCaseCount, executeCaseCount_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(SampleLevel, sampleLevel_);
        DARABONBA_PTR_TO_JSON(ScanType, scanType_);
        DARABONBA_PTR_TO_JSON(ScannerTaskId, scannerTaskId_);
        DARABONBA_PTR_TO_JSON(ScannerTaskMessage, scannerTaskMessage_);
        DARABONBA_PTR_TO_JSON(ScannerTaskStatus, scannerTaskStatus_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TotalCaseCount, totalCaseCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ExecuteCaseCount, executeCaseCount_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(SampleLevel, sampleLevel_);
        DARABONBA_PTR_FROM_JSON(ScanType, scanType_);
        DARABONBA_PTR_FROM_JSON(ScannerTaskId, scannerTaskId_);
        DARABONBA_PTR_FROM_JSON(ScannerTaskMessage, scannerTaskMessage_);
        DARABONBA_PTR_FROM_JSON(ScannerTaskStatus, scannerTaskStatus_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TotalCaseCount, totalCaseCount_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->endTime_ == nullptr && this->executeCaseCount_ == nullptr && this->riskLevel_ == nullptr && this->sampleLevel_ == nullptr && this->scanType_ == nullptr
        && this->scannerTaskId_ == nullptr && this->scannerTaskMessage_ == nullptr && this->scannerTaskStatus_ == nullptr && this->startTime_ == nullptr && this->taskName_ == nullptr
        && this->totalCaseCount_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // executeCaseCount Field Functions 
      bool hasExecuteCaseCount() const { return this->executeCaseCount_ != nullptr;};
      void deleteExecuteCaseCount() { this->executeCaseCount_ = nullptr;};
      inline int64_t getExecuteCaseCount() const { DARABONBA_PTR_GET_DEFAULT(executeCaseCount_, 0L) };
      inline Data& setExecuteCaseCount(int64_t executeCaseCount) { DARABONBA_PTR_SET_VALUE(executeCaseCount_, executeCaseCount) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Data& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // sampleLevel Field Functions 
      bool hasSampleLevel() const { return this->sampleLevel_ != nullptr;};
      void deleteSampleLevel() { this->sampleLevel_ = nullptr;};
      inline int64_t getSampleLevel() const { DARABONBA_PTR_GET_DEFAULT(sampleLevel_, 0L) };
      inline Data& setSampleLevel(int64_t sampleLevel) { DARABONBA_PTR_SET_VALUE(sampleLevel_, sampleLevel) };


      // scanType Field Functions 
      bool hasScanType() const { return this->scanType_ != nullptr;};
      void deleteScanType() { this->scanType_ = nullptr;};
      inline string getScanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
      inline Data& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


      // scannerTaskId Field Functions 
      bool hasScannerTaskId() const { return this->scannerTaskId_ != nullptr;};
      void deleteScannerTaskId() { this->scannerTaskId_ = nullptr;};
      inline string getScannerTaskId() const { DARABONBA_PTR_GET_DEFAULT(scannerTaskId_, "") };
      inline Data& setScannerTaskId(string scannerTaskId) { DARABONBA_PTR_SET_VALUE(scannerTaskId_, scannerTaskId) };


      // scannerTaskMessage Field Functions 
      bool hasScannerTaskMessage() const { return this->scannerTaskMessage_ != nullptr;};
      void deleteScannerTaskMessage() { this->scannerTaskMessage_ = nullptr;};
      inline string getScannerTaskMessage() const { DARABONBA_PTR_GET_DEFAULT(scannerTaskMessage_, "") };
      inline Data& setScannerTaskMessage(string scannerTaskMessage) { DARABONBA_PTR_SET_VALUE(scannerTaskMessage_, scannerTaskMessage) };


      // scannerTaskStatus Field Functions 
      bool hasScannerTaskStatus() const { return this->scannerTaskStatus_ != nullptr;};
      void deleteScannerTaskStatus() { this->scannerTaskStatus_ = nullptr;};
      inline string getScannerTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(scannerTaskStatus_, "") };
      inline Data& setScannerTaskStatus(string scannerTaskStatus) { DARABONBA_PTR_SET_VALUE(scannerTaskStatus_, scannerTaskStatus) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Data& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // totalCaseCount Field Functions 
      bool hasTotalCaseCount() const { return this->totalCaseCount_ != nullptr;};
      void deleteTotalCaseCount() { this->totalCaseCount_ = nullptr;};
      inline int64_t getTotalCaseCount() const { DARABONBA_PTR_GET_DEFAULT(totalCaseCount_, 0L) };
      inline Data& setTotalCaseCount(int64_t totalCaseCount) { DARABONBA_PTR_SET_VALUE(totalCaseCount_, totalCaseCount) };


    protected:
      // The task creation time, in milliseconds (Unix epoch milliseconds).
      shared_ptr<int64_t> createTime_ {};
      // The task end time, in milliseconds (Unix epoch milliseconds). This value is null if the task has not ended.
      shared_ptr<int64_t> endTime_ {};
      // The number of samples that the task has executed.
      shared_ptr<int64_t> executeCaseCount_ {};
      // The risk level of the task result. This value is null if the task is not completed or no risk assessment has been generated.
      shared_ptr<string> riskLevel_ {};
      // The detection intensity of the task.
      shared_ptr<int64_t> sampleLevel_ {};
      // The scan type of the task. Historical tasks without a recorded scan type are normalized to attack.
      shared_ptr<string> scanType_ {};
      // The unique identifier of the scan task. You can use this ID for result download and status tracking.
      shared_ptr<string> scannerTaskId_ {};
      // The task message. This value contains the failure reason if the task failed, or is empty if the task succeeded or no message is available.
      shared_ptr<string> scannerTaskMessage_ {};
      // The current status of the task.
      shared_ptr<string> scannerTaskStatus_ {};
      // The task start time, in milliseconds (Unix epoch milliseconds). This value is null if the task has not started.
      shared_ptr<int64_t> startTime_ {};
      // The task name. If no name is specified during creation, the default value is "Target Scan - target name".
      shared_ptr<string> taskName_ {};
      // The total number of samples that the task plans to execute.
      shared_ptr<int64_t> totalCaseCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListScanTasksByTargetResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListScanTasksByTargetResponseBody::Data>) };
    inline vector<ListScanTasksByTargetResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListScanTasksByTargetResponseBody::Data>) };
    inline ListScanTasksByTargetResponseBody& setData(const vector<ListScanTasksByTargetResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListScanTasksByTargetResponseBody& setData(vector<ListScanTasksByTargetResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListScanTasksByTargetResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListScanTasksByTargetResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScanTasksByTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListScanTasksByTargetResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of scan tasks on the current page.
    shared_ptr<vector<ListScanTasksByTargetResponseBody::Data>> data_ {};
    // The normalized page number that actually takes effect. This value may differ from the input parameter.
    shared_ptr<int64_t> pageNumber_ {};
    // The normalized number of entries per page that actually takes effect. This value may differ from the input parameter.
    shared_ptr<int64_t> pageSize_ {};
    // The unique identifier of the request, used for troubleshooting and log tracing.
    shared_ptr<string> requestId_ {};
    // The total number of scan tasks that match the filter conditions within the last 366-day window.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
