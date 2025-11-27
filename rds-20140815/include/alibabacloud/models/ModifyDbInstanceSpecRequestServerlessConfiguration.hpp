// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCESPECREQUESTSERVERLESSCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCESPECREQUESTSERVERLESSCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBInstanceSpecRequestServerlessConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceSpecRequestServerlessConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPause, autoPause_);
      DARABONBA_PTR_TO_JSON(MaxCapacity, maxCapacity_);
      DARABONBA_PTR_TO_JSON(MinCapacity, minCapacity_);
      DARABONBA_PTR_TO_JSON(SwitchForce, switchForce_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceSpecRequestServerlessConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPause, autoPause_);
      DARABONBA_PTR_FROM_JSON(MaxCapacity, maxCapacity_);
      DARABONBA_PTR_FROM_JSON(MinCapacity, minCapacity_);
      DARABONBA_PTR_FROM_JSON(SwitchForce, switchForce_);
    };
    ModifyDBInstanceSpecRequestServerlessConfiguration() = default ;
    ModifyDBInstanceSpecRequestServerlessConfiguration(const ModifyDBInstanceSpecRequestServerlessConfiguration &) = default ;
    ModifyDBInstanceSpecRequestServerlessConfiguration(ModifyDBInstanceSpecRequestServerlessConfiguration &&) = default ;
    ModifyDBInstanceSpecRequestServerlessConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceSpecRequestServerlessConfiguration() = default ;
    ModifyDBInstanceSpecRequestServerlessConfiguration& operator=(const ModifyDBInstanceSpecRequestServerlessConfiguration &) = default ;
    ModifyDBInstanceSpecRequestServerlessConfiguration& operator=(ModifyDBInstanceSpecRequestServerlessConfiguration &&) = default ;
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
    inline ModifyDBInstanceSpecRequestServerlessConfiguration& setAutoPause(bool autoPause) { DARABONBA_PTR_SET_VALUE(autoPause_, autoPause) };


    // maxCapacity Field Functions 
    bool hasMaxCapacity() const { return this->maxCapacity_ != nullptr;};
    void deleteMaxCapacity() { this->maxCapacity_ = nullptr;};
    inline double maxCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxCapacity_, 0.0) };
    inline ModifyDBInstanceSpecRequestServerlessConfiguration& setMaxCapacity(double maxCapacity) { DARABONBA_PTR_SET_VALUE(maxCapacity_, maxCapacity) };


    // minCapacity Field Functions 
    bool hasMinCapacity() const { return this->minCapacity_ != nullptr;};
    void deleteMinCapacity() { this->minCapacity_ = nullptr;};
    inline double minCapacity() const { DARABONBA_PTR_GET_DEFAULT(minCapacity_, 0.0) };
    inline ModifyDBInstanceSpecRequestServerlessConfiguration& setMinCapacity(double minCapacity) { DARABONBA_PTR_SET_VALUE(minCapacity_, minCapacity) };


    // switchForce Field Functions 
    bool hasSwitchForce() const { return this->switchForce_ != nullptr;};
    void deleteSwitchForce() { this->switchForce_ = nullptr;};
    inline bool switchForce() const { DARABONBA_PTR_GET_DEFAULT(switchForce_, false) };
    inline ModifyDBInstanceSpecRequestServerlessConfiguration& setSwitchForce(bool switchForce) { DARABONBA_PTR_SET_VALUE(switchForce_, switchForce) };


  protected:
    // Specifies whether to enable the automatic start and stop feature for the serverless instance that runs MySQL or PostgreSQL. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // >  After the automatic start and stop feature is enabled, if no connections to the instance are established within 10 minutes, the instance is suspended. After a connection to the instance is established, the instance is automatically resumed.
    std::shared_ptr<bool> autoPause_ = nullptr;
    // The **maximum** number of RDS Capacity Units (RCUs). Valid values:
    // 
    // *   Serverless ApsaraDB RDS for MySQL instances: **1 to 32**
    // *   Serverless ApsaraDB RDS for SQL Server instances: **2 to 16**. Only integers are supported.
    // *   Serverless ApsaraDB RDS for PostgreSQL instances: **1 to 14**
    // 
    // >  The value of this parameter must be greater than or equal to the value of **MinCapacity**.
    std::shared_ptr<double> maxCapacity_ = nullptr;
    // The minimum number of RCUs. Valid values:****
    // 
    // *   Serverless ApsaraDB RDS for MySQL instances: **0.5 to 32**.
    // *   Serverless ApsaraDB RDS for SQL Server instances: **2 to 8**. Only integers are supported.
    // *   Serverless ApsaraDB RDS for PostgreSQL instances: **0.5 to 14**.
    // 
    // >  The value of this parameter must be less than or equal to the value of MaxCapacity.
    std::shared_ptr<double> minCapacity_ = nullptr;
    // Specifies whether to enable the forceful scaling feature for the serverless instance that runs MySQL or PostgreSQL. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // > 
    // 
    // *   If you set this parameter to true, **a service interruption that lasts 30 to 120 seconds occurs during forced scaling**. Process with caution.
    // 
    // *   The RCU scaling for a serverless instance immediately takes effect. In some cases, such as the execution of large transactions, the scaling does not immediately take effect. In this case, you can enable this feature to forcefully scale the RCUs of the instance.
    std::shared_ptr<bool> switchForce_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
