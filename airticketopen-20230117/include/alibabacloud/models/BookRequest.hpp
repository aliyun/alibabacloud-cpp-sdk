// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class BookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contact, contact_);
      DARABONBA_PTR_TO_JSON(out_order_num, outOrderNum_);
      DARABONBA_PTR_TO_JSON(passenger_ancillary_purchase_map_list, passengerAncillaryPurchaseMapList_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_TO_JSON(solution_id, solutionId_);
    };
    friend void from_json(const Darabonba::Json& j, BookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contact, contact_);
      DARABONBA_PTR_FROM_JSON(out_order_num, outOrderNum_);
      DARABONBA_PTR_FROM_JSON(passenger_ancillary_purchase_map_list, passengerAncillaryPurchaseMapList_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_FROM_JSON(solution_id, solutionId_);
    };
    BookRequest() = default ;
    BookRequest(const BookRequest &) = default ;
    BookRequest(BookRequest &&) = default ;
    BookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BookRequest() = default ;
    BookRequest& operator=(const BookRequest &) = default ;
    BookRequest& operator=(BookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PassengerList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PassengerList& obj) { 
        DARABONBA_PTR_TO_JSON(birthday, birthday_);
        DARABONBA_PTR_TO_JSON(credential, credential_);
        DARABONBA_PTR_TO_JSON(first_name, firstName_);
        DARABONBA_PTR_TO_JSON(gender, gender_);
        DARABONBA_PTR_TO_JSON(last_name, lastName_);
        DARABONBA_PTR_TO_JSON(mobile_country_code, mobileCountryCode_);
        DARABONBA_PTR_TO_JSON(mobile_phone_number, mobilePhoneNumber_);
        DARABONBA_PTR_TO_JSON(nationality, nationality_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, PassengerList& obj) { 
        DARABONBA_PTR_FROM_JSON(birthday, birthday_);
        DARABONBA_PTR_FROM_JSON(credential, credential_);
        DARABONBA_PTR_FROM_JSON(first_name, firstName_);
        DARABONBA_PTR_FROM_JSON(gender, gender_);
        DARABONBA_PTR_FROM_JSON(last_name, lastName_);
        DARABONBA_PTR_FROM_JSON(mobile_country_code, mobileCountryCode_);
        DARABONBA_PTR_FROM_JSON(mobile_phone_number, mobilePhoneNumber_);
        DARABONBA_PTR_FROM_JSON(nationality, nationality_);
        DARABONBA_PTR_FROM_JSON(type, type_);
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
      class Credential : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Credential& obj) { 
          DARABONBA_PTR_TO_JSON(cert_issue_place, certIssuePlace_);
          DARABONBA_PTR_TO_JSON(credential_num, credentialNum_);
          DARABONBA_PTR_TO_JSON(credential_type, credentialType_);
          DARABONBA_PTR_TO_JSON(expire_date, expireDate_);
        };
        friend void from_json(const Darabonba::Json& j, Credential& obj) { 
          DARABONBA_PTR_FROM_JSON(cert_issue_place, certIssuePlace_);
          DARABONBA_PTR_FROM_JSON(credential_num, credentialNum_);
          DARABONBA_PTR_FROM_JSON(credential_type, credentialType_);
          DARABONBA_PTR_FROM_JSON(expire_date, expireDate_);
        };
        Credential() = default ;
        Credential(const Credential &) = default ;
        Credential(Credential &&) = default ;
        Credential(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Credential() = default ;
        Credential& operator=(const Credential &) = default ;
        Credential& operator=(Credential &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->certIssuePlace_ == nullptr
        && this->credentialNum_ == nullptr && this->credentialType_ == nullptr && this->expireDate_ == nullptr; };
        // certIssuePlace Field Functions 
        bool hasCertIssuePlace() const { return this->certIssuePlace_ != nullptr;};
        void deleteCertIssuePlace() { this->certIssuePlace_ = nullptr;};
        inline string getCertIssuePlace() const { DARABONBA_PTR_GET_DEFAULT(certIssuePlace_, "") };
        inline Credential& setCertIssuePlace(string certIssuePlace) { DARABONBA_PTR_SET_VALUE(certIssuePlace_, certIssuePlace) };


        // credentialNum Field Functions 
        bool hasCredentialNum() const { return this->credentialNum_ != nullptr;};
        void deleteCredentialNum() { this->credentialNum_ = nullptr;};
        inline string getCredentialNum() const { DARABONBA_PTR_GET_DEFAULT(credentialNum_, "") };
        inline Credential& setCredentialNum(string credentialNum) { DARABONBA_PTR_SET_VALUE(credentialNum_, credentialNum) };


        // credentialType Field Functions 
        bool hasCredentialType() const { return this->credentialType_ != nullptr;};
        void deleteCredentialType() { this->credentialType_ = nullptr;};
        inline int32_t getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, 0) };
        inline Credential& setCredentialType(int32_t credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


        // expireDate Field Functions 
        bool hasExpireDate() const { return this->expireDate_ != nullptr;};
        void deleteExpireDate() { this->expireDate_ = nullptr;};
        inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
        inline Credential& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


      protected:
        // The place of issue. Use a two-letter country code.
        shared_ptr<string> certIssuePlace_ {};
        // The credential number.
        shared_ptr<string> credentialNum_ {};
        // The credential type. Valid values:
        // - 0: ID card
        // - 1: passport
        // - 4: Home Return Permit
        // - 5: Taiwan Compatriot Permit
        // - 6: Hong Kong and Macau Travel Permit
        // - 12: Taiwan Travel Permit
        // - 19: no credential.
        shared_ptr<int32_t> credentialType_ {};
        // The expiration date of the credential.
        shared_ptr<string> expireDate_ {};
      };

      virtual bool empty() const override { return this->birthday_ == nullptr
        && this->credential_ == nullptr && this->firstName_ == nullptr && this->gender_ == nullptr && this->lastName_ == nullptr && this->mobileCountryCode_ == nullptr
        && this->mobilePhoneNumber_ == nullptr && this->nationality_ == nullptr && this->type_ == nullptr; };
      // birthday Field Functions 
      bool hasBirthday() const { return this->birthday_ != nullptr;};
      void deleteBirthday() { this->birthday_ = nullptr;};
      inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
      inline PassengerList& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


      // credential Field Functions 
      bool hasCredential() const { return this->credential_ != nullptr;};
      void deleteCredential() { this->credential_ = nullptr;};
      inline const PassengerList::Credential & getCredential() const { DARABONBA_PTR_GET_CONST(credential_, PassengerList::Credential) };
      inline PassengerList::Credential getCredential() { DARABONBA_PTR_GET(credential_, PassengerList::Credential) };
      inline PassengerList& setCredential(const PassengerList::Credential & credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };
      inline PassengerList& setCredential(PassengerList::Credential && credential) { DARABONBA_PTR_SET_RVALUE(credential_, credential) };


      // firstName Field Functions 
      bool hasFirstName() const { return this->firstName_ != nullptr;};
      void deleteFirstName() { this->firstName_ = nullptr;};
      inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
      inline PassengerList& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


      // gender Field Functions 
      bool hasGender() const { return this->gender_ != nullptr;};
      void deleteGender() { this->gender_ = nullptr;};
      inline int32_t getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, 0) };
      inline PassengerList& setGender(int32_t gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


      // lastName Field Functions 
      bool hasLastName() const { return this->lastName_ != nullptr;};
      void deleteLastName() { this->lastName_ = nullptr;};
      inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
      inline PassengerList& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


      // mobileCountryCode Field Functions 
      bool hasMobileCountryCode() const { return this->mobileCountryCode_ != nullptr;};
      void deleteMobileCountryCode() { this->mobileCountryCode_ = nullptr;};
      inline string getMobileCountryCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCountryCode_, "") };
      inline PassengerList& setMobileCountryCode(string mobileCountryCode) { DARABONBA_PTR_SET_VALUE(mobileCountryCode_, mobileCountryCode) };


      // mobilePhoneNumber Field Functions 
      bool hasMobilePhoneNumber() const { return this->mobilePhoneNumber_ != nullptr;};
      void deleteMobilePhoneNumber() { this->mobilePhoneNumber_ = nullptr;};
      inline string getMobilePhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(mobilePhoneNumber_, "") };
      inline PassengerList& setMobilePhoneNumber(string mobilePhoneNumber) { DARABONBA_PTR_SET_VALUE(mobilePhoneNumber_, mobilePhoneNumber) };


      // nationality Field Functions 
      bool hasNationality() const { return this->nationality_ != nullptr;};
      void deleteNationality() { this->nationality_ = nullptr;};
      inline string getNationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
      inline PassengerList& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline PassengerList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The date of birth in yyyyMMdd format.
      shared_ptr<string> birthday_ {};
      // The credential information.
      shared_ptr<PassengerList::Credential> credential_ {};
      // The first name.
      // 
      // This parameter is required.
      shared_ptr<string> firstName_ {};
      // The gender. Valid values:
      // - 0: MALE
      // - 1: FEMALE.
      shared_ptr<int32_t> gender_ {};
      // The last name.
      // 
      // This parameter is required.
      shared_ptr<string> lastName_ {};
      // The country calling code for the mobile phone number.
      // 
      // This parameter is required.
      shared_ptr<string> mobileCountryCode_ {};
      // The mobile phone number.
      // 
      // This parameter is required.
      shared_ptr<string> mobilePhoneNumber_ {};
      // The nationality. Use a two-letter country code.
      shared_ptr<string> nationality_ {};
      // The passenger type. Valid values:
      // - 0: adult
      // - 1: child
      // - 8: infant.
      // 
      // This parameter is required.
      shared_ptr<int32_t> type_ {};
    };

    class PassengerAncillaryPurchaseMapList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PassengerAncillaryPurchaseMapList& obj) { 
        DARABONBA_PTR_TO_JSON(book_ancillary_req_item, bookAncillaryReqItem_);
        DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
      };
      friend void from_json(const Darabonba::Json& j, PassengerAncillaryPurchaseMapList& obj) { 
        DARABONBA_PTR_FROM_JSON(book_ancillary_req_item, bookAncillaryReqItem_);
        DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
      };
      PassengerAncillaryPurchaseMapList() = default ;
      PassengerAncillaryPurchaseMapList(const PassengerAncillaryPurchaseMapList &) = default ;
      PassengerAncillaryPurchaseMapList(PassengerAncillaryPurchaseMapList &&) = default ;
      PassengerAncillaryPurchaseMapList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PassengerAncillaryPurchaseMapList() = default ;
      PassengerAncillaryPurchaseMapList& operator=(const PassengerAncillaryPurchaseMapList &) = default ;
      PassengerAncillaryPurchaseMapList& operator=(PassengerAncillaryPurchaseMapList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PassengerList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassengerList& obj) { 
          DARABONBA_PTR_TO_JSON(birthday, birthday_);
          DARABONBA_PTR_TO_JSON(credential, credential_);
          DARABONBA_PTR_TO_JSON(first_name, firstName_);
          DARABONBA_PTR_TO_JSON(gender, gender_);
          DARABONBA_PTR_TO_JSON(last_name, lastName_);
          DARABONBA_PTR_TO_JSON(mobile_country_code, mobileCountryCode_);
          DARABONBA_PTR_TO_JSON(mobile_phone_number, mobilePhoneNumber_);
          DARABONBA_PTR_TO_JSON(nationality, nationality_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, PassengerList& obj) { 
          DARABONBA_PTR_FROM_JSON(birthday, birthday_);
          DARABONBA_PTR_FROM_JSON(credential, credential_);
          DARABONBA_PTR_FROM_JSON(first_name, firstName_);
          DARABONBA_PTR_FROM_JSON(gender, gender_);
          DARABONBA_PTR_FROM_JSON(last_name, lastName_);
          DARABONBA_PTR_FROM_JSON(mobile_country_code, mobileCountryCode_);
          DARABONBA_PTR_FROM_JSON(mobile_phone_number, mobilePhoneNumber_);
          DARABONBA_PTR_FROM_JSON(nationality, nationality_);
          DARABONBA_PTR_FROM_JSON(type, type_);
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
        class Credential : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Credential& obj) { 
            DARABONBA_PTR_TO_JSON(cert_issue_place, certIssuePlace_);
            DARABONBA_PTR_TO_JSON(credential_num, credentialNum_);
            DARABONBA_PTR_TO_JSON(credential_type, credentialType_);
            DARABONBA_PTR_TO_JSON(expire_date, expireDate_);
          };
          friend void from_json(const Darabonba::Json& j, Credential& obj) { 
            DARABONBA_PTR_FROM_JSON(cert_issue_place, certIssuePlace_);
            DARABONBA_PTR_FROM_JSON(credential_num, credentialNum_);
            DARABONBA_PTR_FROM_JSON(credential_type, credentialType_);
            DARABONBA_PTR_FROM_JSON(expire_date, expireDate_);
          };
          Credential() = default ;
          Credential(const Credential &) = default ;
          Credential(Credential &&) = default ;
          Credential(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Credential() = default ;
          Credential& operator=(const Credential &) = default ;
          Credential& operator=(Credential &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->certIssuePlace_ == nullptr
        && this->credentialNum_ == nullptr && this->credentialType_ == nullptr && this->expireDate_ == nullptr; };
          // certIssuePlace Field Functions 
          bool hasCertIssuePlace() const { return this->certIssuePlace_ != nullptr;};
          void deleteCertIssuePlace() { this->certIssuePlace_ = nullptr;};
          inline string getCertIssuePlace() const { DARABONBA_PTR_GET_DEFAULT(certIssuePlace_, "") };
          inline Credential& setCertIssuePlace(string certIssuePlace) { DARABONBA_PTR_SET_VALUE(certIssuePlace_, certIssuePlace) };


          // credentialNum Field Functions 
          bool hasCredentialNum() const { return this->credentialNum_ != nullptr;};
          void deleteCredentialNum() { this->credentialNum_ = nullptr;};
          inline string getCredentialNum() const { DARABONBA_PTR_GET_DEFAULT(credentialNum_, "") };
          inline Credential& setCredentialNum(string credentialNum) { DARABONBA_PTR_SET_VALUE(credentialNum_, credentialNum) };


          // credentialType Field Functions 
          bool hasCredentialType() const { return this->credentialType_ != nullptr;};
          void deleteCredentialType() { this->credentialType_ = nullptr;};
          inline int32_t getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, 0) };
          inline Credential& setCredentialType(int32_t credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


          // expireDate Field Functions 
          bool hasExpireDate() const { return this->expireDate_ != nullptr;};
          void deleteExpireDate() { this->expireDate_ = nullptr;};
          inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
          inline Credential& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


        protected:
          // The place of issue. Use a two-letter country code.
          shared_ptr<string> certIssuePlace_ {};
          // The credential number.
          shared_ptr<string> credentialNum_ {};
          // The credential type. Valid values:
          // - 0: ID card
          // - 1: passport
          // - 2: student ID
          // - 3: military ID
          // - 4: Home Return Permit
          // - 5: Taiwan Compatriot Permit
          // - 6: Hong Kong and Macau Travel Permit
          // - 7: international seafarer certificate
          // - 8: foreigner permanent residence permit
          // - 10: police officer certificate
          // - 11: soldier certificate
          // - 12: Taiwan Travel Permit
          // - 13: Taiwan Entry Permit
          // - 14: household register
          // - 15: birth certificate
          // - 16: driver license
          // - 17: Hong Kong and Macau resident residence permit
          // - 18: Taiwan resident residence permit.
          shared_ptr<int32_t> credentialType_ {};
          // The expiration date of the credential.
          shared_ptr<string> expireDate_ {};
        };

        virtual bool empty() const override { return this->birthday_ == nullptr
        && this->credential_ == nullptr && this->firstName_ == nullptr && this->gender_ == nullptr && this->lastName_ == nullptr && this->mobileCountryCode_ == nullptr
        && this->mobilePhoneNumber_ == nullptr && this->nationality_ == nullptr && this->type_ == nullptr; };
        // birthday Field Functions 
        bool hasBirthday() const { return this->birthday_ != nullptr;};
        void deleteBirthday() { this->birthday_ = nullptr;};
        inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
        inline PassengerList& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


        // credential Field Functions 
        bool hasCredential() const { return this->credential_ != nullptr;};
        void deleteCredential() { this->credential_ = nullptr;};
        inline const PassengerList::Credential & getCredential() const { DARABONBA_PTR_GET_CONST(credential_, PassengerList::Credential) };
        inline PassengerList::Credential getCredential() { DARABONBA_PTR_GET(credential_, PassengerList::Credential) };
        inline PassengerList& setCredential(const PassengerList::Credential & credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };
        inline PassengerList& setCredential(PassengerList::Credential && credential) { DARABONBA_PTR_SET_RVALUE(credential_, credential) };


        // firstName Field Functions 
        bool hasFirstName() const { return this->firstName_ != nullptr;};
        void deleteFirstName() { this->firstName_ = nullptr;};
        inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
        inline PassengerList& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


        // gender Field Functions 
        bool hasGender() const { return this->gender_ != nullptr;};
        void deleteGender() { this->gender_ = nullptr;};
        inline int32_t getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, 0) };
        inline PassengerList& setGender(int32_t gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


        // lastName Field Functions 
        bool hasLastName() const { return this->lastName_ != nullptr;};
        void deleteLastName() { this->lastName_ = nullptr;};
        inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
        inline PassengerList& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


        // mobileCountryCode Field Functions 
        bool hasMobileCountryCode() const { return this->mobileCountryCode_ != nullptr;};
        void deleteMobileCountryCode() { this->mobileCountryCode_ = nullptr;};
        inline string getMobileCountryCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCountryCode_, "") };
        inline PassengerList& setMobileCountryCode(string mobileCountryCode) { DARABONBA_PTR_SET_VALUE(mobileCountryCode_, mobileCountryCode) };


        // mobilePhoneNumber Field Functions 
        bool hasMobilePhoneNumber() const { return this->mobilePhoneNumber_ != nullptr;};
        void deleteMobilePhoneNumber() { this->mobilePhoneNumber_ = nullptr;};
        inline string getMobilePhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(mobilePhoneNumber_, "") };
        inline PassengerList& setMobilePhoneNumber(string mobilePhoneNumber) { DARABONBA_PTR_SET_VALUE(mobilePhoneNumber_, mobilePhoneNumber) };


        // nationality Field Functions 
        bool hasNationality() const { return this->nationality_ != nullptr;};
        void deleteNationality() { this->nationality_ = nullptr;};
        inline string getNationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
        inline PassengerList& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline PassengerList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The date of birth in yyyyMMdd format.
        shared_ptr<string> birthday_ {};
        // The credential information.
        shared_ptr<PassengerList::Credential> credential_ {};
        // The first name.
        // 
        // This parameter is required.
        shared_ptr<string> firstName_ {};
        // The gender. Valid values:
        // - 0: MALE
        // - 1: FEMALE.
        shared_ptr<int32_t> gender_ {};
        // The last name.
        // 
        // This parameter is required.
        shared_ptr<string> lastName_ {};
        // The country calling code for the mobile phone number.
        // 
        // This parameter is required.
        shared_ptr<string> mobileCountryCode_ {};
        // The mobile phone number.
        // 
        // This parameter is required.
        shared_ptr<string> mobilePhoneNumber_ {};
        // The nationality.
        shared_ptr<string> nationality_ {};
        // The passenger type. Valid values:
        // - 0: adult
        // - 1: child
        // - 8: infant.
        // 
        // This parameter is required.
        shared_ptr<int32_t> type_ {};
      };

      class BookAncillaryReqItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BookAncillaryReqItem& obj) { 
          DARABONBA_PTR_TO_JSON(ancillary_id, ancillaryId_);
          DARABONBA_PTR_TO_JSON(ancillary_type, ancillaryType_);
        };
        friend void from_json(const Darabonba::Json& j, BookAncillaryReqItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ancillary_id, ancillaryId_);
          DARABONBA_PTR_FROM_JSON(ancillary_type, ancillaryType_);
        };
        BookAncillaryReqItem() = default ;
        BookAncillaryReqItem(const BookAncillaryReqItem &) = default ;
        BookAncillaryReqItem(BookAncillaryReqItem &&) = default ;
        BookAncillaryReqItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BookAncillaryReqItem() = default ;
        BookAncillaryReqItem& operator=(const BookAncillaryReqItem &) = default ;
        BookAncillaryReqItem& operator=(BookAncillaryReqItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ancillaryId_ == nullptr
        && this->ancillaryType_ == nullptr; };
        // ancillaryId Field Functions 
        bool hasAncillaryId() const { return this->ancillaryId_ != nullptr;};
        void deleteAncillaryId() { this->ancillaryId_ = nullptr;};
        inline string getAncillaryId() const { DARABONBA_PTR_GET_DEFAULT(ancillaryId_, "") };
        inline BookAncillaryReqItem& setAncillaryId(string ancillaryId) { DARABONBA_PTR_SET_VALUE(ancillaryId_, ancillaryId) };


        // ancillaryType Field Functions 
        bool hasAncillaryType() const { return this->ancillaryType_ != nullptr;};
        void deleteAncillaryType() { this->ancillaryType_ = nullptr;};
        inline int32_t getAncillaryType() const { DARABONBA_PTR_GET_DEFAULT(ancillaryType_, 0) };
        inline BookAncillaryReqItem& setAncillaryType(int32_t ancillaryType) { DARABONBA_PTR_SET_VALUE(ancillaryType_, ancillaryType) };


      protected:
        // The ancillary product ID.
        shared_ptr<string> ancillaryId_ {};
        // The ancillary product type. Currently supported value: 4 (paid baggage). More types will be supported in the future.
        shared_ptr<int32_t> ancillaryType_ {};
      };

      virtual bool empty() const override { return this->bookAncillaryReqItem_ == nullptr
        && this->passengerList_ == nullptr; };
      // bookAncillaryReqItem Field Functions 
      bool hasBookAncillaryReqItem() const { return this->bookAncillaryReqItem_ != nullptr;};
      void deleteBookAncillaryReqItem() { this->bookAncillaryReqItem_ = nullptr;};
      inline const PassengerAncillaryPurchaseMapList::BookAncillaryReqItem & getBookAncillaryReqItem() const { DARABONBA_PTR_GET_CONST(bookAncillaryReqItem_, PassengerAncillaryPurchaseMapList::BookAncillaryReqItem) };
      inline PassengerAncillaryPurchaseMapList::BookAncillaryReqItem getBookAncillaryReqItem() { DARABONBA_PTR_GET(bookAncillaryReqItem_, PassengerAncillaryPurchaseMapList::BookAncillaryReqItem) };
      inline PassengerAncillaryPurchaseMapList& setBookAncillaryReqItem(const PassengerAncillaryPurchaseMapList::BookAncillaryReqItem & bookAncillaryReqItem) { DARABONBA_PTR_SET_VALUE(bookAncillaryReqItem_, bookAncillaryReqItem) };
      inline PassengerAncillaryPurchaseMapList& setBookAncillaryReqItem(PassengerAncillaryPurchaseMapList::BookAncillaryReqItem && bookAncillaryReqItem) { DARABONBA_PTR_SET_RVALUE(bookAncillaryReqItem_, bookAncillaryReqItem) };


      // passengerList Field Functions 
      bool hasPassengerList() const { return this->passengerList_ != nullptr;};
      void deletePassengerList() { this->passengerList_ = nullptr;};
      inline const vector<PassengerAncillaryPurchaseMapList::PassengerList> & getPassengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<PassengerAncillaryPurchaseMapList::PassengerList>) };
      inline vector<PassengerAncillaryPurchaseMapList::PassengerList> getPassengerList() { DARABONBA_PTR_GET(passengerList_, vector<PassengerAncillaryPurchaseMapList::PassengerList>) };
      inline PassengerAncillaryPurchaseMapList& setPassengerList(const vector<PassengerAncillaryPurchaseMapList::PassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
      inline PassengerAncillaryPurchaseMapList& setPassengerList(vector<PassengerAncillaryPurchaseMapList::PassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


    protected:
      // The ancillary product object for the booking request.
      shared_ptr<PassengerAncillaryPurchaseMapList::BookAncillaryReqItem> bookAncillaryReqItem_ {};
      // The list of passengers who purchase the same ancillary product.
      shared_ptr<vector<PassengerAncillaryPurchaseMapList::PassengerList>> passengerList_ {};
    };

    class Contact : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Contact& obj) { 
        DARABONBA_PTR_TO_JSON(email, email_);
        DARABONBA_PTR_TO_JSON(first_name, firstName_);
        DARABONBA_PTR_TO_JSON(last_name, lastName_);
        DARABONBA_PTR_TO_JSON(mobile_country_code, mobileCountryCode_);
        DARABONBA_PTR_TO_JSON(mobile_phone_num, mobilePhoneNum_);
      };
      friend void from_json(const Darabonba::Json& j, Contact& obj) { 
        DARABONBA_PTR_FROM_JSON(email, email_);
        DARABONBA_PTR_FROM_JSON(first_name, firstName_);
        DARABONBA_PTR_FROM_JSON(last_name, lastName_);
        DARABONBA_PTR_FROM_JSON(mobile_country_code, mobileCountryCode_);
        DARABONBA_PTR_FROM_JSON(mobile_phone_num, mobilePhoneNum_);
      };
      Contact() = default ;
      Contact(const Contact &) = default ;
      Contact(Contact &&) = default ;
      Contact(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Contact() = default ;
      Contact& operator=(const Contact &) = default ;
      Contact& operator=(Contact &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->email_ == nullptr
        && this->firstName_ == nullptr && this->lastName_ == nullptr && this->mobileCountryCode_ == nullptr && this->mobilePhoneNum_ == nullptr; };
      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Contact& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // firstName Field Functions 
      bool hasFirstName() const { return this->firstName_ != nullptr;};
      void deleteFirstName() { this->firstName_ = nullptr;};
      inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
      inline Contact& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


      // lastName Field Functions 
      bool hasLastName() const { return this->lastName_ != nullptr;};
      void deleteLastName() { this->lastName_ = nullptr;};
      inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
      inline Contact& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


      // mobileCountryCode Field Functions 
      bool hasMobileCountryCode() const { return this->mobileCountryCode_ != nullptr;};
      void deleteMobileCountryCode() { this->mobileCountryCode_ = nullptr;};
      inline string getMobileCountryCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCountryCode_, "") };
      inline Contact& setMobileCountryCode(string mobileCountryCode) { DARABONBA_PTR_SET_VALUE(mobileCountryCode_, mobileCountryCode) };


      // mobilePhoneNum Field Functions 
      bool hasMobilePhoneNum() const { return this->mobilePhoneNum_ != nullptr;};
      void deleteMobilePhoneNum() { this->mobilePhoneNum_ = nullptr;};
      inline string getMobilePhoneNum() const { DARABONBA_PTR_GET_DEFAULT(mobilePhoneNum_, "") };
      inline Contact& setMobilePhoneNum(string mobilePhoneNum) { DARABONBA_PTR_SET_VALUE(mobilePhoneNum_, mobilePhoneNum) };


    protected:
      // The email address.
      shared_ptr<string> email_ {};
      // The first name.
      shared_ptr<string> firstName_ {};
      // The last name.
      shared_ptr<string> lastName_ {};
      // The country calling code.
      shared_ptr<string> mobileCountryCode_ {};
      // The mobile phone number.
      shared_ptr<string> mobilePhoneNum_ {};
    };

    virtual bool empty() const override { return this->contact_ == nullptr
        && this->outOrderNum_ == nullptr && this->passengerAncillaryPurchaseMapList_ == nullptr && this->passengerList_ == nullptr && this->solutionId_ == nullptr; };
    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const BookRequest::Contact & getContact() const { DARABONBA_PTR_GET_CONST(contact_, BookRequest::Contact) };
    inline BookRequest::Contact getContact() { DARABONBA_PTR_GET(contact_, BookRequest::Contact) };
    inline BookRequest& setContact(const BookRequest::Contact & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline BookRequest& setContact(BookRequest::Contact && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


    // outOrderNum Field Functions 
    bool hasOutOrderNum() const { return this->outOrderNum_ != nullptr;};
    void deleteOutOrderNum() { this->outOrderNum_ = nullptr;};
    inline string getOutOrderNum() const { DARABONBA_PTR_GET_DEFAULT(outOrderNum_, "") };
    inline BookRequest& setOutOrderNum(string outOrderNum) { DARABONBA_PTR_SET_VALUE(outOrderNum_, outOrderNum) };


    // passengerAncillaryPurchaseMapList Field Functions 
    bool hasPassengerAncillaryPurchaseMapList() const { return this->passengerAncillaryPurchaseMapList_ != nullptr;};
    void deletePassengerAncillaryPurchaseMapList() { this->passengerAncillaryPurchaseMapList_ = nullptr;};
    inline const vector<BookRequest::PassengerAncillaryPurchaseMapList> & getPassengerAncillaryPurchaseMapList() const { DARABONBA_PTR_GET_CONST(passengerAncillaryPurchaseMapList_, vector<BookRequest::PassengerAncillaryPurchaseMapList>) };
    inline vector<BookRequest::PassengerAncillaryPurchaseMapList> getPassengerAncillaryPurchaseMapList() { DARABONBA_PTR_GET(passengerAncillaryPurchaseMapList_, vector<BookRequest::PassengerAncillaryPurchaseMapList>) };
    inline BookRequest& setPassengerAncillaryPurchaseMapList(const vector<BookRequest::PassengerAncillaryPurchaseMapList> & passengerAncillaryPurchaseMapList) { DARABONBA_PTR_SET_VALUE(passengerAncillaryPurchaseMapList_, passengerAncillaryPurchaseMapList) };
    inline BookRequest& setPassengerAncillaryPurchaseMapList(vector<BookRequest::PassengerAncillaryPurchaseMapList> && passengerAncillaryPurchaseMapList) { DARABONBA_PTR_SET_RVALUE(passengerAncillaryPurchaseMapList_, passengerAncillaryPurchaseMapList) };


    // passengerList Field Functions 
    bool hasPassengerList() const { return this->passengerList_ != nullptr;};
    void deletePassengerList() { this->passengerList_ = nullptr;};
    inline const vector<BookRequest::PassengerList> & getPassengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<BookRequest::PassengerList>) };
    inline vector<BookRequest::PassengerList> getPassengerList() { DARABONBA_PTR_GET(passengerList_, vector<BookRequest::PassengerList>) };
    inline BookRequest& setPassengerList(const vector<BookRequest::PassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
    inline BookRequest& setPassengerList(vector<BookRequest::PassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string getSolutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline BookRequest& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


  protected:
    // The contact information.
    // 
    // This parameter is required.
    shared_ptr<BookRequest::Contact> contact_ {};
    // The external order number.
    // 
    // This parameter is required.
    shared_ptr<string> outOrderNum_ {};
    // The mapping between passengers and ancillary purchases.
    shared_ptr<vector<BookRequest::PassengerAncillaryPurchaseMapList>> passengerAncillaryPurchaseMapList_ {};
    // The list of passengers.
    // 
    // This parameter is required.
    shared_ptr<vector<BookRequest::PassengerList>> passengerList_ {};
    // solution_id.
    // 
    // This parameter is required.
    shared_ptr<string> solutionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
