// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREGIONDATARESPONSEBODYVALUEREGIONPROPORTIONDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREGIONDATARESPONSEBODYVALUEREGIONPROPORTIONDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRegionDataResponseBodyValueRegionProportionData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRegionDataResponseBodyValueRegionProportionData& obj) { 
      DARABONBA_PTR_TO_JSON(AvgObjectSize, avgObjectSize_);
      DARABONBA_PTR_TO_JSON(AvgResponseRate, avgResponseRate_);
      DARABONBA_PTR_TO_JSON(AvgResponseTime, avgResponseTime_);
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(BytesProportion, bytesProportion_);
      DARABONBA_PTR_TO_JSON(Proportion, proportion_);
      DARABONBA_PTR_TO_JSON(Qps, qps_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionEname, regionEname_);
      DARABONBA_PTR_TO_JSON(ReqErrRate, reqErrRate_);
      DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
      DARABONBA_PTR_TO_JSON(TotalQuery, totalQuery_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRegionDataResponseBodyValueRegionProportionData& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgObjectSize, avgObjectSize_);
      DARABONBA_PTR_FROM_JSON(AvgResponseRate, avgResponseRate_);
      DARABONBA_PTR_FROM_JSON(AvgResponseTime, avgResponseTime_);
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(BytesProportion, bytesProportion_);
      DARABONBA_PTR_FROM_JSON(Proportion, proportion_);
      DARABONBA_PTR_FROM_JSON(Qps, qps_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionEname, regionEname_);
      DARABONBA_PTR_FROM_JSON(ReqErrRate, reqErrRate_);
      DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
      DARABONBA_PTR_FROM_JSON(TotalQuery, totalQuery_);
    };
    DescribeDomainRegionDataResponseBodyValueRegionProportionData() = default ;
    DescribeDomainRegionDataResponseBodyValueRegionProportionData(const DescribeDomainRegionDataResponseBodyValueRegionProportionData &) = default ;
    DescribeDomainRegionDataResponseBodyValueRegionProportionData(DescribeDomainRegionDataResponseBodyValueRegionProportionData &&) = default ;
    DescribeDomainRegionDataResponseBodyValueRegionProportionData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRegionDataResponseBodyValueRegionProportionData() = default ;
    DescribeDomainRegionDataResponseBodyValueRegionProportionData& operator=(const DescribeDomainRegionDataResponseBodyValueRegionProportionData &) = default ;
    DescribeDomainRegionDataResponseBodyValueRegionProportionData& operator=(DescribeDomainRegionDataResponseBodyValueRegionProportionData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avgObjectSize_ != nullptr
        && this->avgResponseRate_ != nullptr && this->avgResponseTime_ != nullptr && this->bps_ != nullptr && this->bytesProportion_ != nullptr && this->proportion_ != nullptr
        && this->qps_ != nullptr && this->region_ != nullptr && this->regionEname_ != nullptr && this->reqErrRate_ != nullptr && this->totalBytes_ != nullptr
        && this->totalQuery_ != nullptr; };
    // avgObjectSize Field Functions 
    bool hasAvgObjectSize() const { return this->avgObjectSize_ != nullptr;};
    void deleteAvgObjectSize() { this->avgObjectSize_ = nullptr;};
    inline string avgObjectSize() const { DARABONBA_PTR_GET_DEFAULT(avgObjectSize_, "") };
    inline DescribeDomainRegionDataResponseBodyValueRegionProportionData& setAvgObjectSize(string avgObjectSize) { DARABONBA_PTR_SET_VALUE(avgObjectSize_, avgObjectSize) };


    // avgResponseRate Field Functions 
    bool hasAvgResponseRate() const { return this->avgResponseRate_ != nullptr;};
    void deleteAvgResponseRate() { this->avgResponseRate_ = nullptr;};
    inline string avgResponseRate() const { DARABONBA_PTR_GET_DEFAULT(avgResponseRate_, "") };
    inline DescribeDomainRegionDataResponseBodyValueRegionProportionData& setAvgResponseRate(string avgResponseRate) { DARABONBA_PTR_SET_VALUE(avgResponseRate_, avgResponseRate) };


    // avgResponseTime Field Functions 
    bool hasAvgResponseTime() const { return this->avgResponseTime_ != nullptr;};
    void deleteAvgResponseTime() { this->avgResponseTime_ = nullptr;};
    inline string avgResponseTime() const { DARABONBA_PTR_GET_DEFAULT(avgResponseTime_, "") };
    inline DescribeDomainRegionDataResponseBodyValueRegionProportionData& setAvgResponseTime(string avgResponseTime) { DARABONBA_PTR_SET_VALUE(avgResponseTime_, avgResponseTime) };


    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline string bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, "") };
    inline DescribeDomainRegionDataResponseBodyValueRegionProportionData& setBps(string bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // bytesProportion Field Functions 
    bool hasBytesProportion() const { return this->bytesProportion_ != nullptr;};
    void deleteBytesProportion() { this->bytesProportion_ = nullptr;};
    inline string bytesProportion() const { DARABONBA_PTR_GET_DEFAULT(bytesProportion_, "") };
    inline DescribeDomainRegionDataResponseBodyValueRegionProportionData& setBytesProportion(string bytesProportion) { DARABONBA_PTR_SET_VALUE(bytesProportion_, bytesProportion) };


    // proportion Field Functions 
    bool hasProportion() const { return this->proportion_ != nullptr;};
    void deleteProportion() { this->proportion_ = nullptr;};
    inline string proportion() const { DARABONBA_PTR_GET_DEFAULT(proportion_, "") };
    inline DescribeDomainRegionDataResponseBodyValueRegionProportionData& setProportion(string proportion) { DARABONBA_PTR_SET_VALUE(proportion_, proportion) };


    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline string qps() const { DARABONBA_PTR_GET_DEFAULT(qps_, "") };
    inline DescribeDomainRegionDataResponseBodyValueRegionProportionData& setQps(string qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeDomainRegionDataResponseBodyValueRegionProportionData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionEname Field Functions 
    bool hasRegionEname() const { return this->regionEname_ != nullptr;};
    void deleteRegionEname() { this->regionEname_ = nullptr;};
    inline string regionEname() const { DARABONBA_PTR_GET_DEFAULT(regionEname_, "") };
    inline DescribeDomainRegionDataResponseBodyValueRegionProportionData& setRegionEname(string regionEname) { DARABONBA_PTR_SET_VALUE(regionEname_, regionEname) };


    // reqErrRate Field Functions 
    bool hasReqErrRate() const { return this->reqErrRate_ != nullptr;};
    void deleteReqErrRate() { this->reqErrRate_ = nullptr;};
    inline string reqErrRate() const { DARABONBA_PTR_GET_DEFAULT(reqErrRate_, "") };
    inline DescribeDomainRegionDataResponseBodyValueRegionProportionData& setReqErrRate(string reqErrRate) { DARABONBA_PTR_SET_VALUE(reqErrRate_, reqErrRate) };


    // totalBytes Field Functions 
    bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
    void deleteTotalBytes() { this->totalBytes_ = nullptr;};
    inline string totalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, "") };
    inline DescribeDomainRegionDataResponseBodyValueRegionProportionData& setTotalBytes(string totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


    // totalQuery Field Functions 
    bool hasTotalQuery() const { return this->totalQuery_ != nullptr;};
    void deleteTotalQuery() { this->totalQuery_ = nullptr;};
    inline string totalQuery() const { DARABONBA_PTR_GET_DEFAULT(totalQuery_, "") };
    inline DescribeDomainRegionDataResponseBodyValueRegionProportionData& setTotalQuery(string totalQuery) { DARABONBA_PTR_SET_VALUE(totalQuery_, totalQuery) };


  protected:
    // The average response size. Unit: bytes.
    std::shared_ptr<string> avgObjectSize_ = nullptr;
    // The average response speed. Unit: bit/s.
    std::shared_ptr<string> avgResponseRate_ = nullptr;
    // The average response time. Unit: milliseconds.
    std::shared_ptr<string> avgResponseTime_ = nullptr;
    // The bandwidth.
    std::shared_ptr<string> bps_ = nullptr;
    // The proportion of traffic from the region. For example, a value of 90 indicates that 90% of the traffic is from the region.
    std::shared_ptr<string> bytesProportion_ = nullptr;
    // The proportion of visits from the region. For example, a value of 90 indicates that 90% of the visits are from the region.
    std::shared_ptr<string> proportion_ = nullptr;
    // The number of queries per second.
    std::shared_ptr<string> qps_ = nullptr;
    // The information about the region.
    std::shared_ptr<string> region_ = nullptr;
    // The name of the region.
    std::shared_ptr<string> regionEname_ = nullptr;
    // The request error rate. A value of 90 indicates that 90% of the requests encountered errors.
    std::shared_ptr<string> reqErrRate_ = nullptr;
    // The total traffic. Unit: bytes.
    std::shared_ptr<string> totalBytes_ = nullptr;
    // The total number of requests.
    std::shared_ptr<string> totalQuery_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
