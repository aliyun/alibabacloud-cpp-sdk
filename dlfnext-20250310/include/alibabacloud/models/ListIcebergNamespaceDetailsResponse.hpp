// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTICEBERGNAMESPACEDETAILSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTICEBERGNAMESPACEDETAILSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListIcebergNamespaceDetailsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListIcebergNamespaceDetailsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIcebergNamespaceDetailsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListIcebergNamespaceDetailsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListIcebergNamespaceDetailsResponse() = default ;
    ListIcebergNamespaceDetailsResponse(const ListIcebergNamespaceDetailsResponse &) = default ;
    ListIcebergNamespaceDetailsResponse(ListIcebergNamespaceDetailsResponse &&) = default ;
    ListIcebergNamespaceDetailsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIcebergNamespaceDetailsResponse() = default ;
    ListIcebergNamespaceDetailsResponse& operator=(const ListIcebergNamespaceDetailsResponse &) = default ;
    ListIcebergNamespaceDetailsResponse& operator=(ListIcebergNamespaceDetailsResponse &&) = default ;
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
    inline ListIcebergNamespaceDetailsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListIcebergNamespaceDetailsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListIcebergNamespaceDetailsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListIcebergNamespaceDetailsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListIcebergNamespaceDetailsResponseBody) };
    inline ListIcebergNamespaceDetailsResponseBody body() { DARABONBA_PTR_GET(body_, ListIcebergNamespaceDetailsResponseBody) };
    inline ListIcebergNamespaceDetailsResponse& setBody(const ListIcebergNamespaceDetailsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListIcebergNamespaceDetailsResponse& setBody(ListIcebergNamespaceDetailsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListIcebergNamespaceDetailsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
