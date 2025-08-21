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
    virtual bool empty() const override { this->deleteWithInstance_ != nullptr
        && this->diskId_ != nullptr && this->instanceId_ != nullptr; };
    // deleteWithInstance Field Functions 
    bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
    void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
    inline string deleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, "") };
    inline AttachDiskRequest& setDeleteWithInstance(string deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline AttachDiskRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AttachDiskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // Specifies whether the disk to be attached is released with the instance. Valid values:
    // 
    // *   true: The disk will be released when the ECS instance is released.
    // *   false: The disk will be retained when the ECS instance is released.
    // *   If you leave this parameter empty, the default value is used.
    std::shared_ptr<string> deleteWithInstance_ = nullptr;
    // The ID of the disk to be attached. The cloud disk and the instance must belong to the same node.
    // 
    // This parameter is required.
    std::shared_ptr<string> diskId_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
