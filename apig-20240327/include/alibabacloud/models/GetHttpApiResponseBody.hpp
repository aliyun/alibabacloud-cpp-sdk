// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHTTPAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHTTPAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpApiApiInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetHttpApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHttpApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHttpApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetHttpApiResponseBody() = default ;
    GetHttpApiResponseBody(const GetHttpApiResponseBody &) = default ;
    GetHttpApiResponseBody(GetHttpApiResponseBody &&) = default ;
    GetHttpApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHttpApiResponseBody() = default ;
    GetHttpApiResponseBody& operator=(const GetHttpApiResponseBody &) = default ;
    GetHttpApiResponseBody& operator=(GetHttpApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHttpApiResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const HttpApiApiInfo & getData() const { DARABONBA_PTR_GET_CONST(data_, HttpApiApiInfo) };
    inline HttpApiApiInfo getData() { DARABONBA_PTR_GET(data_, HttpApiApiInfo) };
    inline GetHttpApiResponseBody& setData(const HttpApiApiInfo & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHttpApiResponseBody& setData(HttpApiApiInfo && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHttpApiResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHttpApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Response status code.
    shared_ptr<string> code_ {};
    // The API information.
    shared_ptr<HttpApiApiInfo> data_ {};
    // Response message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
