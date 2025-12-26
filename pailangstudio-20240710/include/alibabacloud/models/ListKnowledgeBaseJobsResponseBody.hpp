// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASEJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASEJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/KnowledgeBaseJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class ListKnowledgeBaseJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeBaseJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeBaseJobs, knowledgeBaseJobs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeBaseJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseJobs, knowledgeBaseJobs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListKnowledgeBaseJobsResponseBody() = default ;
    ListKnowledgeBaseJobsResponseBody(const ListKnowledgeBaseJobsResponseBody &) = default ;
    ListKnowledgeBaseJobsResponseBody(ListKnowledgeBaseJobsResponseBody &&) = default ;
    ListKnowledgeBaseJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKnowledgeBaseJobsResponseBody() = default ;
    ListKnowledgeBaseJobsResponseBody& operator=(const ListKnowledgeBaseJobsResponseBody &) = default ;
    ListKnowledgeBaseJobsResponseBody& operator=(ListKnowledgeBaseJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->knowledgeBaseJobs_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // knowledgeBaseJobs Field Functions 
    bool hasKnowledgeBaseJobs() const { return this->knowledgeBaseJobs_ != nullptr;};
    void deleteKnowledgeBaseJobs() { this->knowledgeBaseJobs_ = nullptr;};
    inline const vector<KnowledgeBaseJob> & knowledgeBaseJobs() const { DARABONBA_PTR_GET_CONST(knowledgeBaseJobs_, vector<KnowledgeBaseJob>) };
    inline vector<KnowledgeBaseJob> knowledgeBaseJobs() { DARABONBA_PTR_GET(knowledgeBaseJobs_, vector<KnowledgeBaseJob>) };
    inline ListKnowledgeBaseJobsResponseBody& setKnowledgeBaseJobs(const vector<KnowledgeBaseJob> & knowledgeBaseJobs) { DARABONBA_PTR_SET_VALUE(knowledgeBaseJobs_, knowledgeBaseJobs) };
    inline ListKnowledgeBaseJobsResponseBody& setKnowledgeBaseJobs(vector<KnowledgeBaseJob> && knowledgeBaseJobs) { DARABONBA_PTR_SET_RVALUE(knowledgeBaseJobs_, knowledgeBaseJobs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListKnowledgeBaseJobsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListKnowledgeBaseJobsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKnowledgeBaseJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListKnowledgeBaseJobsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<KnowledgeBaseJob>> knowledgeBaseJobs_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
