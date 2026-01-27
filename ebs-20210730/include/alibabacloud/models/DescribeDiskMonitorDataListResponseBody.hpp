// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATALISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATALISTRESPONSEBODY_HPP_
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
  class DescribeDiskMonitorDataListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskMonitorDataListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskMonitorDataListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDiskMonitorDataListResponseBody() = default ;
    DescribeDiskMonitorDataListResponseBody(const DescribeDiskMonitorDataListResponseBody &) = default ;
    DescribeDiskMonitorDataListResponseBody(DescribeDiskMonitorDataListResponseBody &&) = default ;
    DescribeDiskMonitorDataListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskMonitorDataListResponseBody() = default ;
    DescribeDiskMonitorDataListResponseBody& operator=(const DescribeDiskMonitorDataListResponseBody &) = default ;
    DescribeDiskMonitorDataListResponseBody& operator=(DescribeDiskMonitorDataListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MonitorData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MonitorData& obj) { 
        DARABONBA_PTR_TO_JSON(BurstIOCount, burstIOCount_);
        DARABONBA_PTR_TO_JSON(DiskId, diskId_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, MonitorData& obj) { 
        DARABONBA_PTR_FROM_JSON(BurstIOCount, burstIOCount_);
        DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
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
      virtual bool empty() const override { return this->burstIOCount_ == nullptr
        && this->diskId_ == nullptr && this->timestamp_ == nullptr; };
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


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline MonitorData& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // The number of burst I/O operations.
      shared_ptr<int64_t> burstIOCount_ {};
      // The ID of the disk.
      shared_ptr<string> diskId_ {};
      // The beginning of the time range during which the performance of the disk bursts. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
      shared_ptr<string> timestamp_ {};
    };

    virtual bool empty() const override { return this->monitorData_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // monitorData Field Functions 
    bool hasMonitorData() const { return this->monitorData_ != nullptr;};
    void deleteMonitorData() { this->monitorData_ = nullptr;};
    inline const vector<DescribeDiskMonitorDataListResponseBody::MonitorData> & getMonitorData() const { DARABONBA_PTR_GET_CONST(monitorData_, vector<DescribeDiskMonitorDataListResponseBody::MonitorData>) };
    inline vector<DescribeDiskMonitorDataListResponseBody::MonitorData> getMonitorData() { DARABONBA_PTR_GET(monitorData_, vector<DescribeDiskMonitorDataListResponseBody::MonitorData>) };
    inline DescribeDiskMonitorDataListResponseBody& setMonitorData(const vector<DescribeDiskMonitorDataListResponseBody::MonitorData> & monitorData) { DARABONBA_PTR_SET_VALUE(monitorData_, monitorData) };
    inline DescribeDiskMonitorDataListResponseBody& setMonitorData(vector<DescribeDiskMonitorDataListResponseBody::MonitorData> && monitorData) { DARABONBA_PTR_SET_RVALUE(monitorData_, monitorData) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDiskMonitorDataListResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiskMonitorDataListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDiskMonitorDataListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The near real-time monitoring data of the disks.
    shared_ptr<vector<DescribeDiskMonitorDataListResponseBody::MonitorData>> monitorData_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
