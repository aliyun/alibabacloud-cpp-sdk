// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFileSystemsResponseBodyFileSystemsMountTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeFileSystemsResponseBodyFileSystems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsResponseBodyFileSystems& obj) { 
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FileSystemName, fileSystemName_);
      DARABONBA_PTR_TO_JSON(MeteredSize, meteredSize_);
      DARABONBA_PTR_TO_JSON(MountTargets, mountTargets_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsResponseBodyFileSystems& obj) { 
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FileSystemName, fileSystemName_);
      DARABONBA_PTR_FROM_JSON(MeteredSize, meteredSize_);
      DARABONBA_PTR_FROM_JSON(MountTargets, mountTargets_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    DescribeFileSystemsResponseBodyFileSystems() = default ;
    DescribeFileSystemsResponseBodyFileSystems(const DescribeFileSystemsResponseBodyFileSystems &) = default ;
    DescribeFileSystemsResponseBodyFileSystems(DescribeFileSystemsResponseBodyFileSystems &&) = default ;
    DescribeFileSystemsResponseBodyFileSystems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsResponseBodyFileSystems() = default ;
    DescribeFileSystemsResponseBodyFileSystems& operator=(const DescribeFileSystemsResponseBodyFileSystems &) = default ;
    DescribeFileSystemsResponseBodyFileSystems& operator=(DescribeFileSystemsResponseBodyFileSystems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacity_ == nullptr
        && return this->creationTime_ == nullptr && return this->description_ == nullptr && return this->ensRegionId_ == nullptr && return this->fileSystemId_ == nullptr && return this->fileSystemName_ == nullptr
        && return this->meteredSize_ == nullptr && return this->mountTargets_ == nullptr && return this->payType_ == nullptr && return this->protocolType_ == nullptr && return this->status_ == nullptr
        && return this->storageType_ == nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int64_t capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
    inline DescribeFileSystemsResponseBodyFileSystems& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeFileSystemsResponseBodyFileSystems& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeFileSystemsResponseBodyFileSystems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeFileSystemsResponseBodyFileSystems& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeFileSystemsResponseBodyFileSystems& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fileSystemName Field Functions 
    bool hasFileSystemName() const { return this->fileSystemName_ != nullptr;};
    void deleteFileSystemName() { this->fileSystemName_ = nullptr;};
    inline string fileSystemName() const { DARABONBA_PTR_GET_DEFAULT(fileSystemName_, "") };
    inline DescribeFileSystemsResponseBodyFileSystems& setFileSystemName(string fileSystemName) { DARABONBA_PTR_SET_VALUE(fileSystemName_, fileSystemName) };


    // meteredSize Field Functions 
    bool hasMeteredSize() const { return this->meteredSize_ != nullptr;};
    void deleteMeteredSize() { this->meteredSize_ = nullptr;};
    inline int64_t meteredSize() const { DARABONBA_PTR_GET_DEFAULT(meteredSize_, 0L) };
    inline DescribeFileSystemsResponseBodyFileSystems& setMeteredSize(int64_t meteredSize) { DARABONBA_PTR_SET_VALUE(meteredSize_, meteredSize) };


    // mountTargets Field Functions 
    bool hasMountTargets() const { return this->mountTargets_ != nullptr;};
    void deleteMountTargets() { this->mountTargets_ = nullptr;};
    inline const vector<Models::DescribeFileSystemsResponseBodyFileSystemsMountTargets> & mountTargets() const { DARABONBA_PTR_GET_CONST(mountTargets_, vector<Models::DescribeFileSystemsResponseBodyFileSystemsMountTargets>) };
    inline vector<Models::DescribeFileSystemsResponseBodyFileSystemsMountTargets> mountTargets() { DARABONBA_PTR_GET(mountTargets_, vector<Models::DescribeFileSystemsResponseBodyFileSystemsMountTargets>) };
    inline DescribeFileSystemsResponseBodyFileSystems& setMountTargets(const vector<Models::DescribeFileSystemsResponseBodyFileSystemsMountTargets> & mountTargets) { DARABONBA_PTR_SET_VALUE(mountTargets_, mountTargets) };
    inline DescribeFileSystemsResponseBodyFileSystems& setMountTargets(vector<Models::DescribeFileSystemsResponseBodyFileSystemsMountTargets> && mountTargets) { DARABONBA_PTR_SET_RVALUE(mountTargets_, mountTargets) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeFileSystemsResponseBodyFileSystems& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeFileSystemsResponseBodyFileSystems& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeFileSystemsResponseBodyFileSystems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeFileSystemsResponseBodyFileSystems& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // The capacity of the file system. Unit: MiB.
    std::shared_ptr<int64_t> capacity_ = nullptr;
    // The time when the file system was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The ID of the file system.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The name of the file system.
    std::shared_ptr<string> fileSystemName_ = nullptr;
    // The storage usage of the file system. The value of this parameter is the maximum storage usage of the file system over the last hour. Unit: bytes.
    std::shared_ptr<int64_t> meteredSize_ = nullptr;
    // The information about mount targets.
    std::shared_ptr<vector<Models::DescribeFileSystemsResponseBodyFileSystemsMountTargets>> mountTargets_ = nullptr;
    // The billing method. PostPaid is returned. PostPaid indicates the pay-as-you-go billing method.
    std::shared_ptr<string> payType_ = nullptr;
    // The protocol type of the file system. Valid values:
    // 
    // *   NFS: Network File System (NFS)
    // *   SMB: Server Message Block (SMB)
    std::shared_ptr<string> protocolType_ = nullptr;
    // The status of the file system. Valid values:
    // 
    // *   pending: The file system is being created or modified.
    // *   running: The file system is available. Before you create a mount target for the file system, make sure that the file system is in the running state.
    // *   stopped: The file system is unavailable.
    // *   extending: The file system is being scaled out.
    // *   stopping: The file system is being disabled.
    // *   deleting: The file system is being deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The storage type. Valid values:
    // 
    // *   capacity: Capacity NAS file systems
    // *   performance: Performance NAS file systems
    std::shared_ptr<string> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
