// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFRULECONFIGRATELIMIT_HPP_
#define ALIBABACLOUD_MODELS_WAFRULECONFIGRATELIMIT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafRatelimitCharacteristics.hpp>
#include <alibabacloud/models/WafRuleConfigRateLimitThreshold.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafRuleConfigRateLimit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafRuleConfigRateLimit& obj) { 
      DARABONBA_PTR_TO_JSON(Characteristics, characteristics_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(OnHit, onHit_);
      DARABONBA_PTR_TO_JSON(TTL, TTL_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, WafRuleConfigRateLimit& obj) { 
      DARABONBA_PTR_FROM_JSON(Characteristics, characteristics_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(OnHit, onHit_);
      DARABONBA_PTR_FROM_JSON(TTL, TTL_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    WafRuleConfigRateLimit() = default ;
    WafRuleConfigRateLimit(const WafRuleConfigRateLimit &) = default ;
    WafRuleConfigRateLimit(WafRuleConfigRateLimit &&) = default ;
    WafRuleConfigRateLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafRuleConfigRateLimit() = default ;
    WafRuleConfigRateLimit& operator=(const WafRuleConfigRateLimit &) = default ;
    WafRuleConfigRateLimit& operator=(WafRuleConfigRateLimit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->characteristics_ != nullptr
        && this->interval_ != nullptr && this->onHit_ != nullptr && this->TTL_ != nullptr && this->threshold_ != nullptr; };
    // characteristics Field Functions 
    bool hasCharacteristics() const { return this->characteristics_ != nullptr;};
    void deleteCharacteristics() { this->characteristics_ = nullptr;};
    inline const Models::WafRatelimitCharacteristics & characteristics() const { DARABONBA_PTR_GET_CONST(characteristics_, Models::WafRatelimitCharacteristics) };
    inline Models::WafRatelimitCharacteristics characteristics() { DARABONBA_PTR_GET(characteristics_, Models::WafRatelimitCharacteristics) };
    inline WafRuleConfigRateLimit& setCharacteristics(const Models::WafRatelimitCharacteristics & characteristics) { DARABONBA_PTR_SET_VALUE(characteristics_, characteristics) };
    inline WafRuleConfigRateLimit& setCharacteristics(Models::WafRatelimitCharacteristics && characteristics) { DARABONBA_PTR_SET_RVALUE(characteristics_, characteristics) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline WafRuleConfigRateLimit& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // onHit Field Functions 
    bool hasOnHit() const { return this->onHit_ != nullptr;};
    void deleteOnHit() { this->onHit_ = nullptr;};
    inline bool onHit() const { DARABONBA_PTR_GET_DEFAULT(onHit_, false) };
    inline WafRuleConfigRateLimit& setOnHit(bool onHit) { DARABONBA_PTR_SET_VALUE(onHit_, onHit) };


    // TTL Field Functions 
    bool hasTTL() const { return this->TTL_ != nullptr;};
    void deleteTTL() { this->TTL_ = nullptr;};
    inline int32_t TTL() const { DARABONBA_PTR_GET_DEFAULT(TTL_, 0) };
    inline WafRuleConfigRateLimit& setTTL(int32_t TTL) { DARABONBA_PTR_SET_VALUE(TTL_, TTL) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline const Models::WafRuleConfigRateLimitThreshold & threshold() const { DARABONBA_PTR_GET_CONST(threshold_, Models::WafRuleConfigRateLimitThreshold) };
    inline Models::WafRuleConfigRateLimitThreshold threshold() { DARABONBA_PTR_GET(threshold_, Models::WafRuleConfigRateLimitThreshold) };
    inline WafRuleConfigRateLimit& setThreshold(const Models::WafRuleConfigRateLimitThreshold & threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };
    inline WafRuleConfigRateLimit& setThreshold(Models::WafRuleConfigRateLimitThreshold && threshold) { DARABONBA_PTR_SET_RVALUE(threshold_, threshold) };


  protected:
    std::shared_ptr<Models::WafRatelimitCharacteristics> characteristics_ = nullptr;
    std::shared_ptr<int32_t> interval_ = nullptr;
    std::shared_ptr<bool> onHit_ = nullptr;
    std::shared_ptr<int32_t> TTL_ = nullptr;
    std::shared_ptr<Models::WafRuleConfigRateLimitThreshold> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
