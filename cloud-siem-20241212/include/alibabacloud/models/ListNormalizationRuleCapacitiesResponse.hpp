// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULECAPACITIESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULECAPACITIESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListNormalizationRuleCapacitiesResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListNormalizationRuleCapacitiesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNormalizationRuleCapacitiesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListNormalizationRuleCapacitiesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListNormalizationRuleCapacitiesResponse() = default ;
    ListNormalizationRuleCapacitiesResponse(const ListNormalizationRuleCapacitiesResponse &) = default ;
    ListNormalizationRuleCapacitiesResponse(ListNormalizationRuleCapacitiesResponse &&) = default ;
    ListNormalizationRuleCapacitiesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNormalizationRuleCapacitiesResponse() = default ;
    ListNormalizationRuleCapacitiesResponse& operator=(const ListNormalizationRuleCapacitiesResponse &) = default ;
    ListNormalizationRuleCapacitiesResponse& operator=(ListNormalizationRuleCapacitiesResponse &&) = default ;
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
    inline ListNormalizationRuleCapacitiesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListNormalizationRuleCapacitiesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListNormalizationRuleCapacitiesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListNormalizationRuleCapacitiesResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListNormalizationRuleCapacitiesResponseBody) };
    inline ListNormalizationRuleCapacitiesResponseBody body() { DARABONBA_PTR_GET(body_, ListNormalizationRuleCapacitiesResponseBody) };
    inline ListNormalizationRuleCapacitiesResponse& setBody(const ListNormalizationRuleCapacitiesResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListNormalizationRuleCapacitiesResponse& setBody(ListNormalizationRuleCapacitiesResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListNormalizationRuleCapacitiesResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
