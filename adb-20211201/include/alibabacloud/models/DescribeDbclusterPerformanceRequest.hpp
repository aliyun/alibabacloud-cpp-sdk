// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClusterPerformanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterPerformanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourcePools, resourcePools_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterPerformanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourcePools, resourcePools_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDBClusterPerformanceRequest() = default ;
    DescribeDBClusterPerformanceRequest(const DescribeDBClusterPerformanceRequest &) = default ;
    DescribeDBClusterPerformanceRequest(DescribeDBClusterPerformanceRequest &&) = default ;
    DescribeDBClusterPerformanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterPerformanceRequest() = default ;
    DescribeDBClusterPerformanceRequest& operator=(const DescribeDBClusterPerformanceRequest &) = default ;
    DescribeDBClusterPerformanceRequest& operator=(DescribeDBClusterPerformanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->endTime_ != nullptr && this->key_ != nullptr && this->regionId_ != nullptr && this->resourcePools_ != nullptr && this->startTime_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterPerformanceRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDBClusterPerformanceRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeDBClusterPerformanceRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBClusterPerformanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourcePools Field Functions 
    bool hasResourcePools() const { return this->resourcePools_ != nullptr;};
    void deleteResourcePools() { this->resourcePools_ = nullptr;};
    inline string resourcePools() const { DARABONBA_PTR_GET_DEFAULT(resourcePools_, "") };
    inline DescribeDBClusterPerformanceRequest& setResourcePools(string resourcePools) { DARABONBA_PTR_SET_VALUE(resourcePools_, resourcePools) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDBClusterPerformanceRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // >  You can call the [DescribeDBClusters](~~~612397~~~) operation to query the IDs of all AnalyticDB for MySQL clusters within a region.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the *yyyy-MM-ddTHH:mmZ* format. The time must be in UTC.
    // 
    // > The end time must be later than the start time. The maximum time range that can be specified is two days.
    std::shared_ptr<string> endTime_ = nullptr;
    // The key of the performance metric that you want to query. Separate multiple keys with commas (,). For more information about the performance metrics, see [Metric overview](https://help.aliyun.com/document_detail/2863211.html).
    std::shared_ptr<string> key_ = nullptr;
    // The region ID of the cluster.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/612393.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourcePools_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the *yyyy-MM-ddTHH:mmZ* format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
