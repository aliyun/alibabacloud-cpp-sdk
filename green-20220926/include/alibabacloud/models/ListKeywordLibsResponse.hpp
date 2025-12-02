// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKEYWORDLIBSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTKEYWORDLIBSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListKeywordLibsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListKeywordLibsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKeywordLibsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListKeywordLibsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListKeywordLibsResponse() = default ;
    ListKeywordLibsResponse(const ListKeywordLibsResponse &) = default ;
    ListKeywordLibsResponse(ListKeywordLibsResponse &&) = default ;
    ListKeywordLibsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKeywordLibsResponse() = default ;
    ListKeywordLibsResponse& operator=(const ListKeywordLibsResponse &) = default ;
    ListKeywordLibsResponse& operator=(ListKeywordLibsResponse &&) = default ;
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
    inline ListKeywordLibsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListKeywordLibsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListKeywordLibsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListKeywordLibsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListKeywordLibsResponseBody) };
    inline ListKeywordLibsResponseBody body() { DARABONBA_PTR_GET(body_, ListKeywordLibsResponseBody) };
    inline ListKeywordLibsResponse& setBody(const ListKeywordLibsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListKeywordLibsResponse& setBody(ListKeywordLibsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListKeywordLibsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
