// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCIMSERVERCREDENTIALRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATESCIMSERVERCREDENTIALRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateSCIMServerCredentialResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class CreateSCIMServerCredentialResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSCIMServerCredentialResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSCIMServerCredentialResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateSCIMServerCredentialResponse() = default ;
    CreateSCIMServerCredentialResponse(const CreateSCIMServerCredentialResponse &) = default ;
    CreateSCIMServerCredentialResponse(CreateSCIMServerCredentialResponse &&) = default ;
    CreateSCIMServerCredentialResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSCIMServerCredentialResponse() = default ;
    CreateSCIMServerCredentialResponse& operator=(const CreateSCIMServerCredentialResponse &) = default ;
    CreateSCIMServerCredentialResponse& operator=(CreateSCIMServerCredentialResponse &&) = default ;
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
    inline CreateSCIMServerCredentialResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateSCIMServerCredentialResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateSCIMServerCredentialResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateSCIMServerCredentialResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateSCIMServerCredentialResponseBody) };
    inline CreateSCIMServerCredentialResponseBody getBody() { DARABONBA_PTR_GET(body_, CreateSCIMServerCredentialResponseBody) };
    inline CreateSCIMServerCredentialResponse& setBody(const CreateSCIMServerCredentialResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateSCIMServerCredentialResponse& setBody(CreateSCIMServerCredentialResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<CreateSCIMServerCredentialResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
