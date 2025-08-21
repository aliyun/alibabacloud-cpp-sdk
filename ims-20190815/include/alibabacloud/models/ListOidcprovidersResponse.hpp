// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOIDCPROVIDERSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTOIDCPROVIDERSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListOIDCProvidersResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListOIDCProvidersResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOIDCProvidersResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListOIDCProvidersResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListOIDCProvidersResponse() = default ;
    ListOIDCProvidersResponse(const ListOIDCProvidersResponse &) = default ;
    ListOIDCProvidersResponse(ListOIDCProvidersResponse &&) = default ;
    ListOIDCProvidersResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOIDCProvidersResponse() = default ;
    ListOIDCProvidersResponse& operator=(const ListOIDCProvidersResponse &) = default ;
    ListOIDCProvidersResponse& operator=(ListOIDCProvidersResponse &&) = default ;
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
    inline ListOIDCProvidersResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListOIDCProvidersResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListOIDCProvidersResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListOIDCProvidersResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListOIDCProvidersResponseBody) };
    inline ListOIDCProvidersResponseBody body() { DARABONBA_PTR_GET(body_, ListOIDCProvidersResponseBody) };
    inline ListOIDCProvidersResponse& setBody(const ListOIDCProvidersResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListOIDCProvidersResponse& setBody(ListOIDCProvidersResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListOIDCProvidersResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
