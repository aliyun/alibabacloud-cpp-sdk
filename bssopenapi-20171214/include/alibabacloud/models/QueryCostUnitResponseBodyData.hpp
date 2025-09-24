// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOSTUNITRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOSTUNITRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryCostUnitResponseBodyDataCostUnitDtoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryCostUnitResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCostUnitResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CostUnitDtoList, costUnitDtoList_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCostUnitResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CostUnitDtoList, costUnitDtoList_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryCostUnitResponseBodyData() = default ;
    QueryCostUnitResponseBodyData(const QueryCostUnitResponseBodyData &) = default ;
    QueryCostUnitResponseBodyData(QueryCostUnitResponseBodyData &&) = default ;
    QueryCostUnitResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCostUnitResponseBodyData() = default ;
    QueryCostUnitResponseBodyData& operator=(const QueryCostUnitResponseBodyData &) = default ;
    QueryCostUnitResponseBodyData& operator=(QueryCostUnitResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costUnitDtoList_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // costUnitDtoList Field Functions 
    bool hasCostUnitDtoList() const { return this->costUnitDtoList_ != nullptr;};
    void deleteCostUnitDtoList() { this->costUnitDtoList_ = nullptr;};
    inline const vector<Models::QueryCostUnitResponseBodyDataCostUnitDtoList> & costUnitDtoList() const { DARABONBA_PTR_GET_CONST(costUnitDtoList_, vector<Models::QueryCostUnitResponseBodyDataCostUnitDtoList>) };
    inline vector<Models::QueryCostUnitResponseBodyDataCostUnitDtoList> costUnitDtoList() { DARABONBA_PTR_GET(costUnitDtoList_, vector<Models::QueryCostUnitResponseBodyDataCostUnitDtoList>) };
    inline QueryCostUnitResponseBodyData& setCostUnitDtoList(const vector<Models::QueryCostUnitResponseBodyDataCostUnitDtoList> & costUnitDtoList) { DARABONBA_PTR_SET_VALUE(costUnitDtoList_, costUnitDtoList) };
    inline QueryCostUnitResponseBodyData& setCostUnitDtoList(vector<Models::QueryCostUnitResponseBodyDataCostUnitDtoList> && costUnitDtoList) { DARABONBA_PTR_SET_RVALUE(costUnitDtoList_, costUnitDtoList) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryCostUnitResponseBodyData& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryCostUnitResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryCostUnitResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cost centers.
    std::shared_ptr<vector<Models::QueryCostUnitResponseBodyDataCostUnitDtoList>> costUnitDtoList_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
