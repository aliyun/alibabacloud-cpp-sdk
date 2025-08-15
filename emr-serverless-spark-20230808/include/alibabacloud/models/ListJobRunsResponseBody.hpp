// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRUNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRUNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobRunsResponseBodyJobRuns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListJobRunsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobRunsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(jobRuns, jobRuns_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobRunsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(jobRuns, jobRuns_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListJobRunsResponseBody() = default ;
    ListJobRunsResponseBody(const ListJobRunsResponseBody &) = default ;
    ListJobRunsResponseBody(ListJobRunsResponseBody &&) = default ;
    ListJobRunsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobRunsResponseBody() = default ;
    ListJobRunsResponseBody& operator=(const ListJobRunsResponseBody &) = default ;
    ListJobRunsResponseBody& operator=(ListJobRunsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobRuns_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // jobRuns Field Functions 
    bool hasJobRuns() const { return this->jobRuns_ != nullptr;};
    void deleteJobRuns() { this->jobRuns_ = nullptr;};
    inline const vector<ListJobRunsResponseBodyJobRuns> & jobRuns() const { DARABONBA_PTR_GET_CONST(jobRuns_, vector<ListJobRunsResponseBodyJobRuns>) };
    inline vector<ListJobRunsResponseBodyJobRuns> jobRuns() { DARABONBA_PTR_GET(jobRuns_, vector<ListJobRunsResponseBodyJobRuns>) };
    inline ListJobRunsResponseBody& setJobRuns(const vector<ListJobRunsResponseBodyJobRuns> & jobRuns) { DARABONBA_PTR_SET_VALUE(jobRuns_, jobRuns) };
    inline ListJobRunsResponseBody& setJobRuns(vector<ListJobRunsResponseBodyJobRuns> && jobRuns) { DARABONBA_PTR_SET_RVALUE(jobRuns_, jobRuns) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListJobRunsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListJobRunsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobRunsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListJobRunsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The Spark jobs.
    std::shared_ptr<vector<ListJobRunsResponseBodyJobRuns>> jobRuns_ = nullptr;
    // The maximum number of entries returned.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
