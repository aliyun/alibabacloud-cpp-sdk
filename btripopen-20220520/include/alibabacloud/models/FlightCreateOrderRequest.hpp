// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTCREATEORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTCREATEORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightCreateOrderRequestContactInfo.hpp>
#include <vector>
#include <alibabacloud/models/FlightCreateOrderRequestTravelerInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightCreateOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightCreateOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(auto_pay, autoPay_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(buyer_unique_key, buyerUniqueKey_);
      DARABONBA_PTR_TO_JSON(contact_info, contactInfo_);
      DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_ANY_TO_JSON(order_attr, orderAttr_);
      DARABONBA_PTR_TO_JSON(order_params, orderParams_);
      DARABONBA_PTR_TO_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(receipt_address, receiptAddress_);
      DARABONBA_PTR_TO_JSON(receipt_target, receiptTarget_);
      DARABONBA_PTR_TO_JSON(receipt_title, receiptTitle_);
      DARABONBA_PTR_TO_JSON(traveler_info_list, travelerInfoList_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
    };
    friend void from_json(const Darabonba::Json& j, FlightCreateOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(auto_pay, autoPay_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(buyer_unique_key, buyerUniqueKey_);
      DARABONBA_PTR_FROM_JSON(contact_info, contactInfo_);
      DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_ANY_FROM_JSON(order_attr, orderAttr_);
      DARABONBA_PTR_FROM_JSON(order_params, orderParams_);
      DARABONBA_PTR_FROM_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(receipt_address, receiptAddress_);
      DARABONBA_PTR_FROM_JSON(receipt_target, receiptTarget_);
      DARABONBA_PTR_FROM_JSON(receipt_title, receiptTitle_);
      DARABONBA_PTR_FROM_JSON(traveler_info_list, travelerInfoList_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
    };
    FlightCreateOrderRequest() = default ;
    FlightCreateOrderRequest(const FlightCreateOrderRequest &) = default ;
    FlightCreateOrderRequest(FlightCreateOrderRequest &&) = default ;
    FlightCreateOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightCreateOrderRequest() = default ;
    FlightCreateOrderRequest& operator=(const FlightCreateOrderRequest &) = default ;
    FlightCreateOrderRequest& operator=(FlightCreateOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrAirportCode_ != nullptr
        && this->arrCityCode_ != nullptr && this->autoPay_ != nullptr && this->buyerName_ != nullptr && this->buyerUniqueKey_ != nullptr && this->contactInfo_ != nullptr
        && this->depAirportCode_ != nullptr && this->depCityCode_ != nullptr && this->depDate_ != nullptr && this->disOrderId_ != nullptr && this->orderAttr_ != nullptr
        && this->orderParams_ != nullptr && this->otaItemId_ != nullptr && this->price_ != nullptr && this->receiptAddress_ != nullptr && this->receiptTarget_ != nullptr
        && this->receiptTitle_ != nullptr && this->travelerInfoList_ != nullptr && this->tripType_ != nullptr; };
    // arrAirportCode Field Functions 
    bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
    void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
    inline string arrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
    inline FlightCreateOrderRequest& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline FlightCreateOrderRequest& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline int32_t autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, 0) };
    inline FlightCreateOrderRequest& setAutoPay(int32_t autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string buyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline FlightCreateOrderRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // buyerUniqueKey Field Functions 
    bool hasBuyerUniqueKey() const { return this->buyerUniqueKey_ != nullptr;};
    void deleteBuyerUniqueKey() { this->buyerUniqueKey_ = nullptr;};
    inline string buyerUniqueKey() const { DARABONBA_PTR_GET_DEFAULT(buyerUniqueKey_, "") };
    inline FlightCreateOrderRequest& setBuyerUniqueKey(string buyerUniqueKey) { DARABONBA_PTR_SET_VALUE(buyerUniqueKey_, buyerUniqueKey) };


    // contactInfo Field Functions 
    bool hasContactInfo() const { return this->contactInfo_ != nullptr;};
    void deleteContactInfo() { this->contactInfo_ = nullptr;};
    inline const FlightCreateOrderRequestContactInfo & contactInfo() const { DARABONBA_PTR_GET_CONST(contactInfo_, FlightCreateOrderRequestContactInfo) };
    inline FlightCreateOrderRequestContactInfo contactInfo() { DARABONBA_PTR_GET(contactInfo_, FlightCreateOrderRequestContactInfo) };
    inline FlightCreateOrderRequest& setContactInfo(const FlightCreateOrderRequestContactInfo & contactInfo) { DARABONBA_PTR_SET_VALUE(contactInfo_, contactInfo) };
    inline FlightCreateOrderRequest& setContactInfo(FlightCreateOrderRequestContactInfo && contactInfo) { DARABONBA_PTR_SET_RVALUE(contactInfo_, contactInfo) };


    // depAirportCode Field Functions 
    bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
    void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
    inline string depAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
    inline FlightCreateOrderRequest& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightCreateOrderRequest& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string depDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline FlightCreateOrderRequest& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline FlightCreateOrderRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // orderAttr Field Functions 
    bool hasOrderAttr() const { return this->orderAttr_ != nullptr;};
    void deleteOrderAttr() { this->orderAttr_ = nullptr;};
    inline     const Darabonba::Json & orderAttr() const { DARABONBA_GET(orderAttr_) };
    Darabonba::Json & orderAttr() { DARABONBA_GET(orderAttr_) };
    inline FlightCreateOrderRequest& setOrderAttr(const Darabonba::Json & orderAttr) { DARABONBA_SET_VALUE(orderAttr_, orderAttr) };
    inline FlightCreateOrderRequest& setOrderAttr(Darabonba::Json & orderAttr) { DARABONBA_SET_RVALUE(orderAttr_, orderAttr) };


    // orderParams Field Functions 
    bool hasOrderParams() const { return this->orderParams_ != nullptr;};
    void deleteOrderParams() { this->orderParams_ = nullptr;};
    inline string orderParams() const { DARABONBA_PTR_GET_DEFAULT(orderParams_, "") };
    inline FlightCreateOrderRequest& setOrderParams(string orderParams) { DARABONBA_PTR_SET_VALUE(orderParams_, orderParams) };


    // otaItemId Field Functions 
    bool hasOtaItemId() const { return this->otaItemId_ != nullptr;};
    void deleteOtaItemId() { this->otaItemId_ = nullptr;};
    inline string otaItemId() const { DARABONBA_PTR_GET_DEFAULT(otaItemId_, "") };
    inline FlightCreateOrderRequest& setOtaItemId(string otaItemId) { DARABONBA_PTR_SET_VALUE(otaItemId_, otaItemId) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline FlightCreateOrderRequest& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // receiptAddress Field Functions 
    bool hasReceiptAddress() const { return this->receiptAddress_ != nullptr;};
    void deleteReceiptAddress() { this->receiptAddress_ = nullptr;};
    inline string receiptAddress() const { DARABONBA_PTR_GET_DEFAULT(receiptAddress_, "") };
    inline FlightCreateOrderRequest& setReceiptAddress(string receiptAddress) { DARABONBA_PTR_SET_VALUE(receiptAddress_, receiptAddress) };


    // receiptTarget Field Functions 
    bool hasReceiptTarget() const { return this->receiptTarget_ != nullptr;};
    void deleteReceiptTarget() { this->receiptTarget_ = nullptr;};
    inline int32_t receiptTarget() const { DARABONBA_PTR_GET_DEFAULT(receiptTarget_, 0) };
    inline FlightCreateOrderRequest& setReceiptTarget(int32_t receiptTarget) { DARABONBA_PTR_SET_VALUE(receiptTarget_, receiptTarget) };


    // receiptTitle Field Functions 
    bool hasReceiptTitle() const { return this->receiptTitle_ != nullptr;};
    void deleteReceiptTitle() { this->receiptTitle_ = nullptr;};
    inline string receiptTitle() const { DARABONBA_PTR_GET_DEFAULT(receiptTitle_, "") };
    inline FlightCreateOrderRequest& setReceiptTitle(string receiptTitle) { DARABONBA_PTR_SET_VALUE(receiptTitle_, receiptTitle) };


    // travelerInfoList Field Functions 
    bool hasTravelerInfoList() const { return this->travelerInfoList_ != nullptr;};
    void deleteTravelerInfoList() { this->travelerInfoList_ = nullptr;};
    inline const vector<FlightCreateOrderRequestTravelerInfoList> & travelerInfoList() const { DARABONBA_PTR_GET_CONST(travelerInfoList_, vector<FlightCreateOrderRequestTravelerInfoList>) };
    inline vector<FlightCreateOrderRequestTravelerInfoList> travelerInfoList() { DARABONBA_PTR_GET(travelerInfoList_, vector<FlightCreateOrderRequestTravelerInfoList>) };
    inline FlightCreateOrderRequest& setTravelerInfoList(const vector<FlightCreateOrderRequestTravelerInfoList> & travelerInfoList) { DARABONBA_PTR_SET_VALUE(travelerInfoList_, travelerInfoList) };
    inline FlightCreateOrderRequest& setTravelerInfoList(vector<FlightCreateOrderRequestTravelerInfoList> && travelerInfoList) { DARABONBA_PTR_SET_RVALUE(travelerInfoList_, travelerInfoList) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline FlightCreateOrderRequest& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    std::shared_ptr<string> arrAirportCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<int32_t> autoPay_ = nullptr;
    std::shared_ptr<string> buyerName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> buyerUniqueKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<FlightCreateOrderRequestContactInfo> contactInfo_ = nullptr;
    std::shared_ptr<string> depAirportCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depCityCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> disOrderId_ = nullptr;
    Darabonba::Json orderAttr_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> orderParams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> otaItemId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> price_ = nullptr;
    std::shared_ptr<string> receiptAddress_ = nullptr;
    std::shared_ptr<int32_t> receiptTarget_ = nullptr;
    std::shared_ptr<string> receiptTitle_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<FlightCreateOrderRequestTravelerInfoList>> travelerInfoList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> tripType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
