// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDiagnosticsResponseBodyDiagnostics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListDiagnosticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnosticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Diagnostics, diagnostics_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiagnosticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Diagnostics, diagnostics_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDiagnosticsResponseBody() = default ;
    ListDiagnosticsResponseBody(const ListDiagnosticsResponseBody &) = default ;
    ListDiagnosticsResponseBody(ListDiagnosticsResponseBody &&) = default ;
    ListDiagnosticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnosticsResponseBody() = default ;
    ListDiagnosticsResponseBody& operator=(const ListDiagnosticsResponseBody &) = default ;
    ListDiagnosticsResponseBody& operator=(ListDiagnosticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diagnostics_ != nullptr
        && this->httpStatusCode_ != nullptr && this->message_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // diagnostics Field Functions 
    bool hasDiagnostics() const { return this->diagnostics_ != nullptr;};
    void deleteDiagnostics() { this->diagnostics_ = nullptr;};
    inline const vector<ListDiagnosticsResponseBodyDiagnostics> & diagnostics() const { DARABONBA_PTR_GET_CONST(diagnostics_, vector<ListDiagnosticsResponseBodyDiagnostics>) };
    inline vector<ListDiagnosticsResponseBodyDiagnostics> diagnostics() { DARABONBA_PTR_GET(diagnostics_, vector<ListDiagnosticsResponseBodyDiagnostics>) };
    inline ListDiagnosticsResponseBody& setDiagnostics(const vector<ListDiagnosticsResponseBodyDiagnostics> & diagnostics) { DARABONBA_PTR_SET_VALUE(diagnostics_, diagnostics) };
    inline ListDiagnosticsResponseBody& setDiagnostics(vector<ListDiagnosticsResponseBodyDiagnostics> && diagnostics) { DARABONBA_PTR_SET_RVALUE(diagnostics_, diagnostics) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDiagnosticsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDiagnosticsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDiagnosticsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDiagnosticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ListDiagnosticsResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The items that are diagnosed.
    std::shared_ptr<vector<ListDiagnosticsResponseBodyDiagnostics>> diagnostics_ = nullptr;
    // The HTTP status code returned. The value 200 indicates that the request was successful.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
