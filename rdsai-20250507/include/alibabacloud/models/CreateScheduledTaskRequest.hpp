// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULEDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULEDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateScheduledTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduledTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ReportLanguage, reportLanguage_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduledTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ReportLanguage, reportLanguage_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
    };
    CreateScheduledTaskRequest() = default ;
    CreateScheduledTaskRequest(const CreateScheduledTaskRequest &) = default ;
    CreateScheduledTaskRequest(CreateScheduledTaskRequest &&) = default ;
    CreateScheduledTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduledTaskRequest() = default ;
    CreateScheduledTaskRequest& operator=(const CreateScheduledTaskRequest &) = default ;
    CreateScheduledTaskRequest& operator=(CreateScheduledTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->frequency_ == nullptr && this->instanceIds_ == nullptr && this->name_ == nullptr && this->reportLanguage_ == nullptr && this->startTime_ == nullptr
        && this->timeRange_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateScheduledTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline string getFrequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
    inline CreateScheduledTaskRequest& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline CreateScheduledTaskRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateScheduledTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // reportLanguage Field Functions 
    bool hasReportLanguage() const { return this->reportLanguage_ != nullptr;};
    void deleteReportLanguage() { this->reportLanguage_ = nullptr;};
    inline string getReportLanguage() const { DARABONBA_PTR_GET_DEFAULT(reportLanguage_, "") };
    inline CreateScheduledTaskRequest& setReportLanguage(string reportLanguage) { DARABONBA_PTR_SET_VALUE(reportLanguage_, reportLanguage) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateScheduledTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline string getTimeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, "") };
    inline CreateScheduledTaskRequest& setTimeRange(string timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


  protected:
    // The description of the scheduled inspection task.
    shared_ptr<string> description_ {};
    // The new inspection frequency. Separate multiple values with commas (,). Default value: DAILY. Valid values:
    // 
    // *   DAILY
    // *   Monday
    // *   Tuesday
    // *   Wednesday
    // *   Thursday
    // *   Friday
    // *   Saturday \\*Sunday
    // 
    // ### [](#daily--dailymonday--daily-)Note: DAILY takes precedence over other values. For example, if you enter DAILY,Monday, the backend uses DAILY as the inspection frequency.
    shared_ptr<string> frequency_ {};
    // The IDs of the related instances. Separate multiple IDs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> instanceIds_ {};
    // The name of the scheduled inspection task. The name cannot exceed 64 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> reportLanguage_ {};
    // The time when the inspection task is executed. Specify the time in the ISO 8601 standard in the HH:mm:ssZ format. The time must be in UTC. Default value: 02:00 AM.
    shared_ptr<string> startTime_ {};
    // The inspection time range. The default value is the latest 24 hours. Valid values: 1 to 168. The maximum value is 7 days.
    shared_ptr<string> timeRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
