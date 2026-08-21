// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETQUERYREFUNDORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TICKETQUERYREFUNDORDERRESPONSEBODY_HPP_
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
  class TicketQueryRefundOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketQueryRefundOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, TicketQueryRefundOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    TicketQueryRefundOrderResponseBody() = default ;
    TicketQueryRefundOrderResponseBody(const TicketQueryRefundOrderResponseBody &) = default ;
    TicketQueryRefundOrderResponseBody(TicketQueryRefundOrderResponseBody &&) = default ;
    TicketQueryRefundOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketQueryRefundOrderResponseBody() = default ;
    TicketQueryRefundOrderResponseBody& operator=(const TicketQueryRefundOrderResponseBody &) = default ;
    TicketQueryRefundOrderResponseBody& operator=(TicketQueryRefundOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RefundOrders, refundOrders_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RefundOrders, refundOrders_);
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
      class RefundOrders : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RefundOrders& obj) { 
          DARABONBA_PTR_TO_JSON(FundStatus, fundStatus_);
          DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
        };
        friend void from_json(const Darabonba::Json& j, RefundOrders& obj) { 
          DARABONBA_PTR_FROM_JSON(FundStatus, fundStatus_);
          DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
        };
        RefundOrders() = default ;
        RefundOrders(const RefundOrders &) = default ;
        RefundOrders(RefundOrders &&) = default ;
        RefundOrders(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RefundOrders() = default ;
        RefundOrders& operator=(const RefundOrders &) = default ;
        RefundOrders& operator=(RefundOrders &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fundStatus_ == nullptr
        && this->orderStatus_ == nullptr; };
        // fundStatus Field Functions 
        bool hasFundStatus() const { return this->fundStatus_ != nullptr;};
        void deleteFundStatus() { this->fundStatus_ = nullptr;};
        inline int32_t getFundStatus() const { DARABONBA_PTR_GET_DEFAULT(fundStatus_, 0) };
        inline RefundOrders& setFundStatus(int32_t fundStatus) { DARABONBA_PTR_SET_VALUE(fundStatus_, fundStatus) };


        // orderStatus Field Functions 
        bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
        void deleteOrderStatus() { this->orderStatus_ = nullptr;};
        inline int32_t getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
        inline RefundOrders& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


      protected:
        shared_ptr<int32_t> fundStatus_ {};
        shared_ptr<int32_t> orderStatus_ {};
      };

      virtual bool empty() const override { return this->refundOrders_ == nullptr; };
      // refundOrders Field Functions 
      bool hasRefundOrders() const { return this->refundOrders_ != nullptr;};
      void deleteRefundOrders() { this->refundOrders_ = nullptr;};
      inline const vector<Data::RefundOrders> & getRefundOrders() const { DARABONBA_PTR_GET_CONST(refundOrders_, vector<Data::RefundOrders>) };
      inline vector<Data::RefundOrders> getRefundOrders() { DARABONBA_PTR_GET(refundOrders_, vector<Data::RefundOrders>) };
      inline Data& setRefundOrders(const vector<Data::RefundOrders> & refundOrders) { DARABONBA_PTR_SET_VALUE(refundOrders_, refundOrders) };
      inline Data& setRefundOrders(vector<Data::RefundOrders> && refundOrders) { DARABONBA_PTR_SET_RVALUE(refundOrders_, refundOrders) };


    protected:
      shared_ptr<vector<Data::RefundOrders>> refundOrders_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TicketQueryRefundOrderResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TicketQueryRefundOrderResponseBody::Data) };
    inline TicketQueryRefundOrderResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TicketQueryRefundOrderResponseBody::Data) };
    inline TicketQueryRefundOrderResponseBody& setData(const TicketQueryRefundOrderResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TicketQueryRefundOrderResponseBody& setData(TicketQueryRefundOrderResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline TicketQueryRefundOrderResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline TicketQueryRefundOrderResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TicketQueryRefundOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TicketQueryRefundOrderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<TicketQueryRefundOrderResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
