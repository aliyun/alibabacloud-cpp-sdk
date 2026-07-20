// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMERNOTEEDITRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMERNOTEEDITRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CustomerNoteEditResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20250227
{
namespace Models
{
  class CustomerNoteEditResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomerNoteEditResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CustomerNoteEditResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CustomerNoteEditResponse() = default ;
    CustomerNoteEditResponse(const CustomerNoteEditResponse &) = default ;
    CustomerNoteEditResponse(CustomerNoteEditResponse &&) = default ;
    CustomerNoteEditResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomerNoteEditResponse() = default ;
    CustomerNoteEditResponse& operator=(const CustomerNoteEditResponse &) = default ;
    CustomerNoteEditResponse& operator=(CustomerNoteEditResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline CustomerNoteEditResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CustomerNoteEditResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CustomerNoteEditResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CustomerNoteEditResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, CustomerNoteEditResponseBody) };
    inline CustomerNoteEditResponseBody getBody() { DARABONBA_PTR_GET(body_, CustomerNoteEditResponseBody) };
    inline CustomerNoteEditResponse& setBody(const CustomerNoteEditResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CustomerNoteEditResponse& setBody(CustomerNoteEditResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<CustomerNoteEditResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif
