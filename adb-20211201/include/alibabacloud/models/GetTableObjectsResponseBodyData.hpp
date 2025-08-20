// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEOBJECTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEOBJECTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TableSummaryModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetTableObjectsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableObjectsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TableSummaryModels, tableSummaryModels_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableObjectsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TableSummaryModels, tableSummaryModels_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetTableObjectsResponseBodyData() = default ;
    GetTableObjectsResponseBodyData(const GetTableObjectsResponseBodyData &) = default ;
    GetTableObjectsResponseBodyData(GetTableObjectsResponseBodyData &&) = default ;
    GetTableObjectsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableObjectsResponseBodyData() = default ;
    GetTableObjectsResponseBodyData& operator=(const GetTableObjectsResponseBodyData &) = default ;
    GetTableObjectsResponseBodyData& operator=(GetTableObjectsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->tableSummaryModels_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetTableObjectsResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetTableObjectsResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tableSummaryModels Field Functions 
    bool hasTableSummaryModels() const { return this->tableSummaryModels_ != nullptr;};
    void deleteTableSummaryModels() { this->tableSummaryModels_ = nullptr;};
    inline const vector<Models::TableSummaryModel> & tableSummaryModels() const { DARABONBA_PTR_GET_CONST(tableSummaryModels_, vector<Models::TableSummaryModel>) };
    inline vector<Models::TableSummaryModel> tableSummaryModels() { DARABONBA_PTR_GET(tableSummaryModels_, vector<Models::TableSummaryModel>) };
    inline GetTableObjectsResponseBodyData& setTableSummaryModels(const vector<Models::TableSummaryModel> & tableSummaryModels) { DARABONBA_PTR_SET_VALUE(tableSummaryModels_, tableSummaryModels) };
    inline GetTableObjectsResponseBodyData& setTableSummaryModels(vector<Models::TableSummaryModel> && tableSummaryModels) { DARABONBA_PTR_SET_RVALUE(tableSummaryModels_, tableSummaryModels) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetTableObjectsResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of the returned page. The value is an integer that is greater than 0. Default value: **1**.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries returned per page. Default value: 30. Valid values:
    // 
    // *   **30**
    // *   **50**
    // *   **100**
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // Details of the tables.
    std::shared_ptr<vector<Models::TableSummaryModel>> tableSummaryModels_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
