// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURESYNCHRONIZATIONJOBREQUESTSOURCEENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURESYNCHRONIZATIONJOBREQUESTSOURCEENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureSynchronizationJobRequestSourceEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureSynchronizationJobRequestSourceEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(OwnerID, ownerID_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureSynchronizationJobRequestSourceEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(OwnerID, ownerID_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ConfigureSynchronizationJobRequestSourceEndpoint() = default ;
    ConfigureSynchronizationJobRequestSourceEndpoint(const ConfigureSynchronizationJobRequestSourceEndpoint &) = default ;
    ConfigureSynchronizationJobRequestSourceEndpoint(ConfigureSynchronizationJobRequestSourceEndpoint &&) = default ;
    ConfigureSynchronizationJobRequestSourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureSynchronizationJobRequestSourceEndpoint() = default ;
    ConfigureSynchronizationJobRequestSourceEndpoint& operator=(const ConfigureSynchronizationJobRequestSourceEndpoint &) = default ;
    ConfigureSynchronizationJobRequestSourceEndpoint& operator=(ConfigureSynchronizationJobRequestSourceEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseName_ == nullptr
        && return this->IP_ == nullptr && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr && return this->ownerID_ == nullptr && return this->password_ == nullptr
        && return this->port_ == nullptr && return this->role_ == nullptr && return this->userName_ == nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ConfigureSynchronizationJobRequestSourceEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline ConfigureSynchronizationJobRequestSourceEndpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ConfigureSynchronizationJobRequestSourceEndpoint& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ConfigureSynchronizationJobRequestSourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ownerID Field Functions 
    bool hasOwnerID() const { return this->ownerID_ != nullptr;};
    void deleteOwnerID() { this->ownerID_ = nullptr;};
    inline string ownerID() const { DARABONBA_PTR_GET_DEFAULT(ownerID_, "") };
    inline ConfigureSynchronizationJobRequestSourceEndpoint& setOwnerID(string ownerID) { DARABONBA_PTR_SET_VALUE(ownerID_, ownerID) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ConfigureSynchronizationJobRequestSourceEndpoint& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline ConfigureSynchronizationJobRequestSourceEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ConfigureSynchronizationJobRequestSourceEndpoint& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ConfigureSynchronizationJobRequestSourceEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The name of the database to which the synchronization object in the source instance belongs.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The IP address of the source database.
    // 
    // >  You must specify this parameter only if the **SourceEndpoint.InstanceType** parameter is set to **ECS**, **Express**, **dg**, or **cen**.
    std::shared_ptr<string> IP_ = nullptr;
    // The ID of the source instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the source instance. Valid values:
    // 
    // *   **RDS**: ApsaraDB RDS instance
    // *   **Redis**: ApsaraDB for Redis instance
    // *   **PolarDB**: PolarDB for MySQL cluster or PolarDB O Edition cluster
    // *   **ECS**: self-managed database that is hosted on Elastic Compute Service (ECS)
    // *   **Express**: self-managed database that is connected over Express Connect
    // *   **dg**: self-managed database that is connected over Database Gateway
    // *   **cen**: self-managed database that is connected over Cloud Enterprise Network (CEN)
    // 
    // >  The default value is **RDS**.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The ID of the Alibaba Cloud account that owns the source RDS instance.
    // 
    // >  You can specify this parameter to synchronize data across different Alibaba Cloud accounts. In this case, you also need to specify the **SourceEndpoint.Role** parameter.
    std::shared_ptr<string> ownerID_ = nullptr;
    // The password of the source database account.
    // 
    // >  You must specify this parameter only if the **SourceEndpoint.InstanceType** parameter is set to **ECS**, **Express**, **dg**, or **cen**.
    std::shared_ptr<string> password_ = nullptr;
    // The service port number of the source database.
    // 
    // >  You must specify this parameter only if the **SourceEndpoint.InstanceType** parameter is set to **ECS**, **Express**, **dg**, or **cen**.
    std::shared_ptr<string> port_ = nullptr;
    // The name of the RAM role configured for the Alibaba Cloud account that owns the source instance.
    // 
    // >  You must specify this parameter when you synchronize data across different Alibaba Cloud accounts. For information about the permissions and authorization methods of the RAM role, see [Configure RAM authorization for cross-account data migration and synchronization](https://help.aliyun.com/document_detail/48468.html).
    std::shared_ptr<string> role_ = nullptr;
    // The database account of the source database.
    // 
    // > 
    // *   You must specify this parameter only if the **SourceEndpoint.InstanceType** parameter is set to **ECS**, **Express**, **dg**, or **cen**.
    // *   If the **SourceEndpoint.InstanceType** parameter is set to **Redis**, you do not need to specify the database account.
    // *   The permissions that are required for database accounts vary with the synchronization scenario. For more information, see [Overview of data synchronization scenarios](https://help.aliyun.com/document_detail/140954.html).
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
