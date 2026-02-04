// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINORIGINBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINORIGINBPSDATARESPONSEBODY_HPP_
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
  class DescribeDcdnDomainOriginBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainOriginBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OriginBpsDataPerInterval, originBpsDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainOriginBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OriginBpsDataPerInterval, originBpsDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnDomainOriginBpsDataResponseBody() = default ;
    DescribeDcdnDomainOriginBpsDataResponseBody(const DescribeDcdnDomainOriginBpsDataResponseBody &) = default ;
    DescribeDcdnDomainOriginBpsDataResponseBody(DescribeDcdnDomainOriginBpsDataResponseBody &&) = default ;
    DescribeDcdnDomainOriginBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainOriginBpsDataResponseBody() = default ;
    DescribeDcdnDomainOriginBpsDataResponseBody& operator=(const DescribeDcdnDomainOriginBpsDataResponseBody &) = default ;
    DescribeDcdnDomainOriginBpsDataResponseBody& operator=(DescribeDcdnDomainOriginBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OriginBpsDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OriginBpsDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, OriginBpsDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      OriginBpsDataPerInterval() = default ;
      OriginBpsDataPerInterval(const OriginBpsDataPerInterval &) = default ;
      OriginBpsDataPerInterval(OriginBpsDataPerInterval &&) = default ;
      OriginBpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OriginBpsDataPerInterval() = default ;
      OriginBpsDataPerInterval& operator=(const OriginBpsDataPerInterval &) = default ;
      OriginBpsDataPerInterval& operator=(OriginBpsDataPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(DynamicHttpOriginBps, dynamicHttpOriginBps_);
          DARABONBA_PTR_TO_JSON(DynamicHttpsOriginBps, dynamicHttpsOriginBps_);
          DARABONBA_PTR_TO_JSON(OriginBps, originBps_);
          DARABONBA_PTR_TO_JSON(StaticHttpOriginBps, staticHttpOriginBps_);
          DARABONBA_PTR_TO_JSON(StaticHttpsOriginBps, staticHttpsOriginBps_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(DynamicHttpOriginBps, dynamicHttpOriginBps_);
          DARABONBA_PTR_FROM_JSON(DynamicHttpsOriginBps, dynamicHttpsOriginBps_);
          DARABONBA_PTR_FROM_JSON(OriginBps, originBps_);
          DARABONBA_PTR_FROM_JSON(StaticHttpOriginBps, staticHttpOriginBps_);
          DARABONBA_PTR_FROM_JSON(StaticHttpsOriginBps, staticHttpsOriginBps_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
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
        virtual bool empty() const override { return this->dynamicHttpOriginBps_ == nullptr
        && this->dynamicHttpsOriginBps_ == nullptr && this->originBps_ == nullptr && this->staticHttpOriginBps_ == nullptr && this->staticHttpsOriginBps_ == nullptr && this->timeStamp_ == nullptr; };
        // dynamicHttpOriginBps Field Functions 
        bool hasDynamicHttpOriginBps() const { return this->dynamicHttpOriginBps_ != nullptr;};
        void deleteDynamicHttpOriginBps() { this->dynamicHttpOriginBps_ = nullptr;};
        inline float getDynamicHttpOriginBps() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpOriginBps_, 0.0) };
        inline DataModule& setDynamicHttpOriginBps(float dynamicHttpOriginBps) { DARABONBA_PTR_SET_VALUE(dynamicHttpOriginBps_, dynamicHttpOriginBps) };


        // dynamicHttpsOriginBps Field Functions 
        bool hasDynamicHttpsOriginBps() const { return this->dynamicHttpsOriginBps_ != nullptr;};
        void deleteDynamicHttpsOriginBps() { this->dynamicHttpsOriginBps_ = nullptr;};
        inline float getDynamicHttpsOriginBps() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpsOriginBps_, 0.0) };
        inline DataModule& setDynamicHttpsOriginBps(float dynamicHttpsOriginBps) { DARABONBA_PTR_SET_VALUE(dynamicHttpsOriginBps_, dynamicHttpsOriginBps) };


        // originBps Field Functions 
        bool hasOriginBps() const { return this->originBps_ != nullptr;};
        void deleteOriginBps() { this->originBps_ = nullptr;};
        inline float getOriginBps() const { DARABONBA_PTR_GET_DEFAULT(originBps_, 0.0) };
        inline DataModule& setOriginBps(float originBps) { DARABONBA_PTR_SET_VALUE(originBps_, originBps) };


        // staticHttpOriginBps Field Functions 
        bool hasStaticHttpOriginBps() const { return this->staticHttpOriginBps_ != nullptr;};
        void deleteStaticHttpOriginBps() { this->staticHttpOriginBps_ = nullptr;};
        inline float getStaticHttpOriginBps() const { DARABONBA_PTR_GET_DEFAULT(staticHttpOriginBps_, 0.0) };
        inline DataModule& setStaticHttpOriginBps(float staticHttpOriginBps) { DARABONBA_PTR_SET_VALUE(staticHttpOriginBps_, staticHttpOriginBps) };


        // staticHttpsOriginBps Field Functions 
        bool hasStaticHttpsOriginBps() const { return this->staticHttpsOriginBps_ != nullptr;};
        void deleteStaticHttpsOriginBps() { this->staticHttpsOriginBps_ = nullptr;};
        inline float getStaticHttpsOriginBps() const { DARABONBA_PTR_GET_DEFAULT(staticHttpsOriginBps_, 0.0) };
        inline DataModule& setStaticHttpsOriginBps(float staticHttpsOriginBps) { DARABONBA_PTR_SET_VALUE(staticHttpsOriginBps_, staticHttpsOriginBps) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The bandwidth that was consumed for fetching dynamic content from the origin over HTTP.
        shared_ptr<float> dynamicHttpOriginBps_ {};
        // The bandwidth that was consumed for fetching dynamic content from the origin over HTTPS.
        shared_ptr<float> dynamicHttpsOriginBps_ {};
        // The bandwidth that was consumed for fetching content from the origin.
        shared_ptr<float> originBps_ {};
        // The bandwidth that was consumed for fetching static content from the origin over HTTP.
        shared_ptr<float> staticHttpOriginBps_ {};
        // The bandwidth that was consumed for fetching static content from the origin over HTTPS.
        shared_ptr<float> staticHttpsOriginBps_ {};
        // The timestamp of the returned data.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<OriginBpsDataPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<OriginBpsDataPerInterval::DataModule>) };
      inline vector<OriginBpsDataPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<OriginBpsDataPerInterval::DataModule>) };
      inline OriginBpsDataPerInterval& setDataModule(const vector<OriginBpsDataPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline OriginBpsDataPerInterval& setDataModule(vector<OriginBpsDataPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<OriginBpsDataPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->originBpsDataPerInterval_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainOriginBpsDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainOriginBpsDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainOriginBpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // originBpsDataPerInterval Field Functions 
    bool hasOriginBpsDataPerInterval() const { return this->originBpsDataPerInterval_ != nullptr;};
    void deleteOriginBpsDataPerInterval() { this->originBpsDataPerInterval_ = nullptr;};
    inline const DescribeDcdnDomainOriginBpsDataResponseBody::OriginBpsDataPerInterval & getOriginBpsDataPerInterval() const { DARABONBA_PTR_GET_CONST(originBpsDataPerInterval_, DescribeDcdnDomainOriginBpsDataResponseBody::OriginBpsDataPerInterval) };
    inline DescribeDcdnDomainOriginBpsDataResponseBody::OriginBpsDataPerInterval getOriginBpsDataPerInterval() { DARABONBA_PTR_GET(originBpsDataPerInterval_, DescribeDcdnDomainOriginBpsDataResponseBody::OriginBpsDataPerInterval) };
    inline DescribeDcdnDomainOriginBpsDataResponseBody& setOriginBpsDataPerInterval(const DescribeDcdnDomainOriginBpsDataResponseBody::OriginBpsDataPerInterval & originBpsDataPerInterval) { DARABONBA_PTR_SET_VALUE(originBpsDataPerInterval_, originBpsDataPerInterval) };
    inline DescribeDcdnDomainOriginBpsDataResponseBody& setOriginBpsDataPerInterval(DescribeDcdnDomainOriginBpsDataResponseBody::OriginBpsDataPerInterval && originBpsDataPerInterval) { DARABONBA_PTR_SET_RVALUE(originBpsDataPerInterval_, originBpsDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainOriginBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainOriginBpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The origin bandwidth data returned at each time interval. Unit: bit/s.
    shared_ptr<DescribeDcdnDomainOriginBpsDataResponseBody::OriginBpsDataPerInterval> originBpsDataPerInterval_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
