// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESANDBOXINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESANDBOXINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class DeleteSandboxInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSandboxInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSandboxInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DeleteSandboxInstanceRequest() = default ;
    DeleteSandboxInstanceRequest(const DeleteSandboxInstanceRequest &) = default ;
    DeleteSandboxInstanceRequest(DeleteSandboxInstanceRequest &&) = default ;
    DeleteSandboxInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSandboxInstanceRequest() = default ;
    DeleteSandboxInstanceRequest& operator=(const DeleteSandboxInstanceRequest &) = default ;
    DeleteSandboxInstanceRequest& operator=(DeleteSandboxInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupPlanId_ == nullptr
        && this->instanceId_ == nullptr && this->zoneId_ == nullptr; };
    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline DeleteSandboxInstanceRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteSandboxInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DeleteSandboxInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the backup schedule. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/437215.html) operation to query the ID of the backup schedule.
    // 
    // > If your instance is an ApsaraDB RDS for MySQL instance, you can [configure automatic access to a data source](https://help.aliyun.com/document_detail/193091.html) to automatically add the instance to DBS and obtain the ID of the backup schedule.
    // 
    // This parameter is required.
    shared_ptr<string> backupPlanId_ {};
    // The ID of the sandbox instance. You can call the [DescribeSandboxInstances](https://help.aliyun.com/document_detail/437257.html) operation to query the ID of the sandbox instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
