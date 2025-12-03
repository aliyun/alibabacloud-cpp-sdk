// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLERESOURCESAVAILABLERESOURCESUPPORTRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLERESOURCESAVAILABLERESOURCESUPPORTRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources& obj) { 
      DARABONBA_PTR_TO_JSON(SupportResource, supportResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportResource, supportResource_);
    };
    DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources() = default ;
    DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources(const DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources &) = default ;
    DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources(DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources &&) = default ;
    DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources() = default ;
    DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources& operator=(const DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources &) = default ;
    DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources& operator=(DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->supportResource_ == nullptr; };
    // supportResource Field Functions 
    bool hasSupportResource() const { return this->supportResource_ != nullptr;};
    void deleteSupportResource() { this->supportResource_ = nullptr;};
    inline const vector<Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource> & supportResource() const { DARABONBA_PTR_GET_CONST(supportResource_, vector<Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource>) };
    inline vector<Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource> supportResource() { DARABONBA_PTR_GET(supportResource_, vector<Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource>) };
    inline DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources& setSupportResource(const vector<Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource> & supportResource) { DARABONBA_PTR_SET_VALUE(supportResource_, supportResource) };
    inline DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources& setSupportResource(vector<Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource> && supportResource) { DARABONBA_PTR_SET_RVALUE(supportResource_, supportResource) };


  protected:
    std::shared_ptr<vector<Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource>> supportResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
