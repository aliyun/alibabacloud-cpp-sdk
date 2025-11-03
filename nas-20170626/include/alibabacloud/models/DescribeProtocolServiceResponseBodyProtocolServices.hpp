// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROTOCOLSERVICERESPONSEBODYPROTOCOLSERVICES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROTOCOLSERVICERESPONSEBODYPROTOCOLSERVICES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeProtocolServiceResponseBodyProtocolServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProtocolServiceResponseBodyProtocolServices& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(InstanceBaseThroughput, instanceBaseThroughput_);
      DARABONBA_PTR_TO_JSON(InstanceBurstThroughput, instanceBurstThroughput_);
      DARABONBA_PTR_TO_JSON(InstanceRAM, instanceRAM_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(MountTargetCount, mountTargetCount_);
      DARABONBA_PTR_TO_JSON(ProtocolServiceId, protocolServiceId_);
      DARABONBA_PTR_TO_JSON(ProtocolSpec, protocolSpec_);
      DARABONBA_PTR_TO_JSON(ProtocolThroughput, protocolThroughput_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProtocolServiceResponseBodyProtocolServices& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(InstanceBaseThroughput, instanceBaseThroughput_);
      DARABONBA_PTR_FROM_JSON(InstanceBurstThroughput, instanceBurstThroughput_);
      DARABONBA_PTR_FROM_JSON(InstanceRAM, instanceRAM_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(MountTargetCount, mountTargetCount_);
      DARABONBA_PTR_FROM_JSON(ProtocolServiceId, protocolServiceId_);
      DARABONBA_PTR_FROM_JSON(ProtocolSpec, protocolSpec_);
      DARABONBA_PTR_FROM_JSON(ProtocolThroughput, protocolThroughput_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeProtocolServiceResponseBodyProtocolServices() = default ;
    DescribeProtocolServiceResponseBodyProtocolServices(const DescribeProtocolServiceResponseBodyProtocolServices &) = default ;
    DescribeProtocolServiceResponseBodyProtocolServices(DescribeProtocolServiceResponseBodyProtocolServices &&) = default ;
    DescribeProtocolServiceResponseBodyProtocolServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProtocolServiceResponseBodyProtocolServices() = default ;
    DescribeProtocolServiceResponseBodyProtocolServices& operator=(const DescribeProtocolServiceResponseBodyProtocolServices &) = default ;
    DescribeProtocolServiceResponseBodyProtocolServices& operator=(DescribeProtocolServiceResponseBodyProtocolServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->fileSystemId_ == nullptr && return this->instanceBaseThroughput_ == nullptr && return this->instanceBurstThroughput_ == nullptr && return this->instanceRAM_ == nullptr
        && return this->modifyTime_ == nullptr && return this->mountTargetCount_ == nullptr && return this->protocolServiceId_ == nullptr && return this->protocolSpec_ == nullptr && return this->protocolThroughput_ == nullptr
        && return this->protocolType_ == nullptr && return this->status_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeProtocolServiceResponseBodyProtocolServices& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeProtocolServiceResponseBodyProtocolServices& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeProtocolServiceResponseBodyProtocolServices& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // instanceBaseThroughput Field Functions 
    bool hasInstanceBaseThroughput() const { return this->instanceBaseThroughput_ != nullptr;};
    void deleteInstanceBaseThroughput() { this->instanceBaseThroughput_ = nullptr;};
    inline int32_t instanceBaseThroughput() const { DARABONBA_PTR_GET_DEFAULT(instanceBaseThroughput_, 0) };
    inline DescribeProtocolServiceResponseBodyProtocolServices& setInstanceBaseThroughput(int32_t instanceBaseThroughput) { DARABONBA_PTR_SET_VALUE(instanceBaseThroughput_, instanceBaseThroughput) };


    // instanceBurstThroughput Field Functions 
    bool hasInstanceBurstThroughput() const { return this->instanceBurstThroughput_ != nullptr;};
    void deleteInstanceBurstThroughput() { this->instanceBurstThroughput_ = nullptr;};
    inline int32_t instanceBurstThroughput() const { DARABONBA_PTR_GET_DEFAULT(instanceBurstThroughput_, 0) };
    inline DescribeProtocolServiceResponseBodyProtocolServices& setInstanceBurstThroughput(int32_t instanceBurstThroughput) { DARABONBA_PTR_SET_VALUE(instanceBurstThroughput_, instanceBurstThroughput) };


    // instanceRAM Field Functions 
    bool hasInstanceRAM() const { return this->instanceRAM_ != nullptr;};
    void deleteInstanceRAM() { this->instanceRAM_ = nullptr;};
    inline int32_t instanceRAM() const { DARABONBA_PTR_GET_DEFAULT(instanceRAM_, 0) };
    inline DescribeProtocolServiceResponseBodyProtocolServices& setInstanceRAM(int32_t instanceRAM) { DARABONBA_PTR_SET_VALUE(instanceRAM_, instanceRAM) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeProtocolServiceResponseBodyProtocolServices& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // mountTargetCount Field Functions 
    bool hasMountTargetCount() const { return this->mountTargetCount_ != nullptr;};
    void deleteMountTargetCount() { this->mountTargetCount_ = nullptr;};
    inline int32_t mountTargetCount() const { DARABONBA_PTR_GET_DEFAULT(mountTargetCount_, 0) };
    inline DescribeProtocolServiceResponseBodyProtocolServices& setMountTargetCount(int32_t mountTargetCount) { DARABONBA_PTR_SET_VALUE(mountTargetCount_, mountTargetCount) };


    // protocolServiceId Field Functions 
    bool hasProtocolServiceId() const { return this->protocolServiceId_ != nullptr;};
    void deleteProtocolServiceId() { this->protocolServiceId_ = nullptr;};
    inline string protocolServiceId() const { DARABONBA_PTR_GET_DEFAULT(protocolServiceId_, "") };
    inline DescribeProtocolServiceResponseBodyProtocolServices& setProtocolServiceId(string protocolServiceId) { DARABONBA_PTR_SET_VALUE(protocolServiceId_, protocolServiceId) };


    // protocolSpec Field Functions 
    bool hasProtocolSpec() const { return this->protocolSpec_ != nullptr;};
    void deleteProtocolSpec() { this->protocolSpec_ = nullptr;};
    inline string protocolSpec() const { DARABONBA_PTR_GET_DEFAULT(protocolSpec_, "") };
    inline DescribeProtocolServiceResponseBodyProtocolServices& setProtocolSpec(string protocolSpec) { DARABONBA_PTR_SET_VALUE(protocolSpec_, protocolSpec) };


    // protocolThroughput Field Functions 
    bool hasProtocolThroughput() const { return this->protocolThroughput_ != nullptr;};
    void deleteProtocolThroughput() { this->protocolThroughput_ = nullptr;};
    inline int32_t protocolThroughput() const { DARABONBA_PTR_GET_DEFAULT(protocolThroughput_, 0) };
    inline DescribeProtocolServiceResponseBodyProtocolServices& setProtocolThroughput(int32_t protocolThroughput) { DARABONBA_PTR_SET_VALUE(protocolThroughput_, protocolThroughput) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeProtocolServiceResponseBodyProtocolServices& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeProtocolServiceResponseBodyProtocolServices& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the protocol service was created. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the protocol service.
    // 
    // Limits:
    // 
    // *   The description must be 2 to 128 characters in length.
    // *   The description must start with a letter and cannot start with `http://` or `https://`.
    // *   The description can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the file system.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The base throughput of the protocol service. Unit: MB/s.
    std::shared_ptr<int32_t> instanceBaseThroughput_ = nullptr;
    // The burst throughput of the protocol service. Unit: MB/s.
    std::shared_ptr<int32_t> instanceBurstThroughput_ = nullptr;
    // The memory cache size of the protocol service. Unit: GiB.
    std::shared_ptr<int32_t> instanceRAM_ = nullptr;
    // The time when the protocol service was modified. The time is displayed in UTC.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The total number of CPFS directories and filesets exported in the protocol service.
    std::shared_ptr<int32_t> mountTargetCount_ = nullptr;
    // The ID of the protocol service.
    std::shared_ptr<string> protocolServiceId_ = nullptr;
    // The specification of the protocol service.
    // 
    // *   Valid value: General.
    // *   Default value: General.
    std::shared_ptr<string> protocolSpec_ = nullptr;
    // The throughput of the protocol service. Unit: MB/s.
    std::shared_ptr<int32_t> protocolThroughput_ = nullptr;
    // The protocol type supported by the protocol service.
    // 
    // Valid values:
    // 
    // *   NFS: The protocol service supports access over the Network File System (NFS) protocol.
    std::shared_ptr<string> protocolType_ = nullptr;
    // The status of the protocol service.
    // 
    // Valid values:
    // 
    // *   Creating: The protocol service is being created.
    // *   Starting: The protocol service is being started.
    // *   Running: The protocol service is running.
    // *   Updating: The protocol service is being updated.
    // *   Deleting: The protocol service is being deleted.
    // *   Stopping: The protocol service is being stopped.
    // *   Stopped: The protocol service is stopped.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
