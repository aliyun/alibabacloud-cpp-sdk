// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULEBLACKLISTRESPONSEBODYDESCRIBEMETRICRULEBLACKLISTMETRICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULEBLACKLISTRESPONSEBODYDESCRIBEMETRICRULEBLACKLISTMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics() = default ;
    DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics(const DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics &) = default ;
    DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics(DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics &&) = default ;
    DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics() = default ;
    DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics& operator=(const DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics &) = default ;
    DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics& operator=(DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metricName_ == nullptr
        && return this->resource_ == nullptr; };
    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


  protected:
    // The metric name.
    std::shared_ptr<string> metricName_ = nullptr;
    // The extended dimension of the instance. For example, `{"device":"C:"}` specifies that the blacklist policy is applied to all C disks of the specified Elastic Compute Service (ECS) instance.
    std::shared_ptr<string> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
