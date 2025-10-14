// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource& obj) { 
      DARABONBA_PTR_TO_JSON(Ability, ability_);
      DARABONBA_PTR_TO_JSON(CanBuyCount, canBuyCount_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DefaultDiskSize, defaultDiskSize_);
      DARABONBA_PTR_TO_JSON(DiskMaxSize, diskMaxSize_);
      DARABONBA_PTR_TO_JSON(DiskMinSize, diskMinSize_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(EnsRegionName, ensRegionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Ability, ability_);
      DARABONBA_PTR_FROM_JSON(CanBuyCount, canBuyCount_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DefaultDiskSize, defaultDiskSize_);
      DARABONBA_PTR_FROM_JSON(DiskMaxSize, diskMaxSize_);
      DARABONBA_PTR_FROM_JSON(DiskMinSize, diskMinSize_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(EnsRegionName, ensRegionName_);
    };
    DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource() = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource(const DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource &) = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource(DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource &&) = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource() = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource& operator=(const DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource &) = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource& operator=(DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ability_ == nullptr
        && return this->canBuyCount_ == nullptr && return this->category_ == nullptr && return this->defaultDiskSize_ == nullptr && return this->diskMaxSize_ == nullptr && return this->diskMinSize_ == nullptr
        && return this->ensRegionId_ == nullptr && return this->ensRegionName_ == nullptr; };
    // ability Field Functions 
    bool hasAbility() const { return this->ability_ != nullptr;};
    void deleteAbility() { this->ability_ = nullptr;};
    inline const Models::DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility & ability() const { DARABONBA_PTR_GET_CONST(ability_, Models::DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility) };
    inline Models::DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility ability() { DARABONBA_PTR_GET(ability_, Models::DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility) };
    inline DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource& setAbility(const Models::DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility & ability) { DARABONBA_PTR_SET_VALUE(ability_, ability) };
    inline DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource& setAbility(Models::DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility && ability) { DARABONBA_PTR_SET_RVALUE(ability_, ability) };


    // canBuyCount Field Functions 
    bool hasCanBuyCount() const { return this->canBuyCount_ != nullptr;};
    void deleteCanBuyCount() { this->canBuyCount_ = nullptr;};
    inline int64_t canBuyCount() const { DARABONBA_PTR_GET_DEFAULT(canBuyCount_, 0L) };
    inline DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource& setCanBuyCount(int64_t canBuyCount) { DARABONBA_PTR_SET_VALUE(canBuyCount_, canBuyCount) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // defaultDiskSize Field Functions 
    bool hasDefaultDiskSize() const { return this->defaultDiskSize_ != nullptr;};
    void deleteDefaultDiskSize() { this->defaultDiskSize_ = nullptr;};
    inline int64_t defaultDiskSize() const { DARABONBA_PTR_GET_DEFAULT(defaultDiskSize_, 0L) };
    inline DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource& setDefaultDiskSize(int64_t defaultDiskSize) { DARABONBA_PTR_SET_VALUE(defaultDiskSize_, defaultDiskSize) };


    // diskMaxSize Field Functions 
    bool hasDiskMaxSize() const { return this->diskMaxSize_ != nullptr;};
    void deleteDiskMaxSize() { this->diskMaxSize_ = nullptr;};
    inline int64_t diskMaxSize() const { DARABONBA_PTR_GET_DEFAULT(diskMaxSize_, 0L) };
    inline DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource& setDiskMaxSize(int64_t diskMaxSize) { DARABONBA_PTR_SET_VALUE(diskMaxSize_, diskMaxSize) };


    // diskMinSize Field Functions 
    bool hasDiskMinSize() const { return this->diskMinSize_ != nullptr;};
    void deleteDiskMinSize() { this->diskMinSize_ = nullptr;};
    inline int64_t diskMinSize() const { DARABONBA_PTR_GET_DEFAULT(diskMinSize_, 0L) };
    inline DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource& setDiskMinSize(int64_t diskMinSize) { DARABONBA_PTR_SET_VALUE(diskMinSize_, diskMinSize) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // ensRegionName Field Functions 
    bool hasEnsRegionName() const { return this->ensRegionName_ != nullptr;};
    void deleteEnsRegionName() { this->ensRegionName_ = nullptr;};
    inline string ensRegionName() const { DARABONBA_PTR_GET_DEFAULT(ensRegionName_, "") };
    inline DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResource& setEnsRegionName(string ensRegionName) { DARABONBA_PTR_SET_VALUE(ensRegionName_, ensRegionName) };


  protected:
    // Node product capability.
    std::shared_ptr<Models::DescribeCloudDiskAvailableResourceInfoResponseBodySupportResourcesSupportResourceAbility> ability_ = nullptr;
    // The number of disks that you can purchase.
    std::shared_ptr<int64_t> canBuyCount_ = nullptr;
    // The type of the disk.
    // 
    // *   cloud_efficiency:ultra disk.
    // *   cloud_ssd:all-flash disk.
    // *   local_hdd:local HDD.
    // *   local_ssd:local SSD.
    std::shared_ptr<string> category_ = nullptr;
    // The default size of the disk. Unit: GiB.
    std::shared_ptr<int64_t> defaultDiskSize_ = nullptr;
    // The maximum size of the disk. Unit: GiB.
    std::shared_ptr<int64_t> diskMaxSize_ = nullptr;
    // The minimum size of the disk size. Unit: GiB.
    std::shared_ptr<int64_t> diskMinSize_ = nullptr;
    // The ID of the edge node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The name of the task node.
    std::shared_ptr<string> ensRegionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
