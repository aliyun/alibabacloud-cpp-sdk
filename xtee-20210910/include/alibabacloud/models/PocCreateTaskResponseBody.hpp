// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POCCREATETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_POCCREATETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class PocCreateTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PocCreateTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PocCreateTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PocCreateTaskResponseBody() = default ;
    PocCreateTaskResponseBody(const PocCreateTaskResponseBody &) = default ;
    PocCreateTaskResponseBody(PocCreateTaskResponseBody &&) = default ;
    PocCreateTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PocCreateTaskResponseBody() = default ;
    PocCreateTaskResponseBody& operator=(const PocCreateTaskResponseBody &) = default ;
    PocCreateTaskResponseBody& operator=(PocCreateTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->httpStatusCode_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PocCreateTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline PocCreateTaskResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline PocCreateTaskResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PocCreateTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PocCreateTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline PocCreateTaskResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Status code.
    std::shared_ptr<string> code_ = nullptr;
    // Task creation result
    std::shared_ptr<string> data_ = nullptr;
    // HTTP status code
    std::shared_ptr<string> httpStatusCode_ = nullptr;
    // Response message.
    std::shared_ptr<string> message_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Whether the task was successful. **true** indicates success, **false** indicates failure.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
