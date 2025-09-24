// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEUSAGEDETAILRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEUSAGEDETAILRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeResourceUsageDetailResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceUsageDetailResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(CapacityUnit, capacityUnit_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DeductQuantity, deductQuantity_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(PostpaidCost, postpaidCost_);
      DARABONBA_PTR_TO_JSON(PotentialSavedCost, potentialSavedCost_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(ReservationCost, reservationCost_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_TO_JSON(SavedCost, savedCost_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusName, statusName_);
      DARABONBA_PTR_TO_JSON(TotalQuantity, totalQuantity_);
      DARABONBA_PTR_TO_JSON(UsagePercentage, usagePercentage_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
      DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceUsageDetailResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CapacityUnit, capacityUnit_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DeductQuantity, deductQuantity_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(PostpaidCost, postpaidCost_);
      DARABONBA_PTR_FROM_JSON(PotentialSavedCost, potentialSavedCost_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(ReservationCost, reservationCost_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(SavedCost, savedCost_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusName, statusName_);
      DARABONBA_PTR_FROM_JSON(TotalQuantity, totalQuantity_);
      DARABONBA_PTR_FROM_JSON(UsagePercentage, usagePercentage_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
      DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
    };
    DescribeResourceUsageDetailResponseBodyDataItems() = default ;
    DescribeResourceUsageDetailResponseBodyDataItems(const DescribeResourceUsageDetailResponseBodyDataItems &) = default ;
    DescribeResourceUsageDetailResponseBodyDataItems(DescribeResourceUsageDetailResponseBodyDataItems &&) = default ;
    DescribeResourceUsageDetailResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceUsageDetailResponseBodyDataItems() = default ;
    DescribeResourceUsageDetailResponseBodyDataItems& operator=(const DescribeResourceUsageDetailResponseBodyDataItems &) = default ;
    DescribeResourceUsageDetailResponseBodyDataItems& operator=(DescribeResourceUsageDetailResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->capacityUnit_ != nullptr
        && this->currency_ != nullptr && this->deductQuantity_ != nullptr && this->endTime_ != nullptr && this->imageType_ != nullptr && this->instanceSpec_ != nullptr
        && this->postpaidCost_ != nullptr && this->potentialSavedCost_ != nullptr && this->quantity_ != nullptr && this->region_ != nullptr && this->regionNo_ != nullptr
        && this->reservationCost_ != nullptr && this->resourceInstanceId_ != nullptr && this->savedCost_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr
        && this->statusName_ != nullptr && this->totalQuantity_ != nullptr && this->usagePercentage_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr
        && this->zone_ != nullptr && this->zoneName_ != nullptr; };
    // capacityUnit Field Functions 
    bool hasCapacityUnit() const { return this->capacityUnit_ != nullptr;};
    void deleteCapacityUnit() { this->capacityUnit_ = nullptr;};
    inline string capacityUnit() const { DARABONBA_PTR_GET_DEFAULT(capacityUnit_, "") };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setCapacityUnit(string capacityUnit) { DARABONBA_PTR_SET_VALUE(capacityUnit_, capacityUnit) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // deductQuantity Field Functions 
    bool hasDeductQuantity() const { return this->deductQuantity_ != nullptr;};
    void deleteDeductQuantity() { this->deductQuantity_ = nullptr;};
    inline float deductQuantity() const { DARABONBA_PTR_GET_DEFAULT(deductQuantity_, 0.0) };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setDeductQuantity(float deductQuantity) { DARABONBA_PTR_SET_VALUE(deductQuantity_, deductQuantity) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string instanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // postpaidCost Field Functions 
    bool hasPostpaidCost() const { return this->postpaidCost_ != nullptr;};
    void deletePostpaidCost() { this->postpaidCost_ = nullptr;};
    inline string postpaidCost() const { DARABONBA_PTR_GET_DEFAULT(postpaidCost_, "") };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setPostpaidCost(string postpaidCost) { DARABONBA_PTR_SET_VALUE(postpaidCost_, postpaidCost) };


    // potentialSavedCost Field Functions 
    bool hasPotentialSavedCost() const { return this->potentialSavedCost_ != nullptr;};
    void deletePotentialSavedCost() { this->potentialSavedCost_ = nullptr;};
    inline string potentialSavedCost() const { DARABONBA_PTR_GET_DEFAULT(potentialSavedCost_, "") };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setPotentialSavedCost(string potentialSavedCost) { DARABONBA_PTR_SET_VALUE(potentialSavedCost_, potentialSavedCost) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int64_t quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // reservationCost Field Functions 
    bool hasReservationCost() const { return this->reservationCost_ != nullptr;};
    void deleteReservationCost() { this->reservationCost_ = nullptr;};
    inline string reservationCost() const { DARABONBA_PTR_GET_DEFAULT(reservationCost_, "") };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setReservationCost(string reservationCost) { DARABONBA_PTR_SET_VALUE(reservationCost_, reservationCost) };


    // resourceInstanceId Field Functions 
    bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
    void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
    inline string resourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


    // savedCost Field Functions 
    bool hasSavedCost() const { return this->savedCost_ != nullptr;};
    void deleteSavedCost() { this->savedCost_ = nullptr;};
    inline string savedCost() const { DARABONBA_PTR_GET_DEFAULT(savedCost_, "") };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setSavedCost(string savedCost) { DARABONBA_PTR_SET_VALUE(savedCost_, savedCost) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusName Field Functions 
    bool hasStatusName() const { return this->statusName_ != nullptr;};
    void deleteStatusName() { this->statusName_ = nullptr;};
    inline string statusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


    // totalQuantity Field Functions 
    bool hasTotalQuantity() const { return this->totalQuantity_ != nullptr;};
    void deleteTotalQuantity() { this->totalQuantity_ = nullptr;};
    inline float totalQuantity() const { DARABONBA_PTR_GET_DEFAULT(totalQuantity_, 0.0) };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setTotalQuantity(float totalQuantity) { DARABONBA_PTR_SET_VALUE(totalQuantity_, totalQuantity) };


    // usagePercentage Field Functions 
    bool hasUsagePercentage() const { return this->usagePercentage_ != nullptr;};
    void deleteUsagePercentage() { this->usagePercentage_ = nullptr;};
    inline float usagePercentage() const { DARABONBA_PTR_GET_DEFAULT(usagePercentage_, 0.0) };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setUsagePercentage(float usagePercentage) { DARABONBA_PTR_SET_VALUE(usagePercentage_, usagePercentage) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string zone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


    // zoneName Field Functions 
    bool hasZoneName() const { return this->zoneName_ != nullptr;};
    void deleteZoneName() { this->zoneName_ = nullptr;};
    inline string zoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
    inline DescribeResourceUsageDetailResponseBodyDataItems& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


  protected:
    // The unit that is used to measure the resources that are deducted.
    std::shared_ptr<string> capacityUnit_ = nullptr;
    // The type of the currency.
    std::shared_ptr<string> currency_ = nullptr;
    // The amount of the deducted resources.
    std::shared_ptr<float> deductQuantity_ = nullptr;
    // The end of the time range in which the usage details were queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The operating system.
    std::shared_ptr<string> imageType_ = nullptr;
    // The instance type.
    std::shared_ptr<string> instanceSpec_ = nullptr;
    // The equivalent of pay-as-you-go costs.
    std::shared_ptr<string> postpaidCost_ = nullptr;
    // The potential net savings.
    std::shared_ptr<string> potentialSavedCost_ = nullptr;
    // The number of deduction plans.
    std::shared_ptr<int64_t> quantity_ = nullptr;
    // The region.
    std::shared_ptr<string> region_ = nullptr;
    // The code of the region.
    std::shared_ptr<string> regionNo_ = nullptr;
    // The fee of the deduction plan.
    std::shared_ptr<string> reservationCost_ = nullptr;
    // The ID of the deduction plan.
    std::shared_ptr<string> resourceInstanceId_ = nullptr;
    // The net savings.
    std::shared_ptr<string> savedCost_ = nullptr;
    // The beginning of the time range in which the usage details were queried.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the deduction plan.
    std::shared_ptr<string> status_ = nullptr;
    // The name of the status.
    std::shared_ptr<string> statusName_ = nullptr;
    // The total capacity of the deduction plan.
    std::shared_ptr<float> totalQuantity_ = nullptr;
    // The usage rate of the deduction plan.
    std::shared_ptr<float> usagePercentage_ = nullptr;
    // The account ID.
    std::shared_ptr<string> userId_ = nullptr;
    // The username of the account.
    std::shared_ptr<string> userName_ = nullptr;
    // The zone.
    std::shared_ptr<string> zone_ = nullptr;
    // The code of the zone.
    std::shared_ptr<string> zoneName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
