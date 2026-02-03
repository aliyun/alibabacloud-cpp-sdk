// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETICEBERGNAMESPACERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETICEBERGNAMESPACERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/Namespace.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class GetIcebergNamespaceResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIcebergNamespaceResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetIcebergNamespaceResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetIcebergNamespaceResponse() = default ;
    GetIcebergNamespaceResponse(const GetIcebergNamespaceResponse &) = default ;
    GetIcebergNamespaceResponse(GetIcebergNamespaceResponse &&) = default ;
    GetIcebergNamespaceResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIcebergNamespaceResponse() = default ;
    GetIcebergNamespaceResponse& operator=(const GetIcebergNamespaceResponse &) = default ;
    GetIcebergNamespaceResponse& operator=(GetIcebergNamespaceResponse &&) = default ;
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
    inline GetIcebergNamespaceResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetIcebergNamespaceResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetIcebergNamespaceResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Namespace & getBody() const { DARABONBA_PTR_GET_CONST(body_, Namespace) };
    inline Namespace getBody() { DARABONBA_PTR_GET(body_, Namespace) };
    inline GetIcebergNamespaceResponse& setBody(const Namespace & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetIcebergNamespaceResponse& setBody(Namespace && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<Namespace> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
