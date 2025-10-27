// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCECLASSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCECLASSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyDBInstanceClassResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceClassResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ComputingGroupId, computingGroupId_);
      DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceClassResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputingGroupId, computingGroupId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ModifyDBInstanceClassResponseBodyData() = default ;
    ModifyDBInstanceClassResponseBodyData(const ModifyDBInstanceClassResponseBodyData &) = default ;
    ModifyDBInstanceClassResponseBodyData(ModifyDBInstanceClassResponseBodyData &&) = default ;
    ModifyDBInstanceClassResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceClassResponseBodyData() = default ;
    ModifyDBInstanceClassResponseBodyData& operator=(const ModifyDBInstanceClassResponseBodyData &) = default ;
    ModifyDBInstanceClassResponseBodyData& operator=(ModifyDBInstanceClassResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computingGroupId_ == nullptr
        && return this->DBInstanceID_ == nullptr && return this->DBInstanceName_ == nullptr && return this->scaleMax_ == nullptr && return this->scaleMin_ == nullptr && return this->taskId_ == nullptr; };
    // computingGroupId Field Functions 
    bool hasComputingGroupId() const { return this->computingGroupId_ != nullptr;};
    void deleteComputingGroupId() { this->computingGroupId_ = nullptr;};
    inline string computingGroupId() const { DARABONBA_PTR_GET_DEFAULT(computingGroupId_, "") };
    inline ModifyDBInstanceClassResponseBodyData& setComputingGroupId(string computingGroupId) { DARABONBA_PTR_SET_VALUE(computingGroupId_, computingGroupId) };


    // DBInstanceID Field Functions 
    bool hasDBInstanceID() const { return this->DBInstanceID_ != nullptr;};
    void deleteDBInstanceID() { this->DBInstanceID_ = nullptr;};
    inline int64_t DBInstanceID() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceID_, 0L) };
    inline ModifyDBInstanceClassResponseBodyData& setDBInstanceID(int64_t DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifyDBInstanceClassResponseBodyData& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // scaleMax Field Functions 
    bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
    void deleteScaleMax() { this->scaleMax_ = nullptr;};
    inline int64_t scaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, 0L) };
    inline ModifyDBInstanceClassResponseBodyData& setScaleMax(int64_t scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


    // scaleMin Field Functions 
    bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
    void deleteScaleMin() { this->scaleMin_ = nullptr;};
    inline int64_t scaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, 0L) };
    inline ModifyDBInstanceClassResponseBodyData& setScaleMin(int64_t scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ModifyDBInstanceClassResponseBodyData& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> computingGroupId_ = nullptr;
    // The cluster ID.
    std::shared_ptr<int64_t> DBInstanceID_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The maximum capacity for elastic scaling.
    std::shared_ptr<int64_t> scaleMax_ = nullptr;
    // The minimum capacity for elastic scaling.
    std::shared_ptr<int64_t> scaleMin_ = nullptr;
    // The task ID.
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
