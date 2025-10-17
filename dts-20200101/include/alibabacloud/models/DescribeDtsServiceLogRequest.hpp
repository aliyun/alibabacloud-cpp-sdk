// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSSERVICELOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSSERVICELOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsServiceLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsServiceLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubJobType, subJobType_);
      DARABONBA_PTR_TO_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsServiceLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubJobType, subJobType_);
      DARABONBA_PTR_FROM_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    DescribeDtsServiceLogRequest() = default ;
    DescribeDtsServiceLogRequest(const DescribeDtsServiceLogRequest &) = default ;
    DescribeDtsServiceLogRequest(DescribeDtsServiceLogRequest &&) = default ;
    DescribeDtsServiceLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsServiceLogRequest() = default ;
    DescribeDtsServiceLogRequest& operator=(const DescribeDtsServiceLogRequest &) = default ;
    DescribeDtsServiceLogRequest& operator=(DescribeDtsServiceLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dtsJobId_ == nullptr
        && return this->endTime_ == nullptr && return this->keyword_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->subJobType_ == nullptr && return this->zeroEtlJob_ == nullptr; };
    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeDtsServiceLogRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDtsServiceLogRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeDtsServiceLogRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDtsServiceLogRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDtsServiceLogRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDtsServiceLogRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDtsServiceLogRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDtsServiceLogRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDtsServiceLogRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subJobType Field Functions 
    bool hasSubJobType() const { return this->subJobType_ != nullptr;};
    void deleteSubJobType() { this->subJobType_ = nullptr;};
    inline string subJobType() const { DARABONBA_PTR_GET_DEFAULT(subJobType_, "") };
    inline DescribeDtsServiceLogRequest& setSubJobType(string subJobType) { DARABONBA_PTR_SET_VALUE(subJobType_, subJobType) };


    // zeroEtlJob Field Functions 
    bool hasZeroEtlJob() const { return this->zeroEtlJob_ != nullptr;};
    void deleteZeroEtlJob() { this->zeroEtlJob_ = nullptr;};
    inline bool zeroEtlJob() const { DARABONBA_PTR_GET_DEFAULT(zeroEtlJob_, false) };
    inline DescribeDtsServiceLogRequest& setZeroEtlJob(bool zeroEtlJob) { DARABONBA_PTR_SET_VALUE(zeroEtlJob_, zeroEtlJob) };


  protected:
    // The ID of the data migration or synchronization task.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The end of the time range to query. You can call the [DescribePreCheckStatus](https://help.aliyun.com/document_detail/209718.html) operation to query the execution time of the subtasks.
    // 
    // > *   To obtain the logs that are generated for DTS subtasks within a specific period of time, you can call the [DescribePreCheckStatus](https://help.aliyun.com/document_detail/209718.html) operation to query the execution time of the subtasks.
    // >*   Specify the time in the 13-digit UNIX timestamp format. Unit: milliseconds. You can use a search engine to obtain a UNIX timestamp converter.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The keyword that is passed to specify the query content.
    // 
    // >  Fuzzy match is used and the keyword is case-sensitive.
    std::shared_ptr<string> keyword_ = nullptr;
    // The number of the page to return. The value must be an integer that is greater than 0 and less than or equal to the maximum value supported by the integer data type. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of log entries to return on each page. Valid values: **20**, **50**, **100**, **500**, and **1000**. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the region in which the DTS instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The beginning of the time range to query.
    // 
    // > *   To obtain the logs that are generated for Data Transmission Service (DTS) subtasks within a specific period of time, you can call the [DescribePreCheckStatus](https://help.aliyun.com/document_detail/209718.html) operation to query the execution time of the subtasks.
    // >*   Specify the time in the 13-digit UNIX timestamp format. Unit: milliseconds. You can use a search engine to obtain a UNIX timestamp converter.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The log level. Separate multiple log levels with commas (,). Valid values:
    // 
    // *   **NORMAL**: displays the logs that are generated when the DTS task runs as expected.
    // *   **WARN**: displays the logs about severe issues that stop the DTS task from running.
    // *   **ERROR**: displays the logs about unexpected issues that stop specific processes form running.
    std::shared_ptr<string> status_ = nullptr;
    // The type of a DTS subtask. Valid values:
    // 
    // *   **DATA_LOAD**: full migration or full synchronization
    // *   **ONLINE_WRITER**: incremental migration
    // *   **SYNC_WRITER**: incremental synchronization
    std::shared_ptr<string> subJobType_ = nullptr;
    // Whether it is a seamless integration (Zero-ETL) task, the value can be: - **true**: Yes. - **false**: No.
    std::shared_ptr<bool> zeroEtlJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
