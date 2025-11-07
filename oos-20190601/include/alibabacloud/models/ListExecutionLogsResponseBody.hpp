// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTIONLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTIONLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExecutionLogsResponseBodyExecutionLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListExecutionLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutionLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionLogs, executionLogs_);
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutionLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionLogs, executionLogs_);
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListExecutionLogsResponseBody() = default ;
    ListExecutionLogsResponseBody(const ListExecutionLogsResponseBody &) = default ;
    ListExecutionLogsResponseBody(ListExecutionLogsResponseBody &&) = default ;
    ListExecutionLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutionLogsResponseBody() = default ;
    ListExecutionLogsResponseBody& operator=(const ListExecutionLogsResponseBody &) = default ;
    ListExecutionLogsResponseBody& operator=(ListExecutionLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executionLogs_ == nullptr
        && return this->isTruncated_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // executionLogs Field Functions 
    bool hasExecutionLogs() const { return this->executionLogs_ != nullptr;};
    void deleteExecutionLogs() { this->executionLogs_ = nullptr;};
    inline const vector<ListExecutionLogsResponseBodyExecutionLogs> & executionLogs() const { DARABONBA_PTR_GET_CONST(executionLogs_, vector<ListExecutionLogsResponseBodyExecutionLogs>) };
    inline vector<ListExecutionLogsResponseBodyExecutionLogs> executionLogs() { DARABONBA_PTR_GET(executionLogs_, vector<ListExecutionLogsResponseBodyExecutionLogs>) };
    inline ListExecutionLogsResponseBody& setExecutionLogs(const vector<ListExecutionLogsResponseBodyExecutionLogs> & executionLogs) { DARABONBA_PTR_SET_VALUE(executionLogs_, executionLogs) };
    inline ListExecutionLogsResponseBody& setExecutionLogs(vector<ListExecutionLogsResponseBodyExecutionLogs> && executionLogs) { DARABONBA_PTR_SET_RVALUE(executionLogs_, executionLogs) };


    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool isTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListExecutionLogsResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExecutionLogsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExecutionLogsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExecutionLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The logs of the execution.
    std::shared_ptr<vector<ListExecutionLogsResponseBodyExecutionLogs>> executionLogs_ = nullptr;
    // Indicates whether the log is truncated.
    std::shared_ptr<bool> isTruncated_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
