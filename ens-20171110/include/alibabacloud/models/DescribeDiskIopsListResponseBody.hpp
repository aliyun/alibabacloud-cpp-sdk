// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKIOPSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKIOPSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDiskIopsListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskIopsListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiskIopsList, diskIopsList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskIopsListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskIopsList, diskIopsList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDiskIopsListResponseBody() = default ;
    DescribeDiskIopsListResponseBody(const DescribeDiskIopsListResponseBody &) = default ;
    DescribeDiskIopsListResponseBody(DescribeDiskIopsListResponseBody &&) = default ;
    DescribeDiskIopsListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskIopsListResponseBody() = default ;
    DescribeDiskIopsListResponseBody& operator=(const DescribeDiskIopsListResponseBody &) = default ;
    DescribeDiskIopsListResponseBody& operator=(DescribeDiskIopsListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DiskIopsList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiskIopsList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, DiskIopsList& obj) { 
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
      DiskIopsList() = default ;
      DiskIopsList(const DiskIopsList &) = default ;
      DiskIopsList(DiskIopsList &&) = default ;
      DiskIopsList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DiskIopsList() = default ;
      DiskIopsList& operator=(const DiskIopsList &) = default ;
      DiskIopsList& operator=(DiskIopsList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizTime_ == nullptr
        && this->diskId_ == nullptr && this->readBytes_ == nullptr && this->readLatency_ == nullptr && this->readOps_ == nullptr && this->regionId_ == nullptr
        && this->writeBytes_ == nullptr && this->writeLatency_ == nullptr && this->writeOps_ == nullptr; };
      // bizTime Field Functions 
      bool hasBizTime() const { return this->bizTime_ != nullptr;};
      void deleteBizTime() { this->bizTime_ = nullptr;};
      inline string getBizTime() const { DARABONBA_PTR_GET_DEFAULT(bizTime_, "") };
      inline DiskIopsList& setBizTime(string bizTime) { DARABONBA_PTR_SET_VALUE(bizTime_, bizTime) };


      // diskId Field Functions 
      bool hasDiskId() const { return this->diskId_ != nullptr;};
      void deleteDiskId() { this->diskId_ = nullptr;};
      inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
      inline DiskIopsList& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


      // readBytes Field Functions 
      bool hasReadBytes() const { return this->readBytes_ != nullptr;};
      void deleteReadBytes() { this->readBytes_ = nullptr;};
      inline int64_t getReadBytes() const { DARABONBA_PTR_GET_DEFAULT(readBytes_, 0L) };
      inline DiskIopsList& setReadBytes(int64_t readBytes) { DARABONBA_PTR_SET_VALUE(readBytes_, readBytes) };


      // readLatency Field Functions 
      bool hasReadLatency() const { return this->readLatency_ != nullptr;};
      void deleteReadLatency() { this->readLatency_ = nullptr;};
      inline int64_t getReadLatency() const { DARABONBA_PTR_GET_DEFAULT(readLatency_, 0L) };
      inline DiskIopsList& setReadLatency(int64_t readLatency) { DARABONBA_PTR_SET_VALUE(readLatency_, readLatency) };


      // readOps Field Functions 
      bool hasReadOps() const { return this->readOps_ != nullptr;};
      void deleteReadOps() { this->readOps_ = nullptr;};
      inline int64_t getReadOps() const { DARABONBA_PTR_GET_DEFAULT(readOps_, 0L) };
      inline DiskIopsList& setReadOps(int64_t readOps) { DARABONBA_PTR_SET_VALUE(readOps_, readOps) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DiskIopsList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // writeBytes Field Functions 
      bool hasWriteBytes() const { return this->writeBytes_ != nullptr;};
      void deleteWriteBytes() { this->writeBytes_ = nullptr;};
      inline int64_t getWriteBytes() const { DARABONBA_PTR_GET_DEFAULT(writeBytes_, 0L) };
      inline DiskIopsList& setWriteBytes(int64_t writeBytes) { DARABONBA_PTR_SET_VALUE(writeBytes_, writeBytes) };


      // writeLatency Field Functions 
      bool hasWriteLatency() const { return this->writeLatency_ != nullptr;};
      void deleteWriteLatency() { this->writeLatency_ = nullptr;};
      inline int64_t getWriteLatency() const { DARABONBA_PTR_GET_DEFAULT(writeLatency_, 0L) };
      inline DiskIopsList& setWriteLatency(int64_t writeLatency) { DARABONBA_PTR_SET_VALUE(writeLatency_, writeLatency) };


      // writeOps Field Functions 
      bool hasWriteOps() const { return this->writeOps_ != nullptr;};
      void deleteWriteOps() { this->writeOps_ = nullptr;};
      inline int64_t getWriteOps() const { DARABONBA_PTR_GET_DEFAULT(writeOps_, 0L) };
      inline DiskIopsList& setWriteOps(int64_t writeOps) { DARABONBA_PTR_SET_VALUE(writeOps_, writeOps) };


    protected:
      // The business time . The time is displayed in the yyyy-MM-dd HH:mm:ss.
      shared_ptr<string> bizTime_ {};
      // The ID of the disk.
      shared_ptr<string> diskId_ {};
      // The read throughput. Unit: bytes.
      shared_ptr<int64_t> readBytes_ {};
      // The read latency. Unit: ms.
      shared_ptr<int64_t> readLatency_ {};
      // The read IOPS.
      shared_ptr<int64_t> readOps_ {};
      // The ID of the node.
      shared_ptr<string> regionId_ {};
      // The write throughput. Unit: bytes.
      shared_ptr<int64_t> writeBytes_ {};
      // The write latency. Unit: microseconds.
      shared_ptr<int64_t> writeLatency_ {};
      // The write IOPS.
      shared_ptr<int64_t> writeOps_ {};
    };

    virtual bool empty() const override { return this->diskIopsList_ == nullptr
        && this->requestId_ == nullptr; };
    // diskIopsList Field Functions 
    bool hasDiskIopsList() const { return this->diskIopsList_ != nullptr;};
    void deleteDiskIopsList() { this->diskIopsList_ = nullptr;};
    inline const vector<DescribeDiskIopsListResponseBody::DiskIopsList> & getDiskIopsList() const { DARABONBA_PTR_GET_CONST(diskIopsList_, vector<DescribeDiskIopsListResponseBody::DiskIopsList>) };
    inline vector<DescribeDiskIopsListResponseBody::DiskIopsList> getDiskIopsList() { DARABONBA_PTR_GET(diskIopsList_, vector<DescribeDiskIopsListResponseBody::DiskIopsList>) };
    inline DescribeDiskIopsListResponseBody& setDiskIopsList(const vector<DescribeDiskIopsListResponseBody::DiskIopsList> & diskIopsList) { DARABONBA_PTR_SET_VALUE(diskIopsList_, diskIopsList) };
    inline DescribeDiskIopsListResponseBody& setDiskIopsList(vector<DescribeDiskIopsListResponseBody::DiskIopsList> && diskIopsList) { DARABONBA_PTR_SET_RVALUE(diskIopsList_, diskIopsList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiskIopsListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IOPS monitoring data of the cloud disk.
    shared_ptr<vector<DescribeDiskIopsListResponseBody::DiskIopsList>> diskIopsList_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
