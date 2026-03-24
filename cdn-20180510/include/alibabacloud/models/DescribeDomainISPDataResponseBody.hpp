// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINISPDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINISPDATARESPONSEBODY_HPP_
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
  class DescribeDomainISPDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainISPDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainISPDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDomainISPDataResponseBody() = default ;
    DescribeDomainISPDataResponseBody(const DescribeDomainISPDataResponseBody &) = default ;
    DescribeDomainISPDataResponseBody(DescribeDomainISPDataResponseBody &&) = default ;
    DescribeDomainISPDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainISPDataResponseBody() = default ;
    DescribeDomainISPDataResponseBody& operator=(const DescribeDomainISPDataResponseBody &) = default ;
    DescribeDomainISPDataResponseBody& operator=(DescribeDomainISPDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Value : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Value& obj) { 
        DARABONBA_PTR_TO_JSON(ISPProportionData, ISPProportionData_);
      };
      friend void from_json(const Darabonba::Json& j, Value& obj) { 
        DARABONBA_PTR_FROM_JSON(ISPProportionData, ISPProportionData_);
      };
      Value() = default ;
      Value(const Value &) = default ;
      Value(Value &&) = default ;
      Value(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Value() = default ;
      Value& operator=(const Value &) = default ;
      Value& operator=(Value &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ISPProportionData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ISPProportionData& obj) { 
          DARABONBA_PTR_TO_JSON(AvgObjectSize, avgObjectSize_);
          DARABONBA_PTR_TO_JSON(AvgResponseRate, avgResponseRate_);
          DARABONBA_PTR_TO_JSON(AvgResponseTime, avgResponseTime_);
          DARABONBA_PTR_TO_JSON(Bps, bps_);
          DARABONBA_PTR_TO_JSON(BytesProportion, bytesProportion_);
          DARABONBA_PTR_TO_JSON(ISP, ISP_);
          DARABONBA_PTR_TO_JSON(IspEname, ispEname_);
          DARABONBA_PTR_TO_JSON(Proportion, proportion_);
          DARABONBA_PTR_TO_JSON(Qps, qps_);
          DARABONBA_PTR_TO_JSON(ReqErrRate, reqErrRate_);
          DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
          DARABONBA_PTR_TO_JSON(TotalQuery, totalQuery_);
        };
        friend void from_json(const Darabonba::Json& j, ISPProportionData& obj) { 
          DARABONBA_PTR_FROM_JSON(AvgObjectSize, avgObjectSize_);
          DARABONBA_PTR_FROM_JSON(AvgResponseRate, avgResponseRate_);
          DARABONBA_PTR_FROM_JSON(AvgResponseTime, avgResponseTime_);
          DARABONBA_PTR_FROM_JSON(Bps, bps_);
          DARABONBA_PTR_FROM_JSON(BytesProportion, bytesProportion_);
          DARABONBA_PTR_FROM_JSON(ISP, ISP_);
          DARABONBA_PTR_FROM_JSON(IspEname, ispEname_);
          DARABONBA_PTR_FROM_JSON(Proportion, proportion_);
          DARABONBA_PTR_FROM_JSON(Qps, qps_);
          DARABONBA_PTR_FROM_JSON(ReqErrRate, reqErrRate_);
          DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
          DARABONBA_PTR_FROM_JSON(TotalQuery, totalQuery_);
        };
        ISPProportionData() = default ;
        ISPProportionData(const ISPProportionData &) = default ;
        ISPProportionData(ISPProportionData &&) = default ;
        ISPProportionData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ISPProportionData() = default ;
        ISPProportionData& operator=(const ISPProportionData &) = default ;
        ISPProportionData& operator=(ISPProportionData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->avgObjectSize_ == nullptr
        && this->avgResponseRate_ == nullptr && this->avgResponseTime_ == nullptr && this->bps_ == nullptr && this->bytesProportion_ == nullptr && this->ISP_ == nullptr
        && this->ispEname_ == nullptr && this->proportion_ == nullptr && this->qps_ == nullptr && this->reqErrRate_ == nullptr && this->totalBytes_ == nullptr
        && this->totalQuery_ == nullptr; };
        // avgObjectSize Field Functions 
        bool hasAvgObjectSize() const { return this->avgObjectSize_ != nullptr;};
        void deleteAvgObjectSize() { this->avgObjectSize_ = nullptr;};
        inline string getAvgObjectSize() const { DARABONBA_PTR_GET_DEFAULT(avgObjectSize_, "") };
        inline ISPProportionData& setAvgObjectSize(string avgObjectSize) { DARABONBA_PTR_SET_VALUE(avgObjectSize_, avgObjectSize) };


        // avgResponseRate Field Functions 
        bool hasAvgResponseRate() const { return this->avgResponseRate_ != nullptr;};
        void deleteAvgResponseRate() { this->avgResponseRate_ = nullptr;};
        inline string getAvgResponseRate() const { DARABONBA_PTR_GET_DEFAULT(avgResponseRate_, "") };
        inline ISPProportionData& setAvgResponseRate(string avgResponseRate) { DARABONBA_PTR_SET_VALUE(avgResponseRate_, avgResponseRate) };


        // avgResponseTime Field Functions 
        bool hasAvgResponseTime() const { return this->avgResponseTime_ != nullptr;};
        void deleteAvgResponseTime() { this->avgResponseTime_ = nullptr;};
        inline string getAvgResponseTime() const { DARABONBA_PTR_GET_DEFAULT(avgResponseTime_, "") };
        inline ISPProportionData& setAvgResponseTime(string avgResponseTime) { DARABONBA_PTR_SET_VALUE(avgResponseTime_, avgResponseTime) };


        // bps Field Functions 
        bool hasBps() const { return this->bps_ != nullptr;};
        void deleteBps() { this->bps_ = nullptr;};
        inline string getBps() const { DARABONBA_PTR_GET_DEFAULT(bps_, "") };
        inline ISPProportionData& setBps(string bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


        // bytesProportion Field Functions 
        bool hasBytesProportion() const { return this->bytesProportion_ != nullptr;};
        void deleteBytesProportion() { this->bytesProportion_ = nullptr;};
        inline string getBytesProportion() const { DARABONBA_PTR_GET_DEFAULT(bytesProportion_, "") };
        inline ISPProportionData& setBytesProportion(string bytesProportion) { DARABONBA_PTR_SET_VALUE(bytesProportion_, bytesProportion) };


        // ISP Field Functions 
        bool hasISP() const { return this->ISP_ != nullptr;};
        void deleteISP() { this->ISP_ = nullptr;};
        inline string getISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
        inline ISPProportionData& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


        // ispEname Field Functions 
        bool hasIspEname() const { return this->ispEname_ != nullptr;};
        void deleteIspEname() { this->ispEname_ = nullptr;};
        inline string getIspEname() const { DARABONBA_PTR_GET_DEFAULT(ispEname_, "") };
        inline ISPProportionData& setIspEname(string ispEname) { DARABONBA_PTR_SET_VALUE(ispEname_, ispEname) };


        // proportion Field Functions 
        bool hasProportion() const { return this->proportion_ != nullptr;};
        void deleteProportion() { this->proportion_ = nullptr;};
        inline string getProportion() const { DARABONBA_PTR_GET_DEFAULT(proportion_, "") };
        inline ISPProportionData& setProportion(string proportion) { DARABONBA_PTR_SET_VALUE(proportion_, proportion) };


        // qps Field Functions 
        bool hasQps() const { return this->qps_ != nullptr;};
        void deleteQps() { this->qps_ = nullptr;};
        inline string getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, "") };
        inline ISPProportionData& setQps(string qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


        // reqErrRate Field Functions 
        bool hasReqErrRate() const { return this->reqErrRate_ != nullptr;};
        void deleteReqErrRate() { this->reqErrRate_ = nullptr;};
        inline string getReqErrRate() const { DARABONBA_PTR_GET_DEFAULT(reqErrRate_, "") };
        inline ISPProportionData& setReqErrRate(string reqErrRate) { DARABONBA_PTR_SET_VALUE(reqErrRate_, reqErrRate) };


        // totalBytes Field Functions 
        bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
        void deleteTotalBytes() { this->totalBytes_ = nullptr;};
        inline string getTotalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, "") };
        inline ISPProportionData& setTotalBytes(string totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


        // totalQuery Field Functions 
        bool hasTotalQuery() const { return this->totalQuery_ != nullptr;};
        void deleteTotalQuery() { this->totalQuery_ = nullptr;};
        inline string getTotalQuery() const { DARABONBA_PTR_GET_DEFAULT(totalQuery_, "") };
        inline ISPProportionData& setTotalQuery(string totalQuery) { DARABONBA_PTR_SET_VALUE(totalQuery_, totalQuery) };


      protected:
        shared_ptr<string> avgObjectSize_ {};
        shared_ptr<string> avgResponseRate_ {};
        shared_ptr<string> avgResponseTime_ {};
        shared_ptr<string> bps_ {};
        shared_ptr<string> bytesProportion_ {};
        shared_ptr<string> ISP_ {};
        shared_ptr<string> ispEname_ {};
        shared_ptr<string> proportion_ {};
        shared_ptr<string> qps_ {};
        shared_ptr<string> reqErrRate_ {};
        shared_ptr<string> totalBytes_ {};
        shared_ptr<string> totalQuery_ {};
      };

      virtual bool empty() const override { return this->ISPProportionData_ == nullptr; };
      // ISPProportionData Field Functions 
      bool hasISPProportionData() const { return this->ISPProportionData_ != nullptr;};
      void deleteISPProportionData() { this->ISPProportionData_ = nullptr;};
      inline const vector<Value::ISPProportionData> & getISPProportionData() const { DARABONBA_PTR_GET_CONST(ISPProportionData_, vector<Value::ISPProportionData>) };
      inline vector<Value::ISPProportionData> getISPProportionData() { DARABONBA_PTR_GET(ISPProportionData_, vector<Value::ISPProportionData>) };
      inline Value& setISPProportionData(const vector<Value::ISPProportionData> & iSPProportionData) { DARABONBA_PTR_SET_VALUE(ISPProportionData_, iSPProportionData) };
      inline Value& setISPProportionData(vector<Value::ISPProportionData> && iSPProportionData) { DARABONBA_PTR_SET_RVALUE(ISPProportionData_, iSPProportionData) };


    protected:
      shared_ptr<vector<Value::ISPProportionData>> ISPProportionData_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr && this->value_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDomainISPDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainISPDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainISPDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainISPDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainISPDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const DescribeDomainISPDataResponseBody::Value & getValue() const { DARABONBA_PTR_GET_CONST(value_, DescribeDomainISPDataResponseBody::Value) };
    inline DescribeDomainISPDataResponseBody::Value getValue() { DARABONBA_PTR_GET(value_, DescribeDomainISPDataResponseBody::Value) };
    inline DescribeDomainISPDataResponseBody& setValue(const DescribeDomainISPDataResponseBody::Value & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline DescribeDomainISPDataResponseBody& setValue(DescribeDomainISPDataResponseBody::Value && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The time interval. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range that was queried.
    shared_ptr<string> startTime_ {};
    shared_ptr<DescribeDomainISPDataResponseBody::Value> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
