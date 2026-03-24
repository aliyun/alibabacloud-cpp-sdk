// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCBPSDATARESPONSEBODY_HPP_
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
  class DescribeDomainSrcBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSrcBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SrcBpsDataPerInterval, srcBpsDataPerInterval_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSrcBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SrcBpsDataPerInterval, srcBpsDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainSrcBpsDataResponseBody() = default ;
    DescribeDomainSrcBpsDataResponseBody(const DescribeDomainSrcBpsDataResponseBody &) = default ;
    DescribeDomainSrcBpsDataResponseBody(DescribeDomainSrcBpsDataResponseBody &&) = default ;
    DescribeDomainSrcBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSrcBpsDataResponseBody() = default ;
    DescribeDomainSrcBpsDataResponseBody& operator=(const DescribeDomainSrcBpsDataResponseBody &) = default ;
    DescribeDomainSrcBpsDataResponseBody& operator=(DescribeDomainSrcBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SrcBpsDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SrcBpsDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, SrcBpsDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      SrcBpsDataPerInterval() = default ;
      SrcBpsDataPerInterval(const SrcBpsDataPerInterval &) = default ;
      SrcBpsDataPerInterval(SrcBpsDataPerInterval &&) = default ;
      SrcBpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SrcBpsDataPerInterval() = default ;
      SrcBpsDataPerInterval& operator=(const SrcBpsDataPerInterval &) = default ;
      SrcBpsDataPerInterval& operator=(SrcBpsDataPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(HttpsValue, httpsValue_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(HttpsValue, httpsValue_);
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
        virtual bool empty() const override { return this->httpsValue_ == nullptr
        && this->timeStamp_ == nullptr && this->value_ == nullptr; };
        // httpsValue Field Functions 
        bool hasHttpsValue() const { return this->httpsValue_ != nullptr;};
        void deleteHttpsValue() { this->httpsValue_ = nullptr;};
        inline string getHttpsValue() const { DARABONBA_PTR_GET_DEFAULT(httpsValue_, "") };
        inline DataModule& setHttpsValue(string httpsValue) { DARABONBA_PTR_SET_VALUE(httpsValue_, httpsValue) };


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
        shared_ptr<string> httpsValue_ {};
        shared_ptr<string> timeStamp_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<SrcBpsDataPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<SrcBpsDataPerInterval::DataModule>) };
      inline vector<SrcBpsDataPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<SrcBpsDataPerInterval::DataModule>) };
      inline SrcBpsDataPerInterval& setDataModule(const vector<SrcBpsDataPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline SrcBpsDataPerInterval& setDataModule(vector<SrcBpsDataPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<SrcBpsDataPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->requestId_ == nullptr && this->srcBpsDataPerInterval_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDomainSrcBpsDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainSrcBpsDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainSrcBpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainSrcBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // srcBpsDataPerInterval Field Functions 
    bool hasSrcBpsDataPerInterval() const { return this->srcBpsDataPerInterval_ != nullptr;};
    void deleteSrcBpsDataPerInterval() { this->srcBpsDataPerInterval_ = nullptr;};
    inline const DescribeDomainSrcBpsDataResponseBody::SrcBpsDataPerInterval & getSrcBpsDataPerInterval() const { DARABONBA_PTR_GET_CONST(srcBpsDataPerInterval_, DescribeDomainSrcBpsDataResponseBody::SrcBpsDataPerInterval) };
    inline DescribeDomainSrcBpsDataResponseBody::SrcBpsDataPerInterval getSrcBpsDataPerInterval() { DARABONBA_PTR_GET(srcBpsDataPerInterval_, DescribeDomainSrcBpsDataResponseBody::SrcBpsDataPerInterval) };
    inline DescribeDomainSrcBpsDataResponseBody& setSrcBpsDataPerInterval(const DescribeDomainSrcBpsDataResponseBody::SrcBpsDataPerInterval & srcBpsDataPerInterval) { DARABONBA_PTR_SET_VALUE(srcBpsDataPerInterval_, srcBpsDataPerInterval) };
    inline DescribeDomainSrcBpsDataResponseBody& setSrcBpsDataPerInterval(DescribeDomainSrcBpsDataResponseBody::SrcBpsDataPerInterval && srcBpsDataPerInterval) { DARABONBA_PTR_SET_RVALUE(srcBpsDataPerInterval_, srcBpsDataPerInterval) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainSrcBpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeDomainSrcBpsDataResponseBody::SrcBpsDataPerInterval> srcBpsDataPerInterval_ {};
    // The start of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
