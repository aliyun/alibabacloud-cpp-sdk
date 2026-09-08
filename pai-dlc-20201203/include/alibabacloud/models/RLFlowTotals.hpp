// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLFLOWTOTALS_HPP_
#define ALIBABACLOUD_MODELS_RLFLOWTOTALS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLFlowTotals : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLFlowTotals& obj) { 
      DARABONBA_PTR_TO_JSON(Inflight, inflight_);
      DARABONBA_PTR_TO_JSON(Rewarded, rewarded_);
      DARABONBA_PTR_TO_JSON(Sampled, sampled_);
      DARABONBA_PTR_TO_JSON(Trained, trained_);
      DARABONBA_PTR_TO_JSON(Trajs, trajs_);
      DARABONBA_PTR_TO_JSON(Uids, uids_);
    };
    friend void from_json(const Darabonba::Json& j, RLFlowTotals& obj) { 
      DARABONBA_PTR_FROM_JSON(Inflight, inflight_);
      DARABONBA_PTR_FROM_JSON(Rewarded, rewarded_);
      DARABONBA_PTR_FROM_JSON(Sampled, sampled_);
      DARABONBA_PTR_FROM_JSON(Trained, trained_);
      DARABONBA_PTR_FROM_JSON(Trajs, trajs_);
      DARABONBA_PTR_FROM_JSON(Uids, uids_);
    };
    RLFlowTotals() = default ;
    RLFlowTotals(const RLFlowTotals &) = default ;
    RLFlowTotals(RLFlowTotals &&) = default ;
    RLFlowTotals(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLFlowTotals() = default ;
    RLFlowTotals& operator=(const RLFlowTotals &) = default ;
    RLFlowTotals& operator=(RLFlowTotals &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inflight_ == nullptr
        && this->rewarded_ == nullptr && this->sampled_ == nullptr && this->trained_ == nullptr && this->trajs_ == nullptr && this->uids_ == nullptr; };
    // inflight Field Functions 
    bool hasInflight() const { return this->inflight_ != nullptr;};
    void deleteInflight() { this->inflight_ = nullptr;};
    inline int32_t getInflight() const { DARABONBA_PTR_GET_DEFAULT(inflight_, 0) };
    inline RLFlowTotals& setInflight(int32_t inflight) { DARABONBA_PTR_SET_VALUE(inflight_, inflight) };


    // rewarded Field Functions 
    bool hasRewarded() const { return this->rewarded_ != nullptr;};
    void deleteRewarded() { this->rewarded_ = nullptr;};
    inline int32_t getRewarded() const { DARABONBA_PTR_GET_DEFAULT(rewarded_, 0) };
    inline RLFlowTotals& setRewarded(int32_t rewarded) { DARABONBA_PTR_SET_VALUE(rewarded_, rewarded) };


    // sampled Field Functions 
    bool hasSampled() const { return this->sampled_ != nullptr;};
    void deleteSampled() { this->sampled_ = nullptr;};
    inline int32_t getSampled() const { DARABONBA_PTR_GET_DEFAULT(sampled_, 0) };
    inline RLFlowTotals& setSampled(int32_t sampled) { DARABONBA_PTR_SET_VALUE(sampled_, sampled) };


    // trained Field Functions 
    bool hasTrained() const { return this->trained_ != nullptr;};
    void deleteTrained() { this->trained_ = nullptr;};
    inline int32_t getTrained() const { DARABONBA_PTR_GET_DEFAULT(trained_, 0) };
    inline RLFlowTotals& setTrained(int32_t trained) { DARABONBA_PTR_SET_VALUE(trained_, trained) };


    // trajs Field Functions 
    bool hasTrajs() const { return this->trajs_ != nullptr;};
    void deleteTrajs() { this->trajs_ = nullptr;};
    inline int32_t getTrajs() const { DARABONBA_PTR_GET_DEFAULT(trajs_, 0) };
    inline RLFlowTotals& setTrajs(int32_t trajs) { DARABONBA_PTR_SET_VALUE(trajs_, trajs) };


    // uids Field Functions 
    bool hasUids() const { return this->uids_ != nullptr;};
    void deleteUids() { this->uids_ = nullptr;};
    inline int32_t getUids() const { DARABONBA_PTR_GET_DEFAULT(uids_, 0) };
    inline RLFlowTotals& setUids(int32_t uids) { DARABONBA_PTR_SET_VALUE(uids_, uids) };


  protected:
    // The number of in-flight trajectories (no desired state).
    shared_ptr<int32_t> inflight_ {};
    // The number of trajectories that have completed reward scoring (hit reward_score_computed).
    shared_ptr<int32_t> rewarded_ {};
    // The number of trajectories sampled into a batch by the trainer (hit sampled_from_replay_buffer).
    shared_ptr<int32_t> sampled_ {};
    // The number of trajectories that have completed training (hit actor_parameters_updated).
    shared_ptr<int32_t> trained_ {};
    // The total number of trajectories in the window.
    shared_ptr<int32_t> trajs_ {};
    // The number of sample UIDs that appear in the window.
    shared_ptr<int32_t> uids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
