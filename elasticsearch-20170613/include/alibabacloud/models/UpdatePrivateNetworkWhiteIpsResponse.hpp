// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRIVATENETWORKWHITEIPSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRIVATENETWORKWHITEIPSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdatePrivateNetworkWhiteIpsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdatePrivateNetworkWhiteIpsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrivateNetworkWhiteIpsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrivateNetworkWhiteIpsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdatePrivateNetworkWhiteIpsResponse() = default ;
    UpdatePrivateNetworkWhiteIpsResponse(const UpdatePrivateNetworkWhiteIpsResponse &) = default ;
    UpdatePrivateNetworkWhiteIpsResponse(UpdatePrivateNetworkWhiteIpsResponse &&) = default ;
    UpdatePrivateNetworkWhiteIpsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrivateNetworkWhiteIpsResponse() = default ;
    UpdatePrivateNetworkWhiteIpsResponse& operator=(const UpdatePrivateNetworkWhiteIpsResponse &) = default ;
    UpdatePrivateNetworkWhiteIpsResponse& operator=(UpdatePrivateNetworkWhiteIpsResponse &&) = default ;
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
    inline UpdatePrivateNetworkWhiteIpsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdatePrivateNetworkWhiteIpsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdatePrivateNetworkWhiteIpsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdatePrivateNetworkWhiteIpsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, UpdatePrivateNetworkWhiteIpsResponseBody) };
    inline UpdatePrivateNetworkWhiteIpsResponseBody body() { DARABONBA_PTR_GET(body_, UpdatePrivateNetworkWhiteIpsResponseBody) };
    inline UpdatePrivateNetworkWhiteIpsResponse& setBody(const UpdatePrivateNetworkWhiteIpsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdatePrivateNetworkWhiteIpsResponse& setBody(UpdatePrivateNetworkWhiteIpsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<UpdatePrivateNetworkWhiteIpsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
