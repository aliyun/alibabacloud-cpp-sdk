// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROMPTTEMPLATERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROMPTTEMPLATERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreatePromptTemplateResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class CreatePromptTemplateResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePromptTemplateResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePromptTemplateResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreatePromptTemplateResponse() = default ;
    CreatePromptTemplateResponse(const CreatePromptTemplateResponse &) = default ;
    CreatePromptTemplateResponse(CreatePromptTemplateResponse &&) = default ;
    CreatePromptTemplateResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePromptTemplateResponse() = default ;
    CreatePromptTemplateResponse& operator=(const CreatePromptTemplateResponse &) = default ;
    CreatePromptTemplateResponse& operator=(CreatePromptTemplateResponse &&) = default ;
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
    inline CreatePromptTemplateResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreatePromptTemplateResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreatePromptTemplateResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreatePromptTemplateResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreatePromptTemplateResponseBody) };
    inline CreatePromptTemplateResponseBody body() { DARABONBA_PTR_GET(body_, CreatePromptTemplateResponseBody) };
    inline CreatePromptTemplateResponse& setBody(const CreatePromptTemplateResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreatePromptTemplateResponse& setBody(CreatePromptTemplateResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CreatePromptTemplateResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
