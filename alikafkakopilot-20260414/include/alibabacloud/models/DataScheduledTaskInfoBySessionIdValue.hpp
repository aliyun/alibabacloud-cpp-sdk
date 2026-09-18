// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASCHEDULEDTASKINFOBYSESSIONIDVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATASCHEDULEDTASKINFOBYSESSIONIDVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaKopilot20260414
{
namespace Models
{
  class DataScheduledTaskInfoBySessionIdValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataScheduledTaskInfoBySessionIdValue& obj) { 
      DARABONBA_PTR_TO_JSON(AsOf, asOf_);
      DARABONBA_PTR_TO_JSON(EnabledCount, enabledCount_);
      DARABONBA_PTR_TO_JSON(HasScheduledTask, hasScheduledTask_);
      DARABONBA_PTR_TO_JSON(TaskCount, taskCount_);
    };
    friend void from_json(const Darabonba::Json& j, DataScheduledTaskInfoBySessionIdValue& obj) { 
      DARABONBA_PTR_FROM_JSON(AsOf, asOf_);
      DARABONBA_PTR_FROM_JSON(EnabledCount, enabledCount_);
      DARABONBA_PTR_FROM_JSON(HasScheduledTask, hasScheduledTask_);
      DARABONBA_PTR_FROM_JSON(TaskCount, taskCount_);
    };
    DataScheduledTaskInfoBySessionIdValue() = default ;
    DataScheduledTaskInfoBySessionIdValue(const DataScheduledTaskInfoBySessionIdValue &) = default ;
    DataScheduledTaskInfoBySessionIdValue(DataScheduledTaskInfoBySessionIdValue &&) = default ;
    DataScheduledTaskInfoBySessionIdValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataScheduledTaskInfoBySessionIdValue() = default ;
    DataScheduledTaskInfoBySessionIdValue& operator=(const DataScheduledTaskInfoBySessionIdValue &) = default ;
    DataScheduledTaskInfoBySessionIdValue& operator=(DataScheduledTaskInfoBySessionIdValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asOf_ == nullptr
        && this->enabledCount_ == nullptr && this->hasScheduledTask_ == nullptr && this->taskCount_ == nullptr; };
    // asOf Field Functions 
    bool hasAsOf() const { return this->asOf_ != nullptr;};
    void deleteAsOf() { this->asOf_ = nullptr;};
    inline string getAsOf() const { DARABONBA_PTR_GET_DEFAULT(asOf_, "") };
    inline DataScheduledTaskInfoBySessionIdValue& setAsOf(string asOf) { DARABONBA_PTR_SET_VALUE(asOf_, asOf) };


    // enabledCount Field Functions 
    bool hasEnabledCount() const { return this->enabledCount_ != nullptr;};
    void deleteEnabledCount() { this->enabledCount_ = nullptr;};
    inline int64_t getEnabledCount() const { DARABONBA_PTR_GET_DEFAULT(enabledCount_, 0L) };
    inline DataScheduledTaskInfoBySessionIdValue& setEnabledCount(int64_t enabledCount) { DARABONBA_PTR_SET_VALUE(enabledCount_, enabledCount) };


    // hasScheduledTask Field Functions 
    bool hasHasScheduledTask() const { return this->hasScheduledTask_ != nullptr;};
    void deleteHasScheduledTask() { this->hasScheduledTask_ = nullptr;};
    inline bool getHasScheduledTask() const { DARABONBA_PTR_GET_DEFAULT(hasScheduledTask_, false) };
    inline DataScheduledTaskInfoBySessionIdValue& setHasScheduledTask(bool hasScheduledTask) { DARABONBA_PTR_SET_VALUE(hasScheduledTask_, hasScheduledTask) };


    // taskCount Field Functions 
    bool hasTaskCount() const { return this->taskCount_ != nullptr;};
    void deleteTaskCount() { this->taskCount_ = nullptr;};
    inline int64_t getTaskCount() const { DARABONBA_PTR_GET_DEFAULT(taskCount_, 0L) };
    inline DataScheduledTaskInfoBySessionIdValue& setTaskCount(int64_t taskCount) { DARABONBA_PTR_SET_VALUE(taskCount_, taskCount) };


  protected:
    // The time when the overview was generated, in UTC ISO 8601 format.
    shared_ptr<string> asOf_ {};
    // The number of associated tasks in the ENABLED status.
    shared_ptr<int64_t> enabledCount_ {};
    // Indicates whether the current session has associated scheduled tasks that are in the ENABLED, PAUSED, or NEEDS_AUTH status.
    shared_ptr<bool> hasScheduledTask_ {};
    // The total number of associated tasks. Only tasks in the ENABLED, PAUSED, or NEEDS_AUTH status are counted.
    shared_ptr<int64_t> taskCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaKopilot20260414
#endif
