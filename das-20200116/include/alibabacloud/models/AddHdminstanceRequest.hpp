// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDHDMINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDHDMINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class AddHDMInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddHDMInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(FlushAccount, flushAccount_);
      DARABONBA_PTR_TO_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_TO_JSON(InstanceArea, instanceArea_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(__context, context_);
    };
    friend void from_json(const Darabonba::Json& j, AddHDMInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(FlushAccount, flushAccount_);
      DARABONBA_PTR_FROM_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_FROM_JSON(InstanceArea, instanceArea_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(__context, context_);
    };
    AddHDMInstanceRequest() = default ;
    AddHDMInstanceRequest(const AddHDMInstanceRequest &) = default ;
    AddHDMInstanceRequest(AddHDMInstanceRequest &&) = default ;
    AddHDMInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddHDMInstanceRequest() = default ;
    AddHDMInstanceRequest& operator=(const AddHDMInstanceRequest &) = default ;
    AddHDMInstanceRequest& operator=(AddHDMInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->engine_ != nullptr
        && this->flushAccount_ != nullptr && this->instanceAlias_ != nullptr && this->instanceArea_ != nullptr && this->instanceId_ != nullptr && this->ip_ != nullptr
        && this->networkType_ != nullptr && this->password_ != nullptr && this->port_ != nullptr && this->region_ != nullptr && this->username_ != nullptr
        && this->vpcId_ != nullptr && this->context_ != nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline AddHDMInstanceRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // flushAccount Field Functions 
    bool hasFlushAccount() const { return this->flushAccount_ != nullptr;};
    void deleteFlushAccount() { this->flushAccount_ = nullptr;};
    inline string flushAccount() const { DARABONBA_PTR_GET_DEFAULT(flushAccount_, "") };
    inline AddHDMInstanceRequest& setFlushAccount(string flushAccount) { DARABONBA_PTR_SET_VALUE(flushAccount_, flushAccount) };


    // instanceAlias Field Functions 
    bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
    void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
    inline string instanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
    inline AddHDMInstanceRequest& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


    // instanceArea Field Functions 
    bool hasInstanceArea() const { return this->instanceArea_ != nullptr;};
    void deleteInstanceArea() { this->instanceArea_ = nullptr;};
    inline string instanceArea() const { DARABONBA_PTR_GET_DEFAULT(instanceArea_, "") };
    inline AddHDMInstanceRequest& setInstanceArea(string instanceArea) { DARABONBA_PTR_SET_VALUE(instanceArea_, instanceArea) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddHDMInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline AddHDMInstanceRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline AddHDMInstanceRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline AddHDMInstanceRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline AddHDMInstanceRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline AddHDMInstanceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline AddHDMInstanceRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline AddHDMInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string context() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline AddHDMInstanceRequest& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


  protected:
    // The database engine. Valid values:
    // 
    // *   **MySQL**
    // *   **PostgreSQL**
    // *   **SQLServer**
    // *   **PolarDBMySQL**
    // *   **PolarDBPostgreSQL**
    // *   **Redis**
    // *   **MongoDB**
    // *   **PolarDBOracle**
    // *   **PolarDBX**
    std::shared_ptr<string> engine_ = nullptr;
    // The reserved parameter.
    std::shared_ptr<string> flushAccount_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceAlias_ = nullptr;
    // The type of the instance on which the database is deployed. Valid values:
    // 
    // *   **RDS**: an Alibaba Cloud database instance.
    // *   **ECS**: an Elastic Compute Service (ECS) instance on which a self-managed database is deployed.
    // *   **IDC**: a self-managed database instance that is not deployed on Alibaba Cloud.
    // 
    // >  IDC refers to your data center.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceArea_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The endpoint that is used to access the instance over internal networks.
    std::shared_ptr<string> ip_ = nullptr;
    // The network type of the instance.
    std::shared_ptr<string> networkType_ = nullptr;
    // The password for the username.
    std::shared_ptr<string> password_ = nullptr;
    // The port that is used to access the instance over internal networks.
    std::shared_ptr<string> port_ = nullptr;
    // The ID of the region in which the instance resides.
    std::shared_ptr<string> region_ = nullptr;
    // The username that is used to log on to the database.
    std::shared_ptr<string> username_ = nullptr;
    // The virtual private cloud (VPC) ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The reserved parameter.
    std::shared_ptr<string> context_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
