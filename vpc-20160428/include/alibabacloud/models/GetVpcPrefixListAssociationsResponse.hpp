// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPCPREFIXLISTASSOCIATIONSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETVPCPREFIXLISTASSOCIATIONSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetVpcPrefixListAssociationsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetVpcPrefixListAssociationsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpcPrefixListAssociationsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpcPrefixListAssociationsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetVpcPrefixListAssociationsResponse() = default ;
    GetVpcPrefixListAssociationsResponse(const GetVpcPrefixListAssociationsResponse &) = default ;
    GetVpcPrefixListAssociationsResponse(GetVpcPrefixListAssociationsResponse &&) = default ;
    GetVpcPrefixListAssociationsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpcPrefixListAssociationsResponse() = default ;
    GetVpcPrefixListAssociationsResponse& operator=(const GetVpcPrefixListAssociationsResponse &) = default ;
    GetVpcPrefixListAssociationsResponse& operator=(GetVpcPrefixListAssociationsResponse &&) = default ;
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
    inline GetVpcPrefixListAssociationsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetVpcPrefixListAssociationsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetVpcPrefixListAssociationsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetVpcPrefixListAssociationsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetVpcPrefixListAssociationsResponseBody) };
    inline GetVpcPrefixListAssociationsResponseBody body() { DARABONBA_PTR_GET(body_, GetVpcPrefixListAssociationsResponseBody) };
    inline GetVpcPrefixListAssociationsResponse& setBody(const GetVpcPrefixListAssociationsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetVpcPrefixListAssociationsResponse& setBody(GetVpcPrefixListAssociationsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetVpcPrefixListAssociationsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
