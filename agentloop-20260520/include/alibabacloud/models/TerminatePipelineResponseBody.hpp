// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TERMINATEPIPELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TERMINATEPIPELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class TerminatePipelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TerminatePipelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpaceName, agentSpaceName_);
      DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scheduleStatus, scheduleStatus_);
      DARABONBA_PTR_TO_JSON(terminateTime, terminateTime_);
      DARABONBA_PTR_TO_JSON(terminatedReason, terminatedReason_);
    };
    friend void from_json(const Darabonba::Json& j, TerminatePipelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpaceName, agentSpaceName_);
      DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scheduleStatus, scheduleStatus_);
      DARABONBA_PTR_FROM_JSON(terminateTime, terminateTime_);
      DARABONBA_PTR_FROM_JSON(terminatedReason, terminatedReason_);
    };
    TerminatePipelineResponseBody() = default ;
    TerminatePipelineResponseBody(const TerminatePipelineResponseBody &) = default ;
    TerminatePipelineResponseBody(TerminatePipelineResponseBody &&) = default ;
    TerminatePipelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TerminatePipelineResponseBody() = default ;
    TerminatePipelineResponseBody& operator=(const TerminatePipelineResponseBody &) = default ;
    TerminatePipelineResponseBody& operator=(TerminatePipelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSpaceName_ == nullptr
        && this->pipelineName_ == nullptr && this->requestId_ == nullptr && this->scheduleStatus_ == nullptr && this->terminateTime_ == nullptr && this->terminatedReason_ == nullptr; };
    // agentSpaceName Field Functions 
    bool hasAgentSpaceName() const { return this->agentSpaceName_ != nullptr;};
    void deleteAgentSpaceName() { this->agentSpaceName_ = nullptr;};
    inline string getAgentSpaceName() const { DARABONBA_PTR_GET_DEFAULT(agentSpaceName_, "") };
    inline TerminatePipelineResponseBody& setAgentSpaceName(string agentSpaceName) { DARABONBA_PTR_SET_VALUE(agentSpaceName_, agentSpaceName) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string getPipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline TerminatePipelineResponseBody& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TerminatePipelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduleStatus Field Functions 
    bool hasScheduleStatus() const { return this->scheduleStatus_ != nullptr;};
    void deleteScheduleStatus() { this->scheduleStatus_ = nullptr;};
    inline string getScheduleStatus() const { DARABONBA_PTR_GET_DEFAULT(scheduleStatus_, "") };
    inline TerminatePipelineResponseBody& setScheduleStatus(string scheduleStatus) { DARABONBA_PTR_SET_VALUE(scheduleStatus_, scheduleStatus) };


    // terminateTime Field Functions 
    bool hasTerminateTime() const { return this->terminateTime_ != nullptr;};
    void deleteTerminateTime() { this->terminateTime_ = nullptr;};
    inline string getTerminateTime() const { DARABONBA_PTR_GET_DEFAULT(terminateTime_, "") };
    inline TerminatePipelineResponseBody& setTerminateTime(string terminateTime) { DARABONBA_PTR_SET_VALUE(terminateTime_, terminateTime) };


    // terminatedReason Field Functions 
    bool hasTerminatedReason() const { return this->terminatedReason_ != nullptr;};
    void deleteTerminatedReason() { this->terminatedReason_ = nullptr;};
    inline string getTerminatedReason() const { DARABONBA_PTR_GET_DEFAULT(terminatedReason_, "") };
    inline TerminatePipelineResponseBody& setTerminatedReason(string terminatedReason) { DARABONBA_PTR_SET_VALUE(terminatedReason_, terminatedReason) };


  protected:
    shared_ptr<string> agentSpaceName_ {};
    shared_ptr<string> pipelineName_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> scheduleStatus_ {};
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    shared_ptr<string> terminateTime_ {};
    shared_ptr<string> terminatedReason_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
