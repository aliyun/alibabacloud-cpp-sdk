// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELJOBSREQUEST_HPP_
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
  class CancelJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobReferenceId, jobReferenceId_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobReferenceId, jobReferenceId_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
    };
    CancelJobsRequest() = default ;
    CancelJobsRequest(const CancelJobsRequest &) = default ;
    CancelJobsRequest(CancelJobsRequest &&) = default ;
    CancelJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelJobsRequest() = default ;
    CancelJobsRequest& operator=(const CancelJobsRequest &) = default ;
    CancelJobsRequest& operator=(CancelJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->all_ == nullptr
        && return this->instanceId_ == nullptr && return this->jobGroupId_ == nullptr && return this->jobId_ == nullptr && return this->jobReferenceId_ == nullptr && return this->scenarioId_ == nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline bool all() const { DARABONBA_PTR_GET_DEFAULT(all_, false) };
    inline CancelJobsRequest& setAll(bool all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CancelJobsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline CancelJobsRequest& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline const vector<string> & jobId() const { DARABONBA_PTR_GET_CONST(jobId_, vector<string>) };
    inline vector<string> jobId() { DARABONBA_PTR_GET(jobId_, vector<string>) };
    inline CancelJobsRequest& setJobId(const vector<string> & jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };
    inline CancelJobsRequest& setJobId(vector<string> && jobId) { DARABONBA_PTR_SET_RVALUE(jobId_, jobId) };


    // jobReferenceId Field Functions 
    bool hasJobReferenceId() const { return this->jobReferenceId_ != nullptr;};
    void deleteJobReferenceId() { this->jobReferenceId_ = nullptr;};
    inline const vector<string> & jobReferenceId() const { DARABONBA_PTR_GET_CONST(jobReferenceId_, vector<string>) };
    inline vector<string> jobReferenceId() { DARABONBA_PTR_GET(jobReferenceId_, vector<string>) };
    inline CancelJobsRequest& setJobReferenceId(const vector<string> & jobReferenceId) { DARABONBA_PTR_SET_VALUE(jobReferenceId_, jobReferenceId) };
    inline CancelJobsRequest& setJobReferenceId(vector<string> && jobReferenceId) { DARABONBA_PTR_SET_RVALUE(jobReferenceId_, jobReferenceId) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline CancelJobsRequest& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> all_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobGroupId_ = nullptr;
    std::shared_ptr<vector<string>> jobId_ = nullptr;
    std::shared_ptr<vector<string>> jobReferenceId_ = nullptr;
    std::shared_ptr<string> scenarioId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
