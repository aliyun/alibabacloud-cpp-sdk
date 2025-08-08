// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATATRACKORDERREQUESTPARAM_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATATRACKORDERREQUESTPARAM_HPP_
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
  class CreateDataTrackOrderRequestParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataTrackOrderRequestParam& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(JobEndTime, jobEndTime_);
      DARABONBA_PTR_TO_JSON(JobStartTime, jobStartTime_);
      DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
      DARABONBA_PTR_TO_JSON(TrackTypes, trackTypes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataTrackOrderRequestParam& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(JobEndTime, jobEndTime_);
      DARABONBA_PTR_FROM_JSON(JobStartTime, jobStartTime_);
      DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
      DARABONBA_PTR_FROM_JSON(TrackTypes, trackTypes_);
    };
    CreateDataTrackOrderRequestParam() = default ;
    CreateDataTrackOrderRequestParam(const CreateDataTrackOrderRequestParam &) = default ;
    CreateDataTrackOrderRequestParam(CreateDataTrackOrderRequestParam &&) = default ;
    CreateDataTrackOrderRequestParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataTrackOrderRequestParam() = default ;
    CreateDataTrackOrderRequestParam& operator=(const CreateDataTrackOrderRequestParam &) = default ;
    CreateDataTrackOrderRequestParam& operator=(CreateDataTrackOrderRequestParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbId_ != nullptr
        && this->jobEndTime_ != nullptr && this->jobStartTime_ != nullptr && this->tableNames_ != nullptr && this->trackTypes_ != nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline string dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
    inline CreateDataTrackOrderRequestParam& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // jobEndTime Field Functions 
    bool hasJobEndTime() const { return this->jobEndTime_ != nullptr;};
    void deleteJobEndTime() { this->jobEndTime_ = nullptr;};
    inline string jobEndTime() const { DARABONBA_PTR_GET_DEFAULT(jobEndTime_, "") };
    inline CreateDataTrackOrderRequestParam& setJobEndTime(string jobEndTime) { DARABONBA_PTR_SET_VALUE(jobEndTime_, jobEndTime) };


    // jobStartTime Field Functions 
    bool hasJobStartTime() const { return this->jobStartTime_ != nullptr;};
    void deleteJobStartTime() { this->jobStartTime_ = nullptr;};
    inline string jobStartTime() const { DARABONBA_PTR_GET_DEFAULT(jobStartTime_, "") };
    inline CreateDataTrackOrderRequestParam& setJobStartTime(string jobStartTime) { DARABONBA_PTR_SET_VALUE(jobStartTime_, jobStartTime) };


    // tableNames Field Functions 
    bool hasTableNames() const { return this->tableNames_ != nullptr;};
    void deleteTableNames() { this->tableNames_ = nullptr;};
    inline const vector<string> & tableNames() const { DARABONBA_PTR_GET_CONST(tableNames_, vector<string>) };
    inline vector<string> tableNames() { DARABONBA_PTR_GET(tableNames_, vector<string>) };
    inline CreateDataTrackOrderRequestParam& setTableNames(const vector<string> & tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };
    inline CreateDataTrackOrderRequestParam& setTableNames(vector<string> && tableNames) { DARABONBA_PTR_SET_RVALUE(tableNames_, tableNames) };


    // trackTypes Field Functions 
    bool hasTrackTypes() const { return this->trackTypes_ != nullptr;};
    void deleteTrackTypes() { this->trackTypes_ = nullptr;};
    inline const vector<string> & trackTypes() const { DARABONBA_PTR_GET_CONST(trackTypes_, vector<string>) };
    inline vector<string> trackTypes() { DARABONBA_PTR_GET(trackTypes_, vector<string>) };
    inline CreateDataTrackOrderRequestParam& setTrackTypes(const vector<string> & trackTypes) { DARABONBA_PTR_SET_VALUE(trackTypes_, trackTypes) };
    inline CreateDataTrackOrderRequestParam& setTrackTypes(vector<string> && trackTypes) { DARABONBA_PTR_SET_RVALUE(trackTypes_, trackTypes) };


  protected:
    // The ID of the database. You can call the [SearchDatabases](https://help.aliyun.com/document_detail/141876.html) operation to query the ID of the database.
    // 
    // > You can call this operation to create a data tracking ticket for only physical databases. This operation is not applicable to logical databases.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbId_ = nullptr;
    // The end time of the time range in which you want to track data operations. The time must be in the yyyy-MM-dd HH:mm:ss format.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobEndTime_ = nullptr;
    // The start time of the time range in which you want to track data operations. The time must be in the yyyy-MM-dd HH:mm:ss format.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobStartTime_ = nullptr;
    // The names of the tables for which you want to track data operations.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> tableNames_ = nullptr;
    // The types of data operations that you want to track.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> trackTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
