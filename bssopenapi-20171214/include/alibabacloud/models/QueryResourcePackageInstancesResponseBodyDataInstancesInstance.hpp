// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRESOURCEPACKAGEINSTANCESRESPONSEBODYDATAINSTANCESINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_QUERYRESOURCEPACKAGEINSTANCESRESPONSEBODYDATAINSTANCESINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryResourcePackageInstancesResponseBodyDataInstancesInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryResourcePackageInstancesResponseBodyDataInstancesInstance& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicableProducts, applicableProducts_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(DeductType, deductType_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(ExpiryTime, expiryTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RemainingAmount, remainingAmount_);
      DARABONBA_PTR_TO_JSON(RemainingAmountUnit, remainingAmountUnit_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalAmount, totalAmount_);
      DARABONBA_PTR_TO_JSON(TotalAmountUnit, totalAmountUnit_);
    };
    friend void from_json(const Darabonba::Json& j, QueryResourcePackageInstancesResponseBodyDataInstancesInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicableProducts, applicableProducts_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(DeductType, deductType_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(ExpiryTime, expiryTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RemainingAmount, remainingAmount_);
      DARABONBA_PTR_FROM_JSON(RemainingAmountUnit, remainingAmountUnit_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalAmount, totalAmount_);
      DARABONBA_PTR_FROM_JSON(TotalAmountUnit, totalAmountUnit_);
    };
    QueryResourcePackageInstancesResponseBodyDataInstancesInstance() = default ;
    QueryResourcePackageInstancesResponseBodyDataInstancesInstance(const QueryResourcePackageInstancesResponseBodyDataInstancesInstance &) = default ;
    QueryResourcePackageInstancesResponseBodyDataInstancesInstance(QueryResourcePackageInstancesResponseBodyDataInstancesInstance &&) = default ;
    QueryResourcePackageInstancesResponseBodyDataInstancesInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryResourcePackageInstancesResponseBodyDataInstancesInstance() = default ;
    QueryResourcePackageInstancesResponseBodyDataInstancesInstance& operator=(const QueryResourcePackageInstancesResponseBodyDataInstancesInstance &) = default ;
    QueryResourcePackageInstancesResponseBodyDataInstancesInstance& operator=(QueryResourcePackageInstancesResponseBodyDataInstancesInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicableProducts_ != nullptr
        && this->commodityCode_ != nullptr && this->deductType_ != nullptr && this->effectiveTime_ != nullptr && this->expiryTime_ != nullptr && this->instanceId_ != nullptr
        && this->packageType_ != nullptr && this->region_ != nullptr && this->remainingAmount_ != nullptr && this->remainingAmountUnit_ != nullptr && this->remark_ != nullptr
        && this->status_ != nullptr && this->totalAmount_ != nullptr && this->totalAmountUnit_ != nullptr; };
    // applicableProducts Field Functions 
    bool hasApplicableProducts() const { return this->applicableProducts_ != nullptr;};
    void deleteApplicableProducts() { this->applicableProducts_ = nullptr;};
    inline const Models::QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts & applicableProducts() const { DARABONBA_PTR_GET_CONST(applicableProducts_, Models::QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts) };
    inline Models::QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts applicableProducts() { DARABONBA_PTR_GET(applicableProducts_, Models::QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts) };
    inline QueryResourcePackageInstancesResponseBodyDataInstancesInstance& setApplicableProducts(const Models::QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts & applicableProducts) { DARABONBA_PTR_SET_VALUE(applicableProducts_, applicableProducts) };
    inline QueryResourcePackageInstancesResponseBodyDataInstancesInstance& setApplicableProducts(Models::QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts && applicableProducts) { DARABONBA_PTR_SET_RVALUE(applicableProducts_, applicableProducts) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline QueryResourcePackageInstancesResponseBodyDataInstancesInstance& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // deductType Field Functions 
    bool hasDeductType() const { return this->deductType_ != nullptr;};
    void deleteDeductType() { this->deductType_ = nullptr;};
    inline string deductType() const { DARABONBA_PTR_GET_DEFAULT(deductType_, "") };
    inline QueryResourcePackageInstancesResponseBodyDataInstancesInstance& setDeductType(string deductType) { DARABONBA_PTR_SET_VALUE(deductType_, deductType) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline QueryResourcePackageInstancesResponseBodyDataInstancesInstance& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // expiryTime Field Functions 
    bool hasExpiryTime() const { return this->expiryTime_ != nullptr;};
    void deleteExpiryTime() { this->expiryTime_ = nullptr;};
    inline string expiryTime() const { DARABONBA_PTR_GET_DEFAULT(expiryTime_, "") };
    inline QueryResourcePackageInstancesResponseBodyDataInstancesInstance& setExpiryTime(string expiryTime) { DARABONBA_PTR_SET_VALUE(expiryTime_, expiryTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryResourcePackageInstancesResponseBodyDataInstancesInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline QueryResourcePackageInstancesResponseBodyDataInstancesInstance& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QueryResourcePackageInstancesResponseBodyDataInstancesInstance& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // remainingAmount Field Functions 
    bool hasRemainingAmount() const { return this->remainingAmount_ != nullptr;};
    void deleteRemainingAmount() { this->remainingAmount_ = nullptr;};
    inline string remainingAmount() const { DARABONBA_PTR_GET_DEFAULT(remainingAmount_, "") };
    inline QueryResourcePackageInstancesResponseBodyDataInstancesInstance& setRemainingAmount(string remainingAmount) { DARABONBA_PTR_SET_VALUE(remainingAmount_, remainingAmount) };


    // remainingAmountUnit Field Functions 
    bool hasRemainingAmountUnit() const { return this->remainingAmountUnit_ != nullptr;};
    void deleteRemainingAmountUnit() { this->remainingAmountUnit_ = nullptr;};
    inline string remainingAmountUnit() const { DARABONBA_PTR_GET_DEFAULT(remainingAmountUnit_, "") };
    inline QueryResourcePackageInstancesResponseBodyDataInstancesInstance& setRemainingAmountUnit(string remainingAmountUnit) { DARABONBA_PTR_SET_VALUE(remainingAmountUnit_, remainingAmountUnit) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline QueryResourcePackageInstancesResponseBodyDataInstancesInstance& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryResourcePackageInstancesResponseBodyDataInstancesInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalAmount Field Functions 
    bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
    void deleteTotalAmount() { this->totalAmount_ = nullptr;};
    inline string totalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, "") };
    inline QueryResourcePackageInstancesResponseBodyDataInstancesInstance& setTotalAmount(string totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


    // totalAmountUnit Field Functions 
    bool hasTotalAmountUnit() const { return this->totalAmountUnit_ != nullptr;};
    void deleteTotalAmountUnit() { this->totalAmountUnit_ = nullptr;};
    inline string totalAmountUnit() const { DARABONBA_PTR_GET_DEFAULT(totalAmountUnit_, "") };
    inline QueryResourcePackageInstancesResponseBodyDataInstancesInstance& setTotalAmountUnit(string totalAmountUnit) { DARABONBA_PTR_SET_VALUE(totalAmountUnit_, totalAmountUnit) };


  protected:
    // The services to which the resource plan is applicable.
    std::shared_ptr<Models::QueryResourcePackageInstancesResponseBodyDataInstancesInstanceApplicableProducts> applicableProducts_ = nullptr;
    // The commodity code.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The deduction type. Example: Absolute.
    std::shared_ptr<string> deductType_ = nullptr;
    // The time when the resource plan took effect.
    std::shared_ptr<string> effectiveTime_ = nullptr;
    // The time when the resource plan expired.
    std::shared_ptr<string> expiryTime_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the resource plan.
    std::shared_ptr<string> packageType_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> region_ = nullptr;
    // The remaining quota.
    std::shared_ptr<string> remainingAmount_ = nullptr;
    // The unit of the remaining quota.
    std::shared_ptr<string> remainingAmountUnit_ = nullptr;
    // The remarks on the resource plan. The remarks must be made in Chinese.
    std::shared_ptr<string> remark_ = nullptr;
    // The status of the resource plan. Valid values:
    // 
    // *   Available
    // *   Expired
    std::shared_ptr<string> status_ = nullptr;
    // The total quota of the resource plan.
    std::shared_ptr<string> totalAmount_ = nullptr;
    // The unit of the total quota.
    std::shared_ptr<string> totalAmountUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
