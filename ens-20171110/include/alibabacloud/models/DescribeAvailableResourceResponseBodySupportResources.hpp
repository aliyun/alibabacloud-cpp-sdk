// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYSUPPORTRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYSUPPORTRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableResourceResponseBodySupportResourcesSupportResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeAvailableResourceResponseBodySupportResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBodySupportResources& obj) { 
      DARABONBA_PTR_TO_JSON(SupportResource, supportResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBodySupportResources& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportResource, supportResource_);
    };
    DescribeAvailableResourceResponseBodySupportResources() = default ;
    DescribeAvailableResourceResponseBodySupportResources(const DescribeAvailableResourceResponseBodySupportResources &) = default ;
    DescribeAvailableResourceResponseBodySupportResources(DescribeAvailableResourceResponseBodySupportResources &&) = default ;
    DescribeAvailableResourceResponseBodySupportResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBodySupportResources() = default ;
    DescribeAvailableResourceResponseBodySupportResources& operator=(const DescribeAvailableResourceResponseBodySupportResources &) = default ;
    DescribeAvailableResourceResponseBodySupportResources& operator=(DescribeAvailableResourceResponseBodySupportResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->supportResource_ == nullptr; };
    // supportResource Field Functions 
    bool hasSupportResource() const { return this->supportResource_ != nullptr;};
    void deleteSupportResource() { this->supportResource_ = nullptr;};
    inline const vector<Models::DescribeAvailableResourceResponseBodySupportResourcesSupportResource> & supportResource() const { DARABONBA_PTR_GET_CONST(supportResource_, vector<Models::DescribeAvailableResourceResponseBodySupportResourcesSupportResource>) };
    inline vector<Models::DescribeAvailableResourceResponseBodySupportResourcesSupportResource> supportResource() { DARABONBA_PTR_GET(supportResource_, vector<Models::DescribeAvailableResourceResponseBodySupportResourcesSupportResource>) };
    inline DescribeAvailableResourceResponseBodySupportResources& setSupportResource(const vector<Models::DescribeAvailableResourceResponseBodySupportResourcesSupportResource> & supportResource) { DARABONBA_PTR_SET_VALUE(supportResource_, supportResource) };
    inline DescribeAvailableResourceResponseBodySupportResources& setSupportResource(vector<Models::DescribeAvailableResourceResponseBodySupportResourcesSupportResource> && supportResource) { DARABONBA_PTR_SET_RVALUE(supportResource_, supportResource) };


  protected:
    std::shared_ptr<vector<Models::DescribeAvailableResourceResponseBodySupportResourcesSupportResource>> supportResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
