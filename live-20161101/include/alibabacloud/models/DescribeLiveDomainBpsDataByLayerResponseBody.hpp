// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINBPSDATABYLAYERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINBPSDATABYLAYERRESPONSEBODY_HPP_
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
  class DescribeLiveDomainBpsDataByLayerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainBpsDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BpsDataInterval, bpsDataInterval_);
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainBpsDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BpsDataInterval, bpsDataInterval_);
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveDomainBpsDataByLayerResponseBody() = default ;
    DescribeLiveDomainBpsDataByLayerResponseBody(const DescribeLiveDomainBpsDataByLayerResponseBody &) = default ;
    DescribeLiveDomainBpsDataByLayerResponseBody(DescribeLiveDomainBpsDataByLayerResponseBody &&) = default ;
    DescribeLiveDomainBpsDataByLayerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainBpsDataByLayerResponseBody() = default ;
    DescribeLiveDomainBpsDataByLayerResponseBody& operator=(const DescribeLiveDomainBpsDataByLayerResponseBody &) = default ;
    DescribeLiveDomainBpsDataByLayerResponseBody& operator=(DescribeLiveDomainBpsDataByLayerResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(TrafficValue, trafficValue_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
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
        virtual bool empty() const override { return this->timeStamp_ == nullptr
        && this->trafficValue_ == nullptr && this->value_ == nullptr; };
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
        shared_ptr<string> timeStamp_ {};
        shared_ptr<string> trafficValue_ {};
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
    inline const DescribeLiveDomainBpsDataByLayerResponseBody::BpsDataInterval & getBpsDataInterval() const { DARABONBA_PTR_GET_CONST(bpsDataInterval_, DescribeLiveDomainBpsDataByLayerResponseBody::BpsDataInterval) };
    inline DescribeLiveDomainBpsDataByLayerResponseBody::BpsDataInterval getBpsDataInterval() { DARABONBA_PTR_GET(bpsDataInterval_, DescribeLiveDomainBpsDataByLayerResponseBody::BpsDataInterval) };
    inline DescribeLiveDomainBpsDataByLayerResponseBody& setBpsDataInterval(const DescribeLiveDomainBpsDataByLayerResponseBody::BpsDataInterval & bpsDataInterval) { DARABONBA_PTR_SET_VALUE(bpsDataInterval_, bpsDataInterval) };
    inline DescribeLiveDomainBpsDataByLayerResponseBody& setBpsDataInterval(DescribeLiveDomainBpsDataByLayerResponseBody::BpsDataInterval && bpsDataInterval) { DARABONBA_PTR_SET_RVALUE(bpsDataInterval_, bpsDataInterval) };


    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeLiveDomainBpsDataByLayerResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainBpsDataByLayerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeLiveDomainBpsDataByLayerResponseBody::BpsDataInterval> bpsDataInterval_ {};
    // The time interval between the data entries returned. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
