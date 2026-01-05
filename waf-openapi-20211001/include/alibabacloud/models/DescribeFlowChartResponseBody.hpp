// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWCHARTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWCHARTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeFlowChartResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowChartResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FlowChart, flowChart_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowChartResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowChart, flowChart_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFlowChartResponseBody() = default ;
    DescribeFlowChartResponseBody(const DescribeFlowChartResponseBody &) = default ;
    DescribeFlowChartResponseBody(DescribeFlowChartResponseBody &&) = default ;
    DescribeFlowChartResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowChartResponseBody() = default ;
    DescribeFlowChartResponseBody& operator=(const DescribeFlowChartResponseBody &) = default ;
    DescribeFlowChartResponseBody& operator=(DescribeFlowChartResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FlowChart : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FlowChart& obj) { 
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
      friend void from_json(const Darabonba::Json& j, FlowChart& obj) { 
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
      FlowChart() = default ;
      FlowChart(const FlowChart &) = default ;
      FlowChart(FlowChart &&) = default ;
      FlowChart(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FlowChart() = default ;
      FlowChart& operator=(const FlowChart &) = default ;
      FlowChart& operator=(FlowChart &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aclCustomBlockSum_ == nullptr
        && this->aclCustomReportsSum_ == nullptr && this->antiScanBlockSum_ == nullptr && this->antibotBlockSum_ == nullptr && this->antibotReportSum_ == nullptr && this->antiscanReportsSum_ == nullptr
        && this->blacklistBlockSum_ == nullptr && this->blacklistReportsSum_ == nullptr && this->ccCustomBlockSum_ == nullptr && this->ccCustomReportsSum_ == nullptr && this->ccSystemBlocksSum_ == nullptr
        && this->ccSystemReportsSum_ == nullptr && this->count_ == nullptr && this->inBytes_ == nullptr && this->index_ == nullptr && this->maxPv_ == nullptr
        && this->outBytes_ == nullptr && this->ratelimitBlockSum_ == nullptr && this->ratelimitReportSum_ == nullptr && this->regionBlockBlocksSum_ == nullptr && this->regionBlockReportsSum_ == nullptr
        && this->robotCount_ == nullptr && this->wafBlockSum_ == nullptr && this->wafReportSum_ == nullptr; };
      // aclCustomBlockSum Field Functions 
      bool hasAclCustomBlockSum() const { return this->aclCustomBlockSum_ != nullptr;};
      void deleteAclCustomBlockSum() { this->aclCustomBlockSum_ = nullptr;};
      inline int64_t getAclCustomBlockSum() const { DARABONBA_PTR_GET_DEFAULT(aclCustomBlockSum_, 0L) };
      inline FlowChart& setAclCustomBlockSum(int64_t aclCustomBlockSum) { DARABONBA_PTR_SET_VALUE(aclCustomBlockSum_, aclCustomBlockSum) };


      // aclCustomReportsSum Field Functions 
      bool hasAclCustomReportsSum() const { return this->aclCustomReportsSum_ != nullptr;};
      void deleteAclCustomReportsSum() { this->aclCustomReportsSum_ = nullptr;};
      inline int64_t getAclCustomReportsSum() const { DARABONBA_PTR_GET_DEFAULT(aclCustomReportsSum_, 0L) };
      inline FlowChart& setAclCustomReportsSum(int64_t aclCustomReportsSum) { DARABONBA_PTR_SET_VALUE(aclCustomReportsSum_, aclCustomReportsSum) };


      // antiScanBlockSum Field Functions 
      bool hasAntiScanBlockSum() const { return this->antiScanBlockSum_ != nullptr;};
      void deleteAntiScanBlockSum() { this->antiScanBlockSum_ = nullptr;};
      inline int64_t getAntiScanBlockSum() const { DARABONBA_PTR_GET_DEFAULT(antiScanBlockSum_, 0L) };
      inline FlowChart& setAntiScanBlockSum(int64_t antiScanBlockSum) { DARABONBA_PTR_SET_VALUE(antiScanBlockSum_, antiScanBlockSum) };


      // antibotBlockSum Field Functions 
      bool hasAntibotBlockSum() const { return this->antibotBlockSum_ != nullptr;};
      void deleteAntibotBlockSum() { this->antibotBlockSum_ = nullptr;};
      inline int64_t getAntibotBlockSum() const { DARABONBA_PTR_GET_DEFAULT(antibotBlockSum_, 0L) };
      inline FlowChart& setAntibotBlockSum(int64_t antibotBlockSum) { DARABONBA_PTR_SET_VALUE(antibotBlockSum_, antibotBlockSum) };


      // antibotReportSum Field Functions 
      bool hasAntibotReportSum() const { return this->antibotReportSum_ != nullptr;};
      void deleteAntibotReportSum() { this->antibotReportSum_ = nullptr;};
      inline string getAntibotReportSum() const { DARABONBA_PTR_GET_DEFAULT(antibotReportSum_, "") };
      inline FlowChart& setAntibotReportSum(string antibotReportSum) { DARABONBA_PTR_SET_VALUE(antibotReportSum_, antibotReportSum) };


      // antiscanReportsSum Field Functions 
      bool hasAntiscanReportsSum() const { return this->antiscanReportsSum_ != nullptr;};
      void deleteAntiscanReportsSum() { this->antiscanReportsSum_ = nullptr;};
      inline int64_t getAntiscanReportsSum() const { DARABONBA_PTR_GET_DEFAULT(antiscanReportsSum_, 0L) };
      inline FlowChart& setAntiscanReportsSum(int64_t antiscanReportsSum) { DARABONBA_PTR_SET_VALUE(antiscanReportsSum_, antiscanReportsSum) };


      // blacklistBlockSum Field Functions 
      bool hasBlacklistBlockSum() const { return this->blacklistBlockSum_ != nullptr;};
      void deleteBlacklistBlockSum() { this->blacklistBlockSum_ = nullptr;};
      inline string getBlacklistBlockSum() const { DARABONBA_PTR_GET_DEFAULT(blacklistBlockSum_, "") };
      inline FlowChart& setBlacklistBlockSum(string blacklistBlockSum) { DARABONBA_PTR_SET_VALUE(blacklistBlockSum_, blacklistBlockSum) };


      // blacklistReportsSum Field Functions 
      bool hasBlacklistReportsSum() const { return this->blacklistReportsSum_ != nullptr;};
      void deleteBlacklistReportsSum() { this->blacklistReportsSum_ = nullptr;};
      inline int64_t getBlacklistReportsSum() const { DARABONBA_PTR_GET_DEFAULT(blacklistReportsSum_, 0L) };
      inline FlowChart& setBlacklistReportsSum(int64_t blacklistReportsSum) { DARABONBA_PTR_SET_VALUE(blacklistReportsSum_, blacklistReportsSum) };


      // ccCustomBlockSum Field Functions 
      bool hasCcCustomBlockSum() const { return this->ccCustomBlockSum_ != nullptr;};
      void deleteCcCustomBlockSum() { this->ccCustomBlockSum_ = nullptr;};
      inline int64_t getCcCustomBlockSum() const { DARABONBA_PTR_GET_DEFAULT(ccCustomBlockSum_, 0L) };
      inline FlowChart& setCcCustomBlockSum(int64_t ccCustomBlockSum) { DARABONBA_PTR_SET_VALUE(ccCustomBlockSum_, ccCustomBlockSum) };


      // ccCustomReportsSum Field Functions 
      bool hasCcCustomReportsSum() const { return this->ccCustomReportsSum_ != nullptr;};
      void deleteCcCustomReportsSum() { this->ccCustomReportsSum_ = nullptr;};
      inline int64_t getCcCustomReportsSum() const { DARABONBA_PTR_GET_DEFAULT(ccCustomReportsSum_, 0L) };
      inline FlowChart& setCcCustomReportsSum(int64_t ccCustomReportsSum) { DARABONBA_PTR_SET_VALUE(ccCustomReportsSum_, ccCustomReportsSum) };


      // ccSystemBlocksSum Field Functions 
      bool hasCcSystemBlocksSum() const { return this->ccSystemBlocksSum_ != nullptr;};
      void deleteCcSystemBlocksSum() { this->ccSystemBlocksSum_ = nullptr;};
      inline int64_t getCcSystemBlocksSum() const { DARABONBA_PTR_GET_DEFAULT(ccSystemBlocksSum_, 0L) };
      inline FlowChart& setCcSystemBlocksSum(int64_t ccSystemBlocksSum) { DARABONBA_PTR_SET_VALUE(ccSystemBlocksSum_, ccSystemBlocksSum) };


      // ccSystemReportsSum Field Functions 
      bool hasCcSystemReportsSum() const { return this->ccSystemReportsSum_ != nullptr;};
      void deleteCcSystemReportsSum() { this->ccSystemReportsSum_ = nullptr;};
      inline int64_t getCcSystemReportsSum() const { DARABONBA_PTR_GET_DEFAULT(ccSystemReportsSum_, 0L) };
      inline FlowChart& setCcSystemReportsSum(int64_t ccSystemReportsSum) { DARABONBA_PTR_SET_VALUE(ccSystemReportsSum_, ccSystemReportsSum) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline FlowChart& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // inBytes Field Functions 
      bool hasInBytes() const { return this->inBytes_ != nullptr;};
      void deleteInBytes() { this->inBytes_ = nullptr;};
      inline int64_t getInBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
      inline FlowChart& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
      inline FlowChart& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // maxPv Field Functions 
      bool hasMaxPv() const { return this->maxPv_ != nullptr;};
      void deleteMaxPv() { this->maxPv_ = nullptr;};
      inline int64_t getMaxPv() const { DARABONBA_PTR_GET_DEFAULT(maxPv_, 0L) };
      inline FlowChart& setMaxPv(int64_t maxPv) { DARABONBA_PTR_SET_VALUE(maxPv_, maxPv) };


      // outBytes Field Functions 
      bool hasOutBytes() const { return this->outBytes_ != nullptr;};
      void deleteOutBytes() { this->outBytes_ = nullptr;};
      inline int64_t getOutBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
      inline FlowChart& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


      // ratelimitBlockSum Field Functions 
      bool hasRatelimitBlockSum() const { return this->ratelimitBlockSum_ != nullptr;};
      void deleteRatelimitBlockSum() { this->ratelimitBlockSum_ = nullptr;};
      inline int64_t getRatelimitBlockSum() const { DARABONBA_PTR_GET_DEFAULT(ratelimitBlockSum_, 0L) };
      inline FlowChart& setRatelimitBlockSum(int64_t ratelimitBlockSum) { DARABONBA_PTR_SET_VALUE(ratelimitBlockSum_, ratelimitBlockSum) };


      // ratelimitReportSum Field Functions 
      bool hasRatelimitReportSum() const { return this->ratelimitReportSum_ != nullptr;};
      void deleteRatelimitReportSum() { this->ratelimitReportSum_ = nullptr;};
      inline int64_t getRatelimitReportSum() const { DARABONBA_PTR_GET_DEFAULT(ratelimitReportSum_, 0L) };
      inline FlowChart& setRatelimitReportSum(int64_t ratelimitReportSum) { DARABONBA_PTR_SET_VALUE(ratelimitReportSum_, ratelimitReportSum) };


      // regionBlockBlocksSum Field Functions 
      bool hasRegionBlockBlocksSum() const { return this->regionBlockBlocksSum_ != nullptr;};
      void deleteRegionBlockBlocksSum() { this->regionBlockBlocksSum_ = nullptr;};
      inline int64_t getRegionBlockBlocksSum() const { DARABONBA_PTR_GET_DEFAULT(regionBlockBlocksSum_, 0L) };
      inline FlowChart& setRegionBlockBlocksSum(int64_t regionBlockBlocksSum) { DARABONBA_PTR_SET_VALUE(regionBlockBlocksSum_, regionBlockBlocksSum) };


      // regionBlockReportsSum Field Functions 
      bool hasRegionBlockReportsSum() const { return this->regionBlockReportsSum_ != nullptr;};
      void deleteRegionBlockReportsSum() { this->regionBlockReportsSum_ = nullptr;};
      inline int64_t getRegionBlockReportsSum() const { DARABONBA_PTR_GET_DEFAULT(regionBlockReportsSum_, 0L) };
      inline FlowChart& setRegionBlockReportsSum(int64_t regionBlockReportsSum) { DARABONBA_PTR_SET_VALUE(regionBlockReportsSum_, regionBlockReportsSum) };


      // robotCount Field Functions 
      bool hasRobotCount() const { return this->robotCount_ != nullptr;};
      void deleteRobotCount() { this->robotCount_ = nullptr;};
      inline int64_t getRobotCount() const { DARABONBA_PTR_GET_DEFAULT(robotCount_, 0L) };
      inline FlowChart& setRobotCount(int64_t robotCount) { DARABONBA_PTR_SET_VALUE(robotCount_, robotCount) };


      // wafBlockSum Field Functions 
      bool hasWafBlockSum() const { return this->wafBlockSum_ != nullptr;};
      void deleteWafBlockSum() { this->wafBlockSum_ = nullptr;};
      inline int64_t getWafBlockSum() const { DARABONBA_PTR_GET_DEFAULT(wafBlockSum_, 0L) };
      inline FlowChart& setWafBlockSum(int64_t wafBlockSum) { DARABONBA_PTR_SET_VALUE(wafBlockSum_, wafBlockSum) };


      // wafReportSum Field Functions 
      bool hasWafReportSum() const { return this->wafReportSum_ != nullptr;};
      void deleteWafReportSum() { this->wafReportSum_ = nullptr;};
      inline string getWafReportSum() const { DARABONBA_PTR_GET_DEFAULT(wafReportSum_, "") };
      inline FlowChart& setWafReportSum(string wafReportSum) { DARABONBA_PTR_SET_VALUE(wafReportSum_, wafReportSum) };


    protected:
      // The number of requests that are blocked by custom access control list (ACL) rules.
      shared_ptr<int64_t> aclCustomBlockSum_ {};
      // The number of requests that are monitored by custom ACL rules.
      shared_ptr<int64_t> aclCustomReportsSum_ {};
      // The number of requests that are blocked by scan protection rules.
      shared_ptr<int64_t> antiScanBlockSum_ {};
      // The number of requests that are blocked by bot management rules.
      shared_ptr<int64_t> antibotBlockSum_ {};
      // The number of requests that are monitored by bot management rules.
      shared_ptr<string> antibotReportSum_ {};
      // The number of requests that are monitored by scan protection rules.
      shared_ptr<int64_t> antiscanReportsSum_ {};
      // The number of requests that are blocked by the IP address blacklist.
      shared_ptr<string> blacklistBlockSum_ {};
      // The number of requests that are monitored by the IP address blacklist.
      shared_ptr<int64_t> blacklistReportsSum_ {};
      // The number of requests that are blocked by custom HTTP flood protection rules.
      shared_ptr<int64_t> ccCustomBlockSum_ {};
      // The number of requests that are monitored by custom HTTP flood protection rules.
      shared_ptr<int64_t> ccCustomReportsSum_ {};
      // The number of requests that are blocked by HTTP flood protection rules created by the system.
      shared_ptr<int64_t> ccSystemBlocksSum_ {};
      // The number of requests that are monitored by HTTP flood protection rules created by the system.
      shared_ptr<int64_t> ccSystemReportsSum_ {};
      // The total number of requests.
      shared_ptr<int64_t> count_ {};
      // The total number of requests that are redirected to the WAF instance.
      shared_ptr<int64_t> inBytes_ {};
      // The serial number of the time interval. The serial numbers are arranged in chronological order.
      shared_ptr<int64_t> index_ {};
      // The peak traffic.
      shared_ptr<int64_t> maxPv_ {};
      // The total number of requests that are forwarded by the WAF instance.
      shared_ptr<int64_t> outBytes_ {};
      // The number of requests that are blocked by rate limiting rules.
      shared_ptr<int64_t> ratelimitBlockSum_ {};
      // The number of requests that are monitored by rate limiting rules.
      shared_ptr<int64_t> ratelimitReportSum_ {};
      // The number of requests that are blocked by region blacklist rules.
      shared_ptr<int64_t> regionBlockBlocksSum_ {};
      // The number of requests that are monitored by region blacklist rules.
      shared_ptr<int64_t> regionBlockReportsSum_ {};
      // The total number of bot requests.
      shared_ptr<int64_t> robotCount_ {};
      // The number of requests that are blocked by basic protection rules.
      shared_ptr<int64_t> wafBlockSum_ {};
      // The number of requests that are monitored by basic protection rules.
      shared_ptr<string> wafReportSum_ {};
    };

    virtual bool empty() const override { return this->flowChart_ == nullptr
        && this->requestId_ == nullptr; };
    // flowChart Field Functions 
    bool hasFlowChart() const { return this->flowChart_ != nullptr;};
    void deleteFlowChart() { this->flowChart_ = nullptr;};
    inline const vector<DescribeFlowChartResponseBody::FlowChart> & getFlowChart() const { DARABONBA_PTR_GET_CONST(flowChart_, vector<DescribeFlowChartResponseBody::FlowChart>) };
    inline vector<DescribeFlowChartResponseBody::FlowChart> getFlowChart() { DARABONBA_PTR_GET(flowChart_, vector<DescribeFlowChartResponseBody::FlowChart>) };
    inline DescribeFlowChartResponseBody& setFlowChart(const vector<DescribeFlowChartResponseBody::FlowChart> & flowChart) { DARABONBA_PTR_SET_VALUE(flowChart_, flowChart) };
    inline DescribeFlowChartResponseBody& setFlowChart(vector<DescribeFlowChartResponseBody::FlowChart> && flowChart) { DARABONBA_PTR_SET_RVALUE(flowChart_, flowChart) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFlowChartResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The traffic statistics.
    shared_ptr<vector<DescribeFlowChartResponseBody::FlowChart>> flowChart_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
