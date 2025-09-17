// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPLICATIONJOBREQUESTSYSTEMDISKPART_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPLICATIONJOBREQUESTSYSTEMDISKPART_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class CreateReplicationJobRequestSystemDiskPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReplicationJobRequestSystemDiskPart& obj) { 
      DARABONBA_PTR_TO_JSON(Block, block_);
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(SizeBytes, sizeBytes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReplicationJobRequestSystemDiskPart& obj) { 
      DARABONBA_PTR_FROM_JSON(Block, block_);
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(SizeBytes, sizeBytes_);
    };
    CreateReplicationJobRequestSystemDiskPart() = default ;
    CreateReplicationJobRequestSystemDiskPart(const CreateReplicationJobRequestSystemDiskPart &) = default ;
    CreateReplicationJobRequestSystemDiskPart(CreateReplicationJobRequestSystemDiskPart &&) = default ;
    CreateReplicationJobRequestSystemDiskPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReplicationJobRequestSystemDiskPart() = default ;
    CreateReplicationJobRequestSystemDiskPart& operator=(const CreateReplicationJobRequestSystemDiskPart &) = default ;
    CreateReplicationJobRequestSystemDiskPart& operator=(CreateReplicationJobRequestSystemDiskPart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->block_ != nullptr
        && this->device_ != nullptr && this->sizeBytes_ != nullptr; };
    // block Field Functions 
    bool hasBlock() const { return this->block_ != nullptr;};
    void deleteBlock() { this->block_ = nullptr;};
    inline bool block() const { DARABONBA_PTR_GET_DEFAULT(block_, false) };
    inline CreateReplicationJobRequestSystemDiskPart& setBlock(bool block) { DARABONBA_PTR_SET_VALUE(block_, block) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline CreateReplicationJobRequestSystemDiskPart& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // sizeBytes Field Functions 
    bool hasSizeBytes() const { return this->sizeBytes_ != nullptr;};
    void deleteSizeBytes() { this->sizeBytes_ = nullptr;};
    inline int64_t sizeBytes() const { DARABONBA_PTR_GET_DEFAULT(sizeBytes_, 0L) };
    inline CreateReplicationJobRequestSystemDiskPart& setSizeBytes(int64_t sizeBytes) { DARABONBA_PTR_SET_VALUE(sizeBytes_, sizeBytes) };


  protected:
    // Specifies whether to enable block replication for partition N in the destination system disk. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: true
    std::shared_ptr<bool> block_ = nullptr;
    // The ID of partition N in the destination system disk. The partitions in the destination system disk are arranged in the same sequential order as those in the source system disk.
    // 
    // >  You must set both the SystemDiskPart.N.Device and `SystemDiskPart.N.SizeBytes` parameters or leave both parameters empty.
    std::shared_ptr<string> device_ = nullptr;
    // The size of the partition N in the destination system disk. Unit: bytes. The default value is equal to the partition size of the source system disk.
    // 
    // > 
    // 
    // *   The total size of all partitions in the destination system disk cannot exceed the size of the destination system disk.
    // 
    // *   You must set both the `SystemDiskPart.N.Device` and SystemDiskPart.N.SizeBytes parameters or leave both parameters empty.
    std::shared_ptr<int64_t> sizeBytes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
