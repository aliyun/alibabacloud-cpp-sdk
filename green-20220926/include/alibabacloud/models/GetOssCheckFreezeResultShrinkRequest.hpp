// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSCHECKFREEZERESULTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOSSCHECKFREEZERESULTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetOssCheckFreezeResultShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssCheckFreezeResultShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(FinishNum, finishNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Sort, sortShrink_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssCheckFreezeResultShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(FinishNum, finishNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Sort, sortShrink_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetOssCheckFreezeResultShrinkRequest() = default ;
    GetOssCheckFreezeResultShrinkRequest(const GetOssCheckFreezeResultShrinkRequest &) = default ;
    GetOssCheckFreezeResultShrinkRequest(GetOssCheckFreezeResultShrinkRequest &&) = default ;
    GetOssCheckFreezeResultShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssCheckFreezeResultShrinkRequest() = default ;
    GetOssCheckFreezeResultShrinkRequest& operator=(const GetOssCheckFreezeResultShrinkRequest &) = default ;
    GetOssCheckFreezeResultShrinkRequest& operator=(GetOssCheckFreezeResultShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->endDate_ == nullptr && return this->finishNum_ == nullptr && return this->pageSize_ == nullptr && return this->query_ == nullptr && return this->regionId_ == nullptr
        && return this->sortShrink_ == nullptr && return this->startDate_ == nullptr && return this->status_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetOssCheckFreezeResultShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetOssCheckFreezeResultShrinkRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // finishNum Field Functions 
    bool hasFinishNum() const { return this->finishNum_ != nullptr;};
    void deleteFinishNum() { this->finishNum_ = nullptr;};
    inline int64_t finishNum() const { DARABONBA_PTR_GET_DEFAULT(finishNum_, 0L) };
    inline GetOssCheckFreezeResultShrinkRequest& setFinishNum(int64_t finishNum) { DARABONBA_PTR_SET_VALUE(finishNum_, finishNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetOssCheckFreezeResultShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline GetOssCheckFreezeResultShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetOssCheckFreezeResultShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sortShrink Field Functions 
    bool hasSortShrink() const { return this->sortShrink_ != nullptr;};
    void deleteSortShrink() { this->sortShrink_ = nullptr;};
    inline string sortShrink() const { DARABONBA_PTR_GET_DEFAULT(sortShrink_, "") };
    inline GetOssCheckFreezeResultShrinkRequest& setSortShrink(string sortShrink) { DARABONBA_PTR_SET_VALUE(sortShrink_, sortShrink) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline GetOssCheckFreezeResultShrinkRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetOssCheckFreezeResultShrinkRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Current page number.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // End time.
    std::shared_ptr<string> endDate_ = nullptr;
    // Number of completed tasks.
    std::shared_ptr<int64_t> finishNum_ = nullptr;
    // Page size.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Query condition.
    std::shared_ptr<string> query_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Sort field.
    std::shared_ptr<string> sortShrink_ = nullptr;
    // Start time.
    std::shared_ptr<string> startDate_ = nullptr;
    // Task status.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
