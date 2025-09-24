// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRELATIONLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYRELATIONLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryRelationListResponseBodyDataFinancialRelationInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryRelationListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRelationListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FinancialRelationInfoList, financialRelationInfoList_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRelationListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FinancialRelationInfoList, financialRelationInfoList_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryRelationListResponseBodyData() = default ;
    QueryRelationListResponseBodyData(const QueryRelationListResponseBodyData &) = default ;
    QueryRelationListResponseBodyData(QueryRelationListResponseBodyData &&) = default ;
    QueryRelationListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRelationListResponseBodyData() = default ;
    QueryRelationListResponseBodyData& operator=(const QueryRelationListResponseBodyData &) = default ;
    QueryRelationListResponseBodyData& operator=(QueryRelationListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->financialRelationInfoList_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // financialRelationInfoList Field Functions 
    bool hasFinancialRelationInfoList() const { return this->financialRelationInfoList_ != nullptr;};
    void deleteFinancialRelationInfoList() { this->financialRelationInfoList_ = nullptr;};
    inline const vector<Models::QueryRelationListResponseBodyDataFinancialRelationInfoList> & financialRelationInfoList() const { DARABONBA_PTR_GET_CONST(financialRelationInfoList_, vector<Models::QueryRelationListResponseBodyDataFinancialRelationInfoList>) };
    inline vector<Models::QueryRelationListResponseBodyDataFinancialRelationInfoList> financialRelationInfoList() { DARABONBA_PTR_GET(financialRelationInfoList_, vector<Models::QueryRelationListResponseBodyDataFinancialRelationInfoList>) };
    inline QueryRelationListResponseBodyData& setFinancialRelationInfoList(const vector<Models::QueryRelationListResponseBodyDataFinancialRelationInfoList> & financialRelationInfoList) { DARABONBA_PTR_SET_VALUE(financialRelationInfoList_, financialRelationInfoList) };
    inline QueryRelationListResponseBodyData& setFinancialRelationInfoList(vector<Models::QueryRelationListResponseBodyDataFinancialRelationInfoList> && financialRelationInfoList) { DARABONBA_PTR_SET_RVALUE(financialRelationInfoList_, financialRelationInfoList) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryRelationListResponseBodyData& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryRelationListResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryRelationListResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The relationships.
    std::shared_ptr<vector<Models::QueryRelationListResponseBodyDataFinancialRelationInfoList>> financialRelationInfoList_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
