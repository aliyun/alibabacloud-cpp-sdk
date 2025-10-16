// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(GroupDesktopCount, groupDesktopCount_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RootDiskCategory, rootDiskCategory_);
      DARABONBA_PTR_TO_JSON(RootDiskPerformanceLevel, rootDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(RootDiskSizeGib, rootDiskSizeGib_);
      DARABONBA_PTR_TO_JSON(UserDiskCategory, userDiskCategory_);
      DARABONBA_PTR_TO_JSON(UserDiskPerformanceLevel, userDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(UserDiskSizeGib, userDiskSizeGib_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(GroupDesktopCount, groupDesktopCount_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RootDiskCategory, rootDiskCategory_);
      DARABONBA_PTR_FROM_JSON(RootDiskPerformanceLevel, rootDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(RootDiskSizeGib, rootDiskSizeGib_);
      DARABONBA_PTR_FROM_JSON(UserDiskCategory, userDiskCategory_);
      DARABONBA_PTR_FROM_JSON(UserDiskPerformanceLevel, userDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(UserDiskSizeGib, userDiskSizeGib_);
    };
    DescribePriceRequest() = default ;
    DescribePriceRequest(const DescribePriceRequest &) = default ;
    DescribePriceRequest(DescribePriceRequest &&) = default ;
    DescribePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceRequest() = default ;
    DescribePriceRequest& operator=(const DescribePriceRequest &) = default ;
    DescribePriceRequest& operator=(DescribePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->bandwidth_ == nullptr && return this->duration_ == nullptr && return this->groupDesktopCount_ == nullptr && return this->instanceType_ == nullptr && return this->internetChargeType_ == nullptr
        && return this->osType_ == nullptr && return this->period_ == nullptr && return this->periodUnit_ == nullptr && return this->promotionId_ == nullptr && return this->regionId_ == nullptr
        && return this->resellerOwnerUid_ == nullptr && return this->resourceType_ == nullptr && return this->rootDiskCategory_ == nullptr && return this->rootDiskPerformanceLevel_ == nullptr && return this->rootDiskSizeGib_ == nullptr
        && return this->userDiskCategory_ == nullptr && return this->userDiskPerformanceLevel_ == nullptr && return this->userDiskSizeGib_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline DescribePriceRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribePriceRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline DescribePriceRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // groupDesktopCount Field Functions 
    bool hasGroupDesktopCount() const { return this->groupDesktopCount_ != nullptr;};
    void deleteGroupDesktopCount() { this->groupDesktopCount_ = nullptr;};
    inline int32_t groupDesktopCount() const { DARABONBA_PTR_GET_DEFAULT(groupDesktopCount_, 0) };
    inline DescribePriceRequest& setGroupDesktopCount(int32_t groupDesktopCount) { DARABONBA_PTR_SET_VALUE(groupDesktopCount_, groupDesktopCount) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribePriceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribePriceRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribePriceRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribePriceRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribePriceRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline DescribePriceRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePriceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t resellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline DescribePriceRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribePriceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // rootDiskCategory Field Functions 
    bool hasRootDiskCategory() const { return this->rootDiskCategory_ != nullptr;};
    void deleteRootDiskCategory() { this->rootDiskCategory_ = nullptr;};
    inline string rootDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(rootDiskCategory_, "") };
    inline DescribePriceRequest& setRootDiskCategory(string rootDiskCategory) { DARABONBA_PTR_SET_VALUE(rootDiskCategory_, rootDiskCategory) };


    // rootDiskPerformanceLevel Field Functions 
    bool hasRootDiskPerformanceLevel() const { return this->rootDiskPerformanceLevel_ != nullptr;};
    void deleteRootDiskPerformanceLevel() { this->rootDiskPerformanceLevel_ = nullptr;};
    inline string rootDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(rootDiskPerformanceLevel_, "") };
    inline DescribePriceRequest& setRootDiskPerformanceLevel(string rootDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(rootDiskPerformanceLevel_, rootDiskPerformanceLevel) };


    // rootDiskSizeGib Field Functions 
    bool hasRootDiskSizeGib() const { return this->rootDiskSizeGib_ != nullptr;};
    void deleteRootDiskSizeGib() { this->rootDiskSizeGib_ = nullptr;};
    inline int32_t rootDiskSizeGib() const { DARABONBA_PTR_GET_DEFAULT(rootDiskSizeGib_, 0) };
    inline DescribePriceRequest& setRootDiskSizeGib(int32_t rootDiskSizeGib) { DARABONBA_PTR_SET_VALUE(rootDiskSizeGib_, rootDiskSizeGib) };


    // userDiskCategory Field Functions 
    bool hasUserDiskCategory() const { return this->userDiskCategory_ != nullptr;};
    void deleteUserDiskCategory() { this->userDiskCategory_ = nullptr;};
    inline string userDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(userDiskCategory_, "") };
    inline DescribePriceRequest& setUserDiskCategory(string userDiskCategory) { DARABONBA_PTR_SET_VALUE(userDiskCategory_, userDiskCategory) };


    // userDiskPerformanceLevel Field Functions 
    bool hasUserDiskPerformanceLevel() const { return this->userDiskPerformanceLevel_ != nullptr;};
    void deleteUserDiskPerformanceLevel() { this->userDiskPerformanceLevel_ = nullptr;};
    inline string userDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(userDiskPerformanceLevel_, "") };
    inline DescribePriceRequest& setUserDiskPerformanceLevel(string userDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(userDiskPerformanceLevel_, userDiskPerformanceLevel) };


    // userDiskSizeGib Field Functions 
    bool hasUserDiskSizeGib() const { return this->userDiskSizeGib_ != nullptr;};
    void deleteUserDiskSizeGib() { this->userDiskSizeGib_ = nullptr;};
    inline int32_t userDiskSizeGib() const { DARABONBA_PTR_GET_DEFAULT(userDiskSizeGib_, 0) };
    inline DescribePriceRequest& setUserDiskSizeGib(int32_t userDiskSizeGib) { DARABONBA_PTR_SET_VALUE(userDiskSizeGib_, userDiskSizeGib) };


  protected:
    // The number of resources. Default value: 1.
    std::shared_ptr<int32_t> amount_ = nullptr;
    // The maximum public bandwidth. Unit: Mbit/s.
    // 
    // *   Valid values if you set InternetChargeType to PayByBandwidth: 10 to 1000.
    // *   Valid values if you set InternetChargeType to InternetChargeType: 10 to 200.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The type of hourly plan if you use the Monthly Subscription billing method. If you set `ResourceType` to `DesktopMonthPackage`, you must specify this parameter.
    // 
    // Valid values:
    // 
    // *   120: the 120-hour computing plan.
    // *   250: the 250-hour computing plan.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The number of cloud computer shares. Default value: 1.
    // 
    // >  This parameter takes effect only if you set `ResourceType` to `DesktopGroup`.
    std::shared_ptr<int32_t> groupDesktopCount_ = nullptr;
    // The specifications of the resource.
    // 
    // *   This parameter is required if you set `ResourceType` to `Desktop`. You can call the [DescribeDesktopTypes](~~DescribeDesktopTypes~~) to query the available cloud computer types that correspond to the value of `DesktopTypeId`.
    // *   If you set `ResourceType` to `DesktopGroup`, set the value of this parameter to `large`.
    // *   If you set `ResourceType` to `Bandwidth`, you can leave this parameter empty.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The metering method for network traffic.
    // 
    // Valid values:
    // 
    // *   PayByTraffic: You are charged for the actually consumed traffic.
    // *   PayByBandwidth: You are charged by a fixed bandwidth.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The OS type.
    // 
    // Valid values:
    // 
    // *   Linux
    // *   Windows (default)
    std::shared_ptr<string> osType_ = nullptr;
    // The subscription duration. The valid values of this parameter vary based on the value of `PeriodUnit`.
    // 
    // *   If you set `PeriodUnit` to `Hour`, set the value of this parameter to 1.
    // *   If you set `PeriodUnit` to `Month`, set the value of this parameter to 1, 2, 3, or 6.
    // *   If you set `PeriodUnit` to `Year`, set the value of this parameter to 1, 2, or 3.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The billing cycle.
    // 
    // Valid values:
    // 
    // *   Month
    // *   Year
    // *   Hour (default)
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The promotion ID.
    std::shared_ptr<string> promotionId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the regions supported by EDS.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> resellerOwnerUid_ = nullptr;
    // The type of the resource.
    // 
    // Valid values:
    // 
    // *   DesktopMonthPackage: monthly subscription cloud computers that use hourly limit plans.
    // *   Desktop (default): pay-as-you-go cloud computers/monthly subscription cloud computers that use unlimited plans.
    // *   Bandwidth: premium bandwidth plans.
    // *   DesktopGroup: cloud computer shares.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The category of the system disk.
    // 
    // Valid values:
    // 
    // *   cloud_efficiency: the ultra disk
    // *   cloud_auto: the standard SSD.
    // *   cloud_essd: the Enterprise SSD (ESSD). Take note that only specific cloud computer types support ESSDs.
    std::shared_ptr<string> rootDiskCategory_ = nullptr;
    std::shared_ptr<string> rootDiskPerformanceLevel_ = nullptr;
    // The size of the system disk. Unit: GiB. If you set `ResourceType` to `Desktop`, you must specify this parameter.
    std::shared_ptr<int32_t> rootDiskSizeGib_ = nullptr;
    // The category of the data disk.
    // 
    // Valid values:
    // 
    // *   cloud_efficiency: the ultra disk
    // *   cloud_auto: the standard SSD.
    // *   cloud_essd: the ESSD. Take note that only specific cloud computer types support ESSDs.
    std::shared_ptr<string> userDiskCategory_ = nullptr;
    std::shared_ptr<string> userDiskPerformanceLevel_ = nullptr;
    // The size of the data disk. Unit: GiB.
    std::shared_ptr<int32_t> userDiskSizeGib_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
