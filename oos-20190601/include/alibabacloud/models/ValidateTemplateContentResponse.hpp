// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATETEMPLATECONTENTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_VALIDATETEMPLATECONTENTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ValidateTemplateContentResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ValidateTemplateContentResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateTemplateContentResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateTemplateContentResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ValidateTemplateContentResponse() = default ;
    ValidateTemplateContentResponse(const ValidateTemplateContentResponse &) = default ;
    ValidateTemplateContentResponse(ValidateTemplateContentResponse &&) = default ;
    ValidateTemplateContentResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateTemplateContentResponse() = default ;
    ValidateTemplateContentResponse& operator=(const ValidateTemplateContentResponse &) = default ;
    ValidateTemplateContentResponse& operator=(ValidateTemplateContentResponse &&) = default ;
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
    inline ValidateTemplateContentResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ValidateTemplateContentResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ValidateTemplateContentResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ValidateTemplateContentResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ValidateTemplateContentResponseBody) };
    inline ValidateTemplateContentResponseBody body() { DARABONBA_PTR_GET(body_, ValidateTemplateContentResponseBody) };
    inline ValidateTemplateContentResponse& setBody(const ValidateTemplateContentResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ValidateTemplateContentResponse& setBody(ValidateTemplateContentResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ValidateTemplateContentResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
