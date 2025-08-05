// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURESUBSCRIPTIONINSTANCEREQUESTSOURCEENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURESUBSCRIPTIONINSTANCEREQUESTSOURCEENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureSubscriptionInstanceRequestSourceEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureSubscriptionInstanceRequestSourceEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
      DARABONBA_PTR_TO_JSON(OwnerID, ownerID_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureSubscriptionInstanceRequestSourceEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
      DARABONBA_PTR_FROM_JSON(OwnerID, ownerID_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ConfigureSubscriptionInstanceRequestSourceEndpoint() = default ;
    ConfigureSubscriptionInstanceRequestSourceEndpoint(const ConfigureSubscriptionInstanceRequestSourceEndpoint &) = default ;
    ConfigureSubscriptionInstanceRequestSourceEndpoint(ConfigureSubscriptionInstanceRequestSourceEndpoint &&) = default ;
    ConfigureSubscriptionInstanceRequestSourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureSubscriptionInstanceRequestSourceEndpoint() = default ;
    ConfigureSubscriptionInstanceRequestSourceEndpoint& operator=(const ConfigureSubscriptionInstanceRequestSourceEndpoint &) = default ;
    ConfigureSubscriptionInstanceRequestSourceEndpoint& operator=(ConfigureSubscriptionInstanceRequestSourceEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseName_ != nullptr
        && this->IP_ != nullptr && this->instanceID_ != nullptr && this->instanceType_ != nullptr && this->oracleSID_ != nullptr && this->ownerID_ != nullptr
        && this->password_ != nullptr && this->port_ != nullptr && this->role_ != nullptr && this->userName_ != nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ConfigureSubscriptionInstanceRequestSourceEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline ConfigureSubscriptionInstanceRequestSourceEndpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string instanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline ConfigureSubscriptionInstanceRequestSourceEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ConfigureSubscriptionInstanceRequestSourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // oracleSID Field Functions 
    bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
    void deleteOracleSID() { this->oracleSID_ = nullptr;};
    inline string oracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
    inline ConfigureSubscriptionInstanceRequestSourceEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


    // ownerID Field Functions 
    bool hasOwnerID() const { return this->ownerID_ != nullptr;};
    void deleteOwnerID() { this->ownerID_ = nullptr;};
    inline string ownerID() const { DARABONBA_PTR_GET_DEFAULT(ownerID_, "") };
    inline ConfigureSubscriptionInstanceRequestSourceEndpoint& setOwnerID(string ownerID) { DARABONBA_PTR_SET_VALUE(ownerID_, ownerID) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ConfigureSubscriptionInstanceRequestSourceEndpoint& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline ConfigureSubscriptionInstanceRequestSourceEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ConfigureSubscriptionInstanceRequestSourceEndpoint& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ConfigureSubscriptionInstanceRequestSourceEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The name of the source database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The endpoint of the source database.
    // 
    // > This parameter is available and required only if the source database is a self-managed database.
    std::shared_ptr<string> IP_ = nullptr;
    // The ID of the source instance.
    // 
    // > This parameter is available and required only if the source instance is an ApsaraDB RDS for MySQL instance, a PolarDB-X 1.0 instance, or a PolarDB for MySQL cluster.
    std::shared_ptr<string> instanceID_ = nullptr;
    // The type of the source instance. Valid values:
    // 
    // *   **RDS**: ApsaraDB RDS for MySQL instance
    // *   **PolarDB**: PolarDB for MySQL cluster.
    // *   **LocalInstance**: self-managed database with a public IP address
    // *   **ECS**: self-managed database hosted on an Elastic Compute Service (ECS) instance
    // *   **Express**: self-managed database connected over Express Connect
    // *   **CEN**: self-managed database connected over Cloud Enterprise Network (CEN)
    // *   **dg**: self-managed database connected over Database Gateway
    // 
    // > The engine of a self-managed database can be MySQL or Oracle. You must specify the engine type when you call the [CreateSubscriptionInstance](https://help.aliyun.com/document_detail/49436.html) operation.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The system ID (SID) of the Oracle database.
    // 
    // > This parameter is available and required only if the source database is a self-managed Oracle database and the Oracle database is deployed in a non-RAC architecture.
    std::shared_ptr<string> oracleSID_ = nullptr;
    // The ID of the Alibaba Cloud account to which the source database belongs.
    // 
    // > This parameter is available and required only if you track data changes across different Alibaba Cloud accounts.
    std::shared_ptr<string> ownerID_ = nullptr;
    // The password of the account that is used to connect to the source database.
    std::shared_ptr<string> password_ = nullptr;
    // The service port number of the source database.
    // 
    // > This parameter is available and required only if the source database is a self-managed database.
    std::shared_ptr<string> port_ = nullptr;
    // The RAM role that is authorized to access the source database. This parameter is required if the source database does not belong to the Alibaba Cloud account that you use to configure the change tracking task. In this case, you must authorize the Alibaba Cloud account to access the source database by using a RAM role.
    // 
    // > For more information about the permissions that are required for the RAM role and how to grant permissions to the RAM role, see [Configure RAM authorization for cross-account data migration and synchronization](https://help.aliyun.com/document_detail/48468.html).
    std::shared_ptr<string> role_ = nullptr;
    // The username of the account that is used to connect to the source database.
    // 
    // > The permissions that are required for the database account vary based on change tracking scenarios. For more information, see [Overview of change tracking scenarios](https://help.aliyun.com/document_detail/145715.html).
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
