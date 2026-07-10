// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTCREATEORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTCREATEORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class TravelerInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TravelerInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(birthday, birthday_);
        DARABONBA_PTR_TO_JSON(cert_nation, certNation_);
        DARABONBA_PTR_TO_JSON(cert_no, certNo_);
        DARABONBA_PTR_TO_JSON(cert_type, certType_);
        DARABONBA_PTR_TO_JSON(cert_valid_date, certValidDate_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(nationality, nationality_);
        DARABONBA_PTR_TO_JSON(nationality_code, nationalityCode_);
        DARABONBA_PTR_TO_JSON(out_user_id, outUserId_);
        DARABONBA_PTR_TO_JSON(phone, phone_);
        DARABONBA_PTR_TO_JSON(sex, sex_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, TravelerInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(birthday, birthday_);
        DARABONBA_PTR_FROM_JSON(cert_nation, certNation_);
        DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
        DARABONBA_PTR_FROM_JSON(cert_type, certType_);
        DARABONBA_PTR_FROM_JSON(cert_valid_date, certValidDate_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(nationality, nationality_);
        DARABONBA_PTR_FROM_JSON(nationality_code, nationalityCode_);
        DARABONBA_PTR_FROM_JSON(out_user_id, outUserId_);
        DARABONBA_PTR_FROM_JSON(phone, phone_);
        DARABONBA_PTR_FROM_JSON(sex, sex_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      TravelerInfoList() = default ;
      TravelerInfoList(const TravelerInfoList &) = default ;
      TravelerInfoList(TravelerInfoList &&) = default ;
      TravelerInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TravelerInfoList() = default ;
      TravelerInfoList& operator=(const TravelerInfoList &) = default ;
      TravelerInfoList& operator=(TravelerInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->birthday_ == nullptr
        && this->certNation_ == nullptr && this->certNo_ == nullptr && this->certType_ == nullptr && this->certValidDate_ == nullptr && this->name_ == nullptr
        && this->nationality_ == nullptr && this->nationalityCode_ == nullptr && this->outUserId_ == nullptr && this->phone_ == nullptr && this->sex_ == nullptr
        && this->type_ == nullptr; };
      // birthday Field Functions 
      bool hasBirthday() const { return this->birthday_ != nullptr;};
      void deleteBirthday() { this->birthday_ = nullptr;};
      inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
      inline TravelerInfoList& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


      // certNation Field Functions 
      bool hasCertNation() const { return this->certNation_ != nullptr;};
      void deleteCertNation() { this->certNation_ = nullptr;};
      inline string getCertNation() const { DARABONBA_PTR_GET_DEFAULT(certNation_, "") };
      inline TravelerInfoList& setCertNation(string certNation) { DARABONBA_PTR_SET_VALUE(certNation_, certNation) };


      // certNo Field Functions 
      bool hasCertNo() const { return this->certNo_ != nullptr;};
      void deleteCertNo() { this->certNo_ = nullptr;};
      inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
      inline TravelerInfoList& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


      // certType Field Functions 
      bool hasCertType() const { return this->certType_ != nullptr;};
      void deleteCertType() { this->certType_ = nullptr;};
      inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
      inline TravelerInfoList& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


      // certValidDate Field Functions 
      bool hasCertValidDate() const { return this->certValidDate_ != nullptr;};
      void deleteCertValidDate() { this->certValidDate_ = nullptr;};
      inline string getCertValidDate() const { DARABONBA_PTR_GET_DEFAULT(certValidDate_, "") };
      inline TravelerInfoList& setCertValidDate(string certValidDate) { DARABONBA_PTR_SET_VALUE(certValidDate_, certValidDate) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TravelerInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nationality Field Functions 
      bool hasNationality() const { return this->nationality_ != nullptr;};
      void deleteNationality() { this->nationality_ = nullptr;};
      inline string getNationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
      inline TravelerInfoList& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


      // nationalityCode Field Functions 
      bool hasNationalityCode() const { return this->nationalityCode_ != nullptr;};
      void deleteNationalityCode() { this->nationalityCode_ = nullptr;};
      inline string getNationalityCode() const { DARABONBA_PTR_GET_DEFAULT(nationalityCode_, "") };
      inline TravelerInfoList& setNationalityCode(string nationalityCode) { DARABONBA_PTR_SET_VALUE(nationalityCode_, nationalityCode) };


      // outUserId Field Functions 
      bool hasOutUserId() const { return this->outUserId_ != nullptr;};
      void deleteOutUserId() { this->outUserId_ = nullptr;};
      inline string getOutUserId() const { DARABONBA_PTR_GET_DEFAULT(outUserId_, "") };
      inline TravelerInfoList& setOutUserId(string outUserId) { DARABONBA_PTR_SET_VALUE(outUserId_, outUserId) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline TravelerInfoList& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // sex Field Functions 
      bool hasSex() const { return this->sex_ != nullptr;};
      void deleteSex() { this->sex_ = nullptr;};
      inline int32_t getSex() const { DARABONBA_PTR_GET_DEFAULT(sex_, 0) };
      inline TravelerInfoList& setSex(int32_t sex) { DARABONBA_PTR_SET_VALUE(sex_, sex) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline TravelerInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> birthday_ {};
      shared_ptr<string> certNation_ {};
      // This parameter is required.
      shared_ptr<string> certNo_ {};
      // This parameter is required.
      shared_ptr<string> certType_ {};
      shared_ptr<string> certValidDate_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      shared_ptr<string> nationality_ {};
      shared_ptr<string> nationalityCode_ {};
      // This parameter is required.
      shared_ptr<string> outUserId_ {};
      // This parameter is required.
      shared_ptr<string> phone_ {};
      shared_ptr<int32_t> sex_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    class ContactInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContactInfo& obj) { 
        DARABONBA_PTR_TO_JSON(contact_email, contactEmail_);
        DARABONBA_PTR_TO_JSON(contact_name, contactName_);
        DARABONBA_PTR_TO_JSON(contact_phone, contactPhone_);
      };
      friend void from_json(const Darabonba::Json& j, ContactInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(contact_email, contactEmail_);
        DARABONBA_PTR_FROM_JSON(contact_name, contactName_);
        DARABONBA_PTR_FROM_JSON(contact_phone, contactPhone_);
      };
      ContactInfo() = default ;
      ContactInfo(const ContactInfo &) = default ;
      ContactInfo(ContactInfo &&) = default ;
      ContactInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContactInfo() = default ;
      ContactInfo& operator=(const ContactInfo &) = default ;
      ContactInfo& operator=(ContactInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contactEmail_ == nullptr
        && this->contactName_ == nullptr && this->contactPhone_ == nullptr; };
      // contactEmail Field Functions 
      bool hasContactEmail() const { return this->contactEmail_ != nullptr;};
      void deleteContactEmail() { this->contactEmail_ = nullptr;};
      inline string getContactEmail() const { DARABONBA_PTR_GET_DEFAULT(contactEmail_, "") };
      inline ContactInfo& setContactEmail(string contactEmail) { DARABONBA_PTR_SET_VALUE(contactEmail_, contactEmail) };


      // contactName Field Functions 
      bool hasContactName() const { return this->contactName_ != nullptr;};
      void deleteContactName() { this->contactName_ = nullptr;};
      inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
      inline ContactInfo& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


      // contactPhone Field Functions 
      bool hasContactPhone() const { return this->contactPhone_ != nullptr;};
      void deleteContactPhone() { this->contactPhone_ = nullptr;};
      inline string getContactPhone() const { DARABONBA_PTR_GET_DEFAULT(contactPhone_, "") };
      inline ContactInfo& setContactPhone(string contactPhone) { DARABONBA_PTR_SET_VALUE(contactPhone_, contactPhone) };


    protected:
      shared_ptr<string> contactEmail_ {};
      // This parameter is required.
      shared_ptr<string> contactName_ {};
      // This parameter is required.
      shared_ptr<string> contactPhone_ {};
    };

    virtual bool empty() const override { return this->arrAirportCode_ == nullptr
        && this->arrCityCode_ == nullptr && this->autoPay_ == nullptr && this->buyerName_ == nullptr && this->buyerUniqueKey_ == nullptr && this->contactInfo_ == nullptr
        && this->depAirportCode_ == nullptr && this->depCityCode_ == nullptr && this->depDate_ == nullptr && this->disOrderId_ == nullptr && this->orderAttr_ == nullptr
        && this->orderParams_ == nullptr && this->otaItemId_ == nullptr && this->price_ == nullptr && this->receiptAddress_ == nullptr && this->receiptTarget_ == nullptr
        && this->receiptTitle_ == nullptr && this->travelerInfoList_ == nullptr && this->tripType_ == nullptr; };
    // arrAirportCode Field Functions 
    bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
    void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
    inline string getArrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
    inline FlightCreateOrderRequest& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline FlightCreateOrderRequest& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline int32_t getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, 0) };
    inline FlightCreateOrderRequest& setAutoPay(int32_t autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string getBuyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline FlightCreateOrderRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // buyerUniqueKey Field Functions 
    bool hasBuyerUniqueKey() const { return this->buyerUniqueKey_ != nullptr;};
    void deleteBuyerUniqueKey() { this->buyerUniqueKey_ = nullptr;};
    inline string getBuyerUniqueKey() const { DARABONBA_PTR_GET_DEFAULT(buyerUniqueKey_, "") };
    inline FlightCreateOrderRequest& setBuyerUniqueKey(string buyerUniqueKey) { DARABONBA_PTR_SET_VALUE(buyerUniqueKey_, buyerUniqueKey) };


    // contactInfo Field Functions 
    bool hasContactInfo() const { return this->contactInfo_ != nullptr;};
    void deleteContactInfo() { this->contactInfo_ = nullptr;};
    inline const FlightCreateOrderRequest::ContactInfo & getContactInfo() const { DARABONBA_PTR_GET_CONST(contactInfo_, FlightCreateOrderRequest::ContactInfo) };
    inline FlightCreateOrderRequest::ContactInfo getContactInfo() { DARABONBA_PTR_GET(contactInfo_, FlightCreateOrderRequest::ContactInfo) };
    inline FlightCreateOrderRequest& setContactInfo(const FlightCreateOrderRequest::ContactInfo & contactInfo) { DARABONBA_PTR_SET_VALUE(contactInfo_, contactInfo) };
    inline FlightCreateOrderRequest& setContactInfo(FlightCreateOrderRequest::ContactInfo && contactInfo) { DARABONBA_PTR_SET_RVALUE(contactInfo_, contactInfo) };


    // depAirportCode Field Functions 
    bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
    void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
    inline string getDepAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
    inline FlightCreateOrderRequest& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightCreateOrderRequest& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string getDepDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline FlightCreateOrderRequest& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string getDisOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline FlightCreateOrderRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // orderAttr Field Functions 
    bool hasOrderAttr() const { return this->orderAttr_ != nullptr;};
    void deleteOrderAttr() { this->orderAttr_ = nullptr;};
    inline     const Darabonba::Json & getOrderAttr() const { DARABONBA_GET(orderAttr_) };
    Darabonba::Json & getOrderAttr() { DARABONBA_GET(orderAttr_) };
    inline FlightCreateOrderRequest& setOrderAttr(const Darabonba::Json & orderAttr) { DARABONBA_SET_VALUE(orderAttr_, orderAttr) };
    inline FlightCreateOrderRequest& setOrderAttr(Darabonba::Json && orderAttr) { DARABONBA_SET_RVALUE(orderAttr_, orderAttr) };


    // orderParams Field Functions 
    bool hasOrderParams() const { return this->orderParams_ != nullptr;};
    void deleteOrderParams() { this->orderParams_ = nullptr;};
    inline string getOrderParams() const { DARABONBA_PTR_GET_DEFAULT(orderParams_, "") };
    inline FlightCreateOrderRequest& setOrderParams(string orderParams) { DARABONBA_PTR_SET_VALUE(orderParams_, orderParams) };


    // otaItemId Field Functions 
    bool hasOtaItemId() const { return this->otaItemId_ != nullptr;};
    void deleteOtaItemId() { this->otaItemId_ = nullptr;};
    inline string getOtaItemId() const { DARABONBA_PTR_GET_DEFAULT(otaItemId_, "") };
    inline FlightCreateOrderRequest& setOtaItemId(string otaItemId) { DARABONBA_PTR_SET_VALUE(otaItemId_, otaItemId) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline FlightCreateOrderRequest& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // receiptAddress Field Functions 
    bool hasReceiptAddress() const { return this->receiptAddress_ != nullptr;};
    void deleteReceiptAddress() { this->receiptAddress_ = nullptr;};
    inline string getReceiptAddress() const { DARABONBA_PTR_GET_DEFAULT(receiptAddress_, "") };
    inline FlightCreateOrderRequest& setReceiptAddress(string receiptAddress) { DARABONBA_PTR_SET_VALUE(receiptAddress_, receiptAddress) };


    // receiptTarget Field Functions 
    bool hasReceiptTarget() const { return this->receiptTarget_ != nullptr;};
    void deleteReceiptTarget() { this->receiptTarget_ = nullptr;};
    inline int32_t getReceiptTarget() const { DARABONBA_PTR_GET_DEFAULT(receiptTarget_, 0) };
    inline FlightCreateOrderRequest& setReceiptTarget(int32_t receiptTarget) { DARABONBA_PTR_SET_VALUE(receiptTarget_, receiptTarget) };


    // receiptTitle Field Functions 
    bool hasReceiptTitle() const { return this->receiptTitle_ != nullptr;};
    void deleteReceiptTitle() { this->receiptTitle_ = nullptr;};
    inline string getReceiptTitle() const { DARABONBA_PTR_GET_DEFAULT(receiptTitle_, "") };
    inline FlightCreateOrderRequest& setReceiptTitle(string receiptTitle) { DARABONBA_PTR_SET_VALUE(receiptTitle_, receiptTitle) };


    // travelerInfoList Field Functions 
    bool hasTravelerInfoList() const { return this->travelerInfoList_ != nullptr;};
    void deleteTravelerInfoList() { this->travelerInfoList_ = nullptr;};
    inline const vector<FlightCreateOrderRequest::TravelerInfoList> & getTravelerInfoList() const { DARABONBA_PTR_GET_CONST(travelerInfoList_, vector<FlightCreateOrderRequest::TravelerInfoList>) };
    inline vector<FlightCreateOrderRequest::TravelerInfoList> getTravelerInfoList() { DARABONBA_PTR_GET(travelerInfoList_, vector<FlightCreateOrderRequest::TravelerInfoList>) };
    inline FlightCreateOrderRequest& setTravelerInfoList(const vector<FlightCreateOrderRequest::TravelerInfoList> & travelerInfoList) { DARABONBA_PTR_SET_VALUE(travelerInfoList_, travelerInfoList) };
    inline FlightCreateOrderRequest& setTravelerInfoList(vector<FlightCreateOrderRequest::TravelerInfoList> && travelerInfoList) { DARABONBA_PTR_SET_RVALUE(travelerInfoList_, travelerInfoList) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t getTripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline FlightCreateOrderRequest& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    shared_ptr<string> arrAirportCode_ {};
    // This parameter is required.
    shared_ptr<string> arrCityCode_ {};
    shared_ptr<int32_t> autoPay_ {};
    shared_ptr<string> buyerName_ {};
    // This parameter is required.
    shared_ptr<string> buyerUniqueKey_ {};
    // This parameter is required.
    shared_ptr<FlightCreateOrderRequest::ContactInfo> contactInfo_ {};
    shared_ptr<string> depAirportCode_ {};
    // This parameter is required.
    shared_ptr<string> depCityCode_ {};
    // This parameter is required.
    shared_ptr<string> depDate_ {};
    // This parameter is required.
    shared_ptr<string> disOrderId_ {};
    Darabonba::Json orderAttr_ {};
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
    shared_ptr<vector<FlightCreateOrderRequest::TravelerInfoList>> travelerInfoList_ {};
    // This parameter is required.
    shared_ptr<int32_t> tripType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
