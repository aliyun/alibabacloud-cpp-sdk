// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINORIGINTRAFFICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINORIGINTRAFFICDATARESPONSEBODY_HPP_
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
  class DescribeDcdnDomainOriginTrafficDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainOriginTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OriginTrafficDataPerInterval, originTrafficDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainOriginTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OriginTrafficDataPerInterval, originTrafficDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnDomainOriginTrafficDataResponseBody() = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBody(const DescribeDcdnDomainOriginTrafficDataResponseBody &) = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBody(DescribeDcdnDomainOriginTrafficDataResponseBody &&) = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainOriginTrafficDataResponseBody() = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBody& operator=(const DescribeDcdnDomainOriginTrafficDataResponseBody &) = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBody& operator=(DescribeDcdnDomainOriginTrafficDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OriginTrafficDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OriginTrafficDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, OriginTrafficDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      OriginTrafficDataPerInterval() = default ;
      OriginTrafficDataPerInterval(const OriginTrafficDataPerInterval &) = default ;
      OriginTrafficDataPerInterval(OriginTrafficDataPerInterval &&) = default ;
      OriginTrafficDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OriginTrafficDataPerInterval() = default ;
      OriginTrafficDataPerInterval& operator=(const OriginTrafficDataPerInterval &) = default ;
      OriginTrafficDataPerInterval& operator=(OriginTrafficDataPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(DynamicHttpOriginTraffic, dynamicHttpOriginTraffic_);
          DARABONBA_PTR_TO_JSON(DynamicHttpsOriginTraffic, dynamicHttpsOriginTraffic_);
          DARABONBA_PTR_TO_JSON(OriginTraffic, originTraffic_);
          DARABONBA_PTR_TO_JSON(StaticHttpOriginTraffic, staticHttpOriginTraffic_);
          DARABONBA_PTR_TO_JSON(StaticHttpsOriginTraffic, staticHttpsOriginTraffic_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(DynamicHttpOriginTraffic, dynamicHttpOriginTraffic_);
          DARABONBA_PTR_FROM_JSON(DynamicHttpsOriginTraffic, dynamicHttpsOriginTraffic_);
          DARABONBA_PTR_FROM_JSON(OriginTraffic, originTraffic_);
          DARABONBA_PTR_FROM_JSON(StaticHttpOriginTraffic, staticHttpOriginTraffic_);
          DARABONBA_PTR_FROM_JSON(StaticHttpsOriginTraffic, staticHttpsOriginTraffic_);
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
        virtual bool empty() const override { return this->dynamicHttpOriginTraffic_ == nullptr
        && this->dynamicHttpsOriginTraffic_ == nullptr && this->originTraffic_ == nullptr && this->staticHttpOriginTraffic_ == nullptr && this->staticHttpsOriginTraffic_ == nullptr && this->timeStamp_ == nullptr; };
        // dynamicHttpOriginTraffic Field Functions 
        bool hasDynamicHttpOriginTraffic() const { return this->dynamicHttpOriginTraffic_ != nullptr;};
        void deleteDynamicHttpOriginTraffic() { this->dynamicHttpOriginTraffic_ = nullptr;};
        inline float getDynamicHttpOriginTraffic() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpOriginTraffic_, 0.0) };
        inline DataModule& setDynamicHttpOriginTraffic(float dynamicHttpOriginTraffic) { DARABONBA_PTR_SET_VALUE(dynamicHttpOriginTraffic_, dynamicHttpOriginTraffic) };


        // dynamicHttpsOriginTraffic Field Functions 
        bool hasDynamicHttpsOriginTraffic() const { return this->dynamicHttpsOriginTraffic_ != nullptr;};
        void deleteDynamicHttpsOriginTraffic() { this->dynamicHttpsOriginTraffic_ = nullptr;};
        inline float getDynamicHttpsOriginTraffic() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpsOriginTraffic_, 0.0) };
        inline DataModule& setDynamicHttpsOriginTraffic(float dynamicHttpsOriginTraffic) { DARABONBA_PTR_SET_VALUE(dynamicHttpsOriginTraffic_, dynamicHttpsOriginTraffic) };


        // originTraffic Field Functions 
        bool hasOriginTraffic() const { return this->originTraffic_ != nullptr;};
        void deleteOriginTraffic() { this->originTraffic_ = nullptr;};
        inline float getOriginTraffic() const { DARABONBA_PTR_GET_DEFAULT(originTraffic_, 0.0) };
        inline DataModule& setOriginTraffic(float originTraffic) { DARABONBA_PTR_SET_VALUE(originTraffic_, originTraffic) };


        // staticHttpOriginTraffic Field Functions 
        bool hasStaticHttpOriginTraffic() const { return this->staticHttpOriginTraffic_ != nullptr;};
        void deleteStaticHttpOriginTraffic() { this->staticHttpOriginTraffic_ = nullptr;};
        inline float getStaticHttpOriginTraffic() const { DARABONBA_PTR_GET_DEFAULT(staticHttpOriginTraffic_, 0.0) };
        inline DataModule& setStaticHttpOriginTraffic(float staticHttpOriginTraffic) { DARABONBA_PTR_SET_VALUE(staticHttpOriginTraffic_, staticHttpOriginTraffic) };


        // staticHttpsOriginTraffic Field Functions 
        bool hasStaticHttpsOriginTraffic() const { return this->staticHttpsOriginTraffic_ != nullptr;};
        void deleteStaticHttpsOriginTraffic() { this->staticHttpsOriginTraffic_ = nullptr;};
        inline float getStaticHttpsOriginTraffic() const { DARABONBA_PTR_GET_DEFAULT(staticHttpsOriginTraffic_, 0.0) };
        inline DataModule& setStaticHttpsOriginTraffic(float staticHttpsOriginTraffic) { DARABONBA_PTR_SET_VALUE(staticHttpsOriginTraffic_, staticHttpsOriginTraffic) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The amount of back-to-origin traffic that was consumed to deliver dynamic content over HTTP.
        shared_ptr<float> dynamicHttpOriginTraffic_ {};
        // The amount of back-to-origin traffic that was consumed to deliver dynamic content over HTTPS.
        shared_ptr<float> dynamicHttpsOriginTraffic_ {};
        // The amount of back-to-origin traffic.
        shared_ptr<float> originTraffic_ {};
        // The amount of back-to-origin traffic that was consumed to deliver static content over HTTP.
        shared_ptr<float> staticHttpOriginTraffic_ {};
        // The amount of back-to-origin traffic that was consumed to deliver static content over HTTPS.
        shared_ptr<float> staticHttpsOriginTraffic_ {};
        // The timestamp of the data returned.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<OriginTrafficDataPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<OriginTrafficDataPerInterval::DataModule>) };
      inline vector<OriginTrafficDataPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<OriginTrafficDataPerInterval::DataModule>) };
      inline OriginTrafficDataPerInterval& setDataModule(const vector<OriginTrafficDataPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline OriginTrafficDataPerInterval& setDataModule(vector<OriginTrafficDataPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<OriginTrafficDataPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->originTrafficDataPerInterval_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainOriginTrafficDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainOriginTrafficDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainOriginTrafficDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // originTrafficDataPerInterval Field Functions 
    bool hasOriginTrafficDataPerInterval() const { return this->originTrafficDataPerInterval_ != nullptr;};
    void deleteOriginTrafficDataPerInterval() { this->originTrafficDataPerInterval_ = nullptr;};
    inline const DescribeDcdnDomainOriginTrafficDataResponseBody::OriginTrafficDataPerInterval & getOriginTrafficDataPerInterval() const { DARABONBA_PTR_GET_CONST(originTrafficDataPerInterval_, DescribeDcdnDomainOriginTrafficDataResponseBody::OriginTrafficDataPerInterval) };
    inline DescribeDcdnDomainOriginTrafficDataResponseBody::OriginTrafficDataPerInterval getOriginTrafficDataPerInterval() { DARABONBA_PTR_GET(originTrafficDataPerInterval_, DescribeDcdnDomainOriginTrafficDataResponseBody::OriginTrafficDataPerInterval) };
    inline DescribeDcdnDomainOriginTrafficDataResponseBody& setOriginTrafficDataPerInterval(const DescribeDcdnDomainOriginTrafficDataResponseBody::OriginTrafficDataPerInterval & originTrafficDataPerInterval) { DARABONBA_PTR_SET_VALUE(originTrafficDataPerInterval_, originTrafficDataPerInterval) };
    inline DescribeDcdnDomainOriginTrafficDataResponseBody& setOriginTrafficDataPerInterval(DescribeDcdnDomainOriginTrafficDataResponseBody::OriginTrafficDataPerInterval && originTrafficDataPerInterval) { DARABONBA_PTR_SET_RVALUE(originTrafficDataPerInterval_, originTrafficDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainOriginTrafficDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainOriginTrafficDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The amount of back-to-origin traffic returned at each time interval. Unit: bytes.
    shared_ptr<DescribeDcdnDomainOriginTrafficDataResponseBody::OriginTrafficDataPerInterval> originTrafficDataPerInterval_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
