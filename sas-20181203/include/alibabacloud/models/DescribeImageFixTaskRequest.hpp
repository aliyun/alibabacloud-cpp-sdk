// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEFIXTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEFIXTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageFixTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageFixTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageFixTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeImageFixTaskRequest() = default ;
    DescribeImageFixTaskRequest(const DescribeImageFixTaskRequest &) = default ;
    DescribeImageFixTaskRequest(DescribeImageFixTaskRequest &&) = default ;
    DescribeImageFixTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageFixTaskRequest() = default ;
    DescribeImageFixTaskRequest& operator=(const DescribeImageFixTaskRequest &) = default ;
    DescribeImageFixTaskRequest& operator=(DescribeImageFixTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->endTime_ == nullptr && return this->pageSize_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeImageFixTaskRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeImageFixTaskRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImageFixTaskRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeImageFixTaskRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeImageFixTaskRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of the page to return. Default value: **1**
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The timestamp when the task ends. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The number of entries to return on each page. Default value: **20**
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The timestamp when the task starts. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   **1**: The task is running.
    // *   **2**: The task is successful.
    // *   **3**: The task failed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
