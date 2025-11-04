// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIAGENTVIDEOAUDITTASKREQUESTCAPTUREPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIAGENTVIDEOAUDITTASKREQUESTCAPTUREPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitAIAgentVideoAuditTaskRequestCapturePolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIAgentVideoAuditTaskRequestCapturePolicies& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FrameCount, frameCount_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIAgentVideoAuditTaskRequestCapturePolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FrameCount, frameCount_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    SubmitAIAgentVideoAuditTaskRequestCapturePolicies() = default ;
    SubmitAIAgentVideoAuditTaskRequestCapturePolicies(const SubmitAIAgentVideoAuditTaskRequestCapturePolicies &) = default ;
    SubmitAIAgentVideoAuditTaskRequestCapturePolicies(SubmitAIAgentVideoAuditTaskRequestCapturePolicies &&) = default ;
    SubmitAIAgentVideoAuditTaskRequestCapturePolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIAgentVideoAuditTaskRequestCapturePolicies() = default ;
    SubmitAIAgentVideoAuditTaskRequestCapturePolicies& operator=(const SubmitAIAgentVideoAuditTaskRequestCapturePolicies &) = default ;
    SubmitAIAgentVideoAuditTaskRequestCapturePolicies& operator=(SubmitAIAgentVideoAuditTaskRequestCapturePolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->frameCount_ == nullptr && return this->prompt_ == nullptr && return this->startTime_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline SubmitAIAgentVideoAuditTaskRequestCapturePolicies& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // frameCount Field Functions 
    bool hasFrameCount() const { return this->frameCount_ != nullptr;};
    void deleteFrameCount() { this->frameCount_ = nullptr;};
    inline int32_t frameCount() const { DARABONBA_PTR_GET_DEFAULT(frameCount_, 0) };
    inline SubmitAIAgentVideoAuditTaskRequestCapturePolicies& setFrameCount(int32_t frameCount) { DARABONBA_PTR_SET_VALUE(frameCount_, frameCount) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline SubmitAIAgentVideoAuditTaskRequestCapturePolicies& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int32_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
    inline SubmitAIAgentVideoAuditTaskRequestCapturePolicies& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The duration over which to capture the specified number of frames. Unit: seconds.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The number of frames to capture.
    std::shared_ptr<int32_t> frameCount_ = nullptr;
    // The text prompt to send to the MLLM along with the captured frames.
    std::shared_ptr<string> prompt_ = nullptr;
    // The timestamp in the video at which to start capturing frames. Unit: seconds.
    std::shared_ptr<int32_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
