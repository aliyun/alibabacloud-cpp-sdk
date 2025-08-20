// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSMIGRATIONWORKLOADSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSMIGRATIONWORKLOADSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsMigrationWorkloadsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsMigrationWorkloadsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OssLocation, ossLocation_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(WorkloadName, workloadName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsMigrationWorkloadsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OssLocation, ossLocation_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(WorkloadName, workloadName_);
    };
    DescribeApsMigrationWorkloadsRequest() = default ;
    DescribeApsMigrationWorkloadsRequest(const DescribeApsMigrationWorkloadsRequest &) = default ;
    DescribeApsMigrationWorkloadsRequest(DescribeApsMigrationWorkloadsRequest &&) = default ;
    DescribeApsMigrationWorkloadsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsMigrationWorkloadsRequest() = default ;
    DescribeApsMigrationWorkloadsRequest& operator=(const DescribeApsMigrationWorkloadsRequest &) = default ;
    DescribeApsMigrationWorkloadsRequest& operator=(DescribeApsMigrationWorkloadsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->endTime_ != nullptr && this->ossLocation_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->startTime_ != nullptr
        && this->workloadName_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeApsMigrationWorkloadsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeApsMigrationWorkloadsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ossLocation Field Functions 
    bool hasOssLocation() const { return this->ossLocation_ != nullptr;};
    void deleteOssLocation() { this->ossLocation_ = nullptr;};
    inline string ossLocation() const { DARABONBA_PTR_GET_DEFAULT(ossLocation_, "") };
    inline DescribeApsMigrationWorkloadsRequest& setOssLocation(string ossLocation) { DARABONBA_PTR_SET_VALUE(ossLocation_, ossLocation) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApsMigrationWorkloadsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApsMigrationWorkloadsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeApsMigrationWorkloadsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // workloadName Field Functions 
    bool hasWorkloadName() const { return this->workloadName_ != nullptr;};
    void deleteWorkloadName() { this->workloadName_ = nullptr;};
    inline string workloadName() const { DARABONBA_PTR_GET_DEFAULT(workloadName_, "") };
    inline DescribeApsMigrationWorkloadsRequest& setWorkloadName(string workloadName) { DARABONBA_PTR_SET_VALUE(workloadName_, workloadName) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The end of the time range to query.
    std::shared_ptr<string> endTime_ = nullptr;
    // The Object Storage Service (OSS) URL.
    std::shared_ptr<string> ossLocation_ = nullptr;
    // The page number.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The start of the time range to query.
    std::shared_ptr<string> startTime_ = nullptr;
    // The name of the workload.
    std::shared_ptr<string> workloadName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
