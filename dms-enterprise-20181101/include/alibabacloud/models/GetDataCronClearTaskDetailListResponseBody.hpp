// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACRONCLEARTASKDETAILLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATACRONCLEARTASKDETAILLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCronClearTaskDetailListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCronClearTaskDetailListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataCronClearTaskDetailList, dataCronClearTaskDetailList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCronClearTaskDetailListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCronClearTaskDetailList, dataCronClearTaskDetailList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetDataCronClearTaskDetailListResponseBody() = default ;
    GetDataCronClearTaskDetailListResponseBody(const GetDataCronClearTaskDetailListResponseBody &) = default ;
    GetDataCronClearTaskDetailListResponseBody(GetDataCronClearTaskDetailListResponseBody &&) = default ;
    GetDataCronClearTaskDetailListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCronClearTaskDetailListResponseBody() = default ;
    GetDataCronClearTaskDetailListResponseBody& operator=(const GetDataCronClearTaskDetailListResponseBody &) = default ;
    GetDataCronClearTaskDetailListResponseBody& operator=(GetDataCronClearTaskDetailListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataCronClearTaskDetailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataCronClearTaskDetailList& obj) { 
        DARABONBA_PTR_TO_JSON(ActualAffectRows, actualAffectRows_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DBTaskGroupId, DBTaskGroupId_);
        DARABONBA_PTR_TO_JSON(jobStatus, jobStatus_);
      };
      friend void from_json(const Darabonba::Json& j, DataCronClearTaskDetailList& obj) { 
        DARABONBA_PTR_FROM_JSON(ActualAffectRows, actualAffectRows_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DBTaskGroupId, DBTaskGroupId_);
        DARABONBA_PTR_FROM_JSON(jobStatus, jobStatus_);
      };
      DataCronClearTaskDetailList() = default ;
      DataCronClearTaskDetailList(const DataCronClearTaskDetailList &) = default ;
      DataCronClearTaskDetailList(DataCronClearTaskDetailList &&) = default ;
      DataCronClearTaskDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataCronClearTaskDetailList() = default ;
      DataCronClearTaskDetailList& operator=(const DataCronClearTaskDetailList &) = default ;
      DataCronClearTaskDetailList& operator=(DataCronClearTaskDetailList &&) = default ;
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
      inline DataCronClearTaskDetailList& setActualAffectRows(int64_t actualAffectRows) { DARABONBA_PTR_SET_VALUE(actualAffectRows_, actualAffectRows) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DataCronClearTaskDetailList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // DBTaskGroupId Field Functions 
      bool hasDBTaskGroupId() const { return this->DBTaskGroupId_ != nullptr;};
      void deleteDBTaskGroupId() { this->DBTaskGroupId_ = nullptr;};
      inline int64_t getDBTaskGroupId() const { DARABONBA_PTR_GET_DEFAULT(DBTaskGroupId_, 0L) };
      inline DataCronClearTaskDetailList& setDBTaskGroupId(int64_t DBTaskGroupId) { DARABONBA_PTR_SET_VALUE(DBTaskGroupId_, DBTaskGroupId) };


      // jobStatus Field Functions 
      bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
      void deleteJobStatus() { this->jobStatus_ = nullptr;};
      inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
      inline DataCronClearTaskDetailList& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    protected:
      // The number of rows affected by the SQL task.
      shared_ptr<int64_t> actualAffectRows_ {};
      // The time when the SQL task was created.
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

    virtual bool empty() const override { return this->dataCronClearTaskDetailList_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // dataCronClearTaskDetailList Field Functions 
    bool hasDataCronClearTaskDetailList() const { return this->dataCronClearTaskDetailList_ != nullptr;};
    void deleteDataCronClearTaskDetailList() { this->dataCronClearTaskDetailList_ = nullptr;};
    inline const vector<GetDataCronClearTaskDetailListResponseBody::DataCronClearTaskDetailList> & getDataCronClearTaskDetailList() const { DARABONBA_PTR_GET_CONST(dataCronClearTaskDetailList_, vector<GetDataCronClearTaskDetailListResponseBody::DataCronClearTaskDetailList>) };
    inline vector<GetDataCronClearTaskDetailListResponseBody::DataCronClearTaskDetailList> getDataCronClearTaskDetailList() { DARABONBA_PTR_GET(dataCronClearTaskDetailList_, vector<GetDataCronClearTaskDetailListResponseBody::DataCronClearTaskDetailList>) };
    inline GetDataCronClearTaskDetailListResponseBody& setDataCronClearTaskDetailList(const vector<GetDataCronClearTaskDetailListResponseBody::DataCronClearTaskDetailList> & dataCronClearTaskDetailList) { DARABONBA_PTR_SET_VALUE(dataCronClearTaskDetailList_, dataCronClearTaskDetailList) };
    inline GetDataCronClearTaskDetailListResponseBody& setDataCronClearTaskDetailList(vector<GetDataCronClearTaskDetailListResponseBody::DataCronClearTaskDetailList> && dataCronClearTaskDetailList) { DARABONBA_PTR_SET_RVALUE(dataCronClearTaskDetailList_, dataCronClearTaskDetailList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataCronClearTaskDetailListResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataCronClearTaskDetailListResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataCronClearTaskDetailListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataCronClearTaskDetailListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetDataCronClearTaskDetailListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The historical data cleansing tasks
    shared_ptr<vector<GetDataCronClearTaskDetailListResponseBody::DataCronClearTaskDetailList>> dataCronClearTaskDetailList_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The total number of SQL tasks.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
