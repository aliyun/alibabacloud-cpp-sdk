// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClusterPerformanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterPerformanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterPerformanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
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
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->endTime_ == nullptr && this->key_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->startTime_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterPerformanceRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDBClusterPerformanceRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeDBClusterPerformanceRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeDBClusterPerformanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDBClusterPerformanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeDBClusterPerformanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeDBClusterPerformanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDBClusterPerformanceRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The end of the time range to query. Specify the time in UTC using the `yyyy-MM-ddTHH:mmZ` format.
    // 
    // > The end time must be later than the start time. The maximum time range cannot exceed 32 days.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The performance metrics that you want to query. Separate multiple metric names with a comma (,). You can query up to five performance metrics at a time. The following performance metrics are supported:
    // 
    // > **Key** is required.
    // 
    // - **CPU**:
    // 
    //   - **CPU_USAGE**: The CPU utilization.
    // 
    // - **Memory**:
    // 
    //   - **MEM_USAGE**: The memory utilization.
    // 
    //   - **MEM_USAGE_SIZE**: The memory usage in MB.
    // 
    // - **Disk**:
    // 
    //   - **DISK_USAGE**: The disk utilization.
    // 
    //   - **DISK_USAGE_SIZE**: The disk usage in MB.
    // 
    //   - **IOPS**: The disk input/output operations per second (IOPS).
    // 
    // - **Connection**:
    // 
    //   - **CONN_USAGE**: The database connection utilization.
    // 
    //   - **CONN_USAGE_COUNT**: The number of database connections.
    // 
    // - **Write**:
    // 
    //   - **TPS**: The number of rows written per second (TPS).
    // 
    //   - **INSERT_SIZE**: The write size per second in MB.
    // 
    // - **Query**:
    // 
    //   - **QPS**: The queries per second (QPS).
    // 
    //   - **AVG_SEEK**: The number of random SEEK calls.
    // 
    // - **WAIT**:
    // 
    //   - **ZK_WAIT**: The average wait time of ZooKeeper (ZK) in ms.
    // 
    //   - **IO_WAIT**: The average I/O wait time in ms.
    // 
    //   - **CPU_WAIT**: The average CPU wait time in ms.
    shared_ptr<string> key_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The beginning of the time range to query. Specify the time in UTC using the `yyyy-MM-ddTHH:mmZ` format.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
