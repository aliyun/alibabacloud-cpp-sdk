// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRELOADTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRELOADTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribePreloadTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreloadTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreloadTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribePreloadTasksRequest() = default ;
    DescribePreloadTasksRequest(const DescribePreloadTasksRequest &) = default ;
    DescribePreloadTasksRequest(DescribePreloadTasksRequest &&) = default ;
    DescribePreloadTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreloadTasksRequest() = default ;
    DescribePreloadTasksRequest& operator=(const DescribePreloadTasksRequest &) = default ;
    DescribePreloadTasksRequest& operator=(DescribePreloadTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->endTime_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->siteId_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribePreloadTasksRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribePreloadTasksRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePreloadTasksRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePreloadTasksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline DescribePreloadTasksRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribePreloadTasksRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePreloadTasksRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The query content. Exact match is used.
    shared_ptr<string> content_ {};
    // The end time. The date is in ISO 8601 format and uses UTC+0 time in the yyyy-MM-ddTHH:mm:ssZ format.
    // > The end time must be later than the start time.
    shared_ptr<string> endTime_ {};
    // The page number. Valid values: **1** to **100000**. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The page size. Default value: **20**. Maximum value: **50**. Valid values: any integer from **1** to **50**.
    shared_ptr<int32_t> pageSize_ {};
    // The site ID. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain the site ID.
    shared_ptr<int64_t> siteId_ {};
    // The start time. The date is in ISO 8601 format and uses UTC+0 time in the yyyy-MM-ddTHH:mm:ssZ format.
    shared_ptr<string> startTime_ {};
    // The task execution status. Valid values:
    // 
    // - **Complte**: Complete.
    // - **Refreshing**: Prefetching.
    // - **Failed**: Prefetch failed.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
