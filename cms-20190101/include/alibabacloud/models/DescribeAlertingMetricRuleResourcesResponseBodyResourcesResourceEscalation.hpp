// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTINGMETRICRULERESOURCESRESPONSEBODYRESOURCESRESOURCEESCALATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTINGMETRICRULERESOURCESRESPONSEBODYRESOURCESRESOURCEESCALATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation& obj) { 
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation& obj) { 
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation() = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation(const DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation &) = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation(DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation &&) = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation() = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation& operator=(const DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation &) = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation& operator=(DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resource_ != nullptr; };
    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource> & resource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource>) };
    inline vector<Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource> resource() { DARABONBA_PTR_GET(resource_, vector<Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource>) };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation& setResource(const vector<Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation& setResource(vector<Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    std::shared_ptr<vector<Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource>> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
