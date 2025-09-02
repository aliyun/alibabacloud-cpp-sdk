// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLECOLUMNRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLECOLUMNRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMetaTableColumnResponseBodyDataColumnList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableColumnResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableColumnResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableColumnResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetMetaTableColumnResponseBodyData() = default ;
    GetMetaTableColumnResponseBodyData(const GetMetaTableColumnResponseBodyData &) = default ;
    GetMetaTableColumnResponseBodyData(GetMetaTableColumnResponseBodyData &&) = default ;
    GetMetaTableColumnResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableColumnResponseBodyData() = default ;
    GetMetaTableColumnResponseBodyData& operator=(const GetMetaTableColumnResponseBodyData &) = default ;
    GetMetaTableColumnResponseBodyData& operator=(GetMetaTableColumnResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnList_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // columnList Field Functions 
    bool hasColumnList() const { return this->columnList_ != nullptr;};
    void deleteColumnList() { this->columnList_ = nullptr;};
    inline const vector<Models::GetMetaTableColumnResponseBodyDataColumnList> & columnList() const { DARABONBA_PTR_GET_CONST(columnList_, vector<Models::GetMetaTableColumnResponseBodyDataColumnList>) };
    inline vector<Models::GetMetaTableColumnResponseBodyDataColumnList> columnList() { DARABONBA_PTR_GET(columnList_, vector<Models::GetMetaTableColumnResponseBodyDataColumnList>) };
    inline GetMetaTableColumnResponseBodyData& setColumnList(const vector<Models::GetMetaTableColumnResponseBodyDataColumnList> & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
    inline GetMetaTableColumnResponseBodyData& setColumnList(vector<Models::GetMetaTableColumnResponseBodyDataColumnList> && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline GetMetaTableColumnResponseBodyData& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetMetaTableColumnResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetMetaTableColumnResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about fields.
    std::shared_ptr<vector<Models::GetMetaTableColumnResponseBodyDataColumnList>> columnList_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of fields.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
