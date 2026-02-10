// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINUSAGEDATARESPONSEBODY_HPP_
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
  class DescribeDomainUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UsageDataPerInterval, usageDataPerInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UsageDataPerInterval, usageDataPerInterval_);
    };
    DescribeDomainUsageDataResponseBody() = default ;
    DescribeDomainUsageDataResponseBody(const DescribeDomainUsageDataResponseBody &) = default ;
    DescribeDomainUsageDataResponseBody(DescribeDomainUsageDataResponseBody &&) = default ;
    DescribeDomainUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainUsageDataResponseBody() = default ;
    DescribeDomainUsageDataResponseBody& operator=(const DescribeDomainUsageDataResponseBody &) = default ;
    DescribeDomainUsageDataResponseBody& operator=(DescribeDomainUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UsageDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsageDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, UsageDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      UsageDataPerInterval() = default ;
      UsageDataPerInterval(const UsageDataPerInterval &) = default ;
      UsageDataPerInterval(UsageDataPerInterval &&) = default ;
      UsageDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UsageDataPerInterval() = default ;
      UsageDataPerInterval& operator=(const UsageDataPerInterval &) = default ;
      UsageDataPerInterval& operator=(UsageDataPerInterval &&) = default ;
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
      inline const vector<UsageDataPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<UsageDataPerInterval::DataModule>) };
      inline vector<UsageDataPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<UsageDataPerInterval::DataModule>) };
      inline UsageDataPerInterval& setDataModule(const vector<UsageDataPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline UsageDataPerInterval& setDataModule(vector<UsageDataPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<UsageDataPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->area_ == nullptr
        && this->dataInterval_ == nullptr && this->domainName_ == nullptr && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr
        && this->type_ == nullptr && this->usageDataPerInterval_ == nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeDomainUsageDataResponseBody& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDomainUsageDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainUsageDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDomainUsageDataResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // usageDataPerInterval Field Functions 
    bool hasUsageDataPerInterval() const { return this->usageDataPerInterval_ != nullptr;};
    void deleteUsageDataPerInterval() { this->usageDataPerInterval_ = nullptr;};
    inline const DescribeDomainUsageDataResponseBody::UsageDataPerInterval & getUsageDataPerInterval() const { DARABONBA_PTR_GET_CONST(usageDataPerInterval_, DescribeDomainUsageDataResponseBody::UsageDataPerInterval) };
    inline DescribeDomainUsageDataResponseBody::UsageDataPerInterval getUsageDataPerInterval() { DARABONBA_PTR_GET(usageDataPerInterval_, DescribeDomainUsageDataResponseBody::UsageDataPerInterval) };
    inline DescribeDomainUsageDataResponseBody& setUsageDataPerInterval(const DescribeDomainUsageDataResponseBody::UsageDataPerInterval & usageDataPerInterval) { DARABONBA_PTR_SET_VALUE(usageDataPerInterval_, usageDataPerInterval) };
    inline DescribeDomainUsageDataResponseBody& setUsageDataPerInterval(DescribeDomainUsageDataResponseBody::UsageDataPerInterval && usageDataPerInterval) { DARABONBA_PTR_SET_RVALUE(usageDataPerInterval_, usageDataPerInterval) };


  protected:
    // The billable region where the resource usage data was generated.
    shared_ptr<string> area_ {};
    // The time interval between the returned entries. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range for which the resource usage data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range for which the resource usage data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
    // The type of the resource usage data.
    shared_ptr<string> type_ {};
    shared_ptr<DescribeDomainUsageDataResponseBody::UsageDataPerInterval> usageDataPerInterval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
