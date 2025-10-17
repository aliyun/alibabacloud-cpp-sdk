// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPENDINGMAINTENANCEACTIONRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPENDINGMAINTENANCEACTIONRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePendingMaintenanceActionResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePendingMaintenanceActionResponseBodyItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribePendingMaintenanceActionResponseBodyItems& obj) { 
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
    DescribePendingMaintenanceActionResponseBodyItems() = default ;
    DescribePendingMaintenanceActionResponseBodyItems(const DescribePendingMaintenanceActionResponseBodyItems &) = default ;
    DescribePendingMaintenanceActionResponseBodyItems(DescribePendingMaintenanceActionResponseBodyItems &&) = default ;
    DescribePendingMaintenanceActionResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePendingMaintenanceActionResponseBodyItems() = default ;
    DescribePendingMaintenanceActionResponseBodyItems& operator=(const DescribePendingMaintenanceActionResponseBodyItems &) = default ;
    DescribePendingMaintenanceActionResponseBodyItems& operator=(DescribePendingMaintenanceActionResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->DBType_ == nullptr && return this->DBVersion_ == nullptr && return this->deadline_ == nullptr && return this->id_ == nullptr
        && return this->modifiedTime_ == nullptr && return this->prepareInterval_ == nullptr && return this->region_ == nullptr && return this->resultInfo_ == nullptr && return this->startTime_ == nullptr
        && return this->status_ == nullptr && return this->switchTime_ == nullptr && return this->taskType_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribePendingMaintenanceActionResponseBodyItems& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribePendingMaintenanceActionResponseBodyItems& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribePendingMaintenanceActionResponseBodyItems& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribePendingMaintenanceActionResponseBodyItems& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // deadline Field Functions 
    bool hasDeadline() const { return this->deadline_ != nullptr;};
    void deleteDeadline() { this->deadline_ = nullptr;};
    inline string deadline() const { DARABONBA_PTR_GET_DEFAULT(deadline_, "") };
    inline DescribePendingMaintenanceActionResponseBodyItems& setDeadline(string deadline) { DARABONBA_PTR_SET_VALUE(deadline_, deadline) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DescribePendingMaintenanceActionResponseBodyItems& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribePendingMaintenanceActionResponseBodyItems& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // prepareInterval Field Functions 
    bool hasPrepareInterval() const { return this->prepareInterval_ != nullptr;};
    void deletePrepareInterval() { this->prepareInterval_ = nullptr;};
    inline string prepareInterval() const { DARABONBA_PTR_GET_DEFAULT(prepareInterval_, "") };
    inline DescribePendingMaintenanceActionResponseBodyItems& setPrepareInterval(string prepareInterval) { DARABONBA_PTR_SET_VALUE(prepareInterval_, prepareInterval) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribePendingMaintenanceActionResponseBodyItems& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resultInfo Field Functions 
    bool hasResultInfo() const { return this->resultInfo_ != nullptr;};
    void deleteResultInfo() { this->resultInfo_ = nullptr;};
    inline string resultInfo() const { DARABONBA_PTR_GET_DEFAULT(resultInfo_, "") };
    inline DescribePendingMaintenanceActionResponseBodyItems& setResultInfo(string resultInfo) { DARABONBA_PTR_SET_VALUE(resultInfo_, resultInfo) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribePendingMaintenanceActionResponseBodyItems& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribePendingMaintenanceActionResponseBodyItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string switchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline DescribePendingMaintenanceActionResponseBodyItems& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribePendingMaintenanceActionResponseBodyItems& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The time when the task was created. The time is in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The type of the database engine. Valid values:
    // 
    // *   **MySQL**
    // *   **PostgreSQL**
    // *   **Oracle**
    std::shared_ptr<string> DBType_ = nullptr;
    // The version of the database engine.
    // 
    // *   Valid values for the MySQL database engine:
    // 
    //     *   **5.6**
    //     *   **5.7**
    //     *   **8.0**
    // 
    // *   Valid values for the PostgreSQL database engine:
    // 
    //     *   **11**
    //     *   **14**
    // 
    // *   Valid value for the Oracle database engine: **11**
    std::shared_ptr<string> DBVersion_ = nullptr;
    // The deadline before which the task can be executed. The time is in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> deadline_ = nullptr;
    // The ID of the task.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The time when the parameter was modified. The time is in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The preparation time that is required before the pending event is switched. The time follows the `HH:mm:ss` format.
    std::shared_ptr<string> prepareInterval_ = nullptr;
    // The region ID of the pending event.
    std::shared_ptr<string> region_ = nullptr;
    // The execution result of the task. Valid values:
    // 
    // *   **manualCancel**: The task is manually canceled.
    // *   **paramCheckNotPass**: The task fails to pass the parameter check.
    // 
    // > This parameter is returned only when the value of the `Status` parameter is **6** or **7**. The value 6 indicates that the task is completed but fails to be executed. The value 7 indicates that the task is canceled.
    std::shared_ptr<string> resultInfo_ = nullptr;
    // The time when the task was executed in the background. The time is in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the pending task.
    // 
    // *   If you set the `IsHistory` parameter to **0**, the status of the pending task is returned. Valid values:
    // 
    //     *   **2**: The start time of the task is to be specified.
    //     *   **3**: The task is pending.
    //     *   **4**: The task is running. In this case, you cannot modify the execution time.
    // 
    // *   If you set the `IsHistory` parameter to **1**, the details of the historical tasks are returned. Valid values:
    // 
    //     *   **5**: The task is completed and executed.
    //     *   **6**: The task is completed but fails to be executed.
    //     *   **7**: The task is canceled.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The time when the pending event was switched. The time is in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> switchTime_ = nullptr;
    // The type of the pending event.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
