// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2RESPONSE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2RESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/FlightListingSearchV2ResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightListingSearchV2Response : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchV2Response& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, FlightListingSearchV2Response& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    FlightListingSearchV2Response() = default ;
    FlightListingSearchV2Response(const FlightListingSearchV2Response &) = default ;
    FlightListingSearchV2Response(FlightListingSearchV2Response &&) = default ;
    FlightListingSearchV2Response(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchV2Response() = default ;
    FlightListingSearchV2Response& operator=(const FlightListingSearchV2Response &) = default ;
    FlightListingSearchV2Response& operator=(FlightListingSearchV2Response &&) = default ;
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
    inline FlightListingSearchV2Response& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline FlightListingSearchV2Response& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline FlightListingSearchV2Response& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const FlightListingSearchV2ResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, FlightListingSearchV2ResponseBody) };
    inline FlightListingSearchV2ResponseBody body() { DARABONBA_PTR_GET(body_, FlightListingSearchV2ResponseBody) };
    inline FlightListingSearchV2Response& setBody(const FlightListingSearchV2ResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline FlightListingSearchV2Response& setBody(FlightListingSearchV2ResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<FlightListingSearchV2ResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
