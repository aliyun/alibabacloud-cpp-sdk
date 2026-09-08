// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLPROGRESSROLLOUT_HPP_
#define ALIBABACLOUD_MODELS_RLPROGRESSROLLOUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RLProgressProcessed.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLProgressRollout : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLProgressRollout& obj) { 
      DARABONBA_PTR_TO_JSON(Finished, finished_);
      DARABONBA_PTR_TO_JSON(Processed, processed_);
      DARABONBA_PTR_TO_JSON(RatePerMin, ratePerMin_);
    };
    friend void from_json(const Darabonba::Json& j, RLProgressRollout& obj) { 
      DARABONBA_PTR_FROM_JSON(Finished, finished_);
      DARABONBA_PTR_FROM_JSON(Processed, processed_);
      DARABONBA_PTR_FROM_JSON(RatePerMin, ratePerMin_);
    };
    RLProgressRollout() = default ;
    RLProgressRollout(const RLProgressRollout &) = default ;
    RLProgressRollout(RLProgressRollout &&) = default ;
    RLProgressRollout(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLProgressRollout() = default ;
    RLProgressRollout& operator=(const RLProgressRollout &) = default ;
    RLProgressRollout& operator=(RLProgressRollout &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->finished_ == nullptr
        && this->processed_ == nullptr && this->ratePerMin_ == nullptr; };
    // finished Field Functions 
    bool hasFinished() const { return this->finished_ != nullptr;};
    void deleteFinished() { this->finished_ = nullptr;};
    inline int32_t getFinished() const { DARABONBA_PTR_GET_DEFAULT(finished_, 0) };
    inline RLProgressRollout& setFinished(int32_t finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


    // processed Field Functions 
    bool hasProcessed() const { return this->processed_ != nullptr;};
    void deleteProcessed() { this->processed_ = nullptr;};
    inline const RLProgressProcessed & getProcessed() const { DARABONBA_PTR_GET_CONST(processed_, RLProgressProcessed) };
    inline RLProgressProcessed getProcessed() { DARABONBA_PTR_GET(processed_, RLProgressProcessed) };
    inline RLProgressRollout& setProcessed(const RLProgressProcessed & processed) { DARABONBA_PTR_SET_VALUE(processed_, processed) };
    inline RLProgressRollout& setProcessed(RLProgressProcessed && processed) { DARABONBA_PTR_SET_RVALUE(processed_, processed) };


    // ratePerMin Field Functions 
    bool hasRatePerMin() const { return this->ratePerMin_ != nullptr;};
    void deleteRatePerMin() { this->ratePerMin_ = nullptr;};
    inline double getRatePerMin() const { DARABONBA_PTR_GET_DEFAULT(ratePerMin_, 0.0) };
    inline RLProgressRollout& setRatePerMin(double ratePerMin) { DARABONBA_PTR_SET_VALUE(ratePerMin_, ratePerMin) };


  protected:
    // 窗口内完成总数
    shared_ptr<int32_t> finished_ {};
    // rollout 已处理计数
    shared_ptr<RLProgressProcessed> processed_ {};
    // 完成速率（条/分钟），由最近 120 条完成事件估算
    shared_ptr<double> ratePerMin_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
