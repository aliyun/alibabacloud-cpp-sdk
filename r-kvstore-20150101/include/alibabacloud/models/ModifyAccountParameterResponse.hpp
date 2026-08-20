// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCOUNTPARAMETERRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCOUNTPARAMETERRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModifyAccountParameterResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class ModifyAccountParameterResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccountParameterResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccountParameterResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifyAccountParameterResponse() = default ;
    ModifyAccountParameterResponse(const ModifyAccountParameterResponse &) = default ;
    ModifyAccountParameterResponse(ModifyAccountParameterResponse &&) = default ;
    ModifyAccountParameterResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccountParameterResponse() = default ;
    ModifyAccountParameterResponse& operator=(const ModifyAccountParameterResponse &) = default ;
    ModifyAccountParameterResponse& operator=(ModifyAccountParameterResponse &&) = default ;
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
    inline ModifyAccountParameterResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ModifyAccountParameterResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ModifyAccountParameterResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ModifyAccountParameterResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ModifyAccountParameterResponseBody) };
    inline ModifyAccountParameterResponseBody getBody() { DARABONBA_PTR_GET(body_, ModifyAccountParameterResponseBody) };
    inline ModifyAccountParameterResponse& setBody(const ModifyAccountParameterResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifyAccountParameterResponse& setBody(ModifyAccountParameterResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ModifyAccountParameterResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
