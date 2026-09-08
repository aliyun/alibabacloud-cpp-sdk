// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLFLOWSTEP_HPP_
#define ALIBABACLOUD_MODELS_RLFLOWSTEP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLFlowStep : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLFlowStep& obj) { 
      DARABONBA_PTR_TO_JSON(BufferWaitP50, bufferWaitP50_);
      DARABONBA_PTR_TO_JSON(GapSec, gapSec_);
      DARABONBA_PTR_TO_JSON(IdleSec, idleSec_);
      DARABONBA_PTR_TO_JSON(NSamples, NSamples_);
      DARABONBA_PTR_TO_JSON(NTrajs, NTrajs_);
      DARABONBA_PTR_TO_JSON(ProdEndMs, prodEndMs_);
      DARABONBA_PTR_TO_JSON(ProdStartMs, prodStartMs_);
      DARABONBA_PTR_TO_JSON(RolloutP50, rolloutP50_);
      DARABONBA_PTR_TO_JSON(RolloutSec, rolloutSec_);
      DARABONBA_PTR_TO_JSON(Step, step_);
      DARABONBA_PTR_TO_JSON(TFwdStartMs, TFwdStartMs_);
      DARABONBA_PTR_TO_JSON(TOptEndMs, TOptEndMs_);
      DARABONBA_PTR_TO_JSON(TRolloutEndMs, TRolloutEndMs_);
      DARABONBA_PTR_TO_JSON(TRolloutStartMs, TRolloutStartMs_);
      DARABONBA_PTR_TO_JSON(TTrainEndMs, TTrainEndMs_);
      DARABONBA_PTR_TO_JSON(TTrainStartMs, TTrainStartMs_);
      DARABONBA_PTR_TO_JSON(TUpdateMs, TUpdateMs_);
      DARABONBA_PTR_TO_JSON(TrainSec, trainSec_);
    };
    friend void from_json(const Darabonba::Json& j, RLFlowStep& obj) { 
      DARABONBA_PTR_FROM_JSON(BufferWaitP50, bufferWaitP50_);
      DARABONBA_PTR_FROM_JSON(GapSec, gapSec_);
      DARABONBA_PTR_FROM_JSON(IdleSec, idleSec_);
      DARABONBA_PTR_FROM_JSON(NSamples, NSamples_);
      DARABONBA_PTR_FROM_JSON(NTrajs, NTrajs_);
      DARABONBA_PTR_FROM_JSON(ProdEndMs, prodEndMs_);
      DARABONBA_PTR_FROM_JSON(ProdStartMs, prodStartMs_);
      DARABONBA_PTR_FROM_JSON(RolloutP50, rolloutP50_);
      DARABONBA_PTR_FROM_JSON(RolloutSec, rolloutSec_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
      DARABONBA_PTR_FROM_JSON(TFwdStartMs, TFwdStartMs_);
      DARABONBA_PTR_FROM_JSON(TOptEndMs, TOptEndMs_);
      DARABONBA_PTR_FROM_JSON(TRolloutEndMs, TRolloutEndMs_);
      DARABONBA_PTR_FROM_JSON(TRolloutStartMs, TRolloutStartMs_);
      DARABONBA_PTR_FROM_JSON(TTrainEndMs, TTrainEndMs_);
      DARABONBA_PTR_FROM_JSON(TTrainStartMs, TTrainStartMs_);
      DARABONBA_PTR_FROM_JSON(TUpdateMs, TUpdateMs_);
      DARABONBA_PTR_FROM_JSON(TrainSec, trainSec_);
    };
    RLFlowStep() = default ;
    RLFlowStep(const RLFlowStep &) = default ;
    RLFlowStep(RLFlowStep &&) = default ;
    RLFlowStep(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLFlowStep() = default ;
    RLFlowStep& operator=(const RLFlowStep &) = default ;
    RLFlowStep& operator=(RLFlowStep &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bufferWaitP50_ == nullptr
        && this->gapSec_ == nullptr && this->idleSec_ == nullptr && this->NSamples_ == nullptr && this->NTrajs_ == nullptr && this->prodEndMs_ == nullptr
        && this->prodStartMs_ == nullptr && this->rolloutP50_ == nullptr && this->rolloutSec_ == nullptr && this->step_ == nullptr && this->TFwdStartMs_ == nullptr
        && this->TOptEndMs_ == nullptr && this->TRolloutEndMs_ == nullptr && this->TRolloutStartMs_ == nullptr && this->TTrainEndMs_ == nullptr && this->TTrainStartMs_ == nullptr
        && this->TUpdateMs_ == nullptr && this->trainSec_ == nullptr; };
    // bufferWaitP50 Field Functions 
    bool hasBufferWaitP50() const { return this->bufferWaitP50_ != nullptr;};
    void deleteBufferWaitP50() { this->bufferWaitP50_ = nullptr;};
    inline double getBufferWaitP50() const { DARABONBA_PTR_GET_DEFAULT(bufferWaitP50_, 0.0) };
    inline RLFlowStep& setBufferWaitP50(double bufferWaitP50) { DARABONBA_PTR_SET_VALUE(bufferWaitP50_, bufferWaitP50) };


    // gapSec Field Functions 
    bool hasGapSec() const { return this->gapSec_ != nullptr;};
    void deleteGapSec() { this->gapSec_ = nullptr;};
    inline double getGapSec() const { DARABONBA_PTR_GET_DEFAULT(gapSec_, 0.0) };
    inline RLFlowStep& setGapSec(double gapSec) { DARABONBA_PTR_SET_VALUE(gapSec_, gapSec) };


    // idleSec Field Functions 
    bool hasIdleSec() const { return this->idleSec_ != nullptr;};
    void deleteIdleSec() { this->idleSec_ = nullptr;};
    inline double getIdleSec() const { DARABONBA_PTR_GET_DEFAULT(idleSec_, 0.0) };
    inline RLFlowStep& setIdleSec(double idleSec) { DARABONBA_PTR_SET_VALUE(idleSec_, idleSec) };


    // NSamples Field Functions 
    bool hasNSamples() const { return this->NSamples_ != nullptr;};
    void deleteNSamples() { this->NSamples_ = nullptr;};
    inline int32_t getNSamples() const { DARABONBA_PTR_GET_DEFAULT(NSamples_, 0) };
    inline RLFlowStep& setNSamples(int32_t NSamples) { DARABONBA_PTR_SET_VALUE(NSamples_, NSamples) };


    // NTrajs Field Functions 
    bool hasNTrajs() const { return this->NTrajs_ != nullptr;};
    void deleteNTrajs() { this->NTrajs_ = nullptr;};
    inline int32_t getNTrajs() const { DARABONBA_PTR_GET_DEFAULT(NTrajs_, 0) };
    inline RLFlowStep& setNTrajs(int32_t NTrajs) { DARABONBA_PTR_SET_VALUE(NTrajs_, NTrajs) };


    // prodEndMs Field Functions 
    bool hasProdEndMs() const { return this->prodEndMs_ != nullptr;};
    void deleteProdEndMs() { this->prodEndMs_ = nullptr;};
    inline int64_t getProdEndMs() const { DARABONBA_PTR_GET_DEFAULT(prodEndMs_, 0L) };
    inline RLFlowStep& setProdEndMs(int64_t prodEndMs) { DARABONBA_PTR_SET_VALUE(prodEndMs_, prodEndMs) };


    // prodStartMs Field Functions 
    bool hasProdStartMs() const { return this->prodStartMs_ != nullptr;};
    void deleteProdStartMs() { this->prodStartMs_ = nullptr;};
    inline int64_t getProdStartMs() const { DARABONBA_PTR_GET_DEFAULT(prodStartMs_, 0L) };
    inline RLFlowStep& setProdStartMs(int64_t prodStartMs) { DARABONBA_PTR_SET_VALUE(prodStartMs_, prodStartMs) };


    // rolloutP50 Field Functions 
    bool hasRolloutP50() const { return this->rolloutP50_ != nullptr;};
    void deleteRolloutP50() { this->rolloutP50_ = nullptr;};
    inline double getRolloutP50() const { DARABONBA_PTR_GET_DEFAULT(rolloutP50_, 0.0) };
    inline RLFlowStep& setRolloutP50(double rolloutP50) { DARABONBA_PTR_SET_VALUE(rolloutP50_, rolloutP50) };


    // rolloutSec Field Functions 
    bool hasRolloutSec() const { return this->rolloutSec_ != nullptr;};
    void deleteRolloutSec() { this->rolloutSec_ = nullptr;};
    inline double getRolloutSec() const { DARABONBA_PTR_GET_DEFAULT(rolloutSec_, 0.0) };
    inline RLFlowStep& setRolloutSec(double rolloutSec) { DARABONBA_PTR_SET_VALUE(rolloutSec_, rolloutSec) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline int64_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0L) };
    inline RLFlowStep& setStep(int64_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // TFwdStartMs Field Functions 
    bool hasTFwdStartMs() const { return this->TFwdStartMs_ != nullptr;};
    void deleteTFwdStartMs() { this->TFwdStartMs_ = nullptr;};
    inline int64_t getTFwdStartMs() const { DARABONBA_PTR_GET_DEFAULT(TFwdStartMs_, 0L) };
    inline RLFlowStep& setTFwdStartMs(int64_t TFwdStartMs) { DARABONBA_PTR_SET_VALUE(TFwdStartMs_, TFwdStartMs) };


    // TOptEndMs Field Functions 
    bool hasTOptEndMs() const { return this->TOptEndMs_ != nullptr;};
    void deleteTOptEndMs() { this->TOptEndMs_ = nullptr;};
    inline int64_t getTOptEndMs() const { DARABONBA_PTR_GET_DEFAULT(TOptEndMs_, 0L) };
    inline RLFlowStep& setTOptEndMs(int64_t TOptEndMs) { DARABONBA_PTR_SET_VALUE(TOptEndMs_, TOptEndMs) };


    // TRolloutEndMs Field Functions 
    bool hasTRolloutEndMs() const { return this->TRolloutEndMs_ != nullptr;};
    void deleteTRolloutEndMs() { this->TRolloutEndMs_ = nullptr;};
    inline int64_t getTRolloutEndMs() const { DARABONBA_PTR_GET_DEFAULT(TRolloutEndMs_, 0L) };
    inline RLFlowStep& setTRolloutEndMs(int64_t TRolloutEndMs) { DARABONBA_PTR_SET_VALUE(TRolloutEndMs_, TRolloutEndMs) };


    // TRolloutStartMs Field Functions 
    bool hasTRolloutStartMs() const { return this->TRolloutStartMs_ != nullptr;};
    void deleteTRolloutStartMs() { this->TRolloutStartMs_ = nullptr;};
    inline int64_t getTRolloutStartMs() const { DARABONBA_PTR_GET_DEFAULT(TRolloutStartMs_, 0L) };
    inline RLFlowStep& setTRolloutStartMs(int64_t TRolloutStartMs) { DARABONBA_PTR_SET_VALUE(TRolloutStartMs_, TRolloutStartMs) };


    // TTrainEndMs Field Functions 
    bool hasTTrainEndMs() const { return this->TTrainEndMs_ != nullptr;};
    void deleteTTrainEndMs() { this->TTrainEndMs_ = nullptr;};
    inline int64_t getTTrainEndMs() const { DARABONBA_PTR_GET_DEFAULT(TTrainEndMs_, 0L) };
    inline RLFlowStep& setTTrainEndMs(int64_t TTrainEndMs) { DARABONBA_PTR_SET_VALUE(TTrainEndMs_, TTrainEndMs) };


    // TTrainStartMs Field Functions 
    bool hasTTrainStartMs() const { return this->TTrainStartMs_ != nullptr;};
    void deleteTTrainStartMs() { this->TTrainStartMs_ = nullptr;};
    inline int64_t getTTrainStartMs() const { DARABONBA_PTR_GET_DEFAULT(TTrainStartMs_, 0L) };
    inline RLFlowStep& setTTrainStartMs(int64_t TTrainStartMs) { DARABONBA_PTR_SET_VALUE(TTrainStartMs_, TTrainStartMs) };


    // TUpdateMs Field Functions 
    bool hasTUpdateMs() const { return this->TUpdateMs_ != nullptr;};
    void deleteTUpdateMs() { this->TUpdateMs_ = nullptr;};
    inline int64_t getTUpdateMs() const { DARABONBA_PTR_GET_DEFAULT(TUpdateMs_, 0L) };
    inline RLFlowStep& setTUpdateMs(int64_t TUpdateMs) { DARABONBA_PTR_SET_VALUE(TUpdateMs_, TUpdateMs) };


    // trainSec Field Functions 
    bool hasTrainSec() const { return this->trainSec_ != nullptr;};
    void deleteTrainSec() { this->trainSec_ = nullptr;};
    inline double getTrainSec() const { DARABONBA_PTR_GET_DEFAULT(trainSec_, 0.0) };
    inline RLFlowStep& setTrainSec(double trainSec) { DARABONBA_PTR_SET_VALUE(trainSec_, trainSec) };


  protected:
    // The P50 latency in seconds from when trajectories of the step enter the buffer to when batching occurs.
    shared_ptr<double> bufferWaitP50_ {};
    // The gap duration in seconds, calculated as train started − rollout finished. This represents batching or transfer wait time.
    shared_ptr<double> gapSec_ {};
    // The training idle time in seconds, calculated as the current step training start − the previous step training end. If no marker is present, the value falls back to the current step forward computation start − the previous step optimizer end. A value greater than 0 indicates that the trainer is waiting for data.
    shared_ptr<double> idleSec_ {};
    // The number of samples (UIDs) consumed by the step.
    shared_ptr<int32_t> NSamples_ {};
    // The number of trajectories executed in the step.
    shared_ptr<int32_t> NTrajs_ {};
    // The latest time when trajectories of the step enter the buffer, in milliseconds.
    shared_ptr<int64_t> prodEndMs_ {};
    // The earliest time when trajectories of the step enter the buffer, in milliseconds.
    shared_ptr<int64_t> prodStartMs_ {};
    // The P50 latency in seconds from when trajectories of the step start execution to when they enter the buffer.
    shared_ptr<double> rolloutP50_ {};
    // The rollout duration in seconds, calculated as rollout finished − rollout started. This value is null if no marker is present.
    shared_ptr<double> rolloutSec_ {};
    // The global step ordinal number.
    shared_ptr<int64_t> step_ {};
    // The forward computation start time, in milliseconds.
    shared_ptr<int64_t> TFwdStartMs_ {};
    // The optimizer end time, in milliseconds.
    shared_ptr<int64_t> TOptEndMs_ {};
    // The node operation log "Step N rollout finished" time, in milliseconds.
    shared_ptr<int64_t> TRolloutEndMs_ {};
    // The node operation log "Step N rollout started" time, in milliseconds (taken from agent_collect_time).
    shared_ptr<int64_t> TRolloutStartMs_ {};
    // The node operation log "Step N train finished" time, in milliseconds.
    shared_ptr<int64_t> TTrainEndMs_ {};
    // The node operation log "Step N train started" time, in milliseconds.
    shared_ptr<int64_t> TTrainStartMs_ {};
    // The TRAIN_UPDATE (parameter update) time, in milliseconds.
    shared_ptr<int64_t> TUpdateMs_ {};
    // The training duration in seconds. This value is preferentially calculated as train finished − train started. If no marker is present, the value falls back to the duration from batching to training completion. This value is null if global_step is duplicated because of a job restart.
    shared_ptr<double> trainSec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
