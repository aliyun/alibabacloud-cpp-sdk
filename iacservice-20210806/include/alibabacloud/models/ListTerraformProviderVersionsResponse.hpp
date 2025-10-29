// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTERRAFORMPROVIDERVERSIONSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTTERRAFORMPROVIDERVERSIONSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListTerraformProviderVersionsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListTerraformProviderVersionsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTerraformProviderVersionsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListTerraformProviderVersionsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListTerraformProviderVersionsResponse() = default ;
    ListTerraformProviderVersionsResponse(const ListTerraformProviderVersionsResponse &) = default ;
    ListTerraformProviderVersionsResponse(ListTerraformProviderVersionsResponse &&) = default ;
    ListTerraformProviderVersionsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTerraformProviderVersionsResponse() = default ;
    ListTerraformProviderVersionsResponse& operator=(const ListTerraformProviderVersionsResponse &) = default ;
    ListTerraformProviderVersionsResponse& operator=(ListTerraformProviderVersionsResponse &&) = default ;
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
    inline ListTerraformProviderVersionsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListTerraformProviderVersionsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListTerraformProviderVersionsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListTerraformProviderVersionsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListTerraformProviderVersionsResponseBody) };
    inline ListTerraformProviderVersionsResponseBody body() { DARABONBA_PTR_GET(body_, ListTerraformProviderVersionsResponseBody) };
    inline ListTerraformProviderVersionsResponse& setBody(const ListTerraformProviderVersionsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListTerraformProviderVersionsResponse& setBody(ListTerraformProviderVersionsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListTerraformProviderVersionsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
