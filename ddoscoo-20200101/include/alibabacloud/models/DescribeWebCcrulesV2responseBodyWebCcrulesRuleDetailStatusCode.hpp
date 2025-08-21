// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESV2RESPONSEBODYWEBCCRULESRULEDETAILSTATUSCODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESV2RESPONSEBODYWEBCCRULESRULEDETAILSTATUSCODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CountThreshold, countThreshold_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(RatioThreshold, ratioThreshold_);
      DARABONBA_PTR_TO_JSON(UseRatio, useRatio_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CountThreshold, countThreshold_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(RatioThreshold, ratioThreshold_);
      DARABONBA_PTR_FROM_JSON(UseRatio, useRatio_);
    };
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode() = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode(const DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode &) = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode(DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode &&) = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode() = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode& operator=(const DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode &) = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode& operator=(DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->countThreshold_ != nullptr && this->enabled_ != nullptr && this->ratioThreshold_ != nullptr && this->useRatio_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // countThreshold Field Functions 
    bool hasCountThreshold() const { return this->countThreshold_ != nullptr;};
    void deleteCountThreshold() { this->countThreshold_ = nullptr;};
    inline int32_t countThreshold() const { DARABONBA_PTR_GET_DEFAULT(countThreshold_, 0) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode& setCountThreshold(int32_t countThreshold) { DARABONBA_PTR_SET_VALUE(countThreshold_, countThreshold) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // ratioThreshold Field Functions 
    bool hasRatioThreshold() const { return this->ratioThreshold_ != nullptr;};
    void deleteRatioThreshold() { this->ratioThreshold_ = nullptr;};
    inline int32_t ratioThreshold() const { DARABONBA_PTR_GET_DEFAULT(ratioThreshold_, 0) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode& setRatioThreshold(int32_t ratioThreshold) { DARABONBA_PTR_SET_VALUE(ratioThreshold_, ratioThreshold) };


    // useRatio Field Functions 
    bool hasUseRatio() const { return this->useRatio_ != nullptr;};
    void deleteUseRatio() { this->useRatio_ = nullptr;};
    inline bool useRatio() const { DARABONBA_PTR_GET_DEFAULT(useRatio_, false) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode& setUseRatio(bool useRatio) { DARABONBA_PTR_SET_VALUE(useRatio_, useRatio) };


  protected:
    // The status code. Valid values: **100** to **599**.
    // 
    // *   **200**: The request was successful.
    // *   Other codes: The request failed.
    std::shared_ptr<int32_t> code_ = nullptr;
    // If a ratio is not used, the handling action is triggered only when the number of requests of the corresponding status code reaches the value of **CountThreshold**. Valid values: **2** to **50000**.
    std::shared_ptr<int32_t> countThreshold_ = nullptr;
    // Indicates whether the status code is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enabled_ = nullptr;
    // If a ratio is used, the handling action is triggered only when the number of requests of the corresponding status code reaches the value of **RatioThreshold**. Valid values: **1** to **100**.
    std::shared_ptr<int32_t> ratioThreshold_ = nullptr;
    // Indicates whether to use a ratio.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> useRatio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
