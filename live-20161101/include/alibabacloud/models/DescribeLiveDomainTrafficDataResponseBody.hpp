// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINTRAFFICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINTRAFFICDATARESPONSEBODY_HPP_
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
  class DescribeLiveDomainTrafficDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TrafficDataPerInterval, trafficDataPerInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TrafficDataPerInterval, trafficDataPerInterval_);
    };
    DescribeLiveDomainTrafficDataResponseBody() = default ;
    DescribeLiveDomainTrafficDataResponseBody(const DescribeLiveDomainTrafficDataResponseBody &) = default ;
    DescribeLiveDomainTrafficDataResponseBody(DescribeLiveDomainTrafficDataResponseBody &&) = default ;
    DescribeLiveDomainTrafficDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainTrafficDataResponseBody() = default ;
    DescribeLiveDomainTrafficDataResponseBody& operator=(const DescribeLiveDomainTrafficDataResponseBody &) = default ;
    DescribeLiveDomainTrafficDataResponseBody& operator=(DescribeLiveDomainTrafficDataResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(HttpTrafficValue, httpTrafficValue_);
          DARABONBA_PTR_TO_JSON(HttpsTrafficValue, httpsTrafficValue_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(TrafficValue, trafficValue_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(HttpTrafficValue, httpTrafficValue_);
          DARABONBA_PTR_FROM_JSON(HttpsTrafficValue, httpsTrafficValue_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(TrafficValue, trafficValue_);
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
        virtual bool empty() const override { return this->httpTrafficValue_ == nullptr
        && this->httpsTrafficValue_ == nullptr && this->timeStamp_ == nullptr && this->trafficValue_ == nullptr; };
        // httpTrafficValue Field Functions 
        bool hasHttpTrafficValue() const { return this->httpTrafficValue_ != nullptr;};
        void deleteHttpTrafficValue() { this->httpTrafficValue_ = nullptr;};
        inline string getHttpTrafficValue() const { DARABONBA_PTR_GET_DEFAULT(httpTrafficValue_, "") };
        inline DataModule& setHttpTrafficValue(string httpTrafficValue) { DARABONBA_PTR_SET_VALUE(httpTrafficValue_, httpTrafficValue) };


        // httpsTrafficValue Field Functions 
        bool hasHttpsTrafficValue() const { return this->httpsTrafficValue_ != nullptr;};
        void deleteHttpsTrafficValue() { this->httpsTrafficValue_ = nullptr;};
        inline string getHttpsTrafficValue() const { DARABONBA_PTR_GET_DEFAULT(httpsTrafficValue_, "") };
        inline DataModule& setHttpsTrafficValue(string httpsTrafficValue) { DARABONBA_PTR_SET_VALUE(httpsTrafficValue_, httpsTrafficValue) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // trafficValue Field Functions 
        bool hasTrafficValue() const { return this->trafficValue_ != nullptr;};
        void deleteTrafficValue() { this->trafficValue_ = nullptr;};
        inline string getTrafficValue() const { DARABONBA_PTR_GET_DEFAULT(trafficValue_, "") };
        inline DataModule& setTrafficValue(string trafficValue) { DARABONBA_PTR_SET_VALUE(trafficValue_, trafficValue) };


      protected:
        shared_ptr<string> httpTrafficValue_ {};
        shared_ptr<string> httpsTrafficValue_ {};
        shared_ptr<string> timeStamp_ {};
        shared_ptr<string> trafficValue_ {};
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
    inline DescribeLiveDomainTrafficDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainTrafficDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDomainTrafficDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainTrafficDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDomainTrafficDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // trafficDataPerInterval Field Functions 
    bool hasTrafficDataPerInterval() const { return this->trafficDataPerInterval_ != nullptr;};
    void deleteTrafficDataPerInterval() { this->trafficDataPerInterval_ = nullptr;};
    inline const DescribeLiveDomainTrafficDataResponseBody::TrafficDataPerInterval & getTrafficDataPerInterval() const { DARABONBA_PTR_GET_CONST(trafficDataPerInterval_, DescribeLiveDomainTrafficDataResponseBody::TrafficDataPerInterval) };
    inline DescribeLiveDomainTrafficDataResponseBody::TrafficDataPerInterval getTrafficDataPerInterval() { DARABONBA_PTR_GET(trafficDataPerInterval_, DescribeLiveDomainTrafficDataResponseBody::TrafficDataPerInterval) };
    inline DescribeLiveDomainTrafficDataResponseBody& setTrafficDataPerInterval(const DescribeLiveDomainTrafficDataResponseBody::TrafficDataPerInterval & trafficDataPerInterval) { DARABONBA_PTR_SET_VALUE(trafficDataPerInterval_, trafficDataPerInterval) };
    inline DescribeLiveDomainTrafficDataResponseBody& setTrafficDataPerInterval(DescribeLiveDomainTrafficDataResponseBody::TrafficDataPerInterval && trafficDataPerInterval) { DARABONBA_PTR_SET_RVALUE(trafficDataPerInterval_, trafficDataPerInterval) };


  protected:
    // The time granularity of the query.
    shared_ptr<string> dataInterval_ {};
    // The streaming domain.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which the data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range during which the data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
    shared_ptr<DescribeLiveDomainTrafficDataResponseBody::TrafficDataPerInterval> trafficDataPerInterval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
