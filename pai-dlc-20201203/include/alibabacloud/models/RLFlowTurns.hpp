// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLFLOWTURNS_HPP_
#define ALIBABACLOUD_MODELS_RLFLOWTURNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLFlowTurns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLFlowTurns& obj) { 
      DARABONBA_PTR_TO_JSON(Avg, avg_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Max, max_);
      DARABONBA_PTR_TO_JSON(P50, p50_);
      DARABONBA_PTR_TO_JSON(P90, p90_);
    };
    friend void from_json(const Darabonba::Json& j, RLFlowTurns& obj) { 
      DARABONBA_PTR_FROM_JSON(Avg, avg_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Max, max_);
      DARABONBA_PTR_FROM_JSON(P50, p50_);
      DARABONBA_PTR_FROM_JSON(P90, p90_);
    };
    RLFlowTurns() = default ;
    RLFlowTurns(const RLFlowTurns &) = default ;
    RLFlowTurns(RLFlowTurns &&) = default ;
    RLFlowTurns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLFlowTurns() = default ;
    RLFlowTurns& operator=(const RLFlowTurns &) = default ;
    RLFlowTurns& operator=(RLFlowTurns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avg_ == nullptr
        && this->count_ == nullptr && this->max_ == nullptr && this->p50_ == nullptr && this->p90_ == nullptr; };
    // avg Field Functions 
    bool hasAvg() const { return this->avg_ != nullptr;};
    void deleteAvg() { this->avg_ = nullptr;};
    inline double getAvg() const { DARABONBA_PTR_GET_DEFAULT(avg_, 0.0) };
    inline RLFlowTurns& setAvg(double avg) { DARABONBA_PTR_SET_VALUE(avg_, avg) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline RLFlowTurns& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline int32_t getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
    inline RLFlowTurns& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // p50 Field Functions 
    bool hasP50() const { return this->p50_ != nullptr;};
    void deleteP50() { this->p50_ = nullptr;};
    inline int32_t getP50() const { DARABONBA_PTR_GET_DEFAULT(p50_, 0) };
    inline RLFlowTurns& setP50(int32_t p50) { DARABONBA_PTR_SET_VALUE(p50_, p50) };


    // p90 Field Functions 
    bool hasP90() const { return this->p90_ != nullptr;};
    void deleteP90() { this->p90_ = nullptr;};
    inline int32_t getP90() const { DARABONBA_PTR_GET_DEFAULT(p90_, 0) };
    inline RLFlowTurns& setP90(int32_t p90) { DARABONBA_PTR_SET_VALUE(p90_, p90) };


  protected:
    // 平均生成轮数
    shared_ptr<double> avg_ {};
    // 参与统计的轨迹数
    shared_ptr<int32_t> count_ {};
    // 最大生成轮数
    shared_ptr<int32_t> max_ {};
    // 生成轮数 P50
    shared_ptr<int32_t> p50_ {};
    // 生成轮数 P90
    shared_ptr<int32_t> p90_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
