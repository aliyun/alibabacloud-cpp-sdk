// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINBPSDATABYLAYERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINBPSDATABYLAYERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainBpsDataByLayerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainBpsDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BpsDataInterval, bpsDataInterval_);
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainBpsDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BpsDataInterval, bpsDataInterval_);
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainBpsDataByLayerResponseBody() = default ;
    DescribeDcdnDomainBpsDataByLayerResponseBody(const DescribeDcdnDomainBpsDataByLayerResponseBody &) = default ;
    DescribeDcdnDomainBpsDataByLayerResponseBody(DescribeDcdnDomainBpsDataByLayerResponseBody &&) = default ;
    DescribeDcdnDomainBpsDataByLayerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainBpsDataByLayerResponseBody() = default ;
    DescribeDcdnDomainBpsDataByLayerResponseBody& operator=(const DescribeDcdnDomainBpsDataByLayerResponseBody &) = default ;
    DescribeDcdnDomainBpsDataByLayerResponseBody& operator=(DescribeDcdnDomainBpsDataByLayerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BpsDataInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BpsDataInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, BpsDataInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      BpsDataInterval() = default ;
      BpsDataInterval(const BpsDataInterval &) = default ;
      BpsDataInterval(BpsDataInterval &&) = default ;
      BpsDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BpsDataInterval() = default ;
      BpsDataInterval& operator=(const BpsDataInterval &) = default ;
      BpsDataInterval& operator=(BpsDataInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(DynamicTrafficValue, dynamicTrafficValue_);
          DARABONBA_PTR_TO_JSON(DynamicValue, dynamicValue_);
          DARABONBA_PTR_TO_JSON(StaticTrafficValue, staticTrafficValue_);
          DARABONBA_PTR_TO_JSON(StaticValue, staticValue_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(TrafficValue, trafficValue_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(DynamicTrafficValue, dynamicTrafficValue_);
          DARABONBA_PTR_FROM_JSON(DynamicValue, dynamicValue_);
          DARABONBA_PTR_FROM_JSON(StaticTrafficValue, staticTrafficValue_);
          DARABONBA_PTR_FROM_JSON(StaticValue, staticValue_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(TrafficValue, trafficValue_);
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
        virtual bool empty() const override { return this->dynamicTrafficValue_ == nullptr
        && this->dynamicValue_ == nullptr && this->staticTrafficValue_ == nullptr && this->staticValue_ == nullptr && this->timeStamp_ == nullptr && this->trafficValue_ == nullptr
        && this->value_ == nullptr; };
        // dynamicTrafficValue Field Functions 
        bool hasDynamicTrafficValue() const { return this->dynamicTrafficValue_ != nullptr;};
        void deleteDynamicTrafficValue() { this->dynamicTrafficValue_ = nullptr;};
        inline string getDynamicTrafficValue() const { DARABONBA_PTR_GET_DEFAULT(dynamicTrafficValue_, "") };
        inline DataModule& setDynamicTrafficValue(string dynamicTrafficValue) { DARABONBA_PTR_SET_VALUE(dynamicTrafficValue_, dynamicTrafficValue) };


        // dynamicValue Field Functions 
        bool hasDynamicValue() const { return this->dynamicValue_ != nullptr;};
        void deleteDynamicValue() { this->dynamicValue_ = nullptr;};
        inline string getDynamicValue() const { DARABONBA_PTR_GET_DEFAULT(dynamicValue_, "") };
        inline DataModule& setDynamicValue(string dynamicValue) { DARABONBA_PTR_SET_VALUE(dynamicValue_, dynamicValue) };


        // staticTrafficValue Field Functions 
        bool hasStaticTrafficValue() const { return this->staticTrafficValue_ != nullptr;};
        void deleteStaticTrafficValue() { this->staticTrafficValue_ = nullptr;};
        inline string getStaticTrafficValue() const { DARABONBA_PTR_GET_DEFAULT(staticTrafficValue_, "") };
        inline DataModule& setStaticTrafficValue(string staticTrafficValue) { DARABONBA_PTR_SET_VALUE(staticTrafficValue_, staticTrafficValue) };


        // staticValue Field Functions 
        bool hasStaticValue() const { return this->staticValue_ != nullptr;};
        void deleteStaticValue() { this->staticValue_ = nullptr;};
        inline string getStaticValue() const { DARABONBA_PTR_GET_DEFAULT(staticValue_, "") };
        inline DataModule& setStaticValue(string staticValue) { DARABONBA_PTR_SET_VALUE(staticValue_, staticValue) };


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


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline DataModule& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The traffic that is used to deliver dynamic content. Unit: bytes.
        shared_ptr<string> dynamicTrafficValue_ {};
        // The bandwidth that is used to deliver dynamic content. Unit: bit/s.
        shared_ptr<string> dynamicValue_ {};
        // The traffic that is used to deliver static content. Unit: bytes.
        shared_ptr<string> staticTrafficValue_ {};
        // The bandwidth that is used to deliver static content. Unit: bit/s.
        shared_ptr<string> staticValue_ {};
        // The timestamp of the data returned.
        shared_ptr<string> timeStamp_ {};
        // The total traffic. Unit: bytes.
        shared_ptr<string> trafficValue_ {};
        // The total bandwidth. Unit: bit/s.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<BpsDataInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<BpsDataInterval::DataModule>) };
      inline vector<BpsDataInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<BpsDataInterval::DataModule>) };
      inline BpsDataInterval& setDataModule(const vector<BpsDataInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline BpsDataInterval& setDataModule(vector<BpsDataInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<BpsDataInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->bpsDataInterval_ == nullptr
        && this->dataInterval_ == nullptr && this->requestId_ == nullptr; };
    // bpsDataInterval Field Functions 
    bool hasBpsDataInterval() const { return this->bpsDataInterval_ != nullptr;};
    void deleteBpsDataInterval() { this->bpsDataInterval_ = nullptr;};
    inline const DescribeDcdnDomainBpsDataByLayerResponseBody::BpsDataInterval & getBpsDataInterval() const { DARABONBA_PTR_GET_CONST(bpsDataInterval_, DescribeDcdnDomainBpsDataByLayerResponseBody::BpsDataInterval) };
    inline DescribeDcdnDomainBpsDataByLayerResponseBody::BpsDataInterval getBpsDataInterval() { DARABONBA_PTR_GET(bpsDataInterval_, DescribeDcdnDomainBpsDataByLayerResponseBody::BpsDataInterval) };
    inline DescribeDcdnDomainBpsDataByLayerResponseBody& setBpsDataInterval(const DescribeDcdnDomainBpsDataByLayerResponseBody::BpsDataInterval & bpsDataInterval) { DARABONBA_PTR_SET_VALUE(bpsDataInterval_, bpsDataInterval) };
    inline DescribeDcdnDomainBpsDataByLayerResponseBody& setBpsDataInterval(DescribeDcdnDomainBpsDataByLayerResponseBody::BpsDataInterval && bpsDataInterval) { DARABONBA_PTR_SET_RVALUE(bpsDataInterval_, bpsDataInterval) };


    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainBpsDataByLayerResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainBpsDataByLayerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The bandwidth returned at each time interval.
    shared_ptr<DescribeDcdnDomainBpsDataByLayerResponseBody::BpsDataInterval> bpsDataInterval_ {};
    // The time interval between the data entries returned. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
