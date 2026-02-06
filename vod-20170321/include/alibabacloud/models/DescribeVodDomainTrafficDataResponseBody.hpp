// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINTRAFFICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINTRAFFICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainTrafficDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalTraffic, totalTraffic_);
      DARABONBA_PTR_TO_JSON(TrafficDataPerInterval, trafficDataPerInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalTraffic, totalTraffic_);
      DARABONBA_PTR_FROM_JSON(TrafficDataPerInterval, trafficDataPerInterval_);
    };
    DescribeVodDomainTrafficDataResponseBody() = default ;
    DescribeVodDomainTrafficDataResponseBody(const DescribeVodDomainTrafficDataResponseBody &) = default ;
    DescribeVodDomainTrafficDataResponseBody(DescribeVodDomainTrafficDataResponseBody &&) = default ;
    DescribeVodDomainTrafficDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainTrafficDataResponseBody() = default ;
    DescribeVodDomainTrafficDataResponseBody& operator=(const DescribeVodDomainTrafficDataResponseBody &) = default ;
    DescribeVodDomainTrafficDataResponseBody& operator=(DescribeVodDomainTrafficDataResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(DomesticValue, domesticValue_);
          DARABONBA_PTR_TO_JSON(HttpsDomesticValue, httpsDomesticValue_);
          DARABONBA_PTR_TO_JSON(HttpsOverseasValue, httpsOverseasValue_);
          DARABONBA_PTR_TO_JSON(HttpsValue, httpsValue_);
          DARABONBA_PTR_TO_JSON(OverseasValue, overseasValue_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(DomesticValue, domesticValue_);
          DARABONBA_PTR_FROM_JSON(HttpsDomesticValue, httpsDomesticValue_);
          DARABONBA_PTR_FROM_JSON(HttpsOverseasValue, httpsOverseasValue_);
          DARABONBA_PTR_FROM_JSON(HttpsValue, httpsValue_);
          DARABONBA_PTR_FROM_JSON(OverseasValue, overseasValue_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        virtual bool empty() const override { return this->domesticValue_ == nullptr
        && this->httpsDomesticValue_ == nullptr && this->httpsOverseasValue_ == nullptr && this->httpsValue_ == nullptr && this->overseasValue_ == nullptr && this->timeStamp_ == nullptr
        && this->value_ == nullptr; };
        // domesticValue Field Functions 
        bool hasDomesticValue() const { return this->domesticValue_ != nullptr;};
        void deleteDomesticValue() { this->domesticValue_ = nullptr;};
        inline string getDomesticValue() const { DARABONBA_PTR_GET_DEFAULT(domesticValue_, "") };
        inline DataModule& setDomesticValue(string domesticValue) { DARABONBA_PTR_SET_VALUE(domesticValue_, domesticValue) };


        // httpsDomesticValue Field Functions 
        bool hasHttpsDomesticValue() const { return this->httpsDomesticValue_ != nullptr;};
        void deleteHttpsDomesticValue() { this->httpsDomesticValue_ = nullptr;};
        inline string getHttpsDomesticValue() const { DARABONBA_PTR_GET_DEFAULT(httpsDomesticValue_, "") };
        inline DataModule& setHttpsDomesticValue(string httpsDomesticValue) { DARABONBA_PTR_SET_VALUE(httpsDomesticValue_, httpsDomesticValue) };


        // httpsOverseasValue Field Functions 
        bool hasHttpsOverseasValue() const { return this->httpsOverseasValue_ != nullptr;};
        void deleteHttpsOverseasValue() { this->httpsOverseasValue_ = nullptr;};
        inline string getHttpsOverseasValue() const { DARABONBA_PTR_GET_DEFAULT(httpsOverseasValue_, "") };
        inline DataModule& setHttpsOverseasValue(string httpsOverseasValue) { DARABONBA_PTR_SET_VALUE(httpsOverseasValue_, httpsOverseasValue) };


        // httpsValue Field Functions 
        bool hasHttpsValue() const { return this->httpsValue_ != nullptr;};
        void deleteHttpsValue() { this->httpsValue_ = nullptr;};
        inline string getHttpsValue() const { DARABONBA_PTR_GET_DEFAULT(httpsValue_, "") };
        inline DataModule& setHttpsValue(string httpsValue) { DARABONBA_PTR_SET_VALUE(httpsValue_, httpsValue) };


        // overseasValue Field Functions 
        bool hasOverseasValue() const { return this->overseasValue_ != nullptr;};
        void deleteOverseasValue() { this->overseasValue_ = nullptr;};
        inline string getOverseasValue() const { DARABONBA_PTR_GET_DEFAULT(overseasValue_, "") };
        inline DataModule& setOverseasValue(string overseasValue) { DARABONBA_PTR_SET_VALUE(overseasValue_, overseasValue) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline DataModule& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The amount of network traffic in the Chinese mainland. Unit: bytes.
        shared_ptr<string> domesticValue_ {};
        // The amount of HTTPS network traffic on points of presence (POPs) in the Chinese mainland. Unit: bytes.
        shared_ptr<string> httpsDomesticValue_ {};
        // The amount of HTTPS network traffic on POPs outside the Chinese mainland. Unit: bytes.
        shared_ptr<string> httpsOverseasValue_ {};
        // The total amount of HTTPS network traffic on POPs. Unit: bytes.
        shared_ptr<string> httpsValue_ {};
        // The amount of network traffic outside the Chinese mainland. Unit: bytes.
        shared_ptr<string> overseasValue_ {};
        // The timestamp of the data returned. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> timeStamp_ {};
        // The total traffic. Unit: bytes.
        shared_ptr<string> value_ {};
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
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr && this->totalTraffic_ == nullptr
        && this->trafficDataPerInterval_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeVodDomainTrafficDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodDomainTrafficDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodDomainTrafficDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainTrafficDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodDomainTrafficDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalTraffic Field Functions 
    bool hasTotalTraffic() const { return this->totalTraffic_ != nullptr;};
    void deleteTotalTraffic() { this->totalTraffic_ = nullptr;};
    inline string getTotalTraffic() const { DARABONBA_PTR_GET_DEFAULT(totalTraffic_, "") };
    inline DescribeVodDomainTrafficDataResponseBody& setTotalTraffic(string totalTraffic) { DARABONBA_PTR_SET_VALUE(totalTraffic_, totalTraffic) };


    // trafficDataPerInterval Field Functions 
    bool hasTrafficDataPerInterval() const { return this->trafficDataPerInterval_ != nullptr;};
    void deleteTrafficDataPerInterval() { this->trafficDataPerInterval_ = nullptr;};
    inline const DescribeVodDomainTrafficDataResponseBody::TrafficDataPerInterval & getTrafficDataPerInterval() const { DARABONBA_PTR_GET_CONST(trafficDataPerInterval_, DescribeVodDomainTrafficDataResponseBody::TrafficDataPerInterval) };
    inline DescribeVodDomainTrafficDataResponseBody::TrafficDataPerInterval getTrafficDataPerInterval() { DARABONBA_PTR_GET(trafficDataPerInterval_, DescribeVodDomainTrafficDataResponseBody::TrafficDataPerInterval) };
    inline DescribeVodDomainTrafficDataResponseBody& setTrafficDataPerInterval(const DescribeVodDomainTrafficDataResponseBody::TrafficDataPerInterval & trafficDataPerInterval) { DARABONBA_PTR_SET_VALUE(trafficDataPerInterval_, trafficDataPerInterval) };
    inline DescribeVodDomainTrafficDataResponseBody& setTrafficDataPerInterval(DescribeVodDomainTrafficDataResponseBody::TrafficDataPerInterval && trafficDataPerInterval) { DARABONBA_PTR_SET_RVALUE(trafficDataPerInterval_, trafficDataPerInterval) };


  protected:
    // The time interval at which data is returned, which is the time granularity. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range.
    shared_ptr<string> endTime_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range.
    shared_ptr<string> startTime_ {};
    // The total amount of network traffic.
    shared_ptr<string> totalTraffic_ {};
    // The amount of network traffic at each time interval.
    shared_ptr<DescribeVodDomainTrafficDataResponseBody::TrafficDataPerInterval> trafficDataPerInterval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
