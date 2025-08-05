// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SOURCEMYSQLPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_SOURCEMYSQLPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class SourceMySQLParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SourceMySQLParameters& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(IncludeSchemaChanges, includeSchemaChanges_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SnapshotMode, snapshotMode_);
      DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
      DARABONBA_PTR_TO_JSON(User, user_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, SourceMySQLParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(IncludeSchemaChanges, includeSchemaChanges_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SnapshotMode, snapshotMode_);
      DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
      DARABONBA_PTR_FROM_JSON(User, user_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    SourceMySQLParameters() = default ;
    SourceMySQLParameters(const SourceMySQLParameters &) = default ;
    SourceMySQLParameters(SourceMySQLParameters &&) = default ;
    SourceMySQLParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SourceMySQLParameters() = default ;
    SourceMySQLParameters& operator=(const SourceMySQLParameters &) = default ;
    SourceMySQLParameters& operator=(SourceMySQLParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseName_ != nullptr
        && this->hostName_ != nullptr && this->includeSchemaChanges_ != nullptr && this->networkType_ != nullptr && this->password_ != nullptr && this->port_ != nullptr
        && this->regionId_ != nullptr && this->securityGroupId_ != nullptr && this->snapshotMode_ != nullptr && this->tableNames_ != nullptr && this->user_ != nullptr
        && this->vSwitchIds_ != nullptr && this->vpcId_ != nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline SourceMySQLParameters& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline SourceMySQLParameters& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // includeSchemaChanges Field Functions 
    bool hasIncludeSchemaChanges() const { return this->includeSchemaChanges_ != nullptr;};
    void deleteIncludeSchemaChanges() { this->includeSchemaChanges_ = nullptr;};
    inline string includeSchemaChanges() const { DARABONBA_PTR_GET_DEFAULT(includeSchemaChanges_, "") };
    inline SourceMySQLParameters& setIncludeSchemaChanges(string includeSchemaChanges) { DARABONBA_PTR_SET_VALUE(includeSchemaChanges_, includeSchemaChanges) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline SourceMySQLParameters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline SourceMySQLParameters& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline SourceMySQLParameters& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SourceMySQLParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline SourceMySQLParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // snapshotMode Field Functions 
    bool hasSnapshotMode() const { return this->snapshotMode_ != nullptr;};
    void deleteSnapshotMode() { this->snapshotMode_ = nullptr;};
    inline string snapshotMode() const { DARABONBA_PTR_GET_DEFAULT(snapshotMode_, "") };
    inline SourceMySQLParameters& setSnapshotMode(string snapshotMode) { DARABONBA_PTR_SET_VALUE(snapshotMode_, snapshotMode) };


    // tableNames Field Functions 
    bool hasTableNames() const { return this->tableNames_ != nullptr;};
    void deleteTableNames() { this->tableNames_ = nullptr;};
    inline string tableNames() const { DARABONBA_PTR_GET_DEFAULT(tableNames_, "") };
    inline SourceMySQLParameters& setTableNames(string tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline SourceMySQLParameters& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline string vSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
    inline SourceMySQLParameters& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline SourceMySQLParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> databaseName_ = nullptr;
    std::shared_ptr<string> hostName_ = nullptr;
    std::shared_ptr<string> includeSchemaChanges_ = nullptr;
    std::shared_ptr<string> networkType_ = nullptr;
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> snapshotMode_ = nullptr;
    std::shared_ptr<string> tableNames_ = nullptr;
    std::shared_ptr<string> user_ = nullptr;
    std::shared_ptr<string> vSwitchIds_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
