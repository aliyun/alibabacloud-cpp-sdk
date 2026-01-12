// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEXTSCANRESULTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTEXTSCANRESULTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetTextScanResultShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTextScanResultShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, queryShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Sort, sortShrink_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, GetTextScanResultShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, queryShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Sort, sortShrink_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    GetTextScanResultShrinkRequest() = default ;
    GetTextScanResultShrinkRequest(const GetTextScanResultShrinkRequest &) = default ;
    GetTextScanResultShrinkRequest(GetTextScanResultShrinkRequest &&) = default ;
    GetTextScanResultShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTextScanResultShrinkRequest() = default ;
    GetTextScanResultShrinkRequest& operator=(const GetTextScanResultShrinkRequest &) = default ;
    GetTextScanResultShrinkRequest& operator=(GetTextScanResultShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->endDate_ == nullptr && this->pageSize_ == nullptr && this->queryShrink_ == nullptr && this->regionId_ == nullptr && this->sortShrink_ == nullptr
        && this->startDate_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetTextScanResultShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetTextScanResultShrinkRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetTextScanResultShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryShrink Field Functions 
    bool hasQueryShrink() const { return this->queryShrink_ != nullptr;};
    void deleteQueryShrink() { this->queryShrink_ = nullptr;};
    inline string getQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(queryShrink_, "") };
    inline GetTextScanResultShrinkRequest& setQueryShrink(string queryShrink) { DARABONBA_PTR_SET_VALUE(queryShrink_, queryShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTextScanResultShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sortShrink Field Functions 
    bool hasSortShrink() const { return this->sortShrink_ != nullptr;};
    void deleteSortShrink() { this->sortShrink_ = nullptr;};
    inline string getSortShrink() const { DARABONBA_PTR_GET_DEFAULT(sortShrink_, "") };
    inline GetTextScanResultShrinkRequest& setSortShrink(string sortShrink) { DARABONBA_PTR_SET_VALUE(sortShrink_, sortShrink) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline GetTextScanResultShrinkRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // End date and time.
    shared_ptr<string> endDate_ {};
    // Page size.
    shared_ptr<int32_t> pageSize_ {};
    // Search criteria.
    shared_ptr<string> queryShrink_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // Sort fields.
    shared_ptr<string> sortShrink_ {};
    // Start date and time.
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
