// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLOCATIONDATECLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYLOCATIONDATECLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LocationDateCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class QueryLocationDateClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLocationDateClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LocationDateClusters, locationDateClusters_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLocationDateClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LocationDateClusters, locationDateClusters_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryLocationDateClustersResponseBody() = default ;
    QueryLocationDateClustersResponseBody(const QueryLocationDateClustersResponseBody &) = default ;
    QueryLocationDateClustersResponseBody(QueryLocationDateClustersResponseBody &&) = default ;
    QueryLocationDateClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLocationDateClustersResponseBody() = default ;
    QueryLocationDateClustersResponseBody& operator=(const QueryLocationDateClustersResponseBody &) = default ;
    QueryLocationDateClustersResponseBody& operator=(QueryLocationDateClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->locationDateClusters_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // locationDateClusters Field Functions 
    bool hasLocationDateClusters() const { return this->locationDateClusters_ != nullptr;};
    void deleteLocationDateClusters() { this->locationDateClusters_ = nullptr;};
    inline const vector<LocationDateCluster> & locationDateClusters() const { DARABONBA_PTR_GET_CONST(locationDateClusters_, vector<LocationDateCluster>) };
    inline vector<LocationDateCluster> locationDateClusters() { DARABONBA_PTR_GET(locationDateClusters_, vector<LocationDateCluster>) };
    inline QueryLocationDateClustersResponseBody& setLocationDateClusters(const vector<LocationDateCluster> & locationDateClusters) { DARABONBA_PTR_SET_VALUE(locationDateClusters_, locationDateClusters) };
    inline QueryLocationDateClustersResponseBody& setLocationDateClusters(vector<LocationDateCluster> && locationDateClusters) { DARABONBA_PTR_SET_RVALUE(locationDateClusters_, locationDateClusters) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryLocationDateClustersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryLocationDateClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of spatiotemporal clusters.
    std::shared_ptr<vector<LocationDateCluster>> locationDateClusters_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
