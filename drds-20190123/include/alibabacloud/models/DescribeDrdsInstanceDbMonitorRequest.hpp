// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCEDBMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCEDBMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsInstanceDbMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsInstanceDbMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsInstanceDbMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDrdsInstanceDbMonitorRequest() = default ;
    DescribeDrdsInstanceDbMonitorRequest(const DescribeDrdsInstanceDbMonitorRequest &) = default ;
    DescribeDrdsInstanceDbMonitorRequest(DescribeDrdsInstanceDbMonitorRequest &&) = default ;
    DescribeDrdsInstanceDbMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsInstanceDbMonitorRequest() = default ;
    DescribeDrdsInstanceDbMonitorRequest& operator=(const DescribeDrdsInstanceDbMonitorRequest &) = default ;
    DescribeDrdsInstanceDbMonitorRequest& operator=(DescribeDrdsInstanceDbMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->drdsInstanceId_ != nullptr && this->endTime_ != nullptr && this->key_ != nullptr && this->regionId_ != nullptr && this->startTime_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DescribeDrdsInstanceDbMonitorRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline DescribeDrdsInstanceDbMonitorRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDrdsInstanceDbMonitorRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeDrdsInstanceDbMonitorRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDrdsInstanceDbMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDrdsInstanceDbMonitorRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The name of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // The ID of the Distributed Relational Database Service (DRDS) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The end time. Specify the time in the UNIX timestamp format. The time must be in UTC. Unit: ms.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The performance monitoring metrics. You can specify one or more metrics for a query at a time. Separate multiple metric parameters with commas (,).
    // 
    // >  For more information about the details of performance monitoring metrics, see [Database monitoring](https://help.aliyun.com/document_detail/186704.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The start time. Specify the time in the UNIX timestamp format. The time must be in UTC. Unit: ms.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
