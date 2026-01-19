// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCESBYADVANCEDSEARCHRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCESBYADVANCEDSEARCHRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListAggregateResourcesByAdvancedSearchResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateResourcesByAdvancedSearchResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateResourcesByAdvancedSearchResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateResourcesByAdvancedSearchResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListAggregateResourcesByAdvancedSearchResponse() = default ;
    ListAggregateResourcesByAdvancedSearchResponse(const ListAggregateResourcesByAdvancedSearchResponse &) = default ;
    ListAggregateResourcesByAdvancedSearchResponse(ListAggregateResourcesByAdvancedSearchResponse &&) = default ;
    ListAggregateResourcesByAdvancedSearchResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateResourcesByAdvancedSearchResponse() = default ;
    ListAggregateResourcesByAdvancedSearchResponse& operator=(const ListAggregateResourcesByAdvancedSearchResponse &) = default ;
    ListAggregateResourcesByAdvancedSearchResponse& operator=(ListAggregateResourcesByAdvancedSearchResponse &&) = default ;
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
    inline ListAggregateResourcesByAdvancedSearchResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListAggregateResourcesByAdvancedSearchResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListAggregateResourcesByAdvancedSearchResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListAggregateResourcesByAdvancedSearchResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ListAggregateResourcesByAdvancedSearchResponseBody) };
    inline ListAggregateResourcesByAdvancedSearchResponseBody getBody() { DARABONBA_PTR_GET(body_, ListAggregateResourcesByAdvancedSearchResponseBody) };
    inline ListAggregateResourcesByAdvancedSearchResponse& setBody(const ListAggregateResourcesByAdvancedSearchResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListAggregateResourcesByAdvancedSearchResponse& setBody(ListAggregateResourcesByAdvancedSearchResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ListAggregateResourcesByAdvancedSearchResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
