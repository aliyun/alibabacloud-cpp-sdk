// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINPVDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINPVDATARESPONSEBODY_HPP_
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
  class DescribeDomainPvDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainPvDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PvDataInterval, pvDataInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainPvDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PvDataInterval, pvDataInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainPvDataResponseBody() = default ;
    DescribeDomainPvDataResponseBody(const DescribeDomainPvDataResponseBody &) = default ;
    DescribeDomainPvDataResponseBody(DescribeDomainPvDataResponseBody &&) = default ;
    DescribeDomainPvDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainPvDataResponseBody() = default ;
    DescribeDomainPvDataResponseBody& operator=(const DescribeDomainPvDataResponseBody &) = default ;
    DescribeDomainPvDataResponseBody& operator=(DescribeDomainPvDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PvDataInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PvDataInterval& obj) { 
        DARABONBA_PTR_TO_JSON(UsageData, usageData_);
      };
      friend void from_json(const Darabonba::Json& j, PvDataInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
      };
      PvDataInterval() = default ;
      PvDataInterval(const PvDataInterval &) = default ;
      PvDataInterval(PvDataInterval &&) = default ;
      PvDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PvDataInterval() = default ;
      PvDataInterval& operator=(const PvDataInterval &) = default ;
      PvDataInterval& operator=(PvDataInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UsageData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UsageData& obj) { 
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, UsageData& obj) { 
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        UsageData() = default ;
        UsageData(const UsageData &) = default ;
        UsageData(UsageData &&) = default ;
        UsageData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UsageData() = default ;
        UsageData& operator=(const UsageData &) = default ;
        UsageData& operator=(UsageData &&) = default ;
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
        inline UsageData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline UsageData& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> timeStamp_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->usageData_ == nullptr; };
      // usageData Field Functions 
      bool hasUsageData() const { return this->usageData_ != nullptr;};
      void deleteUsageData() { this->usageData_ = nullptr;};
      inline const vector<PvDataInterval::UsageData> & getUsageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<PvDataInterval::UsageData>) };
      inline vector<PvDataInterval::UsageData> getUsageData() { DARABONBA_PTR_GET(usageData_, vector<PvDataInterval::UsageData>) };
      inline PvDataInterval& setUsageData(const vector<PvDataInterval::UsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
      inline PvDataInterval& setUsageData(vector<PvDataInterval::UsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


    protected:
      shared_ptr<vector<PvDataInterval::UsageData>> usageData_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->pvDataInterval_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDomainPvDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainPvDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainPvDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pvDataInterval Field Functions 
    bool hasPvDataInterval() const { return this->pvDataInterval_ != nullptr;};
    void deletePvDataInterval() { this->pvDataInterval_ = nullptr;};
    inline const DescribeDomainPvDataResponseBody::PvDataInterval & getPvDataInterval() const { DARABONBA_PTR_GET_CONST(pvDataInterval_, DescribeDomainPvDataResponseBody::PvDataInterval) };
    inline DescribeDomainPvDataResponseBody::PvDataInterval getPvDataInterval() { DARABONBA_PTR_GET(pvDataInterval_, DescribeDomainPvDataResponseBody::PvDataInterval) };
    inline DescribeDomainPvDataResponseBody& setPvDataInterval(const DescribeDomainPvDataResponseBody::PvDataInterval & pvDataInterval) { DARABONBA_PTR_SET_VALUE(pvDataInterval_, pvDataInterval) };
    inline DescribeDomainPvDataResponseBody& setPvDataInterval(DescribeDomainPvDataResponseBody::PvDataInterval && pvDataInterval) { DARABONBA_PTR_SET_RVALUE(pvDataInterval_, pvDataInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainPvDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainPvDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    shared_ptr<DescribeDomainPvDataResponseBody::PvDataInterval> pvDataInterval_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
