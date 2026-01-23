// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCANBASELINEBYTASKRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTSCANBASELINEBYTASKRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListScanBaselineByTaskResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListScanBaselineByTaskResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScanBaselineByTaskResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListScanBaselineByTaskResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListScanBaselineByTaskResponse() = default ;
    ListScanBaselineByTaskResponse(const ListScanBaselineByTaskResponse &) = default ;
    ListScanBaselineByTaskResponse(ListScanBaselineByTaskResponse &&) = default ;
    ListScanBaselineByTaskResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScanBaselineByTaskResponse() = default ;
    ListScanBaselineByTaskResponse& operator=(const ListScanBaselineByTaskResponse &) = default ;
    ListScanBaselineByTaskResponse& operator=(ListScanBaselineByTaskResponse &&) = default ;
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
    inline ListScanBaselineByTaskResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListScanBaselineByTaskResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListScanBaselineByTaskResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListScanBaselineByTaskResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ListScanBaselineByTaskResponseBody) };
    inline ListScanBaselineByTaskResponseBody getBody() { DARABONBA_PTR_GET(body_, ListScanBaselineByTaskResponseBody) };
    inline ListScanBaselineByTaskResponse& setBody(const ListScanBaselineByTaskResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListScanBaselineByTaskResponse& setBody(ListScanBaselineByTaskResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ListScanBaselineByTaskResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
