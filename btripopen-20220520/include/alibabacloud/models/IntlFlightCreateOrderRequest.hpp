// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTCREATEORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTCREATEORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightCreateOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightCreateOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(async_create_order_key, asyncCreateOrderKey_);
      DARABONBA_PTR_TO_JSON(async_create_order_mode, asyncCreateOrderMode_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(contact_info, contactInfo_);
      DARABONBA_PTR_TO_JSON(extra_info, extraInfo_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(order_price, orderPrice_);
      DARABONBA_PTR_TO_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_TO_JSON(render_key, renderKey_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightCreateOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(async_create_order_key, asyncCreateOrderKey_);
      DARABONBA_PTR_FROM_JSON(async_create_order_mode, asyncCreateOrderMode_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(contact_info, contactInfo_);
      DARABONBA_PTR_FROM_JSON(extra_info, extraInfo_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(order_price, orderPrice_);
      DARABONBA_PTR_FROM_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_FROM_JSON(render_key, renderKey_);
    };
    IntlFlightCreateOrderRequest() = default ;
    IntlFlightCreateOrderRequest(const IntlFlightCreateOrderRequest &) = default ;
    IntlFlightCreateOrderRequest(IntlFlightCreateOrderRequest &&) = default ;
    IntlFlightCreateOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightCreateOrderRequest() = default ;
    IntlFlightCreateOrderRequest& operator=(const IntlFlightCreateOrderRequest &) = default ;
    IntlFlightCreateOrderRequest& operator=(IntlFlightCreateOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PassengerList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PassengerList& obj) { 
        DARABONBA_PTR_TO_JSON(birthday, birthday_);
        DARABONBA_PTR_TO_JSON(cert_info, certInfo_);
        DARABONBA_PTR_TO_JSON(full_name, fullName_);
        DARABONBA_PTR_TO_JSON(gender, gender_);
        DARABONBA_PTR_TO_JSON(job_no, jobNo_);
        DARABONBA_PTR_TO_JSON(nationality, nationality_);
        DARABONBA_PTR_TO_JSON(nationality_code, nationalityCode_);
        DARABONBA_PTR_TO_JSON(phone, phone_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
        DARABONBA_PTR_TO_JSON(user_type, userType_);
      };
      friend void from_json(const Darabonba::Json& j, PassengerList& obj) { 
        DARABONBA_PTR_FROM_JSON(birthday, birthday_);
        DARABONBA_PTR_FROM_JSON(cert_info, certInfo_);
        DARABONBA_PTR_FROM_JSON(full_name, fullName_);
        DARABONBA_PTR_FROM_JSON(gender, gender_);
        DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
        DARABONBA_PTR_FROM_JSON(nationality, nationality_);
        DARABONBA_PTR_FROM_JSON(nationality_code, nationalityCode_);
        DARABONBA_PTR_FROM_JSON(phone, phone_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(user_id, userId_);
        DARABONBA_PTR_FROM_JSON(user_type, userType_);
      };
      PassengerList() = default ;
      PassengerList(const PassengerList &) = default ;
      PassengerList(PassengerList &&) = default ;
      PassengerList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PassengerList() = default ;
      PassengerList& operator=(const PassengerList &) = default ;
      PassengerList& operator=(PassengerList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CertInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CertInfo& obj) { 
          DARABONBA_PTR_TO_JSON(cert_no, certNo_);
          DARABONBA_PTR_TO_JSON(cert_type, certType_);
          DARABONBA_PTR_TO_JSON(cert_valid_date, certValidDate_);
          DARABONBA_PTR_TO_JSON(issue_place, issuePlace_);
        };
        friend void from_json(const Darabonba::Json& j, CertInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
          DARABONBA_PTR_FROM_JSON(cert_type, certType_);
          DARABONBA_PTR_FROM_JSON(cert_valid_date, certValidDate_);
          DARABONBA_PTR_FROM_JSON(issue_place, issuePlace_);
        };
        CertInfo() = default ;
        CertInfo(const CertInfo &) = default ;
        CertInfo(CertInfo &&) = default ;
        CertInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CertInfo() = default ;
        CertInfo& operator=(const CertInfo &) = default ;
        CertInfo& operator=(CertInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->certNo_ == nullptr
        && this->certType_ == nullptr && this->certValidDate_ == nullptr && this->issuePlace_ == nullptr; };
        // certNo Field Functions 
        bool hasCertNo() const { return this->certNo_ != nullptr;};
        void deleteCertNo() { this->certNo_ = nullptr;};
        inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
        inline CertInfo& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


        // certType Field Functions 
        bool hasCertType() const { return this->certType_ != nullptr;};
        void deleteCertType() { this->certType_ = nullptr;};
        inline int32_t getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, 0) };
        inline CertInfo& setCertType(int32_t certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


        // certValidDate Field Functions 
        bool hasCertValidDate() const { return this->certValidDate_ != nullptr;};
        void deleteCertValidDate() { this->certValidDate_ = nullptr;};
        inline string getCertValidDate() const { DARABONBA_PTR_GET_DEFAULT(certValidDate_, "") };
        inline CertInfo& setCertValidDate(string certValidDate) { DARABONBA_PTR_SET_VALUE(certValidDate_, certValidDate) };


        // issuePlace Field Functions 
        bool hasIssuePlace() const { return this->issuePlace_ != nullptr;};
        void deleteIssuePlace() { this->issuePlace_ = nullptr;};
        inline string getIssuePlace() const { DARABONBA_PTR_GET_DEFAULT(issuePlace_, "") };
        inline CertInfo& setIssuePlace(string issuePlace) { DARABONBA_PTR_SET_VALUE(issuePlace_, issuePlace) };


      protected:
        // This parameter is required.
        shared_ptr<string> certNo_ {};
        // This parameter is required.
        shared_ptr<int32_t> certType_ {};
        // This parameter is required.
        shared_ptr<string> certValidDate_ {};
        // This parameter is required.
        shared_ptr<string> issuePlace_ {};
      };

      virtual bool empty() const override { return this->birthday_ == nullptr
        && this->certInfo_ == nullptr && this->fullName_ == nullptr && this->gender_ == nullptr && this->jobNo_ == nullptr && this->nationality_ == nullptr
        && this->nationalityCode_ == nullptr && this->phone_ == nullptr && this->type_ == nullptr && this->userId_ == nullptr && this->userType_ == nullptr; };
      // birthday Field Functions 
      bool hasBirthday() const { return this->birthday_ != nullptr;};
      void deleteBirthday() { this->birthday_ = nullptr;};
      inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
      inline PassengerList& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


      // certInfo Field Functions 
      bool hasCertInfo() const { return this->certInfo_ != nullptr;};
      void deleteCertInfo() { this->certInfo_ = nullptr;};
      inline const PassengerList::CertInfo & getCertInfo() const { DARABONBA_PTR_GET_CONST(certInfo_, PassengerList::CertInfo) };
      inline PassengerList::CertInfo getCertInfo() { DARABONBA_PTR_GET(certInfo_, PassengerList::CertInfo) };
      inline PassengerList& setCertInfo(const PassengerList::CertInfo & certInfo) { DARABONBA_PTR_SET_VALUE(certInfo_, certInfo) };
      inline PassengerList& setCertInfo(PassengerList::CertInfo && certInfo) { DARABONBA_PTR_SET_RVALUE(certInfo_, certInfo) };


      // fullName Field Functions 
      bool hasFullName() const { return this->fullName_ != nullptr;};
      void deleteFullName() { this->fullName_ = nullptr;};
      inline string getFullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
      inline PassengerList& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


      // gender Field Functions 
      bool hasGender() const { return this->gender_ != nullptr;};
      void deleteGender() { this->gender_ = nullptr;};
      inline int32_t getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, 0) };
      inline PassengerList& setGender(int32_t gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


      // jobNo Field Functions 
      bool hasJobNo() const { return this->jobNo_ != nullptr;};
      void deleteJobNo() { this->jobNo_ = nullptr;};
      inline string getJobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
      inline PassengerList& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


      // nationality Field Functions 
      bool hasNationality() const { return this->nationality_ != nullptr;};
      void deleteNationality() { this->nationality_ = nullptr;};
      inline string getNationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
      inline PassengerList& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


      // nationalityCode Field Functions 
      bool hasNationalityCode() const { return this->nationalityCode_ != nullptr;};
      void deleteNationalityCode() { this->nationalityCode_ = nullptr;};
      inline string getNationalityCode() const { DARABONBA_PTR_GET_DEFAULT(nationalityCode_, "") };
      inline PassengerList& setNationalityCode(string nationalityCode) { DARABONBA_PTR_SET_VALUE(nationalityCode_, nationalityCode) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline PassengerList& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline PassengerList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline PassengerList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userType Field Functions 
      bool hasUserType() const { return this->userType_ != nullptr;};
      void deleteUserType() { this->userType_ = nullptr;};
      inline int32_t getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
      inline PassengerList& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


    protected:
      // This parameter is required.
      shared_ptr<string> birthday_ {};
      // This parameter is required.
      shared_ptr<PassengerList::CertInfo> certInfo_ {};
      // This parameter is required.
      shared_ptr<string> fullName_ {};
      // This parameter is required.
      shared_ptr<int32_t> gender_ {};
      shared_ptr<string> jobNo_ {};
      // This parameter is required.
      shared_ptr<string> nationality_ {};
      // This parameter is required.
      shared_ptr<string> nationalityCode_ {};
      // This parameter is required.
      shared_ptr<string> phone_ {};
      // This parameter is required.
      shared_ptr<int32_t> type_ {};
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
      // This parameter is required.
      shared_ptr<string> contactEmail_ {};
      // This parameter is required.
      shared_ptr<string> contactName_ {};
      // This parameter is required.
      shared_ptr<string> contactPhone_ {};
    };

    virtual bool empty() const override { return this->asyncCreateOrderKey_ == nullptr
        && this->asyncCreateOrderMode_ == nullptr && this->btripUserId_ == nullptr && this->buyerName_ == nullptr && this->contactInfo_ == nullptr && this->extraInfo_ == nullptr
        && this->isvName_ == nullptr && this->orderPrice_ == nullptr && this->otaItemId_ == nullptr && this->outOrderId_ == nullptr && this->passengerList_ == nullptr
        && this->renderKey_ == nullptr; };
    // asyncCreateOrderKey Field Functions 
    bool hasAsyncCreateOrderKey() const { return this->asyncCreateOrderKey_ != nullptr;};
    void deleteAsyncCreateOrderKey() { this->asyncCreateOrderKey_ = nullptr;};
    inline string getAsyncCreateOrderKey() const { DARABONBA_PTR_GET_DEFAULT(asyncCreateOrderKey_, "") };
    inline IntlFlightCreateOrderRequest& setAsyncCreateOrderKey(string asyncCreateOrderKey) { DARABONBA_PTR_SET_VALUE(asyncCreateOrderKey_, asyncCreateOrderKey) };


    // asyncCreateOrderMode Field Functions 
    bool hasAsyncCreateOrderMode() const { return this->asyncCreateOrderMode_ != nullptr;};
    void deleteAsyncCreateOrderMode() { this->asyncCreateOrderMode_ = nullptr;};
    inline bool getAsyncCreateOrderMode() const { DARABONBA_PTR_GET_DEFAULT(asyncCreateOrderMode_, false) };
    inline IntlFlightCreateOrderRequest& setAsyncCreateOrderMode(bool asyncCreateOrderMode) { DARABONBA_PTR_SET_VALUE(asyncCreateOrderMode_, asyncCreateOrderMode) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string getBtripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline IntlFlightCreateOrderRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string getBuyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline IntlFlightCreateOrderRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // contactInfo Field Functions 
    bool hasContactInfo() const { return this->contactInfo_ != nullptr;};
    void deleteContactInfo() { this->contactInfo_ = nullptr;};
    inline const IntlFlightCreateOrderRequest::ContactInfo & getContactInfo() const { DARABONBA_PTR_GET_CONST(contactInfo_, IntlFlightCreateOrderRequest::ContactInfo) };
    inline IntlFlightCreateOrderRequest::ContactInfo getContactInfo() { DARABONBA_PTR_GET(contactInfo_, IntlFlightCreateOrderRequest::ContactInfo) };
    inline IntlFlightCreateOrderRequest& setContactInfo(const IntlFlightCreateOrderRequest::ContactInfo & contactInfo) { DARABONBA_PTR_SET_VALUE(contactInfo_, contactInfo) };
    inline IntlFlightCreateOrderRequest& setContactInfo(IntlFlightCreateOrderRequest::ContactInfo && contactInfo) { DARABONBA_PTR_SET_RVALUE(contactInfo_, contactInfo) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline const map<string, string> & getExtraInfo() const { DARABONBA_PTR_GET_CONST(extraInfo_, map<string, string>) };
    inline map<string, string> getExtraInfo() { DARABONBA_PTR_GET(extraInfo_, map<string, string>) };
    inline IntlFlightCreateOrderRequest& setExtraInfo(const map<string, string> & extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };
    inline IntlFlightCreateOrderRequest& setExtraInfo(map<string, string> && extraInfo) { DARABONBA_PTR_SET_RVALUE(extraInfo_, extraInfo) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string getIsvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline IntlFlightCreateOrderRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // orderPrice Field Functions 
    bool hasOrderPrice() const { return this->orderPrice_ != nullptr;};
    void deleteOrderPrice() { this->orderPrice_ = nullptr;};
    inline int64_t getOrderPrice() const { DARABONBA_PTR_GET_DEFAULT(orderPrice_, 0L) };
    inline IntlFlightCreateOrderRequest& setOrderPrice(int64_t orderPrice) { DARABONBA_PTR_SET_VALUE(orderPrice_, orderPrice) };


    // otaItemId Field Functions 
    bool hasOtaItemId() const { return this->otaItemId_ != nullptr;};
    void deleteOtaItemId() { this->otaItemId_ = nullptr;};
    inline string getOtaItemId() const { DARABONBA_PTR_GET_DEFAULT(otaItemId_, "") };
    inline IntlFlightCreateOrderRequest& setOtaItemId(string otaItemId) { DARABONBA_PTR_SET_VALUE(otaItemId_, otaItemId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline IntlFlightCreateOrderRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // passengerList Field Functions 
    bool hasPassengerList() const { return this->passengerList_ != nullptr;};
    void deletePassengerList() { this->passengerList_ = nullptr;};
    inline const vector<IntlFlightCreateOrderRequest::PassengerList> & getPassengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<IntlFlightCreateOrderRequest::PassengerList>) };
    inline vector<IntlFlightCreateOrderRequest::PassengerList> getPassengerList() { DARABONBA_PTR_GET(passengerList_, vector<IntlFlightCreateOrderRequest::PassengerList>) };
    inline IntlFlightCreateOrderRequest& setPassengerList(const vector<IntlFlightCreateOrderRequest::PassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
    inline IntlFlightCreateOrderRequest& setPassengerList(vector<IntlFlightCreateOrderRequest::PassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


    // renderKey Field Functions 
    bool hasRenderKey() const { return this->renderKey_ != nullptr;};
    void deleteRenderKey() { this->renderKey_ = nullptr;};
    inline string getRenderKey() const { DARABONBA_PTR_GET_DEFAULT(renderKey_, "") };
    inline IntlFlightCreateOrderRequest& setRenderKey(string renderKey) { DARABONBA_PTR_SET_VALUE(renderKey_, renderKey) };


  protected:
    shared_ptr<string> asyncCreateOrderKey_ {};
    shared_ptr<bool> asyncCreateOrderMode_ {};
    // This parameter is required.
    shared_ptr<string> btripUserId_ {};
    // This parameter is required.
    shared_ptr<string> buyerName_ {};
    // This parameter is required.
    shared_ptr<IntlFlightCreateOrderRequest::ContactInfo> contactInfo_ {};
    shared_ptr<map<string, string>> extraInfo_ {};
    shared_ptr<string> isvName_ {};
    shared_ptr<int64_t> orderPrice_ {};
    // This parameter is required.
    shared_ptr<string> otaItemId_ {};
    shared_ptr<string> outOrderId_ {};
    // This parameter is required.
    shared_ptr<vector<IntlFlightCreateOrderRequest::PassengerList>> passengerList_ {};
    shared_ptr<string> renderKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
