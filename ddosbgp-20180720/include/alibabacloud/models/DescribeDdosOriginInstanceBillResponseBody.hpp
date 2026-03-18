// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSORIGININSTANCEBILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSORIGININSTANCEBILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class DescribeDdosOriginInstanceBillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosOriginInstanceBillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetStatus, assetStatus_);
      DARABONBA_PTR_TO_JSON(DebtStatus, debtStatus_);
      DARABONBA_PTR_TO_JSON(FlowList, flowList_);
      DARABONBA_ANY_TO_JSON(FlowRegion, flowRegion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IpCount, ipCount_);
      DARABONBA_PTR_TO_JSON(IpCountOrFunctionList, ipCountOrFunctionList_);
      DARABONBA_PTR_TO_JSON(IpInfo, ipInfo_);
      DARABONBA_PTR_TO_JSON(MonthlySummaryList, monthlySummaryList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StandardAssetsFlowList, standardAssetsFlowList_);
      DARABONBA_ANY_TO_JSON(StandardAssetsFlowRegion, standardAssetsFlowRegion_);
      DARABONBA_PTR_TO_JSON(StandardAssetsTotalFlowCn, standardAssetsTotalFlowCn_);
      DARABONBA_PTR_TO_JSON(StandardAssetsTotalFlowOv, standardAssetsTotalFlowOv_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalFlowCn, totalFlowCn_);
      DARABONBA_PTR_TO_JSON(TotalFlowOv, totalFlowOv_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosOriginInstanceBillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetStatus, assetStatus_);
      DARABONBA_PTR_FROM_JSON(DebtStatus, debtStatus_);
      DARABONBA_PTR_FROM_JSON(FlowList, flowList_);
      DARABONBA_ANY_FROM_JSON(FlowRegion, flowRegion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IpCount, ipCount_);
      DARABONBA_PTR_FROM_JSON(IpCountOrFunctionList, ipCountOrFunctionList_);
      DARABONBA_PTR_FROM_JSON(IpInfo, ipInfo_);
      DARABONBA_PTR_FROM_JSON(MonthlySummaryList, monthlySummaryList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StandardAssetsFlowList, standardAssetsFlowList_);
      DARABONBA_ANY_FROM_JSON(StandardAssetsFlowRegion, standardAssetsFlowRegion_);
      DARABONBA_PTR_FROM_JSON(StandardAssetsTotalFlowCn, standardAssetsTotalFlowCn_);
      DARABONBA_PTR_FROM_JSON(StandardAssetsTotalFlowOv, standardAssetsTotalFlowOv_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalFlowCn, totalFlowCn_);
      DARABONBA_PTR_FROM_JSON(TotalFlowOv, totalFlowOv_);
    };
    DescribeDdosOriginInstanceBillResponseBody() = default ;
    DescribeDdosOriginInstanceBillResponseBody(const DescribeDdosOriginInstanceBillResponseBody &) = default ;
    DescribeDdosOriginInstanceBillResponseBody(DescribeDdosOriginInstanceBillResponseBody &&) = default ;
    DescribeDdosOriginInstanceBillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosOriginInstanceBillResponseBody() = default ;
    DescribeDdosOriginInstanceBillResponseBody& operator=(const DescribeDdosOriginInstanceBillResponseBody &) = default ;
    DescribeDdosOriginInstanceBillResponseBody& operator=(DescribeDdosOriginInstanceBillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StandardAssetsFlowList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StandardAssetsFlowList& obj) { 
        DARABONBA_PTR_TO_JSON(MemberFlow, memberFlow_);
        DARABONBA_PTR_TO_JSON(RegionFlow, regionFlow_);
        DARABONBA_PTR_TO_JSON(Time, time_);
        DARABONBA_PTR_TO_JSON(TotalFlow, totalFlow_);
      };
      friend void from_json(const Darabonba::Json& j, StandardAssetsFlowList& obj) { 
        DARABONBA_PTR_FROM_JSON(MemberFlow, memberFlow_);
        DARABONBA_PTR_FROM_JSON(RegionFlow, regionFlow_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
        DARABONBA_PTR_FROM_JSON(TotalFlow, totalFlow_);
      };
      StandardAssetsFlowList() = default ;
      StandardAssetsFlowList(const StandardAssetsFlowList &) = default ;
      StandardAssetsFlowList(StandardAssetsFlowList &&) = default ;
      StandardAssetsFlowList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StandardAssetsFlowList() = default ;
      StandardAssetsFlowList& operator=(const StandardAssetsFlowList &) = default ;
      StandardAssetsFlowList& operator=(StandardAssetsFlowList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->memberFlow_ == nullptr
        && this->regionFlow_ == nullptr && this->time_ == nullptr && this->totalFlow_ == nullptr; };
      // memberFlow Field Functions 
      bool hasMemberFlow() const { return this->memberFlow_ != nullptr;};
      void deleteMemberFlow() { this->memberFlow_ = nullptr;};
      inline string getMemberFlow() const { DARABONBA_PTR_GET_DEFAULT(memberFlow_, "") };
      inline StandardAssetsFlowList& setMemberFlow(string memberFlow) { DARABONBA_PTR_SET_VALUE(memberFlow_, memberFlow) };


      // regionFlow Field Functions 
      bool hasRegionFlow() const { return this->regionFlow_ != nullptr;};
      void deleteRegionFlow() { this->regionFlow_ = nullptr;};
      inline string getRegionFlow() const { DARABONBA_PTR_GET_DEFAULT(regionFlow_, "") };
      inline StandardAssetsFlowList& setRegionFlow(string regionFlow) { DARABONBA_PTR_SET_VALUE(regionFlow_, regionFlow) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline StandardAssetsFlowList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // totalFlow Field Functions 
      bool hasTotalFlow() const { return this->totalFlow_ != nullptr;};
      void deleteTotalFlow() { this->totalFlow_ = nullptr;};
      inline int64_t getTotalFlow() const { DARABONBA_PTR_GET_DEFAULT(totalFlow_, 0L) };
      inline StandardAssetsFlowList& setTotalFlow(int64_t totalFlow) { DARABONBA_PTR_SET_VALUE(totalFlow_, totalFlow) };


    protected:
      // The traffic distribution by region. The JSON struct contains the following fields:
      // 
      // *   **bytes**: the traffic volume of regular Alibaba Cloud services in a region. Unit: bytes.
      // *   **memberUid**: the owner account.
      // *   **instanceId**: the ID of the pay-as-you-go instance that protects the regular Alibaba Cloud services.
      // *   **ip**: the IP address of the regular Alibaba Cloud service protected by the Anti-DDoS Origin instance.
      // *   **region**: the region.
      // 
      // >  If the memberUid field in the JSON struct is empty, the information about the current account is returned. The value of the bytes parameter in the outermost level of the JSON struct indicates the total traffic, and the values of the bytes parameters in inner levels indicate the traffic of the account.
      shared_ptr<string> memberFlow_ {};
      // The traffic distribution by region. The JSON struct contains the following fields:
      // 
      // *   **bytes**: the traffic volume of regular Alibaba Cloud services in a region. Unit: bytes.
      // *   **instanceId**: the ID of the pay-as-you-go instance that protects the regular Alibaba Cloud services.
      // *   **ip**: the IP address protected by the Anti-DDoS Origin instance.
      // *   **region**: the region.
      shared_ptr<string> regionFlow_ {};
      // The timestamp. Unit: milliseconds.
      shared_ptr<int64_t> time_ {};
      // The traffic of regular Alibaba Cloud services. Unit: bytes.
      shared_ptr<int64_t> totalFlow_ {};
    };

    class MonthlySummaryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MonthlySummaryList& obj) { 
        DARABONBA_PTR_TO_JSON(EnableDays, enableDays_);
        DARABONBA_PTR_TO_JSON(FlowCn, flowCn_);
        DARABONBA_PTR_TO_JSON(FlowIntl, flowIntl_);
        DARABONBA_PTR_TO_JSON(IpCountCn, ipCountCn_);
        DARABONBA_PTR_TO_JSON(IpCountIntl, ipCountIntl_);
        DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_TO_JSON(StandardAssetsFlowCn, standardAssetsFlowCn_);
        DARABONBA_PTR_TO_JSON(StandardAssetsFlowIntl, standardAssetsFlowIntl_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
      };
      friend void from_json(const Darabonba::Json& j, MonthlySummaryList& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableDays, enableDays_);
        DARABONBA_PTR_FROM_JSON(FlowCn, flowCn_);
        DARABONBA_PTR_FROM_JSON(FlowIntl, flowIntl_);
        DARABONBA_PTR_FROM_JSON(IpCountCn, ipCountCn_);
        DARABONBA_PTR_FROM_JSON(IpCountIntl, ipCountIntl_);
        DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_FROM_JSON(StandardAssetsFlowCn, standardAssetsFlowCn_);
        DARABONBA_PTR_FROM_JSON(StandardAssetsFlowIntl, standardAssetsFlowIntl_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
      };
      MonthlySummaryList() = default ;
      MonthlySummaryList(const MonthlySummaryList &) = default ;
      MonthlySummaryList(MonthlySummaryList &&) = default ;
      MonthlySummaryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MonthlySummaryList() = default ;
      MonthlySummaryList& operator=(const MonthlySummaryList &) = default ;
      MonthlySummaryList& operator=(MonthlySummaryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableDays_ == nullptr
        && this->flowCn_ == nullptr && this->flowIntl_ == nullptr && this->ipCountCn_ == nullptr && this->ipCountIntl_ == nullptr && this->memberUid_ == nullptr
        && this->standardAssetsFlowCn_ == nullptr && this->standardAssetsFlowIntl_ == nullptr && this->uid_ == nullptr; };
      // enableDays Field Functions 
      bool hasEnableDays() const { return this->enableDays_ != nullptr;};
      void deleteEnableDays() { this->enableDays_ = nullptr;};
      inline int32_t getEnableDays() const { DARABONBA_PTR_GET_DEFAULT(enableDays_, 0) };
      inline MonthlySummaryList& setEnableDays(int32_t enableDays) { DARABONBA_PTR_SET_VALUE(enableDays_, enableDays) };


      // flowCn Field Functions 
      bool hasFlowCn() const { return this->flowCn_ != nullptr;};
      void deleteFlowCn() { this->flowCn_ = nullptr;};
      inline int64_t getFlowCn() const { DARABONBA_PTR_GET_DEFAULT(flowCn_, 0L) };
      inline MonthlySummaryList& setFlowCn(int64_t flowCn) { DARABONBA_PTR_SET_VALUE(flowCn_, flowCn) };


      // flowIntl Field Functions 
      bool hasFlowIntl() const { return this->flowIntl_ != nullptr;};
      void deleteFlowIntl() { this->flowIntl_ = nullptr;};
      inline int64_t getFlowIntl() const { DARABONBA_PTR_GET_DEFAULT(flowIntl_, 0L) };
      inline MonthlySummaryList& setFlowIntl(int64_t flowIntl) { DARABONBA_PTR_SET_VALUE(flowIntl_, flowIntl) };


      // ipCountCn Field Functions 
      bool hasIpCountCn() const { return this->ipCountCn_ != nullptr;};
      void deleteIpCountCn() { this->ipCountCn_ = nullptr;};
      inline int32_t getIpCountCn() const { DARABONBA_PTR_GET_DEFAULT(ipCountCn_, 0) };
      inline MonthlySummaryList& setIpCountCn(int32_t ipCountCn) { DARABONBA_PTR_SET_VALUE(ipCountCn_, ipCountCn) };


      // ipCountIntl Field Functions 
      bool hasIpCountIntl() const { return this->ipCountIntl_ != nullptr;};
      void deleteIpCountIntl() { this->ipCountIntl_ = nullptr;};
      inline int32_t getIpCountIntl() const { DARABONBA_PTR_GET_DEFAULT(ipCountIntl_, 0) };
      inline MonthlySummaryList& setIpCountIntl(int32_t ipCountIntl) { DARABONBA_PTR_SET_VALUE(ipCountIntl_, ipCountIntl) };


      // memberUid Field Functions 
      bool hasMemberUid() const { return this->memberUid_ != nullptr;};
      void deleteMemberUid() { this->memberUid_ = nullptr;};
      inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
      inline MonthlySummaryList& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


      // standardAssetsFlowCn Field Functions 
      bool hasStandardAssetsFlowCn() const { return this->standardAssetsFlowCn_ != nullptr;};
      void deleteStandardAssetsFlowCn() { this->standardAssetsFlowCn_ = nullptr;};
      inline int64_t getStandardAssetsFlowCn() const { DARABONBA_PTR_GET_DEFAULT(standardAssetsFlowCn_, 0L) };
      inline MonthlySummaryList& setStandardAssetsFlowCn(int64_t standardAssetsFlowCn) { DARABONBA_PTR_SET_VALUE(standardAssetsFlowCn_, standardAssetsFlowCn) };


      // standardAssetsFlowIntl Field Functions 
      bool hasStandardAssetsFlowIntl() const { return this->standardAssetsFlowIntl_ != nullptr;};
      void deleteStandardAssetsFlowIntl() { this->standardAssetsFlowIntl_ = nullptr;};
      inline int64_t getStandardAssetsFlowIntl() const { DARABONBA_PTR_GET_DEFAULT(standardAssetsFlowIntl_, 0L) };
      inline MonthlySummaryList& setStandardAssetsFlowIntl(int64_t standardAssetsFlowIntl) { DARABONBA_PTR_SET_VALUE(standardAssetsFlowIntl_, standardAssetsFlowIntl) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline MonthlySummaryList& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      // The number of days that the instance is activated.
      shared_ptr<int32_t> enableDays_ {};
      // The total traffic of EIPs with Anti-DDoS (Enhanced) enabled in the Chinese mainland. Unit: bytes.
      shared_ptr<int64_t> flowCn_ {};
      // The total traffic of EIPs with Anti-DDoS (Enhanced) enabled outside the Chinese mainland. Unit: bytes.
      shared_ptr<int64_t> flowIntl_ {};
      // The total number of protected IP addresses in the Chinese mainland.
      // 
      // >  The total number of protected IP addresses is the sum of the daily numbers of protected IP addresses in a month.
      shared_ptr<int32_t> ipCountCn_ {};
      // The total number of protected IP addresses outside the Chinese mainland.
      // 
      // >  The total number of protected IP addresses is the sum of the daily numbers of protected IP addresses in a month.
      shared_ptr<int32_t> ipCountIntl_ {};
      // The ID of the member.
      shared_ptr<string> memberUid_ {};
      // The total traffic of regular Alibaba Cloud services in the Chinese mainland. Unit: bytes.
      shared_ptr<int64_t> standardAssetsFlowCn_ {};
      // The total traffic of regular Alibaba Cloud services outside the Chinese mainland. Unit: bytes.
      shared_ptr<int64_t> standardAssetsFlowIntl_ {};
      // The ID of the administrator account.
      shared_ptr<string> uid_ {};
    };

    class IpCountOrFunctionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpCountOrFunctionList& obj) { 
        DARABONBA_PTR_TO_JSON(Coverage, coverage_);
        DARABONBA_PTR_TO_JSON(IpCntCn, ipCntCn_);
        DARABONBA_PTR_TO_JSON(IpCntOv, ipCntOv_);
        DARABONBA_PTR_TO_JSON(MemberIpCnt, memberIpCnt_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, IpCountOrFunctionList& obj) { 
        DARABONBA_PTR_FROM_JSON(Coverage, coverage_);
        DARABONBA_PTR_FROM_JSON(IpCntCn, ipCntCn_);
        DARABONBA_PTR_FROM_JSON(IpCntOv, ipCntOv_);
        DARABONBA_PTR_FROM_JSON(MemberIpCnt, memberIpCnt_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      IpCountOrFunctionList() = default ;
      IpCountOrFunctionList(const IpCountOrFunctionList &) = default ;
      IpCountOrFunctionList(IpCountOrFunctionList &&) = default ;
      IpCountOrFunctionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpCountOrFunctionList() = default ;
      IpCountOrFunctionList& operator=(const IpCountOrFunctionList &) = default ;
      IpCountOrFunctionList& operator=(IpCountOrFunctionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->coverage_ == nullptr
        && this->ipCntCn_ == nullptr && this->ipCntOv_ == nullptr && this->memberIpCnt_ == nullptr && this->time_ == nullptr; };
      // coverage Field Functions 
      bool hasCoverage() const { return this->coverage_ != nullptr;};
      void deleteCoverage() { this->coverage_ = nullptr;};
      inline string getCoverage() const { DARABONBA_PTR_GET_DEFAULT(coverage_, "") };
      inline IpCountOrFunctionList& setCoverage(string coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };


      // ipCntCn Field Functions 
      bool hasIpCntCn() const { return this->ipCntCn_ != nullptr;};
      void deleteIpCntCn() { this->ipCntCn_ = nullptr;};
      inline int64_t getIpCntCn() const { DARABONBA_PTR_GET_DEFAULT(ipCntCn_, 0L) };
      inline IpCountOrFunctionList& setIpCntCn(int64_t ipCntCn) { DARABONBA_PTR_SET_VALUE(ipCntCn_, ipCntCn) };


      // ipCntOv Field Functions 
      bool hasIpCntOv() const { return this->ipCntOv_ != nullptr;};
      void deleteIpCntOv() { this->ipCntOv_ = nullptr;};
      inline int64_t getIpCntOv() const { DARABONBA_PTR_GET_DEFAULT(ipCntOv_, 0L) };
      inline IpCountOrFunctionList& setIpCntOv(int64_t ipCntOv) { DARABONBA_PTR_SET_VALUE(ipCntOv_, ipCntOv) };


      // memberIpCnt Field Functions 
      bool hasMemberIpCnt() const { return this->memberIpCnt_ != nullptr;};
      void deleteMemberIpCnt() { this->memberIpCnt_ = nullptr;};
      inline string getMemberIpCnt() const { DARABONBA_PTR_GET_DEFAULT(memberIpCnt_, "") };
      inline IpCountOrFunctionList& setMemberIpCnt(string memberIpCnt) { DARABONBA_PTR_SET_VALUE(memberIpCnt_, memberIpCnt) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline IpCountOrFunctionList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The application scope of the instance. Valid values:
      // 
      // *   **only_mainland_china**: regions in the Chinese mainland.
      // *   **global**: all regions.
      // *   **international_and_hmt**: regions outside the Chinese mainland.
      shared_ptr<string> coverage_ {};
      // The number of IP addresses protected by the pay-as-you-go instance in the Chinese mainland.
      shared_ptr<int64_t> ipCntCn_ {};
      // The number of IP addresses protected by the pay-as-you-go instance outside the Chinese mainland.
      shared_ptr<int64_t> ipCntOv_ {};
      // The bill distribution by account. The JSON struct contains the following fields:
      // 
      // *   **eipCnIpCount**: the number of EIPs with Anti-DDoS (Enhanced) enabled in the Chinese mainland.
      // *   **eipOvIpCount**: the number of EIPs with Anti-DDoS (Enhanced) enabled outside the Chinese mainland.
      // *   **memberUid**: the owner account.
      // *   **standardAssetsCnIpCount**: the number of IP addresses of regular Alibaba Cloud services in the Chinese mainland.
      // *   **standardAssetsOvIpCount**: the number of IP addresses of regular Alibaba Cloud services outside the Chinese mainland.
      // 
      // >  If the memberUid field in the JSON struct is empty, the information about the current account is returned.
      shared_ptr<string> memberIpCnt_ {};
      // The billing time. Unit: milliseconds.
      shared_ptr<int64_t> time_ {};
    };

    class FlowList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FlowList& obj) { 
        DARABONBA_PTR_TO_JSON(MemberFlow, memberFlow_);
        DARABONBA_PTR_TO_JSON(RegionFlow, regionFlow_);
        DARABONBA_PTR_TO_JSON(Time, time_);
        DARABONBA_PTR_TO_JSON(TotalBillFlow, totalBillFlow_);
        DARABONBA_PTR_TO_JSON(TotalFlow, totalFlow_);
      };
      friend void from_json(const Darabonba::Json& j, FlowList& obj) { 
        DARABONBA_PTR_FROM_JSON(MemberFlow, memberFlow_);
        DARABONBA_PTR_FROM_JSON(RegionFlow, regionFlow_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
        DARABONBA_PTR_FROM_JSON(TotalBillFlow, totalBillFlow_);
        DARABONBA_PTR_FROM_JSON(TotalFlow, totalFlow_);
      };
      FlowList() = default ;
      FlowList(const FlowList &) = default ;
      FlowList(FlowList &&) = default ;
      FlowList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FlowList() = default ;
      FlowList& operator=(const FlowList &) = default ;
      FlowList& operator=(FlowList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->memberFlow_ == nullptr
        && this->regionFlow_ == nullptr && this->time_ == nullptr && this->totalBillFlow_ == nullptr && this->totalFlow_ == nullptr; };
      // memberFlow Field Functions 
      bool hasMemberFlow() const { return this->memberFlow_ != nullptr;};
      void deleteMemberFlow() { this->memberFlow_ = nullptr;};
      inline string getMemberFlow() const { DARABONBA_PTR_GET_DEFAULT(memberFlow_, "") };
      inline FlowList& setMemberFlow(string memberFlow) { DARABONBA_PTR_SET_VALUE(memberFlow_, memberFlow) };


      // regionFlow Field Functions 
      bool hasRegionFlow() const { return this->regionFlow_ != nullptr;};
      void deleteRegionFlow() { this->regionFlow_ = nullptr;};
      inline string getRegionFlow() const { DARABONBA_PTR_GET_DEFAULT(regionFlow_, "") };
      inline FlowList& setRegionFlow(string regionFlow) { DARABONBA_PTR_SET_VALUE(regionFlow_, regionFlow) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline FlowList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // totalBillFlow Field Functions 
      bool hasTotalBillFlow() const { return this->totalBillFlow_ != nullptr;};
      void deleteTotalBillFlow() { this->totalBillFlow_ = nullptr;};
      inline int64_t getTotalBillFlow() const { DARABONBA_PTR_GET_DEFAULT(totalBillFlow_, 0L) };
      inline FlowList& setTotalBillFlow(int64_t totalBillFlow) { DARABONBA_PTR_SET_VALUE(totalBillFlow_, totalBillFlow) };


      // totalFlow Field Functions 
      bool hasTotalFlow() const { return this->totalFlow_ != nullptr;};
      void deleteTotalFlow() { this->totalFlow_ = nullptr;};
      inline int64_t getTotalFlow() const { DARABONBA_PTR_GET_DEFAULT(totalFlow_, 0L) };
      inline FlowList& setTotalFlow(int64_t totalFlow) { DARABONBA_PTR_SET_VALUE(totalFlow_, totalFlow) };


    protected:
      // The traffic distribution by region. The JSON struct contains the following fields:
      // 
      // *   **bytes**: the traffic volume of EIPs with Anti-DDoS (Enhanced) enabled in a region. Unit: bytes.
      // *   **memberUid**: the owner account.
      // *   **instanceId**: the ID of the pay-as-you-go instance that protects the EIPs with Anti-DDoS (Enhanced) enabled.
      // *   **ip**: the EIPs with Anti-DDoS (Enhanced) enabled.
      // *   **region**: the region.
      // 
      // >  If the memberUid field in the JSON struct is empty, the information about the current account is returned. The value of the bytes parameter in the outermost level of the JSON struct indicates the total traffic, and the values of the bytes parameters in inner levels indicate the traffic of the account.
      shared_ptr<string> memberFlow_ {};
      // The traffic distribution by region. The JSON struct contains the following fields:
      // 
      // *   **bytes**: the traffic volume of EIPs with Anti-DDoS (Enhanced) enabled in a region. Unit: bytes.
      // *   **instanceId**: the ID of the pay-as-you-go instance that protects the EIPs with Anti-DDoS (Enhanced) enabled.
      // *   **ip**: the EIPs with Anti-DDoS (Enhanced) enabled.
      // *   **region**: the region.
      shared_ptr<string> regionFlow_ {};
      // The timestamp. Unit: milliseconds.
      shared_ptr<int64_t> time_ {};
      // The total IP traffic of regular Alibaba Cloud services.
      shared_ptr<int64_t> totalBillFlow_ {};
      // The traffic of EIPs with Anti-DDoS (Enhanced) enabled. Unit: bytes.
      shared_ptr<int64_t> totalFlow_ {};
    };

    virtual bool empty() const override { return this->assetStatus_ == nullptr
        && this->debtStatus_ == nullptr && this->flowList_ == nullptr && this->flowRegion_ == nullptr && this->instanceId_ == nullptr && this->ipCount_ == nullptr
        && this->ipCountOrFunctionList_ == nullptr && this->ipInfo_ == nullptr && this->monthlySummaryList_ == nullptr && this->requestId_ == nullptr && this->standardAssetsFlowList_ == nullptr
        && this->standardAssetsFlowRegion_ == nullptr && this->standardAssetsTotalFlowCn_ == nullptr && this->standardAssetsTotalFlowOv_ == nullptr && this->status_ == nullptr && this->totalFlowCn_ == nullptr
        && this->totalFlowOv_ == nullptr; };
    // assetStatus Field Functions 
    bool hasAssetStatus() const { return this->assetStatus_ != nullptr;};
    void deleteAssetStatus() { this->assetStatus_ = nullptr;};
    inline int32_t getAssetStatus() const { DARABONBA_PTR_GET_DEFAULT(assetStatus_, 0) };
    inline DescribeDdosOriginInstanceBillResponseBody& setAssetStatus(int32_t assetStatus) { DARABONBA_PTR_SET_VALUE(assetStatus_, assetStatus) };


    // debtStatus Field Functions 
    bool hasDebtStatus() const { return this->debtStatus_ != nullptr;};
    void deleteDebtStatus() { this->debtStatus_ = nullptr;};
    inline int64_t getDebtStatus() const { DARABONBA_PTR_GET_DEFAULT(debtStatus_, 0L) };
    inline DescribeDdosOriginInstanceBillResponseBody& setDebtStatus(int64_t debtStatus) { DARABONBA_PTR_SET_VALUE(debtStatus_, debtStatus) };


    // flowList Field Functions 
    bool hasFlowList() const { return this->flowList_ != nullptr;};
    void deleteFlowList() { this->flowList_ = nullptr;};
    inline const vector<DescribeDdosOriginInstanceBillResponseBody::FlowList> & getFlowList() const { DARABONBA_PTR_GET_CONST(flowList_, vector<DescribeDdosOriginInstanceBillResponseBody::FlowList>) };
    inline vector<DescribeDdosOriginInstanceBillResponseBody::FlowList> getFlowList() { DARABONBA_PTR_GET(flowList_, vector<DescribeDdosOriginInstanceBillResponseBody::FlowList>) };
    inline DescribeDdosOriginInstanceBillResponseBody& setFlowList(const vector<DescribeDdosOriginInstanceBillResponseBody::FlowList> & flowList) { DARABONBA_PTR_SET_VALUE(flowList_, flowList) };
    inline DescribeDdosOriginInstanceBillResponseBody& setFlowList(vector<DescribeDdosOriginInstanceBillResponseBody::FlowList> && flowList) { DARABONBA_PTR_SET_RVALUE(flowList_, flowList) };


    // flowRegion Field Functions 
    bool hasFlowRegion() const { return this->flowRegion_ != nullptr;};
    void deleteFlowRegion() { this->flowRegion_ = nullptr;};
    inline     const Darabonba::Json & getFlowRegion() const { DARABONBA_GET(flowRegion_) };
    Darabonba::Json & getFlowRegion() { DARABONBA_GET(flowRegion_) };
    inline DescribeDdosOriginInstanceBillResponseBody& setFlowRegion(const Darabonba::Json & flowRegion) { DARABONBA_SET_VALUE(flowRegion_, flowRegion) };
    inline DescribeDdosOriginInstanceBillResponseBody& setFlowRegion(Darabonba::Json && flowRegion) { DARABONBA_SET_RVALUE(flowRegion_, flowRegion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDdosOriginInstanceBillResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipCount Field Functions 
    bool hasIpCount() const { return this->ipCount_ != nullptr;};
    void deleteIpCount() { this->ipCount_ = nullptr;};
    inline int64_t getIpCount() const { DARABONBA_PTR_GET_DEFAULT(ipCount_, 0L) };
    inline DescribeDdosOriginInstanceBillResponseBody& setIpCount(int64_t ipCount) { DARABONBA_PTR_SET_VALUE(ipCount_, ipCount) };


    // ipCountOrFunctionList Field Functions 
    bool hasIpCountOrFunctionList() const { return this->ipCountOrFunctionList_ != nullptr;};
    void deleteIpCountOrFunctionList() { this->ipCountOrFunctionList_ = nullptr;};
    inline const vector<DescribeDdosOriginInstanceBillResponseBody::IpCountOrFunctionList> & getIpCountOrFunctionList() const { DARABONBA_PTR_GET_CONST(ipCountOrFunctionList_, vector<DescribeDdosOriginInstanceBillResponseBody::IpCountOrFunctionList>) };
    inline vector<DescribeDdosOriginInstanceBillResponseBody::IpCountOrFunctionList> getIpCountOrFunctionList() { DARABONBA_PTR_GET(ipCountOrFunctionList_, vector<DescribeDdosOriginInstanceBillResponseBody::IpCountOrFunctionList>) };
    inline DescribeDdosOriginInstanceBillResponseBody& setIpCountOrFunctionList(const vector<DescribeDdosOriginInstanceBillResponseBody::IpCountOrFunctionList> & ipCountOrFunctionList) { DARABONBA_PTR_SET_VALUE(ipCountOrFunctionList_, ipCountOrFunctionList) };
    inline DescribeDdosOriginInstanceBillResponseBody& setIpCountOrFunctionList(vector<DescribeDdosOriginInstanceBillResponseBody::IpCountOrFunctionList> && ipCountOrFunctionList) { DARABONBA_PTR_SET_RVALUE(ipCountOrFunctionList_, ipCountOrFunctionList) };


    // ipInfo Field Functions 
    bool hasIpInfo() const { return this->ipInfo_ != nullptr;};
    void deleteIpInfo() { this->ipInfo_ = nullptr;};
    inline string getIpInfo() const { DARABONBA_PTR_GET_DEFAULT(ipInfo_, "") };
    inline DescribeDdosOriginInstanceBillResponseBody& setIpInfo(string ipInfo) { DARABONBA_PTR_SET_VALUE(ipInfo_, ipInfo) };


    // monthlySummaryList Field Functions 
    bool hasMonthlySummaryList() const { return this->monthlySummaryList_ != nullptr;};
    void deleteMonthlySummaryList() { this->monthlySummaryList_ = nullptr;};
    inline const vector<DescribeDdosOriginInstanceBillResponseBody::MonthlySummaryList> & getMonthlySummaryList() const { DARABONBA_PTR_GET_CONST(monthlySummaryList_, vector<DescribeDdosOriginInstanceBillResponseBody::MonthlySummaryList>) };
    inline vector<DescribeDdosOriginInstanceBillResponseBody::MonthlySummaryList> getMonthlySummaryList() { DARABONBA_PTR_GET(monthlySummaryList_, vector<DescribeDdosOriginInstanceBillResponseBody::MonthlySummaryList>) };
    inline DescribeDdosOriginInstanceBillResponseBody& setMonthlySummaryList(const vector<DescribeDdosOriginInstanceBillResponseBody::MonthlySummaryList> & monthlySummaryList) { DARABONBA_PTR_SET_VALUE(monthlySummaryList_, monthlySummaryList) };
    inline DescribeDdosOriginInstanceBillResponseBody& setMonthlySummaryList(vector<DescribeDdosOriginInstanceBillResponseBody::MonthlySummaryList> && monthlySummaryList) { DARABONBA_PTR_SET_RVALUE(monthlySummaryList_, monthlySummaryList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDdosOriginInstanceBillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // standardAssetsFlowList Field Functions 
    bool hasStandardAssetsFlowList() const { return this->standardAssetsFlowList_ != nullptr;};
    void deleteStandardAssetsFlowList() { this->standardAssetsFlowList_ = nullptr;};
    inline const vector<DescribeDdosOriginInstanceBillResponseBody::StandardAssetsFlowList> & getStandardAssetsFlowList() const { DARABONBA_PTR_GET_CONST(standardAssetsFlowList_, vector<DescribeDdosOriginInstanceBillResponseBody::StandardAssetsFlowList>) };
    inline vector<DescribeDdosOriginInstanceBillResponseBody::StandardAssetsFlowList> getStandardAssetsFlowList() { DARABONBA_PTR_GET(standardAssetsFlowList_, vector<DescribeDdosOriginInstanceBillResponseBody::StandardAssetsFlowList>) };
    inline DescribeDdosOriginInstanceBillResponseBody& setStandardAssetsFlowList(const vector<DescribeDdosOriginInstanceBillResponseBody::StandardAssetsFlowList> & standardAssetsFlowList) { DARABONBA_PTR_SET_VALUE(standardAssetsFlowList_, standardAssetsFlowList) };
    inline DescribeDdosOriginInstanceBillResponseBody& setStandardAssetsFlowList(vector<DescribeDdosOriginInstanceBillResponseBody::StandardAssetsFlowList> && standardAssetsFlowList) { DARABONBA_PTR_SET_RVALUE(standardAssetsFlowList_, standardAssetsFlowList) };


    // standardAssetsFlowRegion Field Functions 
    bool hasStandardAssetsFlowRegion() const { return this->standardAssetsFlowRegion_ != nullptr;};
    void deleteStandardAssetsFlowRegion() { this->standardAssetsFlowRegion_ = nullptr;};
    inline     const Darabonba::Json & getStandardAssetsFlowRegion() const { DARABONBA_GET(standardAssetsFlowRegion_) };
    Darabonba::Json & getStandardAssetsFlowRegion() { DARABONBA_GET(standardAssetsFlowRegion_) };
    inline DescribeDdosOriginInstanceBillResponseBody& setStandardAssetsFlowRegion(const Darabonba::Json & standardAssetsFlowRegion) { DARABONBA_SET_VALUE(standardAssetsFlowRegion_, standardAssetsFlowRegion) };
    inline DescribeDdosOriginInstanceBillResponseBody& setStandardAssetsFlowRegion(Darabonba::Json && standardAssetsFlowRegion) { DARABONBA_SET_RVALUE(standardAssetsFlowRegion_, standardAssetsFlowRegion) };


    // standardAssetsTotalFlowCn Field Functions 
    bool hasStandardAssetsTotalFlowCn() const { return this->standardAssetsTotalFlowCn_ != nullptr;};
    void deleteStandardAssetsTotalFlowCn() { this->standardAssetsTotalFlowCn_ = nullptr;};
    inline int64_t getStandardAssetsTotalFlowCn() const { DARABONBA_PTR_GET_DEFAULT(standardAssetsTotalFlowCn_, 0L) };
    inline DescribeDdosOriginInstanceBillResponseBody& setStandardAssetsTotalFlowCn(int64_t standardAssetsTotalFlowCn) { DARABONBA_PTR_SET_VALUE(standardAssetsTotalFlowCn_, standardAssetsTotalFlowCn) };


    // standardAssetsTotalFlowOv Field Functions 
    bool hasStandardAssetsTotalFlowOv() const { return this->standardAssetsTotalFlowOv_ != nullptr;};
    void deleteStandardAssetsTotalFlowOv() { this->standardAssetsTotalFlowOv_ = nullptr;};
    inline int64_t getStandardAssetsTotalFlowOv() const { DARABONBA_PTR_GET_DEFAULT(standardAssetsTotalFlowOv_, 0L) };
    inline DescribeDdosOriginInstanceBillResponseBody& setStandardAssetsTotalFlowOv(int64_t standardAssetsTotalFlowOv) { DARABONBA_PTR_SET_VALUE(standardAssetsTotalFlowOv_, standardAssetsTotalFlowOv) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline DescribeDdosOriginInstanceBillResponseBody& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalFlowCn Field Functions 
    bool hasTotalFlowCn() const { return this->totalFlowCn_ != nullptr;};
    void deleteTotalFlowCn() { this->totalFlowCn_ = nullptr;};
    inline int64_t getTotalFlowCn() const { DARABONBA_PTR_GET_DEFAULT(totalFlowCn_, 0L) };
    inline DescribeDdosOriginInstanceBillResponseBody& setTotalFlowCn(int64_t totalFlowCn) { DARABONBA_PTR_SET_VALUE(totalFlowCn_, totalFlowCn) };


    // totalFlowOv Field Functions 
    bool hasTotalFlowOv() const { return this->totalFlowOv_ != nullptr;};
    void deleteTotalFlowOv() { this->totalFlowOv_ = nullptr;};
    inline int64_t getTotalFlowOv() const { DARABONBA_PTR_GET_DEFAULT(totalFlowOv_, 0L) };
    inline DescribeDdosOriginInstanceBillResponseBody& setTotalFlowOv(int64_t totalFlowOv) { DARABONBA_PTR_SET_VALUE(totalFlowOv_, totalFlowOv) };


  protected:
    // The asset status.
    // 
    // *   **0**: No asset is added to the instance for protection.
    // *   **1**: Assets are added to the instance for protection.
    shared_ptr<int32_t> assetStatus_ {};
    // The payment status. Valid values:
    // 
    // *   **0**: The payment is not overdue.
    // *   **1**: The payment is overdue.
    shared_ptr<int64_t> debtStatus_ {};
    // The details about the traffic of EIPs with Anti-DDoS (Enhanced) enabled.
    shared_ptr<vector<DescribeDdosOriginInstanceBillResponseBody::FlowList>> flowList_ {};
    // The traffic distribution of EIPs with Anti-DDoS (Enhanced) enabled by region.
    Darabonba::Json flowRegion_ {};
    // The ID of the Anti-DDoS Origin (Pay-as-you-go) instance to query.
    shared_ptr<string> instanceId_ {};
    // The number of protected IP addresses.
    shared_ptr<int64_t> ipCount_ {};
    // The protected IP addresses and enabled features.
    shared_ptr<vector<DescribeDdosOriginInstanceBillResponseBody::IpCountOrFunctionList>> ipCountOrFunctionList_ {};
    // The IP address distribution. The JSON struct contains the following fields:
    // 
    // *   **eipCnIpCount**: the number of EIPs with Anti-DDoS (Enhanced) enabled in the Chinese mainland.
    // *   **eipOvIpCount**: the number of EIPs with Anti-DDoS (Enhanced) enabled outside the Chinese mainland.
    // *   **standardAssetsCnIpCount**: the number of IP addresses of regular Alibaba Cloud services in the Chinese mainland.
    // *   **standardAssetsOvIpCount**: the number of IP addresses of regular Alibaba Cloud services outside the Chinese mainland.
    shared_ptr<string> ipInfo_ {};
    // The information about the monthly summary bills.
    shared_ptr<vector<DescribeDdosOriginInstanceBillResponseBody::MonthlySummaryList>> monthlySummaryList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details about the traffic of regular Alibaba Cloud services.
    shared_ptr<vector<DescribeDdosOriginInstanceBillResponseBody::StandardAssetsFlowList>> standardAssetsFlowList_ {};
    // The traffic distribution of regular Alibaba Cloud services by region.
    Darabonba::Json standardAssetsFlowRegion_ {};
    // The total traffic of regular Alibaba Cloud services in the Chinese mainland in the current month.
    shared_ptr<int64_t> standardAssetsTotalFlowCn_ {};
    // The total traffic of regular Alibaba Cloud services outside the Chinese mainland in the current month.
    shared_ptr<int64_t> standardAssetsTotalFlowOv_ {};
    // The instance status. Valid values:
    // 
    // *   **1**: normal
    // *   **2**: expired
    // *   **3**: released
    shared_ptr<int64_t> status_ {};
    // The total traffic of EIPs with Anti-DDoS (Enhanced) enabled in the Chinese mainland in the current month. Unit: bytes.
    shared_ptr<int64_t> totalFlowCn_ {};
    // The total traffic of EIPs with Anti-DDoS (Enhanced) enabled outside the Chinese mainland in the current month. Unit: bytes.
    shared_ptr<int64_t> totalFlowOv_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
