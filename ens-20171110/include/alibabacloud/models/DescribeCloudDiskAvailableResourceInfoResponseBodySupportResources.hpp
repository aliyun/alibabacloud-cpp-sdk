// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources& obj) { 
      DARABONBA_PTR_TO_JSON(SupportResource, supportResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportResource, supportResource_);
    };
    DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources() = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources(const DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources &) = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources(DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources &&) = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources() = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources& operator=(const DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources &) = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources& operator=(DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportResource_ != nullptr; };
    // supportResource Field Functions 
    bool hasSupportResource() const { return this->supportResource_ != nullptr;};
    void deleteSupportResource() { this->supportResource_ = nullptr;};
    inline const vector<Models::DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource> & supportResource() const { DARABONBA_PTR_GET_CONST(supportResource_, vector<Models::DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource>) };
    inline vector<Models::DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource> supportResource() { DARABONBA_PTR_GET(supportResource_, vector<Models::DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource>) };
    inline DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources& setSupportResource(const vector<Models::DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource> & supportResource) { DARABONBA_PTR_SET_VALUE(supportResource_, supportResource) };
    inline DescribeCloudDiskAvailableResourceInfoResponseBodySupportResources& setSupportResource(vector<Models::DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource> && supportResource) { DARABONBA_PTR_SET_RVALUE(supportResource_, supportResource) };


  protected:
    std::shared_ptr<vector<Models::DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource>> supportResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
