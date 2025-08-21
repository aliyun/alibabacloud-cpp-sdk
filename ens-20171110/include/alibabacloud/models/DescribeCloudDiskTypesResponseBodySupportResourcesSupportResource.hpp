// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKTYPESRESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKTYPESRESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
    };
    DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource() = default ;
    DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource(const DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource &) = default ;
    DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource(DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource &&) = default ;
    DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource() = default ;
    DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource& operator=(const DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource &) = default ;
    DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource& operator=(DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->ensRegionId_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeCloudDiskTypesResponseBodySupportResourcesSupportResource& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


  protected:
    // The category of the disk.
    // 
    // *   cloud_efficiency: ultra disk.
    // *   cloud_ssd: all-flash disk.
    // *   local_hdd: local HDD.
    // *   local_ssd: local SSD.
    std::shared_ptr<string> category_ = nullptr;
    // The ID of the edge node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
