// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCHEDULEDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCHEDULEDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ModifyScheduledTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScheduledTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ScheduledId, scheduledId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScheduledTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ScheduledId, scheduledId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
    };
    ModifyScheduledTaskRequest() = default ;
    ModifyScheduledTaskRequest(const ModifyScheduledTaskRequest &) = default ;
    ModifyScheduledTaskRequest(ModifyScheduledTaskRequest &&) = default ;
    ModifyScheduledTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScheduledTaskRequest() = default ;
    ModifyScheduledTaskRequest& operator=(const ModifyScheduledTaskRequest &) = default ;
    ModifyScheduledTaskRequest& operator=(ModifyScheduledTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->frequency_ == nullptr && this->instanceIds_ == nullptr && this->name_ == nullptr && this->scheduledId_ == nullptr && this->startTime_ == nullptr
        && this->timeRange_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyScheduledTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline string getFrequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
    inline ModifyScheduledTaskRequest& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline ModifyScheduledTaskRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyScheduledTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scheduledId Field Functions 
    bool hasScheduledId() const { return this->scheduledId_ != nullptr;};
    void deleteScheduledId() { this->scheduledId_ = nullptr;};
    inline string getScheduledId() const { DARABONBA_PTR_GET_DEFAULT(scheduledId_, "") };
    inline ModifyScheduledTaskRequest& setScheduledId(string scheduledId) { DARABONBA_PTR_SET_VALUE(scheduledId_, scheduledId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ModifyScheduledTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline string getTimeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, "") };
    inline ModifyScheduledTaskRequest& setTimeRange(string timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> frequency_ {};
    shared_ptr<string> instanceIds_ {};
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> scheduledId_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> timeRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
