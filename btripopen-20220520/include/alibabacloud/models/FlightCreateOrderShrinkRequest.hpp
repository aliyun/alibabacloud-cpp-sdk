// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTCREATEORDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTCREATEORDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightCreateOrderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightCreateOrderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(auto_pay, autoPay_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(buyer_unique_key, buyerUniqueKey_);
      DARABONBA_PTR_TO_JSON(contact_info, contactInfoShrink_);
      DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(order_attr, orderAttrShrink_);
      DARABONBA_PTR_TO_JSON(order_params, orderParams_);
      DARABONBA_PTR_TO_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(receipt_address, receiptAddress_);
      DARABONBA_PTR_TO_JSON(receipt_target, receiptTarget_);
      DARABONBA_PTR_TO_JSON(receipt_title, receiptTitle_);
      DARABONBA_PTR_TO_JSON(traveler_info_list, travelerInfoListShrink_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
    };
    friend void from_json(const Darabonba::Json& j, FlightCreateOrderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(auto_pay, autoPay_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(buyer_unique_key, buyerUniqueKey_);
      DARABONBA_PTR_FROM_JSON(contact_info, contactInfoShrink_);
      DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(order_attr, orderAttrShrink_);
      DARABONBA_PTR_FROM_JSON(order_params, orderParams_);
      DARABONBA_PTR_FROM_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(receipt_address, receiptAddress_);
      DARABONBA_PTR_FROM_JSON(receipt_target, receiptTarget_);
      DARABONBA_PTR_FROM_JSON(receipt_title, receiptTitle_);
      DARABONBA_PTR_FROM_JSON(traveler_info_list, travelerInfoListShrink_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
    };
    FlightCreateOrderShrinkRequest() = default ;
    FlightCreateOrderShrinkRequest(const FlightCreateOrderShrinkRequest &) = default ;
    FlightCreateOrderShrinkRequest(FlightCreateOrderShrinkRequest &&) = default ;
    FlightCreateOrderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightCreateOrderShrinkRequest() = default ;
    FlightCreateOrderShrinkRequest& operator=(const FlightCreateOrderShrinkRequest &) = default ;
    FlightCreateOrderShrinkRequest& operator=(FlightCreateOrderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arrAirportCode_ == nullptr
        && this->arrCityCode_ == nullptr && this->autoPay_ == nullptr && this->buyerName_ == nullptr && this->buyerUniqueKey_ == nullptr && this->contactInfoShrink_ == nullptr
        && this->depAirportCode_ == nullptr && this->depCityCode_ == nullptr && this->depDate_ == nullptr && this->disOrderId_ == nullptr && this->orderAttrShrink_ == nullptr
        && this->orderParams_ == nullptr && this->otaItemId_ == nullptr && this->price_ == nullptr && this->receiptAddress_ == nullptr && this->receiptTarget_ == nullptr
        && this->receiptTitle_ == nullptr && this->travelerInfoListShrink_ == nullptr && this->tripType_ == nullptr; };
    // arrAirportCode Field Functions 
    bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
    void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
    inline string getArrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
    inline FlightCreateOrderShrinkRequest& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline FlightCreateOrderShrinkRequest& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline int32_t getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, 0) };
    inline FlightCreateOrderShrinkRequest& setAutoPay(int32_t autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string getBuyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline FlightCreateOrderShrinkRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // buyerUniqueKey Field Functions 
    bool hasBuyerUniqueKey() const { return this->buyerUniqueKey_ != nullptr;};
    void deleteBuyerUniqueKey() { this->buyerUniqueKey_ = nullptr;};
    inline string getBuyerUniqueKey() const { DARABONBA_PTR_GET_DEFAULT(buyerUniqueKey_, "") };
    inline FlightCreateOrderShrinkRequest& setBuyerUniqueKey(string buyerUniqueKey) { DARABONBA_PTR_SET_VALUE(buyerUniqueKey_, buyerUniqueKey) };


    // contactInfoShrink Field Functions 
    bool hasContactInfoShrink() const { return this->contactInfoShrink_ != nullptr;};
    void deleteContactInfoShrink() { this->contactInfoShrink_ = nullptr;};
    inline string getContactInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(contactInfoShrink_, "") };
    inline FlightCreateOrderShrinkRequest& setContactInfoShrink(string contactInfoShrink) { DARABONBA_PTR_SET_VALUE(contactInfoShrink_, contactInfoShrink) };


    // depAirportCode Field Functions 
    bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
    void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
    inline string getDepAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
    inline FlightCreateOrderShrinkRequest& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightCreateOrderShrinkRequest& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string getDepDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline FlightCreateOrderShrinkRequest& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string getDisOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline FlightCreateOrderShrinkRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // orderAttrShrink Field Functions 
    bool hasOrderAttrShrink() const { return this->orderAttrShrink_ != nullptr;};
    void deleteOrderAttrShrink() { this->orderAttrShrink_ = nullptr;};
    inline string getOrderAttrShrink() const { DARABONBA_PTR_GET_DEFAULT(orderAttrShrink_, "") };
    inline FlightCreateOrderShrinkRequest& setOrderAttrShrink(string orderAttrShrink) { DARABONBA_PTR_SET_VALUE(orderAttrShrink_, orderAttrShrink) };


    // orderParams Field Functions 
    bool hasOrderParams() const { return this->orderParams_ != nullptr;};
    void deleteOrderParams() { this->orderParams_ = nullptr;};
    inline string getOrderParams() const { DARABONBA_PTR_GET_DEFAULT(orderParams_, "") };
    inline FlightCreateOrderShrinkRequest& setOrderParams(string orderParams) { DARABONBA_PTR_SET_VALUE(orderParams_, orderParams) };


    // otaItemId Field Functions 
    bool hasOtaItemId() const { return this->otaItemId_ != nullptr;};
    void deleteOtaItemId() { this->otaItemId_ = nullptr;};
    inline string getOtaItemId() const { DARABONBA_PTR_GET_DEFAULT(otaItemId_, "") };
    inline FlightCreateOrderShrinkRequest& setOtaItemId(string otaItemId) { DARABONBA_PTR_SET_VALUE(otaItemId_, otaItemId) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline FlightCreateOrderShrinkRequest& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // receiptAddress Field Functions 
    bool hasReceiptAddress() const { return this->receiptAddress_ != nullptr;};
    void deleteReceiptAddress() { this->receiptAddress_ = nullptr;};
    inline string getReceiptAddress() const { DARABONBA_PTR_GET_DEFAULT(receiptAddress_, "") };
    inline FlightCreateOrderShrinkRequest& setReceiptAddress(string receiptAddress) { DARABONBA_PTR_SET_VALUE(receiptAddress_, receiptAddress) };


    // receiptTarget Field Functions 
    bool hasReceiptTarget() const { return this->receiptTarget_ != nullptr;};
    void deleteReceiptTarget() { this->receiptTarget_ = nullptr;};
    inline int32_t getReceiptTarget() const { DARABONBA_PTR_GET_DEFAULT(receiptTarget_, 0) };
    inline FlightCreateOrderShrinkRequest& setReceiptTarget(int32_t receiptTarget) { DARABONBA_PTR_SET_VALUE(receiptTarget_, receiptTarget) };


    // receiptTitle Field Functions 
    bool hasReceiptTitle() const { return this->receiptTitle_ != nullptr;};
    void deleteReceiptTitle() { this->receiptTitle_ = nullptr;};
    inline string getReceiptTitle() const { DARABONBA_PTR_GET_DEFAULT(receiptTitle_, "") };
    inline FlightCreateOrderShrinkRequest& setReceiptTitle(string receiptTitle) { DARABONBA_PTR_SET_VALUE(receiptTitle_, receiptTitle) };


    // travelerInfoListShrink Field Functions 
    bool hasTravelerInfoListShrink() const { return this->travelerInfoListShrink_ != nullptr;};
    void deleteTravelerInfoListShrink() { this->travelerInfoListShrink_ = nullptr;};
    inline string getTravelerInfoListShrink() const { DARABONBA_PTR_GET_DEFAULT(travelerInfoListShrink_, "") };
    inline FlightCreateOrderShrinkRequest& setTravelerInfoListShrink(string travelerInfoListShrink) { DARABONBA_PTR_SET_VALUE(travelerInfoListShrink_, travelerInfoListShrink) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t getTripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline FlightCreateOrderShrinkRequest& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    shared_ptr<string> arrAirportCode_ {};
    // This parameter is required.
    shared_ptr<string> arrCityCode_ {};
    shared_ptr<int32_t> autoPay_ {};
    shared_ptr<string> buyerName_ {};
    // This parameter is required.
    shared_ptr<string> buyerUniqueKey_ {};
    // This parameter is required.
    shared_ptr<string> contactInfoShrink_ {};
    shared_ptr<string> depAirportCode_ {};
    // This parameter is required.
    shared_ptr<string> depCityCode_ {};
    // This parameter is required.
    shared_ptr<string> depDate_ {};
    // This parameter is required.
    shared_ptr<string> disOrderId_ {};
    shared_ptr<string> orderAttrShrink_ {};
    // This parameter is required.
    shared_ptr<string> orderParams_ {};
    // This parameter is required.
    shared_ptr<string> otaItemId_ {};
    // This parameter is required.
    shared_ptr<int64_t> price_ {};
    shared_ptr<string> receiptAddress_ {};
    shared_ptr<int32_t> receiptTarget_ {};
    shared_ptr<string> receiptTitle_ {};
    // This parameter is required.
    shared_ptr<string> travelerInfoListShrink_ {};
    // This parameter is required.
    shared_ptr<int32_t> tripType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
