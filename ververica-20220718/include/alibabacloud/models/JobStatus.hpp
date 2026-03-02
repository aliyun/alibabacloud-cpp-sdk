// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBSTATUS_HPP_
#define ALIBABACLOUD_MODELS_JOBSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/JobFailure.hpp>
#include <alibabacloud/models/JobStatusRunning.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class JobStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobStatus& obj) { 
      DARABONBA_PTR_TO_JSON(currentJobStatus, currentJobStatus_);
      DARABONBA_PTR_TO_JSON(failure, failure_);
      DARABONBA_PTR_TO_JSON(healthScore, healthScore_);
      DARABONBA_PTR_TO_JSON(riskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(running, running_);
    };
    friend void from_json(const Darabonba::Json& j, JobStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(currentJobStatus, currentJobStatus_);
      DARABONBA_PTR_FROM_JSON(failure, failure_);
      DARABONBA_PTR_FROM_JSON(healthScore, healthScore_);
      DARABONBA_PTR_FROM_JSON(riskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(running, running_);
    };
    JobStatus() = default ;
    JobStatus(const JobStatus &) = default ;
    JobStatus(JobStatus &&) = default ;
    JobStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobStatus() = default ;
    JobStatus& operator=(const JobStatus &) = default ;
    JobStatus& operator=(JobStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentJobStatus_ == nullptr
        && this->failure_ == nullptr && this->healthScore_ == nullptr && this->riskLevel_ == nullptr && this->running_ == nullptr; };
    // currentJobStatus Field Functions 
    bool hasCurrentJobStatus() const { return this->currentJobStatus_ != nullptr;};
    void deleteCurrentJobStatus() { this->currentJobStatus_ = nullptr;};
    inline string getCurrentJobStatus() const { DARABONBA_PTR_GET_DEFAULT(currentJobStatus_, "") };
    inline JobStatus& setCurrentJobStatus(string currentJobStatus) { DARABONBA_PTR_SET_VALUE(currentJobStatus_, currentJobStatus) };


    // failure Field Functions 
    bool hasFailure() const { return this->failure_ != nullptr;};
    void deleteFailure() { this->failure_ = nullptr;};
    inline const JobFailure & getFailure() const { DARABONBA_PTR_GET_CONST(failure_, JobFailure) };
    inline JobFailure getFailure() { DARABONBA_PTR_GET(failure_, JobFailure) };
    inline JobStatus& setFailure(const JobFailure & failure) { DARABONBA_PTR_SET_VALUE(failure_, failure) };
    inline JobStatus& setFailure(JobFailure && failure) { DARABONBA_PTR_SET_RVALUE(failure_, failure) };


    // healthScore Field Functions 
    bool hasHealthScore() const { return this->healthScore_ != nullptr;};
    void deleteHealthScore() { this->healthScore_ = nullptr;};
    inline int32_t getHealthScore() const { DARABONBA_PTR_GET_DEFAULT(healthScore_, 0) };
    inline JobStatus& setHealthScore(int32_t healthScore) { DARABONBA_PTR_SET_VALUE(healthScore_, healthScore) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline JobStatus& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // running Field Functions 
    bool hasRunning() const { return this->running_ != nullptr;};
    void deleteRunning() { this->running_ = nullptr;};
    inline const JobStatusRunning & getRunning() const { DARABONBA_PTR_GET_CONST(running_, JobStatusRunning) };
    inline JobStatusRunning getRunning() { DARABONBA_PTR_GET(running_, JobStatusRunning) };
    inline JobStatus& setRunning(const JobStatusRunning & running) { DARABONBA_PTR_SET_VALUE(running_, running) };
    inline JobStatus& setRunning(JobStatusRunning && running) { DARABONBA_PTR_SET_RVALUE(running_, running) };


  protected:
    // The status of the current job. Valid values:
    // 
    // *   STARTING
    // *   RUNNING
    // *   CANCELLING
    // *   FAILED
    // *   CANCELLED
    // *   FINISHED
    shared_ptr<string> currentJobStatus_ {};
    // The information about the job failure. This parameter is valid when the value of the currentJobStatus parameter is FAILED.
    shared_ptr<JobFailure> failure_ {};
    shared_ptr<int32_t> healthScore_ {};
    shared_ptr<string> riskLevel_ {};
    // The details of the job. This parameter is valid when the value of the currentJobStatus parameter is RUNNING.
    shared_ptr<JobStatusRunning> running_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
