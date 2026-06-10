// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class AssignJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsAsynchrony, isAsynchrony_);
      DARABONBA_PTR_TO_JSON(JobDataParsingTaskId, jobDataParsingTaskId_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobsJson, jobsJson_);
      DARABONBA_PTR_TO_JSON(RosterType, rosterType_);
      DARABONBA_PTR_TO_JSON(StrategyJson, strategyJson_);
    };
    friend void from_json(const Darabonba::Json& j, AssignJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsAsynchrony, isAsynchrony_);
      DARABONBA_PTR_FROM_JSON(JobDataParsingTaskId, jobDataParsingTaskId_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobsJson, jobsJson_);
      DARABONBA_PTR_FROM_JSON(RosterType, rosterType_);
      DARABONBA_PTR_FROM_JSON(StrategyJson, strategyJson_);
    };
    AssignJobsRequest() = default ;
    AssignJobsRequest(const AssignJobsRequest &) = default ;
    AssignJobsRequest(AssignJobsRequest &&) = default ;
    AssignJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignJobsRequest() = default ;
    AssignJobsRequest& operator=(const AssignJobsRequest &) = default ;
    AssignJobsRequest& operator=(AssignJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callingNumber_ == nullptr
        && this->instanceId_ == nullptr && this->isAsynchrony_ == nullptr && this->jobDataParsingTaskId_ == nullptr && this->jobGroupId_ == nullptr && this->jobsJson_ == nullptr
        && this->rosterType_ == nullptr && this->strategyJson_ == nullptr; };
    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline const vector<string> & getCallingNumber() const { DARABONBA_PTR_GET_CONST(callingNumber_, vector<string>) };
    inline vector<string> getCallingNumber() { DARABONBA_PTR_GET(callingNumber_, vector<string>) };
    inline AssignJobsRequest& setCallingNumber(const vector<string> & callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };
    inline AssignJobsRequest& setCallingNumber(vector<string> && callingNumber) { DARABONBA_PTR_SET_RVALUE(callingNumber_, callingNumber) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AssignJobsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isAsynchrony Field Functions 
    bool hasIsAsynchrony() const { return this->isAsynchrony_ != nullptr;};
    void deleteIsAsynchrony() { this->isAsynchrony_ = nullptr;};
    inline bool getIsAsynchrony() const { DARABONBA_PTR_GET_DEFAULT(isAsynchrony_, false) };
    inline AssignJobsRequest& setIsAsynchrony(bool isAsynchrony) { DARABONBA_PTR_SET_VALUE(isAsynchrony_, isAsynchrony) };


    // jobDataParsingTaskId Field Functions 
    bool hasJobDataParsingTaskId() const { return this->jobDataParsingTaskId_ != nullptr;};
    void deleteJobDataParsingTaskId() { this->jobDataParsingTaskId_ = nullptr;};
    inline string getJobDataParsingTaskId() const { DARABONBA_PTR_GET_DEFAULT(jobDataParsingTaskId_, "") };
    inline AssignJobsRequest& setJobDataParsingTaskId(string jobDataParsingTaskId) { DARABONBA_PTR_SET_VALUE(jobDataParsingTaskId_, jobDataParsingTaskId) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string getJobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline AssignJobsRequest& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobsJson Field Functions 
    bool hasJobsJson() const { return this->jobsJson_ != nullptr;};
    void deleteJobsJson() { this->jobsJson_ = nullptr;};
    inline const vector<string> & getJobsJson() const { DARABONBA_PTR_GET_CONST(jobsJson_, vector<string>) };
    inline vector<string> getJobsJson() { DARABONBA_PTR_GET(jobsJson_, vector<string>) };
    inline AssignJobsRequest& setJobsJson(const vector<string> & jobsJson) { DARABONBA_PTR_SET_VALUE(jobsJson_, jobsJson) };
    inline AssignJobsRequest& setJobsJson(vector<string> && jobsJson) { DARABONBA_PTR_SET_RVALUE(jobsJson_, jobsJson) };


    // rosterType Field Functions 
    bool hasRosterType() const { return this->rosterType_ != nullptr;};
    void deleteRosterType() { this->rosterType_ = nullptr;};
    inline string getRosterType() const { DARABONBA_PTR_GET_DEFAULT(rosterType_, "") };
    inline AssignJobsRequest& setRosterType(string rosterType) { DARABONBA_PTR_SET_VALUE(rosterType_, rosterType) };


    // strategyJson Field Functions 
    bool hasStrategyJson() const { return this->strategyJson_ != nullptr;};
    void deleteStrategyJson() { this->strategyJson_ = nullptr;};
    inline string getStrategyJson() const { DARABONBA_PTR_GET_DEFAULT(strategyJson_, "") };
    inline AssignJobsRequest& setStrategyJson(string strategyJson) { DARABONBA_PTR_SET_VALUE(strategyJson_, strategyJson) };


  protected:
    // These numbers are displayed as the caller ID to the contact.
    // 
    // > If unspecified, all available calling numbers are used.
    shared_ptr<vector<string>> callingNumber_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Specifies whether the task is asynchronous.
    // 
    // You can omit this parameter if you create jobs by calling this API. The default value is `false`.
    shared_ptr<bool> isAsynchrony_ {};
    // The ID of the data parsing task for the outbound call job.
    // 
    // You can omit this parameter if you create jobs by calling this API.
    // 
    // > If you create jobs by uploading a file, you must call the `CreateJobDataParsingTask` operation to obtain a value for this parameter.
    shared_ptr<string> jobDataParsingTaskId_ {};
    // The job group ID.
    // 
    // This parameter is required.
    shared_ptr<string> jobGroupId_ {};
    // >Notice: 
    // 
    // This parameter is required.
    // 
    // 
    // 
    // The job data, a JSON array where each object represents a contact. For formatting details, see the example.
    // 
    // The array can contain up to 99 elements.
    shared_ptr<vector<string>> jobsJson_ {};
    // The roster type.
    // 
    // If you create jobs by calling this API, you can omit this parameter. The default value is `json`. If you upload a contact list file, set this parameter to `excel`.
    shared_ptr<string> rosterType_ {};
    // The execution strategy for the job group.
    // 
    // - `repeatBy`: The recurrence type. Valid values: `Once` (runs once), `Day` (repeats daily), `Week` (repeats weekly), and `Month` (repeats monthly).
    // 
    // - `startTime`: The start time of the strategy.
    // 
    // - `endTime`: The end time of the strategy.
    // 
    // - `workingTime`: The time windows during which calls can be made.
    // 
    // - `maxAttemptsPerDay`: The maximum daily call attempts per phone number.
    // 
    // - `minAttemptInterval`: The minimum interval between call retries, in minutes.
    // 
    // - `routingStrategy`: The number routing strategy. Valid values: `None` (no preference), `LocalFirst` (prioritizes numbers in the same city), and `LocalProvinceFirst` (prioritizes numbers in the same province).
    // 
    // - `repeatDays`: The specific days on which the job runs, based on the `repeatBy` type. If `repeatBy` is set to `Week`, `0` represents Sunday, and `1` through `6` represent Monday through Saturday. If `repeatBy` is set to `Month`, values from `1` to `31` represent the days of the month. If a month does not have a specified day (for example, February 30), the job is skipped for that month.
    // 
    // - `repeatable`: Specifies whether the job is recurring. Valid values are `true` and `false`.
    shared_ptr<string> strategyJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
