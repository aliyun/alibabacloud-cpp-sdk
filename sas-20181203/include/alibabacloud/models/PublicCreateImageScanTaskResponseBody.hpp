// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICCREATEIMAGESCANTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUBLICCREATEIMAGESCANTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class PublicCreateImageScanTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicCreateImageScanTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PublicCreateImageScanTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PublicCreateImageScanTaskResponseBody() = default ;
    PublicCreateImageScanTaskResponseBody(const PublicCreateImageScanTaskResponseBody &) = default ;
    PublicCreateImageScanTaskResponseBody(PublicCreateImageScanTaskResponseBody &&) = default ;
    PublicCreateImageScanTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicCreateImageScanTaskResponseBody() = default ;
    PublicCreateImageScanTaskResponseBody& operator=(const PublicCreateImageScanTaskResponseBody &) = default ;
    PublicCreateImageScanTaskResponseBody& operator=(PublicCreateImageScanTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CanCreate, canCreate_);
        DARABONBA_PTR_TO_JSON(CollectTime, collectTime_);
        DARABONBA_PTR_TO_JSON(ExecTime, execTime_);
        DARABONBA_PTR_TO_JSON(FinishCount, finishCount_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CanCreate, canCreate_);
        DARABONBA_PTR_FROM_JSON(CollectTime, collectTime_);
        DARABONBA_PTR_FROM_JSON(ExecTime, execTime_);
        DARABONBA_PTR_FROM_JSON(FinishCount, finishCount_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      virtual bool empty() const override { return this->canCreate_ == nullptr
        && this->collectTime_ == nullptr && this->execTime_ == nullptr && this->finishCount_ == nullptr && this->progress_ == nullptr && this->result_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr && this->totalCount_ == nullptr; };
      // canCreate Field Functions 
      bool hasCanCreate() const { return this->canCreate_ != nullptr;};
      void deleteCanCreate() { this->canCreate_ = nullptr;};
      inline bool getCanCreate() const { DARABONBA_PTR_GET_DEFAULT(canCreate_, false) };
      inline Data& setCanCreate(bool canCreate) { DARABONBA_PTR_SET_VALUE(canCreate_, canCreate) };


      // collectTime Field Functions 
      bool hasCollectTime() const { return this->collectTime_ != nullptr;};
      void deleteCollectTime() { this->collectTime_ = nullptr;};
      inline int64_t getCollectTime() const { DARABONBA_PTR_GET_DEFAULT(collectTime_, 0L) };
      inline Data& setCollectTime(int64_t collectTime) { DARABONBA_PTR_SET_VALUE(collectTime_, collectTime) };


      // execTime Field Functions 
      bool hasExecTime() const { return this->execTime_ != nullptr;};
      void deleteExecTime() { this->execTime_ = nullptr;};
      inline int64_t getExecTime() const { DARABONBA_PTR_GET_DEFAULT(execTime_, 0L) };
      inline Data& setExecTime(int64_t execTime) { DARABONBA_PTR_SET_VALUE(execTime_, execTime) };


      // finishCount Field Functions 
      bool hasFinishCount() const { return this->finishCount_ != nullptr;};
      void deleteFinishCount() { this->finishCount_ = nullptr;};
      inline int32_t getFinishCount() const { DARABONBA_PTR_GET_DEFAULT(finishCount_, 0) };
      inline Data& setFinishCount(int32_t finishCount) { DARABONBA_PTR_SET_VALUE(finishCount_, finishCount) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
      inline Data& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline Data& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // Indicates whether you can create more image scan tasks. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      // 
      // > By default, a maximum of 10 image scan tasks can be running at the same time. If 10 image scan tasks are running, you cannot create an image scan task by calling this operation. You must wait for at least one of the 10 existing image scan tasks to complete before you can create an image scan task.
      shared_ptr<bool> canCreate_ {};
      // The timestamp when the image information was collected. Unit: milliseconds.
      shared_ptr<int64_t> collectTime_ {};
      // The timestamp when the image scan task started to run. Unit: milliseconds.
      shared_ptr<int64_t> execTime_ {};
      // The number of images that have been scanned.
      shared_ptr<int32_t> finishCount_ {};
      // The progress of the image scan task in percentage.
      shared_ptr<int32_t> progress_ {};
      // The result of the image scan task. Valid values:
      // 
      // *   **SUCCESS**: The task is successful.
      // *   **TASK_NOT_SUPPORT_REGION**: The images are deployed in a region that is not supported by container image scan.
      // 
      // > For more information about the regions supported by container image scan, see the "Regions supported by container image scan" section in this topic.
      shared_ptr<string> result_ {};
      // The status of the image scan task. Valid values:
      // 
      // *   **INIT**: The task is being initialized.
      // *   **PRE_ANALYZER**: The task is being pre-processed.
      // *   **SUCCESS**: The task is successful.
      // *   **FAIL**: The task fails.
      shared_ptr<string> status_ {};
      // The ID of the image scan task.
      shared_ptr<string> taskId_ {};
      // The total number of images to scan.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const PublicCreateImageScanTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, PublicCreateImageScanTaskResponseBody::Data) };
    inline PublicCreateImageScanTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, PublicCreateImageScanTaskResponseBody::Data) };
    inline PublicCreateImageScanTaskResponseBody& setData(const PublicCreateImageScanTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PublicCreateImageScanTaskResponseBody& setData(PublicCreateImageScanTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PublicCreateImageScanTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned if the call is successful.
    shared_ptr<PublicCreateImageScanTaskResponseBody::Data> data_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
