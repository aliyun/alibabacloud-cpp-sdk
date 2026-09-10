// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACHECKCOLUMNRESULTSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACHECKCOLUMNRESULTSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListDataCheckColumnResultsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ListDataCheckColumnResultsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCheckColumnResultsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCheckColumnResultsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListDataCheckColumnResultsResponse() = default ;
    ListDataCheckColumnResultsResponse(const ListDataCheckColumnResultsResponse &) = default ;
    ListDataCheckColumnResultsResponse(ListDataCheckColumnResultsResponse &&) = default ;
    ListDataCheckColumnResultsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCheckColumnResultsResponse() = default ;
    ListDataCheckColumnResultsResponse& operator=(const ListDataCheckColumnResultsResponse &) = default ;
    ListDataCheckColumnResultsResponse& operator=(ListDataCheckColumnResultsResponse &&) = default ;
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
    inline ListDataCheckColumnResultsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListDataCheckColumnResultsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListDataCheckColumnResultsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListDataCheckColumnResultsResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ListDataCheckColumnResultsResponseBody) };
    inline ListDataCheckColumnResultsResponseBody getBody() { DARABONBA_PTR_GET(body_, ListDataCheckColumnResultsResponseBody) };
    inline ListDataCheckColumnResultsResponse& setBody(const ListDataCheckColumnResultsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListDataCheckColumnResultsResponse& setBody(ListDataCheckColumnResultsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ListDataCheckColumnResultsResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
