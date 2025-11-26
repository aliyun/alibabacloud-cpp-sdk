// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBRESPONSEBODYJOB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBRESPONSEBODYJOB_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeJobResponseBodyJobContacts.hpp>
#include <alibabacloud/models/DescribeJobResponseBodyJobExtras.hpp>
#include <alibabacloud/models/DescribeJobResponseBodyJobScript.hpp>
#include <alibabacloud/models/DescribeJobResponseBodyJobSummary.hpp>
#include <alibabacloud/models/DescribeJobResponseBodyJobTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeJobResponseBodyJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobResponseBodyJob& obj) { 
      DARABONBA_PTR_TO_JSON(ActualTime, actualTime_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallingNumbers, callingNumbers_);
      DARABONBA_PTR_TO_JSON(Contacts, contacts_);
      DARABONBA_PTR_TO_JSON(DsReport, dsReport_);
      DARABONBA_PTR_TO_JSON(EndReason, endReason_);
      DARABONBA_PTR_TO_JSON(Extras, extras_);
      DARABONBA_PTR_TO_JSON(FailureReason, failureReason_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(NextExecutionTime, nextExecutionTime_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(SystemPriority, systemPriority_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobResponseBodyJob& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualTime, actualTime_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallingNumbers, callingNumbers_);
      DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(DsReport, dsReport_);
      DARABONBA_PTR_FROM_JSON(EndReason, endReason_);
      DARABONBA_PTR_FROM_JSON(Extras, extras_);
      DARABONBA_PTR_FROM_JSON(FailureReason, failureReason_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(NextExecutionTime, nextExecutionTime_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(SystemPriority, systemPriority_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    DescribeJobResponseBodyJob() = default ;
    DescribeJobResponseBodyJob(const DescribeJobResponseBodyJob &) = default ;
    DescribeJobResponseBodyJob(DescribeJobResponseBodyJob &&) = default ;
    DescribeJobResponseBodyJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobResponseBodyJob() = default ;
    DescribeJobResponseBodyJob& operator=(const DescribeJobResponseBodyJob &) = default ;
    DescribeJobResponseBodyJob& operator=(DescribeJobResponseBodyJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualTime_ == nullptr
        && return this->calledNumber_ == nullptr && return this->callingNumbers_ == nullptr && return this->contacts_ == nullptr && return this->dsReport_ == nullptr && return this->endReason_ == nullptr
        && return this->extras_ == nullptr && return this->failureReason_ == nullptr && return this->instanceId_ == nullptr && return this->jobGroupId_ == nullptr && return this->jobId_ == nullptr
        && return this->nextExecutionTime_ == nullptr && return this->priority_ == nullptr && return this->referenceId_ == nullptr && return this->scenarioId_ == nullptr && return this->script_ == nullptr
        && return this->status_ == nullptr && return this->strategyId_ == nullptr && return this->summary_ == nullptr && return this->systemPriority_ == nullptr && return this->tasks_ == nullptr; };
    // actualTime Field Functions 
    bool hasActualTime() const { return this->actualTime_ != nullptr;};
    void deleteActualTime() { this->actualTime_ = nullptr;};
    inline int64_t actualTime() const { DARABONBA_PTR_GET_DEFAULT(actualTime_, 0L) };
    inline DescribeJobResponseBodyJob& setActualTime(int64_t actualTime) { DARABONBA_PTR_SET_VALUE(actualTime_, actualTime) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline DescribeJobResponseBodyJob& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callingNumbers Field Functions 
    bool hasCallingNumbers() const { return this->callingNumbers_ != nullptr;};
    void deleteCallingNumbers() { this->callingNumbers_ = nullptr;};
    inline const vector<string> & callingNumbers() const { DARABONBA_PTR_GET_CONST(callingNumbers_, vector<string>) };
    inline vector<string> callingNumbers() { DARABONBA_PTR_GET(callingNumbers_, vector<string>) };
    inline DescribeJobResponseBodyJob& setCallingNumbers(const vector<string> & callingNumbers) { DARABONBA_PTR_SET_VALUE(callingNumbers_, callingNumbers) };
    inline DescribeJobResponseBodyJob& setCallingNumbers(vector<string> && callingNumbers) { DARABONBA_PTR_SET_RVALUE(callingNumbers_, callingNumbers) };


    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<Models::DescribeJobResponseBodyJobContacts> & contacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<Models::DescribeJobResponseBodyJobContacts>) };
    inline vector<Models::DescribeJobResponseBodyJobContacts> contacts() { DARABONBA_PTR_GET(contacts_, vector<Models::DescribeJobResponseBodyJobContacts>) };
    inline DescribeJobResponseBodyJob& setContacts(const vector<Models::DescribeJobResponseBodyJobContacts> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline DescribeJobResponseBodyJob& setContacts(vector<Models::DescribeJobResponseBodyJobContacts> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // dsReport Field Functions 
    bool hasDsReport() const { return this->dsReport_ != nullptr;};
    void deleteDsReport() { this->dsReport_ = nullptr;};
    inline string dsReport() const { DARABONBA_PTR_GET_DEFAULT(dsReport_, "") };
    inline DescribeJobResponseBodyJob& setDsReport(string dsReport) { DARABONBA_PTR_SET_VALUE(dsReport_, dsReport) };


    // endReason Field Functions 
    bool hasEndReason() const { return this->endReason_ != nullptr;};
    void deleteEndReason() { this->endReason_ = nullptr;};
    inline int32_t endReason() const { DARABONBA_PTR_GET_DEFAULT(endReason_, 0) };
    inline DescribeJobResponseBodyJob& setEndReason(int32_t endReason) { DARABONBA_PTR_SET_VALUE(endReason_, endReason) };


    // extras Field Functions 
    bool hasExtras() const { return this->extras_ != nullptr;};
    void deleteExtras() { this->extras_ = nullptr;};
    inline const vector<Models::DescribeJobResponseBodyJobExtras> & extras() const { DARABONBA_PTR_GET_CONST(extras_, vector<Models::DescribeJobResponseBodyJobExtras>) };
    inline vector<Models::DescribeJobResponseBodyJobExtras> extras() { DARABONBA_PTR_GET(extras_, vector<Models::DescribeJobResponseBodyJobExtras>) };
    inline DescribeJobResponseBodyJob& setExtras(const vector<Models::DescribeJobResponseBodyJobExtras> & extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };
    inline DescribeJobResponseBodyJob& setExtras(vector<Models::DescribeJobResponseBodyJobExtras> && extras) { DARABONBA_PTR_SET_RVALUE(extras_, extras) };


    // failureReason Field Functions 
    bool hasFailureReason() const { return this->failureReason_ != nullptr;};
    void deleteFailureReason() { this->failureReason_ = nullptr;};
    inline string failureReason() const { DARABONBA_PTR_GET_DEFAULT(failureReason_, "") };
    inline DescribeJobResponseBodyJob& setFailureReason(string failureReason) { DARABONBA_PTR_SET_VALUE(failureReason_, failureReason) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeJobResponseBodyJob& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline DescribeJobResponseBodyJob& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeJobResponseBodyJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // nextExecutionTime Field Functions 
    bool hasNextExecutionTime() const { return this->nextExecutionTime_ != nullptr;};
    void deleteNextExecutionTime() { this->nextExecutionTime_ = nullptr;};
    inline int64_t nextExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(nextExecutionTime_, 0L) };
    inline DescribeJobResponseBodyJob& setNextExecutionTime(int64_t nextExecutionTime) { DARABONBA_PTR_SET_VALUE(nextExecutionTime_, nextExecutionTime) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline DescribeJobResponseBodyJob& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // referenceId Field Functions 
    bool hasReferenceId() const { return this->referenceId_ != nullptr;};
    void deleteReferenceId() { this->referenceId_ = nullptr;};
    inline string referenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
    inline DescribeJobResponseBodyJob& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline DescribeJobResponseBodyJob& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline const Models::DescribeJobResponseBodyJobScript & script() const { DARABONBA_PTR_GET_CONST(script_, Models::DescribeJobResponseBodyJobScript) };
    inline Models::DescribeJobResponseBodyJobScript script() { DARABONBA_PTR_GET(script_, Models::DescribeJobResponseBodyJobScript) };
    inline DescribeJobResponseBodyJob& setScript(const Models::DescribeJobResponseBodyJobScript & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
    inline DescribeJobResponseBodyJob& setScript(Models::DescribeJobResponseBodyJobScript && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeJobResponseBodyJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline DescribeJobResponseBodyJob& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const vector<Models::DescribeJobResponseBodyJobSummary> & summary() const { DARABONBA_PTR_GET_CONST(summary_, vector<Models::DescribeJobResponseBodyJobSummary>) };
    inline vector<Models::DescribeJobResponseBodyJobSummary> summary() { DARABONBA_PTR_GET(summary_, vector<Models::DescribeJobResponseBodyJobSummary>) };
    inline DescribeJobResponseBodyJob& setSummary(const vector<Models::DescribeJobResponseBodyJobSummary> & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline DescribeJobResponseBodyJob& setSummary(vector<Models::DescribeJobResponseBodyJobSummary> && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


    // systemPriority Field Functions 
    bool hasSystemPriority() const { return this->systemPriority_ != nullptr;};
    void deleteSystemPriority() { this->systemPriority_ = nullptr;};
    inline int32_t systemPriority() const { DARABONBA_PTR_GET_DEFAULT(systemPriority_, 0) };
    inline DescribeJobResponseBodyJob& setSystemPriority(int32_t systemPriority) { DARABONBA_PTR_SET_VALUE(systemPriority_, systemPriority) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<Models::DescribeJobResponseBodyJobTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<Models::DescribeJobResponseBodyJobTasks>) };
    inline vector<Models::DescribeJobResponseBodyJobTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<Models::DescribeJobResponseBodyJobTasks>) };
    inline DescribeJobResponseBodyJob& setTasks(const vector<Models::DescribeJobResponseBodyJobTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline DescribeJobResponseBodyJob& setTasks(vector<Models::DescribeJobResponseBodyJobTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    std::shared_ptr<int64_t> actualTime_ = nullptr;
    std::shared_ptr<string> calledNumber_ = nullptr;
    std::shared_ptr<vector<string>> callingNumbers_ = nullptr;
    std::shared_ptr<vector<Models::DescribeJobResponseBodyJobContacts>> contacts_ = nullptr;
    std::shared_ptr<string> dsReport_ = nullptr;
    std::shared_ptr<int32_t> endReason_ = nullptr;
    std::shared_ptr<vector<Models::DescribeJobResponseBodyJobExtras>> extras_ = nullptr;
    std::shared_ptr<string> failureReason_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobGroupId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<int64_t> nextExecutionTime_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> referenceId_ = nullptr;
    std::shared_ptr<string> scenarioId_ = nullptr;
    std::shared_ptr<Models::DescribeJobResponseBodyJobScript> script_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> strategyId_ = nullptr;
    std::shared_ptr<vector<Models::DescribeJobResponseBodyJobSummary>> summary_ = nullptr;
    std::shared_ptr<int32_t> systemPriority_ = nullptr;
    std::shared_ptr<vector<Models::DescribeJobResponseBodyJobTasks>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
