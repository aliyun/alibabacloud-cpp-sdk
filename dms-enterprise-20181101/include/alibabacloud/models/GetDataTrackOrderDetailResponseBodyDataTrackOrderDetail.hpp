// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATATRACKORDERDETAILRESPONSEBODYDATATRACKORDERDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETDATATRACKORDERDETAILRESPONSEBODYDATATRACKORDERDETAIL_HPP_
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
  class GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail& obj) { 
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
    GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail() = default ;
    GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail(const GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail &) = default ;
    GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail(GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail &&) = default ;
    GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail() = default ;
    GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail& operator=(const GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail &) = default ;
    GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail& operator=(GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseSearchName_ != nullptr
        && this->dbId_ != nullptr && this->jobEndTime_ != nullptr && this->jobStartTime_ != nullptr && this->jobStatus_ != nullptr && this->logic_ != nullptr
        && this->schemaName_ != nullptr && this->statusDesc_ != nullptr && this->tableNames_ != nullptr && this->trackTypes_ != nullptr; };
    // databaseSearchName Field Functions 
    bool hasDatabaseSearchName() const { return this->databaseSearchName_ != nullptr;};
    void deleteDatabaseSearchName() { this->databaseSearchName_ = nullptr;};
    inline string databaseSearchName() const { DARABONBA_PTR_GET_DEFAULT(databaseSearchName_, "") };
    inline GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail& setDatabaseSearchName(string databaseSearchName) { DARABONBA_PTR_SET_VALUE(databaseSearchName_, databaseSearchName) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // jobEndTime Field Functions 
    bool hasJobEndTime() const { return this->jobEndTime_ != nullptr;};
    void deleteJobEndTime() { this->jobEndTime_ = nullptr;};
    inline string jobEndTime() const { DARABONBA_PTR_GET_DEFAULT(jobEndTime_, "") };
    inline GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail& setJobEndTime(string jobEndTime) { DARABONBA_PTR_SET_VALUE(jobEndTime_, jobEndTime) };


    // jobStartTime Field Functions 
    bool hasJobStartTime() const { return this->jobStartTime_ != nullptr;};
    void deleteJobStartTime() { this->jobStartTime_ = nullptr;};
    inline string jobStartTime() const { DARABONBA_PTR_GET_DEFAULT(jobStartTime_, "") };
    inline GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail& setJobStartTime(string jobStartTime) { DARABONBA_PTR_SET_VALUE(jobStartTime_, jobStartTime) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // tableNames Field Functions 
    bool hasTableNames() const { return this->tableNames_ != nullptr;};
    void deleteTableNames() { this->tableNames_ = nullptr;};
    inline const vector<string> & tableNames() const { DARABONBA_PTR_GET_CONST(tableNames_, vector<string>) };
    inline vector<string> tableNames() { DARABONBA_PTR_GET(tableNames_, vector<string>) };
    inline GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail& setTableNames(const vector<string> & tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };
    inline GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail& setTableNames(vector<string> && tableNames) { DARABONBA_PTR_SET_RVALUE(tableNames_, tableNames) };


    // trackTypes Field Functions 
    bool hasTrackTypes() const { return this->trackTypes_ != nullptr;};
    void deleteTrackTypes() { this->trackTypes_ = nullptr;};
    inline const vector<string> & trackTypes() const { DARABONBA_PTR_GET_CONST(trackTypes_, vector<string>) };
    inline vector<string> trackTypes() { DARABONBA_PTR_GET(trackTypes_, vector<string>) };
    inline GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail& setTrackTypes(const vector<string> & trackTypes) { DARABONBA_PTR_SET_VALUE(trackTypes_, trackTypes) };
    inline GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail& setTrackTypes(vector<string> && trackTypes) { DARABONBA_PTR_SET_RVALUE(trackTypes_, trackTypes) };


  protected:
    // The name that is used to search for the database.
    std::shared_ptr<string> databaseSearchName_ = nullptr;
    // The ID of the database.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // The end time of the time range in which data operations are tracked. The time is in the yyyy-MM-dd HH:mm:ss format.
    std::shared_ptr<string> jobEndTime_ = nullptr;
    // The start time of the time range in which data operations are tracked. The time is in the yyyy-MM-dd HH:mm:ss format.
    std::shared_ptr<string> jobStartTime_ = nullptr;
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
    std::shared_ptr<string> jobStatus_ = nullptr;
    // Indicates whether the database is a logical database. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> logic_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The description of the task status.
    std::shared_ptr<string> statusDesc_ = nullptr;
    // The names of the tables for which data operations are tracked.
    std::shared_ptr<vector<string>> tableNames_ = nullptr;
    // The types of data operations that are tracked.
    std::shared_ptr<vector<string>> trackTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
