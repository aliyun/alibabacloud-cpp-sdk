// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINQPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINQPSDATARESPONSEBODY_HPP_
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
  class DescribeDcdnDomainQpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainQpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(QpsDataPerInterval, qpsDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainQpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(QpsDataPerInterval, qpsDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnDomainQpsDataResponseBody() = default ;
    DescribeDcdnDomainQpsDataResponseBody(const DescribeDcdnDomainQpsDataResponseBody &) = default ;
    DescribeDcdnDomainQpsDataResponseBody(DescribeDcdnDomainQpsDataResponseBody &&) = default ;
    DescribeDcdnDomainQpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainQpsDataResponseBody() = default ;
    DescribeDcdnDomainQpsDataResponseBody& operator=(const DescribeDcdnDomainQpsDataResponseBody &) = default ;
    DescribeDcdnDomainQpsDataResponseBody& operator=(DescribeDcdnDomainQpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QpsDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QpsDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, QpsDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      QpsDataPerInterval() = default ;
      QpsDataPerInterval(const QpsDataPerInterval &) = default ;
      QpsDataPerInterval(QpsDataPerInterval &&) = default ;
      QpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QpsDataPerInterval() = default ;
      QpsDataPerInterval& operator=(const QpsDataPerInterval &) = default ;
      QpsDataPerInterval& operator=(QpsDataPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(Acc, acc_);
          DARABONBA_PTR_TO_JSON(DynamicHttpAcc, dynamicHttpAcc_);
          DARABONBA_PTR_TO_JSON(DynamicHttpQps, dynamicHttpQps_);
          DARABONBA_PTR_TO_JSON(DynamicHttpsAcc, dynamicHttpsAcc_);
          DARABONBA_PTR_TO_JSON(DynamicHttpsQps, dynamicHttpsQps_);
          DARABONBA_PTR_TO_JSON(Qps, qps_);
          DARABONBA_PTR_TO_JSON(StaticHttpAcc, staticHttpAcc_);
          DARABONBA_PTR_TO_JSON(StaticHttpQps, staticHttpQps_);
          DARABONBA_PTR_TO_JSON(StaticHttpsAcc, staticHttpsAcc_);
          DARABONBA_PTR_TO_JSON(StaticHttpsQps, staticHttpsQps_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(Acc, acc_);
          DARABONBA_PTR_FROM_JSON(DynamicHttpAcc, dynamicHttpAcc_);
          DARABONBA_PTR_FROM_JSON(DynamicHttpQps, dynamicHttpQps_);
          DARABONBA_PTR_FROM_JSON(DynamicHttpsAcc, dynamicHttpsAcc_);
          DARABONBA_PTR_FROM_JSON(DynamicHttpsQps, dynamicHttpsQps_);
          DARABONBA_PTR_FROM_JSON(Qps, qps_);
          DARABONBA_PTR_FROM_JSON(StaticHttpAcc, staticHttpAcc_);
          DARABONBA_PTR_FROM_JSON(StaticHttpQps, staticHttpQps_);
          DARABONBA_PTR_FROM_JSON(StaticHttpsAcc, staticHttpsAcc_);
          DARABONBA_PTR_FROM_JSON(StaticHttpsQps, staticHttpsQps_);
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
        virtual bool empty() const override { return this->acc_ == nullptr
        && this->dynamicHttpAcc_ == nullptr && this->dynamicHttpQps_ == nullptr && this->dynamicHttpsAcc_ == nullptr && this->dynamicHttpsQps_ == nullptr && this->qps_ == nullptr
        && this->staticHttpAcc_ == nullptr && this->staticHttpQps_ == nullptr && this->staticHttpsAcc_ == nullptr && this->staticHttpsQps_ == nullptr && this->timeStamp_ == nullptr; };
        // acc Field Functions 
        bool hasAcc() const { return this->acc_ != nullptr;};
        void deleteAcc() { this->acc_ = nullptr;};
        inline float getAcc() const { DARABONBA_PTR_GET_DEFAULT(acc_, 0.0) };
        inline DataModule& setAcc(float acc) { DARABONBA_PTR_SET_VALUE(acc_, acc) };


        // dynamicHttpAcc Field Functions 
        bool hasDynamicHttpAcc() const { return this->dynamicHttpAcc_ != nullptr;};
        void deleteDynamicHttpAcc() { this->dynamicHttpAcc_ = nullptr;};
        inline float getDynamicHttpAcc() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpAcc_, 0.0) };
        inline DataModule& setDynamicHttpAcc(float dynamicHttpAcc) { DARABONBA_PTR_SET_VALUE(dynamicHttpAcc_, dynamicHttpAcc) };


        // dynamicHttpQps Field Functions 
        bool hasDynamicHttpQps() const { return this->dynamicHttpQps_ != nullptr;};
        void deleteDynamicHttpQps() { this->dynamicHttpQps_ = nullptr;};
        inline float getDynamicHttpQps() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpQps_, 0.0) };
        inline DataModule& setDynamicHttpQps(float dynamicHttpQps) { DARABONBA_PTR_SET_VALUE(dynamicHttpQps_, dynamicHttpQps) };


        // dynamicHttpsAcc Field Functions 
        bool hasDynamicHttpsAcc() const { return this->dynamicHttpsAcc_ != nullptr;};
        void deleteDynamicHttpsAcc() { this->dynamicHttpsAcc_ = nullptr;};
        inline float getDynamicHttpsAcc() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpsAcc_, 0.0) };
        inline DataModule& setDynamicHttpsAcc(float dynamicHttpsAcc) { DARABONBA_PTR_SET_VALUE(dynamicHttpsAcc_, dynamicHttpsAcc) };


        // dynamicHttpsQps Field Functions 
        bool hasDynamicHttpsQps() const { return this->dynamicHttpsQps_ != nullptr;};
        void deleteDynamicHttpsQps() { this->dynamicHttpsQps_ = nullptr;};
        inline float getDynamicHttpsQps() const { DARABONBA_PTR_GET_DEFAULT(dynamicHttpsQps_, 0.0) };
        inline DataModule& setDynamicHttpsQps(float dynamicHttpsQps) { DARABONBA_PTR_SET_VALUE(dynamicHttpsQps_, dynamicHttpsQps) };


        // qps Field Functions 
        bool hasQps() const { return this->qps_ != nullptr;};
        void deleteQps() { this->qps_ = nullptr;};
        inline float getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0.0) };
        inline DataModule& setQps(float qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


        // staticHttpAcc Field Functions 
        bool hasStaticHttpAcc() const { return this->staticHttpAcc_ != nullptr;};
        void deleteStaticHttpAcc() { this->staticHttpAcc_ = nullptr;};
        inline float getStaticHttpAcc() const { DARABONBA_PTR_GET_DEFAULT(staticHttpAcc_, 0.0) };
        inline DataModule& setStaticHttpAcc(float staticHttpAcc) { DARABONBA_PTR_SET_VALUE(staticHttpAcc_, staticHttpAcc) };


        // staticHttpQps Field Functions 
        bool hasStaticHttpQps() const { return this->staticHttpQps_ != nullptr;};
        void deleteStaticHttpQps() { this->staticHttpQps_ = nullptr;};
        inline float getStaticHttpQps() const { DARABONBA_PTR_GET_DEFAULT(staticHttpQps_, 0.0) };
        inline DataModule& setStaticHttpQps(float staticHttpQps) { DARABONBA_PTR_SET_VALUE(staticHttpQps_, staticHttpQps) };


        // staticHttpsAcc Field Functions 
        bool hasStaticHttpsAcc() const { return this->staticHttpsAcc_ != nullptr;};
        void deleteStaticHttpsAcc() { this->staticHttpsAcc_ = nullptr;};
        inline float getStaticHttpsAcc() const { DARABONBA_PTR_GET_DEFAULT(staticHttpsAcc_, 0.0) };
        inline DataModule& setStaticHttpsAcc(float staticHttpsAcc) { DARABONBA_PTR_SET_VALUE(staticHttpsAcc_, staticHttpsAcc) };


        // staticHttpsQps Field Functions 
        bool hasStaticHttpsQps() const { return this->staticHttpsQps_ != nullptr;};
        void deleteStaticHttpsQps() { this->staticHttpsQps_ = nullptr;};
        inline float getStaticHttpsQps() const { DARABONBA_PTR_GET_DEFAULT(staticHttpsQps_, 0.0) };
        inline DataModule& setStaticHttpsQps(float staticHttpsQps) { DARABONBA_PTR_SET_VALUE(staticHttpsQps_, staticHttpsQps) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The total number of requests.
        shared_ptr<float> acc_ {};
        // The number of requests for dynamic content delivery over HTTP.
        shared_ptr<float> dynamicHttpAcc_ {};
        // The QPS for dynamic content delivery over HTTP.
        shared_ptr<float> dynamicHttpQps_ {};
        // The number of requests for dynamic content delivery over HTTPS.
        shared_ptr<float> dynamicHttpsAcc_ {};
        // The QPS for dynamic content delivery over HTTPS.
        shared_ptr<float> dynamicHttpsQps_ {};
        // The total QPS.
        shared_ptr<float> qps_ {};
        // The number of requests for static content delivery over HTTP.
        shared_ptr<float> staticHttpAcc_ {};
        // The QPS for static content delivery over HTTP.
        shared_ptr<float> staticHttpQps_ {};
        // The number of requests for static content delivery over HTTPS.
        shared_ptr<float> staticHttpsAcc_ {};
        // The QPS for static content delivery over HTTPS.
        shared_ptr<float> staticHttpsQps_ {};
        // The timestamp of the returned data.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<QpsDataPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<QpsDataPerInterval::DataModule>) };
      inline vector<QpsDataPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<QpsDataPerInterval::DataModule>) };
      inline QpsDataPerInterval& setDataModule(const vector<QpsDataPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline QpsDataPerInterval& setDataModule(vector<QpsDataPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<QpsDataPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->qpsDataPerInterval_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainQpsDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainQpsDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainQpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // qpsDataPerInterval Field Functions 
    bool hasQpsDataPerInterval() const { return this->qpsDataPerInterval_ != nullptr;};
    void deleteQpsDataPerInterval() { this->qpsDataPerInterval_ = nullptr;};
    inline const DescribeDcdnDomainQpsDataResponseBody::QpsDataPerInterval & getQpsDataPerInterval() const { DARABONBA_PTR_GET_CONST(qpsDataPerInterval_, DescribeDcdnDomainQpsDataResponseBody::QpsDataPerInterval) };
    inline DescribeDcdnDomainQpsDataResponseBody::QpsDataPerInterval getQpsDataPerInterval() { DARABONBA_PTR_GET(qpsDataPerInterval_, DescribeDcdnDomainQpsDataResponseBody::QpsDataPerInterval) };
    inline DescribeDcdnDomainQpsDataResponseBody& setQpsDataPerInterval(const DescribeDcdnDomainQpsDataResponseBody::QpsDataPerInterval & qpsDataPerInterval) { DARABONBA_PTR_SET_VALUE(qpsDataPerInterval_, qpsDataPerInterval) };
    inline DescribeDcdnDomainQpsDataResponseBody& setQpsDataPerInterval(DescribeDcdnDomainQpsDataResponseBody::QpsDataPerInterval && qpsDataPerInterval) { DARABONBA_PTR_SET_RVALUE(qpsDataPerInterval_, qpsDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainQpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainQpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The QPS returned at each time interval.
    shared_ptr<DescribeDcdnDomainQpsDataResponseBody::QpsDataPerInterval> qpsDataPerInterval_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
