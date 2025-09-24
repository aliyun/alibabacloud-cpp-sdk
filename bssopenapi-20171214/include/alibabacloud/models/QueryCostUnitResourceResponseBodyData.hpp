// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOSTUNITRESOURCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOSTUNITRESOURCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryCostUnitResourceResponseBodyDataCostUnit.hpp>
#include <alibabacloud/models/QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo.hpp>
#include <vector>
#include <alibabacloud/models/QueryCostUnitResourceResponseBodyDataResourceInstanceDtoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryCostUnitResourceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCostUnitResourceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CostUnit, costUnit_);
      DARABONBA_PTR_TO_JSON(CostUnitStatisInfo, costUnitStatisInfo_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceDtoList, resourceInstanceDtoList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCostUnitResourceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CostUnit, costUnit_);
      DARABONBA_PTR_FROM_JSON(CostUnitStatisInfo, costUnitStatisInfo_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceDtoList, resourceInstanceDtoList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryCostUnitResourceResponseBodyData() = default ;
    QueryCostUnitResourceResponseBodyData(const QueryCostUnitResourceResponseBodyData &) = default ;
    QueryCostUnitResourceResponseBodyData(QueryCostUnitResourceResponseBodyData &&) = default ;
    QueryCostUnitResourceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCostUnitResourceResponseBodyData() = default ;
    QueryCostUnitResourceResponseBodyData& operator=(const QueryCostUnitResourceResponseBodyData &) = default ;
    QueryCostUnitResourceResponseBodyData& operator=(QueryCostUnitResourceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costUnit_ != nullptr
        && this->costUnitStatisInfo_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->resourceInstanceDtoList_ != nullptr && this->totalCount_ != nullptr; };
    // costUnit Field Functions 
    bool hasCostUnit() const { return this->costUnit_ != nullptr;};
    void deleteCostUnit() { this->costUnit_ = nullptr;};
    inline const Models::QueryCostUnitResourceResponseBodyDataCostUnit & costUnit() const { DARABONBA_PTR_GET_CONST(costUnit_, Models::QueryCostUnitResourceResponseBodyDataCostUnit) };
    inline Models::QueryCostUnitResourceResponseBodyDataCostUnit costUnit() { DARABONBA_PTR_GET(costUnit_, Models::QueryCostUnitResourceResponseBodyDataCostUnit) };
    inline QueryCostUnitResourceResponseBodyData& setCostUnit(const Models::QueryCostUnitResourceResponseBodyDataCostUnit & costUnit) { DARABONBA_PTR_SET_VALUE(costUnit_, costUnit) };
    inline QueryCostUnitResourceResponseBodyData& setCostUnit(Models::QueryCostUnitResourceResponseBodyDataCostUnit && costUnit) { DARABONBA_PTR_SET_RVALUE(costUnit_, costUnit) };


    // costUnitStatisInfo Field Functions 
    bool hasCostUnitStatisInfo() const { return this->costUnitStatisInfo_ != nullptr;};
    void deleteCostUnitStatisInfo() { this->costUnitStatisInfo_ = nullptr;};
    inline const Models::QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo & costUnitStatisInfo() const { DARABONBA_PTR_GET_CONST(costUnitStatisInfo_, Models::QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo) };
    inline Models::QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo costUnitStatisInfo() { DARABONBA_PTR_GET(costUnitStatisInfo_, Models::QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo) };
    inline QueryCostUnitResourceResponseBodyData& setCostUnitStatisInfo(const Models::QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo & costUnitStatisInfo) { DARABONBA_PTR_SET_VALUE(costUnitStatisInfo_, costUnitStatisInfo) };
    inline QueryCostUnitResourceResponseBodyData& setCostUnitStatisInfo(Models::QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo && costUnitStatisInfo) { DARABONBA_PTR_SET_RVALUE(costUnitStatisInfo_, costUnitStatisInfo) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryCostUnitResourceResponseBodyData& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryCostUnitResourceResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceInstanceDtoList Field Functions 
    bool hasResourceInstanceDtoList() const { return this->resourceInstanceDtoList_ != nullptr;};
    void deleteResourceInstanceDtoList() { this->resourceInstanceDtoList_ = nullptr;};
    inline const vector<Models::QueryCostUnitResourceResponseBodyDataResourceInstanceDtoList> & resourceInstanceDtoList() const { DARABONBA_PTR_GET_CONST(resourceInstanceDtoList_, vector<Models::QueryCostUnitResourceResponseBodyDataResourceInstanceDtoList>) };
    inline vector<Models::QueryCostUnitResourceResponseBodyDataResourceInstanceDtoList> resourceInstanceDtoList() { DARABONBA_PTR_GET(resourceInstanceDtoList_, vector<Models::QueryCostUnitResourceResponseBodyDataResourceInstanceDtoList>) };
    inline QueryCostUnitResourceResponseBodyData& setResourceInstanceDtoList(const vector<Models::QueryCostUnitResourceResponseBodyDataResourceInstanceDtoList> & resourceInstanceDtoList) { DARABONBA_PTR_SET_VALUE(resourceInstanceDtoList_, resourceInstanceDtoList) };
    inline QueryCostUnitResourceResponseBodyData& setResourceInstanceDtoList(vector<Models::QueryCostUnitResourceResponseBodyDataResourceInstanceDtoList> && resourceInstanceDtoList) { DARABONBA_PTR_SET_RVALUE(resourceInstanceDtoList_, resourceInstanceDtoList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryCostUnitResourceResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the cost center.
    std::shared_ptr<Models::QueryCostUnitResourceResponseBodyDataCostUnit> costUnit_ = nullptr;
    // The statistical information about the cost center.
    std::shared_ptr<Models::QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo> costUnitStatisInfo_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The resource instances.
    std::shared_ptr<vector<Models::QueryCostUnitResourceResponseBodyDataResourceInstanceDtoList>> resourceInstanceDtoList_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
