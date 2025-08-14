// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCENBANDWIDTHPACKAGESPECRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCENBANDWIDTHPACKAGESPECRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModifyCenBandwidthPackageSpecResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ModifyCenBandwidthPackageSpecResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCenBandwidthPackageSpecResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCenBandwidthPackageSpecResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifyCenBandwidthPackageSpecResponse() = default ;
    ModifyCenBandwidthPackageSpecResponse(const ModifyCenBandwidthPackageSpecResponse &) = default ;
    ModifyCenBandwidthPackageSpecResponse(ModifyCenBandwidthPackageSpecResponse &&) = default ;
    ModifyCenBandwidthPackageSpecResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCenBandwidthPackageSpecResponse() = default ;
    ModifyCenBandwidthPackageSpecResponse& operator=(const ModifyCenBandwidthPackageSpecResponse &) = default ;
    ModifyCenBandwidthPackageSpecResponse& operator=(ModifyCenBandwidthPackageSpecResponse &&) = default ;
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
    inline ModifyCenBandwidthPackageSpecResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ModifyCenBandwidthPackageSpecResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ModifyCenBandwidthPackageSpecResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ModifyCenBandwidthPackageSpecResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ModifyCenBandwidthPackageSpecResponseBody) };
    inline ModifyCenBandwidthPackageSpecResponseBody body() { DARABONBA_PTR_GET(body_, ModifyCenBandwidthPackageSpecResponseBody) };
    inline ModifyCenBandwidthPackageSpecResponse& setBody(const ModifyCenBandwidthPackageSpecResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifyCenBandwidthPackageSpecResponse& setBody(ModifyCenBandwidthPackageSpecResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ModifyCenBandwidthPackageSpecResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
