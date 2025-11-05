// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATARESPONSEBODYMONITORDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATARESPONSEBODYMONITORDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDiskMonitorDataResponseBodyMonitorData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskMonitorDataResponseBodyMonitorData& obj) { 
      DARABONBA_PTR_TO_JSON(BPSPercent, BPSPercent_);
      DARABONBA_PTR_TO_JSON(BurstIOCount, burstIOCount_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(IOPSPercent, IOPSPercent_);
      DARABONBA_PTR_TO_JSON(ReadBPS, readBPS_);
      DARABONBA_PTR_TO_JSON(ReadBlockSize, readBlockSize_);
      DARABONBA_PTR_TO_JSON(ReadIOPS, readIOPS_);
      DARABONBA_PTR_TO_JSON(ReadLatency, readLatency_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(WriteBPS, writeBPS_);
      DARABONBA_PTR_TO_JSON(WriteBlockSize, writeBlockSize_);
      DARABONBA_PTR_TO_JSON(WriteIOPS, writeIOPS_);
      DARABONBA_PTR_TO_JSON(WriteLatency, writeLatency_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskMonitorDataResponseBodyMonitorData& obj) { 
      DARABONBA_PTR_FROM_JSON(BPSPercent, BPSPercent_);
      DARABONBA_PTR_FROM_JSON(BurstIOCount, burstIOCount_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(IOPSPercent, IOPSPercent_);
      DARABONBA_PTR_FROM_JSON(ReadBPS, readBPS_);
      DARABONBA_PTR_FROM_JSON(ReadBlockSize, readBlockSize_);
      DARABONBA_PTR_FROM_JSON(ReadIOPS, readIOPS_);
      DARABONBA_PTR_FROM_JSON(ReadLatency, readLatency_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(WriteBPS, writeBPS_);
      DARABONBA_PTR_FROM_JSON(WriteBlockSize, writeBlockSize_);
      DARABONBA_PTR_FROM_JSON(WriteIOPS, writeIOPS_);
      DARABONBA_PTR_FROM_JSON(WriteLatency, writeLatency_);
    };
    DescribeDiskMonitorDataResponseBodyMonitorData() = default ;
    DescribeDiskMonitorDataResponseBodyMonitorData(const DescribeDiskMonitorDataResponseBodyMonitorData &) = default ;
    DescribeDiskMonitorDataResponseBodyMonitorData(DescribeDiskMonitorDataResponseBodyMonitorData &&) = default ;
    DescribeDiskMonitorDataResponseBodyMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskMonitorDataResponseBodyMonitorData() = default ;
    DescribeDiskMonitorDataResponseBodyMonitorData& operator=(const DescribeDiskMonitorDataResponseBodyMonitorData &) = default ;
    DescribeDiskMonitorDataResponseBodyMonitorData& operator=(DescribeDiskMonitorDataResponseBodyMonitorData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->BPSPercent_ == nullptr
        && return this->burstIOCount_ == nullptr && return this->diskId_ == nullptr && return this->IOPSPercent_ == nullptr && return this->readBPS_ == nullptr && return this->readBlockSize_ == nullptr
        && return this->readIOPS_ == nullptr && return this->readLatency_ == nullptr && return this->timestamp_ == nullptr && return this->writeBPS_ == nullptr && return this->writeBlockSize_ == nullptr
        && return this->writeIOPS_ == nullptr && return this->writeLatency_ == nullptr; };
    // BPSPercent Field Functions 
    bool hasBPSPercent() const { return this->BPSPercent_ != nullptr;};
    void deleteBPSPercent() { this->BPSPercent_ = nullptr;};
    inline int64_t BPSPercent() const { DARABONBA_PTR_GET_DEFAULT(BPSPercent_, 0L) };
    inline DescribeDiskMonitorDataResponseBodyMonitorData& setBPSPercent(int64_t BPSPercent) { DARABONBA_PTR_SET_VALUE(BPSPercent_, BPSPercent) };


    // burstIOCount Field Functions 
    bool hasBurstIOCount() const { return this->burstIOCount_ != nullptr;};
    void deleteBurstIOCount() { this->burstIOCount_ = nullptr;};
    inline int64_t burstIOCount() const { DARABONBA_PTR_GET_DEFAULT(burstIOCount_, 0L) };
    inline DescribeDiskMonitorDataResponseBodyMonitorData& setBurstIOCount(int64_t burstIOCount) { DARABONBA_PTR_SET_VALUE(burstIOCount_, burstIOCount) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeDiskMonitorDataResponseBodyMonitorData& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // IOPSPercent Field Functions 
    bool hasIOPSPercent() const { return this->IOPSPercent_ != nullptr;};
    void deleteIOPSPercent() { this->IOPSPercent_ = nullptr;};
    inline int64_t IOPSPercent() const { DARABONBA_PTR_GET_DEFAULT(IOPSPercent_, 0L) };
    inline DescribeDiskMonitorDataResponseBodyMonitorData& setIOPSPercent(int64_t IOPSPercent) { DARABONBA_PTR_SET_VALUE(IOPSPercent_, IOPSPercent) };


    // readBPS Field Functions 
    bool hasReadBPS() const { return this->readBPS_ != nullptr;};
    void deleteReadBPS() { this->readBPS_ = nullptr;};
    inline int64_t readBPS() const { DARABONBA_PTR_GET_DEFAULT(readBPS_, 0L) };
    inline DescribeDiskMonitorDataResponseBodyMonitorData& setReadBPS(int64_t readBPS) { DARABONBA_PTR_SET_VALUE(readBPS_, readBPS) };


    // readBlockSize Field Functions 
    bool hasReadBlockSize() const { return this->readBlockSize_ != nullptr;};
    void deleteReadBlockSize() { this->readBlockSize_ = nullptr;};
    inline int64_t readBlockSize() const { DARABONBA_PTR_GET_DEFAULT(readBlockSize_, 0L) };
    inline DescribeDiskMonitorDataResponseBodyMonitorData& setReadBlockSize(int64_t readBlockSize) { DARABONBA_PTR_SET_VALUE(readBlockSize_, readBlockSize) };


    // readIOPS Field Functions 
    bool hasReadIOPS() const { return this->readIOPS_ != nullptr;};
    void deleteReadIOPS() { this->readIOPS_ = nullptr;};
    inline int64_t readIOPS() const { DARABONBA_PTR_GET_DEFAULT(readIOPS_, 0L) };
    inline DescribeDiskMonitorDataResponseBodyMonitorData& setReadIOPS(int64_t readIOPS) { DARABONBA_PTR_SET_VALUE(readIOPS_, readIOPS) };


    // readLatency Field Functions 
    bool hasReadLatency() const { return this->readLatency_ != nullptr;};
    void deleteReadLatency() { this->readLatency_ = nullptr;};
    inline int64_t readLatency() const { DARABONBA_PTR_GET_DEFAULT(readLatency_, 0L) };
    inline DescribeDiskMonitorDataResponseBodyMonitorData& setReadLatency(int64_t readLatency) { DARABONBA_PTR_SET_VALUE(readLatency_, readLatency) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline DescribeDiskMonitorDataResponseBodyMonitorData& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // writeBPS Field Functions 
    bool hasWriteBPS() const { return this->writeBPS_ != nullptr;};
    void deleteWriteBPS() { this->writeBPS_ = nullptr;};
    inline int64_t writeBPS() const { DARABONBA_PTR_GET_DEFAULT(writeBPS_, 0L) };
    inline DescribeDiskMonitorDataResponseBodyMonitorData& setWriteBPS(int64_t writeBPS) { DARABONBA_PTR_SET_VALUE(writeBPS_, writeBPS) };


    // writeBlockSize Field Functions 
    bool hasWriteBlockSize() const { return this->writeBlockSize_ != nullptr;};
    void deleteWriteBlockSize() { this->writeBlockSize_ = nullptr;};
    inline int64_t writeBlockSize() const { DARABONBA_PTR_GET_DEFAULT(writeBlockSize_, 0L) };
    inline DescribeDiskMonitorDataResponseBodyMonitorData& setWriteBlockSize(int64_t writeBlockSize) { DARABONBA_PTR_SET_VALUE(writeBlockSize_, writeBlockSize) };


    // writeIOPS Field Functions 
    bool hasWriteIOPS() const { return this->writeIOPS_ != nullptr;};
    void deleteWriteIOPS() { this->writeIOPS_ = nullptr;};
    inline int64_t writeIOPS() const { DARABONBA_PTR_GET_DEFAULT(writeIOPS_, 0L) };
    inline DescribeDiskMonitorDataResponseBodyMonitorData& setWriteIOPS(int64_t writeIOPS) { DARABONBA_PTR_SET_VALUE(writeIOPS_, writeIOPS) };


    // writeLatency Field Functions 
    bool hasWriteLatency() const { return this->writeLatency_ != nullptr;};
    void deleteWriteLatency() { this->writeLatency_ = nullptr;};
    inline int64_t writeLatency() const { DARABONBA_PTR_GET_DEFAULT(writeLatency_, 0L) };
    inline DescribeDiskMonitorDataResponseBodyMonitorData& setWriteLatency(int64_t writeLatency) { DARABONBA_PTR_SET_VALUE(writeLatency_, writeLatency) };


  protected:
    // The percentage of BPS.
    std::shared_ptr<int64_t> BPSPercent_ = nullptr;
    // The number of burst I/O operations.
    std::shared_ptr<int64_t> burstIOCount_ = nullptr;
    // The ID of the disk.
    std::shared_ptr<string> diskId_ = nullptr;
    // The percentage of IOPS.
    std::shared_ptr<int64_t> IOPSPercent_ = nullptr;
    // The read bandwidth of the disk. Unit: MByte/s.
    std::shared_ptr<int64_t> readBPS_ = nullptr;
    // Read IO block size. Unit: Bytes
    std::shared_ptr<int64_t> readBlockSize_ = nullptr;
    // The maximum number of read IOPS.
    std::shared_ptr<int64_t> readIOPS_ = nullptr;
    // Read IO latency. Unit:  microsecond
    std::shared_ptr<int64_t> readLatency_ = nullptr;
    // The timestamp that is used to query the near real-time monitoring data of the disk. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> timestamp_ = nullptr;
    // The write bandwidth of the disk. Unit: MByte/s.
    std::shared_ptr<int64_t> writeBPS_ = nullptr;
    // Write IO block size. Unit: Bytes
    std::shared_ptr<int64_t> writeBlockSize_ = nullptr;
    // The maximum number of write IOPS.
    std::shared_ptr<int64_t> writeIOPS_ = nullptr;
    // Write IO latency. Unit: microsecond
    std::shared_ptr<int64_t> writeLatency_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
