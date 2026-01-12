// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSCHECKFREEZERESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOSSCHECKFREEZERESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetOssCheckFreezeResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssCheckFreezeResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(FinishNum, finishNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssCheckFreezeResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(FinishNum, finishNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetOssCheckFreezeResultRequest() = default ;
    GetOssCheckFreezeResultRequest(const GetOssCheckFreezeResultRequest &) = default ;
    GetOssCheckFreezeResultRequest(GetOssCheckFreezeResultRequest &&) = default ;
    GetOssCheckFreezeResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssCheckFreezeResultRequest() = default ;
    GetOssCheckFreezeResultRequest& operator=(const GetOssCheckFreezeResultRequest &) = default ;
    GetOssCheckFreezeResultRequest& operator=(GetOssCheckFreezeResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->endDate_ == nullptr && this->finishNum_ == nullptr && this->pageSize_ == nullptr && this->query_ == nullptr && this->regionId_ == nullptr
        && this->sort_ == nullptr && this->startDate_ == nullptr && this->status_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetOssCheckFreezeResultRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetOssCheckFreezeResultRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // finishNum Field Functions 
    bool hasFinishNum() const { return this->finishNum_ != nullptr;};
    void deleteFinishNum() { this->finishNum_ = nullptr;};
    inline int64_t getFinishNum() const { DARABONBA_PTR_GET_DEFAULT(finishNum_, 0L) };
    inline GetOssCheckFreezeResultRequest& setFinishNum(int64_t finishNum) { DARABONBA_PTR_SET_VALUE(finishNum_, finishNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetOssCheckFreezeResultRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline GetOssCheckFreezeResultRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetOssCheckFreezeResultRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline const map<string, string> & getSort() const { DARABONBA_PTR_GET_CONST(sort_, map<string, string>) };
    inline map<string, string> getSort() { DARABONBA_PTR_GET(sort_, map<string, string>) };
    inline GetOssCheckFreezeResultRequest& setSort(const map<string, string> & sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };
    inline GetOssCheckFreezeResultRequest& setSort(map<string, string> && sort) { DARABONBA_PTR_SET_RVALUE(sort_, sort) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline GetOssCheckFreezeResultRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetOssCheckFreezeResultRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // End time.
    shared_ptr<string> endDate_ {};
    // Number of completed tasks.
    shared_ptr<int64_t> finishNum_ {};
    // Page size.
    shared_ptr<int32_t> pageSize_ {};
    // Query condition.
    shared_ptr<string> query_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // Sort field.
    shared_ptr<map<string, string>> sort_ {};
    // Start time.
    shared_ptr<string> startDate_ {};
    // Task status.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
