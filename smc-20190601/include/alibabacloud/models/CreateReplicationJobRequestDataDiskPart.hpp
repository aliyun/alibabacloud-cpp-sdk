// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPLICATIONJOBREQUESTDATADISKPART_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPLICATIONJOBREQUESTDATADISKPART_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class CreateReplicationJobRequestDataDiskPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReplicationJobRequestDataDiskPart& obj) { 
      DARABONBA_PTR_TO_JSON(Block, block_);
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(SizeBytes, sizeBytes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReplicationJobRequestDataDiskPart& obj) { 
      DARABONBA_PTR_FROM_JSON(Block, block_);
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(SizeBytes, sizeBytes_);
    };
    CreateReplicationJobRequestDataDiskPart() = default ;
    CreateReplicationJobRequestDataDiskPart(const CreateReplicationJobRequestDataDiskPart &) = default ;
    CreateReplicationJobRequestDataDiskPart(CreateReplicationJobRequestDataDiskPart &&) = default ;
    CreateReplicationJobRequestDataDiskPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReplicationJobRequestDataDiskPart() = default ;
    CreateReplicationJobRequestDataDiskPart& operator=(const CreateReplicationJobRequestDataDiskPart &) = default ;
    CreateReplicationJobRequestDataDiskPart& operator=(CreateReplicationJobRequestDataDiskPart &&) = default ;
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
    inline CreateReplicationJobRequestDataDiskPart& setBlock(bool block) { DARABONBA_PTR_SET_VALUE(block_, block) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline CreateReplicationJobRequestDataDiskPart& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // sizeBytes Field Functions 
    bool hasSizeBytes() const { return this->sizeBytes_ != nullptr;};
    void deleteSizeBytes() { this->sizeBytes_ = nullptr;};
    inline int64_t sizeBytes() const { DARABONBA_PTR_GET_DEFAULT(sizeBytes_, 0L) };
    inline CreateReplicationJobRequestDataDiskPart& setSizeBytes(int64_t sizeBytes) { DARABONBA_PTR_SET_VALUE(sizeBytes_, sizeBytes) };


  protected:
    // Specifies whether to enable block replication for partition N in the destination data disk. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: true
    std::shared_ptr<bool> block_ = nullptr;
    // The device ID of partition N in the destination data disk. The partitions in the destination data disk are arranged in the same sequential order as those in the source data disk.
    // 
    // >  You must set both the DataDisk.N.Part.N.Device and `DataDisk.N.Part.N.SizeBytes` parameters or leave both parameters empty.
    std::shared_ptr<string> device_ = nullptr;
    // The size of partition N in the destination data disk. Unit: bytes. The default value is equal to the corresponding partition size of the source data disk.
    // 
    // > 
    // 
    // *   The total size of all partitions in a destination data disk cannot exceed the size of the destination data disk.
    // 
    // *   You must set both the `DataDisk.N.Part.N.Device` and DataDisk.N.Part.N.SizeBytes parameters or leave both parameters empty.
    std::shared_ptr<int64_t> sizeBytes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
