// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMESRCTRAFFICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMESRCTRAFFICDATARESPONSEBODY_HPP_
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
  class DescribeDomainRealTimeSrcTrafficDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealTimeSrcTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RealTimeSrcTrafficDataPerInterval, realTimeSrcTrafficDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealTimeSrcTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RealTimeSrcTrafficDataPerInterval, realTimeSrcTrafficDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainRealTimeSrcTrafficDataResponseBody() = default ;
    DescribeDomainRealTimeSrcTrafficDataResponseBody(const DescribeDomainRealTimeSrcTrafficDataResponseBody &) = default ;
    DescribeDomainRealTimeSrcTrafficDataResponseBody(DescribeDomainRealTimeSrcTrafficDataResponseBody &&) = default ;
    DescribeDomainRealTimeSrcTrafficDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealTimeSrcTrafficDataResponseBody() = default ;
    DescribeDomainRealTimeSrcTrafficDataResponseBody& operator=(const DescribeDomainRealTimeSrcTrafficDataResponseBody &) = default ;
    DescribeDomainRealTimeSrcTrafficDataResponseBody& operator=(DescribeDomainRealTimeSrcTrafficDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RealTimeSrcTrafficDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RealTimeSrcTrafficDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, RealTimeSrcTrafficDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      RealTimeSrcTrafficDataPerInterval() = default ;
      RealTimeSrcTrafficDataPerInterval(const RealTimeSrcTrafficDataPerInterval &) = default ;
      RealTimeSrcTrafficDataPerInterval(RealTimeSrcTrafficDataPerInterval &&) = default ;
      RealTimeSrcTrafficDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RealTimeSrcTrafficDataPerInterval() = default ;
      RealTimeSrcTrafficDataPerInterval& operator=(const RealTimeSrcTrafficDataPerInterval &) = default ;
      RealTimeSrcTrafficDataPerInterval& operator=(RealTimeSrcTrafficDataPerInterval &&) = default ;
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
      inline const vector<RealTimeSrcTrafficDataPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<RealTimeSrcTrafficDataPerInterval::DataModule>) };
      inline vector<RealTimeSrcTrafficDataPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<RealTimeSrcTrafficDataPerInterval::DataModule>) };
      inline RealTimeSrcTrafficDataPerInterval& setDataModule(const vector<RealTimeSrcTrafficDataPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline RealTimeSrcTrafficDataPerInterval& setDataModule(vector<RealTimeSrcTrafficDataPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<RealTimeSrcTrafficDataPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->realTimeSrcTrafficDataPerInterval_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDomainRealTimeSrcTrafficDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainRealTimeSrcTrafficDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainRealTimeSrcTrafficDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // realTimeSrcTrafficDataPerInterval Field Functions 
    bool hasRealTimeSrcTrafficDataPerInterval() const { return this->realTimeSrcTrafficDataPerInterval_ != nullptr;};
    void deleteRealTimeSrcTrafficDataPerInterval() { this->realTimeSrcTrafficDataPerInterval_ = nullptr;};
    inline const DescribeDomainRealTimeSrcTrafficDataResponseBody::RealTimeSrcTrafficDataPerInterval & getRealTimeSrcTrafficDataPerInterval() const { DARABONBA_PTR_GET_CONST(realTimeSrcTrafficDataPerInterval_, DescribeDomainRealTimeSrcTrafficDataResponseBody::RealTimeSrcTrafficDataPerInterval) };
    inline DescribeDomainRealTimeSrcTrafficDataResponseBody::RealTimeSrcTrafficDataPerInterval getRealTimeSrcTrafficDataPerInterval() { DARABONBA_PTR_GET(realTimeSrcTrafficDataPerInterval_, DescribeDomainRealTimeSrcTrafficDataResponseBody::RealTimeSrcTrafficDataPerInterval) };
    inline DescribeDomainRealTimeSrcTrafficDataResponseBody& setRealTimeSrcTrafficDataPerInterval(const DescribeDomainRealTimeSrcTrafficDataResponseBody::RealTimeSrcTrafficDataPerInterval & realTimeSrcTrafficDataPerInterval) { DARABONBA_PTR_SET_VALUE(realTimeSrcTrafficDataPerInterval_, realTimeSrcTrafficDataPerInterval) };
    inline DescribeDomainRealTimeSrcTrafficDataResponseBody& setRealTimeSrcTrafficDataPerInterval(DescribeDomainRealTimeSrcTrafficDataResponseBody::RealTimeSrcTrafficDataPerInterval && realTimeSrcTrafficDataPerInterval) { DARABONBA_PTR_SET_RVALUE(realTimeSrcTrafficDataPerInterval_, realTimeSrcTrafficDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainRealTimeSrcTrafficDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainRealTimeSrcTrafficDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    // 
    // Depending on the maximum time range per query, the value is 60 (1 minute), 300 (5 minutes), or 3600 (1 hour). For more information, see the "Time granularity" section in Usage notes.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range for which the data was queried.
    shared_ptr<string> endTime_ {};
    shared_ptr<DescribeDomainRealTimeSrcTrafficDataResponseBody::RealTimeSrcTrafficDataPerInterval> realTimeSrcTrafficDataPerInterval_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start of the time range for which the data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
