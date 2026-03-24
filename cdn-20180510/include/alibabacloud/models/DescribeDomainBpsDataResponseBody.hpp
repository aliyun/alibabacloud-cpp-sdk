// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATARESPONSEBODY_HPP_
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
  class DescribeDomainBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BpsDataPerInterval, bpsDataPerInterval_);
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IspNameEn, ispNameEn_);
      DARABONBA_PTR_TO_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BpsDataPerInterval, bpsDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IspNameEn, ispNameEn_);
      DARABONBA_PTR_FROM_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainBpsDataResponseBody() = default ;
    DescribeDomainBpsDataResponseBody(const DescribeDomainBpsDataResponseBody &) = default ;
    DescribeDomainBpsDataResponseBody(DescribeDomainBpsDataResponseBody &&) = default ;
    DescribeDomainBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainBpsDataResponseBody() = default ;
    DescribeDomainBpsDataResponseBody& operator=(const DescribeDomainBpsDataResponseBody &) = default ;
    DescribeDomainBpsDataResponseBody& operator=(DescribeDomainBpsDataResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(DomesticValue, domesticValue_);
          DARABONBA_PTR_TO_JSON(HttpsDomesticValue, httpsDomesticValue_);
          DARABONBA_PTR_TO_JSON(HttpsOverseasValue, httpsOverseasValue_);
          DARABONBA_PTR_TO_JSON(HttpsValue, httpsValue_);
          DARABONBA_PTR_TO_JSON(OverseasValue, overseasValue_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(DomesticValue, domesticValue_);
          DARABONBA_PTR_FROM_JSON(HttpsDomesticValue, httpsDomesticValue_);
          DARABONBA_PTR_FROM_JSON(HttpsOverseasValue, httpsOverseasValue_);
          DARABONBA_PTR_FROM_JSON(HttpsValue, httpsValue_);
          DARABONBA_PTR_FROM_JSON(OverseasValue, overseasValue_);
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
        virtual bool empty() const override { return this->domesticValue_ == nullptr
        && this->httpsDomesticValue_ == nullptr && this->httpsOverseasValue_ == nullptr && this->httpsValue_ == nullptr && this->overseasValue_ == nullptr && this->timeStamp_ == nullptr
        && this->value_ == nullptr; };
        // domesticValue Field Functions 
        bool hasDomesticValue() const { return this->domesticValue_ != nullptr;};
        void deleteDomesticValue() { this->domesticValue_ = nullptr;};
        inline string getDomesticValue() const { DARABONBA_PTR_GET_DEFAULT(domesticValue_, "") };
        inline DataModule& setDomesticValue(string domesticValue) { DARABONBA_PTR_SET_VALUE(domesticValue_, domesticValue) };


        // httpsDomesticValue Field Functions 
        bool hasHttpsDomesticValue() const { return this->httpsDomesticValue_ != nullptr;};
        void deleteHttpsDomesticValue() { this->httpsDomesticValue_ = nullptr;};
        inline string getHttpsDomesticValue() const { DARABONBA_PTR_GET_DEFAULT(httpsDomesticValue_, "") };
        inline DataModule& setHttpsDomesticValue(string httpsDomesticValue) { DARABONBA_PTR_SET_VALUE(httpsDomesticValue_, httpsDomesticValue) };


        // httpsOverseasValue Field Functions 
        bool hasHttpsOverseasValue() const { return this->httpsOverseasValue_ != nullptr;};
        void deleteHttpsOverseasValue() { this->httpsOverseasValue_ = nullptr;};
        inline string getHttpsOverseasValue() const { DARABONBA_PTR_GET_DEFAULT(httpsOverseasValue_, "") };
        inline DataModule& setHttpsOverseasValue(string httpsOverseasValue) { DARABONBA_PTR_SET_VALUE(httpsOverseasValue_, httpsOverseasValue) };


        // httpsValue Field Functions 
        bool hasHttpsValue() const { return this->httpsValue_ != nullptr;};
        void deleteHttpsValue() { this->httpsValue_ = nullptr;};
        inline string getHttpsValue() const { DARABONBA_PTR_GET_DEFAULT(httpsValue_, "") };
        inline DataModule& setHttpsValue(string httpsValue) { DARABONBA_PTR_SET_VALUE(httpsValue_, httpsValue) };


        // overseasValue Field Functions 
        bool hasOverseasValue() const { return this->overseasValue_ != nullptr;};
        void deleteOverseasValue() { this->overseasValue_ = nullptr;};
        inline string getOverseasValue() const { DARABONBA_PTR_GET_DEFAULT(overseasValue_, "") };
        inline DataModule& setOverseasValue(string overseasValue) { DARABONBA_PTR_SET_VALUE(overseasValue_, overseasValue) };


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
        shared_ptr<string> domesticValue_ {};
        shared_ptr<string> httpsDomesticValue_ {};
        shared_ptr<string> httpsOverseasValue_ {};
        shared_ptr<string> httpsValue_ {};
        shared_ptr<string> overseasValue_ {};
        shared_ptr<string> timeStamp_ {};
        shared_ptr<string> value_ {};
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
        && this->dataInterval_ == nullptr && this->domainName_ == nullptr && this->endTime_ == nullptr && this->ispNameEn_ == nullptr && this->locationNameEn_ == nullptr
        && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // bpsDataPerInterval Field Functions 
    bool hasBpsDataPerInterval() const { return this->bpsDataPerInterval_ != nullptr;};
    void deleteBpsDataPerInterval() { this->bpsDataPerInterval_ = nullptr;};
    inline const DescribeDomainBpsDataResponseBody::BpsDataPerInterval & getBpsDataPerInterval() const { DARABONBA_PTR_GET_CONST(bpsDataPerInterval_, DescribeDomainBpsDataResponseBody::BpsDataPerInterval) };
    inline DescribeDomainBpsDataResponseBody::BpsDataPerInterval getBpsDataPerInterval() { DARABONBA_PTR_GET(bpsDataPerInterval_, DescribeDomainBpsDataResponseBody::BpsDataPerInterval) };
    inline DescribeDomainBpsDataResponseBody& setBpsDataPerInterval(const DescribeDomainBpsDataResponseBody::BpsDataPerInterval & bpsDataPerInterval) { DARABONBA_PTR_SET_VALUE(bpsDataPerInterval_, bpsDataPerInterval) };
    inline DescribeDomainBpsDataResponseBody& setBpsDataPerInterval(DescribeDomainBpsDataResponseBody::BpsDataPerInterval && bpsDataPerInterval) { DARABONBA_PTR_SET_RVALUE(bpsDataPerInterval_, bpsDataPerInterval) };


    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDomainBpsDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainBpsDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainBpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ispNameEn Field Functions 
    bool hasIspNameEn() const { return this->ispNameEn_ != nullptr;};
    void deleteIspNameEn() { this->ispNameEn_ = nullptr;};
    inline string getIspNameEn() const { DARABONBA_PTR_GET_DEFAULT(ispNameEn_, "") };
    inline DescribeDomainBpsDataResponseBody& setIspNameEn(string ispNameEn) { DARABONBA_PTR_SET_VALUE(ispNameEn_, ispNameEn) };


    // locationNameEn Field Functions 
    bool hasLocationNameEn() const { return this->locationNameEn_ != nullptr;};
    void deleteLocationNameEn() { this->locationNameEn_ = nullptr;};
    inline string getLocationNameEn() const { DARABONBA_PTR_GET_DEFAULT(locationNameEn_, "") };
    inline DescribeDomainBpsDataResponseBody& setLocationNameEn(string locationNameEn) { DARABONBA_PTR_SET_VALUE(locationNameEn_, locationNameEn) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainBpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<DescribeDomainBpsDataResponseBody::BpsDataPerInterval> bpsDataPerInterval_ {};
    // The time interval between the data entries returned. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The name of the ISP.
    shared_ptr<string> ispNameEn_ {};
    // The name of the region.
    shared_ptr<string> locationNameEn_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
