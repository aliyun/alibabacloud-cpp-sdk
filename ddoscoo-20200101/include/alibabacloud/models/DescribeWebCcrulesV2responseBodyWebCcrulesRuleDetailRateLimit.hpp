// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESV2RESPONSEBODYWEBCCRULESRULEDETAILRATELIMIT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESV2RESPONSEBODYWEBCCRULESRULEDETAILRATELIMIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit& obj) { 
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(SubKey, subKey_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit& obj) { 
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(SubKey, subKey_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit() = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit(const DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit &) = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit(DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit &&) = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit() = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit& operator=(const DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit &) = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit& operator=(DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->interval_ != nullptr
        && this->subKey_ != nullptr && this->target_ != nullptr && this->threshold_ != nullptr && this->ttl_ != nullptr; };
    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // subKey Field Functions 
    bool hasSubKey() const { return this->subKey_ != nullptr;};
    void deleteSubKey() { this->subKey_ = nullptr;};
    inline string subKey() const { DARABONBA_PTR_GET_DEFAULT(subKey_, "") };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit& setSubKey(string subKey) { DARABONBA_PTR_SET_VALUE(subKey_, subKey) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline int32_t threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // The statistical period. Unit: seconds.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The name of the field. This parameter is required only when the Target parameter is set to header.
    std::shared_ptr<string> subKey_ = nullptr;
    // The statistical method. Valid values:
    // 
    // *   **ip**
    // *   **header**
    std::shared_ptr<string> target_ = nullptr;
    // The trigger threshold.
    std::shared_ptr<int32_t> threshold_ = nullptr;
    // The blocking duration. Unit: seconds.
    std::shared_ptr<int32_t> ttl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
