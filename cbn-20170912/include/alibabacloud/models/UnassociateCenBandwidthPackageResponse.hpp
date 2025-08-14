// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNASSOCIATECENBANDWIDTHPACKAGERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UNASSOCIATECENBANDWIDTHPACKAGERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UnassociateCenBandwidthPackageResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class UnassociateCenBandwidthPackageResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnassociateCenBandwidthPackageResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UnassociateCenBandwidthPackageResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UnassociateCenBandwidthPackageResponse() = default ;
    UnassociateCenBandwidthPackageResponse(const UnassociateCenBandwidthPackageResponse &) = default ;
    UnassociateCenBandwidthPackageResponse(UnassociateCenBandwidthPackageResponse &&) = default ;
    UnassociateCenBandwidthPackageResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnassociateCenBandwidthPackageResponse() = default ;
    UnassociateCenBandwidthPackageResponse& operator=(const UnassociateCenBandwidthPackageResponse &) = default ;
    UnassociateCenBandwidthPackageResponse& operator=(UnassociateCenBandwidthPackageResponse &&) = default ;
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
    inline UnassociateCenBandwidthPackageResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UnassociateCenBandwidthPackageResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UnassociateCenBandwidthPackageResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UnassociateCenBandwidthPackageResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, UnassociateCenBandwidthPackageResponseBody) };
    inline UnassociateCenBandwidthPackageResponseBody body() { DARABONBA_PTR_GET(body_, UnassociateCenBandwidthPackageResponseBody) };
    inline UnassociateCenBandwidthPackageResponse& setBody(const UnassociateCenBandwidthPackageResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UnassociateCenBandwidthPackageResponse& setBody(UnassociateCenBandwidthPackageResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<UnassociateCenBandwidthPackageResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
