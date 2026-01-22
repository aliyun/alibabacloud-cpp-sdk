// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKSQLFLASHBACKTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKSQLFLASHBACKTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class PreCheckSqlFlashbackTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreCheckSqlFlashbackTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PolardbxInstanceId, polardbxInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, PreCheckSqlFlashbackTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PolardbxInstanceId, polardbxInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    PreCheckSqlFlashbackTaskRequest() = default ;
    PreCheckSqlFlashbackTaskRequest(const PreCheckSqlFlashbackTaskRequest &) = default ;
    PreCheckSqlFlashbackTaskRequest(PreCheckSqlFlashbackTaskRequest &&) = default ;
    PreCheckSqlFlashbackTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreCheckSqlFlashbackTaskRequest() = default ;
    PreCheckSqlFlashbackTaskRequest& operator=(const PreCheckSqlFlashbackTaskRequest &) = default ;
    PreCheckSqlFlashbackTaskRequest& operator=(PreCheckSqlFlashbackTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && this->endTime_ == nullptr && this->polardbxInstanceId_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline PreCheckSqlFlashbackTaskRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline PreCheckSqlFlashbackTaskRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // polardbxInstanceId Field Functions 
    bool hasPolardbxInstanceId() const { return this->polardbxInstanceId_ != nullptr;};
    void deletePolardbxInstanceId() { this->polardbxInstanceId_ = nullptr;};
    inline string getPolardbxInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polardbxInstanceId_, "") };
    inline PreCheckSqlFlashbackTaskRequest& setPolardbxInstanceId(string polardbxInstanceId) { DARABONBA_PTR_SET_VALUE(polardbxInstanceId_, polardbxInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PreCheckSqlFlashbackTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline PreCheckSqlFlashbackTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // This parameter is required.
    shared_ptr<string> polardbxInstanceId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
