// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPURCHASERSHOPSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTPURCHASERSHOPSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ShopPageResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ListPurchaserShopsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPurchaserShopsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListPurchaserShopsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListPurchaserShopsResponse() = default ;
    ListPurchaserShopsResponse(const ListPurchaserShopsResponse &) = default ;
    ListPurchaserShopsResponse(ListPurchaserShopsResponse &&) = default ;
    ListPurchaserShopsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPurchaserShopsResponse() = default ;
    ListPurchaserShopsResponse& operator=(const ListPurchaserShopsResponse &) = default ;
    ListPurchaserShopsResponse& operator=(ListPurchaserShopsResponse &&) = default ;
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
    inline ListPurchaserShopsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListPurchaserShopsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListPurchaserShopsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ShopPageResult & getBody() const { DARABONBA_PTR_GET_CONST(body_, ShopPageResult) };
    inline ShopPageResult getBody() { DARABONBA_PTR_GET(body_, ShopPageResult) };
    inline ListPurchaserShopsResponse& setBody(const ShopPageResult & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListPurchaserShopsResponse& setBody(ShopPageResult && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ShopPageResult> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
