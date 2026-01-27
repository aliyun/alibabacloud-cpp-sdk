// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDiskMonitorDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDiskMonitorDataResponseBody() = default ;
    DescribeDiskMonitorDataResponseBody(const DescribeDiskMonitorDataResponseBody &) = default ;
    DescribeDiskMonitorDataResponseBody(DescribeDiskMonitorDataResponseBody &&) = default ;
    DescribeDiskMonitorDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskMonitorDataResponseBody() = default ;
    DescribeDiskMonitorDataResponseBody& operator=(const DescribeDiskMonitorDataResponseBody &) = default ;
    DescribeDiskMonitorDataResponseBody& operator=(DescribeDiskMonitorDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MonitorData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MonitorData& obj) { 
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
      friend void from_json(const Darabonba::Json& j, MonitorData& obj) { 
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
      MonitorData() = default ;
      MonitorData(const MonitorData &) = default ;
      MonitorData(MonitorData &&) = default ;
      MonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MonitorData() = default ;
      MonitorData& operator=(const MonitorData &) = default ;
      MonitorData& operator=(MonitorData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->BPSPercent_ == nullptr
        && this->burstIOCount_ == nullptr && this->diskId_ == nullptr && this->IOPSPercent_ == nullptr && this->readBPS_ == nullptr && this->readBlockSize_ == nullptr
        && this->readIOPS_ == nullptr && this->readLatency_ == nullptr && this->timestamp_ == nullptr && this->writeBPS_ == nullptr && this->writeBlockSize_ == nullptr
        && this->writeIOPS_ == nullptr && this->writeLatency_ == nullptr; };
      // BPSPercent Field Functions 
      bool hasBPSPercent() const { return this->BPSPercent_ != nullptr;};
      void deleteBPSPercent() { this->BPSPercent_ = nullptr;};
      inline int64_t getBPSPercent() const { DARABONBA_PTR_GET_DEFAULT(BPSPercent_, 0L) };
      inline MonitorData& setBPSPercent(int64_t BPSPercent) { DARABONBA_PTR_SET_VALUE(BPSPercent_, BPSPercent) };


      // burstIOCount Field Functions 
      bool hasBurstIOCount() const { return this->burstIOCount_ != nullptr;};
      void deleteBurstIOCount() { this->burstIOCount_ = nullptr;};
      inline int64_t getBurstIOCount() const { DARABONBA_PTR_GET_DEFAULT(burstIOCount_, 0L) };
      inline MonitorData& setBurstIOCount(int64_t burstIOCount) { DARABONBA_PTR_SET_VALUE(burstIOCount_, burstIOCount) };


      // diskId Field Functions 
      bool hasDiskId() const { return this->diskId_ != nullptr;};
      void deleteDiskId() { this->diskId_ = nullptr;};
      inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
      inline MonitorData& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


      // IOPSPercent Field Functions 
      bool hasIOPSPercent() const { return this->IOPSPercent_ != nullptr;};
      void deleteIOPSPercent() { this->IOPSPercent_ = nullptr;};
      inline int64_t getIOPSPercent() const { DARABONBA_PTR_GET_DEFAULT(IOPSPercent_, 0L) };
      inline MonitorData& setIOPSPercent(int64_t IOPSPercent) { DARABONBA_PTR_SET_VALUE(IOPSPercent_, IOPSPercent) };


      // readBPS Field Functions 
      bool hasReadBPS() const { return this->readBPS_ != nullptr;};
      void deleteReadBPS() { this->readBPS_ = nullptr;};
      inline int64_t getReadBPS() const { DARABONBA_PTR_GET_DEFAULT(readBPS_, 0L) };
      inline MonitorData& setReadBPS(int64_t readBPS) { DARABONBA_PTR_SET_VALUE(readBPS_, readBPS) };


      // readBlockSize Field Functions 
      bool hasReadBlockSize() const { return this->readBlockSize_ != nullptr;};
      void deleteReadBlockSize() { this->readBlockSize_ = nullptr;};
      inline int64_t getReadBlockSize() const { DARABONBA_PTR_GET_DEFAULT(readBlockSize_, 0L) };
      inline MonitorData& setReadBlockSize(int64_t readBlockSize) { DARABONBA_PTR_SET_VALUE(readBlockSize_, readBlockSize) };


      // readIOPS Field Functions 
      bool hasReadIOPS() const { return this->readIOPS_ != nullptr;};
      void deleteReadIOPS() { this->readIOPS_ = nullptr;};
      inline int64_t getReadIOPS() const { DARABONBA_PTR_GET_DEFAULT(readIOPS_, 0L) };
      inline MonitorData& setReadIOPS(int64_t readIOPS) { DARABONBA_PTR_SET_VALUE(readIOPS_, readIOPS) };


      // readLatency Field Functions 
      bool hasReadLatency() const { return this->readLatency_ != nullptr;};
      void deleteReadLatency() { this->readLatency_ = nullptr;};
      inline int64_t getReadLatency() const { DARABONBA_PTR_GET_DEFAULT(readLatency_, 0L) };
      inline MonitorData& setReadLatency(int64_t readLatency) { DARABONBA_PTR_SET_VALUE(readLatency_, readLatency) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline MonitorData& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // writeBPS Field Functions 
      bool hasWriteBPS() const { return this->writeBPS_ != nullptr;};
      void deleteWriteBPS() { this->writeBPS_ = nullptr;};
      inline int64_t getWriteBPS() const { DARABONBA_PTR_GET_DEFAULT(writeBPS_, 0L) };
      inline MonitorData& setWriteBPS(int64_t writeBPS) { DARABONBA_PTR_SET_VALUE(writeBPS_, writeBPS) };


      // writeBlockSize Field Functions 
      bool hasWriteBlockSize() const { return this->writeBlockSize_ != nullptr;};
      void deleteWriteBlockSize() { this->writeBlockSize_ = nullptr;};
      inline int64_t getWriteBlockSize() const { DARABONBA_PTR_GET_DEFAULT(writeBlockSize_, 0L) };
      inline MonitorData& setWriteBlockSize(int64_t writeBlockSize) { DARABONBA_PTR_SET_VALUE(writeBlockSize_, writeBlockSize) };


      // writeIOPS Field Functions 
      bool hasWriteIOPS() const { return this->writeIOPS_ != nullptr;};
      void deleteWriteIOPS() { this->writeIOPS_ = nullptr;};
      inline int64_t getWriteIOPS() const { DARABONBA_PTR_GET_DEFAULT(writeIOPS_, 0L) };
      inline MonitorData& setWriteIOPS(int64_t writeIOPS) { DARABONBA_PTR_SET_VALUE(writeIOPS_, writeIOPS) };


      // writeLatency Field Functions 
      bool hasWriteLatency() const { return this->writeLatency_ != nullptr;};
      void deleteWriteLatency() { this->writeLatency_ = nullptr;};
      inline int64_t getWriteLatency() const { DARABONBA_PTR_GET_DEFAULT(writeLatency_, 0L) };
      inline MonitorData& setWriteLatency(int64_t writeLatency) { DARABONBA_PTR_SET_VALUE(writeLatency_, writeLatency) };


    protected:
      // The percentage of BPS.
      shared_ptr<int64_t> BPSPercent_ {};
      // The number of burst I/O operations.
      shared_ptr<int64_t> burstIOCount_ {};
      // The ID of the disk.
      shared_ptr<string> diskId_ {};
      // The percentage of IOPS.
      shared_ptr<int64_t> IOPSPercent_ {};
      // The read bandwidth of the disk. Unit: MByte/s.
      shared_ptr<int64_t> readBPS_ {};
      // Read IO block size. Unit: Bytes
      shared_ptr<int64_t> readBlockSize_ {};
      // The maximum number of read IOPS.
      shared_ptr<int64_t> readIOPS_ {};
      // Read IO latency. Unit:  microsecond
      shared_ptr<int64_t> readLatency_ {};
      // The timestamp that is used to query the near real-time monitoring data of the disk. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
      shared_ptr<string> timestamp_ {};
      // The write bandwidth of the disk. Unit: MByte/s.
      shared_ptr<int64_t> writeBPS_ {};
      // Write IO block size. Unit: Bytes
      shared_ptr<int64_t> writeBlockSize_ {};
      // The maximum number of write IOPS.
      shared_ptr<int64_t> writeIOPS_ {};
      // Write IO latency. Unit: microsecond
      shared_ptr<int64_t> writeLatency_ {};
    };

    virtual bool empty() const override { return this->monitorData_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // monitorData Field Functions 
    bool hasMonitorData() const { return this->monitorData_ != nullptr;};
    void deleteMonitorData() { this->monitorData_ = nullptr;};
    inline const vector<DescribeDiskMonitorDataResponseBody::MonitorData> & getMonitorData() const { DARABONBA_PTR_GET_CONST(monitorData_, vector<DescribeDiskMonitorDataResponseBody::MonitorData>) };
    inline vector<DescribeDiskMonitorDataResponseBody::MonitorData> getMonitorData() { DARABONBA_PTR_GET(monitorData_, vector<DescribeDiskMonitorDataResponseBody::MonitorData>) };
    inline DescribeDiskMonitorDataResponseBody& setMonitorData(const vector<DescribeDiskMonitorDataResponseBody::MonitorData> & monitorData) { DARABONBA_PTR_SET_VALUE(monitorData_, monitorData) };
    inline DescribeDiskMonitorDataResponseBody& setMonitorData(vector<DescribeDiskMonitorDataResponseBody::MonitorData> && monitorData) { DARABONBA_PTR_SET_RVALUE(monitorData_, monitorData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiskMonitorDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDiskMonitorDataResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The near real-time monitoring data of the disk.
    shared_ptr<vector<DescribeDiskMonitorDataResponseBody::MonitorData>> monitorData_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
