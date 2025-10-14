// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFRULECONFIGRATELIMITTHRESHOLDRESPONSESTATUS_HPP_
#define ALIBABACLOUD_MODELS_WAFRULECONFIGRATELIMITTHRESHOLDRESPONSESTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafRuleConfigRateLimitThresholdResponseStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafRuleConfigRateLimitThresholdResponseStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Ratio, ratio_);
    };
    friend void from_json(const Darabonba::Json& j, WafRuleConfigRateLimitThresholdResponseStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
    };
    WafRuleConfigRateLimitThresholdResponseStatus() = default ;
    WafRuleConfigRateLimitThresholdResponseStatus(const WafRuleConfigRateLimitThresholdResponseStatus &) = default ;
    WafRuleConfigRateLimitThresholdResponseStatus(WafRuleConfigRateLimitThresholdResponseStatus &&) = default ;
    WafRuleConfigRateLimitThresholdResponseStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafRuleConfigRateLimitThresholdResponseStatus() = default ;
    WafRuleConfigRateLimitThresholdResponseStatus& operator=(const WafRuleConfigRateLimitThresholdResponseStatus &) = default ;
    WafRuleConfigRateLimitThresholdResponseStatus& operator=(WafRuleConfigRateLimitThresholdResponseStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->count_ == nullptr && return this->ratio_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline WafRuleConfigRateLimitThresholdResponseStatus& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline WafRuleConfigRateLimitThresholdResponseStatus& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline int32_t ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0) };
    inline WafRuleConfigRateLimitThresholdResponseStatus& setRatio(int32_t ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<int32_t> ratio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
