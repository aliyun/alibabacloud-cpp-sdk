// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATEMATERIALRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATEMATERIALRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListTemplateMaterialResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class ListTemplateMaterialResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateMaterialResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateMaterialResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListTemplateMaterialResponse() = default ;
    ListTemplateMaterialResponse(const ListTemplateMaterialResponse &) = default ;
    ListTemplateMaterialResponse(ListTemplateMaterialResponse &&) = default ;
    ListTemplateMaterialResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateMaterialResponse() = default ;
    ListTemplateMaterialResponse& operator=(const ListTemplateMaterialResponse &) = default ;
    ListTemplateMaterialResponse& operator=(ListTemplateMaterialResponse &&) = default ;
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
    inline ListTemplateMaterialResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListTemplateMaterialResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListTemplateMaterialResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListTemplateMaterialResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListTemplateMaterialResponseBody) };
    inline ListTemplateMaterialResponseBody body() { DARABONBA_PTR_GET(body_, ListTemplateMaterialResponseBody) };
    inline ListTemplateMaterialResponse& setBody(const ListTemplateMaterialResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListTemplateMaterialResponse& setBody(ListTemplateMaterialResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListTemplateMaterialResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
