// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSDISCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSDISCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySavingsPlansDiscountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySavingsPlansDiscountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(Cycle, cycle_);
      DARABONBA_PTR_TO_JSON(Locale, locale_);
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PayMode, payMode_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(SpnCommodityCode, spnCommodityCode_);
      DARABONBA_PTR_TO_JSON(SpnType, spnType_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySavingsPlansDiscountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(Cycle, cycle_);
      DARABONBA_PTR_FROM_JSON(Locale, locale_);
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PayMode, payMode_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(SpnCommodityCode, spnCommodityCode_);
      DARABONBA_PTR_FROM_JSON(SpnType, spnType_);
    };
    QuerySavingsPlansDiscountRequest() = default ;
    QuerySavingsPlansDiscountRequest(const QuerySavingsPlansDiscountRequest &) = default ;
    QuerySavingsPlansDiscountRequest(QuerySavingsPlansDiscountRequest &&) = default ;
    QuerySavingsPlansDiscountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySavingsPlansDiscountRequest() = default ;
    QuerySavingsPlansDiscountRequest& operator=(const QuerySavingsPlansDiscountRequest &) = default ;
    QuerySavingsPlansDiscountRequest& operator=(QuerySavingsPlansDiscountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->cycle_ != nullptr && this->locale_ != nullptr && this->moduleCode_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr
        && this->payMode_ != nullptr && this->region_ != nullptr && this->spec_ != nullptr && this->spnCommodityCode_ != nullptr && this->spnType_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline QuerySavingsPlansDiscountRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // cycle Field Functions 
    bool hasCycle() const { return this->cycle_ != nullptr;};
    void deleteCycle() { this->cycle_ = nullptr;};
    inline string cycle() const { DARABONBA_PTR_GET_DEFAULT(cycle_, "") };
    inline QuerySavingsPlansDiscountRequest& setCycle(string cycle) { DARABONBA_PTR_SET_VALUE(cycle_, cycle) };


    // locale Field Functions 
    bool hasLocale() const { return this->locale_ != nullptr;};
    void deleteLocale() { this->locale_ = nullptr;};
    inline string locale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
    inline QuerySavingsPlansDiscountRequest& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline QuerySavingsPlansDiscountRequest& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QuerySavingsPlansDiscountRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QuerySavingsPlansDiscountRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // payMode Field Functions 
    bool hasPayMode() const { return this->payMode_ != nullptr;};
    void deletePayMode() { this->payMode_ = nullptr;};
    inline string payMode() const { DARABONBA_PTR_GET_DEFAULT(payMode_, "") };
    inline QuerySavingsPlansDiscountRequest& setPayMode(string payMode) { DARABONBA_PTR_SET_VALUE(payMode_, payMode) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QuerySavingsPlansDiscountRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline QuerySavingsPlansDiscountRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // spnCommodityCode Field Functions 
    bool hasSpnCommodityCode() const { return this->spnCommodityCode_ != nullptr;};
    void deleteSpnCommodityCode() { this->spnCommodityCode_ = nullptr;};
    inline string spnCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(spnCommodityCode_, "") };
    inline QuerySavingsPlansDiscountRequest& setSpnCommodityCode(string spnCommodityCode) { DARABONBA_PTR_SET_VALUE(spnCommodityCode_, spnCommodityCode) };


    // spnType Field Functions 
    bool hasSpnType() const { return this->spnType_ != nullptr;};
    void deleteSpnType() { this->spnType_ = nullptr;};
    inline string spnType() const { DARABONBA_PTR_GET_DEFAULT(spnType_, "") };
    inline QuerySavingsPlansDiscountRequest& setSpnType(string spnType) { DARABONBA_PTR_SET_VALUE(spnType_, spnType) };


  protected:
    // The code of the service.
    // 
    // This parameter is required.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The cycle based on which queries are performed.
    // 
    // This parameter is required.
    std::shared_ptr<string> cycle_ = nullptr;
    // The identifier of the language.
    // 
    // Valid values:
    // 
    // *   EN: English.
    // *   ZH: Chinese.
    std::shared_ptr<string> locale_ = nullptr;
    // The code of the pricing module.
    std::shared_ptr<string> moduleCode_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The payment mode. Valid values: total: all upfront. half: half upfront. zero: no upfront.
    // 
    // This parameter is required.
    std::shared_ptr<string> payMode_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> region_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> spec_ = nullptr;
    std::shared_ptr<string> spnCommodityCode_ = nullptr;
    // The type of the savings plan. Valid values: ecs: Elastic Compute Service (ECS) compute type. universal: general-purpose type.
    // 
    // This parameter is required.
    std::shared_ptr<string> spnType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
