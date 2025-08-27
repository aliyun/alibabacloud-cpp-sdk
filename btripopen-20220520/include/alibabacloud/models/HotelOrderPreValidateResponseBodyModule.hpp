// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATERESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATERESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HotelOrderPreValidateResponseBodyModuleItemInvoice.hpp>
#include <alibabacloud/models/HotelOrderPreValidateResponseBodyModulePromotionInfo.hpp>
#include <vector>
#include <alibabacloud/models/HotelOrderPreValidateResponseBodyModuleRatePlanDaily.hpp>
#include <alibabacloud/models/HotelOrderPreValidateResponseBodyModuleRatePlanInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderPreValidateResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderPreValidateResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(extend_info, extendInfo_);
      DARABONBA_PTR_TO_JSON(item_invoice, itemInvoice_);
      DARABONBA_PTR_TO_JSON(itinerary_no, itineraryNo_);
      DARABONBA_PTR_TO_JSON(promotion_info, promotionInfo_);
      DARABONBA_PTR_TO_JSON(rate_plan_daily, ratePlanDaily_);
      DARABONBA_PTR_TO_JSON(rate_plan_id, ratePlanId_);
      DARABONBA_PTR_TO_JSON(rate_plan_info, ratePlanInfo_);
      DARABONBA_PTR_TO_JSON(validate_res_key, validateResKey_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderPreValidateResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(extend_info, extendInfo_);
      DARABONBA_PTR_FROM_JSON(item_invoice, itemInvoice_);
      DARABONBA_PTR_FROM_JSON(itinerary_no, itineraryNo_);
      DARABONBA_PTR_FROM_JSON(promotion_info, promotionInfo_);
      DARABONBA_PTR_FROM_JSON(rate_plan_daily, ratePlanDaily_);
      DARABONBA_PTR_FROM_JSON(rate_plan_id, ratePlanId_);
      DARABONBA_PTR_FROM_JSON(rate_plan_info, ratePlanInfo_);
      DARABONBA_PTR_FROM_JSON(validate_res_key, validateResKey_);
    };
    HotelOrderPreValidateResponseBodyModule() = default ;
    HotelOrderPreValidateResponseBodyModule(const HotelOrderPreValidateResponseBodyModule &) = default ;
    HotelOrderPreValidateResponseBodyModule(HotelOrderPreValidateResponseBodyModule &&) = default ;
    HotelOrderPreValidateResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderPreValidateResponseBodyModule() = default ;
    HotelOrderPreValidateResponseBodyModule& operator=(const HotelOrderPreValidateResponseBodyModule &) = default ;
    HotelOrderPreValidateResponseBodyModule& operator=(HotelOrderPreValidateResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extendInfo_ != nullptr
        && this->itemInvoice_ != nullptr && this->itineraryNo_ != nullptr && this->promotionInfo_ != nullptr && this->ratePlanDaily_ != nullptr && this->ratePlanId_ != nullptr
        && this->ratePlanInfo_ != nullptr && this->validateResKey_ != nullptr; };
    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline HotelOrderPreValidateResponseBodyModule& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // itemInvoice Field Functions 
    bool hasItemInvoice() const { return this->itemInvoice_ != nullptr;};
    void deleteItemInvoice() { this->itemInvoice_ = nullptr;};
    inline const Models::HotelOrderPreValidateResponseBodyModuleItemInvoice & itemInvoice() const { DARABONBA_PTR_GET_CONST(itemInvoice_, Models::HotelOrderPreValidateResponseBodyModuleItemInvoice) };
    inline Models::HotelOrderPreValidateResponseBodyModuleItemInvoice itemInvoice() { DARABONBA_PTR_GET(itemInvoice_, Models::HotelOrderPreValidateResponseBodyModuleItemInvoice) };
    inline HotelOrderPreValidateResponseBodyModule& setItemInvoice(const Models::HotelOrderPreValidateResponseBodyModuleItemInvoice & itemInvoice) { DARABONBA_PTR_SET_VALUE(itemInvoice_, itemInvoice) };
    inline HotelOrderPreValidateResponseBodyModule& setItemInvoice(Models::HotelOrderPreValidateResponseBodyModuleItemInvoice && itemInvoice) { DARABONBA_PTR_SET_RVALUE(itemInvoice_, itemInvoice) };


    // itineraryNo Field Functions 
    bool hasItineraryNo() const { return this->itineraryNo_ != nullptr;};
    void deleteItineraryNo() { this->itineraryNo_ = nullptr;};
    inline string itineraryNo() const { DARABONBA_PTR_GET_DEFAULT(itineraryNo_, "") };
    inline HotelOrderPreValidateResponseBodyModule& setItineraryNo(string itineraryNo) { DARABONBA_PTR_SET_VALUE(itineraryNo_, itineraryNo) };


    // promotionInfo Field Functions 
    bool hasPromotionInfo() const { return this->promotionInfo_ != nullptr;};
    void deletePromotionInfo() { this->promotionInfo_ = nullptr;};
    inline const Models::HotelOrderPreValidateResponseBodyModulePromotionInfo & promotionInfo() const { DARABONBA_PTR_GET_CONST(promotionInfo_, Models::HotelOrderPreValidateResponseBodyModulePromotionInfo) };
    inline Models::HotelOrderPreValidateResponseBodyModulePromotionInfo promotionInfo() { DARABONBA_PTR_GET(promotionInfo_, Models::HotelOrderPreValidateResponseBodyModulePromotionInfo) };
    inline HotelOrderPreValidateResponseBodyModule& setPromotionInfo(const Models::HotelOrderPreValidateResponseBodyModulePromotionInfo & promotionInfo) { DARABONBA_PTR_SET_VALUE(promotionInfo_, promotionInfo) };
    inline HotelOrderPreValidateResponseBodyModule& setPromotionInfo(Models::HotelOrderPreValidateResponseBodyModulePromotionInfo && promotionInfo) { DARABONBA_PTR_SET_RVALUE(promotionInfo_, promotionInfo) };


    // ratePlanDaily Field Functions 
    bool hasRatePlanDaily() const { return this->ratePlanDaily_ != nullptr;};
    void deleteRatePlanDaily() { this->ratePlanDaily_ = nullptr;};
    inline const vector<Models::HotelOrderPreValidateResponseBodyModuleRatePlanDaily> & ratePlanDaily() const { DARABONBA_PTR_GET_CONST(ratePlanDaily_, vector<Models::HotelOrderPreValidateResponseBodyModuleRatePlanDaily>) };
    inline vector<Models::HotelOrderPreValidateResponseBodyModuleRatePlanDaily> ratePlanDaily() { DARABONBA_PTR_GET(ratePlanDaily_, vector<Models::HotelOrderPreValidateResponseBodyModuleRatePlanDaily>) };
    inline HotelOrderPreValidateResponseBodyModule& setRatePlanDaily(const vector<Models::HotelOrderPreValidateResponseBodyModuleRatePlanDaily> & ratePlanDaily) { DARABONBA_PTR_SET_VALUE(ratePlanDaily_, ratePlanDaily) };
    inline HotelOrderPreValidateResponseBodyModule& setRatePlanDaily(vector<Models::HotelOrderPreValidateResponseBodyModuleRatePlanDaily> && ratePlanDaily) { DARABONBA_PTR_SET_RVALUE(ratePlanDaily_, ratePlanDaily) };


    // ratePlanId Field Functions 
    bool hasRatePlanId() const { return this->ratePlanId_ != nullptr;};
    void deleteRatePlanId() { this->ratePlanId_ = nullptr;};
    inline int64_t ratePlanId() const { DARABONBA_PTR_GET_DEFAULT(ratePlanId_, 0L) };
    inline HotelOrderPreValidateResponseBodyModule& setRatePlanId(int64_t ratePlanId) { DARABONBA_PTR_SET_VALUE(ratePlanId_, ratePlanId) };


    // ratePlanInfo Field Functions 
    bool hasRatePlanInfo() const { return this->ratePlanInfo_ != nullptr;};
    void deleteRatePlanInfo() { this->ratePlanInfo_ = nullptr;};
    inline const Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfo & ratePlanInfo() const { DARABONBA_PTR_GET_CONST(ratePlanInfo_, Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfo) };
    inline Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfo ratePlanInfo() { DARABONBA_PTR_GET(ratePlanInfo_, Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfo) };
    inline HotelOrderPreValidateResponseBodyModule& setRatePlanInfo(const Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfo & ratePlanInfo) { DARABONBA_PTR_SET_VALUE(ratePlanInfo_, ratePlanInfo) };
    inline HotelOrderPreValidateResponseBodyModule& setRatePlanInfo(Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfo && ratePlanInfo) { DARABONBA_PTR_SET_RVALUE(ratePlanInfo_, ratePlanInfo) };


    // validateResKey Field Functions 
    bool hasValidateResKey() const { return this->validateResKey_ != nullptr;};
    void deleteValidateResKey() { this->validateResKey_ = nullptr;};
    inline string validateResKey() const { DARABONBA_PTR_GET_DEFAULT(validateResKey_, "") };
    inline HotelOrderPreValidateResponseBodyModule& setValidateResKey(string validateResKey) { DARABONBA_PTR_SET_VALUE(validateResKey_, validateResKey) };


  protected:
    std::shared_ptr<string> extendInfo_ = nullptr;
    std::shared_ptr<Models::HotelOrderPreValidateResponseBodyModuleItemInvoice> itemInvoice_ = nullptr;
    std::shared_ptr<string> itineraryNo_ = nullptr;
    std::shared_ptr<Models::HotelOrderPreValidateResponseBodyModulePromotionInfo> promotionInfo_ = nullptr;
    std::shared_ptr<vector<Models::HotelOrderPreValidateResponseBodyModuleRatePlanDaily>> ratePlanDaily_ = nullptr;
    std::shared_ptr<int64_t> ratePlanId_ = nullptr;
    std::shared_ptr<Models::HotelOrderPreValidateResponseBodyModuleRatePlanInfo> ratePlanInfo_ = nullptr;
    std::shared_ptr<string> validateResKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
