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
    virtual bool empty() const override { return this->engine_ == nullptr
        && this->flushAccount_ == nullptr && this->instanceAlias_ == nullptr && this->instanceArea_ == nullptr && this->instanceId_ == nullptr && this->ip_ == nullptr
        && this->networkType_ == nullptr && this->password_ == nullptr && this->port_ == nullptr && this->region_ == nullptr && this->username_ == nullptr
        && this->vpcId_ == nullptr && this->context_ == nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline AddHDMInstanceRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // flushAccount Field Functions 
    bool hasFlushAccount() const { return this->flushAccount_ != nullptr;};
    void deleteFlushAccount() { this->flushAccount_ = nullptr;};
    inline string getFlushAccount() const { DARABONBA_PTR_GET_DEFAULT(flushAccount_, "") };
    inline AddHDMInstanceRequest& setFlushAccount(string flushAccount) { DARABONBA_PTR_SET_VALUE(flushAccount_, flushAccount) };


    // instanceAlias Field Functions 
    bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
    void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
    inline string getInstanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
    inline AddHDMInstanceRequest& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


    // instanceArea Field Functions 
    bool hasInstanceArea() const { return this->instanceArea_ != nullptr;};
    void deleteInstanceArea() { this->instanceArea_ = nullptr;};
    inline string getInstanceArea() const { DARABONBA_PTR_GET_DEFAULT(instanceArea_, "") };
    inline AddHDMInstanceRequest& setInstanceArea(string instanceArea) { DARABONBA_PTR_SET_VALUE(instanceArea_, instanceArea) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddHDMInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline AddHDMInstanceRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline AddHDMInstanceRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline AddHDMInstanceRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline AddHDMInstanceRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline AddHDMInstanceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline AddHDMInstanceRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline AddHDMInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string getContext() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
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
    shared_ptr<string> engine_ {};
    // The reserved parameter.
    shared_ptr<string> flushAccount_ {};
    // The name of the instance.
    shared_ptr<string> instanceAlias_ {};
    // The type of the instance on which the database is deployed. Valid values:
    // 
    // *   **RDS**: an Alibaba Cloud database instance.
    // *   **ECS**: an Elastic Compute Service (ECS) instance on which a self-managed database is deployed.
    // *   **IDC**: a self-managed database instance that is not deployed on Alibaba Cloud.
    // 
    // >  IDC refers to your data center.
    // 
    // This parameter is required.
    shared_ptr<string> instanceArea_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The endpoint that is used to access the instance over internal networks.
    shared_ptr<string> ip_ {};
    // The network type of the instance.
    shared_ptr<string> networkType_ {};
    // The password for the username.
    shared_ptr<string> password_ {};
    // The port that is used to access the instance over internal networks.
    shared_ptr<string> port_ {};
    // The ID of the region in which the instance resides.
    shared_ptr<string> region_ {};
    // The username that is used to log on to the database.
    shared_ptr<string> username_ {};
    // The virtual private cloud (VPC) ID.
    shared_ptr<string> vpcId_ {};
    // The reserved parameter.
    shared_ptr<string> context_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
