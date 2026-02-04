// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINQPSDATABYLAYERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINQPSDATABYLAYERRESPONSEBODY_HPP_
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
  class DescribeDcdnDomainQpsDataByLayerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainQpsDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Layer, layer_);
      DARABONBA_PTR_TO_JSON(QpsDataInterval, qpsDataInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainQpsDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Layer, layer_);
      DARABONBA_PTR_FROM_JSON(QpsDataInterval, qpsDataInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnDomainQpsDataByLayerResponseBody() = default ;
    DescribeDcdnDomainQpsDataByLayerResponseBody(const DescribeDcdnDomainQpsDataByLayerResponseBody &) = default ;
    DescribeDcdnDomainQpsDataByLayerResponseBody(DescribeDcdnDomainQpsDataByLayerResponseBody &&) = default ;
    DescribeDcdnDomainQpsDataByLayerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainQpsDataByLayerResponseBody() = default ;
    DescribeDcdnDomainQpsDataByLayerResponseBody& operator=(const DescribeDcdnDomainQpsDataByLayerResponseBody &) = default ;
    DescribeDcdnDomainQpsDataByLayerResponseBody& operator=(DescribeDcdnDomainQpsDataByLayerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QpsDataInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QpsDataInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, QpsDataInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      QpsDataInterval() = default ;
      QpsDataInterval(const QpsDataInterval &) = default ;
      QpsDataInterval(QpsDataInterval &&) = default ;
      QpsDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QpsDataInterval() = default ;
      QpsDataInterval& operator=(const QpsDataInterval &) = default ;
      QpsDataInterval& operator=(QpsDataInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(AccDomesticValue, accDomesticValue_);
          DARABONBA_PTR_TO_JSON(AccOverseasValue, accOverseasValue_);
          DARABONBA_PTR_TO_JSON(AccValue, accValue_);
          DARABONBA_PTR_TO_JSON(DomesticValue, domesticValue_);
          DARABONBA_PTR_TO_JSON(OverseasValue, overseasValue_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(AccDomesticValue, accDomesticValue_);
          DARABONBA_PTR_FROM_JSON(AccOverseasValue, accOverseasValue_);
          DARABONBA_PTR_FROM_JSON(AccValue, accValue_);
          DARABONBA_PTR_FROM_JSON(DomesticValue, domesticValue_);
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
        virtual bool empty() const override { return this->accDomesticValue_ == nullptr
        && this->accOverseasValue_ == nullptr && this->accValue_ == nullptr && this->domesticValue_ == nullptr && this->overseasValue_ == nullptr && this->timeStamp_ == nullptr
        && this->value_ == nullptr; };
        // accDomesticValue Field Functions 
        bool hasAccDomesticValue() const { return this->accDomesticValue_ != nullptr;};
        void deleteAccDomesticValue() { this->accDomesticValue_ = nullptr;};
        inline string getAccDomesticValue() const { DARABONBA_PTR_GET_DEFAULT(accDomesticValue_, "") };
        inline DataModule& setAccDomesticValue(string accDomesticValue) { DARABONBA_PTR_SET_VALUE(accDomesticValue_, accDomesticValue) };


        // accOverseasValue Field Functions 
        bool hasAccOverseasValue() const { return this->accOverseasValue_ != nullptr;};
        void deleteAccOverseasValue() { this->accOverseasValue_ = nullptr;};
        inline string getAccOverseasValue() const { DARABONBA_PTR_GET_DEFAULT(accOverseasValue_, "") };
        inline DataModule& setAccOverseasValue(string accOverseasValue) { DARABONBA_PTR_SET_VALUE(accOverseasValue_, accOverseasValue) };


        // accValue Field Functions 
        bool hasAccValue() const { return this->accValue_ != nullptr;};
        void deleteAccValue() { this->accValue_ = nullptr;};
        inline string getAccValue() const { DARABONBA_PTR_GET_DEFAULT(accValue_, "") };
        inline DataModule& setAccValue(string accValue) { DARABONBA_PTR_SET_VALUE(accValue_, accValue) };


        // domesticValue Field Functions 
        bool hasDomesticValue() const { return this->domesticValue_ != nullptr;};
        void deleteDomesticValue() { this->domesticValue_ = nullptr;};
        inline string getDomesticValue() const { DARABONBA_PTR_GET_DEFAULT(domesticValue_, "") };
        inline DataModule& setDomesticValue(string domesticValue) { DARABONBA_PTR_SET_VALUE(domesticValue_, domesticValue) };


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
        // The number of requests in the Chinese mainland.
        shared_ptr<string> accDomesticValue_ {};
        // The number of requests outside the Chinese mainland.
        shared_ptr<string> accOverseasValue_ {};
        // The total number of requests.
        shared_ptr<string> accValue_ {};
        // The number of queries per second in the Chinese mainland.
        shared_ptr<string> domesticValue_ {};
        // The number of queries per second outside the Chinese mainland.
        shared_ptr<string> overseasValue_ {};
        // The timestamp of the returned data.
        shared_ptr<string> timeStamp_ {};
        // The total number of queries per second.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<QpsDataInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<QpsDataInterval::DataModule>) };
      inline vector<QpsDataInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<QpsDataInterval::DataModule>) };
      inline QpsDataInterval& setDataModule(const vector<QpsDataInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline QpsDataInterval& setDataModule(vector<QpsDataInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<QpsDataInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->layer_ == nullptr && this->qpsDataInterval_ == nullptr && this->requestId_ == nullptr
        && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainQpsDataByLayerResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainQpsDataByLayerResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainQpsDataByLayerResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // layer Field Functions 
    bool hasLayer() const { return this->layer_ != nullptr;};
    void deleteLayer() { this->layer_ = nullptr;};
    inline string getLayer() const { DARABONBA_PTR_GET_DEFAULT(layer_, "") };
    inline DescribeDcdnDomainQpsDataByLayerResponseBody& setLayer(string layer) { DARABONBA_PTR_SET_VALUE(layer_, layer) };


    // qpsDataInterval Field Functions 
    bool hasQpsDataInterval() const { return this->qpsDataInterval_ != nullptr;};
    void deleteQpsDataInterval() { this->qpsDataInterval_ = nullptr;};
    inline const DescribeDcdnDomainQpsDataByLayerResponseBody::QpsDataInterval & getQpsDataInterval() const { DARABONBA_PTR_GET_CONST(qpsDataInterval_, DescribeDcdnDomainQpsDataByLayerResponseBody::QpsDataInterval) };
    inline DescribeDcdnDomainQpsDataByLayerResponseBody::QpsDataInterval getQpsDataInterval() { DARABONBA_PTR_GET(qpsDataInterval_, DescribeDcdnDomainQpsDataByLayerResponseBody::QpsDataInterval) };
    inline DescribeDcdnDomainQpsDataByLayerResponseBody& setQpsDataInterval(const DescribeDcdnDomainQpsDataByLayerResponseBody::QpsDataInterval & qpsDataInterval) { DARABONBA_PTR_SET_VALUE(qpsDataInterval_, qpsDataInterval) };
    inline DescribeDcdnDomainQpsDataByLayerResponseBody& setQpsDataInterval(DescribeDcdnDomainQpsDataByLayerResponseBody::QpsDataInterval && qpsDataInterval) { DARABONBA_PTR_SET_RVALUE(qpsDataInterval_, qpsDataInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainQpsDataByLayerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainQpsDataByLayerResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The layer at which the data was collected.
    shared_ptr<string> layer_ {};
    // The QPS returned at each time interval.
    shared_ptr<DescribeDcdnDomainQpsDataByLayerResponseBody::QpsDataInterval> qpsDataInterval_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
