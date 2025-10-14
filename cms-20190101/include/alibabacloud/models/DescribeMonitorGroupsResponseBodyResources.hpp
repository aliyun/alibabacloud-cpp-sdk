// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMonitorGroupsResponseBodyResourcesResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupsResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupsResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupsResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    DescribeMonitorGroupsResponseBodyResources() = default ;
    DescribeMonitorGroupsResponseBodyResources(const DescribeMonitorGroupsResponseBodyResources &) = default ;
    DescribeMonitorGroupsResponseBodyResources(DescribeMonitorGroupsResponseBodyResources &&) = default ;
    DescribeMonitorGroupsResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupsResponseBodyResources() = default ;
    DescribeMonitorGroupsResponseBodyResources& operator=(const DescribeMonitorGroupsResponseBodyResources &) = default ;
    DescribeMonitorGroupsResponseBodyResources& operator=(DescribeMonitorGroupsResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resource_ == nullptr; };
    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<Models::DescribeMonitorGroupsResponseBodyResourcesResource> & resource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Models::DescribeMonitorGroupsResponseBodyResourcesResource>) };
    inline vector<Models::DescribeMonitorGroupsResponseBodyResourcesResource> resource() { DARABONBA_PTR_GET(resource_, vector<Models::DescribeMonitorGroupsResponseBodyResourcesResource>) };
    inline DescribeMonitorGroupsResponseBodyResources& setResource(const vector<Models::DescribeMonitorGroupsResponseBodyResourcesResource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline DescribeMonitorGroupsResponseBodyResources& setResource(vector<Models::DescribeMonitorGroupsResponseBodyResourcesResource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    std::shared_ptr<vector<Models::DescribeMonitorGroupsResponseBodyResourcesResource>> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
