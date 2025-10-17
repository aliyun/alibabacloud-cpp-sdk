// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSTICRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSTICRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDiagnosticResultsResponseBodyDiagnosticResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListDiagnosticResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnosticResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiagnosticResults, diagnosticResults_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiagnosticResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiagnosticResults, diagnosticResults_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDiagnosticResultsResponseBody() = default ;
    ListDiagnosticResultsResponseBody(const ListDiagnosticResultsResponseBody &) = default ;
    ListDiagnosticResultsResponseBody(ListDiagnosticResultsResponseBody &&) = default ;
    ListDiagnosticResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnosticResultsResponseBody() = default ;
    ListDiagnosticResultsResponseBody& operator=(const ListDiagnosticResultsResponseBody &) = default ;
    ListDiagnosticResultsResponseBody& operator=(ListDiagnosticResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diagnosticResults_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // diagnosticResults Field Functions 
    bool hasDiagnosticResults() const { return this->diagnosticResults_ != nullptr;};
    void deleteDiagnosticResults() { this->diagnosticResults_ = nullptr;};
    inline const vector<ListDiagnosticResultsResponseBodyDiagnosticResults> & diagnosticResults() const { DARABONBA_PTR_GET_CONST(diagnosticResults_, vector<ListDiagnosticResultsResponseBodyDiagnosticResults>) };
    inline vector<ListDiagnosticResultsResponseBodyDiagnosticResults> diagnosticResults() { DARABONBA_PTR_GET(diagnosticResults_, vector<ListDiagnosticResultsResponseBodyDiagnosticResults>) };
    inline ListDiagnosticResultsResponseBody& setDiagnosticResults(const vector<ListDiagnosticResultsResponseBodyDiagnosticResults> & diagnosticResults) { DARABONBA_PTR_SET_VALUE(diagnosticResults_, diagnosticResults) };
    inline ListDiagnosticResultsResponseBody& setDiagnosticResults(vector<ListDiagnosticResultsResponseBodyDiagnosticResults> && diagnosticResults) { DARABONBA_PTR_SET_RVALUE(diagnosticResults_, diagnosticResults) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListDiagnosticResultsResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDiagnosticResultsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDiagnosticResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The diagnostic information.
    std::shared_ptr<vector<ListDiagnosticResultsResponseBodyDiagnosticResults>> diagnosticResults_ = nullptr;
    // Number of items per page in a paginated query. The maximum value is 100.
    // 
    // Default value:
    // 
    // - If no value is set or the set value is less than 20, the default value is 20.
    // - If the set value is greater than 100, the default value is 100.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // NextToken for the next page. Include this value when requesting the next page.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
