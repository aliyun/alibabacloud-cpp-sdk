// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCECOVERAGEDETAILRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCECOVERAGEDETAILRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeResourceCoverageDetailResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceCoverageDetailResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(CapacityUnit, capacityUnit_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_TO_JSON(CoveragePercentage, coveragePercentage_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DeductQuantity, deductQuantity_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(PaymentAmount, paymentAmount_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalQuantity, totalQuantity_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
      DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceCoverageDetailResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CapacityUnit, capacityUnit_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_FROM_JSON(CoveragePercentage, coveragePercentage_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DeductQuantity, deductQuantity_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(PaymentAmount, paymentAmount_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalQuantity, totalQuantity_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
      DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
    };
    DescribeResourceCoverageDetailResponseBodyDataItems() = default ;
    DescribeResourceCoverageDetailResponseBodyDataItems(const DescribeResourceCoverageDetailResponseBodyDataItems &) = default ;
    DescribeResourceCoverageDetailResponseBodyDataItems(DescribeResourceCoverageDetailResponseBodyDataItems &&) = default ;
    DescribeResourceCoverageDetailResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceCoverageDetailResponseBodyDataItems() = default ;
    DescribeResourceCoverageDetailResponseBodyDataItems& operator=(const DescribeResourceCoverageDetailResponseBodyDataItems &) = default ;
    DescribeResourceCoverageDetailResponseBodyDataItems& operator=(DescribeResourceCoverageDetailResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->capacityUnit_ != nullptr
        && this->commodityCode_ != nullptr && this->commodityName_ != nullptr && this->coveragePercentage_ != nullptr && this->currency_ != nullptr && this->deductQuantity_ != nullptr
        && this->endTime_ != nullptr && this->instanceId_ != nullptr && this->instanceSpec_ != nullptr && this->paymentAmount_ != nullptr && this->productCode_ != nullptr
        && this->productName_ != nullptr && this->region_ != nullptr && this->regionNo_ != nullptr && this->startTime_ != nullptr && this->totalQuantity_ != nullptr
        && this->userId_ != nullptr && this->userName_ != nullptr && this->zone_ != nullptr && this->zoneName_ != nullptr; };
    // capacityUnit Field Functions 
    bool hasCapacityUnit() const { return this->capacityUnit_ != nullptr;};
    void deleteCapacityUnit() { this->capacityUnit_ = nullptr;};
    inline string capacityUnit() const { DARABONBA_PTR_GET_DEFAULT(capacityUnit_, "") };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setCapacityUnit(string capacityUnit) { DARABONBA_PTR_SET_VALUE(capacityUnit_, capacityUnit) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // commodityName Field Functions 
    bool hasCommodityName() const { return this->commodityName_ != nullptr;};
    void deleteCommodityName() { this->commodityName_ = nullptr;};
    inline string commodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


    // coveragePercentage Field Functions 
    bool hasCoveragePercentage() const { return this->coveragePercentage_ != nullptr;};
    void deleteCoveragePercentage() { this->coveragePercentage_ = nullptr;};
    inline float coveragePercentage() const { DARABONBA_PTR_GET_DEFAULT(coveragePercentage_, 0.0) };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setCoveragePercentage(float coveragePercentage) { DARABONBA_PTR_SET_VALUE(coveragePercentage_, coveragePercentage) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // deductQuantity Field Functions 
    bool hasDeductQuantity() const { return this->deductQuantity_ != nullptr;};
    void deleteDeductQuantity() { this->deductQuantity_ = nullptr;};
    inline float deductQuantity() const { DARABONBA_PTR_GET_DEFAULT(deductQuantity_, 0.0) };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setDeductQuantity(float deductQuantity) { DARABONBA_PTR_SET_VALUE(deductQuantity_, deductQuantity) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string instanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // paymentAmount Field Functions 
    bool hasPaymentAmount() const { return this->paymentAmount_ != nullptr;};
    void deletePaymentAmount() { this->paymentAmount_ = nullptr;};
    inline float paymentAmount() const { DARABONBA_PTR_GET_DEFAULT(paymentAmount_, 0.0) };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setPaymentAmount(float paymentAmount) { DARABONBA_PTR_SET_VALUE(paymentAmount_, paymentAmount) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalQuantity Field Functions 
    bool hasTotalQuantity() const { return this->totalQuantity_ != nullptr;};
    void deleteTotalQuantity() { this->totalQuantity_ = nullptr;};
    inline float totalQuantity() const { DARABONBA_PTR_GET_DEFAULT(totalQuantity_, 0.0) };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setTotalQuantity(float totalQuantity) { DARABONBA_PTR_SET_VALUE(totalQuantity_, totalQuantity) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string zone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


    // zoneName Field Functions 
    bool hasZoneName() const { return this->zoneName_ != nullptr;};
    void deleteZoneName() { this->zoneName_ = nullptr;};
    inline string zoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
    inline DescribeResourceCoverageDetailResponseBodyDataItems& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


  protected:
    // The unit that is used to measure the resources deducted from deduction plans.
    std::shared_ptr<string> capacityUnit_ = nullptr;
    // The code of the service.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The name and billing method of the service.
    std::shared_ptr<string> commodityName_ = nullptr;
    // The coverage rate of a deduction plan.
    std::shared_ptr<float> coveragePercentage_ = nullptr;
    // The currency in which deduction plans were priced.
    std::shared_ptr<string> currency_ = nullptr;
    // The amount of the resources deducted from a deduction plan.
    std::shared_ptr<float> deductQuantity_ = nullptr;
    // The end of the time range in which the coverage details were queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of a pay-as-you-go instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The specifications of a deduction plan.
    std::shared_ptr<string> instanceSpec_ = nullptr;
    // The amount of the bill.
    std::shared_ptr<float> paymentAmount_ = nullptr;
    // The code of the service.
    std::shared_ptr<string> productCode_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> productName_ = nullptr;
    // The region.
    std::shared_ptr<string> region_ = nullptr;
    // The code of the region.
    std::shared_ptr<string> regionNo_ = nullptr;
    // The beginning of the time range in which the coverage details were queried.
    std::shared_ptr<string> startTime_ = nullptr;
    // The total amount of resources consumed.
    std::shared_ptr<float> totalQuantity_ = nullptr;
    // The ID of the account.
    std::shared_ptr<string> userId_ = nullptr;
    // The username of the account.
    std::shared_ptr<string> userName_ = nullptr;
    // The code of the zone.
    std::shared_ptr<string> zone_ = nullptr;
    // The zone.
    std::shared_ptr<string> zoneName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
