// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPINSTANCEATTRIBUTERESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPINSTANCEATTRIBUTERESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupInstanceAttributeResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupInstanceAttributeResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupInstanceAttributeResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    DescribeMonitorGroupInstanceAttributeResponseBodyResources() = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResources(const DescribeMonitorGroupInstanceAttributeResponseBodyResources &) = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResources(DescribeMonitorGroupInstanceAttributeResponseBodyResources &&) = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupInstanceAttributeResponseBodyResources() = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResources& operator=(const DescribeMonitorGroupInstanceAttributeResponseBodyResources &) = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResources& operator=(DescribeMonitorGroupInstanceAttributeResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resource_ == nullptr; };
    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource> & resource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource>) };
    inline vector<Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource> resource() { DARABONBA_PTR_GET(resource_, vector<Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource>) };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResources& setResource(const vector<Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResources& setResource(vector<Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    std::shared_ptr<vector<Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource>> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
