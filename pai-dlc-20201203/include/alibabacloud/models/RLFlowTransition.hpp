// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLFLOWTRANSITION_HPP_
#define ALIBABACLOUD_MODELS_RLFLOWTRANSITION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RLFlowSlowestItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLFlowTransition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLFlowTransition& obj) { 
      DARABONBA_PTR_TO_JSON(Avg, avg_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Max, max_);
      DARABONBA_PTR_TO_JSON(P50, p50_);
      DARABONBA_PTR_TO_JSON(P90, p90_);
      DARABONBA_PTR_TO_JSON(P99, p99_);
      DARABONBA_PTR_TO_JSON(Slowest, slowest_);
    };
    friend void from_json(const Darabonba::Json& j, RLFlowTransition& obj) { 
      DARABONBA_PTR_FROM_JSON(Avg, avg_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Max, max_);
      DARABONBA_PTR_FROM_JSON(P50, p50_);
      DARABONBA_PTR_FROM_JSON(P90, p90_);
      DARABONBA_PTR_FROM_JSON(P99, p99_);
      DARABONBA_PTR_FROM_JSON(Slowest, slowest_);
    };
    RLFlowTransition() = default ;
    RLFlowTransition(const RLFlowTransition &) = default ;
    RLFlowTransition(RLFlowTransition &&) = default ;
    RLFlowTransition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLFlowTransition() = default ;
    RLFlowTransition& operator=(const RLFlowTransition &) = default ;
    RLFlowTransition& operator=(RLFlowTransition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avg_ == nullptr
        && this->count_ == nullptr && this->key_ == nullptr && this->label_ == nullptr && this->max_ == nullptr && this->p50_ == nullptr
        && this->p90_ == nullptr && this->p99_ == nullptr && this->slowest_ == nullptr; };
    // avg Field Functions 
    bool hasAvg() const { return this->avg_ != nullptr;};
    void deleteAvg() { this->avg_ = nullptr;};
    inline double getAvg() const { DARABONBA_PTR_GET_DEFAULT(avg_, 0.0) };
    inline RLFlowTransition& setAvg(double avg) { DARABONBA_PTR_SET_VALUE(avg_, avg) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline RLFlowTransition& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline RLFlowTransition& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline RLFlowTransition& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline double getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0.0) };
    inline RLFlowTransition& setMax(double max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // p50 Field Functions 
    bool hasP50() const { return this->p50_ != nullptr;};
    void deleteP50() { this->p50_ = nullptr;};
    inline double getP50() const { DARABONBA_PTR_GET_DEFAULT(p50_, 0.0) };
    inline RLFlowTransition& setP50(double p50) { DARABONBA_PTR_SET_VALUE(p50_, p50) };


    // p90 Field Functions 
    bool hasP90() const { return this->p90_ != nullptr;};
    void deleteP90() { this->p90_ = nullptr;};
    inline double getP90() const { DARABONBA_PTR_GET_DEFAULT(p90_, 0.0) };
    inline RLFlowTransition& setP90(double p90) { DARABONBA_PTR_SET_VALUE(p90_, p90) };


    // p99 Field Functions 
    bool hasP99() const { return this->p99_ != nullptr;};
    void deleteP99() { this->p99_ = nullptr;};
    inline double getP99() const { DARABONBA_PTR_GET_DEFAULT(p99_, 0.0) };
    inline RLFlowTransition& setP99(double p99) { DARABONBA_PTR_SET_VALUE(p99_, p99) };


    // slowest Field Functions 
    bool hasSlowest() const { return this->slowest_ != nullptr;};
    void deleteSlowest() { this->slowest_ = nullptr;};
    inline const vector<RLFlowSlowestItem> & getSlowest() const { DARABONBA_PTR_GET_CONST(slowest_, vector<RLFlowSlowestItem>) };
    inline vector<RLFlowSlowestItem> getSlowest() { DARABONBA_PTR_GET(slowest_, vector<RLFlowSlowestItem>) };
    inline RLFlowTransition& setSlowest(const vector<RLFlowSlowestItem> & slowest) { DARABONBA_PTR_SET_VALUE(slowest_, slowest) };
    inline RLFlowTransition& setSlowest(vector<RLFlowSlowestItem> && slowest) { DARABONBA_PTR_SET_RVALUE(slowest_, slowest) };


  protected:
    // The average duration in seconds.
    shared_ptr<double> avg_ {};
    // The number of trajectories included in the statistics.
    shared_ptr<int32_t> count_ {};
    // The phase identifier. Valid values: dispatch_wait, start_wait, env_prepare, generation, agent_finish, reward, buffer_wait, logprob, ref_logprob, advantage, update, and e2e.
    shared_ptr<string> key_ {};
    // The Chinese name of the phase.
    shared_ptr<string> label_ {};
    // The maximum duration in seconds.
    shared_ptr<double> max_ {};
    // The P50 duration in seconds.
    shared_ptr<double> p50_ {};
    // The P90 duration in seconds.
    shared_ptr<double> p90_ {};
    // The P99 duration in seconds.
    shared_ptr<double> p99_ {};
    // The slowest 5 trajectories.
    shared_ptr<vector<RLFlowSlowestItem>> slowest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
