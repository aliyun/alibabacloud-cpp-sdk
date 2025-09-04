// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class UpdateInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_ANY_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_ANY_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateInstanceResponseBody() = default ;
    UpdateInstanceResponseBody(const UpdateInstanceResponseBody &) = default ;
    UpdateInstanceResponseBody(UpdateInstanceResponseBody &&) = default ;
    UpdateInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceResponseBody() = default ;
    UpdateInstanceResponseBody& operator=(const UpdateInstanceResponseBody &) = default ;
    UpdateInstanceResponseBody& operator=(UpdateInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->statusCode_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpdateInstanceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & data() const { DARABONBA_GET(data_) };
    Darabonba::Json & data() { DARABONBA_GET(data_) };
    inline UpdateInstanceResponseBody& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline UpdateInstanceResponseBody& setData(Darabonba::Json & data) { DARABONBA_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline string statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
    inline UpdateInstanceResponseBody& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline UpdateInstanceResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The status code 200 indicates that the request was successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The returned data, which includes orderId and instanceId. Sample returned data:
    // 
    // ```json
    // "Data": {
    //     "instanceId": "amqp-cn-xxxxx",
    //     "orderId": 22222
    //   }
    // ```
    Darabonba::Json data_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The response code.
    std::shared_ptr<string> statusCode_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
