// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASEERRORLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASEERRORLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribeDatabaseErrorLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabaseErrorLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseInstanceId, databaseInstanceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabaseErrorLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseInstanceId, databaseInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDatabaseErrorLogsRequest() = default ;
    DescribeDatabaseErrorLogsRequest(const DescribeDatabaseErrorLogsRequest &) = default ;
    DescribeDatabaseErrorLogsRequest(DescribeDatabaseErrorLogsRequest &&) = default ;
    DescribeDatabaseErrorLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabaseErrorLogsRequest() = default ;
    DescribeDatabaseErrorLogsRequest& operator=(const DescribeDatabaseErrorLogsRequest &) = default ;
    DescribeDatabaseErrorLogsRequest& operator=(DescribeDatabaseErrorLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseInstanceId_ == nullptr
        && this->endTime_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr; };
    // databaseInstanceId Field Functions 
    bool hasDatabaseInstanceId() const { return this->databaseInstanceId_ != nullptr;};
    void deleteDatabaseInstanceId() { this->databaseInstanceId_ = nullptr;};
    inline string getDatabaseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(databaseInstanceId_, "") };
    inline DescribeDatabaseErrorLogsRequest& setDatabaseInstanceId(string databaseInstanceId) { DARABONBA_PTR_SET_VALUE(databaseInstanceId_, databaseInstanceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDatabaseErrorLogsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDatabaseErrorLogsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDatabaseErrorLogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDatabaseErrorLogsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDatabaseErrorLogsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the lightweight database instance.
    // 
    // This parameter is required.
    shared_ptr<string> databaseInstanceId_ {};
    // The end of the time range to query. The time must be in UTC and formatted as `yyyy-MM-ddTHH:mmZ` according to the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard. This value must be later than the start time.
    // 
    // > The time displayed in the console is 8 hours ahead of the specified UTC time.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of error logs to return per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the region where the lightweight database instance resides.
    // 
    // You can call the [ListRegions](https://help.aliyun.com/document_detail/189315.html) operation to query the latest list of Alibaba Cloud regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The start of the time range to query. The time must be in UTC and formatted as `yyyy-MM-ddTHH:mmZ` according to the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard.
    // 
    // > The time displayed in the console is 8 hours ahead of the specified UTC time.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
