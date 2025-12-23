// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENTIONDICTIONARYENTRIESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENTIONDICTIONARYENTRIESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListInterventionDictionaryEntriesResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListInterventionDictionaryEntriesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterventionDictionaryEntriesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterventionDictionaryEntriesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListInterventionDictionaryEntriesResponse() = default ;
    ListInterventionDictionaryEntriesResponse(const ListInterventionDictionaryEntriesResponse &) = default ;
    ListInterventionDictionaryEntriesResponse(ListInterventionDictionaryEntriesResponse &&) = default ;
    ListInterventionDictionaryEntriesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterventionDictionaryEntriesResponse() = default ;
    ListInterventionDictionaryEntriesResponse& operator=(const ListInterventionDictionaryEntriesResponse &) = default ;
    ListInterventionDictionaryEntriesResponse& operator=(ListInterventionDictionaryEntriesResponse &&) = default ;
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
    inline ListInterventionDictionaryEntriesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListInterventionDictionaryEntriesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListInterventionDictionaryEntriesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListInterventionDictionaryEntriesResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListInterventionDictionaryEntriesResponseBody) };
    inline ListInterventionDictionaryEntriesResponseBody body() { DARABONBA_PTR_GET(body_, ListInterventionDictionaryEntriesResponseBody) };
    inline ListInterventionDictionaryEntriesResponse& setBody(const ListInterventionDictionaryEntriesResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListInterventionDictionaryEntriesResponse& setBody(ListInterventionDictionaryEntriesResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListInterventionDictionaryEntriesResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
