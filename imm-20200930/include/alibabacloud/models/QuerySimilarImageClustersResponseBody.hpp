// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSIMILARIMAGECLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSIMILARIMAGECLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SimilarImageCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class QuerySimilarImageClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySimilarImageClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SimilarImageClusters, similarImageClusters_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySimilarImageClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SimilarImageClusters, similarImageClusters_);
    };
    QuerySimilarImageClustersResponseBody() = default ;
    QuerySimilarImageClustersResponseBody(const QuerySimilarImageClustersResponseBody &) = default ;
    QuerySimilarImageClustersResponseBody(QuerySimilarImageClustersResponseBody &&) = default ;
    QuerySimilarImageClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySimilarImageClustersResponseBody() = default ;
    QuerySimilarImageClustersResponseBody& operator=(const QuerySimilarImageClustersResponseBody &) = default ;
    QuerySimilarImageClustersResponseBody& operator=(QuerySimilarImageClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->requestId_ != nullptr && this->similarImageClusters_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QuerySimilarImageClustersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySimilarImageClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // similarImageClusters Field Functions 
    bool hasSimilarImageClusters() const { return this->similarImageClusters_ != nullptr;};
    void deleteSimilarImageClusters() { this->similarImageClusters_ = nullptr;};
    inline const vector<SimilarImageCluster> & similarImageClusters() const { DARABONBA_PTR_GET_CONST(similarImageClusters_, vector<SimilarImageCluster>) };
    inline vector<SimilarImageCluster> similarImageClusters() { DARABONBA_PTR_GET(similarImageClusters_, vector<SimilarImageCluster>) };
    inline QuerySimilarImageClustersResponseBody& setSimilarImageClusters(const vector<SimilarImageCluster> & similarImageClusters) { DARABONBA_PTR_SET_VALUE(similarImageClusters_, similarImageClusters) };
    inline QuerySimilarImageClustersResponseBody& setSimilarImageClusters(vector<SimilarImageCluster> && similarImageClusters) { DARABONBA_PTR_SET_RVALUE(similarImageClusters_, similarImageClusters) };


  protected:
    // The pagination token. If the total number of clusters is greater than the value of MaxResults, this token can be used to retrieve the next page. This parameter has a value only if not all the clusters that meet the condition are returned.
    // 
    // Pass this value as the value of NextToken in the next query to return the subsequent clusters.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of similar image clusters.
    std::shared_ptr<vector<SimilarImageCluster>> similarImageClusters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
