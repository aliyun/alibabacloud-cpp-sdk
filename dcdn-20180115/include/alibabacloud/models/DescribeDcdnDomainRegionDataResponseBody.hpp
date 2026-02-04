// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREGIONDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREGIONDATARESPONSEBODY_HPP_
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
  class DescribeDcdnDomainRegionDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRegionDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRegionDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDcdnDomainRegionDataResponseBody() = default ;
    DescribeDcdnDomainRegionDataResponseBody(const DescribeDcdnDomainRegionDataResponseBody &) = default ;
    DescribeDcdnDomainRegionDataResponseBody(DescribeDcdnDomainRegionDataResponseBody &&) = default ;
    DescribeDcdnDomainRegionDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRegionDataResponseBody() = default ;
    DescribeDcdnDomainRegionDataResponseBody& operator=(const DescribeDcdnDomainRegionDataResponseBody &) = default ;
    DescribeDcdnDomainRegionDataResponseBody& operator=(DescribeDcdnDomainRegionDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Value : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Value& obj) { 
        DARABONBA_PTR_TO_JSON(RegionProportionData, regionProportionData_);
      };
      friend void from_json(const Darabonba::Json& j, Value& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionProportionData, regionProportionData_);
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
      class RegionProportionData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RegionProportionData& obj) { 
          DARABONBA_PTR_TO_JSON(AvgObjectSize, avgObjectSize_);
          DARABONBA_PTR_TO_JSON(AvgResponseRate, avgResponseRate_);
          DARABONBA_PTR_TO_JSON(AvgResponseTime, avgResponseTime_);
          DARABONBA_PTR_TO_JSON(Bps, bps_);
          DARABONBA_PTR_TO_JSON(BytesProportion, bytesProportion_);
          DARABONBA_PTR_TO_JSON(Proportion, proportion_);
          DARABONBA_PTR_TO_JSON(Qps, qps_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(RegionEname, regionEname_);
          DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
          DARABONBA_PTR_TO_JSON(TotalQuery, totalQuery_);
        };
        friend void from_json(const Darabonba::Json& j, RegionProportionData& obj) { 
          DARABONBA_PTR_FROM_JSON(AvgObjectSize, avgObjectSize_);
          DARABONBA_PTR_FROM_JSON(AvgResponseRate, avgResponseRate_);
          DARABONBA_PTR_FROM_JSON(AvgResponseTime, avgResponseTime_);
          DARABONBA_PTR_FROM_JSON(Bps, bps_);
          DARABONBA_PTR_FROM_JSON(BytesProportion, bytesProportion_);
          DARABONBA_PTR_FROM_JSON(Proportion, proportion_);
          DARABONBA_PTR_FROM_JSON(Qps, qps_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(RegionEname, regionEname_);
          DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
          DARABONBA_PTR_FROM_JSON(TotalQuery, totalQuery_);
        };
        RegionProportionData() = default ;
        RegionProportionData(const RegionProportionData &) = default ;
        RegionProportionData(RegionProportionData &&) = default ;
        RegionProportionData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RegionProportionData() = default ;
        RegionProportionData& operator=(const RegionProportionData &) = default ;
        RegionProportionData& operator=(RegionProportionData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->avgObjectSize_ == nullptr
        && this->avgResponseRate_ == nullptr && this->avgResponseTime_ == nullptr && this->bps_ == nullptr && this->bytesProportion_ == nullptr && this->proportion_ == nullptr
        && this->qps_ == nullptr && this->region_ == nullptr && this->regionEname_ == nullptr && this->totalBytes_ == nullptr && this->totalQuery_ == nullptr; };
        // avgObjectSize Field Functions 
        bool hasAvgObjectSize() const { return this->avgObjectSize_ != nullptr;};
        void deleteAvgObjectSize() { this->avgObjectSize_ = nullptr;};
        inline string getAvgObjectSize() const { DARABONBA_PTR_GET_DEFAULT(avgObjectSize_, "") };
        inline RegionProportionData& setAvgObjectSize(string avgObjectSize) { DARABONBA_PTR_SET_VALUE(avgObjectSize_, avgObjectSize) };


        // avgResponseRate Field Functions 
        bool hasAvgResponseRate() const { return this->avgResponseRate_ != nullptr;};
        void deleteAvgResponseRate() { this->avgResponseRate_ = nullptr;};
        inline string getAvgResponseRate() const { DARABONBA_PTR_GET_DEFAULT(avgResponseRate_, "") };
        inline RegionProportionData& setAvgResponseRate(string avgResponseRate) { DARABONBA_PTR_SET_VALUE(avgResponseRate_, avgResponseRate) };


        // avgResponseTime Field Functions 
        bool hasAvgResponseTime() const { return this->avgResponseTime_ != nullptr;};
        void deleteAvgResponseTime() { this->avgResponseTime_ = nullptr;};
        inline string getAvgResponseTime() const { DARABONBA_PTR_GET_DEFAULT(avgResponseTime_, "") };
        inline RegionProportionData& setAvgResponseTime(string avgResponseTime) { DARABONBA_PTR_SET_VALUE(avgResponseTime_, avgResponseTime) };


        // bps Field Functions 
        bool hasBps() const { return this->bps_ != nullptr;};
        void deleteBps() { this->bps_ = nullptr;};
        inline string getBps() const { DARABONBA_PTR_GET_DEFAULT(bps_, "") };
        inline RegionProportionData& setBps(string bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


        // bytesProportion Field Functions 
        bool hasBytesProportion() const { return this->bytesProportion_ != nullptr;};
        void deleteBytesProportion() { this->bytesProportion_ = nullptr;};
        inline string getBytesProportion() const { DARABONBA_PTR_GET_DEFAULT(bytesProportion_, "") };
        inline RegionProportionData& setBytesProportion(string bytesProportion) { DARABONBA_PTR_SET_VALUE(bytesProportion_, bytesProportion) };


        // proportion Field Functions 
        bool hasProportion() const { return this->proportion_ != nullptr;};
        void deleteProportion() { this->proportion_ = nullptr;};
        inline string getProportion() const { DARABONBA_PTR_GET_DEFAULT(proportion_, "") };
        inline RegionProportionData& setProportion(string proportion) { DARABONBA_PTR_SET_VALUE(proportion_, proportion) };


        // qps Field Functions 
        bool hasQps() const { return this->qps_ != nullptr;};
        void deleteQps() { this->qps_ = nullptr;};
        inline string getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, "") };
        inline RegionProportionData& setQps(string qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline RegionProportionData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // regionEname Field Functions 
        bool hasRegionEname() const { return this->regionEname_ != nullptr;};
        void deleteRegionEname() { this->regionEname_ = nullptr;};
        inline string getRegionEname() const { DARABONBA_PTR_GET_DEFAULT(regionEname_, "") };
        inline RegionProportionData& setRegionEname(string regionEname) { DARABONBA_PTR_SET_VALUE(regionEname_, regionEname) };


        // totalBytes Field Functions 
        bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
        void deleteTotalBytes() { this->totalBytes_ = nullptr;};
        inline string getTotalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, "") };
        inline RegionProportionData& setTotalBytes(string totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


        // totalQuery Field Functions 
        bool hasTotalQuery() const { return this->totalQuery_ != nullptr;};
        void deleteTotalQuery() { this->totalQuery_ = nullptr;};
        inline string getTotalQuery() const { DARABONBA_PTR_GET_DEFAULT(totalQuery_, "") };
        inline RegionProportionData& setTotalQuery(string totalQuery) { DARABONBA_PTR_SET_VALUE(totalQuery_, totalQuery) };


      protected:
        // The average response size. Unit: bytes.
        shared_ptr<string> avgObjectSize_ {};
        // The average response speed. Unit: byte/s.
        shared_ptr<string> avgResponseRate_ {};
        // The average response time. Unit: milliseconds.
        shared_ptr<string> avgResponseTime_ {};
        // The bandwidth.
        shared_ptr<string> bps_ {};
        // The proportion of network traffic. For example, a value of 90 indicates that 90% of network traffic was coming from the specified ISP.
        shared_ptr<string> bytesProportion_ {};
        // The proportion of requests from the specified region based on the total number of requests in percentile. For example, a value of 90 indicates that 90% of the requests were coming from the specified region.
        shared_ptr<string> proportion_ {};
        // The number of queries per second (QPS).
        shared_ptr<string> qps_ {};
        // The information of the regions.
        shared_ptr<string> region_ {};
        // The name of the region.
        shared_ptr<string> regionEname_ {};
        // The total amount of network traffic.
        shared_ptr<string> totalBytes_ {};
        // The total number of requests that are destined for your website.
        shared_ptr<string> totalQuery_ {};
      };

      virtual bool empty() const override { return this->regionProportionData_ == nullptr; };
      // regionProportionData Field Functions 
      bool hasRegionProportionData() const { return this->regionProportionData_ != nullptr;};
      void deleteRegionProportionData() { this->regionProportionData_ = nullptr;};
      inline const vector<Value::RegionProportionData> & getRegionProportionData() const { DARABONBA_PTR_GET_CONST(regionProportionData_, vector<Value::RegionProportionData>) };
      inline vector<Value::RegionProportionData> getRegionProportionData() { DARABONBA_PTR_GET(regionProportionData_, vector<Value::RegionProportionData>) };
      inline Value& setRegionProportionData(const vector<Value::RegionProportionData> & regionProportionData) { DARABONBA_PTR_SET_VALUE(regionProportionData_, regionProportionData) };
      inline Value& setRegionProportionData(vector<Value::RegionProportionData> && regionProportionData) { DARABONBA_PTR_SET_RVALUE(regionProportionData_, regionProportionData) };


    protected:
      shared_ptr<vector<Value::RegionProportionData>> regionProportionData_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr && this->value_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainRegionDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainRegionDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainRegionDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainRegionDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainRegionDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const DescribeDcdnDomainRegionDataResponseBody::Value & getValue() const { DARABONBA_PTR_GET_CONST(value_, DescribeDcdnDomainRegionDataResponseBody::Value) };
    inline DescribeDcdnDomainRegionDataResponseBody::Value getValue() { DARABONBA_PTR_GET(value_, DescribeDcdnDomainRegionDataResponseBody::Value) };
    inline DescribeDcdnDomainRegionDataResponseBody& setValue(const DescribeDcdnDomainRegionDataResponseBody::Value & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline DescribeDcdnDomainRegionDataResponseBody& setValue(DescribeDcdnDomainRegionDataResponseBody::Value && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
    // The proportions of requests that were initiated from each region.
    shared_ptr<DescribeDcdnDomainRegionDataResponseBody::Value> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
