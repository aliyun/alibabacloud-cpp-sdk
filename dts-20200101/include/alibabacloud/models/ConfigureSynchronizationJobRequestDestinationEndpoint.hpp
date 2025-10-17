// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURESYNCHRONIZATIONJOBREQUESTDESTINATIONENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURESYNCHRONIZATIONJOBREQUESTDESTINATIONENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureSynchronizationJobRequestDestinationEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureSynchronizationJobRequestDestinationEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(DataBaseName, dataBaseName_);
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureSynchronizationJobRequestDestinationEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(DataBaseName, dataBaseName_);
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ConfigureSynchronizationJobRequestDestinationEndpoint() = default ;
    ConfigureSynchronizationJobRequestDestinationEndpoint(const ConfigureSynchronizationJobRequestDestinationEndpoint &) = default ;
    ConfigureSynchronizationJobRequestDestinationEndpoint(ConfigureSynchronizationJobRequestDestinationEndpoint &&) = default ;
    ConfigureSynchronizationJobRequestDestinationEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureSynchronizationJobRequestDestinationEndpoint() = default ;
    ConfigureSynchronizationJobRequestDestinationEndpoint& operator=(const ConfigureSynchronizationJobRequestDestinationEndpoint &) = default ;
    ConfigureSynchronizationJobRequestDestinationEndpoint& operator=(ConfigureSynchronizationJobRequestDestinationEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataBaseName_ == nullptr
        && return this->IP_ == nullptr && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr && return this->password_ == nullptr && return this->port_ == nullptr
        && return this->userName_ == nullptr; };
    // dataBaseName Field Functions 
    bool hasDataBaseName() const { return this->dataBaseName_ != nullptr;};
    void deleteDataBaseName() { this->dataBaseName_ = nullptr;};
    inline string dataBaseName() const { DARABONBA_PTR_GET_DEFAULT(dataBaseName_, "") };
    inline ConfigureSynchronizationJobRequestDestinationEndpoint& setDataBaseName(string dataBaseName) { DARABONBA_PTR_SET_VALUE(dataBaseName_, dataBaseName) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline ConfigureSynchronizationJobRequestDestinationEndpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ConfigureSynchronizationJobRequestDestinationEndpoint& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ConfigureSynchronizationJobRequestDestinationEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ConfigureSynchronizationJobRequestDestinationEndpoint& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline ConfigureSynchronizationJobRequestDestinationEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ConfigureSynchronizationJobRequestDestinationEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The name of the database to which the synchronization object in the destination instance belongs.
    std::shared_ptr<string> dataBaseName_ = nullptr;
    // The IP address of the destination database.
    // 
    // >  You must specify this parameter only if the **DestinationEndpoint.InstanceType** parameter is set to **Express**, **dg**, or **cen**.
    std::shared_ptr<string> IP_ = nullptr;
    // The ID of the destination instance.
    // 
    // >  If the **DestinationEndpoint.InstanceType** parameter is set to **MaxCompute** or **DataHub**, you must specify the name of the MaxCompute project or the DataHub project.
    // 
    // If the destination instance is an AnalyticDB for MySQL cluster, specify the ID of the AnalyticDB for MySQL cluster.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the destination instance. Valid values:
    // 
    // *   **Redis**: ApsaraDB for Redis instance
    // *   **RDS**: ApsaraDB RDS instance
    // *   **PolarDB**: PolarDB for MySQL cluster or PolarDB O Edition cluster
    // *   **ECS**: self-managed database that is hosted on ECS
    // *   **Express**: self-managed database that is connected over Express Connect
    // *   **DataHub**: DataHub project
    // *   **MaxCompute**: MaxCompute project
    // *   **AnalyticDB**: AnalyticDB for MySQL cluster V3.0 or V2.0
    // *   **Greenplum**: AnalyticDB for PostgreSQL instance
    // 
    // >  The default value is **RDS**.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The password of the destination database account.
    // 
    // > 
    // *   If the **DestinationEndpoint.InstanceType** parameter is set to **ECS**, **Express**, **dg**, or **cen**, you must specify the DestinationEndpoint.Password parameter.
    std::shared_ptr<string> password_ = nullptr;
    // The service port number of the destination database.
    // 
    // >  You must specify this parameter only if the **DestinationEndpoint.InstanceType** parameter is set to **ECS**, **Express**, **dg**, or **cen**.
    std::shared_ptr<string> port_ = nullptr;
    // The database account of the destination database.
    // 
    // > 
    // *   The permissions that are required for database accounts vary with the synchronization scenario. For more information, see [Overview of data synchronization scenarios](https://help.aliyun.com/document_detail/140954.html).
    // *   If the **DestinationEndpoint.InstanceType** parameter is set to **ECS**, **Express**, **dg**, or **cen**, you must specify the DestinationEndpoint.UserName parameter.
    // *   If the **DestinationEndpoint.InstanceType** parameter is set to RDS and the database version is MySQL 5.5 or MySQL 5.6, you do not need to specify the DestinationEndpoint.UserName and **DestinationEndpoint.Password** parameters.
    // *   If the **DestinationEndpoint.InstanceType** parameter is set to **Redis**, you do not need to specify the DestinationEndpoint.UserName parameter.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
