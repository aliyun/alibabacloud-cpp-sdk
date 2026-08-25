// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSCONFIGURATIONPROVISIONINGSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSCONFIGURATIONPROVISIONINGSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListAccessConfigurationProvisioningsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class ListAccessConfigurationProvisioningsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessConfigurationProvisioningsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessConfigurationProvisioningsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListAccessConfigurationProvisioningsResponse() = default ;
    ListAccessConfigurationProvisioningsResponse(const ListAccessConfigurationProvisioningsResponse &) = default ;
    ListAccessConfigurationProvisioningsResponse(ListAccessConfigurationProvisioningsResponse &&) = default ;
    ListAccessConfigurationProvisioningsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessConfigurationProvisioningsResponse() = default ;
    ListAccessConfigurationProvisioningsResponse& operator=(const ListAccessConfigurationProvisioningsResponse &) = default ;
    ListAccessConfigurationProvisioningsResponse& operator=(ListAccessConfigurationProvisioningsResponse &&) = default ;
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
    inline ListAccessConfigurationProvisioningsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListAccessConfigurationProvisioningsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListAccessConfigurationProvisioningsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListAccessConfigurationProvisioningsResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ListAccessConfigurationProvisioningsResponseBody) };
    inline ListAccessConfigurationProvisioningsResponseBody getBody() { DARABONBA_PTR_GET(body_, ListAccessConfigurationProvisioningsResponseBody) };
    inline ListAccessConfigurationProvisioningsResponse& setBody(const ListAccessConfigurationProvisioningsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListAccessConfigurationProvisioningsResponse& setBody(ListAccessConfigurationProvisioningsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ListAccessConfigurationProvisioningsResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
