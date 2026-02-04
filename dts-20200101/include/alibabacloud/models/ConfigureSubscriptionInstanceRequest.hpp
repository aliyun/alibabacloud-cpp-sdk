// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURESUBSCRIPTIONINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURESUBSCRIPTIONINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureSubscriptionInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureSubscriptionInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(SubscriptionDataType, subscriptionDataType_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstance, subscriptionInstance_);
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceId, subscriptionInstanceId_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceName, subscriptionInstanceName_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceNetworkType, subscriptionInstanceNetworkType_);
      DARABONBA_PTR_TO_JSON(SubscriptionObject, subscriptionObject_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureSubscriptionInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(SubscriptionDataType, subscriptionDataType_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstance, subscriptionInstance_);
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceId, subscriptionInstanceId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceName, subscriptionInstanceName_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceNetworkType, subscriptionInstanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(SubscriptionObject, subscriptionObject_);
    };
    ConfigureSubscriptionInstanceRequest() = default ;
    ConfigureSubscriptionInstanceRequest(const ConfigureSubscriptionInstanceRequest &) = default ;
    ConfigureSubscriptionInstanceRequest(ConfigureSubscriptionInstanceRequest &&) = default ;
    ConfigureSubscriptionInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureSubscriptionInstanceRequest() = default ;
    ConfigureSubscriptionInstanceRequest& operator=(const ConfigureSubscriptionInstanceRequest &) = default ;
    ConfigureSubscriptionInstanceRequest& operator=(ConfigureSubscriptionInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubscriptionInstance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubscriptionInstance& obj) { 
        DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      };
      friend void from_json(const Darabonba::Json& j, SubscriptionInstance& obj) { 
        DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      };
      SubscriptionInstance() = default ;
      SubscriptionInstance(const SubscriptionInstance &) = default ;
      SubscriptionInstance(SubscriptionInstance &&) = default ;
      SubscriptionInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubscriptionInstance() = default ;
      SubscriptionInstance& operator=(const SubscriptionInstance &) = default ;
      SubscriptionInstance& operator=(SubscriptionInstance &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->VPCId_ == nullptr
        && this->vSwitchId_ == nullptr; };
      // VPCId Field Functions 
      bool hasVPCId() const { return this->VPCId_ != nullptr;};
      void deleteVPCId() { this->VPCId_ = nullptr;};
      inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
      inline SubscriptionInstance& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline SubscriptionInstance& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    protected:
      // The ID of the VPC in which the change tracking instance is deployed.
      // 
      // > This parameter is available and required only if the **SubscriptionInstanceNetworkType** parameter is set to **vpc**.
      shared_ptr<string> VPCId_ {};
      // The ID of the vSwitch in the specified VPC.
      // 
      // > This parameter is available and required only if the **SubscriptionInstanceNetworkType** parameter is set to **vpc**.
      shared_ptr<string> vSwitchId_ {};
    };

    class SubscriptionDataType : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubscriptionDataType& obj) { 
        DARABONBA_PTR_TO_JSON(DDL, DDL_);
        DARABONBA_PTR_TO_JSON(DML, DML_);
      };
      friend void from_json(const Darabonba::Json& j, SubscriptionDataType& obj) { 
        DARABONBA_PTR_FROM_JSON(DDL, DDL_);
        DARABONBA_PTR_FROM_JSON(DML, DML_);
      };
      SubscriptionDataType() = default ;
      SubscriptionDataType(const SubscriptionDataType &) = default ;
      SubscriptionDataType(SubscriptionDataType &&) = default ;
      SubscriptionDataType(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubscriptionDataType() = default ;
      SubscriptionDataType& operator=(const SubscriptionDataType &) = default ;
      SubscriptionDataType& operator=(SubscriptionDataType &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DDL_ == nullptr
        && this->DML_ == nullptr; };
      // DDL Field Functions 
      bool hasDDL() const { return this->DDL_ != nullptr;};
      void deleteDDL() { this->DDL_ = nullptr;};
      inline bool getDDL() const { DARABONBA_PTR_GET_DEFAULT(DDL_, false) };
      inline SubscriptionDataType& setDDL(bool DDL) { DARABONBA_PTR_SET_VALUE(DDL_, DDL) };


      // DML Field Functions 
      bool hasDML() const { return this->DML_ != nullptr;};
      void deleteDML() { this->DML_ = nullptr;};
      inline bool getDML() const { DARABONBA_PTR_GET_DEFAULT(DML_, false) };
      inline SubscriptionDataType& setDML(bool DML) { DARABONBA_PTR_SET_VALUE(DML_, DML) };


    protected:
      // Specifies whether to track DDL statements. Default value: true. Valid values:
      // 
      // *   **true**: tracks DDL statements.
      // *   **false**: does not track DDL statements.
      // 
      // This parameter is required.
      shared_ptr<bool> DDL_ {};
      // Specifies whether to track DML statements. Default value: true. Valid values:
      // 
      // *   **true**: tracks DML statements.
      // *   **false**: does not track DML statements.
      // 
      // This parameter is required.
      shared_ptr<bool> DML_ {};
    };

    class SourceEndpoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceEndpoint& obj) { 
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
      friend void from_json(const Darabonba::Json& j, SourceEndpoint& obj) { 
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
      SourceEndpoint() = default ;
      SourceEndpoint(const SourceEndpoint &) = default ;
      SourceEndpoint(SourceEndpoint &&) = default ;
      SourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceEndpoint() = default ;
      SourceEndpoint& operator=(const SourceEndpoint &) = default ;
      SourceEndpoint& operator=(SourceEndpoint &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->IP_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->oracleSID_ == nullptr && this->ownerID_ == nullptr
        && this->password_ == nullptr && this->port_ == nullptr && this->role_ == nullptr && this->userName_ == nullptr; };
      // databaseName Field Functions 
      bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
      void deleteDatabaseName() { this->databaseName_ = nullptr;};
      inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
      inline SourceEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


      // IP Field Functions 
      bool hasIP() const { return this->IP_ != nullptr;};
      void deleteIP() { this->IP_ = nullptr;};
      inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
      inline SourceEndpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


      // instanceID Field Functions 
      bool hasInstanceID() const { return this->instanceID_ != nullptr;};
      void deleteInstanceID() { this->instanceID_ = nullptr;};
      inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
      inline SourceEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline SourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // oracleSID Field Functions 
      bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
      void deleteOracleSID() { this->oracleSID_ = nullptr;};
      inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
      inline SourceEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


      // ownerID Field Functions 
      bool hasOwnerID() const { return this->ownerID_ != nullptr;};
      void deleteOwnerID() { this->ownerID_ = nullptr;};
      inline string getOwnerID() const { DARABONBA_PTR_GET_DEFAULT(ownerID_, "") };
      inline SourceEndpoint& setOwnerID(string ownerID) { DARABONBA_PTR_SET_VALUE(ownerID_, ownerID) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline SourceEndpoint& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline SourceEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline SourceEndpoint& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline SourceEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The name of the source database.
      shared_ptr<string> databaseName_ {};
      // The endpoint of the source database.
      // 
      // > This parameter is available and required only if the source database is a self-managed database.
      shared_ptr<string> IP_ {};
      // The ID of the source instance.
      // 
      // > This parameter is available and required only if the source instance is an ApsaraDB RDS for MySQL instance, a PolarDB-X 1.0 instance, or a PolarDB for MySQL cluster.
      shared_ptr<string> instanceID_ {};
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
      shared_ptr<string> instanceType_ {};
      // The system ID (SID) of the Oracle database.
      // 
      // > This parameter is available and required only if the source database is a self-managed Oracle database and the Oracle database is deployed in a non-RAC architecture.
      shared_ptr<string> oracleSID_ {};
      // The ID of the Alibaba Cloud account to which the source database belongs.
      // 
      // > This parameter is available and required only if you track data changes across different Alibaba Cloud accounts.
      shared_ptr<string> ownerID_ {};
      // The password of the account that is used to connect to the source database.
      shared_ptr<string> password_ {};
      // The service port number of the source database.
      // 
      // > This parameter is available and required only if the source database is a self-managed database.
      shared_ptr<string> port_ {};
      // The RAM role that is authorized to access the source database. This parameter is required if the source database does not belong to the Alibaba Cloud account that you use to configure the change tracking task. In this case, you must authorize the Alibaba Cloud account to access the source database by using a RAM role.
      // 
      // > For more information about the permissions that are required for the RAM role and how to grant permissions to the RAM role, see [Configure RAM authorization for cross-account data migration and synchronization](https://help.aliyun.com/document_detail/48468.html).
      shared_ptr<string> role_ {};
      // The username of the account that is used to connect to the source database.
      // 
      // > The permissions that are required for the database account vary based on change tracking scenarios. For more information, see [Overview of change tracking scenarios](https://help.aliyun.com/document_detail/145715.html).
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->sourceEndpoint_ == nullptr
        && this->subscriptionDataType_ == nullptr && this->subscriptionInstance_ == nullptr && this->accountId_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->subscriptionInstanceId_ == nullptr && this->subscriptionInstanceName_ == nullptr && this->subscriptionInstanceNetworkType_ == nullptr && this->subscriptionObject_ == nullptr; };
    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const ConfigureSubscriptionInstanceRequest::SourceEndpoint & getSourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, ConfigureSubscriptionInstanceRequest::SourceEndpoint) };
    inline ConfigureSubscriptionInstanceRequest::SourceEndpoint getSourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, ConfigureSubscriptionInstanceRequest::SourceEndpoint) };
    inline ConfigureSubscriptionInstanceRequest& setSourceEndpoint(const ConfigureSubscriptionInstanceRequest::SourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline ConfigureSubscriptionInstanceRequest& setSourceEndpoint(ConfigureSubscriptionInstanceRequest::SourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // subscriptionDataType Field Functions 
    bool hasSubscriptionDataType() const { return this->subscriptionDataType_ != nullptr;};
    void deleteSubscriptionDataType() { this->subscriptionDataType_ = nullptr;};
    inline const ConfigureSubscriptionInstanceRequest::SubscriptionDataType & getSubscriptionDataType() const { DARABONBA_PTR_GET_CONST(subscriptionDataType_, ConfigureSubscriptionInstanceRequest::SubscriptionDataType) };
    inline ConfigureSubscriptionInstanceRequest::SubscriptionDataType getSubscriptionDataType() { DARABONBA_PTR_GET(subscriptionDataType_, ConfigureSubscriptionInstanceRequest::SubscriptionDataType) };
    inline ConfigureSubscriptionInstanceRequest& setSubscriptionDataType(const ConfigureSubscriptionInstanceRequest::SubscriptionDataType & subscriptionDataType) { DARABONBA_PTR_SET_VALUE(subscriptionDataType_, subscriptionDataType) };
    inline ConfigureSubscriptionInstanceRequest& setSubscriptionDataType(ConfigureSubscriptionInstanceRequest::SubscriptionDataType && subscriptionDataType) { DARABONBA_PTR_SET_RVALUE(subscriptionDataType_, subscriptionDataType) };


    // subscriptionInstance Field Functions 
    bool hasSubscriptionInstance() const { return this->subscriptionInstance_ != nullptr;};
    void deleteSubscriptionInstance() { this->subscriptionInstance_ = nullptr;};
    inline const ConfigureSubscriptionInstanceRequest::SubscriptionInstance & getSubscriptionInstance() const { DARABONBA_PTR_GET_CONST(subscriptionInstance_, ConfigureSubscriptionInstanceRequest::SubscriptionInstance) };
    inline ConfigureSubscriptionInstanceRequest::SubscriptionInstance getSubscriptionInstance() { DARABONBA_PTR_GET(subscriptionInstance_, ConfigureSubscriptionInstanceRequest::SubscriptionInstance) };
    inline ConfigureSubscriptionInstanceRequest& setSubscriptionInstance(const ConfigureSubscriptionInstanceRequest::SubscriptionInstance & subscriptionInstance) { DARABONBA_PTR_SET_VALUE(subscriptionInstance_, subscriptionInstance) };
    inline ConfigureSubscriptionInstanceRequest& setSubscriptionInstance(ConfigureSubscriptionInstanceRequest::SubscriptionInstance && subscriptionInstance) { DARABONBA_PTR_SET_RVALUE(subscriptionInstance_, subscriptionInstance) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ConfigureSubscriptionInstanceRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ConfigureSubscriptionInstanceRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigureSubscriptionInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigureSubscriptionInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // subscriptionInstanceId Field Functions 
    bool hasSubscriptionInstanceId() const { return this->subscriptionInstanceId_ != nullptr;};
    void deleteSubscriptionInstanceId() { this->subscriptionInstanceId_ = nullptr;};
    inline string getSubscriptionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceId_, "") };
    inline ConfigureSubscriptionInstanceRequest& setSubscriptionInstanceId(string subscriptionInstanceId) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceId_, subscriptionInstanceId) };


    // subscriptionInstanceName Field Functions 
    bool hasSubscriptionInstanceName() const { return this->subscriptionInstanceName_ != nullptr;};
    void deleteSubscriptionInstanceName() { this->subscriptionInstanceName_ = nullptr;};
    inline string getSubscriptionInstanceName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceName_, "") };
    inline ConfigureSubscriptionInstanceRequest& setSubscriptionInstanceName(string subscriptionInstanceName) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceName_, subscriptionInstanceName) };


    // subscriptionInstanceNetworkType Field Functions 
    bool hasSubscriptionInstanceNetworkType() const { return this->subscriptionInstanceNetworkType_ != nullptr;};
    void deleteSubscriptionInstanceNetworkType() { this->subscriptionInstanceNetworkType_ = nullptr;};
    inline string getSubscriptionInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceNetworkType_, "") };
    inline ConfigureSubscriptionInstanceRequest& setSubscriptionInstanceNetworkType(string subscriptionInstanceNetworkType) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceNetworkType_, subscriptionInstanceNetworkType) };


    // subscriptionObject Field Functions 
    bool hasSubscriptionObject() const { return this->subscriptionObject_ != nullptr;};
    void deleteSubscriptionObject() { this->subscriptionObject_ = nullptr;};
    inline string getSubscriptionObject() const { DARABONBA_PTR_GET_DEFAULT(subscriptionObject_, "") };
    inline ConfigureSubscriptionInstanceRequest& setSubscriptionObject(string subscriptionObject) { DARABONBA_PTR_SET_VALUE(subscriptionObject_, subscriptionObject) };


  protected:
    shared_ptr<ConfigureSubscriptionInstanceRequest::SourceEndpoint> sourceEndpoint_ {};
    shared_ptr<ConfigureSubscriptionInstanceRequest::SubscriptionDataType> subscriptionDataType_ {};
    shared_ptr<ConfigureSubscriptionInstanceRequest::SubscriptionInstance> subscriptionInstance_ {};
    // The ID of the Alibaba Cloud account. You do not need to specify this parameter because this parameter is about to be discontinued.
    shared_ptr<string> accountId_ {};
    shared_ptr<string> ownerId_ {};
    shared_ptr<string> regionId_ {};
    // 资源组ID。
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the change tracking instance. You can call the [DescribeSubscriptionInstances](https://help.aliyun.com/document_detail/49442.html) operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> subscriptionInstanceId_ {};
    // The name of the change tracking instance.
    // 
    // > We recommend that you specify a descriptive name for easy identification. You do not need to use a unique name.
    shared_ptr<string> subscriptionInstanceName_ {};
    // The network type of the change tracking instance. Set the value to **vpc**, which specifies the Virtual Private Cloud (VPC) network type.
    // 
    // > 
    // 
    // *   To use the new version of the change tracking feature, you must specify the SubscriptionInstanceNetworkType parameter. You must also specify the **SubscriptionInstance.VPCId** and **SubscriptionInstance.VSwitchID** parameters. If you do not specify the SubscriptionInstanceNetworkType parameter, the previous version of the change tracking feature is used.
    // 
    // *   The previous version of the change tracking feature supports self-managed MySQL databases, ApsaraDB RDS for MySQL instances, and PolarDB-X 1.0 instances. The new version of the change tracking feature supports self-managed MySQL databases, ApsaraDB RDS for MySQL instances, PolarDB for MySQL clusters, and Oracle databases.
    shared_ptr<string> subscriptionInstanceNetworkType_ {};
    // The objects for which you want to track data changes. The value is a JSON string and can contain regular expressions. For more information, see [SubscriptionObjects](https://help.aliyun.com/document_detail/141902.html).
    // 
    // This parameter is required.
    shared_ptr<string> subscriptionObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
