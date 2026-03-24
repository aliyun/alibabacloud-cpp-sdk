// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILDATABYLAYERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILDATABYLAYERRESPONSEBODY_HPP_
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
  class DescribeDomainDetailDataByLayerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainDetailDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainDetailDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainDetailDataByLayerResponseBody() = default ;
    DescribeDomainDetailDataByLayerResponseBody(const DescribeDomainDetailDataByLayerResponseBody &) = default ;
    DescribeDomainDetailDataByLayerResponseBody(DescribeDomainDetailDataByLayerResponseBody &&) = default ;
    DescribeDomainDetailDataByLayerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainDetailDataByLayerResponseBody() = default ;
    DescribeDomainDetailDataByLayerResponseBody& operator=(const DescribeDomainDetailDataByLayerResponseBody &) = default ;
    DescribeDomainDetailDataByLayerResponseBody& operator=(DescribeDomainDetailDataByLayerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(Acc, acc_);
          DARABONBA_PTR_TO_JSON(Bps, bps_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
          DARABONBA_PTR_TO_JSON(Ipv6Acc, ipv6Acc_);
          DARABONBA_PTR_TO_JSON(Ipv6Bps, ipv6Bps_);
          DARABONBA_PTR_TO_JSON(Ipv6Qps, ipv6Qps_);
          DARABONBA_PTR_TO_JSON(Ipv6Traf, ipv6Traf_);
          DARABONBA_PTR_TO_JSON(Qps, qps_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(Traf, traf_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(Acc, acc_);
          DARABONBA_PTR_FROM_JSON(Bps, bps_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
          DARABONBA_PTR_FROM_JSON(Ipv6Acc, ipv6Acc_);
          DARABONBA_PTR_FROM_JSON(Ipv6Bps, ipv6Bps_);
          DARABONBA_PTR_FROM_JSON(Ipv6Qps, ipv6Qps_);
          DARABONBA_PTR_FROM_JSON(Ipv6Traf, ipv6Traf_);
          DARABONBA_PTR_FROM_JSON(Qps, qps_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(Traf, traf_);
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
        && this->bps_ == nullptr && this->domainName_ == nullptr && this->httpCode_ == nullptr && this->ipv6Acc_ == nullptr && this->ipv6Bps_ == nullptr
        && this->ipv6Qps_ == nullptr && this->ipv6Traf_ == nullptr && this->qps_ == nullptr && this->timeStamp_ == nullptr && this->traf_ == nullptr; };
        // acc Field Functions 
        bool hasAcc() const { return this->acc_ != nullptr;};
        void deleteAcc() { this->acc_ = nullptr;};
        inline int64_t getAcc() const { DARABONBA_PTR_GET_DEFAULT(acc_, 0L) };
        inline DataModule& setAcc(int64_t acc) { DARABONBA_PTR_SET_VALUE(acc_, acc) };


        // bps Field Functions 
        bool hasBps() const { return this->bps_ != nullptr;};
        void deleteBps() { this->bps_ = nullptr;};
        inline float getBps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0.0) };
        inline DataModule& setBps(float bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline DataModule& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // httpCode Field Functions 
        bool hasHttpCode() const { return this->httpCode_ != nullptr;};
        void deleteHttpCode() { this->httpCode_ = nullptr;};
        inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
        inline DataModule& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


        // ipv6Acc Field Functions 
        bool hasIpv6Acc() const { return this->ipv6Acc_ != nullptr;};
        void deleteIpv6Acc() { this->ipv6Acc_ = nullptr;};
        inline int64_t getIpv6Acc() const { DARABONBA_PTR_GET_DEFAULT(ipv6Acc_, 0L) };
        inline DataModule& setIpv6Acc(int64_t ipv6Acc) { DARABONBA_PTR_SET_VALUE(ipv6Acc_, ipv6Acc) };


        // ipv6Bps Field Functions 
        bool hasIpv6Bps() const { return this->ipv6Bps_ != nullptr;};
        void deleteIpv6Bps() { this->ipv6Bps_ = nullptr;};
        inline float getIpv6Bps() const { DARABONBA_PTR_GET_DEFAULT(ipv6Bps_, 0.0) };
        inline DataModule& setIpv6Bps(float ipv6Bps) { DARABONBA_PTR_SET_VALUE(ipv6Bps_, ipv6Bps) };


        // ipv6Qps Field Functions 
        bool hasIpv6Qps() const { return this->ipv6Qps_ != nullptr;};
        void deleteIpv6Qps() { this->ipv6Qps_ = nullptr;};
        inline float getIpv6Qps() const { DARABONBA_PTR_GET_DEFAULT(ipv6Qps_, 0.0) };
        inline DataModule& setIpv6Qps(float ipv6Qps) { DARABONBA_PTR_SET_VALUE(ipv6Qps_, ipv6Qps) };


        // ipv6Traf Field Functions 
        bool hasIpv6Traf() const { return this->ipv6Traf_ != nullptr;};
        void deleteIpv6Traf() { this->ipv6Traf_ = nullptr;};
        inline int64_t getIpv6Traf() const { DARABONBA_PTR_GET_DEFAULT(ipv6Traf_, 0L) };
        inline DataModule& setIpv6Traf(int64_t ipv6Traf) { DARABONBA_PTR_SET_VALUE(ipv6Traf_, ipv6Traf) };


        // qps Field Functions 
        bool hasQps() const { return this->qps_ != nullptr;};
        void deleteQps() { this->qps_ = nullptr;};
        inline float getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0.0) };
        inline DataModule& setQps(float qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // traf Field Functions 
        bool hasTraf() const { return this->traf_ != nullptr;};
        void deleteTraf() { this->traf_ = nullptr;};
        inline int64_t getTraf() const { DARABONBA_PTR_GET_DEFAULT(traf_, 0L) };
        inline DataModule& setTraf(int64_t traf) { DARABONBA_PTR_SET_VALUE(traf_, traf) };


      protected:
        shared_ptr<int64_t> acc_ {};
        shared_ptr<float> bps_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<string> httpCode_ {};
        shared_ptr<int64_t> ipv6Acc_ {};
        shared_ptr<float> ipv6Bps_ {};
        shared_ptr<float> ipv6Qps_ {};
        shared_ptr<int64_t> ipv6Traf_ {};
        shared_ptr<float> qps_ {};
        shared_ptr<string> timeStamp_ {};
        shared_ptr<int64_t> traf_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<Data::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Data::DataModule>) };
      inline vector<Data::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<Data::DataModule>) };
      inline Data& setDataModule(const vector<Data::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline Data& setDataModule(vector<Data::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<Data::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDomainDetailDataByLayerResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDomainDetailDataByLayerResponseBody::Data) };
    inline DescribeDomainDetailDataByLayerResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDomainDetailDataByLayerResponseBody::Data) };
    inline DescribeDomainDetailDataByLayerResponseBody& setData(const DescribeDomainDetailDataByLayerResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDomainDetailDataByLayerResponseBody& setData(DescribeDomainDetailDataByLayerResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainDetailDataByLayerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeDomainDetailDataByLayerResponseBody::Data> data_ {};
    // The number of queries per second.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
