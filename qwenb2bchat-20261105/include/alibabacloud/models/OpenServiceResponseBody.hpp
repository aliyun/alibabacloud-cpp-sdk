// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OPENSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenB2BChat20261105
{
namespace Models
{
  class OpenServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(error, error_);
      DARABONBA_PTR_TO_JSON(orderId, orderId_);
      DARABONBA_PTR_TO_JSON(spInstanceId, spInstanceId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, OpenServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(error, error_);
      DARABONBA_PTR_FROM_JSON(orderId, orderId_);
      DARABONBA_PTR_FROM_JSON(spInstanceId, spInstanceId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    OpenServiceResponseBody() = default ;
    OpenServiceResponseBody(const OpenServiceResponseBody &) = default ;
    OpenServiceResponseBody(OpenServiceResponseBody &&) = default ;
    OpenServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenServiceResponseBody() = default ;
    OpenServiceResponseBody& operator=(const OpenServiceResponseBody &) = default ;
    OpenServiceResponseBody& operator=(OpenServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Error : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Error& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(request_id, requestId_);
      };
      friend void from_json(const Darabonba::Json& j, Error& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(request_id, requestId_);
      };
      Error() = default ;
      Error(const Error &) = default ;
      Error(Error &&) = default ;
      Error(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Error() = default ;
      Error& operator=(const Error &) = default ;
      Error& operator=(Error &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Error& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Error& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Error& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    protected:
      // The error code recognizable by programs.
      // 
      // This parameter is required.
      shared_ptr<string> code_ {};
      // The error description.
      // 
      // This parameter is required.
      shared_ptr<string> message_ {};
      // The correlation ID of the current call.
      // 
      // This parameter is required.
      shared_ptr<string> requestId_ {};
    };

    virtual bool empty() const override { return this->error_ == nullptr
        && this->orderId_ == nullptr && this->spInstanceId_ == nullptr && this->status_ == nullptr; };
    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const OpenServiceResponseBody::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, OpenServiceResponseBody::Error) };
    inline OpenServiceResponseBody::Error getError() { DARABONBA_PTR_GET(error_, OpenServiceResponseBody::Error) };
    inline OpenServiceResponseBody& setError(const OpenServiceResponseBody::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline OpenServiceResponseBody& setError(OpenServiceResponseBody::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline OpenServiceResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // spInstanceId Field Functions 
    bool hasSpInstanceId() const { return this->spInstanceId_ != nullptr;};
    void deleteSpInstanceId() { this->spInstanceId_ = nullptr;};
    inline string getSpInstanceId() const { DARABONBA_PTR_GET_DEFAULT(spInstanceId_, "") };
    inline OpenServiceResponseBody& setSpInstanceId(string spInstanceId) { DARABONBA_PTR_SET_VALUE(spInstanceId_, spInstanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline OpenServiceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The details of a non-2xx error response, which are mutually exclusive with the status, orderId, and spInstanceId of a normal response.
    shared_ptr<OpenServiceResponseBody::Error> error_ {};
    // The order ID associated with the service activation process. Returned when an order exists.
    shared_ptr<string> orderId_ {};
    // The service instance ID returned after successful activation and settlement.
    shared_ptr<string> spInstanceId_ {};
    // The test or activation result. TEST_OK indicates that the call validation succeeded.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenB2BChat20261105
#endif
