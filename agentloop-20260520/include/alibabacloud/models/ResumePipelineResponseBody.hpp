// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMEPIPELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESUMEPIPELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ResumePipelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumePipelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpaceName, agentSpaceName_);
      DARABONBA_PTR_TO_JSON(committedWatermark, committedWatermark_);
      DARABONBA_PTR_TO_JSON(nextTriggerTime, nextTriggerTime_);
      DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scheduleStatus, scheduleStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ResumePipelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpaceName, agentSpaceName_);
      DARABONBA_PTR_FROM_JSON(committedWatermark, committedWatermark_);
      DARABONBA_PTR_FROM_JSON(nextTriggerTime, nextTriggerTime_);
      DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scheduleStatus, scheduleStatus_);
    };
    ResumePipelineResponseBody() = default ;
    ResumePipelineResponseBody(const ResumePipelineResponseBody &) = default ;
    ResumePipelineResponseBody(ResumePipelineResponseBody &&) = default ;
    ResumePipelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumePipelineResponseBody() = default ;
    ResumePipelineResponseBody& operator=(const ResumePipelineResponseBody &) = default ;
    ResumePipelineResponseBody& operator=(ResumePipelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSpaceName_ == nullptr
        && this->committedWatermark_ == nullptr && this->nextTriggerTime_ == nullptr && this->pipelineName_ == nullptr && this->requestId_ == nullptr && this->scheduleStatus_ == nullptr; };
    // agentSpaceName Field Functions 
    bool hasAgentSpaceName() const { return this->agentSpaceName_ != nullptr;};
    void deleteAgentSpaceName() { this->agentSpaceName_ = nullptr;};
    inline string getAgentSpaceName() const { DARABONBA_PTR_GET_DEFAULT(agentSpaceName_, "") };
    inline ResumePipelineResponseBody& setAgentSpaceName(string agentSpaceName) { DARABONBA_PTR_SET_VALUE(agentSpaceName_, agentSpaceName) };


    // committedWatermark Field Functions 
    bool hasCommittedWatermark() const { return this->committedWatermark_ != nullptr;};
    void deleteCommittedWatermark() { this->committedWatermark_ = nullptr;};
    inline int64_t getCommittedWatermark() const { DARABONBA_PTR_GET_DEFAULT(committedWatermark_, 0L) };
    inline ResumePipelineResponseBody& setCommittedWatermark(int64_t committedWatermark) { DARABONBA_PTR_SET_VALUE(committedWatermark_, committedWatermark) };


    // nextTriggerTime Field Functions 
    bool hasNextTriggerTime() const { return this->nextTriggerTime_ != nullptr;};
    void deleteNextTriggerTime() { this->nextTriggerTime_ = nullptr;};
    inline int64_t getNextTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(nextTriggerTime_, 0L) };
    inline ResumePipelineResponseBody& setNextTriggerTime(int64_t nextTriggerTime) { DARABONBA_PTR_SET_VALUE(nextTriggerTime_, nextTriggerTime) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string getPipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline ResumePipelineResponseBody& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResumePipelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduleStatus Field Functions 
    bool hasScheduleStatus() const { return this->scheduleStatus_ != nullptr;};
    void deleteScheduleStatus() { this->scheduleStatus_ = nullptr;};
    inline string getScheduleStatus() const { DARABONBA_PTR_GET_DEFAULT(scheduleStatus_, "") };
    inline ResumePipelineResponseBody& setScheduleStatus(string scheduleStatus) { DARABONBA_PTR_SET_VALUE(scheduleStatus_, scheduleStatus) };


  protected:
    // The name of the AgentSpace where the pipeline is located.
    shared_ptr<string> agentSpaceName_ {};
    // The committed watermark, in UNIX seconds.
    shared_ptr<int64_t> committedWatermark_ {};
    // The next scheduling trigger time, in UNIX seconds.
    shared_ptr<int64_t> nextTriggerTime_ {};
    // The name of the pipeline.
    shared_ptr<string> pipelineName_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The scheduling status. The value is fixed to Active.
    shared_ptr<string> scheduleStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
