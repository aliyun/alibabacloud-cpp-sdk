// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENVDROPMETRICSRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENVDROPMETRICSRULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeEnvDropMetricsRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnvDropMetricsRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DropMetrics, dropMetrics_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnvDropMetricsRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DropMetrics, dropMetrics_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    DescribeEnvDropMetricsRuleResponseBodyData() = default ;
    DescribeEnvDropMetricsRuleResponseBodyData(const DescribeEnvDropMetricsRuleResponseBodyData &) = default ;
    DescribeEnvDropMetricsRuleResponseBodyData(DescribeEnvDropMetricsRuleResponseBodyData &&) = default ;
    DescribeEnvDropMetricsRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnvDropMetricsRuleResponseBodyData() = default ;
    DescribeEnvDropMetricsRuleResponseBodyData& operator=(const DescribeEnvDropMetricsRuleResponseBodyData &) = default ;
    DescribeEnvDropMetricsRuleResponseBodyData& operator=(DescribeEnvDropMetricsRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dropMetrics_ != nullptr
        && this->ruleName_ != nullptr; };
    // dropMetrics Field Functions 
    bool hasDropMetrics() const { return this->dropMetrics_ != nullptr;};
    void deleteDropMetrics() { this->dropMetrics_ = nullptr;};
    inline string dropMetrics() const { DARABONBA_PTR_GET_DEFAULT(dropMetrics_, "") };
    inline DescribeEnvDropMetricsRuleResponseBodyData& setDropMetrics(string dropMetrics) { DARABONBA_PTR_SET_VALUE(dropMetrics_, dropMetrics) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeEnvDropMetricsRuleResponseBodyData& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    std::shared_ptr<string> dropMetrics_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
