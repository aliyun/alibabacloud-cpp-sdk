// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERSRESPONSEBODYDEDICATEDBLOCKSTORAGECLUSTERSDEDICATEDBLOCKSTORAGECLUSTERCAPACITY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERSRESPONSEBODYDEDICATEDBLOCKSTORAGECLUSTERSDEDICATEDBLOCKSTORAGECLUSTERCAPACITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableCapacity, availableCapacity_);
      DARABONBA_PTR_TO_JSON(AvailableDeviceCapacity, availableDeviceCapacity_);
      DARABONBA_PTR_TO_JSON(AvailableSpaceCapacity, availableSpaceCapacity_);
      DARABONBA_PTR_TO_JSON(ClusterAvailableCapacity, clusterAvailableCapacity_);
      DARABONBA_PTR_TO_JSON(ClusterDeliveryCapacity, clusterDeliveryCapacity_);
      DARABONBA_PTR_TO_JSON(DeliveryCapacity, deliveryCapacity_);
      DARABONBA_PTR_TO_JSON(TotalCapacity, totalCapacity_);
      DARABONBA_PTR_TO_JSON(TotalDeviceCapacity, totalDeviceCapacity_);
      DARABONBA_PTR_TO_JSON(TotalSpaceCapacity, totalSpaceCapacity_);
      DARABONBA_PTR_TO_JSON(UsedCapacity, usedCapacity_);
      DARABONBA_PTR_TO_JSON(UsedDeviceCapacity, usedDeviceCapacity_);
      DARABONBA_PTR_TO_JSON(UsedSpaceCapacity, usedSpaceCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableCapacity, availableCapacity_);
      DARABONBA_PTR_FROM_JSON(AvailableDeviceCapacity, availableDeviceCapacity_);
      DARABONBA_PTR_FROM_JSON(AvailableSpaceCapacity, availableSpaceCapacity_);
      DARABONBA_PTR_FROM_JSON(ClusterAvailableCapacity, clusterAvailableCapacity_);
      DARABONBA_PTR_FROM_JSON(ClusterDeliveryCapacity, clusterDeliveryCapacity_);
      DARABONBA_PTR_FROM_JSON(DeliveryCapacity, deliveryCapacity_);
      DARABONBA_PTR_FROM_JSON(TotalCapacity, totalCapacity_);
      DARABONBA_PTR_FROM_JSON(TotalDeviceCapacity, totalDeviceCapacity_);
      DARABONBA_PTR_FROM_JSON(TotalSpaceCapacity, totalSpaceCapacity_);
      DARABONBA_PTR_FROM_JSON(UsedCapacity, usedCapacity_);
      DARABONBA_PTR_FROM_JSON(UsedDeviceCapacity, usedDeviceCapacity_);
      DARABONBA_PTR_FROM_JSON(UsedSpaceCapacity, usedSpaceCapacity_);
    };
    DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity() = default ;
    DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity(const DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity &) = default ;
    DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity(DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity &&) = default ;
    DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity() = default ;
    DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity& operator=(const DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity &) = default ;
    DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity& operator=(DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableCapacity_ == nullptr
        && return this->availableDeviceCapacity_ == nullptr && return this->availableSpaceCapacity_ == nullptr && return this->clusterAvailableCapacity_ == nullptr && return this->clusterDeliveryCapacity_ == nullptr && return this->deliveryCapacity_ == nullptr
        && return this->totalCapacity_ == nullptr && return this->totalDeviceCapacity_ == nullptr && return this->totalSpaceCapacity_ == nullptr && return this->usedCapacity_ == nullptr && return this->usedDeviceCapacity_ == nullptr
        && return this->usedSpaceCapacity_ == nullptr; };
    // availableCapacity Field Functions 
    bool hasAvailableCapacity() const { return this->availableCapacity_ != nullptr;};
    void deleteAvailableCapacity() { this->availableCapacity_ = nullptr;};
    inline int64_t availableCapacity() const { DARABONBA_PTR_GET_DEFAULT(availableCapacity_, 0L) };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity& setAvailableCapacity(int64_t availableCapacity) { DARABONBA_PTR_SET_VALUE(availableCapacity_, availableCapacity) };


    // availableDeviceCapacity Field Functions 
    bool hasAvailableDeviceCapacity() const { return this->availableDeviceCapacity_ != nullptr;};
    void deleteAvailableDeviceCapacity() { this->availableDeviceCapacity_ = nullptr;};
    inline int64_t availableDeviceCapacity() const { DARABONBA_PTR_GET_DEFAULT(availableDeviceCapacity_, 0L) };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity& setAvailableDeviceCapacity(int64_t availableDeviceCapacity) { DARABONBA_PTR_SET_VALUE(availableDeviceCapacity_, availableDeviceCapacity) };


    // availableSpaceCapacity Field Functions 
    bool hasAvailableSpaceCapacity() const { return this->availableSpaceCapacity_ != nullptr;};
    void deleteAvailableSpaceCapacity() { this->availableSpaceCapacity_ = nullptr;};
    inline double availableSpaceCapacity() const { DARABONBA_PTR_GET_DEFAULT(availableSpaceCapacity_, 0.0) };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity& setAvailableSpaceCapacity(double availableSpaceCapacity) { DARABONBA_PTR_SET_VALUE(availableSpaceCapacity_, availableSpaceCapacity) };


    // clusterAvailableCapacity Field Functions 
    bool hasClusterAvailableCapacity() const { return this->clusterAvailableCapacity_ != nullptr;};
    void deleteClusterAvailableCapacity() { this->clusterAvailableCapacity_ = nullptr;};
    inline int64_t clusterAvailableCapacity() const { DARABONBA_PTR_GET_DEFAULT(clusterAvailableCapacity_, 0L) };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity& setClusterAvailableCapacity(int64_t clusterAvailableCapacity) { DARABONBA_PTR_SET_VALUE(clusterAvailableCapacity_, clusterAvailableCapacity) };


    // clusterDeliveryCapacity Field Functions 
    bool hasClusterDeliveryCapacity() const { return this->clusterDeliveryCapacity_ != nullptr;};
    void deleteClusterDeliveryCapacity() { this->clusterDeliveryCapacity_ = nullptr;};
    inline int64_t clusterDeliveryCapacity() const { DARABONBA_PTR_GET_DEFAULT(clusterDeliveryCapacity_, 0L) };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity& setClusterDeliveryCapacity(int64_t clusterDeliveryCapacity) { DARABONBA_PTR_SET_VALUE(clusterDeliveryCapacity_, clusterDeliveryCapacity) };


    // deliveryCapacity Field Functions 
    bool hasDeliveryCapacity() const { return this->deliveryCapacity_ != nullptr;};
    void deleteDeliveryCapacity() { this->deliveryCapacity_ = nullptr;};
    inline int64_t deliveryCapacity() const { DARABONBA_PTR_GET_DEFAULT(deliveryCapacity_, 0L) };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity& setDeliveryCapacity(int64_t deliveryCapacity) { DARABONBA_PTR_SET_VALUE(deliveryCapacity_, deliveryCapacity) };


    // totalCapacity Field Functions 
    bool hasTotalCapacity() const { return this->totalCapacity_ != nullptr;};
    void deleteTotalCapacity() { this->totalCapacity_ = nullptr;};
    inline int64_t totalCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalCapacity_, 0L) };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity& setTotalCapacity(int64_t totalCapacity) { DARABONBA_PTR_SET_VALUE(totalCapacity_, totalCapacity) };


    // totalDeviceCapacity Field Functions 
    bool hasTotalDeviceCapacity() const { return this->totalDeviceCapacity_ != nullptr;};
    void deleteTotalDeviceCapacity() { this->totalDeviceCapacity_ = nullptr;};
    inline int64_t totalDeviceCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalDeviceCapacity_, 0L) };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity& setTotalDeviceCapacity(int64_t totalDeviceCapacity) { DARABONBA_PTR_SET_VALUE(totalDeviceCapacity_, totalDeviceCapacity) };


    // totalSpaceCapacity Field Functions 
    bool hasTotalSpaceCapacity() const { return this->totalSpaceCapacity_ != nullptr;};
    void deleteTotalSpaceCapacity() { this->totalSpaceCapacity_ = nullptr;};
    inline int64_t totalSpaceCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalSpaceCapacity_, 0L) };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity& setTotalSpaceCapacity(int64_t totalSpaceCapacity) { DARABONBA_PTR_SET_VALUE(totalSpaceCapacity_, totalSpaceCapacity) };


    // usedCapacity Field Functions 
    bool hasUsedCapacity() const { return this->usedCapacity_ != nullptr;};
    void deleteUsedCapacity() { this->usedCapacity_ = nullptr;};
    inline int64_t usedCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedCapacity_, 0L) };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity& setUsedCapacity(int64_t usedCapacity) { DARABONBA_PTR_SET_VALUE(usedCapacity_, usedCapacity) };


    // usedDeviceCapacity Field Functions 
    bool hasUsedDeviceCapacity() const { return this->usedDeviceCapacity_ != nullptr;};
    void deleteUsedDeviceCapacity() { this->usedDeviceCapacity_ = nullptr;};
    inline int64_t usedDeviceCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedDeviceCapacity_, 0L) };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity& setUsedDeviceCapacity(int64_t usedDeviceCapacity) { DARABONBA_PTR_SET_VALUE(usedDeviceCapacity_, usedDeviceCapacity) };


    // usedSpaceCapacity Field Functions 
    bool hasUsedSpaceCapacity() const { return this->usedSpaceCapacity_ != nullptr;};
    void deleteUsedSpaceCapacity() { this->usedSpaceCapacity_ = nullptr;};
    inline double usedSpaceCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedSpaceCapacity_, 0.0) };
    inline DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity& setUsedSpaceCapacity(double usedSpaceCapacity) { DARABONBA_PTR_SET_VALUE(usedSpaceCapacity_, usedSpaceCapacity) };


  protected:
    // The available capacity of the dedicated block storage cluster. Unit: GiB.
    std::shared_ptr<int64_t> availableCapacity_ = nullptr;
    // The total capacity of the dedicated block storage cluster that was delivered in disk creation orders. Unit: GB.
    std::shared_ptr<int64_t> availableDeviceCapacity_ = nullptr;
    // This parameter is displayed only if Thin Provision is enabled.
    std::shared_ptr<double> availableSpaceCapacity_ = nullptr;
    // The capacity of the dedicated block storage cluster that was delivered in orders. Unit: GB.
    std::shared_ptr<int64_t> clusterAvailableCapacity_ = nullptr;
    // The capacity of the dedicated block storage cluster that is to be delivered in orders. Unit: GB.
    std::shared_ptr<int64_t> clusterDeliveryCapacity_ = nullptr;
    // The capacity to be delivered for the dedicated block storage cluster. Unit: GiB.
    std::shared_ptr<int64_t> deliveryCapacity_ = nullptr;
    // The total capacity of the dedicated block storage cluster. Unit: GiB.
    std::shared_ptr<int64_t> totalCapacity_ = nullptr;
    // The total capacity of the dedicated block storage cluster that is to be delivered in disk creation orders. Unit: GB.
    std::shared_ptr<int64_t> totalDeviceCapacity_ = nullptr;
    // This parameter is displayed only if Thin Provision is enabled.
    std::shared_ptr<int64_t> totalSpaceCapacity_ = nullptr;
    // The used capacity of the dedicated block storage cluster. Unit: GiB.
    std::shared_ptr<int64_t> usedCapacity_ = nullptr;
    // The capacity of the dedicated block storage cluster that was used to create disks. Unit: GB.
    std::shared_ptr<int64_t> usedDeviceCapacity_ = nullptr;
    // This parameter is displayed only if Thin Provision is enabled.
    std::shared_ptr<double> usedSpaceCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
