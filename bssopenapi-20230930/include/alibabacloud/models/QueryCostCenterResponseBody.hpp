// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOSTCENTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOSTCENTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryCostCenterResponseBodyCostCenterDtoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class QueryCostCenterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCostCenterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterDtoList, costCenterDtoList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCostCenterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterDtoList, costCenterDtoList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryCostCenterResponseBody() = default ;
    QueryCostCenterResponseBody(const QueryCostCenterResponseBody &) = default ;
    QueryCostCenterResponseBody(QueryCostCenterResponseBody &&) = default ;
    QueryCostCenterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCostCenterResponseBody() = default ;
    QueryCostCenterResponseBody& operator=(const QueryCostCenterResponseBody &) = default ;
    QueryCostCenterResponseBody& operator=(QueryCostCenterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterDtoList_ != nullptr
        && this->currentPage_ != nullptr && this->metadata_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // costCenterDtoList Field Functions 
    bool hasCostCenterDtoList() const { return this->costCenterDtoList_ != nullptr;};
    void deleteCostCenterDtoList() { this->costCenterDtoList_ = nullptr;};
    inline const vector<QueryCostCenterResponseBodyCostCenterDtoList> & costCenterDtoList() const { DARABONBA_PTR_GET_CONST(costCenterDtoList_, vector<QueryCostCenterResponseBodyCostCenterDtoList>) };
    inline vector<QueryCostCenterResponseBodyCostCenterDtoList> costCenterDtoList() { DARABONBA_PTR_GET(costCenterDtoList_, vector<QueryCostCenterResponseBodyCostCenterDtoList>) };
    inline QueryCostCenterResponseBody& setCostCenterDtoList(const vector<QueryCostCenterResponseBodyCostCenterDtoList> & costCenterDtoList) { DARABONBA_PTR_SET_VALUE(costCenterDtoList_, costCenterDtoList) };
    inline QueryCostCenterResponseBody& setCostCenterDtoList(vector<QueryCostCenterResponseBodyCostCenterDtoList> && costCenterDtoList) { DARABONBA_PTR_SET_RVALUE(costCenterDtoList_, costCenterDtoList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryCostCenterResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline QueryCostCenterResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline QueryCostCenterResponseBody& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryCostCenterResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCostCenterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryCostCenterResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<QueryCostCenterResponseBodyCostCenterDtoList>> costCenterDtoList_ = nullptr;
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    Darabonba::Json metadata_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
