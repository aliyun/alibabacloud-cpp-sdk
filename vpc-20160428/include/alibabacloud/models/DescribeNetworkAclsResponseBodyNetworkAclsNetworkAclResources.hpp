// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODYNETWORKACLSNETWORKACLRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODYNETWORKACLSNETWORKACLRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResourcesResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources& obj) { 
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources() = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources(const DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources &) = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources(DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources &&) = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources() = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources& operator=(const DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources &) = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources& operator=(DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resource_ != nullptr; };
    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResourcesResource> & resource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResourcesResource>) };
    inline vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResourcesResource> resource() { DARABONBA_PTR_GET(resource_, vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResourcesResource>) };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources& setResource(const vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResourcesResource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources& setResource(vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResourcesResource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    std::shared_ptr<vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResourcesResource>> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
