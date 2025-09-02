// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLELISTBYCATEGORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLELISTBYCATEGORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableListByCategoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableListByCategoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TableGuidList, tableGuidList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableListByCategoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TableGuidList, tableGuidList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetMetaTableListByCategoryResponseBodyData() = default ;
    GetMetaTableListByCategoryResponseBodyData(const GetMetaTableListByCategoryResponseBodyData &) = default ;
    GetMetaTableListByCategoryResponseBodyData(GetMetaTableListByCategoryResponseBodyData &&) = default ;
    GetMetaTableListByCategoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableListByCategoryResponseBodyData() = default ;
    GetMetaTableListByCategoryResponseBodyData& operator=(const GetMetaTableListByCategoryResponseBodyData &) = default ;
    GetMetaTableListByCategoryResponseBodyData& operator=(GetMetaTableListByCategoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->tableGuidList_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetMetaTableListByCategoryResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetMetaTableListByCategoryResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tableGuidList Field Functions 
    bool hasTableGuidList() const { return this->tableGuidList_ != nullptr;};
    void deleteTableGuidList() { this->tableGuidList_ = nullptr;};
    inline const vector<string> & tableGuidList() const { DARABONBA_PTR_GET_CONST(tableGuidList_, vector<string>) };
    inline vector<string> tableGuidList() { DARABONBA_PTR_GET(tableGuidList_, vector<string>) };
    inline GetMetaTableListByCategoryResponseBodyData& setTableGuidList(const vector<string> & tableGuidList) { DARABONBA_PTR_SET_VALUE(tableGuidList_, tableGuidList) };
    inline GetMetaTableListByCategoryResponseBodyData& setTableGuidList(vector<string> && tableGuidList) { DARABONBA_PTR_SET_RVALUE(tableGuidList_, tableGuidList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetMetaTableListByCategoryResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The returned result.
    std::shared_ptr<vector<string>> tableGuidList_ = nullptr;
    // The total number of metatables.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
