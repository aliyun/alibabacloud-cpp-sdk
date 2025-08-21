// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKIOPSLISTRESPONSEBODYDISKIOPSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKIOPSLISTRESPONSEBODYDISKIOPSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDiskIopsListResponseBodyDiskIopsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskIopsListResponseBodyDiskIopsList& obj) { 
      DARABONBA_PTR_TO_JSON(BizTime, bizTime_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(ReadBytes, readBytes_);
      DARABONBA_PTR_TO_JSON(ReadLatency, readLatency_);
      DARABONBA_PTR_TO_JSON(ReadOps, readOps_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WriteBytes, writeBytes_);
      DARABONBA_PTR_TO_JSON(WriteLatency, writeLatency_);
      DARABONBA_PTR_TO_JSON(WriteOps, writeOps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskIopsListResponseBodyDiskIopsList& obj) { 
      DARABONBA_PTR_FROM_JSON(BizTime, bizTime_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(ReadBytes, readBytes_);
      DARABONBA_PTR_FROM_JSON(ReadLatency, readLatency_);
      DARABONBA_PTR_FROM_JSON(ReadOps, readOps_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WriteBytes, writeBytes_);
      DARABONBA_PTR_FROM_JSON(WriteLatency, writeLatency_);
      DARABONBA_PTR_FROM_JSON(WriteOps, writeOps_);
    };
    DescribeDiskIopsListResponseBodyDiskIopsList() = default ;
    DescribeDiskIopsListResponseBodyDiskIopsList(const DescribeDiskIopsListResponseBodyDiskIopsList &) = default ;
    DescribeDiskIopsListResponseBodyDiskIopsList(DescribeDiskIopsListResponseBodyDiskIopsList &&) = default ;
    DescribeDiskIopsListResponseBodyDiskIopsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskIopsListResponseBodyDiskIopsList() = default ;
    DescribeDiskIopsListResponseBodyDiskIopsList& operator=(const DescribeDiskIopsListResponseBodyDiskIopsList &) = default ;
    DescribeDiskIopsListResponseBodyDiskIopsList& operator=(DescribeDiskIopsListResponseBodyDiskIopsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizTime_ != nullptr
        && this->diskId_ != nullptr && this->readBytes_ != nullptr && this->readLatency_ != nullptr && this->readOps_ != nullptr && this->regionId_ != nullptr
        && this->writeBytes_ != nullptr && this->writeLatency_ != nullptr && this->writeOps_ != nullptr; };
    // bizTime Field Functions 
    bool hasBizTime() const { return this->bizTime_ != nullptr;};
    void deleteBizTime() { this->bizTime_ = nullptr;};
    inline string bizTime() const { DARABONBA_PTR_GET_DEFAULT(bizTime_, "") };
    inline DescribeDiskIopsListResponseBodyDiskIopsList& setBizTime(string bizTime) { DARABONBA_PTR_SET_VALUE(bizTime_, bizTime) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeDiskIopsListResponseBodyDiskIopsList& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // readBytes Field Functions 
    bool hasReadBytes() const { return this->readBytes_ != nullptr;};
    void deleteReadBytes() { this->readBytes_ = nullptr;};
    inline int64_t readBytes() const { DARABONBA_PTR_GET_DEFAULT(readBytes_, 0L) };
    inline DescribeDiskIopsListResponseBodyDiskIopsList& setReadBytes(int64_t readBytes) { DARABONBA_PTR_SET_VALUE(readBytes_, readBytes) };


    // readLatency Field Functions 
    bool hasReadLatency() const { return this->readLatency_ != nullptr;};
    void deleteReadLatency() { this->readLatency_ = nullptr;};
    inline int64_t readLatency() const { DARABONBA_PTR_GET_DEFAULT(readLatency_, 0L) };
    inline DescribeDiskIopsListResponseBodyDiskIopsList& setReadLatency(int64_t readLatency) { DARABONBA_PTR_SET_VALUE(readLatency_, readLatency) };


    // readOps Field Functions 
    bool hasReadOps() const { return this->readOps_ != nullptr;};
    void deleteReadOps() { this->readOps_ = nullptr;};
    inline int64_t readOps() const { DARABONBA_PTR_GET_DEFAULT(readOps_, 0L) };
    inline DescribeDiskIopsListResponseBodyDiskIopsList& setReadOps(int64_t readOps) { DARABONBA_PTR_SET_VALUE(readOps_, readOps) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDiskIopsListResponseBodyDiskIopsList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // writeBytes Field Functions 
    bool hasWriteBytes() const { return this->writeBytes_ != nullptr;};
    void deleteWriteBytes() { this->writeBytes_ = nullptr;};
    inline int64_t writeBytes() const { DARABONBA_PTR_GET_DEFAULT(writeBytes_, 0L) };
    inline DescribeDiskIopsListResponseBodyDiskIopsList& setWriteBytes(int64_t writeBytes) { DARABONBA_PTR_SET_VALUE(writeBytes_, writeBytes) };


    // writeLatency Field Functions 
    bool hasWriteLatency() const { return this->writeLatency_ != nullptr;};
    void deleteWriteLatency() { this->writeLatency_ = nullptr;};
    inline int64_t writeLatency() const { DARABONBA_PTR_GET_DEFAULT(writeLatency_, 0L) };
    inline DescribeDiskIopsListResponseBodyDiskIopsList& setWriteLatency(int64_t writeLatency) { DARABONBA_PTR_SET_VALUE(writeLatency_, writeLatency) };


    // writeOps Field Functions 
    bool hasWriteOps() const { return this->writeOps_ != nullptr;};
    void deleteWriteOps() { this->writeOps_ = nullptr;};
    inline int64_t writeOps() const { DARABONBA_PTR_GET_DEFAULT(writeOps_, 0L) };
    inline DescribeDiskIopsListResponseBodyDiskIopsList& setWriteOps(int64_t writeOps) { DARABONBA_PTR_SET_VALUE(writeOps_, writeOps) };


  protected:
    // The business time . The time is displayed in the yyyy-MM-dd HH:mm:ss.
    std::shared_ptr<string> bizTime_ = nullptr;
    // The ID of the disk.
    std::shared_ptr<string> diskId_ = nullptr;
    // The read throughput. Unit: bytes.
    std::shared_ptr<int64_t> readBytes_ = nullptr;
    // The read latency. Unit: ms.
    std::shared_ptr<int64_t> readLatency_ = nullptr;
    // The read IOPS.
    std::shared_ptr<int64_t> readOps_ = nullptr;
    // The ID of the node.
    std::shared_ptr<string> regionId_ = nullptr;
    // The write throughput. Unit: bytes.
    std::shared_ptr<int64_t> writeBytes_ = nullptr;
    // The write latency. Unit: microseconds.
    std::shared_ptr<int64_t> writeLatency_ = nullptr;
    // The write IOPS.
    std::shared_ptr<int64_t> writeOps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
