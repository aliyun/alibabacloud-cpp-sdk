// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEINSPECTIONSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEINSPECTIONSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceInspectionsResponseBodyDataListAutoFunction.hpp>
#include <alibabacloud/models/GetInstanceInspectionsResponseBodyDataListInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetInstanceInspectionsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceInspectionsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AutoFunction, autoFunction_);
      DARABONBA_ANY_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(EnableDasPro, enableDasPro_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Instance, instance_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_ANY_TO_JSON(ScoreMap, scoreMap_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceInspectionsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoFunction, autoFunction_);
      DARABONBA_ANY_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(EnableDasPro, enableDasPro_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_ANY_FROM_JSON(ScoreMap, scoreMap_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    GetInstanceInspectionsResponseBodyDataList() = default ;
    GetInstanceInspectionsResponseBodyDataList(const GetInstanceInspectionsResponseBodyDataList &) = default ;
    GetInstanceInspectionsResponseBodyDataList(GetInstanceInspectionsResponseBodyDataList &&) = default ;
    GetInstanceInspectionsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceInspectionsResponseBodyDataList() = default ;
    GetInstanceInspectionsResponseBodyDataList& operator=(const GetInstanceInspectionsResponseBodyDataList &) = default ;
    GetInstanceInspectionsResponseBodyDataList& operator=(GetInstanceInspectionsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoFunction_ == nullptr
        && return this->data_ == nullptr && return this->enableDasPro_ == nullptr && return this->endTime_ == nullptr && return this->gmtCreate_ == nullptr && return this->instance_ == nullptr
        && return this->score_ == nullptr && return this->scoreMap_ == nullptr && return this->startTime_ == nullptr && return this->state_ == nullptr && return this->taskType_ == nullptr; };
    // autoFunction Field Functions 
    bool hasAutoFunction() const { return this->autoFunction_ != nullptr;};
    void deleteAutoFunction() { this->autoFunction_ = nullptr;};
    inline const Models::GetInstanceInspectionsResponseBodyDataListAutoFunction & autoFunction() const { DARABONBA_PTR_GET_CONST(autoFunction_, Models::GetInstanceInspectionsResponseBodyDataListAutoFunction) };
    inline Models::GetInstanceInspectionsResponseBodyDataListAutoFunction autoFunction() { DARABONBA_PTR_GET(autoFunction_, Models::GetInstanceInspectionsResponseBodyDataListAutoFunction) };
    inline GetInstanceInspectionsResponseBodyDataList& setAutoFunction(const Models::GetInstanceInspectionsResponseBodyDataListAutoFunction & autoFunction) { DARABONBA_PTR_SET_VALUE(autoFunction_, autoFunction) };
    inline GetInstanceInspectionsResponseBodyDataList& setAutoFunction(Models::GetInstanceInspectionsResponseBodyDataListAutoFunction && autoFunction) { DARABONBA_PTR_SET_RVALUE(autoFunction_, autoFunction) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & data() const { DARABONBA_GET(data_) };
    Darabonba::Json & data() { DARABONBA_GET(data_) };
    inline GetInstanceInspectionsResponseBodyDataList& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline GetInstanceInspectionsResponseBodyDataList& setData(Darabonba::Json & data) { DARABONBA_SET_RVALUE(data_, data) };


    // enableDasPro Field Functions 
    bool hasEnableDasPro() const { return this->enableDasPro_ != nullptr;};
    void deleteEnableDasPro() { this->enableDasPro_ = nullptr;};
    inline int32_t enableDasPro() const { DARABONBA_PTR_GET_DEFAULT(enableDasPro_, 0) };
    inline GetInstanceInspectionsResponseBodyDataList& setEnableDasPro(int32_t enableDasPro) { DARABONBA_PTR_SET_VALUE(enableDasPro_, enableDasPro) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetInstanceInspectionsResponseBodyDataList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline GetInstanceInspectionsResponseBodyDataList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const Models::GetInstanceInspectionsResponseBodyDataListInstance & instance() const { DARABONBA_PTR_GET_CONST(instance_, Models::GetInstanceInspectionsResponseBodyDataListInstance) };
    inline Models::GetInstanceInspectionsResponseBodyDataListInstance instance() { DARABONBA_PTR_GET(instance_, Models::GetInstanceInspectionsResponseBodyDataListInstance) };
    inline GetInstanceInspectionsResponseBodyDataList& setInstance(const Models::GetInstanceInspectionsResponseBodyDataListInstance & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline GetInstanceInspectionsResponseBodyDataList& setInstance(Models::GetInstanceInspectionsResponseBodyDataListInstance && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline GetInstanceInspectionsResponseBodyDataList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // scoreMap Field Functions 
    bool hasScoreMap() const { return this->scoreMap_ != nullptr;};
    void deleteScoreMap() { this->scoreMap_ = nullptr;};
    inline     const Darabonba::Json & scoreMap() const { DARABONBA_GET(scoreMap_) };
    Darabonba::Json & scoreMap() { DARABONBA_GET(scoreMap_) };
    inline GetInstanceInspectionsResponseBodyDataList& setScoreMap(const Darabonba::Json & scoreMap) { DARABONBA_SET_VALUE(scoreMap_, scoreMap) };
    inline GetInstanceInspectionsResponseBodyDataList& setScoreMap(Darabonba::Json & scoreMap) { DARABONBA_SET_RVALUE(scoreMap_, scoreMap) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetInstanceInspectionsResponseBodyDataList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int32_t state() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
    inline GetInstanceInspectionsResponseBodyDataList& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline GetInstanceInspectionsResponseBodyDataList& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // Indicates whether the autonomy service is enabled.
    std::shared_ptr<Models::GetInstanceInspectionsResponseBodyDataListAutoFunction> autoFunction_ = nullptr;
    // The data returned.
    Darabonba::Json data_ = nullptr;
    // Indicates whether DAS Enterprise Edition is enabled. Valid values:
    // 
    // *   **0**: disabled.
    // *   **1**: enabled.
    // *   **2**: not supported.
    std::shared_ptr<int32_t> enableDasPro_ = nullptr;
    // The end time of the inspection and scoring task. The value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  The end time must be later than the start time.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The time when the task was created. The value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The information about the instance.
    std::shared_ptr<Models::GetInstanceInspectionsResponseBodyDataListInstance> instance_ = nullptr;
    // The inspection score of the instance.
    std::shared_ptr<int32_t> score_ = nullptr;
    // The scores that are deducted for the instance.
    Darabonba::Json scoreMap_ = nullptr;
    // The start time of the inspection and scoring task. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The state of the inspection and scoring task. Valid values:
    // 
    // *   **0**: The task is waiting for execution.
    // *   **1**: The task is in progress.
    // *   **2**: The task is complete.
    std::shared_ptr<int32_t> state_ = nullptr;
    // The mode in which the inspection and scoring task was initiated. Valid values:
    // 
    // *   **0**: automatic mode.
    // *   **1**: manual mode.
    std::shared_ptr<int32_t> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
