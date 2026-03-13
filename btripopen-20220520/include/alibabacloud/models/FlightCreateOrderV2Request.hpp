// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTCREATEORDERV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTCREATEORDERV2REQUEST_HPP_
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
  class FlightCreateOrderV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightCreateOrderV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(async_create_order_key, asyncCreateOrderKey_);
      DARABONBA_PTR_TO_JSON(async_create_order_mode, asyncCreateOrderMode_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(contact_info, contactInfo_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(total_price_cent, totalPriceCent_);
      DARABONBA_PTR_TO_JSON(travelers, travelers_);
    };
    friend void from_json(const Darabonba::Json& j, FlightCreateOrderV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(async_create_order_key, asyncCreateOrderKey_);
      DARABONBA_PTR_FROM_JSON(async_create_order_mode, asyncCreateOrderMode_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(contact_info, contactInfo_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(total_price_cent, totalPriceCent_);
      DARABONBA_PTR_FROM_JSON(travelers, travelers_);
    };
    FlightCreateOrderV2Request() = default ;
    FlightCreateOrderV2Request(const FlightCreateOrderV2Request &) = default ;
    FlightCreateOrderV2Request(FlightCreateOrderV2Request &&) = default ;
    FlightCreateOrderV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightCreateOrderV2Request() = default ;
    FlightCreateOrderV2Request& operator=(const FlightCreateOrderV2Request &) = default ;
    FlightCreateOrderV2Request& operator=(FlightCreateOrderV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Travelers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Travelers& obj) { 
        DARABONBA_PTR_TO_JSON(birthday, birthday_);
        DARABONBA_PTR_TO_JSON(cert_nation, certNation_);
        DARABONBA_PTR_TO_JSON(cert_no, certNo_);
        DARABONBA_PTR_TO_JSON(cert_type, certType_);
        DARABONBA_PTR_TO_JSON(cert_valid_date, certValidDate_);
        DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
        DARABONBA_PTR_TO_JSON(cost_center_number, costCenterNumber_);
        DARABONBA_PTR_TO_JSON(dept_id, deptId_);
        DARABONBA_PTR_TO_JSON(dept_name, deptName_);
        DARABONBA_PTR_TO_JSON(gender, gender_);
        DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
        DARABONBA_PTR_TO_JSON(nationality, nationality_);
        DARABONBA_PTR_TO_JSON(nationality_code, nationalityCode_);
        DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
        DARABONBA_PTR_TO_JSON(passenger_type, passengerType_);
        DARABONBA_PTR_TO_JSON(phone, phone_);
        DARABONBA_PTR_TO_JSON(project_code, projectCode_);
        DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
        DARABONBA_PTR_TO_JSON(tax_number, taxNumber_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
        DARABONBA_PTR_TO_JSON(user_type, userType_);
      };
      friend void from_json(const Darabonba::Json& j, Travelers& obj) { 
        DARABONBA_PTR_FROM_JSON(birthday, birthday_);
        DARABONBA_PTR_FROM_JSON(cert_nation, certNation_);
        DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
        DARABONBA_PTR_FROM_JSON(cert_type, certType_);
        DARABONBA_PTR_FROM_JSON(cert_valid_date, certValidDate_);
        DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
        DARABONBA_PTR_FROM_JSON(cost_center_number, costCenterNumber_);
        DARABONBA_PTR_FROM_JSON(dept_id, deptId_);
        DARABONBA_PTR_FROM_JSON(dept_name, deptName_);
        DARABONBA_PTR_FROM_JSON(gender, gender_);
        DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
        DARABONBA_PTR_FROM_JSON(nationality, nationality_);
        DARABONBA_PTR_FROM_JSON(nationality_code, nationalityCode_);
        DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
        DARABONBA_PTR_FROM_JSON(passenger_type, passengerType_);
        DARABONBA_PTR_FROM_JSON(phone, phone_);
        DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
        DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
        DARABONBA_PTR_FROM_JSON(tax_number, taxNumber_);
        DARABONBA_PTR_FROM_JSON(user_id, userId_);
        DARABONBA_PTR_FROM_JSON(user_type, userType_);
      };
      Travelers() = default ;
      Travelers(const Travelers &) = default ;
      Travelers(Travelers &&) = default ;
      Travelers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Travelers() = default ;
      Travelers& operator=(const Travelers &) = default ;
      Travelers& operator=(Travelers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->birthday_ == nullptr
        && this->certNation_ == nullptr && this->certNo_ == nullptr && this->certType_ == nullptr && this->certValidDate_ == nullptr && this->costCenterName_ == nullptr
        && this->costCenterNumber_ == nullptr && this->deptId_ == nullptr && this->deptName_ == nullptr && this->gender_ == nullptr && this->invoiceTitle_ == nullptr
        && this->nationality_ == nullptr && this->nationalityCode_ == nullptr && this->passengerName_ == nullptr && this->passengerType_ == nullptr && this->phone_ == nullptr
        && this->projectCode_ == nullptr && this->projectTitle_ == nullptr && this->taxNumber_ == nullptr && this->userId_ == nullptr && this->userType_ == nullptr; };
      // birthday Field Functions 
      bool hasBirthday() const { return this->birthday_ != nullptr;};
      void deleteBirthday() { this->birthday_ = nullptr;};
      inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
      inline Travelers& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


      // certNation Field Functions 
      bool hasCertNation() const { return this->certNation_ != nullptr;};
      void deleteCertNation() { this->certNation_ = nullptr;};
      inline string getCertNation() const { DARABONBA_PTR_GET_DEFAULT(certNation_, "") };
      inline Travelers& setCertNation(string certNation) { DARABONBA_PTR_SET_VALUE(certNation_, certNation) };


      // certNo Field Functions 
      bool hasCertNo() const { return this->certNo_ != nullptr;};
      void deleteCertNo() { this->certNo_ = nullptr;};
      inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
      inline Travelers& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


      // certType Field Functions 
      bool hasCertType() const { return this->certType_ != nullptr;};
      void deleteCertType() { this->certType_ = nullptr;};
      inline int32_t getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, 0) };
      inline Travelers& setCertType(int32_t certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


      // certValidDate Field Functions 
      bool hasCertValidDate() const { return this->certValidDate_ != nullptr;};
      void deleteCertValidDate() { this->certValidDate_ = nullptr;};
      inline string getCertValidDate() const { DARABONBA_PTR_GET_DEFAULT(certValidDate_, "") };
      inline Travelers& setCertValidDate(string certValidDate) { DARABONBA_PTR_SET_VALUE(certValidDate_, certValidDate) };


      // costCenterName Field Functions 
      bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
      void deleteCostCenterName() { this->costCenterName_ = nullptr;};
      inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
      inline Travelers& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


      // costCenterNumber Field Functions 
      bool hasCostCenterNumber() const { return this->costCenterNumber_ != nullptr;};
      void deleteCostCenterNumber() { this->costCenterNumber_ = nullptr;};
      inline string getCostCenterNumber() const { DARABONBA_PTR_GET_DEFAULT(costCenterNumber_, "") };
      inline Travelers& setCostCenterNumber(string costCenterNumber) { DARABONBA_PTR_SET_VALUE(costCenterNumber_, costCenterNumber) };


      // deptId Field Functions 
      bool hasDeptId() const { return this->deptId_ != nullptr;};
      void deleteDeptId() { this->deptId_ = nullptr;};
      inline string getDeptId() const { DARABONBA_PTR_GET_DEFAULT(deptId_, "") };
      inline Travelers& setDeptId(string deptId) { DARABONBA_PTR_SET_VALUE(deptId_, deptId) };


      // deptName Field Functions 
      bool hasDeptName() const { return this->deptName_ != nullptr;};
      void deleteDeptName() { this->deptName_ = nullptr;};
      inline string getDeptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
      inline Travelers& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


      // gender Field Functions 
      bool hasGender() const { return this->gender_ != nullptr;};
      void deleteGender() { this->gender_ = nullptr;};
      inline int32_t getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, 0) };
      inline Travelers& setGender(int32_t gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


      // invoiceTitle Field Functions 
      bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
      void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
      inline string getInvoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
      inline Travelers& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


      // nationality Field Functions 
      bool hasNationality() const { return this->nationality_ != nullptr;};
      void deleteNationality() { this->nationality_ = nullptr;};
      inline string getNationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
      inline Travelers& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


      // nationalityCode Field Functions 
      bool hasNationalityCode() const { return this->nationalityCode_ != nullptr;};
      void deleteNationalityCode() { this->nationalityCode_ = nullptr;};
      inline string getNationalityCode() const { DARABONBA_PTR_GET_DEFAULT(nationalityCode_, "") };
      inline Travelers& setNationalityCode(string nationalityCode) { DARABONBA_PTR_SET_VALUE(nationalityCode_, nationalityCode) };


      // passengerName Field Functions 
      bool hasPassengerName() const { return this->passengerName_ != nullptr;};
      void deletePassengerName() { this->passengerName_ = nullptr;};
      inline string getPassengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
      inline Travelers& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


      // passengerType Field Functions 
      bool hasPassengerType() const { return this->passengerType_ != nullptr;};
      void deletePassengerType() { this->passengerType_ = nullptr;};
      inline int32_t getPassengerType() const { DARABONBA_PTR_GET_DEFAULT(passengerType_, 0) };
      inline Travelers& setPassengerType(int32_t passengerType) { DARABONBA_PTR_SET_VALUE(passengerType_, passengerType) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline Travelers& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // projectCode Field Functions 
      bool hasProjectCode() const { return this->projectCode_ != nullptr;};
      void deleteProjectCode() { this->projectCode_ = nullptr;};
      inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
      inline Travelers& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


      // projectTitle Field Functions 
      bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
      void deleteProjectTitle() { this->projectTitle_ = nullptr;};
      inline string getProjectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
      inline Travelers& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


      // taxNumber Field Functions 
      bool hasTaxNumber() const { return this->taxNumber_ != nullptr;};
      void deleteTaxNumber() { this->taxNumber_ = nullptr;};
      inline string getTaxNumber() const { DARABONBA_PTR_GET_DEFAULT(taxNumber_, "") };
      inline Travelers& setTaxNumber(string taxNumber) { DARABONBA_PTR_SET_VALUE(taxNumber_, taxNumber) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Travelers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userType Field Functions 
      bool hasUserType() const { return this->userType_ != nullptr;};
      void deleteUserType() { this->userType_ = nullptr;};
      inline int32_t getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
      inline Travelers& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


    protected:
      // This parameter is required.
      shared_ptr<string> birthday_ {};
      shared_ptr<string> certNation_ {};
      // This parameter is required.
      shared_ptr<string> certNo_ {};
      // This parameter is required.
      shared_ptr<int32_t> certType_ {};
      shared_ptr<string> certValidDate_ {};
      shared_ptr<string> costCenterName_ {};
      shared_ptr<string> costCenterNumber_ {};
      shared_ptr<string> deptId_ {};
      shared_ptr<string> deptName_ {};
      // This parameter is required.
      shared_ptr<int32_t> gender_ {};
      shared_ptr<string> invoiceTitle_ {};
      shared_ptr<string> nationality_ {};
      shared_ptr<string> nationalityCode_ {};
      // This parameter is required.
      shared_ptr<string> passengerName_ {};
      // This parameter is required.
      shared_ptr<int32_t> passengerType_ {};
      // This parameter is required.
      shared_ptr<string> phone_ {};
      shared_ptr<string> projectCode_ {};
      shared_ptr<string> projectTitle_ {};
      shared_ptr<string> taxNumber_ {};
      // This parameter is required.
      shared_ptr<string> userId_ {};
      shared_ptr<int32_t> userType_ {};
    };

    class ContactInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContactInfo& obj) { 
        DARABONBA_PTR_TO_JSON(contact_email, contactEmail_);
        DARABONBA_PTR_TO_JSON(contact_name, contactName_);
        DARABONBA_PTR_TO_JSON(contact_phone, contactPhone_);
        DARABONBA_PTR_TO_JSON(send_msg_to_passenger, sendMsgToPassenger_);
      };
      friend void from_json(const Darabonba::Json& j, ContactInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(contact_email, contactEmail_);
        DARABONBA_PTR_FROM_JSON(contact_name, contactName_);
        DARABONBA_PTR_FROM_JSON(contact_phone, contactPhone_);
        DARABONBA_PTR_FROM_JSON(send_msg_to_passenger, sendMsgToPassenger_);
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
        && this->contactName_ == nullptr && this->contactPhone_ == nullptr && this->sendMsgToPassenger_ == nullptr; };
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


      // sendMsgToPassenger Field Functions 
      bool hasSendMsgToPassenger() const { return this->sendMsgToPassenger_ != nullptr;};
      void deleteSendMsgToPassenger() { this->sendMsgToPassenger_ = nullptr;};
      inline bool getSendMsgToPassenger() const { DARABONBA_PTR_GET_DEFAULT(sendMsgToPassenger_, false) };
      inline ContactInfo& setSendMsgToPassenger(bool sendMsgToPassenger) { DARABONBA_PTR_SET_VALUE(sendMsgToPassenger_, sendMsgToPassenger) };


    protected:
      shared_ptr<string> contactEmail_ {};
      shared_ptr<string> contactName_ {};
      shared_ptr<string> contactPhone_ {};
      shared_ptr<bool> sendMsgToPassenger_ {};
    };

    virtual bool empty() const override { return this->asyncCreateOrderKey_ == nullptr
        && this->asyncCreateOrderMode_ == nullptr && this->btripUserId_ == nullptr && this->buyerName_ == nullptr && this->contactInfo_ == nullptr && this->isvName_ == nullptr
        && this->otaItemId_ == nullptr && this->outOrderId_ == nullptr && this->totalPriceCent_ == nullptr && this->travelers_ == nullptr; };
    // asyncCreateOrderKey Field Functions 
    bool hasAsyncCreateOrderKey() const { return this->asyncCreateOrderKey_ != nullptr;};
    void deleteAsyncCreateOrderKey() { this->asyncCreateOrderKey_ = nullptr;};
    inline string getAsyncCreateOrderKey() const { DARABONBA_PTR_GET_DEFAULT(asyncCreateOrderKey_, "") };
    inline FlightCreateOrderV2Request& setAsyncCreateOrderKey(string asyncCreateOrderKey) { DARABONBA_PTR_SET_VALUE(asyncCreateOrderKey_, asyncCreateOrderKey) };


    // asyncCreateOrderMode Field Functions 
    bool hasAsyncCreateOrderMode() const { return this->asyncCreateOrderMode_ != nullptr;};
    void deleteAsyncCreateOrderMode() { this->asyncCreateOrderMode_ = nullptr;};
    inline bool getAsyncCreateOrderMode() const { DARABONBA_PTR_GET_DEFAULT(asyncCreateOrderMode_, false) };
    inline FlightCreateOrderV2Request& setAsyncCreateOrderMode(bool asyncCreateOrderMode) { DARABONBA_PTR_SET_VALUE(asyncCreateOrderMode_, asyncCreateOrderMode) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string getBtripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline FlightCreateOrderV2Request& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string getBuyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline FlightCreateOrderV2Request& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // contactInfo Field Functions 
    bool hasContactInfo() const { return this->contactInfo_ != nullptr;};
    void deleteContactInfo() { this->contactInfo_ = nullptr;};
    inline const FlightCreateOrderV2Request::ContactInfo & getContactInfo() const { DARABONBA_PTR_GET_CONST(contactInfo_, FlightCreateOrderV2Request::ContactInfo) };
    inline FlightCreateOrderV2Request::ContactInfo getContactInfo() { DARABONBA_PTR_GET(contactInfo_, FlightCreateOrderV2Request::ContactInfo) };
    inline FlightCreateOrderV2Request& setContactInfo(const FlightCreateOrderV2Request::ContactInfo & contactInfo) { DARABONBA_PTR_SET_VALUE(contactInfo_, contactInfo) };
    inline FlightCreateOrderV2Request& setContactInfo(FlightCreateOrderV2Request::ContactInfo && contactInfo) { DARABONBA_PTR_SET_RVALUE(contactInfo_, contactInfo) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string getIsvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightCreateOrderV2Request& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // otaItemId Field Functions 
    bool hasOtaItemId() const { return this->otaItemId_ != nullptr;};
    void deleteOtaItemId() { this->otaItemId_ = nullptr;};
    inline string getOtaItemId() const { DARABONBA_PTR_GET_DEFAULT(otaItemId_, "") };
    inline FlightCreateOrderV2Request& setOtaItemId(string otaItemId) { DARABONBA_PTR_SET_VALUE(otaItemId_, otaItemId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightCreateOrderV2Request& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // totalPriceCent Field Functions 
    bool hasTotalPriceCent() const { return this->totalPriceCent_ != nullptr;};
    void deleteTotalPriceCent() { this->totalPriceCent_ = nullptr;};
    inline int64_t getTotalPriceCent() const { DARABONBA_PTR_GET_DEFAULT(totalPriceCent_, 0L) };
    inline FlightCreateOrderV2Request& setTotalPriceCent(int64_t totalPriceCent) { DARABONBA_PTR_SET_VALUE(totalPriceCent_, totalPriceCent) };


    // travelers Field Functions 
    bool hasTravelers() const { return this->travelers_ != nullptr;};
    void deleteTravelers() { this->travelers_ = nullptr;};
    inline const vector<FlightCreateOrderV2Request::Travelers> & getTravelers() const { DARABONBA_PTR_GET_CONST(travelers_, vector<FlightCreateOrderV2Request::Travelers>) };
    inline vector<FlightCreateOrderV2Request::Travelers> getTravelers() { DARABONBA_PTR_GET(travelers_, vector<FlightCreateOrderV2Request::Travelers>) };
    inline FlightCreateOrderV2Request& setTravelers(const vector<FlightCreateOrderV2Request::Travelers> & travelers) { DARABONBA_PTR_SET_VALUE(travelers_, travelers) };
    inline FlightCreateOrderV2Request& setTravelers(vector<FlightCreateOrderV2Request::Travelers> && travelers) { DARABONBA_PTR_SET_RVALUE(travelers_, travelers) };


  protected:
    shared_ptr<string> asyncCreateOrderKey_ {};
    shared_ptr<bool> asyncCreateOrderMode_ {};
    shared_ptr<string> btripUserId_ {};
    shared_ptr<string> buyerName_ {};
    // This parameter is required.
    shared_ptr<FlightCreateOrderV2Request::ContactInfo> contactInfo_ {};
    // This parameter is required.
    shared_ptr<string> isvName_ {};
    // This parameter is required.
    shared_ptr<string> otaItemId_ {};
    // This parameter is required.
    shared_ptr<string> outOrderId_ {};
    shared_ptr<int64_t> totalPriceCent_ {};
    // This parameter is required.
    shared_ptr<vector<FlightCreateOrderV2Request::Travelers>> travelers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
