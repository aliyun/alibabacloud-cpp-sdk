// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Arguments, arguments_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(ExecuteType, executeType_);
      DARABONBA_PTR_TO_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(PaiflowNodeId, paiflowNodeId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunId, runId_);
      DARABONBA_PTR_TO_JSON(RunInfo, runInfo_);
      DARABONBA_PTR_TO_JSON(Snapshot, snapshot_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Arguments, arguments_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(ExecuteType, executeType_);
      DARABONBA_PTR_FROM_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(PaiflowNodeId, paiflowNodeId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunId, runId_);
      DARABONBA_PTR_FROM_JSON(RunInfo, runInfo_);
      DARABONBA_PTR_FROM_JSON(Snapshot, snapshot_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetJobResponseBody() = default ;
    GetJobResponseBody(const GetJobResponseBody &) = default ;
    GetJobResponseBody(GetJobResponseBody &&) = default ;
    GetJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBody() = default ;
    GetJobResponseBody& operator=(const GetJobResponseBody &) = default ;
    GetJobResponseBody& operator=(GetJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arguments_ == nullptr
        && return this->creator_ == nullptr && return this->executeType_ == nullptr && return this->experimentId_ == nullptr && return this->gmtCreateTime_ == nullptr && return this->jobId_ == nullptr
        && return this->nodeId_ == nullptr && return this->paiflowNodeId_ == nullptr && return this->requestId_ == nullptr && return this->runId_ == nullptr && return this->runInfo_ == nullptr
        && return this->snapshot_ == nullptr && return this->status_ == nullptr && return this->workspaceId_ == nullptr; };
    // arguments Field Functions 
    bool hasArguments() const { return this->arguments_ != nullptr;};
    void deleteArguments() { this->arguments_ = nullptr;};
    inline string arguments() const { DARABONBA_PTR_GET_DEFAULT(arguments_, "") };
    inline GetJobResponseBody& setArguments(string arguments) { DARABONBA_PTR_SET_VALUE(arguments_, arguments) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetJobResponseBody& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // executeType Field Functions 
    bool hasExecuteType() const { return this->executeType_ != nullptr;};
    void deleteExecuteType() { this->executeType_ = nullptr;};
    inline string executeType() const { DARABONBA_PTR_GET_DEFAULT(executeType_, "") };
    inline GetJobResponseBody& setExecuteType(string executeType) { DARABONBA_PTR_SET_VALUE(executeType_, executeType) };


    // experimentId Field Functions 
    bool hasExperimentId() const { return this->experimentId_ != nullptr;};
    void deleteExperimentId() { this->experimentId_ = nullptr;};
    inline string experimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
    inline GetJobResponseBody& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetJobResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetJobResponseBody& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // paiflowNodeId Field Functions 
    bool hasPaiflowNodeId() const { return this->paiflowNodeId_ != nullptr;};
    void deletePaiflowNodeId() { this->paiflowNodeId_ = nullptr;};
    inline string paiflowNodeId() const { DARABONBA_PTR_GET_DEFAULT(paiflowNodeId_, "") };
    inline GetJobResponseBody& setPaiflowNodeId(string paiflowNodeId) { DARABONBA_PTR_SET_VALUE(paiflowNodeId_, paiflowNodeId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string runId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline GetJobResponseBody& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // runInfo Field Functions 
    bool hasRunInfo() const { return this->runInfo_ != nullptr;};
    void deleteRunInfo() { this->runInfo_ = nullptr;};
    inline string runInfo() const { DARABONBA_PTR_GET_DEFAULT(runInfo_, "") };
    inline GetJobResponseBody& setRunInfo(string runInfo) { DARABONBA_PTR_SET_VALUE(runInfo_, runInfo) };


    // snapshot Field Functions 
    bool hasSnapshot() const { return this->snapshot_ != nullptr;};
    void deleteSnapshot() { this->snapshot_ = nullptr;};
    inline string snapshot() const { DARABONBA_PTR_GET_DEFAULT(snapshot_, "") };
    inline GetJobResponseBody& setSnapshot(string snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetJobResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> arguments_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> executeType_ = nullptr;
    std::shared_ptr<string> experimentId_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> paiflowNodeId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> runId_ = nullptr;
    std::shared_ptr<string> runInfo_ = nullptr;
    std::shared_ptr<string> snapshot_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
