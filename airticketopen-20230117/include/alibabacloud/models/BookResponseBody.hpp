// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BOOKRESPONSEBODY_HPP_
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
  class BookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(error_code, errorCode_);
      DARABONBA_PTR_TO_JSON(error_data, errorData_);
      DARABONBA_PTR_TO_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(error_code, errorCode_);
      DARABONBA_PTR_FROM_JSON(error_data, errorData_);
      DARABONBA_PTR_FROM_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    BookResponseBody() = default ;
    BookResponseBody(const BookResponseBody &) = default ;
    BookResponseBody(BookResponseBody &&) = default ;
    BookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BookResponseBody() = default ;
    BookResponseBody& operator=(const BookResponseBody &) = default ;
    BookResponseBody& operator=(BookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ErrorData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ErrorData& obj) { 
        DARABONBA_PTR_TO_JSON(order_list, orderList_);
      };
      friend void from_json(const Darabonba::Json& j, ErrorData& obj) { 
        DARABONBA_PTR_FROM_JSON(order_list, orderList_);
      };
      ErrorData() = default ;
      ErrorData(const ErrorData &) = default ;
      ErrorData(ErrorData &&) = default ;
      ErrorData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ErrorData() = default ;
      ErrorData& operator=(const ErrorData &) = default ;
      ErrorData& operator=(ErrorData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OrderList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OrderList& obj) { 
          DARABONBA_PTR_TO_JSON(order_attribute, orderAttribute_);
          DARABONBA_PTR_TO_JSON(order_num, orderNum_);
        };
        friend void from_json(const Darabonba::Json& j, OrderList& obj) { 
          DARABONBA_PTR_FROM_JSON(order_attribute, orderAttribute_);
          DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
        };
        OrderList() = default ;
        OrderList(const OrderList &) = default ;
        OrderList(OrderList &&) = default ;
        OrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OrderList() = default ;
        OrderList& operator=(const OrderList &) = default ;
        OrderList& operator=(OrderList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OrderAttribute : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OrderAttribute& obj) { 
            DARABONBA_PTR_TO_JSON(aba_pay_lock_rate_info, abaPayLockRateInfo_);
          };
          friend void from_json(const Darabonba::Json& j, OrderAttribute& obj) { 
            DARABONBA_PTR_FROM_JSON(aba_pay_lock_rate_info, abaPayLockRateInfo_);
          };
          OrderAttribute() = default ;
          OrderAttribute(const OrderAttribute &) = default ;
          OrderAttribute(OrderAttribute &&) = default ;
          OrderAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OrderAttribute() = default ;
          OrderAttribute& operator=(const OrderAttribute &) = default ;
          OrderAttribute& operator=(OrderAttribute &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AbaPayLockRateInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AbaPayLockRateInfo& obj) { 
              DARABONBA_PTR_TO_JSON(pay_intended_amount, payIntendedAmount_);
              DARABONBA_PTR_TO_JSON(pay_intended_currency_code, payIntendedCurrencyCode_);
              DARABONBA_PTR_TO_JSON(quotation_currency_code, quotationCurrencyCode_);
              DARABONBA_PTR_TO_JSON(to_pay_currency_rate, toPayCurrencyRate_);
            };
            friend void from_json(const Darabonba::Json& j, AbaPayLockRateInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(pay_intended_amount, payIntendedAmount_);
              DARABONBA_PTR_FROM_JSON(pay_intended_currency_code, payIntendedCurrencyCode_);
              DARABONBA_PTR_FROM_JSON(quotation_currency_code, quotationCurrencyCode_);
              DARABONBA_PTR_FROM_JSON(to_pay_currency_rate, toPayCurrencyRate_);
            };
            AbaPayLockRateInfo() = default ;
            AbaPayLockRateInfo(const AbaPayLockRateInfo &) = default ;
            AbaPayLockRateInfo(AbaPayLockRateInfo &&) = default ;
            AbaPayLockRateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AbaPayLockRateInfo() = default ;
            AbaPayLockRateInfo& operator=(const AbaPayLockRateInfo &) = default ;
            AbaPayLockRateInfo& operator=(AbaPayLockRateInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->payIntendedAmount_ == nullptr
        && this->payIntendedCurrencyCode_ == nullptr && this->quotationCurrencyCode_ == nullptr && this->toPayCurrencyRate_ == nullptr; };
            // payIntendedAmount Field Functions 
            bool hasPayIntendedAmount() const { return this->payIntendedAmount_ != nullptr;};
            void deletePayIntendedAmount() { this->payIntendedAmount_ = nullptr;};
            inline string getPayIntendedAmount() const { DARABONBA_PTR_GET_DEFAULT(payIntendedAmount_, "") };
            inline AbaPayLockRateInfo& setPayIntendedAmount(string payIntendedAmount) { DARABONBA_PTR_SET_VALUE(payIntendedAmount_, payIntendedAmount) };


            // payIntendedCurrencyCode Field Functions 
            bool hasPayIntendedCurrencyCode() const { return this->payIntendedCurrencyCode_ != nullptr;};
            void deletePayIntendedCurrencyCode() { this->payIntendedCurrencyCode_ = nullptr;};
            inline string getPayIntendedCurrencyCode() const { DARABONBA_PTR_GET_DEFAULT(payIntendedCurrencyCode_, "") };
            inline AbaPayLockRateInfo& setPayIntendedCurrencyCode(string payIntendedCurrencyCode) { DARABONBA_PTR_SET_VALUE(payIntendedCurrencyCode_, payIntendedCurrencyCode) };


            // quotationCurrencyCode Field Functions 
            bool hasQuotationCurrencyCode() const { return this->quotationCurrencyCode_ != nullptr;};
            void deleteQuotationCurrencyCode() { this->quotationCurrencyCode_ = nullptr;};
            inline string getQuotationCurrencyCode() const { DARABONBA_PTR_GET_DEFAULT(quotationCurrencyCode_, "") };
            inline AbaPayLockRateInfo& setQuotationCurrencyCode(string quotationCurrencyCode) { DARABONBA_PTR_SET_VALUE(quotationCurrencyCode_, quotationCurrencyCode) };


            // toPayCurrencyRate Field Functions 
            bool hasToPayCurrencyRate() const { return this->toPayCurrencyRate_ != nullptr;};
            void deleteToPayCurrencyRate() { this->toPayCurrencyRate_ = nullptr;};
            inline string getToPayCurrencyRate() const { DARABONBA_PTR_GET_DEFAULT(toPayCurrencyRate_, "") };
            inline AbaPayLockRateInfo& setToPayCurrencyRate(string toPayCurrencyRate) { DARABONBA_PTR_SET_VALUE(toPayCurrencyRate_, toPayCurrencyRate) };


          protected:
            shared_ptr<string> payIntendedAmount_ {};
            shared_ptr<string> payIntendedCurrencyCode_ {};
            shared_ptr<string> quotationCurrencyCode_ {};
            shared_ptr<string> toPayCurrencyRate_ {};
          };

          virtual bool empty() const override { return this->abaPayLockRateInfo_ == nullptr; };
          // abaPayLockRateInfo Field Functions 
          bool hasAbaPayLockRateInfo() const { return this->abaPayLockRateInfo_ != nullptr;};
          void deleteAbaPayLockRateInfo() { this->abaPayLockRateInfo_ = nullptr;};
          inline const OrderAttribute::AbaPayLockRateInfo & getAbaPayLockRateInfo() const { DARABONBA_PTR_GET_CONST(abaPayLockRateInfo_, OrderAttribute::AbaPayLockRateInfo) };
          inline OrderAttribute::AbaPayLockRateInfo getAbaPayLockRateInfo() { DARABONBA_PTR_GET(abaPayLockRateInfo_, OrderAttribute::AbaPayLockRateInfo) };
          inline OrderAttribute& setAbaPayLockRateInfo(const OrderAttribute::AbaPayLockRateInfo & abaPayLockRateInfo) { DARABONBA_PTR_SET_VALUE(abaPayLockRateInfo_, abaPayLockRateInfo) };
          inline OrderAttribute& setAbaPayLockRateInfo(OrderAttribute::AbaPayLockRateInfo && abaPayLockRateInfo) { DARABONBA_PTR_SET_RVALUE(abaPayLockRateInfo_, abaPayLockRateInfo) };


        protected:
          shared_ptr<OrderAttribute::AbaPayLockRateInfo> abaPayLockRateInfo_ {};
        };

        virtual bool empty() const override { return this->orderAttribute_ == nullptr
        && this->orderNum_ == nullptr; };
        // orderAttribute Field Functions 
        bool hasOrderAttribute() const { return this->orderAttribute_ != nullptr;};
        void deleteOrderAttribute() { this->orderAttribute_ = nullptr;};
        inline const OrderList::OrderAttribute & getOrderAttribute() const { DARABONBA_PTR_GET_CONST(orderAttribute_, OrderList::OrderAttribute) };
        inline OrderList::OrderAttribute getOrderAttribute() { DARABONBA_PTR_GET(orderAttribute_, OrderList::OrderAttribute) };
        inline OrderList& setOrderAttribute(const OrderList::OrderAttribute & orderAttribute) { DARABONBA_PTR_SET_VALUE(orderAttribute_, orderAttribute) };
        inline OrderList& setOrderAttribute(OrderList::OrderAttribute && orderAttribute) { DARABONBA_PTR_SET_RVALUE(orderAttribute_, orderAttribute) };


        // orderNum Field Functions 
        bool hasOrderNum() const { return this->orderNum_ != nullptr;};
        void deleteOrderNum() { this->orderNum_ = nullptr;};
        inline int64_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
        inline OrderList& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


      protected:
        shared_ptr<OrderList::OrderAttribute> orderAttribute_ {};
        // The order number.
        shared_ptr<int64_t> orderNum_ {};
      };

      virtual bool empty() const override { return this->orderList_ == nullptr; };
      // orderList Field Functions 
      bool hasOrderList() const { return this->orderList_ != nullptr;};
      void deleteOrderList() { this->orderList_ = nullptr;};
      inline const vector<ErrorData::OrderList> & getOrderList() const { DARABONBA_PTR_GET_CONST(orderList_, vector<ErrorData::OrderList>) };
      inline vector<ErrorData::OrderList> getOrderList() { DARABONBA_PTR_GET(orderList_, vector<ErrorData::OrderList>) };
      inline ErrorData& setOrderList(const vector<ErrorData::OrderList> & orderList) { DARABONBA_PTR_SET_VALUE(orderList_, orderList) };
      inline ErrorData& setOrderList(vector<ErrorData::OrderList> && orderList) { DARABONBA_PTR_SET_RVALUE(orderList_, orderList) };


    protected:
      // The list of order information. If you call the Book operation again with the same parameters after a successful booking, the order number is returned.
      shared_ptr<vector<ErrorData::OrderList>> orderList_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(order_list, orderList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(order_list, orderList_);
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
      class OrderList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OrderList& obj) { 
          DARABONBA_PTR_TO_JSON(order_attribute, orderAttribute_);
          DARABONBA_PTR_TO_JSON(order_num, orderNum_);
        };
        friend void from_json(const Darabonba::Json& j, OrderList& obj) { 
          DARABONBA_PTR_FROM_JSON(order_attribute, orderAttribute_);
          DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
        };
        OrderList() = default ;
        OrderList(const OrderList &) = default ;
        OrderList(OrderList &&) = default ;
        OrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OrderList() = default ;
        OrderList& operator=(const OrderList &) = default ;
        OrderList& operator=(OrderList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OrderAttribute : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OrderAttribute& obj) { 
            DARABONBA_PTR_TO_JSON(aba_pay_lock_rate_info, abaPayLockRateInfo_);
          };
          friend void from_json(const Darabonba::Json& j, OrderAttribute& obj) { 
            DARABONBA_PTR_FROM_JSON(aba_pay_lock_rate_info, abaPayLockRateInfo_);
          };
          OrderAttribute() = default ;
          OrderAttribute(const OrderAttribute &) = default ;
          OrderAttribute(OrderAttribute &&) = default ;
          OrderAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OrderAttribute() = default ;
          OrderAttribute& operator=(const OrderAttribute &) = default ;
          OrderAttribute& operator=(OrderAttribute &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AbaPayLockRateInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AbaPayLockRateInfo& obj) { 
              DARABONBA_PTR_TO_JSON(pay_intended_amount, payIntendedAmount_);
              DARABONBA_PTR_TO_JSON(pay_intended_currency_code, payIntendedCurrencyCode_);
              DARABONBA_PTR_TO_JSON(quotation_currency_code, quotationCurrencyCode_);
              DARABONBA_PTR_TO_JSON(to_pay_currency_rate, toPayCurrencyRate_);
            };
            friend void from_json(const Darabonba::Json& j, AbaPayLockRateInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(pay_intended_amount, payIntendedAmount_);
              DARABONBA_PTR_FROM_JSON(pay_intended_currency_code, payIntendedCurrencyCode_);
              DARABONBA_PTR_FROM_JSON(quotation_currency_code, quotationCurrencyCode_);
              DARABONBA_PTR_FROM_JSON(to_pay_currency_rate, toPayCurrencyRate_);
            };
            AbaPayLockRateInfo() = default ;
            AbaPayLockRateInfo(const AbaPayLockRateInfo &) = default ;
            AbaPayLockRateInfo(AbaPayLockRateInfo &&) = default ;
            AbaPayLockRateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AbaPayLockRateInfo() = default ;
            AbaPayLockRateInfo& operator=(const AbaPayLockRateInfo &) = default ;
            AbaPayLockRateInfo& operator=(AbaPayLockRateInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->payIntendedAmount_ == nullptr
        && this->payIntendedCurrencyCode_ == nullptr && this->quotationCurrencyCode_ == nullptr && this->toPayCurrencyRate_ == nullptr; };
            // payIntendedAmount Field Functions 
            bool hasPayIntendedAmount() const { return this->payIntendedAmount_ != nullptr;};
            void deletePayIntendedAmount() { this->payIntendedAmount_ = nullptr;};
            inline string getPayIntendedAmount() const { DARABONBA_PTR_GET_DEFAULT(payIntendedAmount_, "") };
            inline AbaPayLockRateInfo& setPayIntendedAmount(string payIntendedAmount) { DARABONBA_PTR_SET_VALUE(payIntendedAmount_, payIntendedAmount) };


            // payIntendedCurrencyCode Field Functions 
            bool hasPayIntendedCurrencyCode() const { return this->payIntendedCurrencyCode_ != nullptr;};
            void deletePayIntendedCurrencyCode() { this->payIntendedCurrencyCode_ = nullptr;};
            inline string getPayIntendedCurrencyCode() const { DARABONBA_PTR_GET_DEFAULT(payIntendedCurrencyCode_, "") };
            inline AbaPayLockRateInfo& setPayIntendedCurrencyCode(string payIntendedCurrencyCode) { DARABONBA_PTR_SET_VALUE(payIntendedCurrencyCode_, payIntendedCurrencyCode) };


            // quotationCurrencyCode Field Functions 
            bool hasQuotationCurrencyCode() const { return this->quotationCurrencyCode_ != nullptr;};
            void deleteQuotationCurrencyCode() { this->quotationCurrencyCode_ = nullptr;};
            inline string getQuotationCurrencyCode() const { DARABONBA_PTR_GET_DEFAULT(quotationCurrencyCode_, "") };
            inline AbaPayLockRateInfo& setQuotationCurrencyCode(string quotationCurrencyCode) { DARABONBA_PTR_SET_VALUE(quotationCurrencyCode_, quotationCurrencyCode) };


            // toPayCurrencyRate Field Functions 
            bool hasToPayCurrencyRate() const { return this->toPayCurrencyRate_ != nullptr;};
            void deleteToPayCurrencyRate() { this->toPayCurrencyRate_ = nullptr;};
            inline string getToPayCurrencyRate() const { DARABONBA_PTR_GET_DEFAULT(toPayCurrencyRate_, "") };
            inline AbaPayLockRateInfo& setToPayCurrencyRate(string toPayCurrencyRate) { DARABONBA_PTR_SET_VALUE(toPayCurrencyRate_, toPayCurrencyRate) };


          protected:
            shared_ptr<string> payIntendedAmount_ {};
            shared_ptr<string> payIntendedCurrencyCode_ {};
            shared_ptr<string> quotationCurrencyCode_ {};
            shared_ptr<string> toPayCurrencyRate_ {};
          };

          virtual bool empty() const override { return this->abaPayLockRateInfo_ == nullptr; };
          // abaPayLockRateInfo Field Functions 
          bool hasAbaPayLockRateInfo() const { return this->abaPayLockRateInfo_ != nullptr;};
          void deleteAbaPayLockRateInfo() { this->abaPayLockRateInfo_ = nullptr;};
          inline const OrderAttribute::AbaPayLockRateInfo & getAbaPayLockRateInfo() const { DARABONBA_PTR_GET_CONST(abaPayLockRateInfo_, OrderAttribute::AbaPayLockRateInfo) };
          inline OrderAttribute::AbaPayLockRateInfo getAbaPayLockRateInfo() { DARABONBA_PTR_GET(abaPayLockRateInfo_, OrderAttribute::AbaPayLockRateInfo) };
          inline OrderAttribute& setAbaPayLockRateInfo(const OrderAttribute::AbaPayLockRateInfo & abaPayLockRateInfo) { DARABONBA_PTR_SET_VALUE(abaPayLockRateInfo_, abaPayLockRateInfo) };
          inline OrderAttribute& setAbaPayLockRateInfo(OrderAttribute::AbaPayLockRateInfo && abaPayLockRateInfo) { DARABONBA_PTR_SET_RVALUE(abaPayLockRateInfo_, abaPayLockRateInfo) };


        protected:
          shared_ptr<OrderAttribute::AbaPayLockRateInfo> abaPayLockRateInfo_ {};
        };

        virtual bool empty() const override { return this->orderAttribute_ == nullptr
        && this->orderNum_ == nullptr; };
        // orderAttribute Field Functions 
        bool hasOrderAttribute() const { return this->orderAttribute_ != nullptr;};
        void deleteOrderAttribute() { this->orderAttribute_ = nullptr;};
        inline const OrderList::OrderAttribute & getOrderAttribute() const { DARABONBA_PTR_GET_CONST(orderAttribute_, OrderList::OrderAttribute) };
        inline OrderList::OrderAttribute getOrderAttribute() { DARABONBA_PTR_GET(orderAttribute_, OrderList::OrderAttribute) };
        inline OrderList& setOrderAttribute(const OrderList::OrderAttribute & orderAttribute) { DARABONBA_PTR_SET_VALUE(orderAttribute_, orderAttribute) };
        inline OrderList& setOrderAttribute(OrderList::OrderAttribute && orderAttribute) { DARABONBA_PTR_SET_RVALUE(orderAttribute_, orderAttribute) };


        // orderNum Field Functions 
        bool hasOrderNum() const { return this->orderNum_ != nullptr;};
        void deleteOrderNum() { this->orderNum_ = nullptr;};
        inline int64_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
        inline OrderList& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


      protected:
        shared_ptr<OrderList::OrderAttribute> orderAttribute_ {};
        // The order number.
        shared_ptr<int64_t> orderNum_ {};
      };

      virtual bool empty() const override { return this->orderList_ == nullptr; };
      // orderList Field Functions 
      bool hasOrderList() const { return this->orderList_ != nullptr;};
      void deleteOrderList() { this->orderList_ = nullptr;};
      inline const vector<Data::OrderList> & getOrderList() const { DARABONBA_PTR_GET_CONST(orderList_, vector<Data::OrderList>) };
      inline vector<Data::OrderList> getOrderList() { DARABONBA_PTR_GET(orderList_, vector<Data::OrderList>) };
      inline Data& setOrderList(const vector<Data::OrderList> & orderList) { DARABONBA_PTR_SET_VALUE(orderList_, orderList) };
      inline Data& setOrderList(vector<Data::OrderList> && orderList) { DARABONBA_PTR_SET_RVALUE(orderList_, orderList) };


    protected:
      // The list of order information.
      shared_ptr<vector<Data::OrderList>> orderList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->errorData_ == nullptr && this->errorMsg_ == nullptr && this->status_ == nullptr
        && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BookResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, BookResponseBody::Data) };
    inline BookResponseBody::Data getData() { DARABONBA_PTR_GET(data_, BookResponseBody::Data) };
    inline BookResponseBody& setData(const BookResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BookResponseBody& setData(BookResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline BookResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorData Field Functions 
    bool hasErrorData() const { return this->errorData_ != nullptr;};
    void deleteErrorData() { this->errorData_ = nullptr;};
    inline const BookResponseBody::ErrorData & getErrorData() const { DARABONBA_PTR_GET_CONST(errorData_, BookResponseBody::ErrorData) };
    inline BookResponseBody::ErrorData getErrorData() { DARABONBA_PTR_GET(errorData_, BookResponseBody::ErrorData) };
    inline BookResponseBody& setErrorData(const BookResponseBody::ErrorData & errorData) { DARABONBA_PTR_SET_VALUE(errorData_, errorData) };
    inline BookResponseBody& setErrorData(BookResponseBody::ErrorData && errorData) { DARABONBA_PTR_SET_RVALUE(errorData_, errorData) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline BookResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline BookResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BookResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The data returned for a successful request.
    shared_ptr<BookResponseBody::Data> data_ {};
    // The business error code.
    shared_ptr<string> errorCode_ {};
    // The data returned with the error.
    shared_ptr<BookResponseBody::ErrorData> errorData_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code. The value is always 200 for successful HTTP requests.
    shared_ptr<int32_t> status_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
