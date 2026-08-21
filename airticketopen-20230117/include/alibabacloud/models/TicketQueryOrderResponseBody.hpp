// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETQUERYORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TICKETQUERYORDERRESPONSEBODY_HPP_
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
  class TicketQueryOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketQueryOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, TicketQueryOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    TicketQueryOrderResponseBody() = default ;
    TicketQueryOrderResponseBody(const TicketQueryOrderResponseBody &) = default ;
    TicketQueryOrderResponseBody(TicketQueryOrderResponseBody &&) = default ;
    TicketQueryOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketQueryOrderResponseBody() = default ;
    TicketQueryOrderResponseBody& operator=(const TicketQueryOrderResponseBody &) = default ;
    TicketQueryOrderResponseBody& operator=(TicketQueryOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Order, order_);
        DARABONBA_PTR_TO_JSON(Vouchers, vouchers_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Order, order_);
        DARABONBA_PTR_FROM_JSON(Vouchers, vouchers_);
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
      class Vouchers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Vouchers& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(TotalTimes, totalTimes_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Vouchers& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(TotalTimes, totalTimes_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        Vouchers() = default ;
        Vouchers(const Vouchers &) = default ;
        Vouchers(Vouchers &&) = default ;
        Vouchers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Vouchers() = default ;
        Vouchers& operator=(const Vouchers &) = default ;
        Vouchers& operator=(Vouchers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->totalTimes_ == nullptr && this->type_ == nullptr && this->url_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Vouchers& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // totalTimes Field Functions 
        bool hasTotalTimes() const { return this->totalTimes_ != nullptr;};
        void deleteTotalTimes() { this->totalTimes_ = nullptr;};
        inline int32_t getTotalTimes() const { DARABONBA_PTR_GET_DEFAULT(totalTimes_, 0) };
        inline Vouchers& setTotalTimes(int32_t totalTimes) { DARABONBA_PTR_SET_VALUE(totalTimes_, totalTimes) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline Vouchers& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Vouchers& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<int32_t> totalTimes_ {};
        shared_ptr<int32_t> type_ {};
        shared_ptr<string> url_ {};
      };

      class Order : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Order& obj) { 
          DARABONBA_PTR_TO_JSON(FundStatus, fundStatus_);
          DARABONBA_PTR_TO_JSON(OrderId, orderId_);
          DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Order& obj) { 
          DARABONBA_PTR_FROM_JSON(FundStatus, fundStatus_);
          DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
          DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
        };
        Order() = default ;
        Order(const Order &) = default ;
        Order(Order &&) = default ;
        Order(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Order() = default ;
        Order& operator=(const Order &) = default ;
        Order& operator=(Order &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fundStatus_ == nullptr
        && this->orderId_ == nullptr && this->orderStatus_ == nullptr; };
        // fundStatus Field Functions 
        bool hasFundStatus() const { return this->fundStatus_ != nullptr;};
        void deleteFundStatus() { this->fundStatus_ = nullptr;};
        inline int32_t getFundStatus() const { DARABONBA_PTR_GET_DEFAULT(fundStatus_, 0) };
        inline Order& setFundStatus(int32_t fundStatus) { DARABONBA_PTR_SET_VALUE(fundStatus_, fundStatus) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
        inline Order& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // orderStatus Field Functions 
        bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
        void deleteOrderStatus() { this->orderStatus_ = nullptr;};
        inline int32_t getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
        inline Order& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


      protected:
        shared_ptr<int32_t> fundStatus_ {};
        shared_ptr<string> orderId_ {};
        shared_ptr<int32_t> orderStatus_ {};
      };

      virtual bool empty() const override { return this->order_ == nullptr
        && this->vouchers_ == nullptr; };
      // order Field Functions 
      bool hasOrder() const { return this->order_ != nullptr;};
      void deleteOrder() { this->order_ = nullptr;};
      inline const Data::Order & getOrder() const { DARABONBA_PTR_GET_CONST(order_, Data::Order) };
      inline Data::Order getOrder() { DARABONBA_PTR_GET(order_, Data::Order) };
      inline Data& setOrder(const Data::Order & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
      inline Data& setOrder(Data::Order && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


      // vouchers Field Functions 
      bool hasVouchers() const { return this->vouchers_ != nullptr;};
      void deleteVouchers() { this->vouchers_ = nullptr;};
      inline const vector<Data::Vouchers> & getVouchers() const { DARABONBA_PTR_GET_CONST(vouchers_, vector<Data::Vouchers>) };
      inline vector<Data::Vouchers> getVouchers() { DARABONBA_PTR_GET(vouchers_, vector<Data::Vouchers>) };
      inline Data& setVouchers(const vector<Data::Vouchers> & vouchers) { DARABONBA_PTR_SET_VALUE(vouchers_, vouchers) };
      inline Data& setVouchers(vector<Data::Vouchers> && vouchers) { DARABONBA_PTR_SET_RVALUE(vouchers_, vouchers) };


    protected:
      shared_ptr<Data::Order> order_ {};
      shared_ptr<vector<Data::Vouchers>> vouchers_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TicketQueryOrderResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TicketQueryOrderResponseBody::Data) };
    inline TicketQueryOrderResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TicketQueryOrderResponseBody::Data) };
    inline TicketQueryOrderResponseBody& setData(const TicketQueryOrderResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TicketQueryOrderResponseBody& setData(TicketQueryOrderResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline TicketQueryOrderResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline TicketQueryOrderResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TicketQueryOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TicketQueryOrderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<TicketQueryOrderResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
