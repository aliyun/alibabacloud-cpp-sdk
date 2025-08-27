// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODYMODULEROOMSRATES_HPP_
#define ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODYMODULEROOMSRATES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule.hpp>
#include <vector>
#include <alibabacloud/models/HotelGoodsQueryResponseBodyModuleRoomsRatesBtripHotelCancelDesc.hpp>
#include <alibabacloud/models/HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc.hpp>
#include <alibabacloud/models/HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelGoodsQueryResponseBodyModuleRoomsRates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelGoodsQueryResponseBodyModuleRoomsRates& obj) { 
      DARABONBA_PTR_TO_JSON(bed_desc, bedDesc_);
      DARABONBA_PTR_TO_JSON(bed_type, bedType_);
      DARABONBA_PTR_TO_JSON(breakfast, breakfast_);
      DARABONBA_PTR_TO_JSON(btrip_cancel_rule, btripCancelRule_);
      DARABONBA_PTR_TO_JSON(btrip_hotel_cancel_desc, btripHotelCancelDesc_);
      DARABONBA_PTR_TO_JSON(can_smoking, canSmoking_);
      DARABONBA_PTR_TO_JSON(cancel_policy_desc, cancelPolicyDesc_);
      DARABONBA_PTR_TO_JSON(cancel_policy_type, cancelPolicyType_);
      DARABONBA_PTR_TO_JSON(company_aassist, companyAassist_);
      DARABONBA_PTR_TO_JSON(confirm_type, confirmType_);
      DARABONBA_PTR_TO_JSON(currency_code, currencyCode_);
      DARABONBA_PTR_TO_JSON(daily_price_format_yuan, dailyPriceFormatYuan_);
      DARABONBA_PTR_TO_JSON(daily_price_view, dailyPriceView_);
      DARABONBA_PTR_TO_JSON(discount_desc, discountDesc_);
      DARABONBA_PTR_TO_JSON(end_time_daily, endTimeDaily_);
      DARABONBA_PTR_TO_JSON(hotel_detail_rate_price_d_t_o, hotelDetailRatePriceDTO_);
      DARABONBA_PTR_TO_JSON(instant_confirm, instantConfirm_);
      DARABONBA_PTR_TO_JSON(inventory_desc, inventoryDesc_);
      DARABONBA_PTR_TO_JSON(inventory_price, inventoryPrice_);
      DARABONBA_PTR_TO_JSON(is_business_pay4_goods, isBusinessPay4Goods_);
      DARABONBA_PTR_TO_JSON(is_guarantee, isGuarantee_);
      DARABONBA_PTR_TO_JSON(is_need_email, isNeedEmail_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
      DARABONBA_PTR_TO_JSON(last_cancel_time, lastCancelTime_);
      DARABONBA_PTR_TO_JSON(max_occupancy, maxOccupancy_);
      DARABONBA_PTR_TO_JSON(min_adv_hours, minAdvHours_);
      DARABONBA_PTR_TO_JSON(min_days, minDays_);
      DARABONBA_PTR_TO_JSON(nod, nod_);
      DARABONBA_PTR_TO_JSON(nop, nop_);
      DARABONBA_PTR_TO_JSON(order_ship_time, orderShipTime_);
      DARABONBA_PTR_TO_JSON(payment_type, paymentType_);
      DARABONBA_PTR_TO_JSON(price_type, priceType_);
      DARABONBA_PTR_TO_JSON(promotion_info, promotionInfo_);
      DARABONBA_PTR_TO_JSON(rate_id, rateId_);
      DARABONBA_PTR_TO_JSON(rate_plan_name, ratePlanName_);
      DARABONBA_PTR_TO_JSON(rp_id, rpId_);
      DARABONBA_PTR_TO_JSON(seller_id, sellerId_);
      DARABONBA_PTR_TO_JSON(start_time_daily, startTimeDaily_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(supplier_code, supplierCode_);
      DARABONBA_PTR_TO_JSON(supplier_name, supplierName_);
      DARABONBA_PTR_TO_JSON(support_special_invoice, supportSpecialInvoice_);
      DARABONBA_PTR_TO_JSON(unrounding_daily_price_format_yuan, unroundingDailyPriceFormatYuan_);
    };
    friend void from_json(const Darabonba::Json& j, HotelGoodsQueryResponseBodyModuleRoomsRates& obj) { 
      DARABONBA_PTR_FROM_JSON(bed_desc, bedDesc_);
      DARABONBA_PTR_FROM_JSON(bed_type, bedType_);
      DARABONBA_PTR_FROM_JSON(breakfast, breakfast_);
      DARABONBA_PTR_FROM_JSON(btrip_cancel_rule, btripCancelRule_);
      DARABONBA_PTR_FROM_JSON(btrip_hotel_cancel_desc, btripHotelCancelDesc_);
      DARABONBA_PTR_FROM_JSON(can_smoking, canSmoking_);
      DARABONBA_PTR_FROM_JSON(cancel_policy_desc, cancelPolicyDesc_);
      DARABONBA_PTR_FROM_JSON(cancel_policy_type, cancelPolicyType_);
      DARABONBA_PTR_FROM_JSON(company_aassist, companyAassist_);
      DARABONBA_PTR_FROM_JSON(confirm_type, confirmType_);
      DARABONBA_PTR_FROM_JSON(currency_code, currencyCode_);
      DARABONBA_PTR_FROM_JSON(daily_price_format_yuan, dailyPriceFormatYuan_);
      DARABONBA_PTR_FROM_JSON(daily_price_view, dailyPriceView_);
      DARABONBA_PTR_FROM_JSON(discount_desc, discountDesc_);
      DARABONBA_PTR_FROM_JSON(end_time_daily, endTimeDaily_);
      DARABONBA_PTR_FROM_JSON(hotel_detail_rate_price_d_t_o, hotelDetailRatePriceDTO_);
      DARABONBA_PTR_FROM_JSON(instant_confirm, instantConfirm_);
      DARABONBA_PTR_FROM_JSON(inventory_desc, inventoryDesc_);
      DARABONBA_PTR_FROM_JSON(inventory_price, inventoryPrice_);
      DARABONBA_PTR_FROM_JSON(is_business_pay4_goods, isBusinessPay4Goods_);
      DARABONBA_PTR_FROM_JSON(is_guarantee, isGuarantee_);
      DARABONBA_PTR_FROM_JSON(is_need_email, isNeedEmail_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
      DARABONBA_PTR_FROM_JSON(last_cancel_time, lastCancelTime_);
      DARABONBA_PTR_FROM_JSON(max_occupancy, maxOccupancy_);
      DARABONBA_PTR_FROM_JSON(min_adv_hours, minAdvHours_);
      DARABONBA_PTR_FROM_JSON(min_days, minDays_);
      DARABONBA_PTR_FROM_JSON(nod, nod_);
      DARABONBA_PTR_FROM_JSON(nop, nop_);
      DARABONBA_PTR_FROM_JSON(order_ship_time, orderShipTime_);
      DARABONBA_PTR_FROM_JSON(payment_type, paymentType_);
      DARABONBA_PTR_FROM_JSON(price_type, priceType_);
      DARABONBA_PTR_FROM_JSON(promotion_info, promotionInfo_);
      DARABONBA_PTR_FROM_JSON(rate_id, rateId_);
      DARABONBA_PTR_FROM_JSON(rate_plan_name, ratePlanName_);
      DARABONBA_PTR_FROM_JSON(rp_id, rpId_);
      DARABONBA_PTR_FROM_JSON(seller_id, sellerId_);
      DARABONBA_PTR_FROM_JSON(start_time_daily, startTimeDaily_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(supplier_code, supplierCode_);
      DARABONBA_PTR_FROM_JSON(supplier_name, supplierName_);
      DARABONBA_PTR_FROM_JSON(support_special_invoice, supportSpecialInvoice_);
      DARABONBA_PTR_FROM_JSON(unrounding_daily_price_format_yuan, unroundingDailyPriceFormatYuan_);
    };
    HotelGoodsQueryResponseBodyModuleRoomsRates() = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRates(const HotelGoodsQueryResponseBodyModuleRoomsRates &) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRates(HotelGoodsQueryResponseBodyModuleRoomsRates &&) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelGoodsQueryResponseBodyModuleRoomsRates() = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRates& operator=(const HotelGoodsQueryResponseBodyModuleRoomsRates &) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRates& operator=(HotelGoodsQueryResponseBodyModuleRoomsRates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bedDesc_ != nullptr
        && this->bedType_ != nullptr && this->breakfast_ != nullptr && this->btripCancelRule_ != nullptr && this->btripHotelCancelDesc_ != nullptr && this->canSmoking_ != nullptr
        && this->cancelPolicyDesc_ != nullptr && this->cancelPolicyType_ != nullptr && this->companyAassist_ != nullptr && this->confirmType_ != nullptr && this->currencyCode_ != nullptr
        && this->dailyPriceFormatYuan_ != nullptr && this->dailyPriceView_ != nullptr && this->discountDesc_ != nullptr && this->endTimeDaily_ != nullptr && this->hotelDetailRatePriceDTO_ != nullptr
        && this->instantConfirm_ != nullptr && this->inventoryDesc_ != nullptr && this->inventoryPrice_ != nullptr && this->isBusinessPay4Goods_ != nullptr && this->isGuarantee_ != nullptr
        && this->isNeedEmail_ != nullptr && this->itemId_ != nullptr && this->lastCancelTime_ != nullptr && this->maxOccupancy_ != nullptr && this->minAdvHours_ != nullptr
        && this->minDays_ != nullptr && this->nod_ != nullptr && this->nop_ != nullptr && this->orderShipTime_ != nullptr && this->paymentType_ != nullptr
        && this->priceType_ != nullptr && this->promotionInfo_ != nullptr && this->rateId_ != nullptr && this->ratePlanName_ != nullptr && this->rpId_ != nullptr
        && this->sellerId_ != nullptr && this->startTimeDaily_ != nullptr && this->status_ != nullptr && this->supplierCode_ != nullptr && this->supplierName_ != nullptr
        && this->supportSpecialInvoice_ != nullptr && this->unroundingDailyPriceFormatYuan_ != nullptr; };
    // bedDesc Field Functions 
    bool hasBedDesc() const { return this->bedDesc_ != nullptr;};
    void deleteBedDesc() { this->bedDesc_ = nullptr;};
    inline string bedDesc() const { DARABONBA_PTR_GET_DEFAULT(bedDesc_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setBedDesc(string bedDesc) { DARABONBA_PTR_SET_VALUE(bedDesc_, bedDesc) };


    // bedType Field Functions 
    bool hasBedType() const { return this->bedType_ != nullptr;};
    void deleteBedType() { this->bedType_ = nullptr;};
    inline string bedType() const { DARABONBA_PTR_GET_DEFAULT(bedType_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setBedType(string bedType) { DARABONBA_PTR_SET_VALUE(bedType_, bedType) };


    // breakfast Field Functions 
    bool hasBreakfast() const { return this->breakfast_ != nullptr;};
    void deleteBreakfast() { this->breakfast_ = nullptr;};
    inline string breakfast() const { DARABONBA_PTR_GET_DEFAULT(breakfast_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setBreakfast(string breakfast) { DARABONBA_PTR_SET_VALUE(breakfast_, breakfast) };


    // btripCancelRule Field Functions 
    bool hasBtripCancelRule() const { return this->btripCancelRule_ != nullptr;};
    void deleteBtripCancelRule() { this->btripCancelRule_ = nullptr;};
    inline const Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule & btripCancelRule() const { DARABONBA_PTR_GET_CONST(btripCancelRule_, Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule) };
    inline Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule btripCancelRule() { DARABONBA_PTR_GET(btripCancelRule_, Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setBtripCancelRule(const Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule & btripCancelRule) { DARABONBA_PTR_SET_VALUE(btripCancelRule_, btripCancelRule) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setBtripCancelRule(Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule && btripCancelRule) { DARABONBA_PTR_SET_RVALUE(btripCancelRule_, btripCancelRule) };


    // btripHotelCancelDesc Field Functions 
    bool hasBtripHotelCancelDesc() const { return this->btripHotelCancelDesc_ != nullptr;};
    void deleteBtripHotelCancelDesc() { this->btripHotelCancelDesc_ = nullptr;};
    inline const vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripHotelCancelDesc> & btripHotelCancelDesc() const { DARABONBA_PTR_GET_CONST(btripHotelCancelDesc_, vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripHotelCancelDesc>) };
    inline vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripHotelCancelDesc> btripHotelCancelDesc() { DARABONBA_PTR_GET(btripHotelCancelDesc_, vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripHotelCancelDesc>) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setBtripHotelCancelDesc(const vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripHotelCancelDesc> & btripHotelCancelDesc) { DARABONBA_PTR_SET_VALUE(btripHotelCancelDesc_, btripHotelCancelDesc) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setBtripHotelCancelDesc(vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripHotelCancelDesc> && btripHotelCancelDesc) { DARABONBA_PTR_SET_RVALUE(btripHotelCancelDesc_, btripHotelCancelDesc) };


    // canSmoking Field Functions 
    bool hasCanSmoking() const { return this->canSmoking_ != nullptr;};
    void deleteCanSmoking() { this->canSmoking_ = nullptr;};
    inline bool canSmoking() const { DARABONBA_PTR_GET_DEFAULT(canSmoking_, false) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setCanSmoking(bool canSmoking) { DARABONBA_PTR_SET_VALUE(canSmoking_, canSmoking) };


    // cancelPolicyDesc Field Functions 
    bool hasCancelPolicyDesc() const { return this->cancelPolicyDesc_ != nullptr;};
    void deleteCancelPolicyDesc() { this->cancelPolicyDesc_ = nullptr;};
    inline string cancelPolicyDesc() const { DARABONBA_PTR_GET_DEFAULT(cancelPolicyDesc_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setCancelPolicyDesc(string cancelPolicyDesc) { DARABONBA_PTR_SET_VALUE(cancelPolicyDesc_, cancelPolicyDesc) };


    // cancelPolicyType Field Functions 
    bool hasCancelPolicyType() const { return this->cancelPolicyType_ != nullptr;};
    void deleteCancelPolicyType() { this->cancelPolicyType_ = nullptr;};
    inline int32_t cancelPolicyType() const { DARABONBA_PTR_GET_DEFAULT(cancelPolicyType_, 0) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setCancelPolicyType(int32_t cancelPolicyType) { DARABONBA_PTR_SET_VALUE(cancelPolicyType_, cancelPolicyType) };


    // companyAassist Field Functions 
    bool hasCompanyAassist() const { return this->companyAassist_ != nullptr;};
    void deleteCompanyAassist() { this->companyAassist_ = nullptr;};
    inline string companyAassist() const { DARABONBA_PTR_GET_DEFAULT(companyAassist_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setCompanyAassist(string companyAassist) { DARABONBA_PTR_SET_VALUE(companyAassist_, companyAassist) };


    // confirmType Field Functions 
    bool hasConfirmType() const { return this->confirmType_ != nullptr;};
    void deleteConfirmType() { this->confirmType_ = nullptr;};
    inline int32_t confirmType() const { DARABONBA_PTR_GET_DEFAULT(confirmType_, 0) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setConfirmType(int32_t confirmType) { DARABONBA_PTR_SET_VALUE(confirmType_, confirmType) };


    // currencyCode Field Functions 
    bool hasCurrencyCode() const { return this->currencyCode_ != nullptr;};
    void deleteCurrencyCode() { this->currencyCode_ = nullptr;};
    inline string currencyCode() const { DARABONBA_PTR_GET_DEFAULT(currencyCode_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setCurrencyCode(string currencyCode) { DARABONBA_PTR_SET_VALUE(currencyCode_, currencyCode) };


    // dailyPriceFormatYuan Field Functions 
    bool hasDailyPriceFormatYuan() const { return this->dailyPriceFormatYuan_ != nullptr;};
    void deleteDailyPriceFormatYuan() { this->dailyPriceFormatYuan_ = nullptr;};
    inline string dailyPriceFormatYuan() const { DARABONBA_PTR_GET_DEFAULT(dailyPriceFormatYuan_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setDailyPriceFormatYuan(string dailyPriceFormatYuan) { DARABONBA_PTR_SET_VALUE(dailyPriceFormatYuan_, dailyPriceFormatYuan) };


    // dailyPriceView Field Functions 
    bool hasDailyPriceView() const { return this->dailyPriceView_ != nullptr;};
    void deleteDailyPriceView() { this->dailyPriceView_ = nullptr;};
    inline string dailyPriceView() const { DARABONBA_PTR_GET_DEFAULT(dailyPriceView_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setDailyPriceView(string dailyPriceView) { DARABONBA_PTR_SET_VALUE(dailyPriceView_, dailyPriceView) };


    // discountDesc Field Functions 
    bool hasDiscountDesc() const { return this->discountDesc_ != nullptr;};
    void deleteDiscountDesc() { this->discountDesc_ = nullptr;};
    inline const Models::HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc & discountDesc() const { DARABONBA_PTR_GET_CONST(discountDesc_, Models::HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc) };
    inline Models::HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc discountDesc() { DARABONBA_PTR_GET(discountDesc_, Models::HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setDiscountDesc(const Models::HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc & discountDesc) { DARABONBA_PTR_SET_VALUE(discountDesc_, discountDesc) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setDiscountDesc(Models::HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc && discountDesc) { DARABONBA_PTR_SET_RVALUE(discountDesc_, discountDesc) };


    // endTimeDaily Field Functions 
    bool hasEndTimeDaily() const { return this->endTimeDaily_ != nullptr;};
    void deleteEndTimeDaily() { this->endTimeDaily_ = nullptr;};
    inline string endTimeDaily() const { DARABONBA_PTR_GET_DEFAULT(endTimeDaily_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setEndTimeDaily(string endTimeDaily) { DARABONBA_PTR_SET_VALUE(endTimeDaily_, endTimeDaily) };


    // hotelDetailRatePriceDTO Field Functions 
    bool hasHotelDetailRatePriceDTO() const { return this->hotelDetailRatePriceDTO_ != nullptr;};
    void deleteHotelDetailRatePriceDTO() { this->hotelDetailRatePriceDTO_ = nullptr;};
    inline const vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO> & hotelDetailRatePriceDTO() const { DARABONBA_PTR_GET_CONST(hotelDetailRatePriceDTO_, vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO>) };
    inline vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO> hotelDetailRatePriceDTO() { DARABONBA_PTR_GET(hotelDetailRatePriceDTO_, vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO>) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setHotelDetailRatePriceDTO(const vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO> & hotelDetailRatePriceDTO) { DARABONBA_PTR_SET_VALUE(hotelDetailRatePriceDTO_, hotelDetailRatePriceDTO) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setHotelDetailRatePriceDTO(vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO> && hotelDetailRatePriceDTO) { DARABONBA_PTR_SET_RVALUE(hotelDetailRatePriceDTO_, hotelDetailRatePriceDTO) };


    // instantConfirm Field Functions 
    bool hasInstantConfirm() const { return this->instantConfirm_ != nullptr;};
    void deleteInstantConfirm() { this->instantConfirm_ = nullptr;};
    inline bool instantConfirm() const { DARABONBA_PTR_GET_DEFAULT(instantConfirm_, false) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setInstantConfirm(bool instantConfirm) { DARABONBA_PTR_SET_VALUE(instantConfirm_, instantConfirm) };


    // inventoryDesc Field Functions 
    bool hasInventoryDesc() const { return this->inventoryDesc_ != nullptr;};
    void deleteInventoryDesc() { this->inventoryDesc_ = nullptr;};
    inline string inventoryDesc() const { DARABONBA_PTR_GET_DEFAULT(inventoryDesc_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setInventoryDesc(string inventoryDesc) { DARABONBA_PTR_SET_VALUE(inventoryDesc_, inventoryDesc) };


    // inventoryPrice Field Functions 
    bool hasInventoryPrice() const { return this->inventoryPrice_ != nullptr;};
    void deleteInventoryPrice() { this->inventoryPrice_ = nullptr;};
    inline string inventoryPrice() const { DARABONBA_PTR_GET_DEFAULT(inventoryPrice_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setInventoryPrice(string inventoryPrice) { DARABONBA_PTR_SET_VALUE(inventoryPrice_, inventoryPrice) };


    // isBusinessPay4Goods Field Functions 
    bool hasIsBusinessPay4Goods() const { return this->isBusinessPay4Goods_ != nullptr;};
    void deleteIsBusinessPay4Goods() { this->isBusinessPay4Goods_ = nullptr;};
    inline bool isBusinessPay4Goods() const { DARABONBA_PTR_GET_DEFAULT(isBusinessPay4Goods_, false) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setIsBusinessPay4Goods(bool isBusinessPay4Goods) { DARABONBA_PTR_SET_VALUE(isBusinessPay4Goods_, isBusinessPay4Goods) };


    // isGuarantee Field Functions 
    bool hasIsGuarantee() const { return this->isGuarantee_ != nullptr;};
    void deleteIsGuarantee() { this->isGuarantee_ = nullptr;};
    inline int32_t isGuarantee() const { DARABONBA_PTR_GET_DEFAULT(isGuarantee_, 0) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setIsGuarantee(int32_t isGuarantee) { DARABONBA_PTR_SET_VALUE(isGuarantee_, isGuarantee) };


    // isNeedEmail Field Functions 
    bool hasIsNeedEmail() const { return this->isNeedEmail_ != nullptr;};
    void deleteIsNeedEmail() { this->isNeedEmail_ = nullptr;};
    inline bool isNeedEmail() const { DARABONBA_PTR_GET_DEFAULT(isNeedEmail_, false) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setIsNeedEmail(bool isNeedEmail) { DARABONBA_PTR_SET_VALUE(isNeedEmail_, isNeedEmail) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline int64_t itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // lastCancelTime Field Functions 
    bool hasLastCancelTime() const { return this->lastCancelTime_ != nullptr;};
    void deleteLastCancelTime() { this->lastCancelTime_ = nullptr;};
    inline string lastCancelTime() const { DARABONBA_PTR_GET_DEFAULT(lastCancelTime_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setLastCancelTime(string lastCancelTime) { DARABONBA_PTR_SET_VALUE(lastCancelTime_, lastCancelTime) };


    // maxOccupancy Field Functions 
    bool hasMaxOccupancy() const { return this->maxOccupancy_ != nullptr;};
    void deleteMaxOccupancy() { this->maxOccupancy_ = nullptr;};
    inline int32_t maxOccupancy() const { DARABONBA_PTR_GET_DEFAULT(maxOccupancy_, 0) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setMaxOccupancy(int32_t maxOccupancy) { DARABONBA_PTR_SET_VALUE(maxOccupancy_, maxOccupancy) };


    // minAdvHours Field Functions 
    bool hasMinAdvHours() const { return this->minAdvHours_ != nullptr;};
    void deleteMinAdvHours() { this->minAdvHours_ = nullptr;};
    inline int32_t minAdvHours() const { DARABONBA_PTR_GET_DEFAULT(minAdvHours_, 0) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setMinAdvHours(int32_t minAdvHours) { DARABONBA_PTR_SET_VALUE(minAdvHours_, minAdvHours) };


    // minDays Field Functions 
    bool hasMinDays() const { return this->minDays_ != nullptr;};
    void deleteMinDays() { this->minDays_ = nullptr;};
    inline int32_t minDays() const { DARABONBA_PTR_GET_DEFAULT(minDays_, 0) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setMinDays(int32_t minDays) { DARABONBA_PTR_SET_VALUE(minDays_, minDays) };


    // nod Field Functions 
    bool hasNod() const { return this->nod_ != nullptr;};
    void deleteNod() { this->nod_ = nullptr;};
    inline int32_t nod() const { DARABONBA_PTR_GET_DEFAULT(nod_, 0) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setNod(int32_t nod) { DARABONBA_PTR_SET_VALUE(nod_, nod) };


    // nop Field Functions 
    bool hasNop() const { return this->nop_ != nullptr;};
    void deleteNop() { this->nop_ = nullptr;};
    inline int32_t nop() const { DARABONBA_PTR_GET_DEFAULT(nop_, 0) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setNop(int32_t nop) { DARABONBA_PTR_SET_VALUE(nop_, nop) };


    // orderShipTime Field Functions 
    bool hasOrderShipTime() const { return this->orderShipTime_ != nullptr;};
    void deleteOrderShipTime() { this->orderShipTime_ = nullptr;};
    inline int32_t orderShipTime() const { DARABONBA_PTR_GET_DEFAULT(orderShipTime_, 0) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setOrderShipTime(int32_t orderShipTime) { DARABONBA_PTR_SET_VALUE(orderShipTime_, orderShipTime) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline int32_t paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, 0) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setPaymentType(int32_t paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // priceType Field Functions 
    bool hasPriceType() const { return this->priceType_ != nullptr;};
    void deletePriceType() { this->priceType_ = nullptr;};
    inline int32_t priceType() const { DARABONBA_PTR_GET_DEFAULT(priceType_, 0) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setPriceType(int32_t priceType) { DARABONBA_PTR_SET_VALUE(priceType_, priceType) };


    // promotionInfo Field Functions 
    bool hasPromotionInfo() const { return this->promotionInfo_ != nullptr;};
    void deletePromotionInfo() { this->promotionInfo_ = nullptr;};
    inline string promotionInfo() const { DARABONBA_PTR_GET_DEFAULT(promotionInfo_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setPromotionInfo(string promotionInfo) { DARABONBA_PTR_SET_VALUE(promotionInfo_, promotionInfo) };


    // rateId Field Functions 
    bool hasRateId() const { return this->rateId_ != nullptr;};
    void deleteRateId() { this->rateId_ = nullptr;};
    inline int64_t rateId() const { DARABONBA_PTR_GET_DEFAULT(rateId_, 0L) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setRateId(int64_t rateId) { DARABONBA_PTR_SET_VALUE(rateId_, rateId) };


    // ratePlanName Field Functions 
    bool hasRatePlanName() const { return this->ratePlanName_ != nullptr;};
    void deleteRatePlanName() { this->ratePlanName_ = nullptr;};
    inline string ratePlanName() const { DARABONBA_PTR_GET_DEFAULT(ratePlanName_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setRatePlanName(string ratePlanName) { DARABONBA_PTR_SET_VALUE(ratePlanName_, ratePlanName) };


    // rpId Field Functions 
    bool hasRpId() const { return this->rpId_ != nullptr;};
    void deleteRpId() { this->rpId_ = nullptr;};
    inline int64_t rpId() const { DARABONBA_PTR_GET_DEFAULT(rpId_, 0L) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setRpId(int64_t rpId) { DARABONBA_PTR_SET_VALUE(rpId_, rpId) };


    // sellerId Field Functions 
    bool hasSellerId() const { return this->sellerId_ != nullptr;};
    void deleteSellerId() { this->sellerId_ = nullptr;};
    inline int64_t sellerId() const { DARABONBA_PTR_GET_DEFAULT(sellerId_, 0L) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setSellerId(int64_t sellerId) { DARABONBA_PTR_SET_VALUE(sellerId_, sellerId) };


    // startTimeDaily Field Functions 
    bool hasStartTimeDaily() const { return this->startTimeDaily_ != nullptr;};
    void deleteStartTimeDaily() { this->startTimeDaily_ = nullptr;};
    inline string startTimeDaily() const { DARABONBA_PTR_GET_DEFAULT(startTimeDaily_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setStartTimeDaily(string startTimeDaily) { DARABONBA_PTR_SET_VALUE(startTimeDaily_, startTimeDaily) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supplierCode Field Functions 
    bool hasSupplierCode() const { return this->supplierCode_ != nullptr;};
    void deleteSupplierCode() { this->supplierCode_ = nullptr;};
    inline string supplierCode() const { DARABONBA_PTR_GET_DEFAULT(supplierCode_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setSupplierCode(string supplierCode) { DARABONBA_PTR_SET_VALUE(supplierCode_, supplierCode) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string supplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


    // supportSpecialInvoice Field Functions 
    bool hasSupportSpecialInvoice() const { return this->supportSpecialInvoice_ != nullptr;};
    void deleteSupportSpecialInvoice() { this->supportSpecialInvoice_ = nullptr;};
    inline bool supportSpecialInvoice() const { DARABONBA_PTR_GET_DEFAULT(supportSpecialInvoice_, false) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setSupportSpecialInvoice(bool supportSpecialInvoice) { DARABONBA_PTR_SET_VALUE(supportSpecialInvoice_, supportSpecialInvoice) };


    // unroundingDailyPriceFormatYuan Field Functions 
    bool hasUnroundingDailyPriceFormatYuan() const { return this->unroundingDailyPriceFormatYuan_ != nullptr;};
    void deleteUnroundingDailyPriceFormatYuan() { this->unroundingDailyPriceFormatYuan_ = nullptr;};
    inline string unroundingDailyPriceFormatYuan() const { DARABONBA_PTR_GET_DEFAULT(unroundingDailyPriceFormatYuan_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRates& setUnroundingDailyPriceFormatYuan(string unroundingDailyPriceFormatYuan) { DARABONBA_PTR_SET_VALUE(unroundingDailyPriceFormatYuan_, unroundingDailyPriceFormatYuan) };


  protected:
    std::shared_ptr<string> bedDesc_ = nullptr;
    std::shared_ptr<string> bedType_ = nullptr;
    std::shared_ptr<string> breakfast_ = nullptr;
    std::shared_ptr<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripCancelRule> btripCancelRule_ = nullptr;
    std::shared_ptr<vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesBtripHotelCancelDesc>> btripHotelCancelDesc_ = nullptr;
    std::shared_ptr<bool> canSmoking_ = nullptr;
    std::shared_ptr<string> cancelPolicyDesc_ = nullptr;
    std::shared_ptr<int32_t> cancelPolicyType_ = nullptr;
    std::shared_ptr<string> companyAassist_ = nullptr;
    std::shared_ptr<int32_t> confirmType_ = nullptr;
    std::shared_ptr<string> currencyCode_ = nullptr;
    std::shared_ptr<string> dailyPriceFormatYuan_ = nullptr;
    std::shared_ptr<string> dailyPriceView_ = nullptr;
    std::shared_ptr<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc> discountDesc_ = nullptr;
    std::shared_ptr<string> endTimeDaily_ = nullptr;
    std::shared_ptr<vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesHotelDetailRatePriceDTO>> hotelDetailRatePriceDTO_ = nullptr;
    std::shared_ptr<bool> instantConfirm_ = nullptr;
    std::shared_ptr<string> inventoryDesc_ = nullptr;
    std::shared_ptr<string> inventoryPrice_ = nullptr;
    std::shared_ptr<bool> isBusinessPay4Goods_ = nullptr;
    std::shared_ptr<int32_t> isGuarantee_ = nullptr;
    std::shared_ptr<bool> isNeedEmail_ = nullptr;
    std::shared_ptr<int64_t> itemId_ = nullptr;
    std::shared_ptr<string> lastCancelTime_ = nullptr;
    std::shared_ptr<int32_t> maxOccupancy_ = nullptr;
    std::shared_ptr<int32_t> minAdvHours_ = nullptr;
    std::shared_ptr<int32_t> minDays_ = nullptr;
    std::shared_ptr<int32_t> nod_ = nullptr;
    std::shared_ptr<int32_t> nop_ = nullptr;
    std::shared_ptr<int32_t> orderShipTime_ = nullptr;
    std::shared_ptr<int32_t> paymentType_ = nullptr;
    std::shared_ptr<int32_t> priceType_ = nullptr;
    std::shared_ptr<string> promotionInfo_ = nullptr;
    std::shared_ptr<int64_t> rateId_ = nullptr;
    std::shared_ptr<string> ratePlanName_ = nullptr;
    std::shared_ptr<int64_t> rpId_ = nullptr;
    std::shared_ptr<int64_t> sellerId_ = nullptr;
    std::shared_ptr<string> startTimeDaily_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> supplierCode_ = nullptr;
    std::shared_ptr<string> supplierName_ = nullptr;
    std::shared_ptr<bool> supportSpecialInvoice_ = nullptr;
    std::shared_ptr<string> unroundingDailyPriceFormatYuan_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
