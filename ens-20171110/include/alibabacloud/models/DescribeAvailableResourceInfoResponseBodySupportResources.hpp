// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeAvailableResourceInfoResponseBodySupportResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceInfoResponseBodySupportResources& obj) { 
      DARABONBA_PTR_TO_JSON(SupportResource, supportResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceInfoResponseBodySupportResources& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportResource, supportResource_);
    };
    DescribeAvailableResourceInfoResponseBodySupportResources() = default ;
    DescribeAvailableResourceInfoResponseBodySupportResources(const DescribeAvailableResourceInfoResponseBodySupportResources &) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResources(DescribeAvailableResourceInfoResponseBodySupportResources &&) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceInfoResponseBodySupportResources() = default ;
    DescribeAvailableResourceInfoResponseBodySupportResources& operator=(const DescribeAvailableResourceInfoResponseBodySupportResources &) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResources& operator=(DescribeAvailableResourceInfoResponseBodySupportResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportResource_ != nullptr; };
    // supportResource Field Functions 
    bool hasSupportResource() const { return this->supportResource_ != nullptr;};
    void deleteSupportResource() { this->supportResource_ = nullptr;};
    inline const vector<Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource> & supportResource() const { DARABONBA_PTR_GET_CONST(supportResource_, vector<Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource>) };
    inline vector<Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource> supportResource() { DARABONBA_PTR_GET(supportResource_, vector<Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource>) };
    inline DescribeAvailableResourceInfoResponseBodySupportResources& setSupportResource(const vector<Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource> & supportResource) { DARABONBA_PTR_SET_VALUE(supportResource_, supportResource) };
    inline DescribeAvailableResourceInfoResponseBodySupportResources& setSupportResource(vector<Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource> && supportResource) { DARABONBA_PTR_SET_RVALUE(supportResource_, supportResource) };


  protected:
    std::shared_ptr<vector<Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource>> supportResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
