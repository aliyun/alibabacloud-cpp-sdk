// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTERPRISECODERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTENTERPRISECODERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListEnterpriseCodeResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ListEnterpriseCodeResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnterpriseCodeResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnterpriseCodeResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListEnterpriseCodeResponse() = default ;
    ListEnterpriseCodeResponse(const ListEnterpriseCodeResponse &) = default ;
    ListEnterpriseCodeResponse(ListEnterpriseCodeResponse &&) = default ;
    ListEnterpriseCodeResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnterpriseCodeResponse() = default ;
    ListEnterpriseCodeResponse& operator=(const ListEnterpriseCodeResponse &) = default ;
    ListEnterpriseCodeResponse& operator=(ListEnterpriseCodeResponse &&) = default ;
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
    inline ListEnterpriseCodeResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListEnterpriseCodeResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListEnterpriseCodeResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListEnterpriseCodeResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ListEnterpriseCodeResponseBody) };
    inline ListEnterpriseCodeResponseBody getBody() { DARABONBA_PTR_GET(body_, ListEnterpriseCodeResponseBody) };
    inline ListEnterpriseCodeResponse& setBody(const ListEnterpriseCodeResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListEnterpriseCodeResponse& setBody(ListEnterpriseCodeResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ListEnterpriseCodeResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
