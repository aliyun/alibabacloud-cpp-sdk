// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLFLOWSTUCKITEM_HPP_
#define ALIBABACLOUD_MODELS_RLFLOWSTUCKITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLFlowStuckItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLFlowStuckItem& obj) { 
      DARABONBA_PTR_TO_JSON(IdleSec, idleSec_);
      DARABONBA_PTR_TO_JSON(LastTsMs, lastTsMs_);
      DARABONBA_PTR_TO_JSON(Milestone, milestone_);
      DARABONBA_PTR_TO_JSON(NTurns, NTurns_);
      DARABONBA_PTR_TO_JSON(PromptUid, promptUid_);
      DARABONBA_PTR_TO_JSON(SampleIndex, sampleIndex_);
    };
    friend void from_json(const Darabonba::Json& j, RLFlowStuckItem& obj) { 
      DARABONBA_PTR_FROM_JSON(IdleSec, idleSec_);
      DARABONBA_PTR_FROM_JSON(LastTsMs, lastTsMs_);
      DARABONBA_PTR_FROM_JSON(Milestone, milestone_);
      DARABONBA_PTR_FROM_JSON(NTurns, NTurns_);
      DARABONBA_PTR_FROM_JSON(PromptUid, promptUid_);
      DARABONBA_PTR_FROM_JSON(SampleIndex, sampleIndex_);
    };
    RLFlowStuckItem() = default ;
    RLFlowStuckItem(const RLFlowStuckItem &) = default ;
    RLFlowStuckItem(RLFlowStuckItem &&) = default ;
    RLFlowStuckItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLFlowStuckItem() = default ;
    RLFlowStuckItem& operator=(const RLFlowStuckItem &) = default ;
    RLFlowStuckItem& operator=(RLFlowStuckItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idleSec_ == nullptr
        && this->lastTsMs_ == nullptr && this->milestone_ == nullptr && this->NTurns_ == nullptr && this->promptUid_ == nullptr && this->sampleIndex_ == nullptr; };
    // idleSec Field Functions 
    bool hasIdleSec() const { return this->idleSec_ != nullptr;};
    void deleteIdleSec() { this->idleSec_ = nullptr;};
    inline int64_t getIdleSec() const { DARABONBA_PTR_GET_DEFAULT(idleSec_, 0L) };
    inline RLFlowStuckItem& setIdleSec(int64_t idleSec) { DARABONBA_PTR_SET_VALUE(idleSec_, idleSec) };


    // lastTsMs Field Functions 
    bool hasLastTsMs() const { return this->lastTsMs_ != nullptr;};
    void deleteLastTsMs() { this->lastTsMs_ = nullptr;};
    inline int64_t getLastTsMs() const { DARABONBA_PTR_GET_DEFAULT(lastTsMs_, 0L) };
    inline RLFlowStuckItem& setLastTsMs(int64_t lastTsMs) { DARABONBA_PTR_SET_VALUE(lastTsMs_, lastTsMs) };


    // milestone Field Functions 
    bool hasMilestone() const { return this->milestone_ != nullptr;};
    void deleteMilestone() { this->milestone_ = nullptr;};
    inline string getMilestone() const { DARABONBA_PTR_GET_DEFAULT(milestone_, "") };
    inline RLFlowStuckItem& setMilestone(string milestone) { DARABONBA_PTR_SET_VALUE(milestone_, milestone) };


    // NTurns Field Functions 
    bool hasNTurns() const { return this->NTurns_ != nullptr;};
    void deleteNTurns() { this->NTurns_ = nullptr;};
    inline int32_t getNTurns() const { DARABONBA_PTR_GET_DEFAULT(NTurns_, 0) };
    inline RLFlowStuckItem& setNTurns(int32_t NTurns) { DARABONBA_PTR_SET_VALUE(NTurns_, NTurns) };


    // promptUid Field Functions 
    bool hasPromptUid() const { return this->promptUid_ != nullptr;};
    void deletePromptUid() { this->promptUid_ = nullptr;};
    inline string getPromptUid() const { DARABONBA_PTR_GET_DEFAULT(promptUid_, "") };
    inline RLFlowStuckItem& setPromptUid(string promptUid) { DARABONBA_PTR_SET_VALUE(promptUid_, promptUid) };


    // sampleIndex Field Functions 
    bool hasSampleIndex() const { return this->sampleIndex_ != nullptr;};
    void deleteSampleIndex() { this->sampleIndex_ = nullptr;};
    inline string getSampleIndex() const { DARABONBA_PTR_GET_DEFAULT(sampleIndex_, "") };
    inline RLFlowStuckItem& setSampleIndex(string sampleIndex) { DARABONBA_PTR_SET_VALUE(sampleIndex_, sampleIndex) };


  protected:
    // The number of idle seconds since NowMs. This value is the descending sort key of the Stuck list.
    shared_ptr<int64_t> idleSec_ {};
    // The UNIX timestamp of the last event, in milliseconds.
    shared_ptr<int64_t> lastTsMs_ {};
    // The current milestone where the entry is staying. Valid values:
    // - 已生成未下发: Generated but not delivered.
    // - 已下发未启动: Delivered but not started.
    // - 已启动待生成: Started and pending generation.
    // - 生成中: Generating.
    // - Rollout完成待打分: Rollout completed and pending scoring.
    // - 已打分待采样: Scored and pending sampling.
    // - 已采样待训练: Sampled and pending training.
    shared_ptr<string> milestone_ {};
    // The number of completed generation rounds.
    shared_ptr<int32_t> NTurns_ {};
    // The UID of the sample.
    shared_ptr<string> promptUid_ {};
    // The ordinal number of the trajectory.
    shared_ptr<string> sampleIndex_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
