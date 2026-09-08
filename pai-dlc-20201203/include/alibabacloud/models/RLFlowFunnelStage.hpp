// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLFLOWFUNNELSTAGE_HPP_
#define ALIBABACLOUD_MODELS_RLFLOWFUNNELSTAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLFlowFunnelStage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLFlowFunnelStage& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Pct, pct_);
    };
    friend void from_json(const Darabonba::Json& j, RLFlowFunnelStage& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Pct, pct_);
    };
    RLFlowFunnelStage() = default ;
    RLFlowFunnelStage(const RLFlowFunnelStage &) = default ;
    RLFlowFunnelStage(RLFlowFunnelStage &&) = default ;
    RLFlowFunnelStage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLFlowFunnelStage() = default ;
    RLFlowFunnelStage& operator=(const RLFlowFunnelStage &) = default ;
    RLFlowFunnelStage& operator=(RLFlowFunnelStage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && this->key_ == nullptr && this->label_ == nullptr && this->pct_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline RLFlowFunnelStage& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline RLFlowFunnelStage& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline RLFlowFunnelStage& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // pct Field Functions 
    bool hasPct() const { return this->pct_ != nullptr;};
    void deletePct() { this->pct_ = nullptr;};
    inline double getPct() const { DARABONBA_PTR_GET_DEFAULT(pct_, 0.0) };
    inline RLFlowFunnelStage& setPct(double pct) { DARABONBA_PTR_SET_VALUE(pct_, pct) };


  protected:
    // The number of trajectories that reach this level.
    shared_ptr<int32_t> count_ {};
    // The level identifier. Valid values: traj, dispatch, run, rollout, reward, sampled, and trained.
    shared_ptr<string> key_ {};
    // The Chinese name of the level. Valid values: 生成轨迹, 下发到 Worker, Agent 启动, Rollout 完成, reward 打分, 采样入批, and 完成训练.
    shared_ptr<string> label_ {};
    // The percentage relative to the first traj level.
    shared_ptr<double> pct_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
