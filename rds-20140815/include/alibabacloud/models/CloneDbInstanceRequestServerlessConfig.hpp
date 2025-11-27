// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONEDBINSTANCEREQUESTSERVERLESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CLONEDBINSTANCEREQUESTSERVERLESSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CloneDBInstanceRequestServerlessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneDBInstanceRequestServerlessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPause, autoPause_);
      DARABONBA_PTR_TO_JSON(MaxCapacity, maxCapacity_);
      DARABONBA_PTR_TO_JSON(MinCapacity, minCapacity_);
      DARABONBA_PTR_TO_JSON(SwitchForce, switchForce_);
    };
    friend void from_json(const Darabonba::Json& j, CloneDBInstanceRequestServerlessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPause, autoPause_);
      DARABONBA_PTR_FROM_JSON(MaxCapacity, maxCapacity_);
      DARABONBA_PTR_FROM_JSON(MinCapacity, minCapacity_);
      DARABONBA_PTR_FROM_JSON(SwitchForce, switchForce_);
    };
    CloneDBInstanceRequestServerlessConfig() = default ;
    CloneDBInstanceRequestServerlessConfig(const CloneDBInstanceRequestServerlessConfig &) = default ;
    CloneDBInstanceRequestServerlessConfig(CloneDBInstanceRequestServerlessConfig &&) = default ;
    CloneDBInstanceRequestServerlessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneDBInstanceRequestServerlessConfig() = default ;
    CloneDBInstanceRequestServerlessConfig& operator=(const CloneDBInstanceRequestServerlessConfig &) = default ;
    CloneDBInstanceRequestServerlessConfig& operator=(CloneDBInstanceRequestServerlessConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPause_ == nullptr
        && return this->maxCapacity_ == nullptr && return this->minCapacity_ == nullptr && return this->switchForce_ == nullptr; };
    // autoPause Field Functions 
    bool hasAutoPause() const { return this->autoPause_ != nullptr;};
    void deleteAutoPause() { this->autoPause_ = nullptr;};
    inline bool autoPause() const { DARABONBA_PTR_GET_DEFAULT(autoPause_, false) };
    inline CloneDBInstanceRequestServerlessConfig& setAutoPause(bool autoPause) { DARABONBA_PTR_SET_VALUE(autoPause_, autoPause) };


    // maxCapacity Field Functions 
    bool hasMaxCapacity() const { return this->maxCapacity_ != nullptr;};
    void deleteMaxCapacity() { this->maxCapacity_ = nullptr;};
    inline double maxCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxCapacity_, 0.0) };
    inline CloneDBInstanceRequestServerlessConfig& setMaxCapacity(double maxCapacity) { DARABONBA_PTR_SET_VALUE(maxCapacity_, maxCapacity) };


    // minCapacity Field Functions 
    bool hasMinCapacity() const { return this->minCapacity_ != nullptr;};
    void deleteMinCapacity() { this->minCapacity_ = nullptr;};
    inline double minCapacity() const { DARABONBA_PTR_GET_DEFAULT(minCapacity_, 0.0) };
    inline CloneDBInstanceRequestServerlessConfig& setMinCapacity(double minCapacity) { DARABONBA_PTR_SET_VALUE(minCapacity_, minCapacity) };


    // switchForce Field Functions 
    bool hasSwitchForce() const { return this->switchForce_ != nullptr;};
    void deleteSwitchForce() { this->switchForce_ = nullptr;};
    inline bool switchForce() const { DARABONBA_PTR_GET_DEFAULT(switchForce_, false) };
    inline CloneDBInstanceRequestServerlessConfig& setSwitchForce(bool switchForce) { DARABONBA_PTR_SET_VALUE(switchForce_, switchForce) };


  protected:
    // Specifies whether to enable the automatic start and stop feature for the serverless ApsaraDB RDS for MySQL instance. After the automatic start and stop feature is enabled, if no connections to the instance are established within 10 minutes, the instance is suspended. After a connection is established to the instance, the instance is automatically resumed. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // > *   This parameter is supported only for serverless ApsaraDB RDS for MySQL instances.
    // > *   This parameter is available only on the China site (aliyun.com).
    std::shared_ptr<bool> autoPause_ = nullptr;
    // The maximum number of RDS Capacity Units (RCUs). Valid values:
    // 
    // *   Serverless ApsaraDB RDS for MySQL instances: **1 to 8**
    // *   Serverless ApsaraDB RDS for SQL Server instances: **2 to 8**
    // *   Serverless ApsaraDB RDS for PostgreSQL instances: **1 to 12**
    // 
    // > *   The value of this parameter must be greater than or equal to the value of **MinCapacity** and can be specified only to an **integer**.
    // > *   This parameter is available only on the China site (aliyun.com).
    std::shared_ptr<double> maxCapacity_ = nullptr;
    // The minimum number of RCUs. Valid values:
    // 
    // *   Serverless ApsaraDB RDS for MySQL instances: **0.5 to 8**.
    // *   Serverless ApsaraDB RDS for SQL Server instances: **2 to 8**. Only integers are supported.
    // *   Serverless ApsaraDB RDS for PostgreSQL instances: **0.5 to 12**.
    // 
    // > *   The value of this parameter must be less than or equal to the value of **MaxCapacity**.
    // > *   This parameter is available only on the China site (aliyun.com).
    std::shared_ptr<double> minCapacity_ = nullptr;
    // Specifies whether to enable the forced scaling feature for the serverless ApsaraDB RDS for MySQL instance. In most cases, ApsaraDB RDS automatically scales in or out the RCUs of a serverless instance based on business requirements in real time. In rare cases, the scaling does not take effect in real time. You can enable the forced scaling feature to forcefully scales in or out the RCUs of the instance. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // > 
    // 
    // *   This parameter is supported only for serverless ApsaraDB RDS for MySQL instances.
    // 
    // *   This parameter is available only on the China site (aliyun.com).
    std::shared_ptr<bool> switchForce_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
