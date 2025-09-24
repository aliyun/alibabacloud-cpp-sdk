// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySavingsPlansInstanceResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySavingsPlansInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySavingsPlansInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySavingsPlansInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QuerySavingsPlansInstanceResponseBodyData() = default ;
    QuerySavingsPlansInstanceResponseBodyData(const QuerySavingsPlansInstanceResponseBodyData &) = default ;
    QuerySavingsPlansInstanceResponseBodyData(QuerySavingsPlansInstanceResponseBodyData &&) = default ;
    QuerySavingsPlansInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySavingsPlansInstanceResponseBodyData() = default ;
    QuerySavingsPlansInstanceResponseBodyData& operator=(const QuerySavingsPlansInstanceResponseBodyData &) = default ;
    QuerySavingsPlansInstanceResponseBodyData& operator=(QuerySavingsPlansInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::QuerySavingsPlansInstanceResponseBodyDataItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::QuerySavingsPlansInstanceResponseBodyDataItems>) };
    inline vector<Models::QuerySavingsPlansInstanceResponseBodyDataItems> items() { DARABONBA_PTR_GET(items_, vector<Models::QuerySavingsPlansInstanceResponseBodyDataItems>) };
    inline QuerySavingsPlansInstanceResponseBodyData& setItems(const vector<Models::QuerySavingsPlansInstanceResponseBodyDataItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline QuerySavingsPlansInstanceResponseBodyData& setItems(vector<Models::QuerySavingsPlansInstanceResponseBodyDataItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QuerySavingsPlansInstanceResponseBodyData& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QuerySavingsPlansInstanceResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QuerySavingsPlansInstanceResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details about the instances.
    std::shared_ptr<vector<Models::QuerySavingsPlansInstanceResponseBodyDataItems>> items_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
