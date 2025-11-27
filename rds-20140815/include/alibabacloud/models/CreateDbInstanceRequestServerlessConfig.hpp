// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCEREQUESTSERVERLESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCEREQUESTSERVERLESSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateDBInstanceRequestServerlessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstanceRequestServerlessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPause, autoPause_);
      DARABONBA_PTR_TO_JSON(MaxCapacity, maxCapacity_);
      DARABONBA_PTR_TO_JSON(MinCapacity, minCapacity_);
      DARABONBA_PTR_TO_JSON(SwitchForce, switchForce_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstanceRequestServerlessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPause, autoPause_);
      DARABONBA_PTR_FROM_JSON(MaxCapacity, maxCapacity_);
      DARABONBA_PTR_FROM_JSON(MinCapacity, minCapacity_);
      DARABONBA_PTR_FROM_JSON(SwitchForce, switchForce_);
    };
    CreateDBInstanceRequestServerlessConfig() = default ;
    CreateDBInstanceRequestServerlessConfig(const CreateDBInstanceRequestServerlessConfig &) = default ;
    CreateDBInstanceRequestServerlessConfig(CreateDBInstanceRequestServerlessConfig &&) = default ;
    CreateDBInstanceRequestServerlessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBInstanceRequestServerlessConfig() = default ;
    CreateDBInstanceRequestServerlessConfig& operator=(const CreateDBInstanceRequestServerlessConfig &) = default ;
    CreateDBInstanceRequestServerlessConfig& operator=(CreateDBInstanceRequestServerlessConfig &&) = default ;
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
    inline CreateDBInstanceRequestServerlessConfig& setAutoPause(bool autoPause) { DARABONBA_PTR_SET_VALUE(autoPause_, autoPause) };


    // maxCapacity Field Functions 
    bool hasMaxCapacity() const { return this->maxCapacity_ != nullptr;};
    void deleteMaxCapacity() { this->maxCapacity_ = nullptr;};
    inline double maxCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxCapacity_, 0.0) };
    inline CreateDBInstanceRequestServerlessConfig& setMaxCapacity(double maxCapacity) { DARABONBA_PTR_SET_VALUE(maxCapacity_, maxCapacity) };


    // minCapacity Field Functions 
    bool hasMinCapacity() const { return this->minCapacity_ != nullptr;};
    void deleteMinCapacity() { this->minCapacity_ = nullptr;};
    inline double minCapacity() const { DARABONBA_PTR_GET_DEFAULT(minCapacity_, 0.0) };
    inline CreateDBInstanceRequestServerlessConfig& setMinCapacity(double minCapacity) { DARABONBA_PTR_SET_VALUE(minCapacity_, minCapacity) };


    // switchForce Field Functions 
    bool hasSwitchForce() const { return this->switchForce_ != nullptr;};
    void deleteSwitchForce() { this->switchForce_ = nullptr;};
    inline bool switchForce() const { DARABONBA_PTR_GET_DEFAULT(switchForce_, false) };
    inline CreateDBInstanceRequestServerlessConfig& setSwitchForce(bool switchForce) { DARABONBA_PTR_SET_VALUE(switchForce_, switchForce) };


  protected:
    // Specifies whether to enable the automatic startup and stop feature for the serverless instance. Valid values:
    // 
    // *   **true**: enables the feature.
    // *   **false** (default): disables the feature.
    // 
    // >  This parameter is required only for serverless instances that run MySQL and PostgreSQL. After the automatic start and stop feature is enabled, if no connections to the instance are established within 10 minutes, the instance is suspended. After a connection to the instance is established, the instance is resumed.
    std::shared_ptr<bool> autoPause_ = nullptr;
    // The maximum number of RDS Capacity Units (RCUs). Valid values:
    // 
    // *   Serverless ApsaraDB RDS for MySQL instances: **1 to 32**
    // *   Serverless ApsaraDB RDS for SQL Server instances: **2 to 16**
    // *   Serverless ApsaraDB RDS for PostgreSQL instances: **1 to 14**
    // 
    // >  The value of this parameter must be greater than or equal to the value of the **MinCapacity** parameter and can be set only to an **integer**.
    std::shared_ptr<double> maxCapacity_ = nullptr;
    // The minimum number of RCUs. Valid values:
    // 
    // *   Serverless ApsaraDB RDS for MySQL instances: **0.5 to 32**.
    // *   Serverless ApsaraDB RDS for SQL Server instances: **2 to 16**. Only integers are supported.
    // *   Serverless ApsaraDB RDS for PostgreSQL instances: **0.5 to 14**
    // 
    // >  The value of this parameter must be less than or equal to the value of the **MaxCapacity** parameter.
    std::shared_ptr<double> minCapacity_ = nullptr;
    // Specifies whether to enable the forced scaling feature for the serverless instance. Valid values:
    // 
    // *   **true**: enables the feature.
    // *   **false** (default): disables the feature.
    // 
    // > 
    // 
    // *   This parameter is required only for serverless instances that run MySQL and PostgreSQL. If you set this parameter to true, a service interruption that lasts approximately 30 to 120 seconds occurs during forced scaling. Process with caution.
    // 
    // *   The RCU scaling for a serverless instance immediately takes effect. In some cases, such as the execution of large transactions, the scaling does not immediately take effect. In this case, you can enable this feature to forcefully scale the RCUs of the instance.
    std::shared_ptr<bool> switchForce_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
