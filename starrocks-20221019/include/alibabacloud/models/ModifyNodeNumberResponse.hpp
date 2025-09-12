// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODENUMBERRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODENUMBERRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModifyNodeNumberResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class ModifyNodeNumberResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNodeNumberResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodeNumberResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifyNodeNumberResponse() = default ;
    ModifyNodeNumberResponse(const ModifyNodeNumberResponse &) = default ;
    ModifyNodeNumberResponse(ModifyNodeNumberResponse &&) = default ;
    ModifyNodeNumberResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNodeNumberResponse() = default ;
    ModifyNodeNumberResponse& operator=(const ModifyNodeNumberResponse &) = default ;
    ModifyNodeNumberResponse& operator=(ModifyNodeNumberResponse &&) = default ;
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
    inline ModifyNodeNumberResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ModifyNodeNumberResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ModifyNodeNumberResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ModifyNodeNumberResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ModifyNodeNumberResponseBody) };
    inline ModifyNodeNumberResponseBody body() { DARABONBA_PTR_GET(body_, ModifyNodeNumberResponseBody) };
    inline ModifyNodeNumberResponse& setBody(const ModifyNodeNumberResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifyNodeNumberResponse& setBody(ModifyNodeNumberResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ModifyNodeNumberResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
