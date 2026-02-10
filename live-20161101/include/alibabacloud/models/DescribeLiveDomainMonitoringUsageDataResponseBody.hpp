// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINMONITORINGUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINMONITORINGUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainMonitoringUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainMonitoringUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MonitoringData, monitoringData_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainMonitoringUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MonitoringData, monitoringData_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveDomainMonitoringUsageDataResponseBody() = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBody(const DescribeLiveDomainMonitoringUsageDataResponseBody &) = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBody(DescribeLiveDomainMonitoringUsageDataResponseBody &&) = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainMonitoringUsageDataResponseBody() = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBody& operator=(const DescribeLiveDomainMonitoringUsageDataResponseBody &) = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBody& operator=(DescribeLiveDomainMonitoringUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MonitoringData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MonitoringData& obj) { 
        DARABONBA_PTR_TO_JSON(MonitoringDataItem, monitoringDataItem_);
      };
      friend void from_json(const Darabonba::Json& j, MonitoringData& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitoringDataItem, monitoringDataItem_);
      };
      MonitoringData() = default ;
      MonitoringData(const MonitoringData &) = default ;
      MonitoringData(MonitoringData &&) = default ;
      MonitoringData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MonitoringData() = default ;
      MonitoringData& operator=(const MonitoringData &) = default ;
      MonitoringData& operator=(MonitoringData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MonitoringDataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MonitoringDataItem& obj) { 
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(Resolution, resolution_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, MonitoringDataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        MonitoringDataItem() = default ;
        MonitoringDataItem(const MonitoringDataItem &) = default ;
        MonitoringDataItem(MonitoringDataItem &&) = default ;
        MonitoringDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MonitoringDataItem() = default ;
        MonitoringDataItem& operator=(const MonitoringDataItem &) = default ;
        MonitoringDataItem& operator=(MonitoringDataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainName_ == nullptr
        && this->duration_ == nullptr && this->instanceId_ == nullptr && this->region_ == nullptr && this->resolution_ == nullptr && this->timeStamp_ == nullptr; };
        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline MonitoringDataItem& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline MonitoringDataItem& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline MonitoringDataItem& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline MonitoringDataItem& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // resolution Field Functions 
        bool hasResolution() const { return this->resolution_ != nullptr;};
        void deleteResolution() { this->resolution_ = nullptr;};
        inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
        inline MonitoringDataItem& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline MonitoringDataItem& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        shared_ptr<string> domainName_ {};
        shared_ptr<int32_t> duration_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> region_ {};
        shared_ptr<string> resolution_ {};
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->monitoringDataItem_ == nullptr; };
      // monitoringDataItem Field Functions 
      bool hasMonitoringDataItem() const { return this->monitoringDataItem_ != nullptr;};
      void deleteMonitoringDataItem() { this->monitoringDataItem_ = nullptr;};
      inline const vector<MonitoringData::MonitoringDataItem> & getMonitoringDataItem() const { DARABONBA_PTR_GET_CONST(monitoringDataItem_, vector<MonitoringData::MonitoringDataItem>) };
      inline vector<MonitoringData::MonitoringDataItem> getMonitoringDataItem() { DARABONBA_PTR_GET(monitoringDataItem_, vector<MonitoringData::MonitoringDataItem>) };
      inline MonitoringData& setMonitoringDataItem(const vector<MonitoringData::MonitoringDataItem> & monitoringDataItem) { DARABONBA_PTR_SET_VALUE(monitoringDataItem_, monitoringDataItem) };
      inline MonitoringData& setMonitoringDataItem(vector<MonitoringData::MonitoringDataItem> && monitoringDataItem) { DARABONBA_PTR_SET_RVALUE(monitoringDataItem_, monitoringDataItem) };


    protected:
      shared_ptr<vector<MonitoringData::MonitoringDataItem>> monitoringDataItem_ {};
    };

    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->monitoringData_ == nullptr && this->region_ == nullptr && this->requestId_ == nullptr
        && this->startTime_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainMonitoringUsageDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDomainMonitoringUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeLiveDomainMonitoringUsageDataResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // monitoringData Field Functions 
    bool hasMonitoringData() const { return this->monitoringData_ != nullptr;};
    void deleteMonitoringData() { this->monitoringData_ = nullptr;};
    inline const DescribeLiveDomainMonitoringUsageDataResponseBody::MonitoringData & getMonitoringData() const { DARABONBA_PTR_GET_CONST(monitoringData_, DescribeLiveDomainMonitoringUsageDataResponseBody::MonitoringData) };
    inline DescribeLiveDomainMonitoringUsageDataResponseBody::MonitoringData getMonitoringData() { DARABONBA_PTR_GET(monitoringData_, DescribeLiveDomainMonitoringUsageDataResponseBody::MonitoringData) };
    inline DescribeLiveDomainMonitoringUsageDataResponseBody& setMonitoringData(const DescribeLiveDomainMonitoringUsageDataResponseBody::MonitoringData & monitoringData) { DARABONBA_PTR_SET_VALUE(monitoringData_, monitoringData) };
    inline DescribeLiveDomainMonitoringUsageDataResponseBody& setMonitoringData(DescribeLiveDomainMonitoringUsageDataResponseBody::MonitoringData && monitoringData) { DARABONBA_PTR_SET_RVALUE(monitoringData_, monitoringData) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLiveDomainMonitoringUsageDataResponseBody& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainMonitoringUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDomainMonitoringUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range.
    shared_ptr<string> endTime_ {};
    // The ID of the monitoring session.
    shared_ptr<string> instanceId_ {};
    shared_ptr<DescribeLiveDomainMonitoringUsageDataResponseBody::MonitoringData> monitoringData_ {};
    // The region of the live center.
    shared_ptr<string> region_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
