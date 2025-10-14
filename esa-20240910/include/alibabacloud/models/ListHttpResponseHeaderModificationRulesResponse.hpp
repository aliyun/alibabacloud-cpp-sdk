// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHTTPRESPONSEHEADERMODIFICATIONRULESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTHTTPRESPONSEHEADERMODIFICATIONRULESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListHttpResponseHeaderModificationRulesResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListHttpResponseHeaderModificationRulesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHttpResponseHeaderModificationRulesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListHttpResponseHeaderModificationRulesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListHttpResponseHeaderModificationRulesResponse() = default ;
    ListHttpResponseHeaderModificationRulesResponse(const ListHttpResponseHeaderModificationRulesResponse &) = default ;
    ListHttpResponseHeaderModificationRulesResponse(ListHttpResponseHeaderModificationRulesResponse &&) = default ;
    ListHttpResponseHeaderModificationRulesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHttpResponseHeaderModificationRulesResponse() = default ;
    ListHttpResponseHeaderModificationRulesResponse& operator=(const ListHttpResponseHeaderModificationRulesResponse &) = default ;
    ListHttpResponseHeaderModificationRulesResponse& operator=(ListHttpResponseHeaderModificationRulesResponse &&) = default ;
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
    inline ListHttpResponseHeaderModificationRulesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListHttpResponseHeaderModificationRulesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListHttpResponseHeaderModificationRulesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListHttpResponseHeaderModificationRulesResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListHttpResponseHeaderModificationRulesResponseBody) };
    inline ListHttpResponseHeaderModificationRulesResponseBody body() { DARABONBA_PTR_GET(body_, ListHttpResponseHeaderModificationRulesResponseBody) };
    inline ListHttpResponseHeaderModificationRulesResponse& setBody(const ListHttpResponseHeaderModificationRulesResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListHttpResponseHeaderModificationRulesResponse& setBody(ListHttpResponseHeaderModificationRulesResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListHttpResponseHeaderModificationRulesResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
