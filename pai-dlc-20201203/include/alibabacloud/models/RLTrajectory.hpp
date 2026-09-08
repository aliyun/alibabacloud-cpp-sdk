// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLTRAJECTORY_HPP_
#define ALIBABACLOUD_MODELS_RLTRAJECTORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLTrajectory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLTrajectory& obj) { 
      DARABONBA_PTR_TO_JSON(LatestTimestampMs, latestTimestampMs_);
      DARABONBA_PTR_TO_JSON(SampleIndex, sampleIndex_);
      DARABONBA_PTR_TO_JSON(TerminalState, terminalState_);
      DARABONBA_PTR_TO_JSON(TraceCount, traceCount_);
    };
    friend void from_json(const Darabonba::Json& j, RLTrajectory& obj) { 
      DARABONBA_PTR_FROM_JSON(LatestTimestampMs, latestTimestampMs_);
      DARABONBA_PTR_FROM_JSON(SampleIndex, sampleIndex_);
      DARABONBA_PTR_FROM_JSON(TerminalState, terminalState_);
      DARABONBA_PTR_FROM_JSON(TraceCount, traceCount_);
    };
    RLTrajectory() = default ;
    RLTrajectory(const RLTrajectory &) = default ;
    RLTrajectory(RLTrajectory &&) = default ;
    RLTrajectory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLTrajectory() = default ;
    RLTrajectory& operator=(const RLTrajectory &) = default ;
    RLTrajectory& operator=(RLTrajectory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->latestTimestampMs_ == nullptr
        && this->sampleIndex_ == nullptr && this->terminalState_ == nullptr && this->traceCount_ == nullptr; };
    // latestTimestampMs Field Functions 
    bool hasLatestTimestampMs() const { return this->latestTimestampMs_ != nullptr;};
    void deleteLatestTimestampMs() { this->latestTimestampMs_ = nullptr;};
    inline int64_t getLatestTimestampMs() const { DARABONBA_PTR_GET_DEFAULT(latestTimestampMs_, 0L) };
    inline RLTrajectory& setLatestTimestampMs(int64_t latestTimestampMs) { DARABONBA_PTR_SET_VALUE(latestTimestampMs_, latestTimestampMs) };


    // sampleIndex Field Functions 
    bool hasSampleIndex() const { return this->sampleIndex_ != nullptr;};
    void deleteSampleIndex() { this->sampleIndex_ = nullptr;};
    inline string getSampleIndex() const { DARABONBA_PTR_GET_DEFAULT(sampleIndex_, "") };
    inline RLTrajectory& setSampleIndex(string sampleIndex) { DARABONBA_PTR_SET_VALUE(sampleIndex_, sampleIndex) };


    // terminalState Field Functions 
    bool hasTerminalState() const { return this->terminalState_ != nullptr;};
    void deleteTerminalState() { this->terminalState_ = nullptr;};
    inline string getTerminalState() const { DARABONBA_PTR_GET_DEFAULT(terminalState_, "") };
    inline RLTrajectory& setTerminalState(string terminalState) { DARABONBA_PTR_SET_VALUE(terminalState_, terminalState) };


    // traceCount Field Functions 
    bool hasTraceCount() const { return this->traceCount_ != nullptr;};
    void deleteTraceCount() { this->traceCount_ = nullptr;};
    inline int64_t getTraceCount() const { DARABONBA_PTR_GET_DEFAULT(traceCount_, 0L) };
    inline RLTrajectory& setTraceCount(int64_t traceCount) { DARABONBA_PTR_SET_VALUE(traceCount_, traceCount) };


  protected:
    // The latest event millisecond UNIX timestamp.
    shared_ptr<int64_t> latestTimestampMs_ {};
    // The trajectory ordinal number.
    shared_ptr<string> sampleIndex_ {};
    // The desired state. Valid values:
    // - trained: Training is complete.
    // - Empty string: In progress.
    // 
    // The current frame does not perform oversampling, so discarded and cancelled do not occur.
    shared_ptr<string> terminalState_ {};
    // The number of trace rows.
    shared_ptr<int64_t> traceCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
