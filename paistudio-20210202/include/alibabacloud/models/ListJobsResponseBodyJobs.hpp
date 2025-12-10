// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class ListJobsResponseBodyJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBodyJobs& obj) { 
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(ExecuteType, executeType_);
      DARABONBA_PTR_TO_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(PaiflowNodeId, paiflowNodeId_);
      DARABONBA_PTR_TO_JSON(RunId, runId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBodyJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(ExecuteType, executeType_);
      DARABONBA_PTR_FROM_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(PaiflowNodeId, paiflowNodeId_);
      DARABONBA_PTR_FROM_JSON(RunId, runId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
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
    virtual bool empty() const override { return this->creator_ == nullptr
        && return this->executeType_ == nullptr && return this->experimentId_ == nullptr && return this->gmtCreateTime_ == nullptr && return this->jobId_ == nullptr && return this->nodeId_ == nullptr
        && return this->paiflowNodeId_ == nullptr && return this->runId_ == nullptr && return this->status_ == nullptr && return this->workspaceId_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListJobsResponseBodyJobs& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // executeType Field Functions 
    bool hasExecuteType() const { return this->executeType_ != nullptr;};
    void deleteExecuteType() { this->executeType_ = nullptr;};
    inline string executeType() const { DARABONBA_PTR_GET_DEFAULT(executeType_, "") };
    inline ListJobsResponseBodyJobs& setExecuteType(string executeType) { DARABONBA_PTR_SET_VALUE(executeType_, executeType) };


    // experimentId Field Functions 
    bool hasExperimentId() const { return this->experimentId_ != nullptr;};
    void deleteExperimentId() { this->experimentId_ = nullptr;};
    inline string experimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
    inline ListJobsResponseBodyJobs& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListJobsResponseBodyJobs& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListJobsResponseBodyJobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListJobsResponseBodyJobs& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // paiflowNodeId Field Functions 
    bool hasPaiflowNodeId() const { return this->paiflowNodeId_ != nullptr;};
    void deletePaiflowNodeId() { this->paiflowNodeId_ = nullptr;};
    inline string paiflowNodeId() const { DARABONBA_PTR_GET_DEFAULT(paiflowNodeId_, "") };
    inline ListJobsResponseBodyJobs& setPaiflowNodeId(string paiflowNodeId) { DARABONBA_PTR_SET_VALUE(paiflowNodeId_, paiflowNodeId) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string runId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline ListJobsResponseBodyJobs& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListJobsResponseBodyJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListJobsResponseBodyJobs& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> executeType_ = nullptr;
    std::shared_ptr<string> experimentId_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> paiflowNodeId_ = nullptr;
    std::shared_ptr<string> runId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
