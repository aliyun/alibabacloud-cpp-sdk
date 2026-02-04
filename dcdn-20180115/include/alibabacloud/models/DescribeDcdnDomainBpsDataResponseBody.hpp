// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINBPSDATARESPONSEBODY_HPP_
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
  class DescribeDcdnDomainBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BpsDataPerInterval, bpsDataPerInterval_);
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BpsDataPerInterval, bpsDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnDomainBpsDataResponseBody() = default ;
    DescribeDcdnDomainBpsDataResponseBody(const DescribeDcdnDomainBpsDataResponseBody &) = default ;
    DescribeDcdnDomainBpsDataResponseBody(DescribeDcdnDomainBpsDataResponseBody &&) = default ;
    DescribeDcdnDomainBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainBpsDataResponseBody() = default ;
    DescribeDcdnDomainBpsDataResponseBody& operator=(const DescribeDcdnDomainBpsDataResponseBody &) = default ;
    DescribeDcdnDomainBpsDataResponseBody& operator=(DescribeDcdnDomainBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BpsDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BpsDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, BpsDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      BpsDataPerInterval() = default ;
      BpsDataPerInterval(const BpsDataPerInterval &) = default ;
      BpsDataPerInterval(BpsDataPerInterval &&) = default ;
      BpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BpsDataPerInterval() = default ;
      BpsDataPerInterval& operator=(const BpsDataPerInterval &) = default ;
      BpsDataPerInterval& operator=(BpsDataPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(Bps, bps_);
          DARABONBA_PTR_TO_JSON(DynamicHttpBps, dynamicHttpBps_);
          DARABONBA_PTR_TO_JSON(DynamicHttpsBps, dynamicHttpsBps_);
          DARABONBA_PTR_TO_JSON(StaticHttpBps, staticHttpBps_);
          DARABONBA_PTR_TO_JSON(StaticHttpsBps, staticHttpsBps_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(Bps, bps_);
          DARABONBA_PTR_FROM_JSON(DynamicHttpBps, dynamicHttpBps_);
          DARABONBA_PTR_FROM_JSON(DynamicHttpsBps, dynamicHttpsBps_);
          DARABONBA_PTR_FROM_JSON(StaticHttpBps, staticHttpBps_);
          DARABONBA_PTR_FROM_JSON(StaticHttpsBps, staticHttpsBps_);
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
        virtual bool empty() const override { return this->bps_ == nullptr
        && this->dynamicHttpBps_ == nullptr && this->dynamicHttpsBps_ == nullptr && this->staticHttpBps_ == nullptr && this->staticHttpsBps_ == nullptr && this->timeStamp_ == nullptr; };
        // bps Field Functions 
        bool hasBps() const { return this->bps_ != nullptr;};
        void deleteBps() { this->bps_ = nullptr;};
        inline float getBps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0.0) };
        inline DataModule& setBps(float bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


        // dynamicHttpBps Field Functions 
        bool hasDynamicHttpBps() const { return this->dynamicHttpBps_ != nullptr;};
        void deleteDynamicHttpBps() { this->dynamicHttpBps_ = nullptr;};
        inline float getDynamicHttpBps() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpBps_, 0.0) };
        inline DataModule& setDynamicHttpBps(float dynamicHttpBps) { DARABONBA_PTR_SET_VALUE(dynamicHttpBps_, dynamicHttpBps) };


        // dynamicHttpsBps Field Functions 
        bool hasDynamicHttpsBps() const { return this->dynamicHttpsBps_ != nullptr;};
        void deleteDynamicHttpsBps() { this->dynamicHttpsBps_ = nullptr;};
        inline float getDynamicHttpsBps() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpsBps_, 0.0) };
        inline DataModule& setDynamicHttpsBps(float dynamicHttpsBps) { DARABONBA_PTR_SET_VALUE(dynamicHttpsBps_, dynamicHttpsBps) };


        // staticHttpBps Field Functions 
        bool hasStaticHttpBps() const { return this->staticHttpBps_ != nullptr;};
        void deleteStaticHttpBps() { this->staticHttpBps_ = nullptr;};
        inline float getStaticHttpBps() const { DARABONBA_PTR_GET_DEFAULT(staticHttpBps_, 0.0) };
        inline DataModule& setStaticHttpBps(float staticHttpBps) { DARABONBA_PTR_SET_VALUE(staticHttpBps_, staticHttpBps) };


        // staticHttpsBps Field Functions 
        bool hasStaticHttpsBps() const { return this->staticHttpsBps_ != nullptr;};
        void deleteStaticHttpsBps() { this->staticHttpsBps_ = nullptr;};
        inline float getStaticHttpsBps() const { DARABONBA_PTR_GET_DEFAULT(staticHttpsBps_, 0.0) };
        inline DataModule& setStaticHttpsBps(float staticHttpsBps) { DARABONBA_PTR_SET_VALUE(staticHttpsBps_, staticHttpsBps) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The bandwidth value. Unit: bit/s.
        shared_ptr<float> bps_ {};
        // The bandwidth that was consumed to deliver dynamic content over HTTP. Unit: bit/s.
        shared_ptr<float> dynamicHttpBps_ {};
        // The bandwidth that was consumed to deliver dynamic content over HTTPS. Unit: bit/s.
        shared_ptr<float> dynamicHttpsBps_ {};
        // The bandwidth that was consumed to deliver static content over HTTP. Unit: bit/s.
        shared_ptr<float> staticHttpBps_ {};
        // The bandwidth that was consumed to deliver static content over HTTPS. Unit: bit/s.
        shared_ptr<float> staticHttpsBps_ {};
        // The timestamp of the data returned.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<BpsDataPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<BpsDataPerInterval::DataModule>) };
      inline vector<BpsDataPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<BpsDataPerInterval::DataModule>) };
      inline BpsDataPerInterval& setDataModule(const vector<BpsDataPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline BpsDataPerInterval& setDataModule(vector<BpsDataPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<BpsDataPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->bpsDataPerInterval_ == nullptr
        && this->dataInterval_ == nullptr && this->domainName_ == nullptr && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // bpsDataPerInterval Field Functions 
    bool hasBpsDataPerInterval() const { return this->bpsDataPerInterval_ != nullptr;};
    void deleteBpsDataPerInterval() { this->bpsDataPerInterval_ = nullptr;};
    inline const DescribeDcdnDomainBpsDataResponseBody::BpsDataPerInterval & getBpsDataPerInterval() const { DARABONBA_PTR_GET_CONST(bpsDataPerInterval_, DescribeDcdnDomainBpsDataResponseBody::BpsDataPerInterval) };
    inline DescribeDcdnDomainBpsDataResponseBody::BpsDataPerInterval getBpsDataPerInterval() { DARABONBA_PTR_GET(bpsDataPerInterval_, DescribeDcdnDomainBpsDataResponseBody::BpsDataPerInterval) };
    inline DescribeDcdnDomainBpsDataResponseBody& setBpsDataPerInterval(const DescribeDcdnDomainBpsDataResponseBody::BpsDataPerInterval & bpsDataPerInterval) { DARABONBA_PTR_SET_VALUE(bpsDataPerInterval_, bpsDataPerInterval) };
    inline DescribeDcdnDomainBpsDataResponseBody& setBpsDataPerInterval(DescribeDcdnDomainBpsDataResponseBody::BpsDataPerInterval && bpsDataPerInterval) { DARABONBA_PTR_SET_RVALUE(bpsDataPerInterval_, bpsDataPerInterval) };


    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainBpsDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainBpsDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainBpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainBpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The bandwidth data returned at each interval.
    shared_ptr<DescribeDcdnDomainBpsDataResponseBody::BpsDataPerInterval> bpsDataPerInterval_ {};
    // The time interval between the data entries returned.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
