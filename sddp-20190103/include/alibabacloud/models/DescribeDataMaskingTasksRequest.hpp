// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAMASKINGTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAMASKINGTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataMaskingTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataMaskingTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DstType, dstType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataMaskingTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DstType, dstType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDataMaskingTasksRequest() = default ;
    DescribeDataMaskingTasksRequest(const DescribeDataMaskingTasksRequest &) = default ;
    DescribeDataMaskingTasksRequest(DescribeDataMaskingTasksRequest &&) = default ;
    DescribeDataMaskingTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataMaskingTasksRequest() = default ;
    DescribeDataMaskingTasksRequest& operator=(const DescribeDataMaskingTasksRequest &) = default ;
    DescribeDataMaskingTasksRequest& operator=(DescribeDataMaskingTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->dstType_ == nullptr && return this->endTime_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr && return this->searchKey_ == nullptr
        && return this->startTime_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDataMaskingTasksRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dstType Field Functions 
    bool hasDstType() const { return this->dstType_ != nullptr;};
    void deleteDstType() { this->dstType_ = nullptr;};
    inline int32_t dstType() const { DARABONBA_PTR_GET_DEFAULT(dstType_, 0) };
    inline DescribeDataMaskingTasksRequest& setDstType(int32_t dstType) { DARABONBA_PTR_SET_VALUE(dstType_, dstType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDataMaskingTasksRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDataMaskingTasksRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDataMaskingTasksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string searchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline DescribeDataMaskingTasksRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDataMaskingTasksRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The page number of the page to return.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The service to which the data to be de-identified belongs. Valid values include **1**, **2**, **3**, **4**, and **5**. The value 1 indicates MaxCompute. The value 2 indicates Object Storage Service (OSS). The value 3 indicates AnalyticDB for MySQL. The value 4 indicates Tablestore. The value 5 indicates ApsaraDB RDS.
    std::shared_ptr<int32_t> dstType_ = nullptr;
    // The end of the time range during which the de-identification tasks to be queried are created. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The language of the content within the request and response. Default value: **zh_cn**. Valid values:
    // 
    // *   **zh_cn**: Chinese
    // *   **en_us**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The keyword used to query the de-identification tasks, which can be the task name or ID.
    std::shared_ptr<string> searchKey_ = nullptr;
    // The beginning of the time range during which the de-identification tasks to be queried are created. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
