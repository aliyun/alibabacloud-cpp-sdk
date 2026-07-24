// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDAPPLYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REFUNDAPPLYRESPONSEBODY_HPP_
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
  class RefundApplyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundApplyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(error_code, errorCode_);
      DARABONBA_ANY_TO_JSON(error_data, errorData_);
      DARABONBA_PTR_TO_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RefundApplyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(error_code, errorCode_);
      DARABONBA_ANY_FROM_JSON(error_data, errorData_);
      DARABONBA_PTR_FROM_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    RefundApplyResponseBody() = default ;
    RefundApplyResponseBody(const RefundApplyResponseBody &) = default ;
    RefundApplyResponseBody(RefundApplyResponseBody &&) = default ;
    RefundApplyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundApplyResponseBody() = default ;
    RefundApplyResponseBody& operator=(const RefundApplyResponseBody &) = default ;
    RefundApplyResponseBody& operator=(RefundApplyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(order_num, orderNum_);
        DARABONBA_PTR_TO_JSON(refund_results, refundResults_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
        DARABONBA_PTR_FROM_JSON(refund_results, refundResults_);
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
      class RefundResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RefundResults& obj) { 
          DARABONBA_PTR_TO_JSON(fail_reason, failReason_);
          DARABONBA_PTR_TO_JSON(refund_order_num, refundOrderNum_);
          DARABONBA_PTR_TO_JSON(refund_passengers, refundPassengers_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, RefundResults& obj) { 
          DARABONBA_PTR_FROM_JSON(fail_reason, failReason_);
          DARABONBA_PTR_FROM_JSON(refund_order_num, refundOrderNum_);
          DARABONBA_PTR_FROM_JSON(refund_passengers, refundPassengers_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        RefundResults() = default ;
        RefundResults(const RefundResults &) = default ;
        RefundResults(RefundResults &&) = default ;
        RefundResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RefundResults() = default ;
        RefundResults& operator=(const RefundResults &) = default ;
        RefundResults& operator=(RefundResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RefundPassengers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RefundPassengers& obj) { 
            DARABONBA_PTR_TO_JSON(document, document_);
            DARABONBA_PTR_TO_JSON(first_name, firstName_);
            DARABONBA_PTR_TO_JSON(last_name, lastName_);
          };
          friend void from_json(const Darabonba::Json& j, RefundPassengers& obj) { 
            DARABONBA_PTR_FROM_JSON(document, document_);
            DARABONBA_PTR_FROM_JSON(first_name, firstName_);
            DARABONBA_PTR_FROM_JSON(last_name, lastName_);
          };
          RefundPassengers() = default ;
          RefundPassengers(const RefundPassengers &) = default ;
          RefundPassengers(RefundPassengers &&) = default ;
          RefundPassengers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RefundPassengers() = default ;
          RefundPassengers& operator=(const RefundPassengers &) = default ;
          RefundPassengers& operator=(RefundPassengers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->document_ == nullptr
        && this->firstName_ == nullptr && this->lastName_ == nullptr; };
          // document Field Functions 
          bool hasDocument() const { return this->document_ != nullptr;};
          void deleteDocument() { this->document_ = nullptr;};
          inline string getDocument() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
          inline RefundPassengers& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


          // firstName Field Functions 
          bool hasFirstName() const { return this->firstName_ != nullptr;};
          void deleteFirstName() { this->firstName_ = nullptr;};
          inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
          inline RefundPassengers& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


          // lastName Field Functions 
          bool hasLastName() const { return this->lastName_ != nullptr;};
          void deleteLastName() { this->lastName_ = nullptr;};
          inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
          inline RefundPassengers& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


        protected:
          // The document number of the passenger.
          shared_ptr<string> document_ {};
          // The first name of the passenger.
          shared_ptr<string> firstName_ {};
          // The last name of the passenger.
          shared_ptr<string> lastName_ {};
        };

        virtual bool empty() const override { return this->failReason_ == nullptr
        && this->refundOrderNum_ == nullptr && this->refundPassengers_ == nullptr && this->status_ == nullptr; };
        // failReason Field Functions 
        bool hasFailReason() const { return this->failReason_ != nullptr;};
        void deleteFailReason() { this->failReason_ = nullptr;};
        inline string getFailReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
        inline RefundResults& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


        // refundOrderNum Field Functions 
        bool hasRefundOrderNum() const { return this->refundOrderNum_ != nullptr;};
        void deleteRefundOrderNum() { this->refundOrderNum_ = nullptr;};
        inline int64_t getRefundOrderNum() const { DARABONBA_PTR_GET_DEFAULT(refundOrderNum_, 0L) };
        inline RefundResults& setRefundOrderNum(int64_t refundOrderNum) { DARABONBA_PTR_SET_VALUE(refundOrderNum_, refundOrderNum) };


        // refundPassengers Field Functions 
        bool hasRefundPassengers() const { return this->refundPassengers_ != nullptr;};
        void deleteRefundPassengers() { this->refundPassengers_ = nullptr;};
        inline const vector<RefundResults::RefundPassengers> & getRefundPassengers() const { DARABONBA_PTR_GET_CONST(refundPassengers_, vector<RefundResults::RefundPassengers>) };
        inline vector<RefundResults::RefundPassengers> getRefundPassengers() { DARABONBA_PTR_GET(refundPassengers_, vector<RefundResults::RefundPassengers>) };
        inline RefundResults& setRefundPassengers(const vector<RefundResults::RefundPassengers> & refundPassengers) { DARABONBA_PTR_SET_VALUE(refundPassengers_, refundPassengers) };
        inline RefundResults& setRefundPassengers(vector<RefundResults::RefundPassengers> && refundPassengers) { DARABONBA_PTR_SET_RVALUE(refundPassengers_, refundPassengers) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline RefundResults& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The reason for the refund application failure.
        shared_ptr<string> failReason_ {};
        // The refund order number.
        shared_ptr<int64_t> refundOrderNum_ {};
        // The list of passengers included in the refund order.
        shared_ptr<vector<RefundResults::RefundPassengers>> refundPassengers_ {};
        // The refund order status. Valid values:
        // - 0: The refund order is created.
        // - 1: The refund order failed to be created.
        shared_ptr<int32_t> status_ {};
      };

      virtual bool empty() const override { return this->orderNum_ == nullptr
        && this->refundResults_ == nullptr; };
      // orderNum Field Functions 
      bool hasOrderNum() const { return this->orderNum_ != nullptr;};
      void deleteOrderNum() { this->orderNum_ = nullptr;};
      inline int64_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
      inline Data& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


      // refundResults Field Functions 
      bool hasRefundResults() const { return this->refundResults_ != nullptr;};
      void deleteRefundResults() { this->refundResults_ = nullptr;};
      inline const vector<Data::RefundResults> & getRefundResults() const { DARABONBA_PTR_GET_CONST(refundResults_, vector<Data::RefundResults>) };
      inline vector<Data::RefundResults> getRefundResults() { DARABONBA_PTR_GET(refundResults_, vector<Data::RefundResults>) };
      inline Data& setRefundResults(const vector<Data::RefundResults> & refundResults) { DARABONBA_PTR_SET_VALUE(refundResults_, refundResults) };
      inline Data& setRefundResults(vector<Data::RefundResults> && refundResults) { DARABONBA_PTR_SET_RVALUE(refundResults_, refundResults) };


    protected:
      // The order number.
      shared_ptr<int64_t> orderNum_ {};
      // The list of refund application results.
      shared_ptr<vector<Data::RefundResults>> refundResults_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->errorData_ == nullptr && this->errorMsg_ == nullptr && this->status_ == nullptr
        && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RefundApplyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RefundApplyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RefundApplyResponseBody::Data) };
    inline RefundApplyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RefundApplyResponseBody::Data) };
    inline RefundApplyResponseBody& setData(const RefundApplyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RefundApplyResponseBody& setData(RefundApplyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline RefundApplyResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorData Field Functions 
    bool hasErrorData() const { return this->errorData_ != nullptr;};
    void deleteErrorData() { this->errorData_ = nullptr;};
    inline     const Darabonba::Json & getErrorData() const { DARABONBA_GET(errorData_) };
    Darabonba::Json & getErrorData() { DARABONBA_GET(errorData_) };
    inline RefundApplyResponseBody& setErrorData(const Darabonba::Json & errorData) { DARABONBA_SET_VALUE(errorData_, errorData) };
    inline RefundApplyResponseBody& setErrorData(Darabonba::Json && errorData) { DARABONBA_SET_RVALUE(errorData_, errorData) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline RefundApplyResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline RefundApplyResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RefundApplyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The data returned for a successful request.
    shared_ptr<RefundApplyResponseBody::Data> data_ {};
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
