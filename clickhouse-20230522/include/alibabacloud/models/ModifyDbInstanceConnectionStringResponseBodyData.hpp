// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONNECTIONSTRINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONNECTIONSTRINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyDBInstanceConnectionStringResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceConnectionStringResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DisabledPorts, disabledPorts_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceConnectionStringResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DisabledPorts, disabledPorts_);
    };
    ModifyDBInstanceConnectionStringResponseBodyData() = default ;
    ModifyDBInstanceConnectionStringResponseBodyData(const ModifyDBInstanceConnectionStringResponseBodyData &) = default ;
    ModifyDBInstanceConnectionStringResponseBodyData(ModifyDBInstanceConnectionStringResponseBodyData &&) = default ;
    ModifyDBInstanceConnectionStringResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceConnectionStringResponseBodyData() = default ;
    ModifyDBInstanceConnectionStringResponseBodyData& operator=(const ModifyDBInstanceConnectionStringResponseBodyData &) = default ;
    ModifyDBInstanceConnectionStringResponseBodyData& operator=(ModifyDBInstanceConnectionStringResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionString_ == nullptr
        && return this->DBInstanceID_ == nullptr && return this->DBInstanceName_ == nullptr && return this->disabledPorts_ == nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline ModifyDBInstanceConnectionStringResponseBodyData& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // DBInstanceID Field Functions 
    bool hasDBInstanceID() const { return this->DBInstanceID_ != nullptr;};
    void deleteDBInstanceID() { this->DBInstanceID_ = nullptr;};
    inline int32_t DBInstanceID() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceID_, 0) };
    inline ModifyDBInstanceConnectionStringResponseBodyData& setDBInstanceID(int32_t DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifyDBInstanceConnectionStringResponseBodyData& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // disabledPorts Field Functions 
    bool hasDisabledPorts() const { return this->disabledPorts_ != nullptr;};
    void deleteDisabledPorts() { this->disabledPorts_ = nullptr;};
    inline string disabledPorts() const { DARABONBA_PTR_GET_DEFAULT(disabledPorts_, "") };
    inline ModifyDBInstanceConnectionStringResponseBodyData& setDisabledPorts(string disabledPorts) { DARABONBA_PTR_SET_VALUE(disabledPorts_, disabledPorts) };


  protected:
    // The endpoint of the cluster.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The cluster ID.
    std::shared_ptr<int32_t> DBInstanceID_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The disabled database ports.
    std::shared_ptr<string> disabledPorts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
