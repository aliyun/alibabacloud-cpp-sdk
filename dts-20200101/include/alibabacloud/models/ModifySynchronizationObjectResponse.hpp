// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSYNCHRONIZATIONOBJECTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSYNCHRONIZATIONOBJECTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ModifySynchronizationObjectResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySynchronizationObjectResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySynchronizationObjectResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifySynchronizationObjectResponse() = default ;
    ModifySynchronizationObjectResponse(const ModifySynchronizationObjectResponse &) = default ;
    ModifySynchronizationObjectResponse(ModifySynchronizationObjectResponse &&) = default ;
    ModifySynchronizationObjectResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySynchronizationObjectResponse() = default ;
    ModifySynchronizationObjectResponse& operator=(const ModifySynchronizationObjectResponse &) = default ;
    ModifySynchronizationObjectResponse& operator=(ModifySynchronizationObjectResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->statusCode_ != nullptr && this->body_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline ModifySynchronizationObjectResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ModifySynchronizationObjectResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ModifySynchronizationObjectResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ModifySynchronizationObjectResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ModifySynchronizationObjectResponseBody) };
    inline ModifySynchronizationObjectResponseBody body() { DARABONBA_PTR_GET(body_, ModifySynchronizationObjectResponseBody) };
    inline ModifySynchronizationObjectResponse& setBody(const ModifySynchronizationObjectResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifySynchronizationObjectResponse& setBody(ModifySynchronizationObjectResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ModifySynchronizationObjectResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
