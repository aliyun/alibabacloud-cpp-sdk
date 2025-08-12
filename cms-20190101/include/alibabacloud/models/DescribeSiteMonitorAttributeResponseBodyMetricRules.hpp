// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYMETRICRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYMETRICRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorAttributeResponseBodyMetricRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodyMetricRules& obj) { 
      DARABONBA_PTR_TO_JSON(MetricRule, metricRule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodyMetricRules& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricRule, metricRule_);
    };
    DescribeSiteMonitorAttributeResponseBodyMetricRules() = default ;
    DescribeSiteMonitorAttributeResponseBodyMetricRules(const DescribeSiteMonitorAttributeResponseBodyMetricRules &) = default ;
    DescribeSiteMonitorAttributeResponseBodyMetricRules(DescribeSiteMonitorAttributeResponseBodyMetricRules &&) = default ;
    DescribeSiteMonitorAttributeResponseBodyMetricRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodyMetricRules() = default ;
    DescribeSiteMonitorAttributeResponseBodyMetricRules& operator=(const DescribeSiteMonitorAttributeResponseBodyMetricRules &) = default ;
    DescribeSiteMonitorAttributeResponseBodyMetricRules& operator=(DescribeSiteMonitorAttributeResponseBodyMetricRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metricRule_ != nullptr; };
    // metricRule Field Functions 
    bool hasMetricRule() const { return this->metricRule_ != nullptr;};
    void deleteMetricRule() { this->metricRule_ = nullptr;};
    inline const vector<Models::DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule> & metricRule() const { DARABONBA_PTR_GET_CONST(metricRule_, vector<Models::DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule>) };
    inline vector<Models::DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule> metricRule() { DARABONBA_PTR_GET(metricRule_, vector<Models::DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule>) };
    inline DescribeSiteMonitorAttributeResponseBodyMetricRules& setMetricRule(const vector<Models::DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule> & metricRule) { DARABONBA_PTR_SET_VALUE(metricRule_, metricRule) };
    inline DescribeSiteMonitorAttributeResponseBodyMetricRules& setMetricRule(vector<Models::DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule> && metricRule) { DARABONBA_PTR_SET_RVALUE(metricRule_, metricRule) };


  protected:
    std::shared_ptr<vector<Models::DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule>> metricRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
