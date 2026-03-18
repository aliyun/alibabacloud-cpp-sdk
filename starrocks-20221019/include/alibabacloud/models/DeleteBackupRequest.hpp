// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBACKUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBACKUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DeleteBackupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBackupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupTaskId, backupTaskId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBackupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupTaskId, backupTaskId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteBackupRequest() = default ;
    DeleteBackupRequest(const DeleteBackupRequest &) = default ;
    DeleteBackupRequest(DeleteBackupRequest &&) = default ;
    DeleteBackupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBackupRequest() = default ;
    DeleteBackupRequest& operator=(const DeleteBackupRequest &) = default ;
    DeleteBackupRequest& operator=(DeleteBackupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupTaskId_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr; };
    // backupTaskId Field Functions 
    bool hasBackupTaskId() const { return this->backupTaskId_ != nullptr;};
    void deleteBackupTaskId() { this->backupTaskId_ = nullptr;};
    inline string getBackupTaskId() const { DARABONBA_PTR_GET_DEFAULT(backupTaskId_, "") };
    inline DeleteBackupRequest& setBackupTaskId(string backupTaskId) { DARABONBA_PTR_SET_VALUE(backupTaskId_, backupTaskId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteBackupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteBackupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> backupTaskId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
