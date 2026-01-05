// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
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
        DARABONBA_PTR_TO_JSON(DiskMonitorData, diskMonitorData_);
      };
      friend void from_json(const Darabonba::Json& j, MonitorData& obj) { 
        DARABONBA_PTR_FROM_JSON(DiskMonitorData, diskMonitorData_);
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
      class DiskMonitorData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DiskMonitorData& obj) { 
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
        friend void from_json(const Darabonba::Json& j, DiskMonitorData& obj) { 
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
        DiskMonitorData() = default ;
        DiskMonitorData(const DiskMonitorData &) = default ;
        DiskMonitorData(DiskMonitorData &&) = default ;
        DiskMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DiskMonitorData() = default ;
        DiskMonitorData& operator=(const DiskMonitorData &) = default ;
        DiskMonitorData& operator=(DiskMonitorData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->BPSRead_ == nullptr
        && this->BPSTotal_ == nullptr && this->BPSWrite_ == nullptr && this->diskId_ == nullptr && this->IOPSRead_ == nullptr && this->IOPSTotal_ == nullptr
        && this->IOPSWrite_ == nullptr && this->latencyRead_ == nullptr && this->latencyWrite_ == nullptr && this->timeStamp_ == nullptr; };
        // BPSRead Field Functions 
        bool hasBPSRead() const { return this->BPSRead_ != nullptr;};
        void deleteBPSRead() { this->BPSRead_ = nullptr;};
        inline int32_t getBPSRead() const { DARABONBA_PTR_GET_DEFAULT(BPSRead_, 0) };
        inline DiskMonitorData& setBPSRead(int32_t BPSRead) { DARABONBA_PTR_SET_VALUE(BPSRead_, BPSRead) };


        // BPSTotal Field Functions 
        bool hasBPSTotal() const { return this->BPSTotal_ != nullptr;};
        void deleteBPSTotal() { this->BPSTotal_ = nullptr;};
        inline int32_t getBPSTotal() const { DARABONBA_PTR_GET_DEFAULT(BPSTotal_, 0) };
        inline DiskMonitorData& setBPSTotal(int32_t BPSTotal) { DARABONBA_PTR_SET_VALUE(BPSTotal_, BPSTotal) };


        // BPSWrite Field Functions 
        bool hasBPSWrite() const { return this->BPSWrite_ != nullptr;};
        void deleteBPSWrite() { this->BPSWrite_ = nullptr;};
        inline int32_t getBPSWrite() const { DARABONBA_PTR_GET_DEFAULT(BPSWrite_, 0) };
        inline DiskMonitorData& setBPSWrite(int32_t BPSWrite) { DARABONBA_PTR_SET_VALUE(BPSWrite_, BPSWrite) };


        // diskId Field Functions 
        bool hasDiskId() const { return this->diskId_ != nullptr;};
        void deleteDiskId() { this->diskId_ = nullptr;};
        inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
        inline DiskMonitorData& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


        // IOPSRead Field Functions 
        bool hasIOPSRead() const { return this->IOPSRead_ != nullptr;};
        void deleteIOPSRead() { this->IOPSRead_ = nullptr;};
        inline int32_t getIOPSRead() const { DARABONBA_PTR_GET_DEFAULT(IOPSRead_, 0) };
        inline DiskMonitorData& setIOPSRead(int32_t IOPSRead) { DARABONBA_PTR_SET_VALUE(IOPSRead_, IOPSRead) };


        // IOPSTotal Field Functions 
        bool hasIOPSTotal() const { return this->IOPSTotal_ != nullptr;};
        void deleteIOPSTotal() { this->IOPSTotal_ = nullptr;};
        inline int32_t getIOPSTotal() const { DARABONBA_PTR_GET_DEFAULT(IOPSTotal_, 0) };
        inline DiskMonitorData& setIOPSTotal(int32_t IOPSTotal) { DARABONBA_PTR_SET_VALUE(IOPSTotal_, IOPSTotal) };


        // IOPSWrite Field Functions 
        bool hasIOPSWrite() const { return this->IOPSWrite_ != nullptr;};
        void deleteIOPSWrite() { this->IOPSWrite_ = nullptr;};
        inline int32_t getIOPSWrite() const { DARABONBA_PTR_GET_DEFAULT(IOPSWrite_, 0) };
        inline DiskMonitorData& setIOPSWrite(int32_t IOPSWrite) { DARABONBA_PTR_SET_VALUE(IOPSWrite_, IOPSWrite) };


        // latencyRead Field Functions 
        bool hasLatencyRead() const { return this->latencyRead_ != nullptr;};
        void deleteLatencyRead() { this->latencyRead_ = nullptr;};
        inline int32_t getLatencyRead() const { DARABONBA_PTR_GET_DEFAULT(latencyRead_, 0) };
        inline DiskMonitorData& setLatencyRead(int32_t latencyRead) { DARABONBA_PTR_SET_VALUE(latencyRead_, latencyRead) };


        // latencyWrite Field Functions 
        bool hasLatencyWrite() const { return this->latencyWrite_ != nullptr;};
        void deleteLatencyWrite() { this->latencyWrite_ = nullptr;};
        inline int32_t getLatencyWrite() const { DARABONBA_PTR_GET_DEFAULT(latencyWrite_, 0) };
        inline DiskMonitorData& setLatencyWrite(int32_t latencyWrite) { DARABONBA_PTR_SET_VALUE(latencyWrite_, latencyWrite) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DiskMonitorData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The read bandwidth of the disk. Unit: byte/s.
        shared_ptr<int32_t> BPSRead_ {};
        // The total read and write bandwidth of the disk. Unit: byte/s.
        shared_ptr<int32_t> BPSTotal_ {};
        // The write bandwidth of the disk. Unit: byte/s.
        shared_ptr<int32_t> BPSWrite_ {};
        // The ID of the disk.
        shared_ptr<string> diskId_ {};
        // The number of read I/O operations per second on the disk.
        shared_ptr<int32_t> IOPSRead_ {};
        // The total number of read and write I/O operations per second on the disk.
        shared_ptr<int32_t> IOPSTotal_ {};
        // The number of write I/O operations per second on the disk.
        shared_ptr<int32_t> IOPSWrite_ {};
        // The read latency of the disk. Unit: microseconds.
        shared_ptr<int32_t> latencyRead_ {};
        // The write latency of the disk. Unit: microseconds.
        shared_ptr<int32_t> latencyWrite_ {};
        // The timestamp of the monitoring data. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->diskMonitorData_ == nullptr; };
      // diskMonitorData Field Functions 
      bool hasDiskMonitorData() const { return this->diskMonitorData_ != nullptr;};
      void deleteDiskMonitorData() { this->diskMonitorData_ = nullptr;};
      inline const vector<MonitorData::DiskMonitorData> & getDiskMonitorData() const { DARABONBA_PTR_GET_CONST(diskMonitorData_, vector<MonitorData::DiskMonitorData>) };
      inline vector<MonitorData::DiskMonitorData> getDiskMonitorData() { DARABONBA_PTR_GET(diskMonitorData_, vector<MonitorData::DiskMonitorData>) };
      inline MonitorData& setDiskMonitorData(const vector<MonitorData::DiskMonitorData> & diskMonitorData) { DARABONBA_PTR_SET_VALUE(diskMonitorData_, diskMonitorData) };
      inline MonitorData& setDiskMonitorData(vector<MonitorData::DiskMonitorData> && diskMonitorData) { DARABONBA_PTR_SET_RVALUE(diskMonitorData_, diskMonitorData) };


    protected:
      shared_ptr<vector<MonitorData::DiskMonitorData>> diskMonitorData_ {};
    };

    virtual bool empty() const override { return this->monitorData_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // monitorData Field Functions 
    bool hasMonitorData() const { return this->monitorData_ != nullptr;};
    void deleteMonitorData() { this->monitorData_ = nullptr;};
    inline const DescribeDiskMonitorDataResponseBody::MonitorData & getMonitorData() const { DARABONBA_PTR_GET_CONST(monitorData_, DescribeDiskMonitorDataResponseBody::MonitorData) };
    inline DescribeDiskMonitorDataResponseBody::MonitorData getMonitorData() { DARABONBA_PTR_GET(monitorData_, DescribeDiskMonitorDataResponseBody::MonitorData) };
    inline DescribeDiskMonitorDataResponseBody& setMonitorData(const DescribeDiskMonitorDataResponseBody::MonitorData & monitorData) { DARABONBA_PTR_SET_VALUE(monitorData_, monitorData) };
    inline DescribeDiskMonitorDataResponseBody& setMonitorData(DescribeDiskMonitorDataResponseBody::MonitorData && monitorData) { DARABONBA_PTR_SET_RVALUE(monitorData_, monitorData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiskMonitorDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDiskMonitorDataResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The monitoring data of the disk.
    shared_ptr<DescribeDiskMonitorDataResponseBody::MonitorData> monitorData_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of monitoring data entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
