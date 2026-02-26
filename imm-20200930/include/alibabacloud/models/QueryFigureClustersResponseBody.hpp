// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFIGURECLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFIGURECLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FigureCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class QueryFigureClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFigureClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FigureClusters, figureClusters_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFigureClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FigureClusters, figureClusters_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryFigureClustersResponseBody() = default ;
    QueryFigureClustersResponseBody(const QueryFigureClustersResponseBody &) = default ;
    QueryFigureClustersResponseBody(QueryFigureClustersResponseBody &&) = default ;
    QueryFigureClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFigureClustersResponseBody() = default ;
    QueryFigureClustersResponseBody& operator=(const QueryFigureClustersResponseBody &) = default ;
    QueryFigureClustersResponseBody& operator=(QueryFigureClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->figureClusters_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // figureClusters Field Functions 
    bool hasFigureClusters() const { return this->figureClusters_ != nullptr;};
    void deleteFigureClusters() { this->figureClusters_ = nullptr;};
    inline const vector<FigureCluster> & getFigureClusters() const { DARABONBA_PTR_GET_CONST(figureClusters_, vector<FigureCluster>) };
    inline vector<FigureCluster> getFigureClusters() { DARABONBA_PTR_GET(figureClusters_, vector<FigureCluster>) };
    inline QueryFigureClustersResponseBody& setFigureClusters(const vector<FigureCluster> & figureClusters) { DARABONBA_PTR_SET_VALUE(figureClusters_, figureClusters) };
    inline QueryFigureClustersResponseBody& setFigureClusters(vector<FigureCluster> && figureClusters) { DARABONBA_PTR_SET_RVALUE(figureClusters_, figureClusters) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryFigureClustersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryFigureClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QueryFigureClustersResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The face groups.
    shared_ptr<vector<FigureCluster>> figureClusters_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of face groups that matches the current query conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
