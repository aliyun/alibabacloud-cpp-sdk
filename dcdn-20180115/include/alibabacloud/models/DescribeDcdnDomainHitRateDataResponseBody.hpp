// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINHITRATEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINHITRATEDATARESPONSEBODY_HPP_
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
  class DescribeDcdnDomainHitRateDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainHitRateDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HitRatePerInterval, hitRatePerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainHitRateDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HitRatePerInterval, hitRatePerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnDomainHitRateDataResponseBody() = default ;
    DescribeDcdnDomainHitRateDataResponseBody(const DescribeDcdnDomainHitRateDataResponseBody &) = default ;
    DescribeDcdnDomainHitRateDataResponseBody(DescribeDcdnDomainHitRateDataResponseBody &&) = default ;
    DescribeDcdnDomainHitRateDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainHitRateDataResponseBody() = default ;
    DescribeDcdnDomainHitRateDataResponseBody& operator=(const DescribeDcdnDomainHitRateDataResponseBody &) = default ;
    DescribeDcdnDomainHitRateDataResponseBody& operator=(DescribeDcdnDomainHitRateDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HitRatePerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HitRatePerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, HitRatePerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      HitRatePerInterval() = default ;
      HitRatePerInterval(const HitRatePerInterval &) = default ;
      HitRatePerInterval(HitRatePerInterval &&) = default ;
      HitRatePerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HitRatePerInterval() = default ;
      HitRatePerInterval& operator=(const HitRatePerInterval &) = default ;
      HitRatePerInterval& operator=(HitRatePerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(ByteHitRate, byteHitRate_);
          DARABONBA_PTR_TO_JSON(ReqHitRate, reqHitRate_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(ByteHitRate, byteHitRate_);
          DARABONBA_PTR_FROM_JSON(ReqHitRate, reqHitRate_);
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
        virtual bool empty() const override { return this->byteHitRate_ == nullptr
        && this->reqHitRate_ == nullptr && this->timeStamp_ == nullptr; };
        // byteHitRate Field Functions 
        bool hasByteHitRate() const { return this->byteHitRate_ != nullptr;};
        void deleteByteHitRate() { this->byteHitRate_ = nullptr;};
        inline float getByteHitRate() const { DARABONBA_PTR_GET_DEFAULT(byteHitRate_, 0.0) };
        inline DataModule& setByteHitRate(float byteHitRate) { DARABONBA_PTR_SET_VALUE(byteHitRate_, byteHitRate) };


        // reqHitRate Field Functions 
        bool hasReqHitRate() const { return this->reqHitRate_ != nullptr;};
        void deleteReqHitRate() { this->reqHitRate_ = nullptr;};
        inline float getReqHitRate() const { DARABONBA_PTR_GET_DEFAULT(reqHitRate_, 0.0) };
        inline DataModule& setReqHitRate(float reqHitRate) { DARABONBA_PTR_SET_VALUE(reqHitRate_, reqHitRate) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The byte hit ratio.
        shared_ptr<float> byteHitRate_ {};
        // The request hit ratio.
        shared_ptr<float> reqHitRate_ {};
        // The timestamp of the returned data.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<HitRatePerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<HitRatePerInterval::DataModule>) };
      inline vector<HitRatePerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<HitRatePerInterval::DataModule>) };
      inline HitRatePerInterval& setDataModule(const vector<HitRatePerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline HitRatePerInterval& setDataModule(vector<HitRatePerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<HitRatePerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->hitRatePerInterval_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainHitRateDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainHitRateDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainHitRateDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // hitRatePerInterval Field Functions 
    bool hasHitRatePerInterval() const { return this->hitRatePerInterval_ != nullptr;};
    void deleteHitRatePerInterval() { this->hitRatePerInterval_ = nullptr;};
    inline const DescribeDcdnDomainHitRateDataResponseBody::HitRatePerInterval & getHitRatePerInterval() const { DARABONBA_PTR_GET_CONST(hitRatePerInterval_, DescribeDcdnDomainHitRateDataResponseBody::HitRatePerInterval) };
    inline DescribeDcdnDomainHitRateDataResponseBody::HitRatePerInterval getHitRatePerInterval() { DARABONBA_PTR_GET(hitRatePerInterval_, DescribeDcdnDomainHitRateDataResponseBody::HitRatePerInterval) };
    inline DescribeDcdnDomainHitRateDataResponseBody& setHitRatePerInterval(const DescribeDcdnDomainHitRateDataResponseBody::HitRatePerInterval & hitRatePerInterval) { DARABONBA_PTR_SET_VALUE(hitRatePerInterval_, hitRatePerInterval) };
    inline DescribeDcdnDomainHitRateDataResponseBody& setHitRatePerInterval(DescribeDcdnDomainHitRateDataResponseBody::HitRatePerInterval && hitRatePerInterval) { DARABONBA_PTR_SET_RVALUE(hitRatePerInterval_, hitRatePerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainHitRateDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainHitRateDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The byte hit ratio at each time interval. The byte hit ratio is measured in percentage.
    shared_ptr<DescribeDcdnDomainHitRateDataResponseBody::HitRatePerInterval> hitRatePerInterval_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
