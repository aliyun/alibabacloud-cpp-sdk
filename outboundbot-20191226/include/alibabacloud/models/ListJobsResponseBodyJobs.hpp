// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobsResponseBodyJobsContacts.hpp>
#include <alibabacloud/models/ListJobsResponseBodyJobsExtras.hpp>
#include <alibabacloud/models/ListJobsResponseBodyJobsSummary.hpp>
#include <alibabacloud/models/ListJobsResponseBodyJobsTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListJobsResponseBodyJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBodyJobs& obj) { 
      DARABONBA_PTR_TO_JSON(CallingNumbers, callingNumbers_);
      DARABONBA_PTR_TO_JSON(Contacts, contacts_);
      DARABONBA_PTR_TO_JSON(Extras, extras_);
      DARABONBA_PTR_TO_JSON(FailureReason, failureReason_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(SystemPriority, systemPriority_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBodyJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(CallingNumbers, callingNumbers_);
      DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(Extras, extras_);
      DARABONBA_PTR_FROM_JSON(FailureReason, failureReason_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(SystemPriority, systemPriority_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    ListJobsResponseBodyJobs() = default ;
    ListJobsResponseBodyJobs(const ListJobsResponseBodyJobs &) = default ;
    ListJobsResponseBodyJobs(ListJobsResponseBodyJobs &&) = default ;
    ListJobsResponseBodyJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBodyJobs() = default ;
    ListJobsResponseBodyJobs& operator=(const ListJobsResponseBodyJobs &) = default ;
    ListJobsResponseBodyJobs& operator=(ListJobsResponseBodyJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callingNumbers_ == nullptr
        && return this->contacts_ == nullptr && return this->extras_ == nullptr && return this->failureReason_ == nullptr && return this->jobGroupId_ == nullptr && return this->jobId_ == nullptr
        && return this->priority_ == nullptr && return this->referenceId_ == nullptr && return this->scenarioId_ == nullptr && return this->status_ == nullptr && return this->strategyId_ == nullptr
        && return this->summary_ == nullptr && return this->systemPriority_ == nullptr && return this->tasks_ == nullptr; };
    // callingNumbers Field Functions 
    bool hasCallingNumbers() const { return this->callingNumbers_ != nullptr;};
    void deleteCallingNumbers() { this->callingNumbers_ = nullptr;};
    inline const vector<string> & callingNumbers() const { DARABONBA_PTR_GET_CONST(callingNumbers_, vector<string>) };
    inline vector<string> callingNumbers() { DARABONBA_PTR_GET(callingNumbers_, vector<string>) };
    inline ListJobsResponseBodyJobs& setCallingNumbers(const vector<string> & callingNumbers) { DARABONBA_PTR_SET_VALUE(callingNumbers_, callingNumbers) };
    inline ListJobsResponseBodyJobs& setCallingNumbers(vector<string> && callingNumbers) { DARABONBA_PTR_SET_RVALUE(callingNumbers_, callingNumbers) };


    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<Models::ListJobsResponseBodyJobsContacts> & contacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<Models::ListJobsResponseBodyJobsContacts>) };
    inline vector<Models::ListJobsResponseBodyJobsContacts> contacts() { DARABONBA_PTR_GET(contacts_, vector<Models::ListJobsResponseBodyJobsContacts>) };
    inline ListJobsResponseBodyJobs& setContacts(const vector<Models::ListJobsResponseBodyJobsContacts> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline ListJobsResponseBodyJobs& setContacts(vector<Models::ListJobsResponseBodyJobsContacts> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // extras Field Functions 
    bool hasExtras() const { return this->extras_ != nullptr;};
    void deleteExtras() { this->extras_ = nullptr;};
    inline const vector<Models::ListJobsResponseBodyJobsExtras> & extras() const { DARABONBA_PTR_GET_CONST(extras_, vector<Models::ListJobsResponseBodyJobsExtras>) };
    inline vector<Models::ListJobsResponseBodyJobsExtras> extras() { DARABONBA_PTR_GET(extras_, vector<Models::ListJobsResponseBodyJobsExtras>) };
    inline ListJobsResponseBodyJobs& setExtras(const vector<Models::ListJobsResponseBodyJobsExtras> & extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };
    inline ListJobsResponseBodyJobs& setExtras(vector<Models::ListJobsResponseBodyJobsExtras> && extras) { DARABONBA_PTR_SET_RVALUE(extras_, extras) };


    // failureReason Field Functions 
    bool hasFailureReason() const { return this->failureReason_ != nullptr;};
    void deleteFailureReason() { this->failureReason_ = nullptr;};
    inline string failureReason() const { DARABONBA_PTR_GET_DEFAULT(failureReason_, "") };
    inline ListJobsResponseBodyJobs& setFailureReason(string failureReason) { DARABONBA_PTR_SET_VALUE(failureReason_, failureReason) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline ListJobsResponseBodyJobs& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListJobsResponseBodyJobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListJobsResponseBodyJobs& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // referenceId Field Functions 
    bool hasReferenceId() const { return this->referenceId_ != nullptr;};
    void deleteReferenceId() { this->referenceId_ = nullptr;};
    inline string referenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
    inline ListJobsResponseBodyJobs& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline ListJobsResponseBodyJobs& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListJobsResponseBodyJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline ListJobsResponseBodyJobs& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const vector<Models::ListJobsResponseBodyJobsSummary> & summary() const { DARABONBA_PTR_GET_CONST(summary_, vector<Models::ListJobsResponseBodyJobsSummary>) };
    inline vector<Models::ListJobsResponseBodyJobsSummary> summary() { DARABONBA_PTR_GET(summary_, vector<Models::ListJobsResponseBodyJobsSummary>) };
    inline ListJobsResponseBodyJobs& setSummary(const vector<Models::ListJobsResponseBodyJobsSummary> & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline ListJobsResponseBodyJobs& setSummary(vector<Models::ListJobsResponseBodyJobsSummary> && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


    // systemPriority Field Functions 
    bool hasSystemPriority() const { return this->systemPriority_ != nullptr;};
    void deleteSystemPriority() { this->systemPriority_ = nullptr;};
    inline int32_t systemPriority() const { DARABONBA_PTR_GET_DEFAULT(systemPriority_, 0) };
    inline ListJobsResponseBodyJobs& setSystemPriority(int32_t systemPriority) { DARABONBA_PTR_SET_VALUE(systemPriority_, systemPriority) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<Models::ListJobsResponseBodyJobsTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<Models::ListJobsResponseBodyJobsTasks>) };
    inline vector<Models::ListJobsResponseBodyJobsTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<Models::ListJobsResponseBodyJobsTasks>) };
    inline ListJobsResponseBodyJobs& setTasks(const vector<Models::ListJobsResponseBodyJobsTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ListJobsResponseBodyJobs& setTasks(vector<Models::ListJobsResponseBodyJobsTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    std::shared_ptr<vector<string>> callingNumbers_ = nullptr;
    std::shared_ptr<vector<Models::ListJobsResponseBodyJobsContacts>> contacts_ = nullptr;
    std::shared_ptr<vector<Models::ListJobsResponseBodyJobsExtras>> extras_ = nullptr;
    std::shared_ptr<string> failureReason_ = nullptr;
    std::shared_ptr<string> jobGroupId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> referenceId_ = nullptr;
    std::shared_ptr<string> scenarioId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> strategyId_ = nullptr;
    std::shared_ptr<vector<Models::ListJobsResponseBodyJobsSummary>> summary_ = nullptr;
    std::shared_ptr<int32_t> systemPriority_ = nullptr;
    std::shared_ptr<vector<Models::ListJobsResponseBodyJobsTasks>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
