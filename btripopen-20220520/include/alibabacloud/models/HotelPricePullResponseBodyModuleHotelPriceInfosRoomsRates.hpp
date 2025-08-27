// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELPRICEPULLRESPONSEBODYMODULEHOTELPRICEINFOSROOMSRATES_HPP_
#define ALIBABACLOUD_MODELS_HOTELPRICEPULLRESPONSEBODYMODULEHOTELPRICEINFOSROOMSRATES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesBtripHotelCancelPolicy.hpp>
#include <vector>
#include <alibabacloud/models/HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& obj) { 
      DARABONBA_PTR_TO_JSON(breakfast, breakfast_);
      DARABONBA_PTR_TO_JSON(breakfast_count, breakfastCount_);
      DARABONBA_PTR_TO_JSON(btrip_hotel_cancel_policy, btripHotelCancelPolicy_);
      DARABONBA_PTR_TO_JSON(cancel_policy_desc, cancelPolicyDesc_);
      DARABONBA_PTR_TO_JSON(company_aassist, companyAassist_);
      DARABONBA_PTR_TO_JSON(currency_code, currencyCode_);
      DARABONBA_PTR_TO_JSON(instant_confirm, instantConfirm_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
      DARABONBA_PTR_TO_JSON(max_adv_hours, maxAdvHours_);
      DARABONBA_PTR_TO_JSON(max_days, maxDays_);
      DARABONBA_PTR_TO_JSON(min_adv_hours, minAdvHours_);
      DARABONBA_PTR_TO_JSON(min_days, minDays_);
      DARABONBA_PTR_TO_JSON(nod, nod_);
      DARABONBA_PTR_TO_JSON(nop, nop_);
      DARABONBA_PTR_TO_JSON(payment_type, paymentType_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(promotion_info, promotionInfo_);
      DARABONBA_PTR_TO_JSON(quota, quota_);
      DARABONBA_PTR_TO_JSON(rate_dailys, rateDailys_);
      DARABONBA_PTR_TO_JSON(rate_id, rateId_);
      DARABONBA_PTR_TO_JSON(rate_plan_name, ratePlanName_);
      DARABONBA_PTR_TO_JSON(rp_id, rpId_);
      DARABONBA_PTR_TO_JSON(seller_id, sellerId_);
      DARABONBA_PTR_TO_JSON(support_special_invoice, supportSpecialInvoice_);
    };
    friend void from_json(const Darabonba::Json& j, HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& obj) { 
      DARABONBA_PTR_FROM_JSON(breakfast, breakfast_);
      DARABONBA_PTR_FROM_JSON(breakfast_count, breakfastCount_);
      DARABONBA_PTR_FROM_JSON(btrip_hotel_cancel_policy, btripHotelCancelPolicy_);
      DARABONBA_PTR_FROM_JSON(cancel_policy_desc, cancelPolicyDesc_);
      DARABONBA_PTR_FROM_JSON(company_aassist, companyAassist_);
      DARABONBA_PTR_FROM_JSON(currency_code, currencyCode_);
      DARABONBA_PTR_FROM_JSON(instant_confirm, instantConfirm_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
      DARABONBA_PTR_FROM_JSON(max_adv_hours, maxAdvHours_);
      DARABONBA_PTR_FROM_JSON(max_days, maxDays_);
      DARABONBA_PTR_FROM_JSON(min_adv_hours, minAdvHours_);
      DARABONBA_PTR_FROM_JSON(min_days, minDays_);
      DARABONBA_PTR_FROM_JSON(nod, nod_);
      DARABONBA_PTR_FROM_JSON(nop, nop_);
      DARABONBA_PTR_FROM_JSON(payment_type, paymentType_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(promotion_info, promotionInfo_);
      DARABONBA_PTR_FROM_JSON(quota, quota_);
      DARABONBA_PTR_FROM_JSON(rate_dailys, rateDailys_);
      DARABONBA_PTR_FROM_JSON(rate_id, rateId_);
      DARABONBA_PTR_FROM_JSON(rate_plan_name, ratePlanName_);
      DARABONBA_PTR_FROM_JSON(rp_id, rpId_);
      DARABONBA_PTR_FROM_JSON(seller_id, sellerId_);
      DARABONBA_PTR_FROM_JSON(support_special_invoice, supportSpecialInvoice_);
    };
    HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates() = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates(const HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates &) = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates(HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates &&) = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates() = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& operator=(const HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates &) = default ;
    HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& operator=(HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->breakfast_ != nullptr
        && this->breakfastCount_ != nullptr && this->btripHotelCancelPolicy_ != nullptr && this->cancelPolicyDesc_ != nullptr && this->companyAassist_ != nullptr && this->currencyCode_ != nullptr
        && this->instantConfirm_ != nullptr && this->itemId_ != nullptr && this->maxAdvHours_ != nullptr && this->maxDays_ != nullptr && this->minAdvHours_ != nullptr
        && this->minDays_ != nullptr && this->nod_ != nullptr && this->nop_ != nullptr && this->paymentType_ != nullptr && this->price_ != nullptr
        && this->promotionInfo_ != nullptr && this->quota_ != nullptr && this->rateDailys_ != nullptr && this->rateId_ != nullptr && this->ratePlanName_ != nullptr
        && this->rpId_ != nullptr && this->sellerId_ != nullptr && this->supportSpecialInvoice_ != nullptr; };
    // breakfast Field Functions 
    bool hasBreakfast() const { return this->breakfast_ != nullptr;};
    void deleteBreakfast() { this->breakfast_ = nullptr;};
    inline string breakfast() const { DARABONBA_PTR_GET_DEFAULT(breakfast_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setBreakfast(string breakfast) { DARABONBA_PTR_SET_VALUE(breakfast_, breakfast) };


    // breakfastCount Field Functions 
    bool hasBreakfastCount() const { return this->breakfastCount_ != nullptr;};
    void deleteBreakfastCount() { this->breakfastCount_ = nullptr;};
    inline int32_t breakfastCount() const { DARABONBA_PTR_GET_DEFAULT(breakfastCount_, 0) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setBreakfastCount(int32_t breakfastCount) { DARABONBA_PTR_SET_VALUE(breakfastCount_, breakfastCount) };


    // btripHotelCancelPolicy Field Functions 
    bool hasBtripHotelCancelPolicy() const { return this->btripHotelCancelPolicy_ != nullptr;};
    void deleteBtripHotelCancelPolicy() { this->btripHotelCancelPolicy_ = nullptr;};
    inline const Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesBtripHotelCancelPolicy & btripHotelCancelPolicy() const { DARABONBA_PTR_GET_CONST(btripHotelCancelPolicy_, Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesBtripHotelCancelPolicy) };
    inline Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesBtripHotelCancelPolicy btripHotelCancelPolicy() { DARABONBA_PTR_GET(btripHotelCancelPolicy_, Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesBtripHotelCancelPolicy) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setBtripHotelCancelPolicy(const Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesBtripHotelCancelPolicy & btripHotelCancelPolicy) { DARABONBA_PTR_SET_VALUE(btripHotelCancelPolicy_, btripHotelCancelPolicy) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setBtripHotelCancelPolicy(Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesBtripHotelCancelPolicy && btripHotelCancelPolicy) { DARABONBA_PTR_SET_RVALUE(btripHotelCancelPolicy_, btripHotelCancelPolicy) };


    // cancelPolicyDesc Field Functions 
    bool hasCancelPolicyDesc() const { return this->cancelPolicyDesc_ != nullptr;};
    void deleteCancelPolicyDesc() { this->cancelPolicyDesc_ = nullptr;};
    inline string cancelPolicyDesc() const { DARABONBA_PTR_GET_DEFAULT(cancelPolicyDesc_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setCancelPolicyDesc(string cancelPolicyDesc) { DARABONBA_PTR_SET_VALUE(cancelPolicyDesc_, cancelPolicyDesc) };


    // companyAassist Field Functions 
    bool hasCompanyAassist() const { return this->companyAassist_ != nullptr;};
    void deleteCompanyAassist() { this->companyAassist_ = nullptr;};
    inline string companyAassist() const { DARABONBA_PTR_GET_DEFAULT(companyAassist_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setCompanyAassist(string companyAassist) { DARABONBA_PTR_SET_VALUE(companyAassist_, companyAassist) };


    // currencyCode Field Functions 
    bool hasCurrencyCode() const { return this->currencyCode_ != nullptr;};
    void deleteCurrencyCode() { this->currencyCode_ = nullptr;};
    inline string currencyCode() const { DARABONBA_PTR_GET_DEFAULT(currencyCode_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setCurrencyCode(string currencyCode) { DARABONBA_PTR_SET_VALUE(currencyCode_, currencyCode) };


    // instantConfirm Field Functions 
    bool hasInstantConfirm() const { return this->instantConfirm_ != nullptr;};
    void deleteInstantConfirm() { this->instantConfirm_ = nullptr;};
    inline bool instantConfirm() const { DARABONBA_PTR_GET_DEFAULT(instantConfirm_, false) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setInstantConfirm(bool instantConfirm) { DARABONBA_PTR_SET_VALUE(instantConfirm_, instantConfirm) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // maxAdvHours Field Functions 
    bool hasMaxAdvHours() const { return this->maxAdvHours_ != nullptr;};
    void deleteMaxAdvHours() { this->maxAdvHours_ = nullptr;};
    inline int32_t maxAdvHours() const { DARABONBA_PTR_GET_DEFAULT(maxAdvHours_, 0) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setMaxAdvHours(int32_t maxAdvHours) { DARABONBA_PTR_SET_VALUE(maxAdvHours_, maxAdvHours) };


    // maxDays Field Functions 
    bool hasMaxDays() const { return this->maxDays_ != nullptr;};
    void deleteMaxDays() { this->maxDays_ = nullptr;};
    inline int32_t maxDays() const { DARABONBA_PTR_GET_DEFAULT(maxDays_, 0) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setMaxDays(int32_t maxDays) { DARABONBA_PTR_SET_VALUE(maxDays_, maxDays) };


    // minAdvHours Field Functions 
    bool hasMinAdvHours() const { return this->minAdvHours_ != nullptr;};
    void deleteMinAdvHours() { this->minAdvHours_ = nullptr;};
    inline int32_t minAdvHours() const { DARABONBA_PTR_GET_DEFAULT(minAdvHours_, 0) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setMinAdvHours(int32_t minAdvHours) { DARABONBA_PTR_SET_VALUE(minAdvHours_, minAdvHours) };


    // minDays Field Functions 
    bool hasMinDays() const { return this->minDays_ != nullptr;};
    void deleteMinDays() { this->minDays_ = nullptr;};
    inline int32_t minDays() const { DARABONBA_PTR_GET_DEFAULT(minDays_, 0) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setMinDays(int32_t minDays) { DARABONBA_PTR_SET_VALUE(minDays_, minDays) };


    // nod Field Functions 
    bool hasNod() const { return this->nod_ != nullptr;};
    void deleteNod() { this->nod_ = nullptr;};
    inline int32_t nod() const { DARABONBA_PTR_GET_DEFAULT(nod_, 0) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setNod(int32_t nod) { DARABONBA_PTR_SET_VALUE(nod_, nod) };


    // nop Field Functions 
    bool hasNop() const { return this->nop_ != nullptr;};
    void deleteNop() { this->nop_ = nullptr;};
    inline int32_t nop() const { DARABONBA_PTR_GET_DEFAULT(nop_, 0) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setNop(int32_t nop) { DARABONBA_PTR_SET_VALUE(nop_, nop) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline int32_t paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, 0) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setPaymentType(int32_t paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // promotionInfo Field Functions 
    bool hasPromotionInfo() const { return this->promotionInfo_ != nullptr;};
    void deletePromotionInfo() { this->promotionInfo_ = nullptr;};
    inline string promotionInfo() const { DARABONBA_PTR_GET_DEFAULT(promotionInfo_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setPromotionInfo(string promotionInfo) { DARABONBA_PTR_SET_VALUE(promotionInfo_, promotionInfo) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline int32_t quota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setQuota(int32_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // rateDailys Field Functions 
    bool hasRateDailys() const { return this->rateDailys_ != nullptr;};
    void deleteRateDailys() { this->rateDailys_ = nullptr;};
    inline const vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys> & rateDailys() const { DARABONBA_PTR_GET_CONST(rateDailys_, vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys>) };
    inline vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys> rateDailys() { DARABONBA_PTR_GET(rateDailys_, vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys>) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setRateDailys(const vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys> & rateDailys) { DARABONBA_PTR_SET_VALUE(rateDailys_, rateDailys) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setRateDailys(vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys> && rateDailys) { DARABONBA_PTR_SET_RVALUE(rateDailys_, rateDailys) };


    // rateId Field Functions 
    bool hasRateId() const { return this->rateId_ != nullptr;};
    void deleteRateId() { this->rateId_ = nullptr;};
    inline string rateId() const { DARABONBA_PTR_GET_DEFAULT(rateId_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setRateId(string rateId) { DARABONBA_PTR_SET_VALUE(rateId_, rateId) };


    // ratePlanName Field Functions 
    bool hasRatePlanName() const { return this->ratePlanName_ != nullptr;};
    void deleteRatePlanName() { this->ratePlanName_ = nullptr;};
    inline string ratePlanName() const { DARABONBA_PTR_GET_DEFAULT(ratePlanName_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setRatePlanName(string ratePlanName) { DARABONBA_PTR_SET_VALUE(ratePlanName_, ratePlanName) };


    // rpId Field Functions 
    bool hasRpId() const { return this->rpId_ != nullptr;};
    void deleteRpId() { this->rpId_ = nullptr;};
    inline string rpId() const { DARABONBA_PTR_GET_DEFAULT(rpId_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setRpId(string rpId) { DARABONBA_PTR_SET_VALUE(rpId_, rpId) };


    // sellerId Field Functions 
    bool hasSellerId() const { return this->sellerId_ != nullptr;};
    void deleteSellerId() { this->sellerId_ = nullptr;};
    inline string sellerId() const { DARABONBA_PTR_GET_DEFAULT(sellerId_, "") };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setSellerId(string sellerId) { DARABONBA_PTR_SET_VALUE(sellerId_, sellerId) };


    // supportSpecialInvoice Field Functions 
    bool hasSupportSpecialInvoice() const { return this->supportSpecialInvoice_ != nullptr;};
    void deleteSupportSpecialInvoice() { this->supportSpecialInvoice_ = nullptr;};
    inline bool supportSpecialInvoice() const { DARABONBA_PTR_GET_DEFAULT(supportSpecialInvoice_, false) };
    inline HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRates& setSupportSpecialInvoice(bool supportSpecialInvoice) { DARABONBA_PTR_SET_VALUE(supportSpecialInvoice_, supportSpecialInvoice) };


  protected:
    std::shared_ptr<string> breakfast_ = nullptr;
    std::shared_ptr<int32_t> breakfastCount_ = nullptr;
    std::shared_ptr<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesBtripHotelCancelPolicy> btripHotelCancelPolicy_ = nullptr;
    std::shared_ptr<string> cancelPolicyDesc_ = nullptr;
    std::shared_ptr<string> companyAassist_ = nullptr;
    std::shared_ptr<string> currencyCode_ = nullptr;
    std::shared_ptr<bool> instantConfirm_ = nullptr;
    std::shared_ptr<string> itemId_ = nullptr;
    std::shared_ptr<int32_t> maxAdvHours_ = nullptr;
    std::shared_ptr<int32_t> maxDays_ = nullptr;
    std::shared_ptr<int32_t> minAdvHours_ = nullptr;
    std::shared_ptr<int32_t> minDays_ = nullptr;
    std::shared_ptr<int32_t> nod_ = nullptr;
    std::shared_ptr<int32_t> nop_ = nullptr;
    std::shared_ptr<int32_t> paymentType_ = nullptr;
    std::shared_ptr<int64_t> price_ = nullptr;
    std::shared_ptr<string> promotionInfo_ = nullptr;
    std::shared_ptr<int32_t> quota_ = nullptr;
    std::shared_ptr<vector<Models::HotelPricePullResponseBodyModuleHotelPriceInfosRoomsRatesRateDailys>> rateDailys_ = nullptr;
    std::shared_ptr<string> rateId_ = nullptr;
    std::shared_ptr<string> ratePlanName_ = nullptr;
    std::shared_ptr<string> rpId_ = nullptr;
    std::shared_ptr<string> sellerId_ = nullptr;
    std::shared_ptr<bool> supportSpecialInvoice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
