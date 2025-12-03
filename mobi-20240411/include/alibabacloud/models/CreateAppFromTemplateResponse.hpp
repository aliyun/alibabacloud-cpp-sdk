// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPFROMTEMPLATERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPFROMTEMPLATERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateAppFromTemplateResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mobi20240411
{
namespace Models
{
  class CreateAppFromTemplateResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppFromTemplateResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppFromTemplateResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateAppFromTemplateResponse() = default ;
    CreateAppFromTemplateResponse(const CreateAppFromTemplateResponse &) = default ;
    CreateAppFromTemplateResponse(CreateAppFromTemplateResponse &&) = default ;
    CreateAppFromTemplateResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppFromTemplateResponse() = default ;
    CreateAppFromTemplateResponse& operator=(const CreateAppFromTemplateResponse &) = default ;
    CreateAppFromTemplateResponse& operator=(CreateAppFromTemplateResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->statusCode_ == nullptr && return this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline CreateAppFromTemplateResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateAppFromTemplateResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateAppFromTemplateResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateAppFromTemplateResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateAppFromTemplateResponseBody) };
    inline CreateAppFromTemplateResponseBody body() { DARABONBA_PTR_GET(body_, CreateAppFromTemplateResponseBody) };
    inline CreateAppFromTemplateResponse& setBody(const CreateAppFromTemplateResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateAppFromTemplateResponse& setBody(CreateAppFromTemplateResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CreateAppFromTemplateResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mobi20240411
#endif
