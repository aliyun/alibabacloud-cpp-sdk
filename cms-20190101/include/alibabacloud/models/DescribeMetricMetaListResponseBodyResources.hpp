// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICMETALISTRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICMETALISTRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetricMetaListResponseBodyResourcesResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricMetaListResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricMetaListResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricMetaListResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    DescribeMetricMetaListResponseBodyResources() = default ;
    DescribeMetricMetaListResponseBodyResources(const DescribeMetricMetaListResponseBodyResources &) = default ;
    DescribeMetricMetaListResponseBodyResources(DescribeMetricMetaListResponseBodyResources &&) = default ;
    DescribeMetricMetaListResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricMetaListResponseBodyResources() = default ;
    DescribeMetricMetaListResponseBodyResources& operator=(const DescribeMetricMetaListResponseBodyResources &) = default ;
    DescribeMetricMetaListResponseBodyResources& operator=(DescribeMetricMetaListResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resource_ != nullptr; };
    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<Models::DescribeMetricMetaListResponseBodyResourcesResource> & resource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Models::DescribeMetricMetaListResponseBodyResourcesResource>) };
    inline vector<Models::DescribeMetricMetaListResponseBodyResourcesResource> resource() { DARABONBA_PTR_GET(resource_, vector<Models::DescribeMetricMetaListResponseBodyResourcesResource>) };
    inline DescribeMetricMetaListResponseBodyResources& setResource(const vector<Models::DescribeMetricMetaListResponseBodyResourcesResource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline DescribeMetricMetaListResponseBodyResources& setResource(vector<Models::DescribeMetricMetaListResponseBodyResourcesResource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    std::shared_ptr<vector<Models::DescribeMetricMetaListResponseBodyResourcesResource>> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
