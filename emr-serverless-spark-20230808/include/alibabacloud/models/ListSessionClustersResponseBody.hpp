// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSESSIONCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSESSIONCLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSessionClustersResponseBodySessionClusters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListSessionClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSessionClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessionClusters, sessionClusters_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSessionClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessionClusters, sessionClusters_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListSessionClustersResponseBody() = default ;
    ListSessionClustersResponseBody(const ListSessionClustersResponseBody &) = default ;
    ListSessionClustersResponseBody(ListSessionClustersResponseBody &&) = default ;
    ListSessionClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSessionClustersResponseBody() = default ;
    ListSessionClustersResponseBody& operator=(const ListSessionClustersResponseBody &) = default ;
    ListSessionClustersResponseBody& operator=(ListSessionClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->sessionClusters_ != nullptr && this->totalCount_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSessionClustersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSessionClustersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSessionClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionClusters Field Functions 
    bool hasSessionClusters() const { return this->sessionClusters_ != nullptr;};
    void deleteSessionClusters() { this->sessionClusters_ = nullptr;};
    inline const vector<ListSessionClustersResponseBodySessionClusters> & sessionClusters() const { DARABONBA_PTR_GET_CONST(sessionClusters_, vector<ListSessionClustersResponseBodySessionClusters>) };
    inline vector<ListSessionClustersResponseBodySessionClusters> sessionClusters() { DARABONBA_PTR_GET(sessionClusters_, vector<ListSessionClustersResponseBodySessionClusters>) };
    inline ListSessionClustersResponseBody& setSessionClusters(const vector<ListSessionClustersResponseBodySessionClusters> & sessionClusters) { DARABONBA_PTR_SET_VALUE(sessionClusters_, sessionClusters) };
    inline ListSessionClustersResponseBody& setSessionClusters(vector<ListSessionClustersResponseBodySessionClusters> && sessionClusters) { DARABONBA_PTR_SET_RVALUE(sessionClusters_, sessionClusters) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSessionClustersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The sessions.
    std::shared_ptr<vector<ListSessionClustersResponseBodySessionClusters>> sessionClusters_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
