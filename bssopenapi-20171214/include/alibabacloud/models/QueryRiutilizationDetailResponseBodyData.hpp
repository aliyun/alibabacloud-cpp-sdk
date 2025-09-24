// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRIUTILIZATIONDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYRIUTILIZATIONDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryRIUtilizationDetailResponseBodyDataDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryRIUtilizationDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRIUtilizationDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DetailList, detailList_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRIUtilizationDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailList, detailList_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryRIUtilizationDetailResponseBodyData() = default ;
    QueryRIUtilizationDetailResponseBodyData(const QueryRIUtilizationDetailResponseBodyData &) = default ;
    QueryRIUtilizationDetailResponseBodyData(QueryRIUtilizationDetailResponseBodyData &&) = default ;
    QueryRIUtilizationDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRIUtilizationDetailResponseBodyData() = default ;
    QueryRIUtilizationDetailResponseBodyData& operator=(const QueryRIUtilizationDetailResponseBodyData &) = default ;
    QueryRIUtilizationDetailResponseBodyData& operator=(QueryRIUtilizationDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detailList_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // detailList Field Functions 
    bool hasDetailList() const { return this->detailList_ != nullptr;};
    void deleteDetailList() { this->detailList_ = nullptr;};
    inline const Models::QueryRIUtilizationDetailResponseBodyDataDetailList & detailList() const { DARABONBA_PTR_GET_CONST(detailList_, Models::QueryRIUtilizationDetailResponseBodyDataDetailList) };
    inline Models::QueryRIUtilizationDetailResponseBodyDataDetailList detailList() { DARABONBA_PTR_GET(detailList_, Models::QueryRIUtilizationDetailResponseBodyDataDetailList) };
    inline QueryRIUtilizationDetailResponseBodyData& setDetailList(const Models::QueryRIUtilizationDetailResponseBodyDataDetailList & detailList) { DARABONBA_PTR_SET_VALUE(detailList_, detailList) };
    inline QueryRIUtilizationDetailResponseBodyData& setDetailList(Models::QueryRIUtilizationDetailResponseBodyDataDetailList && detailList) { DARABONBA_PTR_SET_RVALUE(detailList_, detailList) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline QueryRIUtilizationDetailResponseBodyData& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryRIUtilizationDetailResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QueryRIUtilizationDetailResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The usage details of the RI.
    std::shared_ptr<Models::QueryRIUtilizationDetailResponseBodyDataDetailList> detailList_ = nullptr;
    // The number of the returned page.
    std::shared_ptr<int64_t> pageNum_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
