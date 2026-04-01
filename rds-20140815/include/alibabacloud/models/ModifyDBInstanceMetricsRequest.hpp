// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCEMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCEMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBInstanceMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(MetricsConfig, metricsConfig_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(MetricsConfig, metricsConfig_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    ModifyDBInstanceMetricsRequest() = default ;
    ModifyDBInstanceMetricsRequest(const ModifyDBInstanceMetricsRequest &) = default ;
    ModifyDBInstanceMetricsRequest(ModifyDBInstanceMetricsRequest &&) = default ;
    ModifyDBInstanceMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceMetricsRequest() = default ;
    ModifyDBInstanceMetricsRequest& operator=(const ModifyDBInstanceMetricsRequest &) = default ;
    ModifyDBInstanceMetricsRequest& operator=(ModifyDBInstanceMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->metricsConfig_ == nullptr && this->resourceOwnerId_ == nullptr && this->scope_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifyDBInstanceMetricsRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // metricsConfig Field Functions 
    bool hasMetricsConfig() const { return this->metricsConfig_ != nullptr;};
    void deleteMetricsConfig() { this->metricsConfig_ = nullptr;};
    inline string getMetricsConfig() const { DARABONBA_PTR_GET_DEFAULT(metricsConfig_, "") };
    inline ModifyDBInstanceMetricsRequest& setMetricsConfig(string metricsConfig) { DARABONBA_PTR_SET_VALUE(metricsConfig_, metricsConfig) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBInstanceMetricsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ModifyDBInstanceMetricsRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The keys of the Enhanced Monitoring metrics that you want to display for the instance. You can enter a maximum of 30 metric keys. If you enter multiple metric keys, you must separate the metric keys with commas (,).
    // 
    // You can call the DescribeAvailableMetrics operation to query the keys of metrics.
    // 
    // This parameter is required.
    shared_ptr<string> metricsConfig_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The application scope of this modification. Valid values:
    // 
    // *   **instance**: This modification is applied only to the current instance.
    // *   **region**: This modification is applied to all ApsaraDB RDS for PostgreSQL instances that are equipped with the same type of storage media as the current instance in the region to which the current instance belongs. For example, if the current instance is equipped with cloud disks, this modification is applied to all ApsaraDB RDS for PostgreSQL instances that are equipped with cloud disks in the region to which the current instance belongs.
    // 
    // This parameter is required.
    shared_ptr<string> scope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
