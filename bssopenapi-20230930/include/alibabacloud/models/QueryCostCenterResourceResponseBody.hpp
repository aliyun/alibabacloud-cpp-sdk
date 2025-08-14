// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOSTCENTERRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOSTCENTERRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryCostCenterResourceResponseBodyCostCenterResourceDtoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class QueryCostCenterResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCostCenterResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterResourceDtoList, costCenterResourceDtoList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCostCenterResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterResourceDtoList, costCenterResourceDtoList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryCostCenterResourceResponseBody() = default ;
    QueryCostCenterResourceResponseBody(const QueryCostCenterResourceResponseBody &) = default ;
    QueryCostCenterResourceResponseBody(QueryCostCenterResourceResponseBody &&) = default ;
    QueryCostCenterResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCostCenterResourceResponseBody() = default ;
    QueryCostCenterResourceResponseBody& operator=(const QueryCostCenterResourceResponseBody &) = default ;
    QueryCostCenterResourceResponseBody& operator=(QueryCostCenterResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterResourceDtoList_ != nullptr
        && this->maxResults_ != nullptr && this->metadata_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // costCenterResourceDtoList Field Functions 
    bool hasCostCenterResourceDtoList() const { return this->costCenterResourceDtoList_ != nullptr;};
    void deleteCostCenterResourceDtoList() { this->costCenterResourceDtoList_ = nullptr;};
    inline const vector<QueryCostCenterResourceResponseBodyCostCenterResourceDtoList> & costCenterResourceDtoList() const { DARABONBA_PTR_GET_CONST(costCenterResourceDtoList_, vector<QueryCostCenterResourceResponseBodyCostCenterResourceDtoList>) };
    inline vector<QueryCostCenterResourceResponseBodyCostCenterResourceDtoList> costCenterResourceDtoList() { DARABONBA_PTR_GET(costCenterResourceDtoList_, vector<QueryCostCenterResourceResponseBodyCostCenterResourceDtoList>) };
    inline QueryCostCenterResourceResponseBody& setCostCenterResourceDtoList(const vector<QueryCostCenterResourceResponseBodyCostCenterResourceDtoList> & costCenterResourceDtoList) { DARABONBA_PTR_SET_VALUE(costCenterResourceDtoList_, costCenterResourceDtoList) };
    inline QueryCostCenterResourceResponseBody& setCostCenterResourceDtoList(vector<QueryCostCenterResourceResponseBodyCostCenterResourceDtoList> && costCenterResourceDtoList) { DARABONBA_PTR_SET_RVALUE(costCenterResourceDtoList_, costCenterResourceDtoList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QueryCostCenterResourceResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline QueryCostCenterResourceResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline QueryCostCenterResourceResponseBody& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryCostCenterResourceResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCostCenterResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryCostCenterResourceResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<QueryCostCenterResourceResponseBodyCostCenterResourceDtoList>> costCenterResourceDtoList_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    Darabonba::Json metadata_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
