// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINBPSDATARESPONSEBODY_HPP_
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
  class DescribeLiveDomainBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BpsDataPerInterval, bpsDataPerInterval_);
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BpsDataPerInterval, bpsDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveDomainBpsDataResponseBody() = default ;
    DescribeLiveDomainBpsDataResponseBody(const DescribeLiveDomainBpsDataResponseBody &) = default ;
    DescribeLiveDomainBpsDataResponseBody(DescribeLiveDomainBpsDataResponseBody &&) = default ;
    DescribeLiveDomainBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainBpsDataResponseBody() = default ;
    DescribeLiveDomainBpsDataResponseBody& operator=(const DescribeLiveDomainBpsDataResponseBody &) = default ;
    DescribeLiveDomainBpsDataResponseBody& operator=(DescribeLiveDomainBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BpsDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BpsDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, BpsDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      BpsDataPerInterval() = default ;
      BpsDataPerInterval(const BpsDataPerInterval &) = default ;
      BpsDataPerInterval(BpsDataPerInterval &&) = default ;
      BpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BpsDataPerInterval() = default ;
      BpsDataPerInterval& operator=(const BpsDataPerInterval &) = default ;
      BpsDataPerInterval& operator=(BpsDataPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(BpsValue, bpsValue_);
          DARABONBA_PTR_TO_JSON(HttpBpsValue, httpBpsValue_);
          DARABONBA_PTR_TO_JSON(HttpsBpsValue, httpsBpsValue_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(BpsValue, bpsValue_);
          DARABONBA_PTR_FROM_JSON(HttpBpsValue, httpBpsValue_);
          DARABONBA_PTR_FROM_JSON(HttpsBpsValue, httpsBpsValue_);
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
        virtual bool empty() const override { return this->bpsValue_ == nullptr
        && this->httpBpsValue_ == nullptr && this->httpsBpsValue_ == nullptr && this->timeStamp_ == nullptr; };
        // bpsValue Field Functions 
        bool hasBpsValue() const { return this->bpsValue_ != nullptr;};
        void deleteBpsValue() { this->bpsValue_ = nullptr;};
        inline string getBpsValue() const { DARABONBA_PTR_GET_DEFAULT(bpsValue_, "") };
        inline DataModule& setBpsValue(string bpsValue) { DARABONBA_PTR_SET_VALUE(bpsValue_, bpsValue) };


        // httpBpsValue Field Functions 
        bool hasHttpBpsValue() const { return this->httpBpsValue_ != nullptr;};
        void deleteHttpBpsValue() { this->httpBpsValue_ = nullptr;};
        inline string getHttpBpsValue() const { DARABONBA_PTR_GET_DEFAULT(httpBpsValue_, "") };
        inline DataModule& setHttpBpsValue(string httpBpsValue) { DARABONBA_PTR_SET_VALUE(httpBpsValue_, httpBpsValue) };


        // httpsBpsValue Field Functions 
        bool hasHttpsBpsValue() const { return this->httpsBpsValue_ != nullptr;};
        void deleteHttpsBpsValue() { this->httpsBpsValue_ = nullptr;};
        inline string getHttpsBpsValue() const { DARABONBA_PTR_GET_DEFAULT(httpsBpsValue_, "") };
        inline DataModule& setHttpsBpsValue(string httpsBpsValue) { DARABONBA_PTR_SET_VALUE(httpsBpsValue_, httpsBpsValue) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The bandwidth. Unit: bit/s.
        shared_ptr<string> bpsValue_ {};
        // The bandwidth over HTTP. Unit: bit/s.
        shared_ptr<string> httpBpsValue_ {};
        // The bandwidth over HTTPS. Unit: bit/s.
        shared_ptr<string> httpsBpsValue_ {};
        // The timestamp of the data returned.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<BpsDataPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<BpsDataPerInterval::DataModule>) };
      inline vector<BpsDataPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<BpsDataPerInterval::DataModule>) };
      inline BpsDataPerInterval& setDataModule(const vector<BpsDataPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline BpsDataPerInterval& setDataModule(vector<BpsDataPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<BpsDataPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->bpsDataPerInterval_ == nullptr
        && this->dataInterval_ == nullptr && this->domainName_ == nullptr && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // bpsDataPerInterval Field Functions 
    bool hasBpsDataPerInterval() const { return this->bpsDataPerInterval_ != nullptr;};
    void deleteBpsDataPerInterval() { this->bpsDataPerInterval_ = nullptr;};
    inline const DescribeLiveDomainBpsDataResponseBody::BpsDataPerInterval & getBpsDataPerInterval() const { DARABONBA_PTR_GET_CONST(bpsDataPerInterval_, DescribeLiveDomainBpsDataResponseBody::BpsDataPerInterval) };
    inline DescribeLiveDomainBpsDataResponseBody::BpsDataPerInterval getBpsDataPerInterval() { DARABONBA_PTR_GET(bpsDataPerInterval_, DescribeLiveDomainBpsDataResponseBody::BpsDataPerInterval) };
    inline DescribeLiveDomainBpsDataResponseBody& setBpsDataPerInterval(const DescribeLiveDomainBpsDataResponseBody::BpsDataPerInterval & bpsDataPerInterval) { DARABONBA_PTR_SET_VALUE(bpsDataPerInterval_, bpsDataPerInterval) };
    inline DescribeLiveDomainBpsDataResponseBody& setBpsDataPerInterval(DescribeLiveDomainBpsDataResponseBody::BpsDataPerInterval && bpsDataPerInterval) { DARABONBA_PTR_SET_RVALUE(bpsDataPerInterval_, bpsDataPerInterval) };


    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeLiveDomainBpsDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainBpsDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDomainBpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDomainBpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The bandwidth data returned at each interval.
    shared_ptr<DescribeLiveDomainBpsDataResponseBody::BpsDataPerInterval> bpsDataPerInterval_ {};
    // The time granularity of the query. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The streaming domain.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which the data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range during which the data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
