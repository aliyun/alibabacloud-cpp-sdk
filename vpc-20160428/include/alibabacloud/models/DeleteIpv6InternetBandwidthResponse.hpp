// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIPV6INTERNETBANDWIDTHRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETEIPV6INTERNETBANDWIDTHRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeleteIpv6InternetBandwidthResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DeleteIpv6InternetBandwidthResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIpv6InternetBandwidthResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIpv6InternetBandwidthResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteIpv6InternetBandwidthResponse() = default ;
    DeleteIpv6InternetBandwidthResponse(const DeleteIpv6InternetBandwidthResponse &) = default ;
    DeleteIpv6InternetBandwidthResponse(DeleteIpv6InternetBandwidthResponse &&) = default ;
    DeleteIpv6InternetBandwidthResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIpv6InternetBandwidthResponse() = default ;
    DeleteIpv6InternetBandwidthResponse& operator=(const DeleteIpv6InternetBandwidthResponse &) = default ;
    DeleteIpv6InternetBandwidthResponse& operator=(DeleteIpv6InternetBandwidthResponse &&) = default ;
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
    inline DeleteIpv6InternetBandwidthResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteIpv6InternetBandwidthResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteIpv6InternetBandwidthResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteIpv6InternetBandwidthResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DeleteIpv6InternetBandwidthResponseBody) };
    inline DeleteIpv6InternetBandwidthResponseBody getBody() { DARABONBA_PTR_GET(body_, DeleteIpv6InternetBandwidthResponseBody) };
    inline DeleteIpv6InternetBandwidthResponse& setBody(const DeleteIpv6InternetBandwidthResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteIpv6InternetBandwidthResponse& setBody(DeleteIpv6InternetBandwidthResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DeleteIpv6InternetBandwidthResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
