// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEBOOTCONFIGURATIONRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEBOOTCONFIGURATIONRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModifyInstanceBootConfigurationResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifyInstanceBootConfigurationResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceBootConfigurationResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceBootConfigurationResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifyInstanceBootConfigurationResponse() = default ;
    ModifyInstanceBootConfigurationResponse(const ModifyInstanceBootConfigurationResponse &) = default ;
    ModifyInstanceBootConfigurationResponse(ModifyInstanceBootConfigurationResponse &&) = default ;
    ModifyInstanceBootConfigurationResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceBootConfigurationResponse() = default ;
    ModifyInstanceBootConfigurationResponse& operator=(const ModifyInstanceBootConfigurationResponse &) = default ;
    ModifyInstanceBootConfigurationResponse& operator=(ModifyInstanceBootConfigurationResponse &&) = default ;
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
    inline ModifyInstanceBootConfigurationResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ModifyInstanceBootConfigurationResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ModifyInstanceBootConfigurationResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ModifyInstanceBootConfigurationResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ModifyInstanceBootConfigurationResponseBody) };
    inline ModifyInstanceBootConfigurationResponseBody getBody() { DARABONBA_PTR_GET(body_, ModifyInstanceBootConfigurationResponseBody) };
    inline ModifyInstanceBootConfigurationResponse& setBody(const ModifyInstanceBootConfigurationResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifyInstanceBootConfigurationResponse& setBody(ModifyInstanceBootConfigurationResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ModifyInstanceBootConfigurationResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
