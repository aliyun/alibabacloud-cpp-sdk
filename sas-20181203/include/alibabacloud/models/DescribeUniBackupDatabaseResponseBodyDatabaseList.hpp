// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPDATABASERESPONSEBODYDATABASELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPDATABASERESPONSEBODYDATABASELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUniBackupDatabaseResponseBodyDatabaseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUniBackupDatabaseResponseBodyDatabaseList& obj) { 
      DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
      DARABONBA_PTR_TO_JSON(CreatedByProduct, createdByProduct_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_TO_JSON(DatabaseVersion, databaseVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceUuid, instanceUuid_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUniBackupDatabaseResponseBodyDatabaseList& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
      DARABONBA_PTR_FROM_JSON(CreatedByProduct, createdByProduct_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_FROM_JSON(DatabaseVersion, databaseVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceUuid, instanceUuid_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeUniBackupDatabaseResponseBodyDatabaseList() = default ;
    DescribeUniBackupDatabaseResponseBodyDatabaseList(const DescribeUniBackupDatabaseResponseBodyDatabaseList &) = default ;
    DescribeUniBackupDatabaseResponseBodyDatabaseList(DescribeUniBackupDatabaseResponseBodyDatabaseList &&) = default ;
    DescribeUniBackupDatabaseResponseBodyDatabaseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUniBackupDatabaseResponseBodyDatabaseList() = default ;
    DescribeUniBackupDatabaseResponseBodyDatabaseList& operator=(const DescribeUniBackupDatabaseResponseBodyDatabaseList &) = default ;
    DescribeUniBackupDatabaseResponseBodyDatabaseList& operator=(DescribeUniBackupDatabaseResponseBodyDatabaseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentStatus_ != nullptr
        && this->createdByProduct_ != nullptr && this->databaseName_ != nullptr && this->databaseType_ != nullptr && this->databaseVersion_ != nullptr && this->instanceId_ != nullptr
        && this->instanceName_ != nullptr && this->instanceUuid_ != nullptr && this->policyId_ != nullptr && this->status_ != nullptr; };
    // agentStatus Field Functions 
    bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
    void deleteAgentStatus() { this->agentStatus_ = nullptr;};
    inline string agentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
    inline DescribeUniBackupDatabaseResponseBodyDatabaseList& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


    // createdByProduct Field Functions 
    bool hasCreatedByProduct() const { return this->createdByProduct_ != nullptr;};
    void deleteCreatedByProduct() { this->createdByProduct_ = nullptr;};
    inline string createdByProduct() const { DARABONBA_PTR_GET_DEFAULT(createdByProduct_, "") };
    inline DescribeUniBackupDatabaseResponseBodyDatabaseList& setCreatedByProduct(string createdByProduct) { DARABONBA_PTR_SET_VALUE(createdByProduct_, createdByProduct) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeUniBackupDatabaseResponseBodyDatabaseList& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // databaseType Field Functions 
    bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
    void deleteDatabaseType() { this->databaseType_ = nullptr;};
    inline string databaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
    inline DescribeUniBackupDatabaseResponseBodyDatabaseList& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


    // databaseVersion Field Functions 
    bool hasDatabaseVersion() const { return this->databaseVersion_ != nullptr;};
    void deleteDatabaseVersion() { this->databaseVersion_ = nullptr;};
    inline string databaseVersion() const { DARABONBA_PTR_GET_DEFAULT(databaseVersion_, "") };
    inline DescribeUniBackupDatabaseResponseBodyDatabaseList& setDatabaseVersion(string databaseVersion) { DARABONBA_PTR_SET_VALUE(databaseVersion_, databaseVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeUniBackupDatabaseResponseBodyDatabaseList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeUniBackupDatabaseResponseBodyDatabaseList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceUuid Field Functions 
    bool hasInstanceUuid() const { return this->instanceUuid_ != nullptr;};
    void deleteInstanceUuid() { this->instanceUuid_ = nullptr;};
    inline string instanceUuid() const { DARABONBA_PTR_GET_DEFAULT(instanceUuid_, "") };
    inline DescribeUniBackupDatabaseResponseBodyDatabaseList& setInstanceUuid(string instanceUuid) { DARABONBA_PTR_SET_VALUE(instanceUuid_, instanceUuid) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline DescribeUniBackupDatabaseResponseBodyDatabaseList& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeUniBackupDatabaseResponseBodyDatabaseList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The status of the anti-ransomware agent. Valid values:
    // 
    // *   **UNKNOWN**: unknown
    // *   **INSTALLED**: installed
    // *   **INSTALL_FAILED**: installation failed
    // *   **UNINSTALL_FAILED**: uninstallation failed
    std::shared_ptr<string> agentStatus_ = nullptr;
    // The service from which the database is created. Valid values:
    // 
    // *   **HBR**: HBR
    // *   **AEGIS**: Security Center
    std::shared_ptr<string> createdByProduct_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The type of the database. Valid values:
    // 
    // *   **MYSQL**
    // *   **MSSQL**
    // *   **Oracle**
    std::shared_ptr<string> databaseType_ = nullptr;
    // The version of the database engine.
    std::shared_ptr<string> databaseVersion_ = nullptr;
    // The ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the instance to which the database belongs.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The UUID of the Hybrid Backup Recovery (HBR) agent that is used to back up the data of the database.
    std::shared_ptr<string> instanceUuid_ = nullptr;
    // The ID of the anti-ransomware policy.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // The status of the ECS instance. Valid values:
    // 
    // *   **Stopped**
    // *   **Running**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
