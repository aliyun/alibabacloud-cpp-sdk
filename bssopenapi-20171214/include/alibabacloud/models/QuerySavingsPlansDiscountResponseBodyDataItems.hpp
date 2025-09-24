// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSDISCOUNTRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSDISCOUNTRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySavingsPlansDiscountResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySavingsPlansDiscountResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_TO_JSON(ContractDiscountRate, contractDiscountRate_);
      DARABONBA_PTR_TO_JSON(Cycle, cycle_);
      DARABONBA_PTR_TO_JSON(DiscountRate, discountRate_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_TO_JSON(PayMode, payMode_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(SpnType, spnType_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySavingsPlansDiscountResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_FROM_JSON(ContractDiscountRate, contractDiscountRate_);
      DARABONBA_PTR_FROM_JSON(Cycle, cycle_);
      DARABONBA_PTR_FROM_JSON(DiscountRate, discountRate_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(PayMode, payMode_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(SpnType, spnType_);
    };
    QuerySavingsPlansDiscountResponseBodyDataItems() = default ;
    QuerySavingsPlansDiscountResponseBodyDataItems(const QuerySavingsPlansDiscountResponseBodyDataItems &) = default ;
    QuerySavingsPlansDiscountResponseBodyDataItems(QuerySavingsPlansDiscountResponseBodyDataItems &&) = default ;
    QuerySavingsPlansDiscountResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySavingsPlansDiscountResponseBodyDataItems() = default ;
    QuerySavingsPlansDiscountResponseBodyDataItems& operator=(const QuerySavingsPlansDiscountResponseBodyDataItems &) = default ;
    QuerySavingsPlansDiscountResponseBodyDataItems& operator=(QuerySavingsPlansDiscountResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityName_ != nullptr
        && this->contractDiscountRate_ != nullptr && this->cycle_ != nullptr && this->discountRate_ != nullptr && this->moduleName_ != nullptr && this->payMode_ != nullptr
        && this->region_ != nullptr && this->regionCode_ != nullptr && this->spec_ != nullptr && this->spnType_ != nullptr; };
    // commodityName Field Functions 
    bool hasCommodityName() const { return this->commodityName_ != nullptr;};
    void deleteCommodityName() { this->commodityName_ = nullptr;};
    inline string commodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
    inline QuerySavingsPlansDiscountResponseBodyDataItems& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


    // contractDiscountRate Field Functions 
    bool hasContractDiscountRate() const { return this->contractDiscountRate_ != nullptr;};
    void deleteContractDiscountRate() { this->contractDiscountRate_ = nullptr;};
    inline string contractDiscountRate() const { DARABONBA_PTR_GET_DEFAULT(contractDiscountRate_, "") };
    inline QuerySavingsPlansDiscountResponseBodyDataItems& setContractDiscountRate(string contractDiscountRate) { DARABONBA_PTR_SET_VALUE(contractDiscountRate_, contractDiscountRate) };


    // cycle Field Functions 
    bool hasCycle() const { return this->cycle_ != nullptr;};
    void deleteCycle() { this->cycle_ = nullptr;};
    inline string cycle() const { DARABONBA_PTR_GET_DEFAULT(cycle_, "") };
    inline QuerySavingsPlansDiscountResponseBodyDataItems& setCycle(string cycle) { DARABONBA_PTR_SET_VALUE(cycle_, cycle) };


    // discountRate Field Functions 
    bool hasDiscountRate() const { return this->discountRate_ != nullptr;};
    void deleteDiscountRate() { this->discountRate_ = nullptr;};
    inline string discountRate() const { DARABONBA_PTR_GET_DEFAULT(discountRate_, "") };
    inline QuerySavingsPlansDiscountResponseBodyDataItems& setDiscountRate(string discountRate) { DARABONBA_PTR_SET_VALUE(discountRate_, discountRate) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline QuerySavingsPlansDiscountResponseBodyDataItems& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // payMode Field Functions 
    bool hasPayMode() const { return this->payMode_ != nullptr;};
    void deletePayMode() { this->payMode_ = nullptr;};
    inline string payMode() const { DARABONBA_PTR_GET_DEFAULT(payMode_, "") };
    inline QuerySavingsPlansDiscountResponseBodyDataItems& setPayMode(string payMode) { DARABONBA_PTR_SET_VALUE(payMode_, payMode) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QuerySavingsPlansDiscountResponseBodyDataItems& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string regionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline QuerySavingsPlansDiscountResponseBodyDataItems& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline QuerySavingsPlansDiscountResponseBodyDataItems& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // spnType Field Functions 
    bool hasSpnType() const { return this->spnType_ != nullptr;};
    void deleteSpnType() { this->spnType_ = nullptr;};
    inline string spnType() const { DARABONBA_PTR_GET_DEFAULT(spnType_, "") };
    inline QuerySavingsPlansDiscountResponseBodyDataItems& setSpnType(string spnType) { DARABONBA_PTR_SET_VALUE(spnType_, spnType) };


  protected:
    // The details of the service.
    std::shared_ptr<string> commodityName_ = nullptr;
    // The contracted discount.
    std::shared_ptr<string> contractDiscountRate_ = nullptr;
    // The cycle based on which queries were performed.
    std::shared_ptr<string> cycle_ = nullptr;
    // The discount provided by the official website.
    std::shared_ptr<string> discountRate_ = nullptr;
    // The name of the pricing module.
    std::shared_ptr<string> moduleName_ = nullptr;
    // The payment mode. Valid values:
    // 
    // *   total: all upfront
    // *   half: half upfront
    // *   zero: no upfront
    std::shared_ptr<string> payMode_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> region_ = nullptr;
    // The region ID of the instance. You can call the [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/26231.html) operation to query the region ID of the instance.
    std::shared_ptr<string> regionCode_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> spec_ = nullptr;
    // The type of the savings plan.
    std::shared_ptr<string> spnType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
