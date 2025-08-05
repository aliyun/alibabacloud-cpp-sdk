// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetConnectionResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetConnectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetConnectionResponseBody() = default ;
    GetConnectionResponseBody(const GetConnectionResponseBody &) = default ;
    GetConnectionResponseBody(GetConnectionResponseBody &&) = default ;
    GetConnectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectionResponseBody() = default ;
    GetConnectionResponseBody& operator=(const GetConnectionResponseBody &) = default ;
    GetConnectionResponseBody& operator=(GetConnectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->httpCode_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetConnectionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetConnectionResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetConnectionResponseBodyData) };
    inline GetConnectionResponseBodyData data() { DARABONBA_PTR_GET(data_, GetConnectionResponseBodyData) };
    inline GetConnectionResponseBody& setData(const GetConnectionResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetConnectionResponseBody& setData(GetConnectionResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t httpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetConnectionResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetConnectionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConnectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned response code. The value Success indicates that the request is successful.
    std::shared_ptr<string> code_ = nullptr;
    // The returned data.
    std::shared_ptr<GetConnectionResponseBodyData> data_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpCode_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The returned request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
