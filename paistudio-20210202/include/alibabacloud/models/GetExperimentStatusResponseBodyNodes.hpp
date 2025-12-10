// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXPERIMENTSTATUSRESPONSEBODYNODES_HPP_
#define ALIBABACLOUD_MODELS_GETEXPERIMENTSTATUSRESPONSEBODYNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetExperimentStatusResponseBodyNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExperimentStatusResponseBodyNodes& obj) { 
      DARABONBA_PTR_TO_JSON(FinishedAt, finishedAt_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(RunId, runId_);
      DARABONBA_PTR_TO_JSON(RunNodeId, runNodeId_);
      DARABONBA_PTR_TO_JSON(StartedAt, startedAt_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetExperimentStatusResponseBodyNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(FinishedAt, finishedAt_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(RunId, runId_);
      DARABONBA_PTR_FROM_JSON(RunNodeId, runNodeId_);
      DARABONBA_PTR_FROM_JSON(StartedAt, startedAt_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetExperimentStatusResponseBodyNodes() = default ;
    GetExperimentStatusResponseBodyNodes(const GetExperimentStatusResponseBodyNodes &) = default ;
    GetExperimentStatusResponseBodyNodes(GetExperimentStatusResponseBodyNodes &&) = default ;
    GetExperimentStatusResponseBodyNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExperimentStatusResponseBodyNodes() = default ;
    GetExperimentStatusResponseBodyNodes& operator=(const GetExperimentStatusResponseBodyNodes &) = default ;
    GetExperimentStatusResponseBodyNodes& operator=(GetExperimentStatusResponseBodyNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->finishedAt_ == nullptr
        && return this->jobId_ == nullptr && return this->nodeId_ == nullptr && return this->runId_ == nullptr && return this->runNodeId_ == nullptr && return this->startedAt_ == nullptr
        && return this->status_ == nullptr; };
    // finishedAt Field Functions 
    bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
    void deleteFinishedAt() { this->finishedAt_ = nullptr;};
    inline string finishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
    inline GetExperimentStatusResponseBodyNodes& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetExperimentStatusResponseBodyNodes& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetExperimentStatusResponseBodyNodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string runId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline GetExperimentStatusResponseBodyNodes& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // runNodeId Field Functions 
    bool hasRunNodeId() const { return this->runNodeId_ != nullptr;};
    void deleteRunNodeId() { this->runNodeId_ = nullptr;};
    inline string runNodeId() const { DARABONBA_PTR_GET_DEFAULT(runNodeId_, "") };
    inline GetExperimentStatusResponseBodyNodes& setRunNodeId(string runNodeId) { DARABONBA_PTR_SET_VALUE(runNodeId_, runNodeId) };


    // startedAt Field Functions 
    bool hasStartedAt() const { return this->startedAt_ != nullptr;};
    void deleteStartedAt() { this->startedAt_ = nullptr;};
    inline string startedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
    inline GetExperimentStatusResponseBodyNodes& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetExperimentStatusResponseBodyNodes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> finishedAt_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> runId_ = nullptr;
    std::shared_ptr<string> runNodeId_ = nullptr;
    std::shared_ptr<string> startedAt_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
