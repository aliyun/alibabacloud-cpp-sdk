// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESAVINGSPLANSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESAVINGSPLANSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class CreateSavingsPlansInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSavingsPlansInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EffectiveDate, effectiveDate_);
      DARABONBA_PTR_TO_JSON(ExtendMap, extendMap_);
      DARABONBA_PTR_TO_JSON(PayMode, payMode_);
      DARABONBA_PTR_TO_JSON(PoolValue, poolValue_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SpecType, specType_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSavingsPlansInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EffectiveDate, effectiveDate_);
      DARABONBA_PTR_FROM_JSON(ExtendMap, extendMap_);
      DARABONBA_PTR_FROM_JSON(PayMode, payMode_);
      DARABONBA_PTR_FROM_JSON(PoolValue, poolValue_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SpecType, specType_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateSavingsPlansInstanceRequest() = default ;
    CreateSavingsPlansInstanceRequest(const CreateSavingsPlansInstanceRequest &) = default ;
    CreateSavingsPlansInstanceRequest(CreateSavingsPlansInstanceRequest &&) = default ;
    CreateSavingsPlansInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSavingsPlansInstanceRequest() = default ;
    CreateSavingsPlansInstanceRequest& operator=(const CreateSavingsPlansInstanceRequest &) = default ;
    CreateSavingsPlansInstanceRequest& operator=(CreateSavingsPlansInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->commodityCode_ == nullptr && this->duration_ == nullptr && this->effectiveDate_ == nullptr && this->extendMap_ == nullptr && this->payMode_ == nullptr
        && this->poolValue_ == nullptr && this->pricingCycle_ == nullptr && this->region_ == nullptr && this->specType_ == nullptr && this->specification_ == nullptr
        && this->type_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateSavingsPlansInstanceRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline CreateSavingsPlansInstanceRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline CreateSavingsPlansInstanceRequest& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // effectiveDate Field Functions 
    bool hasEffectiveDate() const { return this->effectiveDate_ != nullptr;};
    void deleteEffectiveDate() { this->effectiveDate_ = nullptr;};
    inline string getEffectiveDate() const { DARABONBA_PTR_GET_DEFAULT(effectiveDate_, "") };
    inline CreateSavingsPlansInstanceRequest& setEffectiveDate(string effectiveDate) { DARABONBA_PTR_SET_VALUE(effectiveDate_, effectiveDate) };


    // extendMap Field Functions 
    bool hasExtendMap() const { return this->extendMap_ != nullptr;};
    void deleteExtendMap() { this->extendMap_ = nullptr;};
    inline const map<string, string> & getExtendMap() const { DARABONBA_PTR_GET_CONST(extendMap_, map<string, string>) };
    inline map<string, string> getExtendMap() { DARABONBA_PTR_GET(extendMap_, map<string, string>) };
    inline CreateSavingsPlansInstanceRequest& setExtendMap(const map<string, string> & extendMap) { DARABONBA_PTR_SET_VALUE(extendMap_, extendMap) };
    inline CreateSavingsPlansInstanceRequest& setExtendMap(map<string, string> && extendMap) { DARABONBA_PTR_SET_RVALUE(extendMap_, extendMap) };


    // payMode Field Functions 
    bool hasPayMode() const { return this->payMode_ != nullptr;};
    void deletePayMode() { this->payMode_ = nullptr;};
    inline string getPayMode() const { DARABONBA_PTR_GET_DEFAULT(payMode_, "") };
    inline CreateSavingsPlansInstanceRequest& setPayMode(string payMode) { DARABONBA_PTR_SET_VALUE(payMode_, payMode) };


    // poolValue Field Functions 
    bool hasPoolValue() const { return this->poolValue_ != nullptr;};
    void deletePoolValue() { this->poolValue_ = nullptr;};
    inline string getPoolValue() const { DARABONBA_PTR_GET_DEFAULT(poolValue_, "") };
    inline CreateSavingsPlansInstanceRequest& setPoolValue(string poolValue) { DARABONBA_PTR_SET_VALUE(poolValue_, poolValue) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateSavingsPlansInstanceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateSavingsPlansInstanceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline CreateSavingsPlansInstanceRequest& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline CreateSavingsPlansInstanceRequest& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateSavingsPlansInstanceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<bool> autoPay_ {};
    // The code of the service.
    // 
    // This parameter is required.
    shared_ptr<string> commodityCode_ {};
    // The service duration. This parameter is used together with the PricingCycle parameter.
    // 
    // This parameter is required.
    shared_ptr<string> duration_ {};
    // The time when the savings plan takes effect. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> effectiveDate_ {};
    // The extended parameters.
    shared_ptr<map<string, string>> extendMap_ {};
    // The payment mode. Valid values:
    // 
    // *   total: all upfront
    // *   half: partial upfront
    // *   zero: no upfront
    // 
    // This parameter is required.
    shared_ptr<string> payMode_ {};
    // The contracted amount. unit: CNY
    // 
    // This parameter is required.
    shared_ptr<string> poolValue_ {};
    // The unit of the subscription duration. This parameter is used together with Duration. Valid values:
    // 
    // *   Year
    // *   Month
    // 
    // This parameter is required.
    shared_ptr<string> pricingCycle_ {};
    // The ID of the region in which you create the savings plan. You must specify this parameter if the Type parameter is not set to universal.
    shared_ptr<string> region_ {};
    // The specification type. This parameter is used together with the Specification parameter. You must specify this parameter if the Type parameter is not set to universal. Valid values:
    // 
    // *   group: specification group
    // *   family: specification family
    shared_ptr<string> specType_ {};
    // The specifications of the savings plan. This parameter is used together with the SpecType parameter.
    shared_ptr<string> specification_ {};
    // The type of the savings plan. Valid values:
    // 
    // *   universal: general-purpose type
    // *   ecs: Elastic Compute Service (ECS) compute type
    // *   elasticy: elastic type
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
