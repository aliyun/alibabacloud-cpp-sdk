// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUSPENDJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUSPENDJOBSREQUEST_HPP_
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
  class SuspendJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SuspendJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobReferenceId, jobReferenceId_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
    };
    friend void from_json(const Darabonba::Json& j, SuspendJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobReferenceId, jobReferenceId_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
    };
    SuspendJobsRequest() = default ;
    SuspendJobsRequest(const SuspendJobsRequest &) = default ;
    SuspendJobsRequest(SuspendJobsRequest &&) = default ;
    SuspendJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SuspendJobsRequest() = default ;
    SuspendJobsRequest& operator=(const SuspendJobsRequest &) = default ;
    SuspendJobsRequest& operator=(SuspendJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->all_ == nullptr
        && this->instanceId_ == nullptr && this->jobGroupId_ == nullptr && this->jobId_ == nullptr && this->jobReferenceId_ == nullptr && this->scenarioId_ == nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline bool getAll() const { DARABONBA_PTR_GET_DEFAULT(all_, false) };
    inline SuspendJobsRequest& setAll(bool all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SuspendJobsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string getJobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline SuspendJobsRequest& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline const vector<string> & getJobId() const { DARABONBA_PTR_GET_CONST(jobId_, vector<string>) };
    inline vector<string> getJobId() { DARABONBA_PTR_GET(jobId_, vector<string>) };
    inline SuspendJobsRequest& setJobId(const vector<string> & jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };
    inline SuspendJobsRequest& setJobId(vector<string> && jobId) { DARABONBA_PTR_SET_RVALUE(jobId_, jobId) };


    // jobReferenceId Field Functions 
    bool hasJobReferenceId() const { return this->jobReferenceId_ != nullptr;};
    void deleteJobReferenceId() { this->jobReferenceId_ = nullptr;};
    inline const vector<string> & getJobReferenceId() const { DARABONBA_PTR_GET_CONST(jobReferenceId_, vector<string>) };
    inline vector<string> getJobReferenceId() { DARABONBA_PTR_GET(jobReferenceId_, vector<string>) };
    inline SuspendJobsRequest& setJobReferenceId(const vector<string> & jobReferenceId) { DARABONBA_PTR_SET_VALUE(jobReferenceId_, jobReferenceId) };
    inline SuspendJobsRequest& setJobReferenceId(vector<string> && jobReferenceId) { DARABONBA_PTR_SET_RVALUE(jobReferenceId_, jobReferenceId) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string getScenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline SuspendJobsRequest& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


  protected:
    // This parameter is required.
    shared_ptr<bool> all_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> jobGroupId_ {};
    shared_ptr<vector<string>> jobId_ {};
    shared_ptr<vector<string>> jobReferenceId_ {};
    shared_ptr<string> scenarioId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
