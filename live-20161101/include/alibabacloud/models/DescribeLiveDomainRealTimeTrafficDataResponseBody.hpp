// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINREALTIMETRAFFICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINREALTIMETRAFFICDATARESPONSEBODY_HPP_
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
  class DescribeLiveDomainRealTimeTrafficDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainRealTimeTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RealTimeTrafficDataPerInterval, realTimeTrafficDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainRealTimeTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RealTimeTrafficDataPerInterval, realTimeTrafficDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveDomainRealTimeTrafficDataResponseBody() = default ;
    DescribeLiveDomainRealTimeTrafficDataResponseBody(const DescribeLiveDomainRealTimeTrafficDataResponseBody &) = default ;
    DescribeLiveDomainRealTimeTrafficDataResponseBody(DescribeLiveDomainRealTimeTrafficDataResponseBody &&) = default ;
    DescribeLiveDomainRealTimeTrafficDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainRealTimeTrafficDataResponseBody() = default ;
    DescribeLiveDomainRealTimeTrafficDataResponseBody& operator=(const DescribeLiveDomainRealTimeTrafficDataResponseBody &) = default ;
    DescribeLiveDomainRealTimeTrafficDataResponseBody& operator=(DescribeLiveDomainRealTimeTrafficDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RealTimeTrafficDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RealTimeTrafficDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, RealTimeTrafficDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      RealTimeTrafficDataPerInterval() = default ;
      RealTimeTrafficDataPerInterval(const RealTimeTrafficDataPerInterval &) = default ;
      RealTimeTrafficDataPerInterval(RealTimeTrafficDataPerInterval &&) = default ;
      RealTimeTrafficDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RealTimeTrafficDataPerInterval() = default ;
      RealTimeTrafficDataPerInterval& operator=(const RealTimeTrafficDataPerInterval &) = default ;
      RealTimeTrafficDataPerInterval& operator=(RealTimeTrafficDataPerInterval &&) = default ;
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
      inline const vector<RealTimeTrafficDataPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<RealTimeTrafficDataPerInterval::DataModule>) };
      inline vector<RealTimeTrafficDataPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<RealTimeTrafficDataPerInterval::DataModule>) };
      inline RealTimeTrafficDataPerInterval& setDataModule(const vector<RealTimeTrafficDataPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline RealTimeTrafficDataPerInterval& setDataModule(vector<RealTimeTrafficDataPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<RealTimeTrafficDataPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->realTimeTrafficDataPerInterval_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeLiveDomainRealTimeTrafficDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainRealTimeTrafficDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDomainRealTimeTrafficDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // realTimeTrafficDataPerInterval Field Functions 
    bool hasRealTimeTrafficDataPerInterval() const { return this->realTimeTrafficDataPerInterval_ != nullptr;};
    void deleteRealTimeTrafficDataPerInterval() { this->realTimeTrafficDataPerInterval_ = nullptr;};
    inline const DescribeLiveDomainRealTimeTrafficDataResponseBody::RealTimeTrafficDataPerInterval & getRealTimeTrafficDataPerInterval() const { DARABONBA_PTR_GET_CONST(realTimeTrafficDataPerInterval_, DescribeLiveDomainRealTimeTrafficDataResponseBody::RealTimeTrafficDataPerInterval) };
    inline DescribeLiveDomainRealTimeTrafficDataResponseBody::RealTimeTrafficDataPerInterval getRealTimeTrafficDataPerInterval() { DARABONBA_PTR_GET(realTimeTrafficDataPerInterval_, DescribeLiveDomainRealTimeTrafficDataResponseBody::RealTimeTrafficDataPerInterval) };
    inline DescribeLiveDomainRealTimeTrafficDataResponseBody& setRealTimeTrafficDataPerInterval(const DescribeLiveDomainRealTimeTrafficDataResponseBody::RealTimeTrafficDataPerInterval & realTimeTrafficDataPerInterval) { DARABONBA_PTR_SET_VALUE(realTimeTrafficDataPerInterval_, realTimeTrafficDataPerInterval) };
    inline DescribeLiveDomainRealTimeTrafficDataResponseBody& setRealTimeTrafficDataPerInterval(DescribeLiveDomainRealTimeTrafficDataResponseBody::RealTimeTrafficDataPerInterval && realTimeTrafficDataPerInterval) { DARABONBA_PTR_SET_RVALUE(realTimeTrafficDataPerInterval_, realTimeTrafficDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainRealTimeTrafficDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDomainRealTimeTrafficDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the entries returned. Unit: seconds
    shared_ptr<string> dataInterval_ {};
    // The streaming domain.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which the data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    shared_ptr<DescribeLiveDomainRealTimeTrafficDataResponseBody::RealTimeTrafficDataPerInterval> realTimeTrafficDataPerInterval_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range during which the data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
