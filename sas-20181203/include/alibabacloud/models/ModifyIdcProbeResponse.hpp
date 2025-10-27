// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYIDCPROBERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYIDCPROBERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModifyIdcProbeResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyIdcProbeResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyIdcProbeResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyIdcProbeResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifyIdcProbeResponse() = default ;
    ModifyIdcProbeResponse(const ModifyIdcProbeResponse &) = default ;
    ModifyIdcProbeResponse(ModifyIdcProbeResponse &&) = default ;
    ModifyIdcProbeResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyIdcProbeResponse() = default ;
    ModifyIdcProbeResponse& operator=(const ModifyIdcProbeResponse &) = default ;
    ModifyIdcProbeResponse& operator=(ModifyIdcProbeResponse &&) = default ;
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
    inline ModifyIdcProbeResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ModifyIdcProbeResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ModifyIdcProbeResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ModifyIdcProbeResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ModifyIdcProbeResponseBody) };
    inline ModifyIdcProbeResponseBody body() { DARABONBA_PTR_GET(body_, ModifyIdcProbeResponseBody) };
    inline ModifyIdcProbeResponse& setBody(const ModifyIdcProbeResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifyIdcProbeResponse& setBody(ModifyIdcProbeResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ModifyIdcProbeResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
