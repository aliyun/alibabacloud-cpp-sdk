// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELGOODSQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELGOODSQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelGoodsQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelGoodsQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(adult_num, adultNum_);
      DARABONBA_PTR_TO_JSON(agreement_price, agreementPrice_);
      DARABONBA_PTR_TO_JSON(begin_date, beginDate_);
      DARABONBA_PTR_TO_JSON(breakfast_included, breakfastIncluded_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(city_code, cityCode_);
      DARABONBA_PTR_TO_JSON(end_date, endDate_);
      DARABONBA_PTR_TO_JSON(hotel_id, hotelId_);
      DARABONBA_PTR_TO_JSON(pay_over_type, payOverType_);
      DARABONBA_PTR_TO_JSON(payment_type, paymentType_);
      DARABONBA_PTR_TO_JSON(special_invoice, specialInvoice_);
      DARABONBA_PTR_TO_JSON(super_man, superMan_);
    };
    friend void from_json(const Darabonba::Json& j, HotelGoodsQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(adult_num, adultNum_);
      DARABONBA_PTR_FROM_JSON(agreement_price, agreementPrice_);
      DARABONBA_PTR_FROM_JSON(begin_date, beginDate_);
      DARABONBA_PTR_FROM_JSON(breakfast_included, breakfastIncluded_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
      DARABONBA_PTR_FROM_JSON(end_date, endDate_);
      DARABONBA_PTR_FROM_JSON(hotel_id, hotelId_);
      DARABONBA_PTR_FROM_JSON(pay_over_type, payOverType_);
      DARABONBA_PTR_FROM_JSON(payment_type, paymentType_);
      DARABONBA_PTR_FROM_JSON(special_invoice, specialInvoice_);
      DARABONBA_PTR_FROM_JSON(super_man, superMan_);
    };
    HotelGoodsQueryRequest() = default ;
    HotelGoodsQueryRequest(const HotelGoodsQueryRequest &) = default ;
    HotelGoodsQueryRequest(HotelGoodsQueryRequest &&) = default ;
    HotelGoodsQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelGoodsQueryRequest() = default ;
    HotelGoodsQueryRequest& operator=(const HotelGoodsQueryRequest &) = default ;
    HotelGoodsQueryRequest& operator=(HotelGoodsQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adultNum_ != nullptr
        && this->agreementPrice_ != nullptr && this->beginDate_ != nullptr && this->breakfastIncluded_ != nullptr && this->btripUserId_ != nullptr && this->cityCode_ != nullptr
        && this->endDate_ != nullptr && this->hotelId_ != nullptr && this->payOverType_ != nullptr && this->paymentType_ != nullptr && this->specialInvoice_ != nullptr
        && this->superMan_ != nullptr; };
    // adultNum Field Functions 
    bool hasAdultNum() const { return this->adultNum_ != nullptr;};
    void deleteAdultNum() { this->adultNum_ = nullptr;};
    inline string adultNum() const { DARABONBA_PTR_GET_DEFAULT(adultNum_, "") };
    inline HotelGoodsQueryRequest& setAdultNum(string adultNum) { DARABONBA_PTR_SET_VALUE(adultNum_, adultNum) };


    // agreementPrice Field Functions 
    bool hasAgreementPrice() const { return this->agreementPrice_ != nullptr;};
    void deleteAgreementPrice() { this->agreementPrice_ = nullptr;};
    inline bool agreementPrice() const { DARABONBA_PTR_GET_DEFAULT(agreementPrice_, false) };
    inline HotelGoodsQueryRequest& setAgreementPrice(bool agreementPrice) { DARABONBA_PTR_SET_VALUE(agreementPrice_, agreementPrice) };


    // beginDate Field Functions 
    bool hasBeginDate() const { return this->beginDate_ != nullptr;};
    void deleteBeginDate() { this->beginDate_ = nullptr;};
    inline string beginDate() const { DARABONBA_PTR_GET_DEFAULT(beginDate_, "") };
    inline HotelGoodsQueryRequest& setBeginDate(string beginDate) { DARABONBA_PTR_SET_VALUE(beginDate_, beginDate) };


    // breakfastIncluded Field Functions 
    bool hasBreakfastIncluded() const { return this->breakfastIncluded_ != nullptr;};
    void deleteBreakfastIncluded() { this->breakfastIncluded_ = nullptr;};
    inline bool breakfastIncluded() const { DARABONBA_PTR_GET_DEFAULT(breakfastIncluded_, false) };
    inline HotelGoodsQueryRequest& setBreakfastIncluded(bool breakfastIncluded) { DARABONBA_PTR_SET_VALUE(breakfastIncluded_, breakfastIncluded) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline HotelGoodsQueryRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline HotelGoodsQueryRequest& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline HotelGoodsQueryRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string hotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline HotelGoodsQueryRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // payOverType Field Functions 
    bool hasPayOverType() const { return this->payOverType_ != nullptr;};
    void deletePayOverType() { this->payOverType_ = nullptr;};
    inline int32_t payOverType() const { DARABONBA_PTR_GET_DEFAULT(payOverType_, 0) };
    inline HotelGoodsQueryRequest& setPayOverType(int32_t payOverType) { DARABONBA_PTR_SET_VALUE(payOverType_, payOverType) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline int32_t paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, 0) };
    inline HotelGoodsQueryRequest& setPaymentType(int32_t paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // specialInvoice Field Functions 
    bool hasSpecialInvoice() const { return this->specialInvoice_ != nullptr;};
    void deleteSpecialInvoice() { this->specialInvoice_ = nullptr;};
    inline bool specialInvoice() const { DARABONBA_PTR_GET_DEFAULT(specialInvoice_, false) };
    inline HotelGoodsQueryRequest& setSpecialInvoice(bool specialInvoice) { DARABONBA_PTR_SET_VALUE(specialInvoice_, specialInvoice) };


    // superMan Field Functions 
    bool hasSuperMan() const { return this->superMan_ != nullptr;};
    void deleteSuperMan() { this->superMan_ = nullptr;};
    inline int32_t superMan() const { DARABONBA_PTR_GET_DEFAULT(superMan_, 0) };
    inline HotelGoodsQueryRequest& setSuperMan(int32_t superMan) { DARABONBA_PTR_SET_VALUE(superMan_, superMan) };


  protected:
    std::shared_ptr<string> adultNum_ = nullptr;
    std::shared_ptr<bool> agreementPrice_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> beginDate_ = nullptr;
    std::shared_ptr<bool> breakfastIncluded_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<string> cityCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> hotelId_ = nullptr;
    std::shared_ptr<int32_t> payOverType_ = nullptr;
    std::shared_ptr<int32_t> paymentType_ = nullptr;
    std::shared_ptr<bool> specialInvoice_ = nullptr;
    std::shared_ptr<int32_t> superMan_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
