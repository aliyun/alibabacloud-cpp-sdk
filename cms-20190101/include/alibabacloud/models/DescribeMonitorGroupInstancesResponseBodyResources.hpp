// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPINSTANCESRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPINSTANCESRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMonitorGroupInstancesResponseBodyResourcesResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupInstancesResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupInstancesResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupInstancesResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    DescribeMonitorGroupInstancesResponseBodyResources() = default ;
    DescribeMonitorGroupInstancesResponseBodyResources(const DescribeMonitorGroupInstancesResponseBodyResources &) = default ;
    DescribeMonitorGroupInstancesResponseBodyResources(DescribeMonitorGroupInstancesResponseBodyResources &&) = default ;
    DescribeMonitorGroupInstancesResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupInstancesResponseBodyResources() = default ;
    DescribeMonitorGroupInstancesResponseBodyResources& operator=(const DescribeMonitorGroupInstancesResponseBodyResources &) = default ;
    DescribeMonitorGroupInstancesResponseBodyResources& operator=(DescribeMonitorGroupInstancesResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resource_ != nullptr; };
    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<Models::DescribeMonitorGroupInstancesResponseBodyResourcesResource> & resource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Models::DescribeMonitorGroupInstancesResponseBodyResourcesResource>) };
    inline vector<Models::DescribeMonitorGroupInstancesResponseBodyResourcesResource> resource() { DARABONBA_PTR_GET(resource_, vector<Models::DescribeMonitorGroupInstancesResponseBodyResourcesResource>) };
    inline DescribeMonitorGroupInstancesResponseBodyResources& setResource(const vector<Models::DescribeMonitorGroupInstancesResponseBodyResourcesResource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline DescribeMonitorGroupInstancesResponseBodyResources& setResource(vector<Models::DescribeMonitorGroupInstancesResponseBodyResourcesResource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    std::shared_ptr<vector<Models::DescribeMonitorGroupInstancesResponseBodyResourcesResource>> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
