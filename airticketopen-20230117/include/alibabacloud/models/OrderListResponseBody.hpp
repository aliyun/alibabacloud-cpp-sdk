// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ORDERLISTRESPONSEBODY_HPP_
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
  class OrderListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(error_code, errorCode_);
      DARABONBA_ANY_TO_JSON(error_data, errorData_);
      DARABONBA_PTR_TO_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, OrderListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(error_code, errorCode_);
      DARABONBA_ANY_FROM_JSON(error_data, errorData_);
      DARABONBA_PTR_FROM_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    OrderListResponseBody() = default ;
    OrderListResponseBody(const OrderListResponseBody &) = default ;
    OrderListResponseBody(OrderListResponseBody &&) = default ;
    OrderListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderListResponseBody() = default ;
    OrderListResponseBody& operator=(const OrderListResponseBody &) = default ;
    OrderListResponseBody& operator=(OrderListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(list, list_);
        DARABONBA_PTR_TO_JSON(pagination, pagination_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(list, list_);
        DARABONBA_PTR_FROM_JSON(pagination, pagination_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Pagination : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Pagination& obj) { 
          DARABONBA_PTR_TO_JSON(current_page, currentPage_);
          DARABONBA_PTR_TO_JSON(page_size, pageSize_);
          DARABONBA_PTR_TO_JSON(total_count, totalCount_);
          DARABONBA_PTR_TO_JSON(total_page, totalPage_);
        };
        friend void from_json(const Darabonba::Json& j, Pagination& obj) { 
          DARABONBA_PTR_FROM_JSON(current_page, currentPage_);
          DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
          DARABONBA_PTR_FROM_JSON(total_count, totalCount_);
          DARABONBA_PTR_FROM_JSON(total_page, totalPage_);
        };
        Pagination() = default ;
        Pagination(const Pagination &) = default ;
        Pagination(Pagination &&) = default ;
        Pagination(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Pagination() = default ;
        Pagination& operator=(const Pagination &) = default ;
        Pagination& operator=(Pagination &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
        // currentPage Field Functions 
        bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
        void deleteCurrentPage() { this->currentPage_ = nullptr;};
        inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
        inline Pagination& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline Pagination& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline Pagination& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


        // totalPage Field Functions 
        bool hasTotalPage() const { return this->totalPage_ != nullptr;};
        void deleteTotalPage() { this->totalPage_ = nullptr;};
        inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
        inline Pagination& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


      protected:
        // The current page number.
        shared_ptr<int32_t> currentPage_ {};
        // The number of records per page.
        shared_ptr<int32_t> pageSize_ {};
        // The total number of records.
        shared_ptr<int32_t> totalCount_ {};
        // The total number of pages.
        shared_ptr<int32_t> totalPage_ {};
      };

      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(book_time, bookTime_);
          DARABONBA_PTR_TO_JSON(order_num, orderNum_);
          DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
          DARABONBA_PTR_TO_JSON(out_order_num, outOrderNum_);
          DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
          DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
          DARABONBA_PTR_TO_JSON(pay_time, payTime_);
          DARABONBA_PTR_TO_JSON(promotion_price, promotionPrice_);
          DARABONBA_PTR_TO_JSON(real_pay_price, realPayPrice_);
          DARABONBA_PTR_TO_JSON(session_nick, sessionNick_);
          DARABONBA_PTR_TO_JSON(succeed_time, succeedTime_);
          DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
          DARABONBA_PTR_TO_JSON(transaction_no, transactionNo_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(book_time, bookTime_);
          DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
          DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
          DARABONBA_PTR_FROM_JSON(out_order_num, outOrderNum_);
          DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
          DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
          DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
          DARABONBA_PTR_FROM_JSON(promotion_price, promotionPrice_);
          DARABONBA_PTR_FROM_JSON(real_pay_price, realPayPrice_);
          DARABONBA_PTR_FROM_JSON(session_nick, sessionNick_);
          DARABONBA_PTR_FROM_JSON(succeed_time, succeedTime_);
          DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
          DARABONBA_PTR_FROM_JSON(transaction_no, transactionNo_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
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
            // The place of issue, represented as a two-letter code.
            shared_ptr<string> certIssuePlace_ {};
            // The credential number.
            shared_ptr<string> credentialNum_ {};
            // The credential type. Valid values:
            // - 0: ID card.
            // - 1: passport.
            // - 2: student ID.
            // - 3: military ID.
            // - 4: Home Return Permit.
            // - 5: Taiwan Compatriot Permit.
            // - 6: Hong Kong and Macao Travel Permit.
            // - 7: international seafarer certificate.
            // - 8: Foreigner Permanent Residence Card.
            // - 10: police officer ID.
            // - 11: soldier ID.
            // - 12: Taiwan Travel Permit.
            // - 13: Taiwan Entry Permit.
            // - 14: household register.
            // - 15: birth certificate.
            // - 16: driver license.
            // - 17: Hong Kong and Macao Resident Residence Permit.
            // - 18: Taiwan Resident Residence Permit.
            shared_ptr<int32_t> credentialType_ {};
            // The credential expiration date.
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
          // The date of birth in the yyyyMMdd format.
          shared_ptr<string> birthday_ {};
          // The credential information.
          shared_ptr<PassengerList::Credential> credential_ {};
          // The first name.
          shared_ptr<string> firstName_ {};
          // The gender. Valid values:
          // - 0: MALE.
          // - 1: FEMALE.
          shared_ptr<int32_t> gender_ {};
          // The last name.
          shared_ptr<string> lastName_ {};
          // The country code of the mobile phone number.
          shared_ptr<string> mobileCountryCode_ {};
          // The mobile phone number.
          shared_ptr<string> mobilePhoneNumber_ {};
          // The two-letter nationality code.
          shared_ptr<string> nationality_ {};
          // The passenger type. Valid values:
          // - 0: adult.
          // - 1: child.
          // - 8: infant.
          shared_ptr<int32_t> type_ {};
        };

        virtual bool empty() const override { return this->bookTime_ == nullptr
        && this->orderNum_ == nullptr && this->orderStatus_ == nullptr && this->outOrderNum_ == nullptr && this->passengerList_ == nullptr && this->payStatus_ == nullptr
        && this->payTime_ == nullptr && this->promotionPrice_ == nullptr && this->realPayPrice_ == nullptr && this->sessionNick_ == nullptr && this->succeedTime_ == nullptr
        && this->totalPrice_ == nullptr && this->transactionNo_ == nullptr; };
        // bookTime Field Functions 
        bool hasBookTime() const { return this->bookTime_ != nullptr;};
        void deleteBookTime() { this->bookTime_ = nullptr;};
        inline int64_t getBookTime() const { DARABONBA_PTR_GET_DEFAULT(bookTime_, 0L) };
        inline List& setBookTime(int64_t bookTime) { DARABONBA_PTR_SET_VALUE(bookTime_, bookTime) };


        // orderNum Field Functions 
        bool hasOrderNum() const { return this->orderNum_ != nullptr;};
        void deleteOrderNum() { this->orderNum_ = nullptr;};
        inline int64_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
        inline List& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


        // orderStatus Field Functions 
        bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
        void deleteOrderStatus() { this->orderStatus_ = nullptr;};
        inline string getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, "") };
        inline List& setOrderStatus(string orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


        // outOrderNum Field Functions 
        bool hasOutOrderNum() const { return this->outOrderNum_ != nullptr;};
        void deleteOutOrderNum() { this->outOrderNum_ = nullptr;};
        inline string getOutOrderNum() const { DARABONBA_PTR_GET_DEFAULT(outOrderNum_, "") };
        inline List& setOutOrderNum(string outOrderNum) { DARABONBA_PTR_SET_VALUE(outOrderNum_, outOrderNum) };


        // passengerList Field Functions 
        bool hasPassengerList() const { return this->passengerList_ != nullptr;};
        void deletePassengerList() { this->passengerList_ = nullptr;};
        inline const vector<List::PassengerList> & getPassengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<List::PassengerList>) };
        inline vector<List::PassengerList> getPassengerList() { DARABONBA_PTR_GET(passengerList_, vector<List::PassengerList>) };
        inline List& setPassengerList(const vector<List::PassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
        inline List& setPassengerList(vector<List::PassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


        // payStatus Field Functions 
        bool hasPayStatus() const { return this->payStatus_ != nullptr;};
        void deletePayStatus() { this->payStatus_ = nullptr;};
        inline string getPayStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, "") };
        inline List& setPayStatus(string payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


        // payTime Field Functions 
        bool hasPayTime() const { return this->payTime_ != nullptr;};
        void deletePayTime() { this->payTime_ = nullptr;};
        inline int64_t getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, 0L) };
        inline List& setPayTime(int64_t payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


        // promotionPrice Field Functions 
        bool hasPromotionPrice() const { return this->promotionPrice_ != nullptr;};
        void deletePromotionPrice() { this->promotionPrice_ = nullptr;};
        inline double getPromotionPrice() const { DARABONBA_PTR_GET_DEFAULT(promotionPrice_, 0.0) };
        inline List& setPromotionPrice(double promotionPrice) { DARABONBA_PTR_SET_VALUE(promotionPrice_, promotionPrice) };


        // realPayPrice Field Functions 
        bool hasRealPayPrice() const { return this->realPayPrice_ != nullptr;};
        void deleteRealPayPrice() { this->realPayPrice_ = nullptr;};
        inline double getRealPayPrice() const { DARABONBA_PTR_GET_DEFAULT(realPayPrice_, 0.0) };
        inline List& setRealPayPrice(double realPayPrice) { DARABONBA_PTR_SET_VALUE(realPayPrice_, realPayPrice) };


        // sessionNick Field Functions 
        bool hasSessionNick() const { return this->sessionNick_ != nullptr;};
        void deleteSessionNick() { this->sessionNick_ = nullptr;};
        inline string getSessionNick() const { DARABONBA_PTR_GET_DEFAULT(sessionNick_, "") };
        inline List& setSessionNick(string sessionNick) { DARABONBA_PTR_SET_VALUE(sessionNick_, sessionNick) };


        // succeedTime Field Functions 
        bool hasSucceedTime() const { return this->succeedTime_ != nullptr;};
        void deleteSucceedTime() { this->succeedTime_ = nullptr;};
        inline int64_t getSucceedTime() const { DARABONBA_PTR_GET_DEFAULT(succeedTime_, 0L) };
        inline List& setSucceedTime(int64_t succeedTime) { DARABONBA_PTR_SET_VALUE(succeedTime_, succeedTime) };


        // totalPrice Field Functions 
        bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
        void deleteTotalPrice() { this->totalPrice_ = nullptr;};
        inline double getTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0.0) };
        inline List& setTotalPrice(double totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


        // transactionNo Field Functions 
        bool hasTransactionNo() const { return this->transactionNo_ != nullptr;};
        void deleteTransactionNo() { this->transactionNo_ = nullptr;};
        inline string getTransactionNo() const { DARABONBA_PTR_GET_DEFAULT(transactionNo_, "") };
        inline List& setTransactionNo(string transactionNo) { DARABONBA_PTR_SET_VALUE(transactionNo_, transactionNo) };


      protected:
        // The booking time (order creation time). The value is a 13-digit UNIX timestamp.
        shared_ptr<int64_t> bookTime_ {};
        // The order number.
        shared_ptr<int64_t> orderNum_ {};
        // The order status. Valid values:
        // - 2: order creation succeeded.
        // - 3: order paid.
        // - 4: order succeeded.
        // - 5: order closed.
        shared_ptr<string> orderStatus_ {};
        // The external order number.
        shared_ptr<string> outOrderNum_ {};
        // The passenger list.
        shared_ptr<vector<List::PassengerList>> passengerList_ {};
        // The payment status. Valid values:
        // - 0: initialized.
        // - 1: creation succeeded.
        // - 2: payment succeeded.
        // - 4: transaction closed.
        shared_ptr<string> payStatus_ {};
        // The payment time. The value is a 13-digit UNIX timestamp.
        shared_ptr<int64_t> payTime_ {};
        // The discount amount. Unit: yuan.
        shared_ptr<double> promotionPrice_ {};
        // The actual payment amount. Unit: yuan.
        shared_ptr<double> realPayPrice_ {};
        // The buyer nickname.
        shared_ptr<string> sessionNick_ {};
        // The ticketing time. The value is a 13-digit UNIX timestamp.
        shared_ptr<int64_t> succeedTime_ {};
        // The total price of the order. Unit: yuan.
        shared_ptr<double> totalPrice_ {};
        // The transaction serial number.
        shared_ptr<string> transactionNo_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pagination_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pagination Field Functions 
      bool hasPagination() const { return this->pagination_ != nullptr;};
      void deletePagination() { this->pagination_ = nullptr;};
      inline const Data::Pagination & getPagination() const { DARABONBA_PTR_GET_CONST(pagination_, Data::Pagination) };
      inline Data::Pagination getPagination() { DARABONBA_PTR_GET(pagination_, Data::Pagination) };
      inline Data& setPagination(const Data::Pagination & pagination) { DARABONBA_PTR_SET_VALUE(pagination_, pagination) };
      inline Data& setPagination(Data::Pagination && pagination) { DARABONBA_PTR_SET_RVALUE(pagination_, pagination) };


    protected:
      // The data list.
      shared_ptr<vector<Data::List>> list_ {};
      // The pagination information.
      shared_ptr<Data::Pagination> pagination_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->errorData_ == nullptr && this->errorMsg_ == nullptr && this->status_ == nullptr
        && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OrderListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OrderListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, OrderListResponseBody::Data) };
    inline OrderListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, OrderListResponseBody::Data) };
    inline OrderListResponseBody& setData(const OrderListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline OrderListResponseBody& setData(OrderListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline OrderListResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorData Field Functions 
    bool hasErrorData() const { return this->errorData_ != nullptr;};
    void deleteErrorData() { this->errorData_ = nullptr;};
    inline     const Darabonba::Json & getErrorData() const { DARABONBA_GET(errorData_) };
    Darabonba::Json & getErrorData() { DARABONBA_GET(errorData_) };
    inline OrderListResponseBody& setErrorData(const Darabonba::Json & errorData) { DARABONBA_SET_VALUE(errorData_, errorData) };
    inline OrderListResponseBody& setErrorData(Darabonba::Json && errorData) { DARABONBA_SET_RVALUE(errorData_, errorData) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline OrderListResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline OrderListResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline OrderListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The data returned for a successful request.
    shared_ptr<OrderListResponseBody::Data> data_ {};
    // The business error code.
    shared_ptr<string> errorCode_ {};
    // The data returned with the error.
    Darabonba::Json errorData_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code. The value is always 200 for successful requests.
    shared_ptr<int32_t> status_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
