// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEOPENSOURCEACCOUNTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETEOPENSOURCEACCOUNTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeleteOpenSourceAccountResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class DeleteOpenSourceAccountResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOpenSourceAccountResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOpenSourceAccountResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteOpenSourceAccountResponse() = default ;
    DeleteOpenSourceAccountResponse(const DeleteOpenSourceAccountResponse &) = default ;
    DeleteOpenSourceAccountResponse(DeleteOpenSourceAccountResponse &&) = default ;
    DeleteOpenSourceAccountResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOpenSourceAccountResponse() = default ;
    DeleteOpenSourceAccountResponse& operator=(const DeleteOpenSourceAccountResponse &) = default ;
    DeleteOpenSourceAccountResponse& operator=(DeleteOpenSourceAccountResponse &&) = default ;
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
    inline DeleteOpenSourceAccountResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteOpenSourceAccountResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteOpenSourceAccountResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteOpenSourceAccountResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DeleteOpenSourceAccountResponseBody) };
    inline DeleteOpenSourceAccountResponseBody getBody() { DARABONBA_PTR_GET(body_, DeleteOpenSourceAccountResponseBody) };
    inline DeleteOpenSourceAccountResponse& setBody(const DeleteOpenSourceAccountResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteOpenSourceAccountResponse& setBody(DeleteOpenSourceAccountResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DeleteOpenSourceAccountResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
