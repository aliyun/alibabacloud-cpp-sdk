// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLSAMPLEEVENT_HPP_
#define ALIBABACLOUD_MODELS_RLSAMPLEEVENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLSampleEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLSampleEvent& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(GlobalStep, globalStep_);
      DARABONBA_PTR_TO_JSON(Stage, stage_);
      DARABONBA_PTR_TO_JSON(TimestampMs, timestampMs_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, RLSampleEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(GlobalStep, globalStep_);
      DARABONBA_PTR_FROM_JSON(Stage, stage_);
      DARABONBA_PTR_FROM_JSON(TimestampMs, timestampMs_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    RLSampleEvent() = default ;
    RLSampleEvent(const RLSampleEvent &) = default ;
    RLSampleEvent(RLSampleEvent &&) = default ;
    RLSampleEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLSampleEvent() = default ;
    RLSampleEvent& operator=(const RLSampleEvent &) = default ;
    RLSampleEvent& operator=(RLSampleEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && this->from_ == nullptr && this->globalStep_ == nullptr && this->stage_ == nullptr && this->timestampMs_ == nullptr && this->to_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline RLSampleEvent& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline RLSampleEvent& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // globalStep Field Functions 
    bool hasGlobalStep() const { return this->globalStep_ != nullptr;};
    void deleteGlobalStep() { this->globalStep_ = nullptr;};
    inline string getGlobalStep() const { DARABONBA_PTR_GET_DEFAULT(globalStep_, "") };
    inline RLSampleEvent& setGlobalStep(string globalStep) { DARABONBA_PTR_SET_VALUE(globalStep_, globalStep) };


    // stage Field Functions 
    bool hasStage() const { return this->stage_ != nullptr;};
    void deleteStage() { this->stage_ = nullptr;};
    inline string getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
    inline RLSampleEvent& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


    // timestampMs Field Functions 
    bool hasTimestampMs() const { return this->timestampMs_ != nullptr;};
    void deleteTimestampMs() { this->timestampMs_ = nullptr;};
    inline int64_t getTimestampMs() const { DARABONBA_PTR_GET_DEFAULT(timestampMs_, 0L) };
    inline RLSampleEvent& setTimestampMs(int64_t timestampMs) { DARABONBA_PTR_SET_VALUE(timestampMs_, timestampMs) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline string getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
    inline RLSampleEvent& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // The details. For Megatron rows, the value is rank=..,global_step=..,ppo_epoch=..
    shared_ptr<string> detail_ {};
    // The event source component. For Megatron rows, the value is "{phase} {status}".
    shared_ptr<string> from_ {};
    // The training step to which the event belongs (raw string). For Megatron rows, this is empty because the step is included in Detail.
    shared_ptr<string> globalStep_ {};
    // The stage. For Megatron rows, this is normalized to TRAIN.
    shared_ptr<string> stage_ {};
    // The millisecond timestamp.
    shared_ptr<int64_t> timestampMs_ {};
    // The event target component. For Megatron rows, the value is the function name.
    shared_ptr<string> to_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
