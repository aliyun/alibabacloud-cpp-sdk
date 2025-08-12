// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMETRICRULEBLACKLISTREQUESTMETRICS_HPP_
#define ALIBABACLOUD_MODELS_CREATEMETRICRULEBLACKLISTREQUESTMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateMetricRuleBlackListRequestMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMetricRuleBlackListRequestMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMetricRuleBlackListRequestMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    CreateMetricRuleBlackListRequestMetrics() = default ;
    CreateMetricRuleBlackListRequestMetrics(const CreateMetricRuleBlackListRequestMetrics &) = default ;
    CreateMetricRuleBlackListRequestMetrics(CreateMetricRuleBlackListRequestMetrics &&) = default ;
    CreateMetricRuleBlackListRequestMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMetricRuleBlackListRequestMetrics() = default ;
    CreateMetricRuleBlackListRequestMetrics& operator=(const CreateMetricRuleBlackListRequestMetrics &) = default ;
    CreateMetricRuleBlackListRequestMetrics& operator=(CreateMetricRuleBlackListRequestMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metricName_ != nullptr
        && this->resource_ != nullptr; };
    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline CreateMetricRuleBlackListRequestMetrics& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline CreateMetricRuleBlackListRequestMetrics& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


  protected:
    // The metric name.
    // 
    // Valid values of N: 1 to 10.
    // 
    // This parameter is required.
    std::shared_ptr<string> metricName_ = nullptr;
    // The extended dimension of the instance. For example, `{"device":"C:"}` specifies that the blacklist policy is applied to all C disks of the specified Elastic Compute Service (ECS) instance.
    // 
    // Valid values of N: 1 to 10.
    std::shared_ptr<string> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
