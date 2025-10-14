// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESERVEDRESOURCERESPONSEBODYSUPPORTRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESERVEDRESOURCERESPONSEBODYSUPPORTRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReservedResourceResponseBodySupportResourcesSupportResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeReservedResourceResponseBodySupportResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReservedResourceResponseBodySupportResources& obj) { 
      DARABONBA_PTR_TO_JSON(SupportResource, supportResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReservedResourceResponseBodySupportResources& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportResource, supportResource_);
    };
    DescribeReservedResourceResponseBodySupportResources() = default ;
    DescribeReservedResourceResponseBodySupportResources(const DescribeReservedResourceResponseBodySupportResources &) = default ;
    DescribeReservedResourceResponseBodySupportResources(DescribeReservedResourceResponseBodySupportResources &&) = default ;
    DescribeReservedResourceResponseBodySupportResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReservedResourceResponseBodySupportResources() = default ;
    DescribeReservedResourceResponseBodySupportResources& operator=(const DescribeReservedResourceResponseBodySupportResources &) = default ;
    DescribeReservedResourceResponseBodySupportResources& operator=(DescribeReservedResourceResponseBodySupportResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->supportResource_ == nullptr; };
    // supportResource Field Functions 
    bool hasSupportResource() const { return this->supportResource_ != nullptr;};
    void deleteSupportResource() { this->supportResource_ = nullptr;};
    inline const vector<Models::DescribeReservedResourceResponseBodySupportResourcesSupportResource> & supportResource() const { DARABONBA_PTR_GET_CONST(supportResource_, vector<Models::DescribeReservedResourceResponseBodySupportResourcesSupportResource>) };
    inline vector<Models::DescribeReservedResourceResponseBodySupportResourcesSupportResource> supportResource() { DARABONBA_PTR_GET(supportResource_, vector<Models::DescribeReservedResourceResponseBodySupportResourcesSupportResource>) };
    inline DescribeReservedResourceResponseBodySupportResources& setSupportResource(const vector<Models::DescribeReservedResourceResponseBodySupportResourcesSupportResource> & supportResource) { DARABONBA_PTR_SET_VALUE(supportResource_, supportResource) };
    inline DescribeReservedResourceResponseBodySupportResources& setSupportResource(vector<Models::DescribeReservedResourceResponseBodySupportResourcesSupportResource> && supportResource) { DARABONBA_PTR_SET_RVALUE(supportResource_, supportResource) };


  protected:
    std::shared_ptr<vector<Models::DescribeReservedResourceResponseBodySupportResourcesSupportResource>> supportResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
