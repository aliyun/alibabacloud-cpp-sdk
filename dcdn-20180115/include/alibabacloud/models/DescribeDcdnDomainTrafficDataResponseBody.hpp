// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINTRAFFICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINTRAFFICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainTrafficDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TrafficDataPerInterval, trafficDataPerInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TrafficDataPerInterval, trafficDataPerInterval_);
    };
    DescribeDcdnDomainTrafficDataResponseBody() = default ;
    DescribeDcdnDomainTrafficDataResponseBody(const DescribeDcdnDomainTrafficDataResponseBody &) = default ;
    DescribeDcdnDomainTrafficDataResponseBody(DescribeDcdnDomainTrafficDataResponseBody &&) = default ;
    DescribeDcdnDomainTrafficDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainTrafficDataResponseBody() = default ;
    DescribeDcdnDomainTrafficDataResponseBody& operator=(const DescribeDcdnDomainTrafficDataResponseBody &) = default ;
    DescribeDcdnDomainTrafficDataResponseBody& operator=(DescribeDcdnDomainTrafficDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      TrafficDataPerInterval() = default ;
      TrafficDataPerInterval(const TrafficDataPerInterval &) = default ;
      TrafficDataPerInterval(TrafficDataPerInterval &&) = default ;
      TrafficDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficDataPerInterval() = default ;
      TrafficDataPerInterval& operator=(const TrafficDataPerInterval &) = default ;
      TrafficDataPerInterval& operator=(TrafficDataPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(DynamicHttpTraffic, dynamicHttpTraffic_);
          DARABONBA_PTR_TO_JSON(DynamicHttpsTraffic, dynamicHttpsTraffic_);
          DARABONBA_PTR_TO_JSON(StaticHttpTraffic, staticHttpTraffic_);
          DARABONBA_PTR_TO_JSON(StaticHttpsTraffic, staticHttpsTraffic_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(Traffic, traffic_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(DynamicHttpTraffic, dynamicHttpTraffic_);
          DARABONBA_PTR_FROM_JSON(DynamicHttpsTraffic, dynamicHttpsTraffic_);
          DARABONBA_PTR_FROM_JSON(StaticHttpTraffic, staticHttpTraffic_);
          DARABONBA_PTR_FROM_JSON(StaticHttpsTraffic, staticHttpsTraffic_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(Traffic, traffic_);
        };
        DataModule() = default ;
        DataModule(const DataModule &) = default ;
        DataModule(DataModule &&) = default ;
        DataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataModule() = default ;
        DataModule& operator=(const DataModule &) = default ;
        DataModule& operator=(DataModule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dynamicHttpTraffic_ == nullptr
        && this->dynamicHttpsTraffic_ == nullptr && this->staticHttpTraffic_ == nullptr && this->staticHttpsTraffic_ == nullptr && this->timeStamp_ == nullptr && this->traffic_ == nullptr; };
        // dynamicHttpTraffic Field Functions 
        bool hasDynamicHttpTraffic() const { return this->dynamicHttpTraffic_ != nullptr;};
        void deleteDynamicHttpTraffic() { this->dynamicHttpTraffic_ = nullptr;};
        inline float getDynamicHttpTraffic() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpTraffic_, 0.0) };
        inline DataModule& setDynamicHttpTraffic(float dynamicHttpTraffic) { DARABONBA_PTR_SET_VALUE(dynamicHttpTraffic_, dynamicHttpTraffic) };


        // dynamicHttpsTraffic Field Functions 
        bool hasDynamicHttpsTraffic() const { return this->dynamicHttpsTraffic_ != nullptr;};
        void deleteDynamicHttpsTraffic() { this->dynamicHttpsTraffic_ = nullptr;};
        inline float getDynamicHttpsTraffic() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpsTraffic_, 0.0) };
        inline DataModule& setDynamicHttpsTraffic(float dynamicHttpsTraffic) { DARABONBA_PTR_SET_VALUE(dynamicHttpsTraffic_, dynamicHttpsTraffic) };


        // staticHttpTraffic Field Functions 
        bool hasStaticHttpTraffic() const { return this->staticHttpTraffic_ != nullptr;};
        void deleteStaticHttpTraffic() { this->staticHttpTraffic_ = nullptr;};
        inline float getStaticHttpTraffic() const { DARABONBA_PTR_GET_DEFAULT(staticHttpTraffic_, 0.0) };
        inline DataModule& setStaticHttpTraffic(float staticHttpTraffic) { DARABONBA_PTR_SET_VALUE(staticHttpTraffic_, staticHttpTraffic) };


        // staticHttpsTraffic Field Functions 
        bool hasStaticHttpsTraffic() const { return this->staticHttpsTraffic_ != nullptr;};
        void deleteStaticHttpsTraffic() { this->staticHttpsTraffic_ = nullptr;};
        inline float getStaticHttpsTraffic() const { DARABONBA_PTR_GET_DEFAULT(staticHttpsTraffic_, 0.0) };
        inline DataModule& setStaticHttpsTraffic(float staticHttpsTraffic) { DARABONBA_PTR_SET_VALUE(staticHttpsTraffic_, staticHttpsTraffic) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // traffic Field Functions 
        bool hasTraffic() const { return this->traffic_ != nullptr;};
        void deleteTraffic() { this->traffic_ = nullptr;};
        inline float getTraffic() const { DARABONBA_PTR_GET_DEFAULT(traffic_, 0.0) };
        inline DataModule& setTraffic(float traffic) { DARABONBA_PTR_SET_VALUE(traffic_, traffic) };


      protected:
        // The network traffic that was consumed to deliver dynamic content over HTTP.
        shared_ptr<float> dynamicHttpTraffic_ {};
        // The network traffic that was consumed to deliver dynamic content over HTTPS.
        shared_ptr<float> dynamicHttpsTraffic_ {};
        // The network traffic that was consumed to deliver static content over HTTP.
        shared_ptr<float> staticHttpTraffic_ {};
        // The network traffic that was consumed to deliver static content over HTTPS.
        shared_ptr<float> staticHttpsTraffic_ {};
        // The timestamp of the data returned.
        shared_ptr<string> timeStamp_ {};
        // The total amount of network traffic.
        shared_ptr<float> traffic_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<TrafficDataPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<TrafficDataPerInterval::DataModule>) };
      inline vector<TrafficDataPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<TrafficDataPerInterval::DataModule>) };
      inline TrafficDataPerInterval& setDataModule(const vector<TrafficDataPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline TrafficDataPerInterval& setDataModule(vector<TrafficDataPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<TrafficDataPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr && this->trafficDataPerInterval_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainTrafficDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainTrafficDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainTrafficDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainTrafficDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainTrafficDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // trafficDataPerInterval Field Functions 
    bool hasTrafficDataPerInterval() const { return this->trafficDataPerInterval_ != nullptr;};
    void deleteTrafficDataPerInterval() { this->trafficDataPerInterval_ = nullptr;};
    inline const DescribeDcdnDomainTrafficDataResponseBody::TrafficDataPerInterval & getTrafficDataPerInterval() const { DARABONBA_PTR_GET_CONST(trafficDataPerInterval_, DescribeDcdnDomainTrafficDataResponseBody::TrafficDataPerInterval) };
    inline DescribeDcdnDomainTrafficDataResponseBody::TrafficDataPerInterval getTrafficDataPerInterval() { DARABONBA_PTR_GET(trafficDataPerInterval_, DescribeDcdnDomainTrafficDataResponseBody::TrafficDataPerInterval) };
    inline DescribeDcdnDomainTrafficDataResponseBody& setTrafficDataPerInterval(const DescribeDcdnDomainTrafficDataResponseBody::TrafficDataPerInterval & trafficDataPerInterval) { DARABONBA_PTR_SET_VALUE(trafficDataPerInterval_, trafficDataPerInterval) };
    inline DescribeDcdnDomainTrafficDataResponseBody& setTrafficDataPerInterval(DescribeDcdnDomainTrafficDataResponseBody::TrafficDataPerInterval && trafficDataPerInterval) { DARABONBA_PTR_SET_RVALUE(trafficDataPerInterval_, trafficDataPerInterval) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
    // The network traffic returned at each time interval. Unit: bytes.
    shared_ptr<DescribeDcdnDomainTrafficDataResponseBody::TrafficDataPerInterval> trafficDataPerInterval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
