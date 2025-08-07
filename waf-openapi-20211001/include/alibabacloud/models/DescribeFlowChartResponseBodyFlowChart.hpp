// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWCHARTRESPONSEBODYFLOWCHART_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWCHARTRESPONSEBODYFLOWCHART_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeFlowChartResponseBodyFlowChart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowChartResponseBodyFlowChart& obj) { 
      DARABONBA_PTR_TO_JSON(AclCustomBlockSum, aclCustomBlockSum_);
      DARABONBA_PTR_TO_JSON(AclCustomReportsSum, aclCustomReportsSum_);
      DARABONBA_PTR_TO_JSON(AntiScanBlockSum, antiScanBlockSum_);
      DARABONBA_PTR_TO_JSON(AntibotBlockSum, antibotBlockSum_);
      DARABONBA_PTR_TO_JSON(AntibotReportSum, antibotReportSum_);
      DARABONBA_PTR_TO_JSON(AntiscanReportsSum, antiscanReportsSum_);
      DARABONBA_PTR_TO_JSON(BlacklistBlockSum, blacklistBlockSum_);
      DARABONBA_PTR_TO_JSON(BlacklistReportsSum, blacklistReportsSum_);
      DARABONBA_PTR_TO_JSON(CcCustomBlockSum, ccCustomBlockSum_);
      DARABONBA_PTR_TO_JSON(CcCustomReportsSum, ccCustomReportsSum_);
      DARABONBA_PTR_TO_JSON(CcSystemBlocksSum, ccSystemBlocksSum_);
      DARABONBA_PTR_TO_JSON(CcSystemReportsSum, ccSystemReportsSum_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(MaxPv, maxPv_);
      DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_TO_JSON(RatelimitBlockSum, ratelimitBlockSum_);
      DARABONBA_PTR_TO_JSON(RatelimitReportSum, ratelimitReportSum_);
      DARABONBA_PTR_TO_JSON(RegionBlockBlocksSum, regionBlockBlocksSum_);
      DARABONBA_PTR_TO_JSON(RegionBlockReportsSum, regionBlockReportsSum_);
      DARABONBA_PTR_TO_JSON(RobotCount, robotCount_);
      DARABONBA_PTR_TO_JSON(WafBlockSum, wafBlockSum_);
      DARABONBA_PTR_TO_JSON(WafReportSum, wafReportSum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowChartResponseBodyFlowChart& obj) { 
      DARABONBA_PTR_FROM_JSON(AclCustomBlockSum, aclCustomBlockSum_);
      DARABONBA_PTR_FROM_JSON(AclCustomReportsSum, aclCustomReportsSum_);
      DARABONBA_PTR_FROM_JSON(AntiScanBlockSum, antiScanBlockSum_);
      DARABONBA_PTR_FROM_JSON(AntibotBlockSum, antibotBlockSum_);
      DARABONBA_PTR_FROM_JSON(AntibotReportSum, antibotReportSum_);
      DARABONBA_PTR_FROM_JSON(AntiscanReportsSum, antiscanReportsSum_);
      DARABONBA_PTR_FROM_JSON(BlacklistBlockSum, blacklistBlockSum_);
      DARABONBA_PTR_FROM_JSON(BlacklistReportsSum, blacklistReportsSum_);
      DARABONBA_PTR_FROM_JSON(CcCustomBlockSum, ccCustomBlockSum_);
      DARABONBA_PTR_FROM_JSON(CcCustomReportsSum, ccCustomReportsSum_);
      DARABONBA_PTR_FROM_JSON(CcSystemBlocksSum, ccSystemBlocksSum_);
      DARABONBA_PTR_FROM_JSON(CcSystemReportsSum, ccSystemReportsSum_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(MaxPv, maxPv_);
      DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_FROM_JSON(RatelimitBlockSum, ratelimitBlockSum_);
      DARABONBA_PTR_FROM_JSON(RatelimitReportSum, ratelimitReportSum_);
      DARABONBA_PTR_FROM_JSON(RegionBlockBlocksSum, regionBlockBlocksSum_);
      DARABONBA_PTR_FROM_JSON(RegionBlockReportsSum, regionBlockReportsSum_);
      DARABONBA_PTR_FROM_JSON(RobotCount, robotCount_);
      DARABONBA_PTR_FROM_JSON(WafBlockSum, wafBlockSum_);
      DARABONBA_PTR_FROM_JSON(WafReportSum, wafReportSum_);
    };
    DescribeFlowChartResponseBodyFlowChart() = default ;
    DescribeFlowChartResponseBodyFlowChart(const DescribeFlowChartResponseBodyFlowChart &) = default ;
    DescribeFlowChartResponseBodyFlowChart(DescribeFlowChartResponseBodyFlowChart &&) = default ;
    DescribeFlowChartResponseBodyFlowChart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowChartResponseBodyFlowChart() = default ;
    DescribeFlowChartResponseBodyFlowChart& operator=(const DescribeFlowChartResponseBodyFlowChart &) = default ;
    DescribeFlowChartResponseBodyFlowChart& operator=(DescribeFlowChartResponseBodyFlowChart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclCustomBlockSum_ != nullptr
        && this->aclCustomReportsSum_ != nullptr && this->antiScanBlockSum_ != nullptr && this->antibotBlockSum_ != nullptr && this->antibotReportSum_ != nullptr && this->antiscanReportsSum_ != nullptr
        && this->blacklistBlockSum_ != nullptr && this->blacklistReportsSum_ != nullptr && this->ccCustomBlockSum_ != nullptr && this->ccCustomReportsSum_ != nullptr && this->ccSystemBlocksSum_ != nullptr
        && this->ccSystemReportsSum_ != nullptr && this->count_ != nullptr && this->inBytes_ != nullptr && this->index_ != nullptr && this->maxPv_ != nullptr
        && this->outBytes_ != nullptr && this->ratelimitBlockSum_ != nullptr && this->ratelimitReportSum_ != nullptr && this->regionBlockBlocksSum_ != nullptr && this->regionBlockReportsSum_ != nullptr
        && this->robotCount_ != nullptr && this->wafBlockSum_ != nullptr && this->wafReportSum_ != nullptr; };
    // aclCustomBlockSum Field Functions 
    bool hasAclCustomBlockSum() const { return this->aclCustomBlockSum_ != nullptr;};
    void deleteAclCustomBlockSum() { this->aclCustomBlockSum_ = nullptr;};
    inline int64_t aclCustomBlockSum() const { DARABONBA_PTR_GET_DEFAULT(aclCustomBlockSum_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setAclCustomBlockSum(int64_t aclCustomBlockSum) { DARABONBA_PTR_SET_VALUE(aclCustomBlockSum_, aclCustomBlockSum) };


    // aclCustomReportsSum Field Functions 
    bool hasAclCustomReportsSum() const { return this->aclCustomReportsSum_ != nullptr;};
    void deleteAclCustomReportsSum() { this->aclCustomReportsSum_ = nullptr;};
    inline int64_t aclCustomReportsSum() const { DARABONBA_PTR_GET_DEFAULT(aclCustomReportsSum_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setAclCustomReportsSum(int64_t aclCustomReportsSum) { DARABONBA_PTR_SET_VALUE(aclCustomReportsSum_, aclCustomReportsSum) };


    // antiScanBlockSum Field Functions 
    bool hasAntiScanBlockSum() const { return this->antiScanBlockSum_ != nullptr;};
    void deleteAntiScanBlockSum() { this->antiScanBlockSum_ = nullptr;};
    inline int64_t antiScanBlockSum() const { DARABONBA_PTR_GET_DEFAULT(antiScanBlockSum_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setAntiScanBlockSum(int64_t antiScanBlockSum) { DARABONBA_PTR_SET_VALUE(antiScanBlockSum_, antiScanBlockSum) };


    // antibotBlockSum Field Functions 
    bool hasAntibotBlockSum() const { return this->antibotBlockSum_ != nullptr;};
    void deleteAntibotBlockSum() { this->antibotBlockSum_ = nullptr;};
    inline int64_t antibotBlockSum() const { DARABONBA_PTR_GET_DEFAULT(antibotBlockSum_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setAntibotBlockSum(int64_t antibotBlockSum) { DARABONBA_PTR_SET_VALUE(antibotBlockSum_, antibotBlockSum) };


    // antibotReportSum Field Functions 
    bool hasAntibotReportSum() const { return this->antibotReportSum_ != nullptr;};
    void deleteAntibotReportSum() { this->antibotReportSum_ = nullptr;};
    inline string antibotReportSum() const { DARABONBA_PTR_GET_DEFAULT(antibotReportSum_, "") };
    inline DescribeFlowChartResponseBodyFlowChart& setAntibotReportSum(string antibotReportSum) { DARABONBA_PTR_SET_VALUE(antibotReportSum_, antibotReportSum) };


    // antiscanReportsSum Field Functions 
    bool hasAntiscanReportsSum() const { return this->antiscanReportsSum_ != nullptr;};
    void deleteAntiscanReportsSum() { this->antiscanReportsSum_ = nullptr;};
    inline int64_t antiscanReportsSum() const { DARABONBA_PTR_GET_DEFAULT(antiscanReportsSum_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setAntiscanReportsSum(int64_t antiscanReportsSum) { DARABONBA_PTR_SET_VALUE(antiscanReportsSum_, antiscanReportsSum) };


    // blacklistBlockSum Field Functions 
    bool hasBlacklistBlockSum() const { return this->blacklistBlockSum_ != nullptr;};
    void deleteBlacklistBlockSum() { this->blacklistBlockSum_ = nullptr;};
    inline string blacklistBlockSum() const { DARABONBA_PTR_GET_DEFAULT(blacklistBlockSum_, "") };
    inline DescribeFlowChartResponseBodyFlowChart& setBlacklistBlockSum(string blacklistBlockSum) { DARABONBA_PTR_SET_VALUE(blacklistBlockSum_, blacklistBlockSum) };


    // blacklistReportsSum Field Functions 
    bool hasBlacklistReportsSum() const { return this->blacklistReportsSum_ != nullptr;};
    void deleteBlacklistReportsSum() { this->blacklistReportsSum_ = nullptr;};
    inline int64_t blacklistReportsSum() const { DARABONBA_PTR_GET_DEFAULT(blacklistReportsSum_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setBlacklistReportsSum(int64_t blacklistReportsSum) { DARABONBA_PTR_SET_VALUE(blacklistReportsSum_, blacklistReportsSum) };


    // ccCustomBlockSum Field Functions 
    bool hasCcCustomBlockSum() const { return this->ccCustomBlockSum_ != nullptr;};
    void deleteCcCustomBlockSum() { this->ccCustomBlockSum_ = nullptr;};
    inline int64_t ccCustomBlockSum() const { DARABONBA_PTR_GET_DEFAULT(ccCustomBlockSum_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setCcCustomBlockSum(int64_t ccCustomBlockSum) { DARABONBA_PTR_SET_VALUE(ccCustomBlockSum_, ccCustomBlockSum) };


    // ccCustomReportsSum Field Functions 
    bool hasCcCustomReportsSum() const { return this->ccCustomReportsSum_ != nullptr;};
    void deleteCcCustomReportsSum() { this->ccCustomReportsSum_ = nullptr;};
    inline int64_t ccCustomReportsSum() const { DARABONBA_PTR_GET_DEFAULT(ccCustomReportsSum_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setCcCustomReportsSum(int64_t ccCustomReportsSum) { DARABONBA_PTR_SET_VALUE(ccCustomReportsSum_, ccCustomReportsSum) };


    // ccSystemBlocksSum Field Functions 
    bool hasCcSystemBlocksSum() const { return this->ccSystemBlocksSum_ != nullptr;};
    void deleteCcSystemBlocksSum() { this->ccSystemBlocksSum_ = nullptr;};
    inline int64_t ccSystemBlocksSum() const { DARABONBA_PTR_GET_DEFAULT(ccSystemBlocksSum_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setCcSystemBlocksSum(int64_t ccSystemBlocksSum) { DARABONBA_PTR_SET_VALUE(ccSystemBlocksSum_, ccSystemBlocksSum) };


    // ccSystemReportsSum Field Functions 
    bool hasCcSystemReportsSum() const { return this->ccSystemReportsSum_ != nullptr;};
    void deleteCcSystemReportsSum() { this->ccSystemReportsSum_ = nullptr;};
    inline int64_t ccSystemReportsSum() const { DARABONBA_PTR_GET_DEFAULT(ccSystemReportsSum_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setCcSystemReportsSum(int64_t ccSystemReportsSum) { DARABONBA_PTR_SET_VALUE(ccSystemReportsSum_, ccSystemReportsSum) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // inBytes Field Functions 
    bool hasInBytes() const { return this->inBytes_ != nullptr;};
    void deleteInBytes() { this->inBytes_ = nullptr;};
    inline int64_t inBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // maxPv Field Functions 
    bool hasMaxPv() const { return this->maxPv_ != nullptr;};
    void deleteMaxPv() { this->maxPv_ = nullptr;};
    inline int64_t maxPv() const { DARABONBA_PTR_GET_DEFAULT(maxPv_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setMaxPv(int64_t maxPv) { DARABONBA_PTR_SET_VALUE(maxPv_, maxPv) };


    // outBytes Field Functions 
    bool hasOutBytes() const { return this->outBytes_ != nullptr;};
    void deleteOutBytes() { this->outBytes_ = nullptr;};
    inline int64_t outBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


    // ratelimitBlockSum Field Functions 
    bool hasRatelimitBlockSum() const { return this->ratelimitBlockSum_ != nullptr;};
    void deleteRatelimitBlockSum() { this->ratelimitBlockSum_ = nullptr;};
    inline int64_t ratelimitBlockSum() const { DARABONBA_PTR_GET_DEFAULT(ratelimitBlockSum_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setRatelimitBlockSum(int64_t ratelimitBlockSum) { DARABONBA_PTR_SET_VALUE(ratelimitBlockSum_, ratelimitBlockSum) };


    // ratelimitReportSum Field Functions 
    bool hasRatelimitReportSum() const { return this->ratelimitReportSum_ != nullptr;};
    void deleteRatelimitReportSum() { this->ratelimitReportSum_ = nullptr;};
    inline int64_t ratelimitReportSum() const { DARABONBA_PTR_GET_DEFAULT(ratelimitReportSum_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setRatelimitReportSum(int64_t ratelimitReportSum) { DARABONBA_PTR_SET_VALUE(ratelimitReportSum_, ratelimitReportSum) };


    // regionBlockBlocksSum Field Functions 
    bool hasRegionBlockBlocksSum() const { return this->regionBlockBlocksSum_ != nullptr;};
    void deleteRegionBlockBlocksSum() { this->regionBlockBlocksSum_ = nullptr;};
    inline int64_t regionBlockBlocksSum() const { DARABONBA_PTR_GET_DEFAULT(regionBlockBlocksSum_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setRegionBlockBlocksSum(int64_t regionBlockBlocksSum) { DARABONBA_PTR_SET_VALUE(regionBlockBlocksSum_, regionBlockBlocksSum) };


    // regionBlockReportsSum Field Functions 
    bool hasRegionBlockReportsSum() const { return this->regionBlockReportsSum_ != nullptr;};
    void deleteRegionBlockReportsSum() { this->regionBlockReportsSum_ = nullptr;};
    inline int64_t regionBlockReportsSum() const { DARABONBA_PTR_GET_DEFAULT(regionBlockReportsSum_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setRegionBlockReportsSum(int64_t regionBlockReportsSum) { DARABONBA_PTR_SET_VALUE(regionBlockReportsSum_, regionBlockReportsSum) };


    // robotCount Field Functions 
    bool hasRobotCount() const { return this->robotCount_ != nullptr;};
    void deleteRobotCount() { this->robotCount_ = nullptr;};
    inline int64_t robotCount() const { DARABONBA_PTR_GET_DEFAULT(robotCount_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setRobotCount(int64_t robotCount) { DARABONBA_PTR_SET_VALUE(robotCount_, robotCount) };


    // wafBlockSum Field Functions 
    bool hasWafBlockSum() const { return this->wafBlockSum_ != nullptr;};
    void deleteWafBlockSum() { this->wafBlockSum_ = nullptr;};
    inline int64_t wafBlockSum() const { DARABONBA_PTR_GET_DEFAULT(wafBlockSum_, 0L) };
    inline DescribeFlowChartResponseBodyFlowChart& setWafBlockSum(int64_t wafBlockSum) { DARABONBA_PTR_SET_VALUE(wafBlockSum_, wafBlockSum) };


    // wafReportSum Field Functions 
    bool hasWafReportSum() const { return this->wafReportSum_ != nullptr;};
    void deleteWafReportSum() { this->wafReportSum_ = nullptr;};
    inline string wafReportSum() const { DARABONBA_PTR_GET_DEFAULT(wafReportSum_, "") };
    inline DescribeFlowChartResponseBodyFlowChart& setWafReportSum(string wafReportSum) { DARABONBA_PTR_SET_VALUE(wafReportSum_, wafReportSum) };


  protected:
    // The number of requests that are blocked by custom access control list (ACL) rules.
    std::shared_ptr<int64_t> aclCustomBlockSum_ = nullptr;
    // The number of requests that are monitored by custom ACL rules.
    std::shared_ptr<int64_t> aclCustomReportsSum_ = nullptr;
    // The number of requests that are blocked by scan protection rules.
    std::shared_ptr<int64_t> antiScanBlockSum_ = nullptr;
    // The number of requests that are blocked by bot management rules.
    std::shared_ptr<int64_t> antibotBlockSum_ = nullptr;
    // The number of requests that are monitored by bot management rules.
    std::shared_ptr<string> antibotReportSum_ = nullptr;
    // The number of requests that are monitored by scan protection rules.
    std::shared_ptr<int64_t> antiscanReportsSum_ = nullptr;
    // The number of requests that are blocked by the IP address blacklist.
    std::shared_ptr<string> blacklistBlockSum_ = nullptr;
    // The number of requests that are monitored by the IP address blacklist.
    std::shared_ptr<int64_t> blacklistReportsSum_ = nullptr;
    // The number of requests that are blocked by custom HTTP flood protection rules.
    std::shared_ptr<int64_t> ccCustomBlockSum_ = nullptr;
    // The number of requests that are monitored by custom HTTP flood protection rules.
    std::shared_ptr<int64_t> ccCustomReportsSum_ = nullptr;
    // The number of requests that are blocked by HTTP flood protection rules created by the system.
    std::shared_ptr<int64_t> ccSystemBlocksSum_ = nullptr;
    // The number of requests that are monitored by HTTP flood protection rules created by the system.
    std::shared_ptr<int64_t> ccSystemReportsSum_ = nullptr;
    // The total number of requests.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The total number of requests that are redirected to the WAF instance.
    std::shared_ptr<int64_t> inBytes_ = nullptr;
    // The serial number of the time interval. The serial numbers are arranged in chronological order.
    std::shared_ptr<int64_t> index_ = nullptr;
    // The peak traffic.
    std::shared_ptr<int64_t> maxPv_ = nullptr;
    // The total number of requests that are forwarded by the WAF instance.
    std::shared_ptr<int64_t> outBytes_ = nullptr;
    // The number of requests that are blocked by rate limiting rules.
    std::shared_ptr<int64_t> ratelimitBlockSum_ = nullptr;
    // The number of requests that are monitored by rate limiting rules.
    std::shared_ptr<int64_t> ratelimitReportSum_ = nullptr;
    // The number of requests that are blocked by region blacklist rules.
    std::shared_ptr<int64_t> regionBlockBlocksSum_ = nullptr;
    // The number of requests that are monitored by region blacklist rules.
    std::shared_ptr<int64_t> regionBlockReportsSum_ = nullptr;
    // The total number of bot requests.
    std::shared_ptr<int64_t> robotCount_ = nullptr;
    // The number of requests that are blocked by basic protection rules.
    std::shared_ptr<int64_t> wafBlockSum_ = nullptr;
    // The number of requests that are monitored by basic protection rules.
    std::shared_ptr<string> wafReportSum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
