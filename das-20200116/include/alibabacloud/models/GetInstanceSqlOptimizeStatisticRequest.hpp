// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESQLOPTIMIZESTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESQLOPTIMIZESTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetInstanceSqlOptimizeStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceSqlOptimizeStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FilterEnable, filterEnable_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(UseMerging, useMerging_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceSqlOptimizeStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FilterEnable, filterEnable_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(UseMerging, useMerging_);
    };
    GetInstanceSqlOptimizeStatisticRequest() = default ;
    GetInstanceSqlOptimizeStatisticRequest(const GetInstanceSqlOptimizeStatisticRequest &) = default ;
    GetInstanceSqlOptimizeStatisticRequest(GetInstanceSqlOptimizeStatisticRequest &&) = default ;
    GetInstanceSqlOptimizeStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceSqlOptimizeStatisticRequest() = default ;
    GetInstanceSqlOptimizeStatisticRequest& operator=(const GetInstanceSqlOptimizeStatisticRequest &) = default ;
    GetInstanceSqlOptimizeStatisticRequest& operator=(GetInstanceSqlOptimizeStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->filterEnable_ != nullptr && this->instanceId_ != nullptr && this->nodeId_ != nullptr && this->startTime_ != nullptr && this->threshold_ != nullptr
        && this->useMerging_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetInstanceSqlOptimizeStatisticRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filterEnable Field Functions 
    bool hasFilterEnable() const { return this->filterEnable_ != nullptr;};
    void deleteFilterEnable() { this->filterEnable_ = nullptr;};
    inline string filterEnable() const { DARABONBA_PTR_GET_DEFAULT(filterEnable_, "") };
    inline GetInstanceSqlOptimizeStatisticRequest& setFilterEnable(string filterEnable) { DARABONBA_PTR_SET_VALUE(filterEnable_, filterEnable) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceSqlOptimizeStatisticRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetInstanceSqlOptimizeStatisticRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetInstanceSqlOptimizeStatisticRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline GetInstanceSqlOptimizeStatisticRequest& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // useMerging Field Functions 
    bool hasUseMerging() const { return this->useMerging_ != nullptr;};
    void deleteUseMerging() { this->useMerging_ = nullptr;};
    inline string useMerging() const { DARABONBA_PTR_GET_DEFAULT(useMerging_, "") };
    inline GetInstanceSqlOptimizeStatisticRequest& setUseMerging(string useMerging) { DARABONBA_PTR_SET_VALUE(useMerging_, useMerging) };


  protected:
    // The end of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // Specifies whether to filter instances for which DAS Enterprise Edition is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  If you set this parameter to **true**, only database instances for which DAS Enterprise Edition is disabled are queried. If you set this parameter to **false**, all database instances are queried.
    std::shared_ptr<string> filterEnable_ = nullptr;
    // The database instance ID.
    // 
    // >  The database instance must be an ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The node ID.
    // 
    // >  For ApsaraDB RDS for MySQL Cluster Edition instances or PolarDB for MySQL clusters, you must specify the node ID.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The beginning of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // The duration threshold for automatic SQL optimization events. After this parameter is specified, the system collects statistics on automatic SQL optimization events whose duration does not exceed the specified threshold.
    // 
    // >  This parameter is a reserved parameter and does not take effect.
    std::shared_ptr<string> threshold_ = nullptr;
    // Specifies whether to merge automatic SQL optimization events. Valid values:
    // 
    // *   **true**: merges automatic SQL optimization events.
    // *   **false**: does not merge automatic SQL optimization events.
    // 
    // >  This parameter is a reserved parameter and does not take effect.
    std::shared_ptr<string> useMerging_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
