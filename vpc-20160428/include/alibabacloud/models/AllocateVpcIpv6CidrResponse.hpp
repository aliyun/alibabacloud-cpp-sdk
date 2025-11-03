// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEVPCIPV6CIDRRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEVPCIPV6CIDRRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/AllocateVpcIpv6CidrResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AllocateVpcIpv6CidrResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateVpcIpv6CidrResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateVpcIpv6CidrResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    AllocateVpcIpv6CidrResponse() = default ;
    AllocateVpcIpv6CidrResponse(const AllocateVpcIpv6CidrResponse &) = default ;
    AllocateVpcIpv6CidrResponse(AllocateVpcIpv6CidrResponse &&) = default ;
    AllocateVpcIpv6CidrResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateVpcIpv6CidrResponse() = default ;
    AllocateVpcIpv6CidrResponse& operator=(const AllocateVpcIpv6CidrResponse &) = default ;
    AllocateVpcIpv6CidrResponse& operator=(AllocateVpcIpv6CidrResponse &&) = default ;
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
    inline AllocateVpcIpv6CidrResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline AllocateVpcIpv6CidrResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline AllocateVpcIpv6CidrResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const AllocateVpcIpv6CidrResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, AllocateVpcIpv6CidrResponseBody) };
    inline AllocateVpcIpv6CidrResponseBody body() { DARABONBA_PTR_GET(body_, AllocateVpcIpv6CidrResponseBody) };
    inline AllocateVpcIpv6CidrResponse& setBody(const AllocateVpcIpv6CidrResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline AllocateVpcIpv6CidrResponse& setBody(AllocateVpcIpv6CidrResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<AllocateVpcIpv6CidrResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
