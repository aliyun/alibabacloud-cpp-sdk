// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEONEMETASQLTEMPLATERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEONEMETASQLTEMPLATERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdateOneMetaSqlTemplateResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class UpdateOneMetaSqlTemplateResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOneMetaSqlTemplateResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOneMetaSqlTemplateResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateOneMetaSqlTemplateResponse() = default ;
    UpdateOneMetaSqlTemplateResponse(const UpdateOneMetaSqlTemplateResponse &) = default ;
    UpdateOneMetaSqlTemplateResponse(UpdateOneMetaSqlTemplateResponse &&) = default ;
    UpdateOneMetaSqlTemplateResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOneMetaSqlTemplateResponse() = default ;
    UpdateOneMetaSqlTemplateResponse& operator=(const UpdateOneMetaSqlTemplateResponse &) = default ;
    UpdateOneMetaSqlTemplateResponse& operator=(UpdateOneMetaSqlTemplateResponse &&) = default ;
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
    inline UpdateOneMetaSqlTemplateResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateOneMetaSqlTemplateResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateOneMetaSqlTemplateResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateOneMetaSqlTemplateResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateOneMetaSqlTemplateResponseBody) };
    inline UpdateOneMetaSqlTemplateResponseBody getBody() { DARABONBA_PTR_GET(body_, UpdateOneMetaSqlTemplateResponseBody) };
    inline UpdateOneMetaSqlTemplateResponse& setBody(const UpdateOneMetaSqlTemplateResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateOneMetaSqlTemplateResponse& setBody(UpdateOneMetaSqlTemplateResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<UpdateOneMetaSqlTemplateResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
