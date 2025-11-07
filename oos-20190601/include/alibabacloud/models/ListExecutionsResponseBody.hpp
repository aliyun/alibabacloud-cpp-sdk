// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExecutionsResponseBodyExecutions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListExecutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Executions, executions_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Executions, executions_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListExecutionsResponseBody() = default ;
    ListExecutionsResponseBody(const ListExecutionsResponseBody &) = default ;
    ListExecutionsResponseBody(ListExecutionsResponseBody &&) = default ;
    ListExecutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutionsResponseBody() = default ;
    ListExecutionsResponseBody& operator=(const ListExecutionsResponseBody &) = default ;
    ListExecutionsResponseBody& operator=(ListExecutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executions_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // executions Field Functions 
    bool hasExecutions() const { return this->executions_ != nullptr;};
    void deleteExecutions() { this->executions_ = nullptr;};
    inline const vector<ListExecutionsResponseBodyExecutions> & executions() const { DARABONBA_PTR_GET_CONST(executions_, vector<ListExecutionsResponseBodyExecutions>) };
    inline vector<ListExecutionsResponseBodyExecutions> executions() { DARABONBA_PTR_GET(executions_, vector<ListExecutionsResponseBodyExecutions>) };
    inline ListExecutionsResponseBody& setExecutions(const vector<ListExecutionsResponseBodyExecutions> & executions) { DARABONBA_PTR_SET_VALUE(executions_, executions) };
    inline ListExecutionsResponseBody& setExecutions(vector<ListExecutionsResponseBodyExecutions> && executions) { DARABONBA_PTR_SET_RVALUE(executions_, executions) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExecutionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExecutionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExecutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListExecutionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the task executions.
    std::shared_ptr<vector<ListExecutionsResponseBodyExecutions>> executions_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used to retrieve the next page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of the executions.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
