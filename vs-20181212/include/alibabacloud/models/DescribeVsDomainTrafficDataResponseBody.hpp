// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINTRAFFICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINTRAFFICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainTrafficDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TrafficDataPerInterval, trafficDataPerInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TrafficDataPerInterval, trafficDataPerInterval_);
    };
    DescribeVsDomainTrafficDataResponseBody() = default ;
    DescribeVsDomainTrafficDataResponseBody(const DescribeVsDomainTrafficDataResponseBody &) = default ;
    DescribeVsDomainTrafficDataResponseBody(DescribeVsDomainTrafficDataResponseBody &&) = default ;
    DescribeVsDomainTrafficDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainTrafficDataResponseBody() = default ;
    DescribeVsDomainTrafficDataResponseBody& operator=(const DescribeVsDomainTrafficDataResponseBody &) = default ;
    DescribeVsDomainTrafficDataResponseBody& operator=(DescribeVsDomainTrafficDataResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(TrafficValue, trafficValue_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
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
        virtual bool empty() const override { return this->timeStamp_ == nullptr
        && this->trafficValue_ == nullptr; };
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
    inline DescribeVsDomainTrafficDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVsDomainTrafficDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVsDomainTrafficDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsDomainTrafficDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVsDomainTrafficDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // trafficDataPerInterval Field Functions 
    bool hasTrafficDataPerInterval() const { return this->trafficDataPerInterval_ != nullptr;};
    void deleteTrafficDataPerInterval() { this->trafficDataPerInterval_ = nullptr;};
    inline const DescribeVsDomainTrafficDataResponseBody::TrafficDataPerInterval & getTrafficDataPerInterval() const { DARABONBA_PTR_GET_CONST(trafficDataPerInterval_, DescribeVsDomainTrafficDataResponseBody::TrafficDataPerInterval) };
    inline DescribeVsDomainTrafficDataResponseBody::TrafficDataPerInterval getTrafficDataPerInterval() { DARABONBA_PTR_GET(trafficDataPerInterval_, DescribeVsDomainTrafficDataResponseBody::TrafficDataPerInterval) };
    inline DescribeVsDomainTrafficDataResponseBody& setTrafficDataPerInterval(const DescribeVsDomainTrafficDataResponseBody::TrafficDataPerInterval & trafficDataPerInterval) { DARABONBA_PTR_SET_VALUE(trafficDataPerInterval_, trafficDataPerInterval) };
    inline DescribeVsDomainTrafficDataResponseBody& setTrafficDataPerInterval(DescribeVsDomainTrafficDataResponseBody::TrafficDataPerInterval && trafficDataPerInterval) { DARABONBA_PTR_SET_RVALUE(trafficDataPerInterval_, trafficDataPerInterval) };


  protected:
    shared_ptr<string> dataInterval_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<DescribeVsDomainTrafficDataResponseBody::TrafficDataPerInterval> trafficDataPerInterval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
