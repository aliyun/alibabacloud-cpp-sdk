// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTINGMETRICRULERESOURCESRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTINGMETRICRULERESOURCESRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertingMetricRuleResourcesResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertingMetricRuleResourcesResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertingMetricRuleResourcesResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    DescribeAlertingMetricRuleResourcesResponseBodyResources() = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResources(const DescribeAlertingMetricRuleResourcesResponseBodyResources &) = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResources(DescribeAlertingMetricRuleResourcesResponseBodyResources &&) = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertingMetricRuleResourcesResponseBodyResources() = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResources& operator=(const DescribeAlertingMetricRuleResourcesResponseBodyResources &) = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResources& operator=(DescribeAlertingMetricRuleResourcesResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resource_ == nullptr; };
    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource> & resource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource>) };
    inline vector<Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource> resource() { DARABONBA_PTR_GET(resource_, vector<Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource>) };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResources& setResource(const vector<Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResources& setResource(vector<Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    std::shared_ptr<vector<Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource>> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
