// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTMONITORDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTMONITORDATARESPONSEBODY_HPP_
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
  class DescribeSnapshotMonitorDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSnapshotMonitorDataResponseBody() = default ;
    DescribeSnapshotMonitorDataResponseBody(const DescribeSnapshotMonitorDataResponseBody &) = default ;
    DescribeSnapshotMonitorDataResponseBody(DescribeSnapshotMonitorDataResponseBody &&) = default ;
    DescribeSnapshotMonitorDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotMonitorDataResponseBody() = default ;
    DescribeSnapshotMonitorDataResponseBody& operator=(const DescribeSnapshotMonitorDataResponseBody &) = default ;
    DescribeSnapshotMonitorDataResponseBody& operator=(DescribeSnapshotMonitorDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MonitorData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MonitorData& obj) { 
        DARABONBA_PTR_TO_JSON(DataPoint, dataPoint_);
      };
      friend void from_json(const Darabonba::Json& j, MonitorData& obj) { 
        DARABONBA_PTR_FROM_JSON(DataPoint, dataPoint_);
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
      class DataPoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataPoint& obj) { 
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, DataPoint& obj) { 
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        DataPoint() = default ;
        DataPoint(const DataPoint &) = default ;
        DataPoint(DataPoint &&) = default ;
        DataPoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataPoint() = default ;
        DataPoint& operator=(const DataPoint &) = default ;
        DataPoint& operator=(DataPoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->size_ == nullptr
        && this->timeStamp_ == nullptr; };
        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline DataPoint& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataPoint& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The total size of snapshots. Unit: bytes.
        shared_ptr<int64_t> size_ {};
        // The timestamp that corresponds to a snapshot size.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->dataPoint_ == nullptr; };
      // dataPoint Field Functions 
      bool hasDataPoint() const { return this->dataPoint_ != nullptr;};
      void deleteDataPoint() { this->dataPoint_ = nullptr;};
      inline const vector<MonitorData::DataPoint> & getDataPoint() const { DARABONBA_PTR_GET_CONST(dataPoint_, vector<MonitorData::DataPoint>) };
      inline vector<MonitorData::DataPoint> getDataPoint() { DARABONBA_PTR_GET(dataPoint_, vector<MonitorData::DataPoint>) };
      inline MonitorData& setDataPoint(const vector<MonitorData::DataPoint> & dataPoint) { DARABONBA_PTR_SET_VALUE(dataPoint_, dataPoint) };
      inline MonitorData& setDataPoint(vector<MonitorData::DataPoint> && dataPoint) { DARABONBA_PTR_SET_RVALUE(dataPoint_, dataPoint) };


    protected:
      shared_ptr<vector<MonitorData::DataPoint>> dataPoint_ {};
    };

    virtual bool empty() const override { return this->monitorData_ == nullptr
        && this->requestId_ == nullptr; };
    // monitorData Field Functions 
    bool hasMonitorData() const { return this->monitorData_ != nullptr;};
    void deleteMonitorData() { this->monitorData_ = nullptr;};
    inline const DescribeSnapshotMonitorDataResponseBody::MonitorData & getMonitorData() const { DARABONBA_PTR_GET_CONST(monitorData_, DescribeSnapshotMonitorDataResponseBody::MonitorData) };
    inline DescribeSnapshotMonitorDataResponseBody::MonitorData getMonitorData() { DARABONBA_PTR_GET(monitorData_, DescribeSnapshotMonitorDataResponseBody::MonitorData) };
    inline DescribeSnapshotMonitorDataResponseBody& setMonitorData(const DescribeSnapshotMonitorDataResponseBody::MonitorData & monitorData) { DARABONBA_PTR_SET_VALUE(monitorData_, monitorData) };
    inline DescribeSnapshotMonitorDataResponseBody& setMonitorData(DescribeSnapshotMonitorDataResponseBody::MonitorData && monitorData) { DARABONBA_PTR_SET_RVALUE(monitorData_, monitorData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSnapshotMonitorDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The monitoring data of snapshot sizes.
    shared_ptr<DescribeSnapshotMonitorDataResponseBody::MonitorData> monitorData_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
