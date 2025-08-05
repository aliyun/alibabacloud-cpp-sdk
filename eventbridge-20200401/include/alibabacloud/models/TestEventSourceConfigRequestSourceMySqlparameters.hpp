// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTEVENTSOURCECONFIGREQUESTSOURCEMYSQLPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_TESTEVENTSOURCECONFIGREQUESTSOURCEMYSQLPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class TestEventSourceConfigRequestSourceMySQLParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestEventSourceConfigRequestSourceMySQLParameters& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
      DARABONBA_PTR_TO_JSON(User, user_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, TestEventSourceConfigRequestSourceMySQLParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
      DARABONBA_PTR_FROM_JSON(User, user_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    TestEventSourceConfigRequestSourceMySQLParameters() = default ;
    TestEventSourceConfigRequestSourceMySQLParameters(const TestEventSourceConfigRequestSourceMySQLParameters &) = default ;
    TestEventSourceConfigRequestSourceMySQLParameters(TestEventSourceConfigRequestSourceMySQLParameters &&) = default ;
    TestEventSourceConfigRequestSourceMySQLParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestEventSourceConfigRequestSourceMySQLParameters() = default ;
    TestEventSourceConfigRequestSourceMySQLParameters& operator=(const TestEventSourceConfigRequestSourceMySQLParameters &) = default ;
    TestEventSourceConfigRequestSourceMySQLParameters& operator=(TestEventSourceConfigRequestSourceMySQLParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseName_ != nullptr
        && this->hostName_ != nullptr && this->networkType_ != nullptr && this->password_ != nullptr && this->port_ != nullptr && this->regionId_ != nullptr
        && this->securityGroupId_ != nullptr && this->tableNames_ != nullptr && this->user_ != nullptr && this->vSwitchIds_ != nullptr && this->vpcId_ != nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline TestEventSourceConfigRequestSourceMySQLParameters& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline TestEventSourceConfigRequestSourceMySQLParameters& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline TestEventSourceConfigRequestSourceMySQLParameters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline TestEventSourceConfigRequestSourceMySQLParameters& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline TestEventSourceConfigRequestSourceMySQLParameters& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline TestEventSourceConfigRequestSourceMySQLParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline TestEventSourceConfigRequestSourceMySQLParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // tableNames Field Functions 
    bool hasTableNames() const { return this->tableNames_ != nullptr;};
    void deleteTableNames() { this->tableNames_ = nullptr;};
    inline string tableNames() const { DARABONBA_PTR_GET_DEFAULT(tableNames_, "") };
    inline TestEventSourceConfigRequestSourceMySQLParameters& setTableNames(string tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline TestEventSourceConfigRequestSourceMySQLParameters& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline string vSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
    inline TestEventSourceConfigRequestSourceMySQLParameters& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline TestEventSourceConfigRequestSourceMySQLParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The endpoint of the database.
    std::shared_ptr<string> hostName_ = nullptr;
    // The network type.
    // 
    // Valid values:
    // 
    // *   PrivateNetwork
    // *   PublicNetwork
    std::shared_ptr<string> networkType_ = nullptr;
    // The password that is used for authentication.
    std::shared_ptr<string> password_ = nullptr;
    // The port that is used to connect to the database.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The table name. The name must be prefixed with the database name. ${DatabaseName}.${TableName}
    std::shared_ptr<string> tableNames_ = nullptr;
    // The username that is used to log on to the database.
    std::shared_ptr<string> user_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchIds_ = nullptr;
    // The virtual private cloud (VPC) ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
