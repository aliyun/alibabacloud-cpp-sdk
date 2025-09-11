// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMAINTENANCEACTIONRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMAINTENANCEACTIONRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeMaintenanceActionResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMaintenanceActionResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(Deadline, deadline_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(PrepareInterval, prepareInterval_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResultInfo, resultInfo_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMaintenanceActionResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(Deadline, deadline_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(PrepareInterval, prepareInterval_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResultInfo, resultInfo_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeMaintenanceActionResponseBodyItems() = default ;
    DescribeMaintenanceActionResponseBodyItems(const DescribeMaintenanceActionResponseBodyItems &) = default ;
    DescribeMaintenanceActionResponseBodyItems(DescribeMaintenanceActionResponseBodyItems &&) = default ;
    DescribeMaintenanceActionResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMaintenanceActionResponseBodyItems() = default ;
    DescribeMaintenanceActionResponseBodyItems& operator=(const DescribeMaintenanceActionResponseBodyItems &) = default ;
    DescribeMaintenanceActionResponseBodyItems& operator=(DescribeMaintenanceActionResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdTime_ != nullptr
        && this->DBClusterId_ != nullptr && this->DBType_ != nullptr && this->DBVersion_ != nullptr && this->deadline_ != nullptr && this->id_ != nullptr
        && this->modifiedTime_ != nullptr && this->prepareInterval_ != nullptr && this->region_ != nullptr && this->resultInfo_ != nullptr && this->startTime_ != nullptr
        && this->status_ != nullptr && this->switchTime_ != nullptr && this->taskType_ != nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeMaintenanceActionResponseBodyItems& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeMaintenanceActionResponseBodyItems& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeMaintenanceActionResponseBodyItems& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeMaintenanceActionResponseBodyItems& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // deadline Field Functions 
    bool hasDeadline() const { return this->deadline_ != nullptr;};
    void deleteDeadline() { this->deadline_ = nullptr;};
    inline string deadline() const { DARABONBA_PTR_GET_DEFAULT(deadline_, "") };
    inline DescribeMaintenanceActionResponseBodyItems& setDeadline(string deadline) { DARABONBA_PTR_SET_VALUE(deadline_, deadline) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DescribeMaintenanceActionResponseBodyItems& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeMaintenanceActionResponseBodyItems& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // prepareInterval Field Functions 
    bool hasPrepareInterval() const { return this->prepareInterval_ != nullptr;};
    void deletePrepareInterval() { this->prepareInterval_ = nullptr;};
    inline string prepareInterval() const { DARABONBA_PTR_GET_DEFAULT(prepareInterval_, "") };
    inline DescribeMaintenanceActionResponseBodyItems& setPrepareInterval(string prepareInterval) { DARABONBA_PTR_SET_VALUE(prepareInterval_, prepareInterval) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeMaintenanceActionResponseBodyItems& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resultInfo Field Functions 
    bool hasResultInfo() const { return this->resultInfo_ != nullptr;};
    void deleteResultInfo() { this->resultInfo_ = nullptr;};
    inline string resultInfo() const { DARABONBA_PTR_GET_DEFAULT(resultInfo_, "") };
    inline DescribeMaintenanceActionResponseBodyItems& setResultInfo(string resultInfo) { DARABONBA_PTR_SET_VALUE(resultInfo_, resultInfo) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeMaintenanceActionResponseBodyItems& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMaintenanceActionResponseBodyItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string switchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline DescribeMaintenanceActionResponseBodyItems& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeMaintenanceActionResponseBodyItems& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The time when the O\\&M event was created. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The ID of the cluster that is involved in the O\\&M event.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The database engine.
    std::shared_ptr<string> DBType_ = nullptr;
    // The version of the database engine.
    std::shared_ptr<string> DBVersion_ = nullptr;
    // The deadline before which the event can be executed. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> deadline_ = nullptr;
    // The ID of the O\\&M event.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The point in time at which the switchover time of the O\\&M event was modified. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The preparation time that is required before the pending O\\&M event can be switched. The time is in the `HH:mm:ss` format.
    std::shared_ptr<string> prepareInterval_ = nullptr;
    // The ID of the region where the O\\&M event occurs.
    std::shared_ptr<string> region_ = nullptr;
    // The execution result of the O\\&M event.
    // 
    // > This parameter is returned only when the value of `Status` is **FAILED** or **CANCEL**.
    std::shared_ptr<string> resultInfo_ = nullptr;
    // The time when the task was executed in the backend. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The state of the event.
    // 
    // *   If you set `IsHistory` to **0**, the state of the pending O\\&M event is returned. Valid values:
    // 
    //     *   **WAITING_MODIFY**: The start time of the O\\&M event is waiting to be set.
    //     *   **WAITING**: The O\\&M event is waiting to be processed.
    //     *   **PROCESSING**: The O\\&M event is being processed. The switchover time of an event in this state cannot be changed.
    // 
    // *   If you set `IsHistory` to **1**, the state of the historical O\\&M event is returned. Valid values:
    // 
    //     *   **SUCCESS**: The event ended and the execution succeeded.
    //     *   **FAILED**: The event ended but the execution failed.
    //     *   **CANCEL**: The event was canceled.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the pending O\\&M event is switched. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> switchTime_ = nullptr;
    // The type of the O\\&M event.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
