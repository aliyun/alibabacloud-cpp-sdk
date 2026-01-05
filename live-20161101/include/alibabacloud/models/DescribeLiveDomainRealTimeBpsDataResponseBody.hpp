// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINREALTIMEBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINREALTIMEBPSDATARESPONSEBODY_HPP_
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
  class DescribeLiveDomainRealTimeBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainRealTimeBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RealTimeBpsDataPerInterval, realTimeBpsDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainRealTimeBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RealTimeBpsDataPerInterval, realTimeBpsDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveDomainRealTimeBpsDataResponseBody() = default ;
    DescribeLiveDomainRealTimeBpsDataResponseBody(const DescribeLiveDomainRealTimeBpsDataResponseBody &) = default ;
    DescribeLiveDomainRealTimeBpsDataResponseBody(DescribeLiveDomainRealTimeBpsDataResponseBody &&) = default ;
    DescribeLiveDomainRealTimeBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainRealTimeBpsDataResponseBody() = default ;
    DescribeLiveDomainRealTimeBpsDataResponseBody& operator=(const DescribeLiveDomainRealTimeBpsDataResponseBody &) = default ;
    DescribeLiveDomainRealTimeBpsDataResponseBody& operator=(DescribeLiveDomainRealTimeBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RealTimeBpsDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RealTimeBpsDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, RealTimeBpsDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      RealTimeBpsDataPerInterval() = default ;
      RealTimeBpsDataPerInterval(const RealTimeBpsDataPerInterval &) = default ;
      RealTimeBpsDataPerInterval(RealTimeBpsDataPerInterval &&) = default ;
      RealTimeBpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RealTimeBpsDataPerInterval() = default ;
      RealTimeBpsDataPerInterval& operator=(const RealTimeBpsDataPerInterval &) = default ;
      RealTimeBpsDataPerInterval& operator=(RealTimeBpsDataPerInterval &&) = default ;
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
        // The timestamp of the returned data.
        shared_ptr<string> timeStamp_ {};
        // The bandwidth. Unit: bit/s.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<RealTimeBpsDataPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<RealTimeBpsDataPerInterval::DataModule>) };
      inline vector<RealTimeBpsDataPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<RealTimeBpsDataPerInterval::DataModule>) };
      inline RealTimeBpsDataPerInterval& setDataModule(const vector<RealTimeBpsDataPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline RealTimeBpsDataPerInterval& setDataModule(vector<RealTimeBpsDataPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<RealTimeBpsDataPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->realTimeBpsDataPerInterval_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeLiveDomainRealTimeBpsDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainRealTimeBpsDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDomainRealTimeBpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // realTimeBpsDataPerInterval Field Functions 
    bool hasRealTimeBpsDataPerInterval() const { return this->realTimeBpsDataPerInterval_ != nullptr;};
    void deleteRealTimeBpsDataPerInterval() { this->realTimeBpsDataPerInterval_ = nullptr;};
    inline const DescribeLiveDomainRealTimeBpsDataResponseBody::RealTimeBpsDataPerInterval & getRealTimeBpsDataPerInterval() const { DARABONBA_PTR_GET_CONST(realTimeBpsDataPerInterval_, DescribeLiveDomainRealTimeBpsDataResponseBody::RealTimeBpsDataPerInterval) };
    inline DescribeLiveDomainRealTimeBpsDataResponseBody::RealTimeBpsDataPerInterval getRealTimeBpsDataPerInterval() { DARABONBA_PTR_GET(realTimeBpsDataPerInterval_, DescribeLiveDomainRealTimeBpsDataResponseBody::RealTimeBpsDataPerInterval) };
    inline DescribeLiveDomainRealTimeBpsDataResponseBody& setRealTimeBpsDataPerInterval(const DescribeLiveDomainRealTimeBpsDataResponseBody::RealTimeBpsDataPerInterval & realTimeBpsDataPerInterval) { DARABONBA_PTR_SET_VALUE(realTimeBpsDataPerInterval_, realTimeBpsDataPerInterval) };
    inline DescribeLiveDomainRealTimeBpsDataResponseBody& setRealTimeBpsDataPerInterval(DescribeLiveDomainRealTimeBpsDataResponseBody::RealTimeBpsDataPerInterval && realTimeBpsDataPerInterval) { DARABONBA_PTR_SET_RVALUE(realTimeBpsDataPerInterval_, realTimeBpsDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainRealTimeBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDomainRealTimeBpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The interval at which data was queried.
    shared_ptr<string> dataInterval_ {};
    // The streaming domain name or names that was queried.
    shared_ptr<string> domainName_ {};
    // The end of the time range in which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // The bandwidth data that was collected every minute.
    shared_ptr<DescribeLiveDomainRealTimeBpsDataResponseBody::RealTimeBpsDataPerInterval> realTimeBpsDataPerInterval_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range in which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
