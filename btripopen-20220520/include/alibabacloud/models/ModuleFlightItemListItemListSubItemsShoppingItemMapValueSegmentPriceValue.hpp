// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTITEMLISTSUBITEMSSHOPPINGITEMMAPVALUESEGMENTPRICEVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTITEMLISTSUBITEMSSHOPPINGITEMMAPVALUESEGMENTPRICEVALUE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValuePriceShowInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& obj) { 
      DARABONBA_PTR_TO_JSON(floor_price, floorPrice_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_TO_JSON(sell_price, sellPrice_);
      DARABONBA_PTR_TO_JSON(original_sell_price, originalSellPrice_);
      DARABONBA_PTR_TO_JSON(base_total_price, baseTotalPrice_);
      DARABONBA_PTR_TO_JSON(before_control_price, beforeControlPrice_);
      DARABONBA_PTR_TO_JSON(tax, tax_);
      DARABONBA_PTR_TO_JSON(supply_price, supplyPrice_);
      DARABONBA_PTR_TO_JSON(basic_cabin_price, basicCabinPrice_);
      DARABONBA_PTR_TO_JSON(build_price, buildPrice_);
      DARABONBA_PTR_TO_JSON(oil_price, oilPrice_);
      DARABONBA_PTR_TO_JSON(first_standard_price, firstStandardPrice_);
      DARABONBA_PTR_TO_JSON(business_standard_price, businessStandardPrice_);
      DARABONBA_PTR_TO_JSON(common_standard_price, commonStandardPrice_);
      DARABONBA_PTR_TO_JSON(inter_ticket_price, interTicketPrice_);
      DARABONBA_PTR_TO_JSON(subtracted_price, subtractedPrice_);
      DARABONBA_PTR_TO_JSON(origin_common_price, originCommonPrice_);
      DARABONBA_PTR_TO_JSON(dynamic_promotion_price, dynamicPromotionPrice_);
      DARABONBA_PTR_TO_JSON(installment_num, installmentNum_);
      DARABONBA_PTR_TO_JSON(installment_price, installmentPrice_);
      DARABONBA_PTR_TO_JSON(competition_dynamic_price, competitionDynamicPrice_);
      DARABONBA_PTR_TO_JSON(competition_promotion_price, competitionPromotionPrice_);
      DARABONBA_PTR_TO_JSON(min_before_control_price_of_normal, minBeforeControlPriceOfNormal_);
      DARABONBA_PTR_TO_JSON(price_show_info, priceShowInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& obj) { 
      DARABONBA_PTR_FROM_JSON(floor_price, floorPrice_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_FROM_JSON(sell_price, sellPrice_);
      DARABONBA_PTR_FROM_JSON(original_sell_price, originalSellPrice_);
      DARABONBA_PTR_FROM_JSON(base_total_price, baseTotalPrice_);
      DARABONBA_PTR_FROM_JSON(before_control_price, beforeControlPrice_);
      DARABONBA_PTR_FROM_JSON(tax, tax_);
      DARABONBA_PTR_FROM_JSON(supply_price, supplyPrice_);
      DARABONBA_PTR_FROM_JSON(basic_cabin_price, basicCabinPrice_);
      DARABONBA_PTR_FROM_JSON(build_price, buildPrice_);
      DARABONBA_PTR_FROM_JSON(oil_price, oilPrice_);
      DARABONBA_PTR_FROM_JSON(first_standard_price, firstStandardPrice_);
      DARABONBA_PTR_FROM_JSON(business_standard_price, businessStandardPrice_);
      DARABONBA_PTR_FROM_JSON(common_standard_price, commonStandardPrice_);
      DARABONBA_PTR_FROM_JSON(inter_ticket_price, interTicketPrice_);
      DARABONBA_PTR_FROM_JSON(subtracted_price, subtractedPrice_);
      DARABONBA_PTR_FROM_JSON(origin_common_price, originCommonPrice_);
      DARABONBA_PTR_FROM_JSON(dynamic_promotion_price, dynamicPromotionPrice_);
      DARABONBA_PTR_FROM_JSON(installment_num, installmentNum_);
      DARABONBA_PTR_FROM_JSON(installment_price, installmentPrice_);
      DARABONBA_PTR_FROM_JSON(competition_dynamic_price, competitionDynamicPrice_);
      DARABONBA_PTR_FROM_JSON(competition_promotion_price, competitionPromotionPrice_);
      DARABONBA_PTR_FROM_JSON(min_before_control_price_of_normal, minBeforeControlPriceOfNormal_);
      DARABONBA_PTR_FROM_JSON(price_show_info, priceShowInfo_);
    };
    ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue() = default ;
    ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue(const ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue &) = default ;
    ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue(ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue &&) = default ;
    ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue() = default ;
    ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& operator=(const ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue &) = default ;
    ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& operator=(ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->floorPrice_ != nullptr
        && this->ticketPrice_ != nullptr && this->sellPrice_ != nullptr && this->originalSellPrice_ != nullptr && this->baseTotalPrice_ != nullptr && this->beforeControlPrice_ != nullptr
        && this->tax_ != nullptr && this->supplyPrice_ != nullptr && this->basicCabinPrice_ != nullptr && this->buildPrice_ != nullptr && this->oilPrice_ != nullptr
        && this->firstStandardPrice_ != nullptr && this->businessStandardPrice_ != nullptr && this->commonStandardPrice_ != nullptr && this->interTicketPrice_ != nullptr && this->subtractedPrice_ != nullptr
        && this->originCommonPrice_ != nullptr && this->dynamicPromotionPrice_ != nullptr && this->installmentNum_ != nullptr && this->installmentPrice_ != nullptr && this->competitionDynamicPrice_ != nullptr
        && this->competitionPromotionPrice_ != nullptr && this->minBeforeControlPriceOfNormal_ != nullptr && this->priceShowInfo_ != nullptr; };
    // floorPrice Field Functions 
    bool hasFloorPrice() const { return this->floorPrice_ != nullptr;};
    void deleteFloorPrice() { this->floorPrice_ = nullptr;};
    inline int32_t floorPrice() const { DARABONBA_PTR_GET_DEFAULT(floorPrice_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setFloorPrice(int32_t floorPrice) { DARABONBA_PTR_SET_VALUE(floorPrice_, floorPrice) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline int32_t ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setTicketPrice(int32_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


    // sellPrice Field Functions 
    bool hasSellPrice() const { return this->sellPrice_ != nullptr;};
    void deleteSellPrice() { this->sellPrice_ = nullptr;};
    inline int32_t sellPrice() const { DARABONBA_PTR_GET_DEFAULT(sellPrice_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setSellPrice(int32_t sellPrice) { DARABONBA_PTR_SET_VALUE(sellPrice_, sellPrice) };


    // originalSellPrice Field Functions 
    bool hasOriginalSellPrice() const { return this->originalSellPrice_ != nullptr;};
    void deleteOriginalSellPrice() { this->originalSellPrice_ = nullptr;};
    inline int32_t originalSellPrice() const { DARABONBA_PTR_GET_DEFAULT(originalSellPrice_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setOriginalSellPrice(int32_t originalSellPrice) { DARABONBA_PTR_SET_VALUE(originalSellPrice_, originalSellPrice) };


    // baseTotalPrice Field Functions 
    bool hasBaseTotalPrice() const { return this->baseTotalPrice_ != nullptr;};
    void deleteBaseTotalPrice() { this->baseTotalPrice_ = nullptr;};
    inline int32_t baseTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(baseTotalPrice_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setBaseTotalPrice(int32_t baseTotalPrice) { DARABONBA_PTR_SET_VALUE(baseTotalPrice_, baseTotalPrice) };


    // beforeControlPrice Field Functions 
    bool hasBeforeControlPrice() const { return this->beforeControlPrice_ != nullptr;};
    void deleteBeforeControlPrice() { this->beforeControlPrice_ = nullptr;};
    inline int32_t beforeControlPrice() const { DARABONBA_PTR_GET_DEFAULT(beforeControlPrice_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setBeforeControlPrice(int32_t beforeControlPrice) { DARABONBA_PTR_SET_VALUE(beforeControlPrice_, beforeControlPrice) };


    // tax Field Functions 
    bool hasTax() const { return this->tax_ != nullptr;};
    void deleteTax() { this->tax_ = nullptr;};
    inline int32_t tax() const { DARABONBA_PTR_GET_DEFAULT(tax_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setTax(int32_t tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


    // supplyPrice Field Functions 
    bool hasSupplyPrice() const { return this->supplyPrice_ != nullptr;};
    void deleteSupplyPrice() { this->supplyPrice_ = nullptr;};
    inline int32_t supplyPrice() const { DARABONBA_PTR_GET_DEFAULT(supplyPrice_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setSupplyPrice(int32_t supplyPrice) { DARABONBA_PTR_SET_VALUE(supplyPrice_, supplyPrice) };


    // basicCabinPrice Field Functions 
    bool hasBasicCabinPrice() const { return this->basicCabinPrice_ != nullptr;};
    void deleteBasicCabinPrice() { this->basicCabinPrice_ = nullptr;};
    inline int32_t basicCabinPrice() const { DARABONBA_PTR_GET_DEFAULT(basicCabinPrice_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setBasicCabinPrice(int32_t basicCabinPrice) { DARABONBA_PTR_SET_VALUE(basicCabinPrice_, basicCabinPrice) };


    // buildPrice Field Functions 
    bool hasBuildPrice() const { return this->buildPrice_ != nullptr;};
    void deleteBuildPrice() { this->buildPrice_ = nullptr;};
    inline int32_t buildPrice() const { DARABONBA_PTR_GET_DEFAULT(buildPrice_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setBuildPrice(int32_t buildPrice) { DARABONBA_PTR_SET_VALUE(buildPrice_, buildPrice) };


    // oilPrice Field Functions 
    bool hasOilPrice() const { return this->oilPrice_ != nullptr;};
    void deleteOilPrice() { this->oilPrice_ = nullptr;};
    inline int32_t oilPrice() const { DARABONBA_PTR_GET_DEFAULT(oilPrice_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setOilPrice(int32_t oilPrice) { DARABONBA_PTR_SET_VALUE(oilPrice_, oilPrice) };


    // firstStandardPrice Field Functions 
    bool hasFirstStandardPrice() const { return this->firstStandardPrice_ != nullptr;};
    void deleteFirstStandardPrice() { this->firstStandardPrice_ = nullptr;};
    inline int32_t firstStandardPrice() const { DARABONBA_PTR_GET_DEFAULT(firstStandardPrice_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setFirstStandardPrice(int32_t firstStandardPrice) { DARABONBA_PTR_SET_VALUE(firstStandardPrice_, firstStandardPrice) };


    // businessStandardPrice Field Functions 
    bool hasBusinessStandardPrice() const { return this->businessStandardPrice_ != nullptr;};
    void deleteBusinessStandardPrice() { this->businessStandardPrice_ = nullptr;};
    inline int32_t businessStandardPrice() const { DARABONBA_PTR_GET_DEFAULT(businessStandardPrice_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setBusinessStandardPrice(int32_t businessStandardPrice) { DARABONBA_PTR_SET_VALUE(businessStandardPrice_, businessStandardPrice) };


    // commonStandardPrice Field Functions 
    bool hasCommonStandardPrice() const { return this->commonStandardPrice_ != nullptr;};
    void deleteCommonStandardPrice() { this->commonStandardPrice_ = nullptr;};
    inline int32_t commonStandardPrice() const { DARABONBA_PTR_GET_DEFAULT(commonStandardPrice_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setCommonStandardPrice(int32_t commonStandardPrice) { DARABONBA_PTR_SET_VALUE(commonStandardPrice_, commonStandardPrice) };


    // interTicketPrice Field Functions 
    bool hasInterTicketPrice() const { return this->interTicketPrice_ != nullptr;};
    void deleteInterTicketPrice() { this->interTicketPrice_ = nullptr;};
    inline int32_t interTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(interTicketPrice_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setInterTicketPrice(int32_t interTicketPrice) { DARABONBA_PTR_SET_VALUE(interTicketPrice_, interTicketPrice) };


    // subtractedPrice Field Functions 
    bool hasSubtractedPrice() const { return this->subtractedPrice_ != nullptr;};
    void deleteSubtractedPrice() { this->subtractedPrice_ = nullptr;};
    inline int32_t subtractedPrice() const { DARABONBA_PTR_GET_DEFAULT(subtractedPrice_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setSubtractedPrice(int32_t subtractedPrice) { DARABONBA_PTR_SET_VALUE(subtractedPrice_, subtractedPrice) };


    // originCommonPrice Field Functions 
    bool hasOriginCommonPrice() const { return this->originCommonPrice_ != nullptr;};
    void deleteOriginCommonPrice() { this->originCommonPrice_ = nullptr;};
    inline int32_t originCommonPrice() const { DARABONBA_PTR_GET_DEFAULT(originCommonPrice_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setOriginCommonPrice(int32_t originCommonPrice) { DARABONBA_PTR_SET_VALUE(originCommonPrice_, originCommonPrice) };


    // dynamicPromotionPrice Field Functions 
    bool hasDynamicPromotionPrice() const { return this->dynamicPromotionPrice_ != nullptr;};
    void deleteDynamicPromotionPrice() { this->dynamicPromotionPrice_ = nullptr;};
    inline int32_t dynamicPromotionPrice() const { DARABONBA_PTR_GET_DEFAULT(dynamicPromotionPrice_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setDynamicPromotionPrice(int32_t dynamicPromotionPrice) { DARABONBA_PTR_SET_VALUE(dynamicPromotionPrice_, dynamicPromotionPrice) };


    // installmentNum Field Functions 
    bool hasInstallmentNum() const { return this->installmentNum_ != nullptr;};
    void deleteInstallmentNum() { this->installmentNum_ = nullptr;};
    inline int32_t installmentNum() const { DARABONBA_PTR_GET_DEFAULT(installmentNum_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setInstallmentNum(int32_t installmentNum) { DARABONBA_PTR_SET_VALUE(installmentNum_, installmentNum) };


    // installmentPrice Field Functions 
    bool hasInstallmentPrice() const { return this->installmentPrice_ != nullptr;};
    void deleteInstallmentPrice() { this->installmentPrice_ = nullptr;};
    inline double installmentPrice() const { DARABONBA_PTR_GET_DEFAULT(installmentPrice_, 0.0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setInstallmentPrice(double installmentPrice) { DARABONBA_PTR_SET_VALUE(installmentPrice_, installmentPrice) };


    // competitionDynamicPrice Field Functions 
    bool hasCompetitionDynamicPrice() const { return this->competitionDynamicPrice_ != nullptr;};
    void deleteCompetitionDynamicPrice() { this->competitionDynamicPrice_ = nullptr;};
    inline int32_t competitionDynamicPrice() const { DARABONBA_PTR_GET_DEFAULT(competitionDynamicPrice_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setCompetitionDynamicPrice(int32_t competitionDynamicPrice) { DARABONBA_PTR_SET_VALUE(competitionDynamicPrice_, competitionDynamicPrice) };


    // competitionPromotionPrice Field Functions 
    bool hasCompetitionPromotionPrice() const { return this->competitionPromotionPrice_ != nullptr;};
    void deleteCompetitionPromotionPrice() { this->competitionPromotionPrice_ = nullptr;};
    inline int32_t competitionPromotionPrice() const { DARABONBA_PTR_GET_DEFAULT(competitionPromotionPrice_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setCompetitionPromotionPrice(int32_t competitionPromotionPrice) { DARABONBA_PTR_SET_VALUE(competitionPromotionPrice_, competitionPromotionPrice) };


    // minBeforeControlPriceOfNormal Field Functions 
    bool hasMinBeforeControlPriceOfNormal() const { return this->minBeforeControlPriceOfNormal_ != nullptr;};
    void deleteMinBeforeControlPriceOfNormal() { this->minBeforeControlPriceOfNormal_ = nullptr;};
    inline int32_t minBeforeControlPriceOfNormal() const { DARABONBA_PTR_GET_DEFAULT(minBeforeControlPriceOfNormal_, 0) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setMinBeforeControlPriceOfNormal(int32_t minBeforeControlPriceOfNormal) { DARABONBA_PTR_SET_VALUE(minBeforeControlPriceOfNormal_, minBeforeControlPriceOfNormal) };


    // priceShowInfo Field Functions 
    bool hasPriceShowInfo() const { return this->priceShowInfo_ != nullptr;};
    void deletePriceShowInfo() { this->priceShowInfo_ = nullptr;};
    inline const ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValuePriceShowInfo & priceShowInfo() const { DARABONBA_PTR_GET_CONST(priceShowInfo_, ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValuePriceShowInfo) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValuePriceShowInfo priceShowInfo() { DARABONBA_PTR_GET(priceShowInfo_, ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValuePriceShowInfo) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setPriceShowInfo(const ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValuePriceShowInfo & priceShowInfo) { DARABONBA_PTR_SET_VALUE(priceShowInfo_, priceShowInfo) };
    inline ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValue& setPriceShowInfo(ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValuePriceShowInfo && priceShowInfo) { DARABONBA_PTR_SET_RVALUE(priceShowInfo_, priceShowInfo) };


  protected:
    std::shared_ptr<int32_t> floorPrice_ = nullptr;
    std::shared_ptr<int32_t> ticketPrice_ = nullptr;
    std::shared_ptr<int32_t> sellPrice_ = nullptr;
    std::shared_ptr<int32_t> originalSellPrice_ = nullptr;
    std::shared_ptr<int32_t> baseTotalPrice_ = nullptr;
    std::shared_ptr<int32_t> beforeControlPrice_ = nullptr;
    std::shared_ptr<int32_t> tax_ = nullptr;
    std::shared_ptr<int32_t> supplyPrice_ = nullptr;
    std::shared_ptr<int32_t> basicCabinPrice_ = nullptr;
    std::shared_ptr<int32_t> buildPrice_ = nullptr;
    std::shared_ptr<int32_t> oilPrice_ = nullptr;
    std::shared_ptr<int32_t> firstStandardPrice_ = nullptr;
    std::shared_ptr<int32_t> businessStandardPrice_ = nullptr;
    std::shared_ptr<int32_t> commonStandardPrice_ = nullptr;
    // fdPrice
    std::shared_ptr<int32_t> interTicketPrice_ = nullptr;
    std::shared_ptr<int32_t> subtractedPrice_ = nullptr;
    std::shared_ptr<int32_t> originCommonPrice_ = nullptr;
    std::shared_ptr<int32_t> dynamicPromotionPrice_ = nullptr;
    std::shared_ptr<int32_t> installmentNum_ = nullptr;
    std::shared_ptr<double> installmentPrice_ = nullptr;
    std::shared_ptr<int32_t> competitionDynamicPrice_ = nullptr;
    std::shared_ptr<int32_t> competitionPromotionPrice_ = nullptr;
    std::shared_ptr<int32_t> minBeforeControlPriceOfNormal_ = nullptr;
    std::shared_ptr<ModuleFlightItemListItemListSubItemsShoppingItemMapValueSegmentPriceValuePriceShowInfo> priceShowInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
