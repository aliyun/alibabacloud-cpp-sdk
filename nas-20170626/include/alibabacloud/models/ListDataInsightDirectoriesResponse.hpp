// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAINSIGHTDIRECTORIESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAINSIGHTDIRECTORIESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListDataInsightDirectoriesResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ListDataInsightDirectoriesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataInsightDirectoriesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataInsightDirectoriesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListDataInsightDirectoriesResponse() = default ;
    ListDataInsightDirectoriesResponse(const ListDataInsightDirectoriesResponse &) = default ;
    ListDataInsightDirectoriesResponse(ListDataInsightDirectoriesResponse &&) = default ;
    ListDataInsightDirectoriesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataInsightDirectoriesResponse() = default ;
    ListDataInsightDirectoriesResponse& operator=(const ListDataInsightDirectoriesResponse &) = default ;
    ListDataInsightDirectoriesResponse& operator=(ListDataInsightDirectoriesResponse &&) = default ;
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
    inline ListDataInsightDirectoriesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListDataInsightDirectoriesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListDataInsightDirectoriesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListDataInsightDirectoriesResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ListDataInsightDirectoriesResponseBody) };
    inline ListDataInsightDirectoriesResponseBody getBody() { DARABONBA_PTR_GET(body_, ListDataInsightDirectoriesResponseBody) };
    inline ListDataInsightDirectoriesResponse& setBody(const ListDataInsightDirectoriesResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListDataInsightDirectoriesResponse& setBody(ListDataInsightDirectoriesResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ListDataInsightDirectoriesResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
