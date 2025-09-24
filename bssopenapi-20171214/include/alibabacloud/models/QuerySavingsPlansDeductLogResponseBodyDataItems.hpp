// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSDEDUCTLOGRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSDEDUCTLOGRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySavingsPlansDeductLogResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySavingsPlansDeductLogResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(BillModule, billModule_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(BillingOfficialPrice, billingOfficialPrice_);
      DARABONBA_PTR_TO_JSON(DeductCommodity, deductCommodity_);
      DARABONBA_PTR_TO_JSON(DeductFee, deductFee_);
      DARABONBA_PTR_TO_JSON(DeductInstanceId, deductInstanceId_);
      DARABONBA_PTR_TO_JSON(DeductRate, deductRate_);
      DARABONBA_PTR_TO_JSON(DeductedOfficialPrice, deductedOfficialPrice_);
      DARABONBA_PTR_TO_JSON(DiscountRate, discountRate_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SavingsType, savingsType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySavingsPlansDeductLogResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(BillModule, billModule_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(BillingOfficialPrice, billingOfficialPrice_);
      DARABONBA_PTR_FROM_JSON(DeductCommodity, deductCommodity_);
      DARABONBA_PTR_FROM_JSON(DeductFee, deductFee_);
      DARABONBA_PTR_FROM_JSON(DeductInstanceId, deductInstanceId_);
      DARABONBA_PTR_FROM_JSON(DeductRate, deductRate_);
      DARABONBA_PTR_FROM_JSON(DeductedOfficialPrice, deductedOfficialPrice_);
      DARABONBA_PTR_FROM_JSON(DiscountRate, discountRate_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SavingsType, savingsType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QuerySavingsPlansDeductLogResponseBodyDataItems() = default ;
    QuerySavingsPlansDeductLogResponseBodyDataItems(const QuerySavingsPlansDeductLogResponseBodyDataItems &) = default ;
    QuerySavingsPlansDeductLogResponseBodyDataItems(QuerySavingsPlansDeductLogResponseBodyDataItems &&) = default ;
    QuerySavingsPlansDeductLogResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySavingsPlansDeductLogResponseBodyDataItems() = default ;
    QuerySavingsPlansDeductLogResponseBodyDataItems& operator=(const QuerySavingsPlansDeductLogResponseBodyDataItems &) = default ;
    QuerySavingsPlansDeductLogResponseBodyDataItems& operator=(QuerySavingsPlansDeductLogResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billModule_ != nullptr
        && this->billingCycle_ != nullptr && this->billingOfficialPrice_ != nullptr && this->deductCommodity_ != nullptr && this->deductFee_ != nullptr && this->deductInstanceId_ != nullptr
        && this->deductRate_ != nullptr && this->deductedOfficialPrice_ != nullptr && this->discountRate_ != nullptr && this->endTime_ != nullptr && this->instanceId_ != nullptr
        && this->instanceSpec_ != nullptr && this->instanceTypeFamily_ != nullptr && this->ownerId_ != nullptr && this->region_ != nullptr && this->savingsType_ != nullptr
        && this->startTime_ != nullptr && this->userId_ != nullptr; };
    // billModule Field Functions 
    bool hasBillModule() const { return this->billModule_ != nullptr;};
    void deleteBillModule() { this->billModule_ = nullptr;};
    inline string billModule() const { DARABONBA_PTR_GET_DEFAULT(billModule_, "") };
    inline QuerySavingsPlansDeductLogResponseBodyDataItems& setBillModule(string billModule) { DARABONBA_PTR_SET_VALUE(billModule_, billModule) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline QuerySavingsPlansDeductLogResponseBodyDataItems& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // billingOfficialPrice Field Functions 
    bool hasBillingOfficialPrice() const { return this->billingOfficialPrice_ != nullptr;};
    void deleteBillingOfficialPrice() { this->billingOfficialPrice_ = nullptr;};
    inline string billingOfficialPrice() const { DARABONBA_PTR_GET_DEFAULT(billingOfficialPrice_, "") };
    inline QuerySavingsPlansDeductLogResponseBodyDataItems& setBillingOfficialPrice(string billingOfficialPrice) { DARABONBA_PTR_SET_VALUE(billingOfficialPrice_, billingOfficialPrice) };


    // deductCommodity Field Functions 
    bool hasDeductCommodity() const { return this->deductCommodity_ != nullptr;};
    void deleteDeductCommodity() { this->deductCommodity_ = nullptr;};
    inline string deductCommodity() const { DARABONBA_PTR_GET_DEFAULT(deductCommodity_, "") };
    inline QuerySavingsPlansDeductLogResponseBodyDataItems& setDeductCommodity(string deductCommodity) { DARABONBA_PTR_SET_VALUE(deductCommodity_, deductCommodity) };


    // deductFee Field Functions 
    bool hasDeductFee() const { return this->deductFee_ != nullptr;};
    void deleteDeductFee() { this->deductFee_ = nullptr;};
    inline string deductFee() const { DARABONBA_PTR_GET_DEFAULT(deductFee_, "") };
    inline QuerySavingsPlansDeductLogResponseBodyDataItems& setDeductFee(string deductFee) { DARABONBA_PTR_SET_VALUE(deductFee_, deductFee) };


    // deductInstanceId Field Functions 
    bool hasDeductInstanceId() const { return this->deductInstanceId_ != nullptr;};
    void deleteDeductInstanceId() { this->deductInstanceId_ = nullptr;};
    inline string deductInstanceId() const { DARABONBA_PTR_GET_DEFAULT(deductInstanceId_, "") };
    inline QuerySavingsPlansDeductLogResponseBodyDataItems& setDeductInstanceId(string deductInstanceId) { DARABONBA_PTR_SET_VALUE(deductInstanceId_, deductInstanceId) };


    // deductRate Field Functions 
    bool hasDeductRate() const { return this->deductRate_ != nullptr;};
    void deleteDeductRate() { this->deductRate_ = nullptr;};
    inline string deductRate() const { DARABONBA_PTR_GET_DEFAULT(deductRate_, "") };
    inline QuerySavingsPlansDeductLogResponseBodyDataItems& setDeductRate(string deductRate) { DARABONBA_PTR_SET_VALUE(deductRate_, deductRate) };


    // deductedOfficialPrice Field Functions 
    bool hasDeductedOfficialPrice() const { return this->deductedOfficialPrice_ != nullptr;};
    void deleteDeductedOfficialPrice() { this->deductedOfficialPrice_ = nullptr;};
    inline string deductedOfficialPrice() const { DARABONBA_PTR_GET_DEFAULT(deductedOfficialPrice_, "") };
    inline QuerySavingsPlansDeductLogResponseBodyDataItems& setDeductedOfficialPrice(string deductedOfficialPrice) { DARABONBA_PTR_SET_VALUE(deductedOfficialPrice_, deductedOfficialPrice) };


    // discountRate Field Functions 
    bool hasDiscountRate() const { return this->discountRate_ != nullptr;};
    void deleteDiscountRate() { this->discountRate_ = nullptr;};
    inline string discountRate() const { DARABONBA_PTR_GET_DEFAULT(discountRate_, "") };
    inline QuerySavingsPlansDeductLogResponseBodyDataItems& setDiscountRate(string discountRate) { DARABONBA_PTR_SET_VALUE(discountRate_, discountRate) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QuerySavingsPlansDeductLogResponseBodyDataItems& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QuerySavingsPlansDeductLogResponseBodyDataItems& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string instanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline QuerySavingsPlansDeductLogResponseBodyDataItems& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string instanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline QuerySavingsPlansDeductLogResponseBodyDataItems& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QuerySavingsPlansDeductLogResponseBodyDataItems& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QuerySavingsPlansDeductLogResponseBodyDataItems& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // savingsType Field Functions 
    bool hasSavingsType() const { return this->savingsType_ != nullptr;};
    void deleteSavingsType() { this->savingsType_ = nullptr;};
    inline string savingsType() const { DARABONBA_PTR_GET_DEFAULT(savingsType_, "") };
    inline QuerySavingsPlansDeductLogResponseBodyDataItems& setSavingsType(string savingsType) { DARABONBA_PTR_SET_VALUE(savingsType_, savingsType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QuerySavingsPlansDeductLogResponseBodyDataItems& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline QuerySavingsPlansDeductLogResponseBodyDataItems& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The billable item for which the fee is deducted.
    std::shared_ptr<string> billModule_ = nullptr;
    std::shared_ptr<string> billingCycle_ = nullptr;
    std::shared_ptr<string> billingOfficialPrice_ = nullptr;
    // The service for which the fee is deducted.
    std::shared_ptr<string> deductCommodity_ = nullptr;
    // The deducted amount.
    std::shared_ptr<string> deductFee_ = nullptr;
    // The ID of the instance for which the fee is deducted.
    std::shared_ptr<string> deductInstanceId_ = nullptr;
    // The deduction rate.
    std::shared_ptr<string> deductRate_ = nullptr;
    std::shared_ptr<string> deductedOfficialPrice_ = nullptr;
    // The discount used for the current deduction.
    std::shared_ptr<string> discountRate_ = nullptr;
    // The end of the billing cycle for which the fee is deducted.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the savings plan instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceSpec_ = nullptr;
    std::shared_ptr<string> instanceTypeFamily_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    // The type of the savings plan. Valid values:
    // 
    // *   universal: general-purpose
    // *   ecs: ECS compute
    std::shared_ptr<string> savingsType_ = nullptr;
    // The beginning of the billing cycle for which the fee is deducted. The time is in the format of yyyy-MM-dd HH:mm:ss.
    std::shared_ptr<string> startTime_ = nullptr;
    // The ID of the user.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
