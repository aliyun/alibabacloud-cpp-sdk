// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLSAMPLE_HPP_
#define ALIBABACLOUD_MODELS_RLSAMPLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLSample : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLSample& obj) { 
      DARABONBA_PTR_TO_JSON(LatestDetail, latestDetail_);
      DARABONBA_PTR_TO_JSON(LatestStage, latestStage_);
      DARABONBA_PTR_TO_JSON(LatestStatus, latestStatus_);
      DARABONBA_PTR_TO_JSON(LatestTimestampMs, latestTimestampMs_);
      DARABONBA_PTR_TO_JSON(PromptUid, promptUid_);
      DARABONBA_PTR_TO_JSON(SampleIndex, sampleIndex_);
      DARABONBA_PTR_TO_JSON(TerminalState, terminalState_);
      DARABONBA_PTR_TO_JSON(TraceCount, traceCount_);
    };
    friend void from_json(const Darabonba::Json& j, RLSample& obj) { 
      DARABONBA_PTR_FROM_JSON(LatestDetail, latestDetail_);
      DARABONBA_PTR_FROM_JSON(LatestStage, latestStage_);
      DARABONBA_PTR_FROM_JSON(LatestStatus, latestStatus_);
      DARABONBA_PTR_FROM_JSON(LatestTimestampMs, latestTimestampMs_);
      DARABONBA_PTR_FROM_JSON(PromptUid, promptUid_);
      DARABONBA_PTR_FROM_JSON(SampleIndex, sampleIndex_);
      DARABONBA_PTR_FROM_JSON(TerminalState, terminalState_);
      DARABONBA_PTR_FROM_JSON(TraceCount, traceCount_);
    };
    RLSample() = default ;
    RLSample(const RLSample &) = default ;
    RLSample(RLSample &&) = default ;
    RLSample(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLSample() = default ;
    RLSample& operator=(const RLSample &) = default ;
    RLSample& operator=(RLSample &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->latestDetail_ == nullptr
        && this->latestStage_ == nullptr && this->latestStatus_ == nullptr && this->latestTimestampMs_ == nullptr && this->promptUid_ == nullptr && this->sampleIndex_ == nullptr
        && this->terminalState_ == nullptr && this->traceCount_ == nullptr; };
    // latestDetail Field Functions 
    bool hasLatestDetail() const { return this->latestDetail_ != nullptr;};
    void deleteLatestDetail() { this->latestDetail_ = nullptr;};
    inline string getLatestDetail() const { DARABONBA_PTR_GET_DEFAULT(latestDetail_, "") };
    inline RLSample& setLatestDetail(string latestDetail) { DARABONBA_PTR_SET_VALUE(latestDetail_, latestDetail) };


    // latestStage Field Functions 
    bool hasLatestStage() const { return this->latestStage_ != nullptr;};
    void deleteLatestStage() { this->latestStage_ = nullptr;};
    inline string getLatestStage() const { DARABONBA_PTR_GET_DEFAULT(latestStage_, "") };
    inline RLSample& setLatestStage(string latestStage) { DARABONBA_PTR_SET_VALUE(latestStage_, latestStage) };


    // latestStatus Field Functions 
    bool hasLatestStatus() const { return this->latestStatus_ != nullptr;};
    void deleteLatestStatus() { this->latestStatus_ = nullptr;};
    inline string getLatestStatus() const { DARABONBA_PTR_GET_DEFAULT(latestStatus_, "") };
    inline RLSample& setLatestStatus(string latestStatus) { DARABONBA_PTR_SET_VALUE(latestStatus_, latestStatus) };


    // latestTimestampMs Field Functions 
    bool hasLatestTimestampMs() const { return this->latestTimestampMs_ != nullptr;};
    void deleteLatestTimestampMs() { this->latestTimestampMs_ = nullptr;};
    inline int64_t getLatestTimestampMs() const { DARABONBA_PTR_GET_DEFAULT(latestTimestampMs_, 0L) };
    inline RLSample& setLatestTimestampMs(int64_t latestTimestampMs) { DARABONBA_PTR_SET_VALUE(latestTimestampMs_, latestTimestampMs) };


    // promptUid Field Functions 
    bool hasPromptUid() const { return this->promptUid_ != nullptr;};
    void deletePromptUid() { this->promptUid_ = nullptr;};
    inline string getPromptUid() const { DARABONBA_PTR_GET_DEFAULT(promptUid_, "") };
    inline RLSample& setPromptUid(string promptUid) { DARABONBA_PTR_SET_VALUE(promptUid_, promptUid) };


    // sampleIndex Field Functions 
    bool hasSampleIndex() const { return this->sampleIndex_ != nullptr;};
    void deleteSampleIndex() { this->sampleIndex_ = nullptr;};
    inline string getSampleIndex() const { DARABONBA_PTR_GET_DEFAULT(sampleIndex_, "") };
    inline RLSample& setSampleIndex(string sampleIndex) { DARABONBA_PTR_SET_VALUE(sampleIndex_, sampleIndex) };


    // terminalState Field Functions 
    bool hasTerminalState() const { return this->terminalState_ != nullptr;};
    void deleteTerminalState() { this->terminalState_ = nullptr;};
    inline string getTerminalState() const { DARABONBA_PTR_GET_DEFAULT(terminalState_, "") };
    inline RLSample& setTerminalState(string terminalState) { DARABONBA_PTR_SET_VALUE(terminalState_, terminalState) };


    // traceCount Field Functions 
    bool hasTraceCount() const { return this->traceCount_ != nullptr;};
    void deleteTraceCount() { this->traceCount_ = nullptr;};
    inline int64_t getTraceCount() const { DARABONBA_PTR_GET_DEFAULT(traceCount_, 0L) };
    inline RLSample& setTraceCount(int64_t traceCount) { DARABONBA_PTR_SET_VALUE(traceCount_, traceCount) };


  protected:
    // The detail of the latest event.
    shared_ptr<string> latestDetail_ {};
    // The stage of the latest event.
    shared_ptr<string> latestStage_ {};
    // The latest sample_status.
    shared_ptr<string> latestStatus_ {};
    // The millisecond timestamp of the latest event.
    shared_ptr<int64_t> latestTimestampMs_ {};
    // The sample UID.
    shared_ptr<string> promptUid_ {};
    // The trajectory ordinal number (numeric string).
    shared_ptr<string> sampleIndex_ {};
    // The desired state. Valid values: trained (training completed) and empty string (in progress). The current frame does not perform oversampling, so discarded and cancelled do not occur.
    shared_ptr<string> terminalState_ {};
    // The number of trace rows for the trajectory, including B/C type allocations.
    shared_ptr<int64_t> traceCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
