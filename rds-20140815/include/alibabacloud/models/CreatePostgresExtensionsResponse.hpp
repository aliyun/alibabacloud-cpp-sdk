// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOSTGRESEXTENSIONSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOSTGRESEXTENSIONSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreatePostgresExtensionsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreatePostgresExtensionsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePostgresExtensionsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePostgresExtensionsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreatePostgresExtensionsResponse() = default ;
    CreatePostgresExtensionsResponse(const CreatePostgresExtensionsResponse &) = default ;
    CreatePostgresExtensionsResponse(CreatePostgresExtensionsResponse &&) = default ;
    CreatePostgresExtensionsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePostgresExtensionsResponse() = default ;
    CreatePostgresExtensionsResponse& operator=(const CreatePostgresExtensionsResponse &) = default ;
    CreatePostgresExtensionsResponse& operator=(CreatePostgresExtensionsResponse &&) = default ;
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
    inline CreatePostgresExtensionsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreatePostgresExtensionsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreatePostgresExtensionsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreatePostgresExtensionsResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreatePostgresExtensionsResponseBody) };
    inline CreatePostgresExtensionsResponseBody getBody() { DARABONBA_PTR_GET(body_, CreatePostgresExtensionsResponseBody) };
    inline CreatePostgresExtensionsResponse& setBody(const CreatePostgresExtensionsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreatePostgresExtensionsResponse& setBody(CreatePostgresExtensionsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<CreatePostgresExtensionsResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
