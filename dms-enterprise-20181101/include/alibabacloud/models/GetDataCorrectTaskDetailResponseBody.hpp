// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACORRECTTASKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATACORRECTTASKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCorrectTaskDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCorrectTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataCorrectTaskDetail, dataCorrectTaskDetail_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCorrectTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCorrectTaskDetail, dataCorrectTaskDetail_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataCorrectTaskDetailResponseBody() = default ;
    GetDataCorrectTaskDetailResponseBody(const GetDataCorrectTaskDetailResponseBody &) = default ;
    GetDataCorrectTaskDetailResponseBody(GetDataCorrectTaskDetailResponseBody &&) = default ;
    GetDataCorrectTaskDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCorrectTaskDetailResponseBody() = default ;
    GetDataCorrectTaskDetailResponseBody& operator=(const GetDataCorrectTaskDetailResponseBody &) = default ;
    GetDataCorrectTaskDetailResponseBody& operator=(GetDataCorrectTaskDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataCorrectTaskDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataCorrectTaskDetail& obj) { 
        DARABONBA_PTR_TO_JSON(ActualAffectRows, actualAffectRows_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DBTaskGroupId, DBTaskGroupId_);
        DARABONBA_PTR_TO_JSON(jobStatus, jobStatus_);
      };
      friend void from_json(const Darabonba::Json& j, DataCorrectTaskDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(ActualAffectRows, actualAffectRows_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DBTaskGroupId, DBTaskGroupId_);
        DARABONBA_PTR_FROM_JSON(jobStatus, jobStatus_);
      };
      DataCorrectTaskDetail() = default ;
      DataCorrectTaskDetail(const DataCorrectTaskDetail &) = default ;
      DataCorrectTaskDetail(DataCorrectTaskDetail &&) = default ;
      DataCorrectTaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataCorrectTaskDetail() = default ;
      DataCorrectTaskDetail& operator=(const DataCorrectTaskDetail &) = default ;
      DataCorrectTaskDetail& operator=(DataCorrectTaskDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actualAffectRows_ == nullptr
        && this->createTime_ == nullptr && this->DBTaskGroupId_ == nullptr && this->jobStatus_ == nullptr; };
      // actualAffectRows Field Functions 
      bool hasActualAffectRows() const { return this->actualAffectRows_ != nullptr;};
      void deleteActualAffectRows() { this->actualAffectRows_ = nullptr;};
      inline int64_t getActualAffectRows() const { DARABONBA_PTR_GET_DEFAULT(actualAffectRows_, 0L) };
      inline DataCorrectTaskDetail& setActualAffectRows(int64_t actualAffectRows) { DARABONBA_PTR_SET_VALUE(actualAffectRows_, actualAffectRows) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DataCorrectTaskDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // DBTaskGroupId Field Functions 
      bool hasDBTaskGroupId() const { return this->DBTaskGroupId_ != nullptr;};
      void deleteDBTaskGroupId() { this->DBTaskGroupId_ = nullptr;};
      inline int64_t getDBTaskGroupId() const { DARABONBA_PTR_GET_DEFAULT(DBTaskGroupId_, 0L) };
      inline DataCorrectTaskDetail& setDBTaskGroupId(int64_t DBTaskGroupId) { DARABONBA_PTR_SET_VALUE(DBTaskGroupId_, DBTaskGroupId) };


      // jobStatus Field Functions 
      bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
      void deleteJobStatus() { this->jobStatus_ = nullptr;};
      inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
      inline DataCorrectTaskDetail& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    protected:
      // The number of rows affected by the SQL statement.
      shared_ptr<int64_t> actualAffectRows_ {};
      // The time when the task was created.
      shared_ptr<string> createTime_ {};
      // The ID of the SQL task group.
      shared_ptr<int64_t> DBTaskGroupId_ {};
      // The state of the SQL task. Valid values:
      // 
      // *   **INIT**: The SQL task was initialized.
      // *   **PENDING**: The SQL task waited to be run.
      // *   **BE_SCHEDULED**: The SQL task waited to be scheduled.
      // *   **FAIL**: The SQL task failed.
      // *   **SUCCESS**: The SQL task was successful.
      // *   **PAUSE**: The SQL task was paused.
      // *   **DELETE**: The SQL task was deleted.
      // *   **RUNNING**: The SQL task was being run.
      shared_ptr<string> jobStatus_ {};
    };

    virtual bool empty() const override { return this->dataCorrectTaskDetail_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // dataCorrectTaskDetail Field Functions 
    bool hasDataCorrectTaskDetail() const { return this->dataCorrectTaskDetail_ != nullptr;};
    void deleteDataCorrectTaskDetail() { this->dataCorrectTaskDetail_ = nullptr;};
    inline const GetDataCorrectTaskDetailResponseBody::DataCorrectTaskDetail & getDataCorrectTaskDetail() const { DARABONBA_PTR_GET_CONST(dataCorrectTaskDetail_, GetDataCorrectTaskDetailResponseBody::DataCorrectTaskDetail) };
    inline GetDataCorrectTaskDetailResponseBody::DataCorrectTaskDetail getDataCorrectTaskDetail() { DARABONBA_PTR_GET(dataCorrectTaskDetail_, GetDataCorrectTaskDetailResponseBody::DataCorrectTaskDetail) };
    inline GetDataCorrectTaskDetailResponseBody& setDataCorrectTaskDetail(const GetDataCorrectTaskDetailResponseBody::DataCorrectTaskDetail & dataCorrectTaskDetail) { DARABONBA_PTR_SET_VALUE(dataCorrectTaskDetail_, dataCorrectTaskDetail) };
    inline GetDataCorrectTaskDetailResponseBody& setDataCorrectTaskDetail(GetDataCorrectTaskDetailResponseBody::DataCorrectTaskDetail && dataCorrectTaskDetail) { DARABONBA_PTR_SET_RVALUE(dataCorrectTaskDetail_, dataCorrectTaskDetail) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataCorrectTaskDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataCorrectTaskDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataCorrectTaskDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataCorrectTaskDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the data change task.
    shared_ptr<GetDataCorrectTaskDetailResponseBody::DataCorrectTaskDetail> dataCorrectTaskDetail_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
