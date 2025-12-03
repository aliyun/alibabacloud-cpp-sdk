// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTLSCIPHERPOLICIESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTTLSCIPHERPOLICIESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListTLSCipherPoliciesResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class ListTLSCipherPoliciesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTLSCipherPoliciesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListTLSCipherPoliciesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListTLSCipherPoliciesResponse() = default ;
    ListTLSCipherPoliciesResponse(const ListTLSCipherPoliciesResponse &) = default ;
    ListTLSCipherPoliciesResponse(ListTLSCipherPoliciesResponse &&) = default ;
    ListTLSCipherPoliciesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTLSCipherPoliciesResponse() = default ;
    ListTLSCipherPoliciesResponse& operator=(const ListTLSCipherPoliciesResponse &) = default ;
    ListTLSCipherPoliciesResponse& operator=(ListTLSCipherPoliciesResponse &&) = default ;
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
    inline ListTLSCipherPoliciesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListTLSCipherPoliciesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListTLSCipherPoliciesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListTLSCipherPoliciesResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListTLSCipherPoliciesResponseBody) };
    inline ListTLSCipherPoliciesResponseBody body() { DARABONBA_PTR_GET(body_, ListTLSCipherPoliciesResponseBody) };
    inline ListTLSCipherPoliciesResponse& setBody(const ListTLSCipherPoliciesResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListTLSCipherPoliciesResponse& setBody(ListTLSCipherPoliciesResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListTLSCipherPoliciesResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
