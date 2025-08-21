// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKSDISKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKSDISKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDisksResponseBodyDisksDisksTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDisksResponseBodyDisksDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisksResponseBodyDisksDisks& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiskChargeType, diskChargeType_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(DiskName, diskName_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(EncryptedKeyId, encryptedKeyId_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Portable, portable_);
      DARABONBA_PTR_TO_JSON(SerialId, serialId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisksResponseBodyDisksDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiskChargeType, diskChargeType_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(EncryptedKeyId, encryptedKeyId_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Portable, portable_);
      DARABONBA_PTR_FROM_JSON(SerialId, serialId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDisksResponseBodyDisksDisks() = default ;
    DescribeDisksResponseBodyDisksDisks(const DescribeDisksResponseBodyDisksDisks &) = default ;
    DescribeDisksResponseBodyDisksDisks(DescribeDisksResponseBodyDisksDisks &&) = default ;
    DescribeDisksResponseBodyDisksDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisksResponseBodyDisksDisks() = default ;
    DescribeDisksResponseBodyDisksDisks& operator=(const DescribeDisksResponseBodyDisksDisks &) = default ;
    DescribeDisksResponseBodyDisksDisks& operator=(DescribeDisksResponseBodyDisksDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->creationTime_ != nullptr && this->deleteWithInstance_ != nullptr && this->description_ != nullptr && this->diskChargeType_ != nullptr && this->diskId_ != nullptr
        && this->diskName_ != nullptr && this->encrypted_ != nullptr && this->encryptedKeyId_ != nullptr && this->ensRegionId_ != nullptr && this->instanceId_ != nullptr
        && this->instanceName_ != nullptr && this->portable_ != nullptr && this->serialId_ != nullptr && this->size_ != nullptr && this->snapshotId_ != nullptr
        && this->status_ != nullptr && this->tags_ != nullptr && this->type_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDisksResponseBodyDisksDisks& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDisksResponseBodyDisksDisks& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // deleteWithInstance Field Functions 
    bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
    void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
    inline bool deleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
    inline DescribeDisksResponseBodyDisksDisks& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDisksResponseBodyDisksDisks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskChargeType Field Functions 
    bool hasDiskChargeType() const { return this->diskChargeType_ != nullptr;};
    void deleteDiskChargeType() { this->diskChargeType_ = nullptr;};
    inline string diskChargeType() const { DARABONBA_PTR_GET_DEFAULT(diskChargeType_, "") };
    inline DescribeDisksResponseBodyDisksDisks& setDiskChargeType(string diskChargeType) { DARABONBA_PTR_SET_VALUE(diskChargeType_, diskChargeType) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeDisksResponseBodyDisksDisks& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string diskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline DescribeDisksResponseBodyDisksDisks& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline DescribeDisksResponseBodyDisksDisks& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // encryptedKeyId Field Functions 
    bool hasEncryptedKeyId() const { return this->encryptedKeyId_ != nullptr;};
    void deleteEncryptedKeyId() { this->encryptedKeyId_ = nullptr;};
    inline string encryptedKeyId() const { DARABONBA_PTR_GET_DEFAULT(encryptedKeyId_, "") };
    inline DescribeDisksResponseBodyDisksDisks& setEncryptedKeyId(string encryptedKeyId) { DARABONBA_PTR_SET_VALUE(encryptedKeyId_, encryptedKeyId) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeDisksResponseBodyDisksDisks& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDisksResponseBodyDisksDisks& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeDisksResponseBodyDisksDisks& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // portable Field Functions 
    bool hasPortable() const { return this->portable_ != nullptr;};
    void deletePortable() { this->portable_ = nullptr;};
    inline bool portable() const { DARABONBA_PTR_GET_DEFAULT(portable_, false) };
    inline DescribeDisksResponseBodyDisksDisks& setPortable(bool portable) { DARABONBA_PTR_SET_VALUE(portable_, portable) };


    // serialId Field Functions 
    bool hasSerialId() const { return this->serialId_ != nullptr;};
    void deleteSerialId() { this->serialId_ = nullptr;};
    inline string serialId() const { DARABONBA_PTR_GET_DEFAULT(serialId_, "") };
    inline DescribeDisksResponseBodyDisksDisks& setSerialId(string serialId) { DARABONBA_PTR_SET_VALUE(serialId_, serialId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DescribeDisksResponseBodyDisksDisks& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeDisksResponseBodyDisksDisks& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDisksResponseBodyDisksDisks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeDisksResponseBodyDisksDisksTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeDisksResponseBodyDisksDisksTags) };
    inline Models::DescribeDisksResponseBodyDisksDisksTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeDisksResponseBodyDisksDisksTags) };
    inline DescribeDisksResponseBodyDisksDisks& setTags(const Models::DescribeDisksResponseBodyDisksDisksTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDisksResponseBodyDisksDisks& setTags(Models::DescribeDisksResponseBodyDisksDisksTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDisksResponseBodyDisksDisks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The category of the disk.
    // 
    // *   cloud_efficiency: ultra disk.
    // *   cloud_ssd: all-flash disk.
    // *   local_hdd: local HDD.
    // *   local_ssd: local SSD.
    std::shared_ptr<string> category_ = nullptr;
    // The time when the disk was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Indicates whether the disk is released when the instance to which the disk is attached is released. Valid values:
    // 
    // *   true: The disk is released when the associated instance is released.
    // *   false: The disk is retained when the associated instance is released.
    std::shared_ptr<bool> deleteWithInstance_ = nullptr;
    // The namespace description.
    std::shared_ptr<string> description_ = nullptr;
    // The billing method of the cloud disk or local disk. Valid values:
    // 
    // *   **prepaid**: subscription.
    // *   **postpaid**: pay-as-you-go.
    std::shared_ptr<string> diskChargeType_ = nullptr;
    // The ID of the disk.
    std::shared_ptr<string> diskId_ = nullptr;
    // The name of the disk.
    std::shared_ptr<string> diskName_ = nullptr;
    // Indicates whether the cloud disk is encrypted. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> encrypted_ = nullptr;
    // The ID of the Key Management Service (KMS) key that is used for the cloud disk.
    std::shared_ptr<string> encryptedKeyId_ = nullptr;
    // The ID of the edge node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Indicates whether the cloud disk or local disk is removable. Valid values:
    // 
    // *   true: The disk is removable. A removable disk can independently exist and can be attached to or detached from an instance within the same zone.
    // *   false: The disk is not removable. A disk that is not removable cannot independently exist or be attached to or detached from an instance within the same zone.
    // 
    // If disks are of the following categories or types, the **Portable** value is **false** and the disks have the same lifecycle as their attached instances:
    // 
    // *   Local HDDs
    // *   Local SSDs
    // *   Data disks that use the subscription billing method
    std::shared_ptr<bool> portable_ = nullptr;
    // The serial number.
    std::shared_ptr<string> serialId_ = nullptr;
    // The size of the disk. Unit: MiB.
    std::shared_ptr<int32_t> size_ = nullptr;
    // The ID of the snapshot.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The status of the disk. Valid values:
    // 
    // *   In-use: The disk is in use.
    // *   Available: The disk can be attached.
    // *   Attaching: The disk is being attached.
    // *   Detaching: The disk is being detached.
    // *   Creating: The disk is being created.
    // *   ReIniting: The disk is being reset.
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<Models::DescribeDisksResponseBodyDisksDisksTags> tags_ = nullptr;
    // The type of the cloud disk or local disk. Valid values:
    // 
    // *   1: system disk.
    // *   2: data disk.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
