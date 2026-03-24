// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMESRCBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMESRCBPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRealTimeSrcBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealTimeSrcBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RealTimeSrcBpsDataPerInterval, realTimeSrcBpsDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealTimeSrcBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RealTimeSrcBpsDataPerInterval, realTimeSrcBpsDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainRealTimeSrcBpsDataResponseBody() = default ;
    DescribeDomainRealTimeSrcBpsDataResponseBody(const DescribeDomainRealTimeSrcBpsDataResponseBody &) = default ;
    DescribeDomainRealTimeSrcBpsDataResponseBody(DescribeDomainRealTimeSrcBpsDataResponseBody &&) = default ;
    DescribeDomainRealTimeSrcBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealTimeSrcBpsDataResponseBody() = default ;
    DescribeDomainRealTimeSrcBpsDataResponseBody& operator=(const DescribeDomainRealTimeSrcBpsDataResponseBody &) = default ;
    DescribeDomainRealTimeSrcBpsDataResponseBody& operator=(DescribeDomainRealTimeSrcBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RealTimeSrcBpsDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RealTimeSrcBpsDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, RealTimeSrcBpsDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      RealTimeSrcBpsDataPerInterval() = default ;
      RealTimeSrcBpsDataPerInterval(const RealTimeSrcBpsDataPerInterval &) = default ;
      RealTimeSrcBpsDataPerInterval(RealTimeSrcBpsDataPerInterval &&) = default ;
      RealTimeSrcBpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RealTimeSrcBpsDataPerInterval() = default ;
      RealTimeSrcBpsDataPerInterval& operator=(const RealTimeSrcBpsDataPerInterval &) = default ;
      RealTimeSrcBpsDataPerInterval& operator=(RealTimeSrcBpsDataPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
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
        virtual bool empty() const override { return this->timeStamp_ == nullptr
        && this->value_ == nullptr; };
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
        shared_ptr<string> timeStamp_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<RealTimeSrcBpsDataPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<RealTimeSrcBpsDataPerInterval::DataModule>) };
      inline vector<RealTimeSrcBpsDataPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<RealTimeSrcBpsDataPerInterval::DataModule>) };
      inline RealTimeSrcBpsDataPerInterval& setDataModule(const vector<RealTimeSrcBpsDataPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline RealTimeSrcBpsDataPerInterval& setDataModule(vector<RealTimeSrcBpsDataPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<RealTimeSrcBpsDataPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->realTimeSrcBpsDataPerInterval_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDomainRealTimeSrcBpsDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainRealTimeSrcBpsDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainRealTimeSrcBpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // realTimeSrcBpsDataPerInterval Field Functions 
    bool hasRealTimeSrcBpsDataPerInterval() const { return this->realTimeSrcBpsDataPerInterval_ != nullptr;};
    void deleteRealTimeSrcBpsDataPerInterval() { this->realTimeSrcBpsDataPerInterval_ = nullptr;};
    inline const DescribeDomainRealTimeSrcBpsDataResponseBody::RealTimeSrcBpsDataPerInterval & getRealTimeSrcBpsDataPerInterval() const { DARABONBA_PTR_GET_CONST(realTimeSrcBpsDataPerInterval_, DescribeDomainRealTimeSrcBpsDataResponseBody::RealTimeSrcBpsDataPerInterval) };
    inline DescribeDomainRealTimeSrcBpsDataResponseBody::RealTimeSrcBpsDataPerInterval getRealTimeSrcBpsDataPerInterval() { DARABONBA_PTR_GET(realTimeSrcBpsDataPerInterval_, DescribeDomainRealTimeSrcBpsDataResponseBody::RealTimeSrcBpsDataPerInterval) };
    inline DescribeDomainRealTimeSrcBpsDataResponseBody& setRealTimeSrcBpsDataPerInterval(const DescribeDomainRealTimeSrcBpsDataResponseBody::RealTimeSrcBpsDataPerInterval & realTimeSrcBpsDataPerInterval) { DARABONBA_PTR_SET_VALUE(realTimeSrcBpsDataPerInterval_, realTimeSrcBpsDataPerInterval) };
    inline DescribeDomainRealTimeSrcBpsDataResponseBody& setRealTimeSrcBpsDataPerInterval(DescribeDomainRealTimeSrcBpsDataResponseBody::RealTimeSrcBpsDataPerInterval && realTimeSrcBpsDataPerInterval) { DARABONBA_PTR_SET_RVALUE(realTimeSrcBpsDataPerInterval_, realTimeSrcBpsDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainRealTimeSrcBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainRealTimeSrcBpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    // 
    // The time granularity varies with the maximum time range per query. Valid values: 60 (1 minute), 300 (5 minutes), and 3600(1 hour). For more information, see **Usage notes**.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    shared_ptr<DescribeDomainRealTimeSrcBpsDataResponseBody::RealTimeSrcBpsDataPerInterval> realTimeSrcBpsDataPerInterval_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
