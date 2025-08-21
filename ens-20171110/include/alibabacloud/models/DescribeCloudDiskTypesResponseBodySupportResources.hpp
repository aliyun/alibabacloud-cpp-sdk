// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKTYPESRESPONSEBODYSUPPORTRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKTYPESRESPONSEBODYSUPPORTRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeCloudDiskTypesResponseBodySupportResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDiskTypesResponseBodySupportResources& obj) { 
      DARABONBA_PTR_TO_JSON(SupportResource, supportResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDiskTypesResponseBodySupportResources& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportResource, supportResource_);
    };
    DescribeCloudDiskTypesResponseBodySupportResources() = default ;
    DescribeCloudDiskTypesResponseBodySupportResources(const DescribeCloudDiskTypesResponseBodySupportResources &) = default ;
    DescribeCloudDiskTypesResponseBodySupportResources(DescribeCloudDiskTypesResponseBodySupportResources &&) = default ;
    DescribeCloudDiskTypesResponseBodySupportResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDiskTypesResponseBodySupportResources() = default ;
    DescribeCloudDiskTypesResponseBodySupportResources& operator=(const DescribeCloudDiskTypesResponseBodySupportResources &) = default ;
    DescribeCloudDiskTypesResponseBodySupportResources& operator=(DescribeCloudDiskTypesResponseBodySupportResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportResource_ != nullptr; };
    // supportResource Field Functions 
    bool hasSupportResource() const { return this->supportResource_ != nullptr;};
    void deleteSupportResource() { this->supportResource_ = nullptr;};
    inline const vector<Models::DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource> & supportResource() const { DARABONBA_PTR_GET_CONST(supportResource_, vector<Models::DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource>) };
    inline vector<Models::DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource> supportResource() { DARABONBA_PTR_GET(supportResource_, vector<Models::DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource>) };
    inline DescribeCloudDiskTypesResponseBodySupportResources& setSupportResource(const vector<Models::DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource> & supportResource) { DARABONBA_PTR_SET_VALUE(supportResource_, supportResource) };
    inline DescribeCloudDiskTypesResponseBodySupportResources& setSupportResource(vector<Models::DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource> && supportResource) { DARABONBA_PTR_SET_RVALUE(supportResource_, supportResource) };


  protected:
    std::shared_ptr<vector<Models::DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource>> supportResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
