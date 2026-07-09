// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNPIPELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNPIPELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class RunPipelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunPipelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpaceName, agentSpaceName_);
      DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, RunPipelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpaceName, agentSpaceName_);
      DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    RunPipelineResponseBody() = default ;
    RunPipelineResponseBody(const RunPipelineResponseBody &) = default ;
    RunPipelineResponseBody(RunPipelineResponseBody &&) = default ;
    RunPipelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunPipelineResponseBody() = default ;
    RunPipelineResponseBody& operator=(const RunPipelineResponseBody &) = default ;
    RunPipelineResponseBody& operator=(RunPipelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSpaceName_ == nullptr
        && this->pipelineName_ == nullptr && this->requestId_ == nullptr && this->runId_ == nullptr && this->status_ == nullptr; };
    // agentSpaceName Field Functions 
    bool hasAgentSpaceName() const { return this->agentSpaceName_ != nullptr;};
    void deleteAgentSpaceName() { this->agentSpaceName_ = nullptr;};
    inline string getAgentSpaceName() const { DARABONBA_PTR_GET_DEFAULT(agentSpaceName_, "") };
    inline RunPipelineResponseBody& setAgentSpaceName(string agentSpaceName) { DARABONBA_PTR_SET_VALUE(agentSpaceName_, agentSpaceName) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string getPipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline RunPipelineResponseBody& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunPipelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline RunPipelineResponseBody& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RunPipelineResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> agentSpaceName_ {};
    shared_ptr<string> pipelineName_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> runId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
