// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONNECTIONSTRINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONNECTIONSTRINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyDBInstanceConnectionStringRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceConnectionStringRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComputingGroupId, computingGroupId_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_TO_JSON(DisablePorts, disablePorts_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceConnectionStringRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputingGroupId, computingGroupId_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_FROM_JSON(DisablePorts, disablePorts_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyDBInstanceConnectionStringRequest() = default ;
    ModifyDBInstanceConnectionStringRequest(const ModifyDBInstanceConnectionStringRequest &) = default ;
    ModifyDBInstanceConnectionStringRequest(ModifyDBInstanceConnectionStringRequest &&) = default ;
    ModifyDBInstanceConnectionStringRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceConnectionStringRequest() = default ;
    ModifyDBInstanceConnectionStringRequest& operator=(const ModifyDBInstanceConnectionStringRequest &) = default ;
    ModifyDBInstanceConnectionStringRequest& operator=(ModifyDBInstanceConnectionStringRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computingGroupId_ == nullptr
        && return this->connectionString_ == nullptr && return this->connectionStringPrefix_ == nullptr && return this->DBInstanceId_ == nullptr && return this->DBInstanceNetType_ == nullptr && return this->disablePorts_ == nullptr
        && return this->regionId_ == nullptr; };
    // computingGroupId Field Functions 
    bool hasComputingGroupId() const { return this->computingGroupId_ != nullptr;};
    void deleteComputingGroupId() { this->computingGroupId_ = nullptr;};
    inline string computingGroupId() const { DARABONBA_PTR_GET_DEFAULT(computingGroupId_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setComputingGroupId(string computingGroupId) { DARABONBA_PTR_SET_VALUE(computingGroupId_, computingGroupId) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // connectionStringPrefix Field Functions 
    bool hasConnectionStringPrefix() const { return this->connectionStringPrefix_ != nullptr;};
    void deleteConnectionStringPrefix() { this->connectionStringPrefix_ = nullptr;};
    inline string connectionStringPrefix() const { DARABONBA_PTR_GET_DEFAULT(connectionStringPrefix_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setConnectionStringPrefix(string connectionStringPrefix) { DARABONBA_PTR_SET_VALUE(connectionStringPrefix_, connectionStringPrefix) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceNetType Field Functions 
    bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
    void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
    inline string DBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setDBInstanceNetType(string DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


    // disablePorts Field Functions 
    bool hasDisablePorts() const { return this->disablePorts_ != nullptr;};
    void deleteDisablePorts() { this->disablePorts_ = nullptr;};
    inline string disablePorts() const { DARABONBA_PTR_GET_DEFAULT(disablePorts_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setDisablePorts(string disablePorts) { DARABONBA_PTR_SET_VALUE(disablePorts_, disablePorts) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> computingGroupId_ = nullptr;
    // The endpoint of the cluster.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The prefix of the endpoint that is used to connect to the database.
    std::shared_ptr<string> connectionStringPrefix_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<string> DBInstanceNetType_ = nullptr;
    // *   The database ports that you want to disable. Separate multiple ports with commas (,).
    // 
    // *   This parameter is supported only for clusters whose minor engine version is 24.10.1.11098_1 or later.
    // 
    //     **
    // 
    //     **Note** If you create a cluster whose minor engine version is earlier than 24.10.1.11098_1 and you update the minor engine version to 24.10.1.11098_1 or later, the cluster still does not support this parameter.
    std::shared_ptr<string> disablePorts_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
