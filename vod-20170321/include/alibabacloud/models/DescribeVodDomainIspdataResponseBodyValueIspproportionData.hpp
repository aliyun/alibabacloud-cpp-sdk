// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINISPDATARESPONSEBODYVALUEISPPROPORTIONDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINISPDATARESPONSEBODYVALUEISPPROPORTIONDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainISPDataResponseBodyValueISPProportionData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainISPDataResponseBodyValueISPProportionData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainISPDataResponseBodyValueISPProportionData& obj) { 
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
    DescribeVodDomainISPDataResponseBodyValueISPProportionData() = default ;
    DescribeVodDomainISPDataResponseBodyValueISPProportionData(const DescribeVodDomainISPDataResponseBodyValueISPProportionData &) = default ;
    DescribeVodDomainISPDataResponseBodyValueISPProportionData(DescribeVodDomainISPDataResponseBodyValueISPProportionData &&) = default ;
    DescribeVodDomainISPDataResponseBodyValueISPProportionData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainISPDataResponseBodyValueISPProportionData() = default ;
    DescribeVodDomainISPDataResponseBodyValueISPProportionData& operator=(const DescribeVodDomainISPDataResponseBodyValueISPProportionData &) = default ;
    DescribeVodDomainISPDataResponseBodyValueISPProportionData& operator=(DescribeVodDomainISPDataResponseBodyValueISPProportionData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avgObjectSize_ != nullptr
        && this->avgResponseRate_ != nullptr && this->avgResponseTime_ != nullptr && this->bps_ != nullptr && this->bytesProportion_ != nullptr && this->ISP_ != nullptr
        && this->ispEname_ != nullptr && this->proportion_ != nullptr && this->qps_ != nullptr && this->reqErrRate_ != nullptr && this->totalBytes_ != nullptr
        && this->totalQuery_ != nullptr; };
    // avgObjectSize Field Functions 
    bool hasAvgObjectSize() const { return this->avgObjectSize_ != nullptr;};
    void deleteAvgObjectSize() { this->avgObjectSize_ = nullptr;};
    inline string avgObjectSize() const { DARABONBA_PTR_GET_DEFAULT(avgObjectSize_, "") };
    inline DescribeVodDomainISPDataResponseBodyValueISPProportionData& setAvgObjectSize(string avgObjectSize) { DARABONBA_PTR_SET_VALUE(avgObjectSize_, avgObjectSize) };


    // avgResponseRate Field Functions 
    bool hasAvgResponseRate() const { return this->avgResponseRate_ != nullptr;};
    void deleteAvgResponseRate() { this->avgResponseRate_ = nullptr;};
    inline string avgResponseRate() const { DARABONBA_PTR_GET_DEFAULT(avgResponseRate_, "") };
    inline DescribeVodDomainISPDataResponseBodyValueISPProportionData& setAvgResponseRate(string avgResponseRate) { DARABONBA_PTR_SET_VALUE(avgResponseRate_, avgResponseRate) };


    // avgResponseTime Field Functions 
    bool hasAvgResponseTime() const { return this->avgResponseTime_ != nullptr;};
    void deleteAvgResponseTime() { this->avgResponseTime_ = nullptr;};
    inline string avgResponseTime() const { DARABONBA_PTR_GET_DEFAULT(avgResponseTime_, "") };
    inline DescribeVodDomainISPDataResponseBodyValueISPProportionData& setAvgResponseTime(string avgResponseTime) { DARABONBA_PTR_SET_VALUE(avgResponseTime_, avgResponseTime) };


    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline string bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, "") };
    inline DescribeVodDomainISPDataResponseBodyValueISPProportionData& setBps(string bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // bytesProportion Field Functions 
    bool hasBytesProportion() const { return this->bytesProportion_ != nullptr;};
    void deleteBytesProportion() { this->bytesProportion_ = nullptr;};
    inline string bytesProportion() const { DARABONBA_PTR_GET_DEFAULT(bytesProportion_, "") };
    inline DescribeVodDomainISPDataResponseBodyValueISPProportionData& setBytesProportion(string bytesProportion) { DARABONBA_PTR_SET_VALUE(bytesProportion_, bytesProportion) };


    // ISP Field Functions 
    bool hasISP() const { return this->ISP_ != nullptr;};
    void deleteISP() { this->ISP_ = nullptr;};
    inline string ISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
    inline DescribeVodDomainISPDataResponseBodyValueISPProportionData& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


    // ispEname Field Functions 
    bool hasIspEname() const { return this->ispEname_ != nullptr;};
    void deleteIspEname() { this->ispEname_ = nullptr;};
    inline string ispEname() const { DARABONBA_PTR_GET_DEFAULT(ispEname_, "") };
    inline DescribeVodDomainISPDataResponseBodyValueISPProportionData& setIspEname(string ispEname) { DARABONBA_PTR_SET_VALUE(ispEname_, ispEname) };


    // proportion Field Functions 
    bool hasProportion() const { return this->proportion_ != nullptr;};
    void deleteProportion() { this->proportion_ = nullptr;};
    inline string proportion() const { DARABONBA_PTR_GET_DEFAULT(proportion_, "") };
    inline DescribeVodDomainISPDataResponseBodyValueISPProportionData& setProportion(string proportion) { DARABONBA_PTR_SET_VALUE(proportion_, proportion) };


    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline string qps() const { DARABONBA_PTR_GET_DEFAULT(qps_, "") };
    inline DescribeVodDomainISPDataResponseBodyValueISPProportionData& setQps(string qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // reqErrRate Field Functions 
    bool hasReqErrRate() const { return this->reqErrRate_ != nullptr;};
    void deleteReqErrRate() { this->reqErrRate_ = nullptr;};
    inline string reqErrRate() const { DARABONBA_PTR_GET_DEFAULT(reqErrRate_, "") };
    inline DescribeVodDomainISPDataResponseBodyValueISPProportionData& setReqErrRate(string reqErrRate) { DARABONBA_PTR_SET_VALUE(reqErrRate_, reqErrRate) };


    // totalBytes Field Functions 
    bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
    void deleteTotalBytes() { this->totalBytes_ = nullptr;};
    inline string totalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, "") };
    inline DescribeVodDomainISPDataResponseBodyValueISPProportionData& setTotalBytes(string totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


    // totalQuery Field Functions 
    bool hasTotalQuery() const { return this->totalQuery_ != nullptr;};
    void deleteTotalQuery() { this->totalQuery_ = nullptr;};
    inline string totalQuery() const { DARABONBA_PTR_GET_DEFAULT(totalQuery_, "") };
    inline DescribeVodDomainISPDataResponseBodyValueISPProportionData& setTotalQuery(string totalQuery) { DARABONBA_PTR_SET_VALUE(totalQuery_, totalQuery) };


  protected:
    std::shared_ptr<string> avgObjectSize_ = nullptr;
    std::shared_ptr<string> avgResponseRate_ = nullptr;
    std::shared_ptr<string> avgResponseTime_ = nullptr;
    std::shared_ptr<string> bps_ = nullptr;
    std::shared_ptr<string> bytesProportion_ = nullptr;
    std::shared_ptr<string> ISP_ = nullptr;
    std::shared_ptr<string> ispEname_ = nullptr;
    std::shared_ptr<string> proportion_ = nullptr;
    std::shared_ptr<string> qps_ = nullptr;
    std::shared_ptr<string> reqErrRate_ = nullptr;
    std::shared_ptr<string> totalBytes_ = nullptr;
    std::shared_ptr<string> totalQuery_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
