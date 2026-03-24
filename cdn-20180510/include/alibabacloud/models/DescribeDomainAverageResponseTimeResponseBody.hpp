// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINAVERAGERESPONSETIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINAVERAGERESPONSETIMERESPONSEBODY_HPP_
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
  class DescribeDomainAverageResponseTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainAverageResponseTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvgRTPerInterval, avgRTPerInterval_);
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainAverageResponseTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgRTPerInterval, avgRTPerInterval_);
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainAverageResponseTimeResponseBody() = default ;
    DescribeDomainAverageResponseTimeResponseBody(const DescribeDomainAverageResponseTimeResponseBody &) = default ;
    DescribeDomainAverageResponseTimeResponseBody(DescribeDomainAverageResponseTimeResponseBody &&) = default ;
    DescribeDomainAverageResponseTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainAverageResponseTimeResponseBody() = default ;
    DescribeDomainAverageResponseTimeResponseBody& operator=(const DescribeDomainAverageResponseTimeResponseBody &) = default ;
    DescribeDomainAverageResponseTimeResponseBody& operator=(DescribeDomainAverageResponseTimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AvgRTPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvgRTPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, AvgRTPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      AvgRTPerInterval() = default ;
      AvgRTPerInterval(const AvgRTPerInterval &) = default ;
      AvgRTPerInterval(AvgRTPerInterval &&) = default ;
      AvgRTPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvgRTPerInterval() = default ;
      AvgRTPerInterval& operator=(const AvgRTPerInterval &) = default ;
      AvgRTPerInterval& operator=(AvgRTPerInterval &&) = default ;
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
      inline const vector<AvgRTPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<AvgRTPerInterval::DataModule>) };
      inline vector<AvgRTPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<AvgRTPerInterval::DataModule>) };
      inline AvgRTPerInterval& setDataModule(const vector<AvgRTPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline AvgRTPerInterval& setDataModule(vector<AvgRTPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<AvgRTPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->avgRTPerInterval_ == nullptr
        && this->dataInterval_ == nullptr && this->domainName_ == nullptr && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // avgRTPerInterval Field Functions 
    bool hasAvgRTPerInterval() const { return this->avgRTPerInterval_ != nullptr;};
    void deleteAvgRTPerInterval() { this->avgRTPerInterval_ = nullptr;};
    inline const DescribeDomainAverageResponseTimeResponseBody::AvgRTPerInterval & getAvgRTPerInterval() const { DARABONBA_PTR_GET_CONST(avgRTPerInterval_, DescribeDomainAverageResponseTimeResponseBody::AvgRTPerInterval) };
    inline DescribeDomainAverageResponseTimeResponseBody::AvgRTPerInterval getAvgRTPerInterval() { DARABONBA_PTR_GET(avgRTPerInterval_, DescribeDomainAverageResponseTimeResponseBody::AvgRTPerInterval) };
    inline DescribeDomainAverageResponseTimeResponseBody& setAvgRTPerInterval(const DescribeDomainAverageResponseTimeResponseBody::AvgRTPerInterval & avgRTPerInterval) { DARABONBA_PTR_SET_VALUE(avgRTPerInterval_, avgRTPerInterval) };
    inline DescribeDomainAverageResponseTimeResponseBody& setAvgRTPerInterval(DescribeDomainAverageResponseTimeResponseBody::AvgRTPerInterval && avgRTPerInterval) { DARABONBA_PTR_SET_RVALUE(avgRTPerInterval_, avgRTPerInterval) };


    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDomainAverageResponseTimeResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainAverageResponseTimeResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainAverageResponseTimeResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainAverageResponseTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainAverageResponseTimeResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<DescribeDomainAverageResponseTimeResponseBody::AvgRTPerInterval> avgRTPerInterval_ {};
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
} // namespace Cdn20180510
#endif
