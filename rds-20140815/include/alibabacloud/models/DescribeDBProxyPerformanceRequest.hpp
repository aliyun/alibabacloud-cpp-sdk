// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYPERFORMANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYPERFORMANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBProxyPerformanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyPerformanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceType, DBProxyInstanceType_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MetricsName, metricsName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyPerformanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceType, DBProxyInstanceType_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MetricsName, metricsName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDBProxyPerformanceRequest() = default ;
    DescribeDBProxyPerformanceRequest(const DescribeDBProxyPerformanceRequest &) = default ;
    DescribeDBProxyPerformanceRequest(DescribeDBProxyPerformanceRequest &&) = default ;
    DescribeDBProxyPerformanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBProxyPerformanceRequest() = default ;
    DescribeDBProxyPerformanceRequest& operator=(const DescribeDBProxyPerformanceRequest &) = default ;
    DescribeDBProxyPerformanceRequest& operator=(DescribeDBProxyPerformanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->DBProxyEngineType_ == nullptr && this->DBProxyInstanceType_ == nullptr && this->dimension_ == nullptr && this->endTime_ == nullptr && this->metricsName_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->startTime_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBProxyPerformanceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBProxyEngineType Field Functions 
    bool hasDBProxyEngineType() const { return this->DBProxyEngineType_ != nullptr;};
    void deleteDBProxyEngineType() { this->DBProxyEngineType_ = nullptr;};
    inline string getDBProxyEngineType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEngineType_, "") };
    inline DescribeDBProxyPerformanceRequest& setDBProxyEngineType(string DBProxyEngineType) { DARABONBA_PTR_SET_VALUE(DBProxyEngineType_, DBProxyEngineType) };


    // DBProxyInstanceType Field Functions 
    bool hasDBProxyInstanceType() const { return this->DBProxyInstanceType_ != nullptr;};
    void deleteDBProxyInstanceType() { this->DBProxyInstanceType_ = nullptr;};
    inline string getDBProxyInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceType_, "") };
    inline DescribeDBProxyPerformanceRequest& setDBProxyInstanceType(string DBProxyInstanceType) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceType_, DBProxyInstanceType) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline string getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
    inline DescribeDBProxyPerformanceRequest& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDBProxyPerformanceRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // metricsName Field Functions 
    bool hasMetricsName() const { return this->metricsName_ != nullptr;};
    void deleteMetricsName() { this->metricsName_ = nullptr;};
    inline string getMetricsName() const { DARABONBA_PTR_GET_DEFAULT(metricsName_, "") };
    inline DescribeDBProxyPerformanceRequest& setMetricsName(string metricsName) { DARABONBA_PTR_SET_VALUE(metricsName_, metricsName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDBProxyPerformanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBProxyPerformanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeDBProxyPerformanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeDBProxyPerformanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDBProxyPerformanceRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The instance ID. You can call DescribeDBInstances to obtain the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // A reserved parameter. You do not need to configure this parameter.
    shared_ptr<string> DBProxyEngineType_ {};
    // The type of the database proxy instance. Valid values:
    // - common: general-purpose database proxy
    // - exclusive: dedicated database proxy
    shared_ptr<string> DBProxyInstanceType_ {};
    // The aggregation dimension. Valid values. The service and server values cannot be specified at the same time.
    // 
    // - service: aggregates monitoring metrics by proxy endpoint.
    // 
    // - node: aggregates monitoring metrics by proxy node.
    // 
    // - server: aggregates monitoring metrics by database node.
    shared_ptr<string> dimension_ {};
    // The end time of the query. The end time must be later than the start time. Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The performance metrics.
    // 
    // RDS MySQL supports only **Maxscale_CpuUsage**: CPU utilization.
    // 
    // RDS PostgreSQL supports the following performance metrics:
    // 
    // - **Maxscale_TotalConns**: connection rate
    // - **Maxscale_CurrentConns**: current connections
    // - **Maxscale_DownFlows**: outbound traffic
    // - **Maxscale_UpFlows**: inbound traffic
    // - **Maxscale_QPS**: request rate (QPS)
    // - **Maxscale_MemUsage**: memory utilization
    // - **Maxscale_CpuUsage**: CPU utilization
    // 
    // To query multiple performance metrics, separate them with commas (,). You can query up to six performance metrics at a time.
    // 
    // This parameter is required.
    shared_ptr<string> metricsName_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID. You can call DescribeRegions to obtain the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The start time of the query. Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
