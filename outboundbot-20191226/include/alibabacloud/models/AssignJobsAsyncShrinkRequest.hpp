// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNJOBSASYNCSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNJOBSASYNCSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class AssignJobsAsyncShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignJobsAsyncShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumberShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobsJson, jobsJsonShrink_);
      DARABONBA_PTR_TO_JSON(StrategyJson, strategyJson_);
    };
    friend void from_json(const Darabonba::Json& j, AssignJobsAsyncShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumberShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobsJson, jobsJsonShrink_);
      DARABONBA_PTR_FROM_JSON(StrategyJson, strategyJson_);
    };
    AssignJobsAsyncShrinkRequest() = default ;
    AssignJobsAsyncShrinkRequest(const AssignJobsAsyncShrinkRequest &) = default ;
    AssignJobsAsyncShrinkRequest(AssignJobsAsyncShrinkRequest &&) = default ;
    AssignJobsAsyncShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignJobsAsyncShrinkRequest() = default ;
    AssignJobsAsyncShrinkRequest& operator=(const AssignJobsAsyncShrinkRequest &) = default ;
    AssignJobsAsyncShrinkRequest& operator=(AssignJobsAsyncShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callingNumberShrink_ == nullptr
        && this->instanceId_ == nullptr && this->jobGroupId_ == nullptr && this->jobsJsonShrink_ == nullptr && this->strategyJson_ == nullptr; };
    // callingNumberShrink Field Functions 
    bool hasCallingNumberShrink() const { return this->callingNumberShrink_ != nullptr;};
    void deleteCallingNumberShrink() { this->callingNumberShrink_ = nullptr;};
    inline string getCallingNumberShrink() const { DARABONBA_PTR_GET_DEFAULT(callingNumberShrink_, "") };
    inline AssignJobsAsyncShrinkRequest& setCallingNumberShrink(string callingNumberShrink) { DARABONBA_PTR_SET_VALUE(callingNumberShrink_, callingNumberShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AssignJobsAsyncShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string getJobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline AssignJobsAsyncShrinkRequest& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobsJsonShrink Field Functions 
    bool hasJobsJsonShrink() const { return this->jobsJsonShrink_ != nullptr;};
    void deleteJobsJsonShrink() { this->jobsJsonShrink_ = nullptr;};
    inline string getJobsJsonShrink() const { DARABONBA_PTR_GET_DEFAULT(jobsJsonShrink_, "") };
    inline AssignJobsAsyncShrinkRequest& setJobsJsonShrink(string jobsJsonShrink) { DARABONBA_PTR_SET_VALUE(jobsJsonShrink_, jobsJsonShrink) };


    // strategyJson Field Functions 
    bool hasStrategyJson() const { return this->strategyJson_ != nullptr;};
    void deleteStrategyJson() { this->strategyJson_ = nullptr;};
    inline string getStrategyJson() const { DARABONBA_PTR_GET_DEFAULT(strategyJson_, "") };
    inline AssignJobsAsyncShrinkRequest& setStrategyJson(string strategyJson) { DARABONBA_PTR_SET_VALUE(strategyJson_, strategyJson) };


  protected:
    // The list of calling numbers to be displayed to callees.
    // 
    // > If you omit this parameter, the system uses all available calling numbers by default.
    shared_ptr<string> callingNumberShrink_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the job group.
    // 
    // This parameter is required.
    shared_ptr<string> jobGroupId_ {};
    // A JSON array containing job data. For the required format, see the example.
    // 
    // Each JSON object in the array represents a job for a single contact.
    shared_ptr<string> jobsJsonShrink_ {};
    // A JSON string that defines the job group execution strategy. This object has the following properties:
    // 
    // - `repeatBy`
    // 
    // Specifies the repetition frequency. Valid values include `Once` (does not repeat), `Day` (repeats daily), `Week` (repeats weekly), and `Month` (repeats monthly).
    // 
    // - `startTime`
    // 
    // The start time of the execution strategy.
    // 
    // - `endTime`
    // 
    // The end time of the execution strategy.
    // 
    // - `workingTime`
    // 
    // The time range during which outbound calls can be made.
    // 
    // - `maxAttemptsPerDay`
    // 
    // The maximum number of daily call attempts for a single phone number.
    // 
    // - `minAttemptInterval`
    // 
    // The minimum interval between retry attempts, in minutes.
    // 
    // - `routingStrategy`
    // 
    // The routing strategy for calling numbers. Valid values: `None` (not specified), `LocalFirst` (prioritizes numbers in the same city), and `LocalProvinceFirst` (prioritizes numbers in the same province).
    // 
    // - `repeatDays`
    // 
    // The days on which the job repeats. If `repeatBy` is set to `Week`, valid values are `0` for Sunday and `1` to `6` for Monday to Saturday. If `repeatBy` is set to `Month`, valid values are `1` to `31`. If a specified day does not exist in a given month (e.g., February 30), the job is skipped for that month.
    // 
    // - `repeatable`
    // 
    // Specifies whether to enable recurring jobs. Valid values: `true` and `false`.
    shared_ptr<string> strategyJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
