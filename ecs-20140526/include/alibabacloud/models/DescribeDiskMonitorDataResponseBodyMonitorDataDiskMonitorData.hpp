// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATARESPONSEBODYMONITORDATADISKMONITORDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATARESPONSEBODYMONITORDATADISKMONITORDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData& obj) { 
      DARABONBA_PTR_TO_JSON(BPSRead, BPSRead_);
      DARABONBA_PTR_TO_JSON(BPSTotal, BPSTotal_);
      DARABONBA_PTR_TO_JSON(BPSWrite, BPSWrite_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(IOPSRead, IOPSRead_);
      DARABONBA_PTR_TO_JSON(IOPSTotal, IOPSTotal_);
      DARABONBA_PTR_TO_JSON(IOPSWrite, IOPSWrite_);
      DARABONBA_PTR_TO_JSON(LatencyRead, latencyRead_);
      DARABONBA_PTR_TO_JSON(LatencyWrite, latencyWrite_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData& obj) { 
      DARABONBA_PTR_FROM_JSON(BPSRead, BPSRead_);
      DARABONBA_PTR_FROM_JSON(BPSTotal, BPSTotal_);
      DARABONBA_PTR_FROM_JSON(BPSWrite, BPSWrite_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(IOPSRead, IOPSRead_);
      DARABONBA_PTR_FROM_JSON(IOPSTotal, IOPSTotal_);
      DARABONBA_PTR_FROM_JSON(IOPSWrite, IOPSWrite_);
      DARABONBA_PTR_FROM_JSON(LatencyRead, latencyRead_);
      DARABONBA_PTR_FROM_JSON(LatencyWrite, latencyWrite_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData() = default ;
    DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData(const DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData &) = default ;
    DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData(DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData &&) = default ;
    DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData() = default ;
    DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData& operator=(const DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData &) = default ;
    DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData& operator=(DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->BPSRead_ == nullptr
        && return this->BPSTotal_ == nullptr && return this->BPSWrite_ == nullptr && return this->diskId_ == nullptr && return this->IOPSRead_ == nullptr && return this->IOPSTotal_ == nullptr
        && return this->IOPSWrite_ == nullptr && return this->latencyRead_ == nullptr && return this->latencyWrite_ == nullptr && return this->timeStamp_ == nullptr; };
    // BPSRead Field Functions 
    bool hasBPSRead() const { return this->BPSRead_ != nullptr;};
    void deleteBPSRead() { this->BPSRead_ = nullptr;};
    inline int32_t BPSRead() const { DARABONBA_PTR_GET_DEFAULT(BPSRead_, 0) };
    inline DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData& setBPSRead(int32_t BPSRead) { DARABONBA_PTR_SET_VALUE(BPSRead_, BPSRead) };


    // BPSTotal Field Functions 
    bool hasBPSTotal() const { return this->BPSTotal_ != nullptr;};
    void deleteBPSTotal() { this->BPSTotal_ = nullptr;};
    inline int32_t BPSTotal() const { DARABONBA_PTR_GET_DEFAULT(BPSTotal_, 0) };
    inline DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData& setBPSTotal(int32_t BPSTotal) { DARABONBA_PTR_SET_VALUE(BPSTotal_, BPSTotal) };


    // BPSWrite Field Functions 
    bool hasBPSWrite() const { return this->BPSWrite_ != nullptr;};
    void deleteBPSWrite() { this->BPSWrite_ = nullptr;};
    inline int32_t BPSWrite() const { DARABONBA_PTR_GET_DEFAULT(BPSWrite_, 0) };
    inline DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData& setBPSWrite(int32_t BPSWrite) { DARABONBA_PTR_SET_VALUE(BPSWrite_, BPSWrite) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // IOPSRead Field Functions 
    bool hasIOPSRead() const { return this->IOPSRead_ != nullptr;};
    void deleteIOPSRead() { this->IOPSRead_ = nullptr;};
    inline int32_t IOPSRead() const { DARABONBA_PTR_GET_DEFAULT(IOPSRead_, 0) };
    inline DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData& setIOPSRead(int32_t IOPSRead) { DARABONBA_PTR_SET_VALUE(IOPSRead_, IOPSRead) };


    // IOPSTotal Field Functions 
    bool hasIOPSTotal() const { return this->IOPSTotal_ != nullptr;};
    void deleteIOPSTotal() { this->IOPSTotal_ = nullptr;};
    inline int32_t IOPSTotal() const { DARABONBA_PTR_GET_DEFAULT(IOPSTotal_, 0) };
    inline DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData& setIOPSTotal(int32_t IOPSTotal) { DARABONBA_PTR_SET_VALUE(IOPSTotal_, IOPSTotal) };


    // IOPSWrite Field Functions 
    bool hasIOPSWrite() const { return this->IOPSWrite_ != nullptr;};
    void deleteIOPSWrite() { this->IOPSWrite_ = nullptr;};
    inline int32_t IOPSWrite() const { DARABONBA_PTR_GET_DEFAULT(IOPSWrite_, 0) };
    inline DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData& setIOPSWrite(int32_t IOPSWrite) { DARABONBA_PTR_SET_VALUE(IOPSWrite_, IOPSWrite) };


    // latencyRead Field Functions 
    bool hasLatencyRead() const { return this->latencyRead_ != nullptr;};
    void deleteLatencyRead() { this->latencyRead_ = nullptr;};
    inline int32_t latencyRead() const { DARABONBA_PTR_GET_DEFAULT(latencyRead_, 0) };
    inline DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData& setLatencyRead(int32_t latencyRead) { DARABONBA_PTR_SET_VALUE(latencyRead_, latencyRead) };


    // latencyWrite Field Functions 
    bool hasLatencyWrite() const { return this->latencyWrite_ != nullptr;};
    void deleteLatencyWrite() { this->latencyWrite_ = nullptr;};
    inline int32_t latencyWrite() const { DARABONBA_PTR_GET_DEFAULT(latencyWrite_, 0) };
    inline DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData& setLatencyWrite(int32_t latencyWrite) { DARABONBA_PTR_SET_VALUE(latencyWrite_, latencyWrite) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The read bandwidth of the disk. Unit: byte/s.
    std::shared_ptr<int32_t> BPSRead_ = nullptr;
    // The total read and write bandwidth of the disk. Unit: byte/s.
    std::shared_ptr<int32_t> BPSTotal_ = nullptr;
    // The write bandwidth of the disk. Unit: byte/s.
    std::shared_ptr<int32_t> BPSWrite_ = nullptr;
    // The ID of the disk.
    std::shared_ptr<string> diskId_ = nullptr;
    // The number of read I/O operations per second on the disk.
    std::shared_ptr<int32_t> IOPSRead_ = nullptr;
    // The total number of read and write I/O operations per second on the disk.
    std::shared_ptr<int32_t> IOPSTotal_ = nullptr;
    // The number of write I/O operations per second on the disk.
    std::shared_ptr<int32_t> IOPSWrite_ = nullptr;
    // The read latency of the disk. Unit: microseconds.
    std::shared_ptr<int32_t> latencyRead_ = nullptr;
    // The write latency of the disk. Unit: microseconds.
    std::shared_ptr<int32_t> latencyWrite_ = nullptr;
    // The timestamp of the monitoring data. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
