// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKACLATTRIBUTESRESPONSEBODYNETWORKACLATTRIBUTERESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKACLATTRIBUTESRESPONSEBODYNETWORKACLATTRIBUTERESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources& obj) { 
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources() = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources(const DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources &) = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources(DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources &&) = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources() = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources& operator=(const DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources &) = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources& operator=(DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resource_ == nullptr; };
    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource> & resource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource>) };
    inline vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource> resource() { DARABONBA_PTR_GET(resource_, vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource>) };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources& setResource(const vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources& setResource(vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    std::shared_ptr<vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource>> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
