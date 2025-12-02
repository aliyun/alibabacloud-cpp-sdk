// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCANRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSCANRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetScanResultResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetScanResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScanResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetScanResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetScanResultResponseBodyData() = default ;
    GetScanResultResponseBodyData(const GetScanResultResponseBodyData &) = default ;
    GetScanResultResponseBodyData(GetScanResultResponseBodyData &&) = default ;
    GetScanResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScanResultResponseBodyData() = default ;
    GetScanResultResponseBodyData& operator=(const GetScanResultResponseBodyData &) = default ;
    GetScanResultResponseBodyData& operator=(GetScanResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->items_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetScanResultResponseBodyData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::GetScanResultResponseBodyDataItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::GetScanResultResponseBodyDataItems>) };
    inline vector<Models::GetScanResultResponseBodyDataItems> items() { DARABONBA_PTR_GET(items_, vector<Models::GetScanResultResponseBodyDataItems>) };
    inline GetScanResultResponseBodyData& setItems(const vector<Models::GetScanResultResponseBodyDataItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetScanResultResponseBodyData& setItems(vector<Models::GetScanResultResponseBodyDataItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetScanResultResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetScanResultResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Current page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Data for the current page.
    std::shared_ptr<vector<Models::GetScanResultResponseBodyDataItems>> items_ = nullptr;
    // Number of items per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Total number of records.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
