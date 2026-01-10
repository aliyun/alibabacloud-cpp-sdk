// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATATRACKORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATATRACKORDERDETAILRESPONSEBODY_HPP_
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
  class GetDataTrackOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataTrackOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataTrackOrderDetail, dataTrackOrderDetail_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataTrackOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataTrackOrderDetail, dataTrackOrderDetail_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataTrackOrderDetailResponseBody() = default ;
    GetDataTrackOrderDetailResponseBody(const GetDataTrackOrderDetailResponseBody &) = default ;
    GetDataTrackOrderDetailResponseBody(GetDataTrackOrderDetailResponseBody &&) = default ;
    GetDataTrackOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataTrackOrderDetailResponseBody() = default ;
    GetDataTrackOrderDetailResponseBody& operator=(const GetDataTrackOrderDetailResponseBody &) = default ;
    GetDataTrackOrderDetailResponseBody& operator=(GetDataTrackOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataTrackOrderDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataTrackOrderDetail& obj) { 
        DARABONBA_PTR_TO_JSON(DatabaseSearchName, databaseSearchName_);
        DARABONBA_PTR_TO_JSON(DbId, dbId_);
        DARABONBA_PTR_TO_JSON(JobEndTime, jobEndTime_);
        DARABONBA_PTR_TO_JSON(JobStartTime, jobStartTime_);
        DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
        DARABONBA_PTR_TO_JSON(Logic, logic_);
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
        DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
        DARABONBA_PTR_TO_JSON(TrackTypes, trackTypes_);
      };
      friend void from_json(const Darabonba::Json& j, DataTrackOrderDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(DatabaseSearchName, databaseSearchName_);
        DARABONBA_PTR_FROM_JSON(DbId, dbId_);
        DARABONBA_PTR_FROM_JSON(JobEndTime, jobEndTime_);
        DARABONBA_PTR_FROM_JSON(JobStartTime, jobStartTime_);
        DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
        DARABONBA_PTR_FROM_JSON(Logic, logic_);
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
        DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
        DARABONBA_PTR_FROM_JSON(TrackTypes, trackTypes_);
      };
      DataTrackOrderDetail() = default ;
      DataTrackOrderDetail(const DataTrackOrderDetail &) = default ;
      DataTrackOrderDetail(DataTrackOrderDetail &&) = default ;
      DataTrackOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataTrackOrderDetail() = default ;
      DataTrackOrderDetail& operator=(const DataTrackOrderDetail &) = default ;
      DataTrackOrderDetail& operator=(DataTrackOrderDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->databaseSearchName_ == nullptr
        && this->dbId_ == nullptr && this->jobEndTime_ == nullptr && this->jobStartTime_ == nullptr && this->jobStatus_ == nullptr && this->logic_ == nullptr
        && this->schemaName_ == nullptr && this->statusDesc_ == nullptr && this->tableNames_ == nullptr && this->trackTypes_ == nullptr; };
      // databaseSearchName Field Functions 
      bool hasDatabaseSearchName() const { return this->databaseSearchName_ != nullptr;};
      void deleteDatabaseSearchName() { this->databaseSearchName_ = nullptr;};
      inline string getDatabaseSearchName() const { DARABONBA_PTR_GET_DEFAULT(databaseSearchName_, "") };
      inline DataTrackOrderDetail& setDatabaseSearchName(string databaseSearchName) { DARABONBA_PTR_SET_VALUE(databaseSearchName_, databaseSearchName) };


      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
      inline DataTrackOrderDetail& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // jobEndTime Field Functions 
      bool hasJobEndTime() const { return this->jobEndTime_ != nullptr;};
      void deleteJobEndTime() { this->jobEndTime_ = nullptr;};
      inline string getJobEndTime() const { DARABONBA_PTR_GET_DEFAULT(jobEndTime_, "") };
      inline DataTrackOrderDetail& setJobEndTime(string jobEndTime) { DARABONBA_PTR_SET_VALUE(jobEndTime_, jobEndTime) };


      // jobStartTime Field Functions 
      bool hasJobStartTime() const { return this->jobStartTime_ != nullptr;};
      void deleteJobStartTime() { this->jobStartTime_ = nullptr;};
      inline string getJobStartTime() const { DARABONBA_PTR_GET_DEFAULT(jobStartTime_, "") };
      inline DataTrackOrderDetail& setJobStartTime(string jobStartTime) { DARABONBA_PTR_SET_VALUE(jobStartTime_, jobStartTime) };


      // jobStatus Field Functions 
      bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
      void deleteJobStatus() { this->jobStatus_ = nullptr;};
      inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
      inline DataTrackOrderDetail& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


      // logic Field Functions 
      bool hasLogic() const { return this->logic_ != nullptr;};
      void deleteLogic() { this->logic_ = nullptr;};
      inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
      inline DataTrackOrderDetail& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


      // schemaName Field Functions 
      bool hasSchemaName() const { return this->schemaName_ != nullptr;};
      void deleteSchemaName() { this->schemaName_ = nullptr;};
      inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
      inline DataTrackOrderDetail& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      // statusDesc Field Functions 
      bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
      void deleteStatusDesc() { this->statusDesc_ = nullptr;};
      inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
      inline DataTrackOrderDetail& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


      // tableNames Field Functions 
      bool hasTableNames() const { return this->tableNames_ != nullptr;};
      void deleteTableNames() { this->tableNames_ = nullptr;};
      inline const vector<string> & getTableNames() const { DARABONBA_PTR_GET_CONST(tableNames_, vector<string>) };
      inline vector<string> getTableNames() { DARABONBA_PTR_GET(tableNames_, vector<string>) };
      inline DataTrackOrderDetail& setTableNames(const vector<string> & tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };
      inline DataTrackOrderDetail& setTableNames(vector<string> && tableNames) { DARABONBA_PTR_SET_RVALUE(tableNames_, tableNames) };


      // trackTypes Field Functions 
      bool hasTrackTypes() const { return this->trackTypes_ != nullptr;};
      void deleteTrackTypes() { this->trackTypes_ = nullptr;};
      inline const vector<string> & getTrackTypes() const { DARABONBA_PTR_GET_CONST(trackTypes_, vector<string>) };
      inline vector<string> getTrackTypes() { DARABONBA_PTR_GET(trackTypes_, vector<string>) };
      inline DataTrackOrderDetail& setTrackTypes(const vector<string> & trackTypes) { DARABONBA_PTR_SET_VALUE(trackTypes_, trackTypes) };
      inline DataTrackOrderDetail& setTrackTypes(vector<string> && trackTypes) { DARABONBA_PTR_SET_RVALUE(trackTypes_, trackTypes) };


    protected:
      // The name that is used to search for the database.
      shared_ptr<string> databaseSearchName_ {};
      // The ID of the database.
      shared_ptr<int64_t> dbId_ {};
      // The end time of the time range in which data operations are tracked. The time is in the yyyy-MM-dd HH:mm:ss format.
      shared_ptr<string> jobEndTime_ {};
      // The start time of the time range in which data operations are tracked. The time is in the yyyy-MM-dd HH:mm:ss format.
      shared_ptr<string> jobStartTime_ {};
      // The status of the data tracking task. Valid values:
      // 
      // *   **INIT**: The task is being initialized.
      // *   **LISTING**: The binary logs are being obtained.
      // *   **LIST_SUCCESS**: The binary logs are successfully obtained.
      // *   **DOWNLOADING**: The binary logs are being downloaded.
      // *   **DOWNLOAD_FAIL**: The binary logs failed to be downloaded.
      // *   **DOWNLOAD_SUCCESS**: The binary logs are successfully downloaded.
      // *   **FILTERING**: The binary logs are being parsed.
      // *   **FILTER_FAIL**: The binary logs failed to be parsed.
      // *   **FILTER_SUCCESS**: The binary logs are successfully parsed.
      shared_ptr<string> jobStatus_ {};
      // Indicates whether the database is a logical database. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> logic_ {};
      // The name of the database.
      shared_ptr<string> schemaName_ {};
      // The description of the task status.
      shared_ptr<string> statusDesc_ {};
      // The names of the tables for which data operations are tracked.
      shared_ptr<vector<string>> tableNames_ {};
      // The types of data operations that are tracked.
      shared_ptr<vector<string>> trackTypes_ {};
    };

    virtual bool empty() const override { return this->dataTrackOrderDetail_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // dataTrackOrderDetail Field Functions 
    bool hasDataTrackOrderDetail() const { return this->dataTrackOrderDetail_ != nullptr;};
    void deleteDataTrackOrderDetail() { this->dataTrackOrderDetail_ = nullptr;};
    inline const GetDataTrackOrderDetailResponseBody::DataTrackOrderDetail & getDataTrackOrderDetail() const { DARABONBA_PTR_GET_CONST(dataTrackOrderDetail_, GetDataTrackOrderDetailResponseBody::DataTrackOrderDetail) };
    inline GetDataTrackOrderDetailResponseBody::DataTrackOrderDetail getDataTrackOrderDetail() { DARABONBA_PTR_GET(dataTrackOrderDetail_, GetDataTrackOrderDetailResponseBody::DataTrackOrderDetail) };
    inline GetDataTrackOrderDetailResponseBody& setDataTrackOrderDetail(const GetDataTrackOrderDetailResponseBody::DataTrackOrderDetail & dataTrackOrderDetail) { DARABONBA_PTR_SET_VALUE(dataTrackOrderDetail_, dataTrackOrderDetail) };
    inline GetDataTrackOrderDetailResponseBody& setDataTrackOrderDetail(GetDataTrackOrderDetailResponseBody::DataTrackOrderDetail && dataTrackOrderDetail) { DARABONBA_PTR_SET_RVALUE(dataTrackOrderDetail_, dataTrackOrderDetail) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataTrackOrderDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataTrackOrderDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataTrackOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataTrackOrderDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the ticket.
    shared_ptr<GetDataTrackOrderDetailResponseBody::DataTrackOrderDetail> dataTrackOrderDetail_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
