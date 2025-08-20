// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLECOLUMNSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTABLECOLUMNSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TableDetailModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetTableColumnsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableColumnsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Table, table_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableColumnsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Table, table_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetTableColumnsResponseBodyData() = default ;
    GetTableColumnsResponseBodyData(const GetTableColumnsResponseBodyData &) = default ;
    GetTableColumnsResponseBodyData(GetTableColumnsResponseBodyData &&) = default ;
    GetTableColumnsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableColumnsResponseBodyData() = default ;
    GetTableColumnsResponseBodyData& operator=(const GetTableColumnsResponseBodyData &) = default ;
    GetTableColumnsResponseBodyData& operator=(GetTableColumnsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->table_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetTableColumnsResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetTableColumnsResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline const Models::TableDetailModel & table() const { DARABONBA_PTR_GET_CONST(table_, Models::TableDetailModel) };
    inline Models::TableDetailModel table() { DARABONBA_PTR_GET(table_, Models::TableDetailModel) };
    inline GetTableColumnsResponseBodyData& setTable(const Models::TableDetailModel & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
    inline GetTableColumnsResponseBodyData& setTable(Models::TableDetailModel && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetTableColumnsResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The information about the table.
    std::shared_ptr<Models::TableDetailModel> table_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
