// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECONFIRMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANGECONFIRMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeConfirmResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeConfirmResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(error_code, errorCode_);
      DARABONBA_ANY_TO_JSON(error_data, errorData_);
      DARABONBA_PTR_TO_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeConfirmResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(error_code, errorCode_);
      DARABONBA_ANY_FROM_JSON(error_data, errorData_);
      DARABONBA_PTR_FROM_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ChangeConfirmResponseBody() = default ;
    ChangeConfirmResponseBody(const ChangeConfirmResponseBody &) = default ;
    ChangeConfirmResponseBody(ChangeConfirmResponseBody &&) = default ;
    ChangeConfirmResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeConfirmResponseBody() = default ;
    ChangeConfirmResponseBody& operator=(const ChangeConfirmResponseBody &) = default ;
    ChangeConfirmResponseBody& operator=(ChangeConfirmResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(pay_amount, payAmount_);
        DARABONBA_PTR_TO_JSON(pay_time, payTime_);
        DARABONBA_PTR_TO_JSON(transaction_no, transactionNo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(pay_amount, payAmount_);
        DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
        DARABONBA_PTR_FROM_JSON(transaction_no, transactionNo_);
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
      virtual bool empty() const override { return this->payAmount_ == nullptr
        && this->payTime_ == nullptr && this->transactionNo_ == nullptr; };
      // payAmount Field Functions 
      bool hasPayAmount() const { return this->payAmount_ != nullptr;};
      void deletePayAmount() { this->payAmount_ = nullptr;};
      inline double getPayAmount() const { DARABONBA_PTR_GET_DEFAULT(payAmount_, 0.0) };
      inline Data& setPayAmount(double payAmount) { DARABONBA_PTR_SET_VALUE(payAmount_, payAmount) };


      // payTime Field Functions 
      bool hasPayTime() const { return this->payTime_ != nullptr;};
      void deletePayTime() { this->payTime_ = nullptr;};
      inline int64_t getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, 0L) };
      inline Data& setPayTime(int64_t payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


      // transactionNo Field Functions 
      bool hasTransactionNo() const { return this->transactionNo_ != nullptr;};
      void deleteTransactionNo() { this->transactionNo_ = nullptr;};
      inline string getTransactionNo() const { DARABONBA_PTR_GET_DEFAULT(transactionNo_, "") };
      inline Data& setTransactionNo(string transactionNo) { DARABONBA_PTR_SET_VALUE(transactionNo_, transactionNo) };


    protected:
      // The payment amount for the flight change.
      shared_ptr<double> payAmount_ {};
      shared_ptr<int64_t> payTime_ {};
      // The payment transaction number for the flight change.
      shared_ptr<string> transactionNo_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->errorData_ == nullptr && this->errorMsg_ == nullptr && this->status_ == nullptr
        && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeConfirmResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ChangeConfirmResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ChangeConfirmResponseBody::Data) };
    inline ChangeConfirmResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ChangeConfirmResponseBody::Data) };
    inline ChangeConfirmResponseBody& setData(const ChangeConfirmResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ChangeConfirmResponseBody& setData(ChangeConfirmResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ChangeConfirmResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorData Field Functions 
    bool hasErrorData() const { return this->errorData_ != nullptr;};
    void deleteErrorData() { this->errorData_ = nullptr;};
    inline     const Darabonba::Json & getErrorData() const { DARABONBA_GET(errorData_) };
    Darabonba::Json & getErrorData() { DARABONBA_GET(errorData_) };
    inline ChangeConfirmResponseBody& setErrorData(const Darabonba::Json & errorData) { DARABONBA_SET_VALUE(errorData_, errorData) };
    inline ChangeConfirmResponseBody& setErrorData(Darabonba::Json && errorData) { DARABONBA_SET_RVALUE(errorData_, errorData) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ChangeConfirmResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ChangeConfirmResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ChangeConfirmResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> requestId_ {};
    // The data returned for a successful request.
    shared_ptr<ChangeConfirmResponseBody::Data> data_ {};
    // The business error code.
    shared_ptr<string> errorCode_ {};
    // The data returned for a failed request.
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
