// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAUSEPIPELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PAUSEPIPELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class PausePipelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PausePipelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpaceName, agentSpaceName_);
      DARABONBA_PTR_TO_JSON(pauseTime, pauseTime_);
      DARABONBA_PTR_TO_JSON(pausedReason, pausedReason_);
      DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scheduleStatus, scheduleStatus_);
    };
    friend void from_json(const Darabonba::Json& j, PausePipelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpaceName, agentSpaceName_);
      DARABONBA_PTR_FROM_JSON(pauseTime, pauseTime_);
      DARABONBA_PTR_FROM_JSON(pausedReason, pausedReason_);
      DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scheduleStatus, scheduleStatus_);
    };
    PausePipelineResponseBody() = default ;
    PausePipelineResponseBody(const PausePipelineResponseBody &) = default ;
    PausePipelineResponseBody(PausePipelineResponseBody &&) = default ;
    PausePipelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PausePipelineResponseBody() = default ;
    PausePipelineResponseBody& operator=(const PausePipelineResponseBody &) = default ;
    PausePipelineResponseBody& operator=(PausePipelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSpaceName_ == nullptr
        && this->pauseTime_ == nullptr && this->pausedReason_ == nullptr && this->pipelineName_ == nullptr && this->requestId_ == nullptr && this->scheduleStatus_ == nullptr; };
    // agentSpaceName Field Functions 
    bool hasAgentSpaceName() const { return this->agentSpaceName_ != nullptr;};
    void deleteAgentSpaceName() { this->agentSpaceName_ = nullptr;};
    inline string getAgentSpaceName() const { DARABONBA_PTR_GET_DEFAULT(agentSpaceName_, "") };
    inline PausePipelineResponseBody& setAgentSpaceName(string agentSpaceName) { DARABONBA_PTR_SET_VALUE(agentSpaceName_, agentSpaceName) };


    // pauseTime Field Functions 
    bool hasPauseTime() const { return this->pauseTime_ != nullptr;};
    void deletePauseTime() { this->pauseTime_ = nullptr;};
    inline string getPauseTime() const { DARABONBA_PTR_GET_DEFAULT(pauseTime_, "") };
    inline PausePipelineResponseBody& setPauseTime(string pauseTime) { DARABONBA_PTR_SET_VALUE(pauseTime_, pauseTime) };


    // pausedReason Field Functions 
    bool hasPausedReason() const { return this->pausedReason_ != nullptr;};
    void deletePausedReason() { this->pausedReason_ = nullptr;};
    inline string getPausedReason() const { DARABONBA_PTR_GET_DEFAULT(pausedReason_, "") };
    inline PausePipelineResponseBody& setPausedReason(string pausedReason) { DARABONBA_PTR_SET_VALUE(pausedReason_, pausedReason) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string getPipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline PausePipelineResponseBody& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PausePipelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduleStatus Field Functions 
    bool hasScheduleStatus() const { return this->scheduleStatus_ != nullptr;};
    void deleteScheduleStatus() { this->scheduleStatus_ = nullptr;};
    inline string getScheduleStatus() const { DARABONBA_PTR_GET_DEFAULT(scheduleStatus_, "") };
    inline PausePipelineResponseBody& setScheduleStatus(string scheduleStatus) { DARABONBA_PTR_SET_VALUE(scheduleStatus_, scheduleStatus) };


  protected:
    // The name of the AgentSpace where the pipeline is located.
    shared_ptr<string> agentSpaceName_ {};
    // The time when the pipeline was paused, in ISO 8601 UTC format.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    shared_ptr<string> pauseTime_ {};
    // The reason for pausing the pipeline.
    shared_ptr<string> pausedReason_ {};
    // The name of the pipeline.
    shared_ptr<string> pipelineName_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The scheduling status. The value is fixed as Paused.
    shared_ptr<string> scheduleStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
