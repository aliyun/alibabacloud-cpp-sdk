// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHDISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHDISKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AttachDiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachDiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachDiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    AttachDiskRequest() = default ;
    AttachDiskRequest(const AttachDiskRequest &) = default ;
    AttachDiskRequest(AttachDiskRequest &&) = default ;
    AttachDiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachDiskRequest() = default ;
    AttachDiskRequest& operator=(const AttachDiskRequest &) = default ;
    AttachDiskRequest& operator=(AttachDiskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteWithInstance_ == nullptr
        && this->diskId_ == nullptr && this->instanceId_ == nullptr; };
    // deleteWithInstance Field Functions 
    bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
    void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
    inline string getDeleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, "") };
    inline AttachDiskRequest& setDeleteWithInstance(string deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline AttachDiskRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AttachDiskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // Specifies whether the cloud disk to be mounted is released when the instance is released. Valid values:
    // 
    // - true: The cloud disk is released when the instance is released.
    // - false: The cloud disk is retained when the instance is released.
    // - Empty: The default value is false.
    shared_ptr<string> deleteWithInstance_ {};
    // The ID of the cloud disk to mount. The cloud disk and the instance must be in the same edge zone.
    // 
    // This parameter is required.
    shared_ptr<string> diskId_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
