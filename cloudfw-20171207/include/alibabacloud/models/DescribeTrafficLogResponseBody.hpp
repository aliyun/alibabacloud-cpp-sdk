// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTrafficLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTrafficLogResponseBody() = default ;
    DescribeTrafficLogResponseBody(const DescribeTrafficLogResponseBody &) = default ;
    DescribeTrafficLogResponseBody(DescribeTrafficLogResponseBody &&) = default ;
    DescribeTrafficLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficLogResponseBody() = default ;
    DescribeTrafficLogResponseBody& operator=(const DescribeTrafficLogResponseBody &) = default ;
    DescribeTrafficLogResponseBody& operator=(DescribeTrafficLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(AclPreRuleId, aclPreRuleId_);
        DARABONBA_PTR_TO_JSON(AclPreRuleName, aclPreRuleName_);
        DARABONBA_PTR_TO_JSON(AclPreState, aclPreState_);
        DARABONBA_PTR_TO_JSON(AppDpiState, appDpiState_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(AttackApp, attackApp_);
        DARABONBA_PTR_TO_JSON(AttackType, attackType_);
        DARABONBA_PTR_TO_JSON(CityId, cityId_);
        DARABONBA_PTR_TO_JSON(CloseReason, closeReason_);
        DARABONBA_PTR_TO_JSON(CloudInstanceId, cloudInstanceId_);
        DARABONBA_PTR_TO_JSON(CountryId, countryId_);
        DARABONBA_PTR_TO_JSON(Direction, direction_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(DomainUrl, domainUrl_);
        DARABONBA_PTR_TO_JSON(DstIP, dstIP_);
        DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
        DARABONBA_PTR_TO_JSON(DstVpc, dstVpc_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Ext, ext_);
        DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
        DARABONBA_PTR_TO_JSON(InPackets, inPackets_);
        DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_TO_JSON(Isp, isp_);
        DARABONBA_PTR_TO_JSON(IspId, ispId_);
        DARABONBA_PTR_TO_JSON(Location, location_);
        DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
        DARABONBA_PTR_TO_JSON(OutPackets, outPackets_);
        DARABONBA_PTR_TO_JSON(PacketBytes, packetBytes_);
        DARABONBA_PTR_TO_JSON(PacketCount, packetCount_);
        DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
        DARABONBA_PTR_TO_JSON(PrivatePort, privatePort_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleResult, ruleResult_);
        DARABONBA_PTR_TO_JSON(RuleSource, ruleSource_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
        DARABONBA_PTR_TO_JSON(SrcIP, srcIP_);
        DARABONBA_PTR_TO_JSON(SrcPort, srcPort_);
        DARABONBA_PTR_TO_JSON(SrcPrivateIP, srcPrivateIP_);
        DARABONBA_PTR_TO_JSON(SrcVpc, srcVpc_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TlsRuleId, tlsRuleId_);
        DARABONBA_PTR_TO_JSON(TlsRuleName, tlsRuleName_);
        DARABONBA_PTR_TO_JSON(TlsScopeId, tlsScopeId_);
        DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
        DARABONBA_PTR_TO_JSON(VulLevel, vulLevel_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(AclPreRuleId, aclPreRuleId_);
        DARABONBA_PTR_FROM_JSON(AclPreRuleName, aclPreRuleName_);
        DARABONBA_PTR_FROM_JSON(AclPreState, aclPreState_);
        DARABONBA_PTR_FROM_JSON(AppDpiState, appDpiState_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(AttackApp, attackApp_);
        DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
        DARABONBA_PTR_FROM_JSON(CityId, cityId_);
        DARABONBA_PTR_FROM_JSON(CloseReason, closeReason_);
        DARABONBA_PTR_FROM_JSON(CloudInstanceId, cloudInstanceId_);
        DARABONBA_PTR_FROM_JSON(CountryId, countryId_);
        DARABONBA_PTR_FROM_JSON(Direction, direction_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(DomainUrl, domainUrl_);
        DARABONBA_PTR_FROM_JSON(DstIP, dstIP_);
        DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
        DARABONBA_PTR_FROM_JSON(DstVpc, dstVpc_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Ext, ext_);
        DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
        DARABONBA_PTR_FROM_JSON(InPackets, inPackets_);
        DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
        DARABONBA_PTR_FROM_JSON(IspId, ispId_);
        DARABONBA_PTR_FROM_JSON(Location, location_);
        DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
        DARABONBA_PTR_FROM_JSON(OutPackets, outPackets_);
        DARABONBA_PTR_FROM_JSON(PacketBytes, packetBytes_);
        DARABONBA_PTR_FROM_JSON(PacketCount, packetCount_);
        DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
        DARABONBA_PTR_FROM_JSON(PrivatePort, privatePort_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleResult, ruleResult_);
        DARABONBA_PTR_FROM_JSON(RuleSource, ruleSource_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
        DARABONBA_PTR_FROM_JSON(SrcIP, srcIP_);
        DARABONBA_PTR_FROM_JSON(SrcPort, srcPort_);
        DARABONBA_PTR_FROM_JSON(SrcPrivateIP, srcPrivateIP_);
        DARABONBA_PTR_FROM_JSON(SrcVpc, srcVpc_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TlsRuleId, tlsRuleId_);
        DARABONBA_PTR_FROM_JSON(TlsRuleName, tlsRuleName_);
        DARABONBA_PTR_FROM_JSON(TlsScopeId, tlsScopeId_);
        DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
        DARABONBA_PTR_FROM_JSON(VulLevel, vulLevel_);
      };
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SrcVpc : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SrcVpc& obj) { 
          DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
        };
        friend void from_json(const Darabonba::Json& j, SrcVpc& obj) { 
          DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
        };
        SrcVpc() = default ;
        SrcVpc(const SrcVpc &) = default ;
        SrcVpc(SrcVpc &&) = default ;
        SrcVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SrcVpc() = default ;
        SrcVpc& operator=(const SrcVpc &) = default ;
        SrcVpc& operator=(SrcVpc &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->regionNo_ == nullptr
        && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
        // regionNo Field Functions 
        bool hasRegionNo() const { return this->regionNo_ != nullptr;};
        void deleteRegionNo() { this->regionNo_ = nullptr;};
        inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
        inline SrcVpc& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline SrcVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcName Field Functions 
        bool hasVpcName() const { return this->vpcName_ != nullptr;};
        void deleteVpcName() { this->vpcName_ = nullptr;};
        inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
        inline SrcVpc& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


      protected:
        shared_ptr<string> regionNo_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> vpcName_ {};
      };

      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        };
        Rules() = default ;
        Rules(const Rules &) = default ;
        Rules(Rules &&) = default ;
        Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rules() = default ;
        Rules& operator=(const Rules &) = default ;
        Rules& operator=(Rules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ruleId_ == nullptr
        && this->ruleName_ == nullptr; };
        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline Rules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline Rules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      protected:
        shared_ptr<string> ruleId_ {};
        shared_ptr<string> ruleName_ {};
      };

      class DstVpc : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DstVpc& obj) { 
          DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
        };
        friend void from_json(const Darabonba::Json& j, DstVpc& obj) { 
          DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
        };
        DstVpc() = default ;
        DstVpc(const DstVpc &) = default ;
        DstVpc(DstVpc &&) = default ;
        DstVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DstVpc() = default ;
        DstVpc& operator=(const DstVpc &) = default ;
        DstVpc& operator=(DstVpc &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->regionNo_ == nullptr
        && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
        // regionNo Field Functions 
        bool hasRegionNo() const { return this->regionNo_ != nullptr;};
        void deleteRegionNo() { this->regionNo_ = nullptr;};
        inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
        inline DstVpc& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline DstVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcName Field Functions 
        bool hasVpcName() const { return this->vpcName_ != nullptr;};
        void deleteVpcName() { this->vpcName_ = nullptr;};
        inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
        inline DstVpc& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


      protected:
        shared_ptr<string> regionNo_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> vpcName_ {};
      };

      virtual bool empty() const override { return this->aclPreRuleId_ == nullptr
        && this->aclPreRuleName_ == nullptr && this->aclPreState_ == nullptr && this->appDpiState_ == nullptr && this->appId_ == nullptr && this->appName_ == nullptr
        && this->attackApp_ == nullptr && this->attackType_ == nullptr && this->cityId_ == nullptr && this->closeReason_ == nullptr && this->cloudInstanceId_ == nullptr
        && this->countryId_ == nullptr && this->direction_ == nullptr && this->domainName_ == nullptr && this->domainUrl_ == nullptr && this->dstIP_ == nullptr
        && this->dstPort_ == nullptr && this->dstVpc_ == nullptr && this->endTime_ == nullptr && this->ext_ == nullptr && this->inBytes_ == nullptr
        && this->inPackets_ == nullptr && this->ipProtocol_ == nullptr && this->isp_ == nullptr && this->ispId_ == nullptr && this->location_ == nullptr
        && this->memberUid_ == nullptr && this->outBytes_ == nullptr && this->outPackets_ == nullptr && this->packetBytes_ == nullptr && this->packetCount_ == nullptr
        && this->privateIp_ == nullptr && this->privatePort_ == nullptr && this->regionId_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr
        && this->ruleResult_ == nullptr && this->ruleSource_ == nullptr && this->rules_ == nullptr && this->srcIP_ == nullptr && this->srcPort_ == nullptr
        && this->srcPrivateIP_ == nullptr && this->srcVpc_ == nullptr && this->startTime_ == nullptr && this->tlsRuleId_ == nullptr && this->tlsRuleName_ == nullptr
        && this->tlsScopeId_ == nullptr && this->vpcFirewallId_ == nullptr && this->vulLevel_ == nullptr; };
      // aclPreRuleId Field Functions 
      bool hasAclPreRuleId() const { return this->aclPreRuleId_ != nullptr;};
      void deleteAclPreRuleId() { this->aclPreRuleId_ = nullptr;};
      inline string getAclPreRuleId() const { DARABONBA_PTR_GET_DEFAULT(aclPreRuleId_, "") };
      inline DataList& setAclPreRuleId(string aclPreRuleId) { DARABONBA_PTR_SET_VALUE(aclPreRuleId_, aclPreRuleId) };


      // aclPreRuleName Field Functions 
      bool hasAclPreRuleName() const { return this->aclPreRuleName_ != nullptr;};
      void deleteAclPreRuleName() { this->aclPreRuleName_ = nullptr;};
      inline string getAclPreRuleName() const { DARABONBA_PTR_GET_DEFAULT(aclPreRuleName_, "") };
      inline DataList& setAclPreRuleName(string aclPreRuleName) { DARABONBA_PTR_SET_VALUE(aclPreRuleName_, aclPreRuleName) };


      // aclPreState Field Functions 
      bool hasAclPreState() const { return this->aclPreState_ != nullptr;};
      void deleteAclPreState() { this->aclPreState_ = nullptr;};
      inline string getAclPreState() const { DARABONBA_PTR_GET_DEFAULT(aclPreState_, "") };
      inline DataList& setAclPreState(string aclPreState) { DARABONBA_PTR_SET_VALUE(aclPreState_, aclPreState) };


      // appDpiState Field Functions 
      bool hasAppDpiState() const { return this->appDpiState_ != nullptr;};
      void deleteAppDpiState() { this->appDpiState_ = nullptr;};
      inline string getAppDpiState() const { DARABONBA_PTR_GET_DEFAULT(appDpiState_, "") };
      inline DataList& setAppDpiState(string appDpiState) { DARABONBA_PTR_SET_VALUE(appDpiState_, appDpiState) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline int32_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
      inline DataList& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline DataList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // attackApp Field Functions 
      bool hasAttackApp() const { return this->attackApp_ != nullptr;};
      void deleteAttackApp() { this->attackApp_ = nullptr;};
      inline string getAttackApp() const { DARABONBA_PTR_GET_DEFAULT(attackApp_, "") };
      inline DataList& setAttackApp(string attackApp) { DARABONBA_PTR_SET_VALUE(attackApp_, attackApp) };


      // attackType Field Functions 
      bool hasAttackType() const { return this->attackType_ != nullptr;};
      void deleteAttackType() { this->attackType_ = nullptr;};
      inline int32_t getAttackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, 0) };
      inline DataList& setAttackType(int32_t attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


      // cityId Field Functions 
      bool hasCityId() const { return this->cityId_ != nullptr;};
      void deleteCityId() { this->cityId_ = nullptr;};
      inline string getCityId() const { DARABONBA_PTR_GET_DEFAULT(cityId_, "") };
      inline DataList& setCityId(string cityId) { DARABONBA_PTR_SET_VALUE(cityId_, cityId) };


      // closeReason Field Functions 
      bool hasCloseReason() const { return this->closeReason_ != nullptr;};
      void deleteCloseReason() { this->closeReason_ = nullptr;};
      inline string getCloseReason() const { DARABONBA_PTR_GET_DEFAULT(closeReason_, "") };
      inline DataList& setCloseReason(string closeReason) { DARABONBA_PTR_SET_VALUE(closeReason_, closeReason) };


      // cloudInstanceId Field Functions 
      bool hasCloudInstanceId() const { return this->cloudInstanceId_ != nullptr;};
      void deleteCloudInstanceId() { this->cloudInstanceId_ = nullptr;};
      inline string getCloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(cloudInstanceId_, "") };
      inline DataList& setCloudInstanceId(string cloudInstanceId) { DARABONBA_PTR_SET_VALUE(cloudInstanceId_, cloudInstanceId) };


      // countryId Field Functions 
      bool hasCountryId() const { return this->countryId_ != nullptr;};
      void deleteCountryId() { this->countryId_ = nullptr;};
      inline string getCountryId() const { DARABONBA_PTR_GET_DEFAULT(countryId_, "") };
      inline DataList& setCountryId(string countryId) { DARABONBA_PTR_SET_VALUE(countryId_, countryId) };


      // direction Field Functions 
      bool hasDirection() const { return this->direction_ != nullptr;};
      void deleteDirection() { this->direction_ = nullptr;};
      inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
      inline DataList& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline DataList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // domainUrl Field Functions 
      bool hasDomainUrl() const { return this->domainUrl_ != nullptr;};
      void deleteDomainUrl() { this->domainUrl_ = nullptr;};
      inline string getDomainUrl() const { DARABONBA_PTR_GET_DEFAULT(domainUrl_, "") };
      inline DataList& setDomainUrl(string domainUrl) { DARABONBA_PTR_SET_VALUE(domainUrl_, domainUrl) };


      // dstIP Field Functions 
      bool hasDstIP() const { return this->dstIP_ != nullptr;};
      void deleteDstIP() { this->dstIP_ = nullptr;};
      inline string getDstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
      inline DataList& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


      // dstPort Field Functions 
      bool hasDstPort() const { return this->dstPort_ != nullptr;};
      void deleteDstPort() { this->dstPort_ = nullptr;};
      inline int32_t getDstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, 0) };
      inline DataList& setDstPort(int32_t dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


      // dstVpc Field Functions 
      bool hasDstVpc() const { return this->dstVpc_ != nullptr;};
      void deleteDstVpc() { this->dstVpc_ = nullptr;};
      inline const DataList::DstVpc & getDstVpc() const { DARABONBA_PTR_GET_CONST(dstVpc_, DataList::DstVpc) };
      inline DataList::DstVpc getDstVpc() { DARABONBA_PTR_GET(dstVpc_, DataList::DstVpc) };
      inline DataList& setDstVpc(const DataList::DstVpc & dstVpc) { DARABONBA_PTR_SET_VALUE(dstVpc_, dstVpc) };
      inline DataList& setDstVpc(DataList::DstVpc && dstVpc) { DARABONBA_PTR_SET_RVALUE(dstVpc_, dstVpc) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline DataList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // ext Field Functions 
      bool hasExt() const { return this->ext_ != nullptr;};
      void deleteExt() { this->ext_ = nullptr;};
      inline string getExt() const { DARABONBA_PTR_GET_DEFAULT(ext_, "") };
      inline DataList& setExt(string ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };


      // inBytes Field Functions 
      bool hasInBytes() const { return this->inBytes_ != nullptr;};
      void deleteInBytes() { this->inBytes_ = nullptr;};
      inline string getInBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, "") };
      inline DataList& setInBytes(string inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


      // inPackets Field Functions 
      bool hasInPackets() const { return this->inPackets_ != nullptr;};
      void deleteInPackets() { this->inPackets_ = nullptr;};
      inline string getInPackets() const { DARABONBA_PTR_GET_DEFAULT(inPackets_, "") };
      inline DataList& setInPackets(string inPackets) { DARABONBA_PTR_SET_VALUE(inPackets_, inPackets) };


      // ipProtocol Field Functions 
      bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
      void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
      inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
      inline DataList& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline DataList& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // ispId Field Functions 
      bool hasIspId() const { return this->ispId_ != nullptr;};
      void deleteIspId() { this->ispId_ = nullptr;};
      inline string getIspId() const { DARABONBA_PTR_GET_DEFAULT(ispId_, "") };
      inline DataList& setIspId(string ispId) { DARABONBA_PTR_SET_VALUE(ispId_, ispId) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline DataList& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // memberUid Field Functions 
      bool hasMemberUid() const { return this->memberUid_ != nullptr;};
      void deleteMemberUid() { this->memberUid_ = nullptr;};
      inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
      inline DataList& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


      // outBytes Field Functions 
      bool hasOutBytes() const { return this->outBytes_ != nullptr;};
      void deleteOutBytes() { this->outBytes_ = nullptr;};
      inline string getOutBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, "") };
      inline DataList& setOutBytes(string outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


      // outPackets Field Functions 
      bool hasOutPackets() const { return this->outPackets_ != nullptr;};
      void deleteOutPackets() { this->outPackets_ = nullptr;};
      inline string getOutPackets() const { DARABONBA_PTR_GET_DEFAULT(outPackets_, "") };
      inline DataList& setOutPackets(string outPackets) { DARABONBA_PTR_SET_VALUE(outPackets_, outPackets) };


      // packetBytes Field Functions 
      bool hasPacketBytes() const { return this->packetBytes_ != nullptr;};
      void deletePacketBytes() { this->packetBytes_ = nullptr;};
      inline int64_t getPacketBytes() const { DARABONBA_PTR_GET_DEFAULT(packetBytes_, 0L) };
      inline DataList& setPacketBytes(int64_t packetBytes) { DARABONBA_PTR_SET_VALUE(packetBytes_, packetBytes) };


      // packetCount Field Functions 
      bool hasPacketCount() const { return this->packetCount_ != nullptr;};
      void deletePacketCount() { this->packetCount_ = nullptr;};
      inline int64_t getPacketCount() const { DARABONBA_PTR_GET_DEFAULT(packetCount_, 0L) };
      inline DataList& setPacketCount(int64_t packetCount) { DARABONBA_PTR_SET_VALUE(packetCount_, packetCount) };


      // privateIp Field Functions 
      bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
      void deletePrivateIp() { this->privateIp_ = nullptr;};
      inline string getPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
      inline DataList& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


      // privatePort Field Functions 
      bool hasPrivatePort() const { return this->privatePort_ != nullptr;};
      void deletePrivatePort() { this->privatePort_ = nullptr;};
      inline int32_t getPrivatePort() const { DARABONBA_PTR_GET_DEFAULT(privatePort_, 0) };
      inline DataList& setPrivatePort(int32_t privatePort) { DARABONBA_PTR_SET_VALUE(privatePort_, privatePort) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DataList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline DataList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline DataList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleResult Field Functions 
      bool hasRuleResult() const { return this->ruleResult_ != nullptr;};
      void deleteRuleResult() { this->ruleResult_ = nullptr;};
      inline int32_t getRuleResult() const { DARABONBA_PTR_GET_DEFAULT(ruleResult_, 0) };
      inline DataList& setRuleResult(int32_t ruleResult) { DARABONBA_PTR_SET_VALUE(ruleResult_, ruleResult) };


      // ruleSource Field Functions 
      bool hasRuleSource() const { return this->ruleSource_ != nullptr;};
      void deleteRuleSource() { this->ruleSource_ = nullptr;};
      inline string getRuleSource() const { DARABONBA_PTR_GET_DEFAULT(ruleSource_, "") };
      inline DataList& setRuleSource(string ruleSource) { DARABONBA_PTR_SET_VALUE(ruleSource_, ruleSource) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<DataList::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<DataList::Rules>) };
      inline vector<DataList::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<DataList::Rules>) };
      inline DataList& setRules(const vector<DataList::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline DataList& setRules(vector<DataList::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      // srcIP Field Functions 
      bool hasSrcIP() const { return this->srcIP_ != nullptr;};
      void deleteSrcIP() { this->srcIP_ = nullptr;};
      inline string getSrcIP() const { DARABONBA_PTR_GET_DEFAULT(srcIP_, "") };
      inline DataList& setSrcIP(string srcIP) { DARABONBA_PTR_SET_VALUE(srcIP_, srcIP) };


      // srcPort Field Functions 
      bool hasSrcPort() const { return this->srcPort_ != nullptr;};
      void deleteSrcPort() { this->srcPort_ = nullptr;};
      inline int32_t getSrcPort() const { DARABONBA_PTR_GET_DEFAULT(srcPort_, 0) };
      inline DataList& setSrcPort(int32_t srcPort) { DARABONBA_PTR_SET_VALUE(srcPort_, srcPort) };


      // srcPrivateIP Field Functions 
      bool hasSrcPrivateIP() const { return this->srcPrivateIP_ != nullptr;};
      void deleteSrcPrivateIP() { this->srcPrivateIP_ = nullptr;};
      inline string getSrcPrivateIP() const { DARABONBA_PTR_GET_DEFAULT(srcPrivateIP_, "") };
      inline DataList& setSrcPrivateIP(string srcPrivateIP) { DARABONBA_PTR_SET_VALUE(srcPrivateIP_, srcPrivateIP) };


      // srcVpc Field Functions 
      bool hasSrcVpc() const { return this->srcVpc_ != nullptr;};
      void deleteSrcVpc() { this->srcVpc_ = nullptr;};
      inline const DataList::SrcVpc & getSrcVpc() const { DARABONBA_PTR_GET_CONST(srcVpc_, DataList::SrcVpc) };
      inline DataList::SrcVpc getSrcVpc() { DARABONBA_PTR_GET(srcVpc_, DataList::SrcVpc) };
      inline DataList& setSrcVpc(const DataList::SrcVpc & srcVpc) { DARABONBA_PTR_SET_VALUE(srcVpc_, srcVpc) };
      inline DataList& setSrcVpc(DataList::SrcVpc && srcVpc) { DARABONBA_PTR_SET_RVALUE(srcVpc_, srcVpc) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline DataList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // tlsRuleId Field Functions 
      bool hasTlsRuleId() const { return this->tlsRuleId_ != nullptr;};
      void deleteTlsRuleId() { this->tlsRuleId_ = nullptr;};
      inline string getTlsRuleId() const { DARABONBA_PTR_GET_DEFAULT(tlsRuleId_, "") };
      inline DataList& setTlsRuleId(string tlsRuleId) { DARABONBA_PTR_SET_VALUE(tlsRuleId_, tlsRuleId) };


      // tlsRuleName Field Functions 
      bool hasTlsRuleName() const { return this->tlsRuleName_ != nullptr;};
      void deleteTlsRuleName() { this->tlsRuleName_ = nullptr;};
      inline string getTlsRuleName() const { DARABONBA_PTR_GET_DEFAULT(tlsRuleName_, "") };
      inline DataList& setTlsRuleName(string tlsRuleName) { DARABONBA_PTR_SET_VALUE(tlsRuleName_, tlsRuleName) };


      // tlsScopeId Field Functions 
      bool hasTlsScopeId() const { return this->tlsScopeId_ != nullptr;};
      void deleteTlsScopeId() { this->tlsScopeId_ = nullptr;};
      inline string getTlsScopeId() const { DARABONBA_PTR_GET_DEFAULT(tlsScopeId_, "") };
      inline DataList& setTlsScopeId(string tlsScopeId) { DARABONBA_PTR_SET_VALUE(tlsScopeId_, tlsScopeId) };


      // vpcFirewallId Field Functions 
      bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
      void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
      inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
      inline DataList& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


      // vulLevel Field Functions 
      bool hasVulLevel() const { return this->vulLevel_ != nullptr;};
      void deleteVulLevel() { this->vulLevel_ = nullptr;};
      inline int32_t getVulLevel() const { DARABONBA_PTR_GET_DEFAULT(vulLevel_, 0) };
      inline DataList& setVulLevel(int32_t vulLevel) { DARABONBA_PTR_SET_VALUE(vulLevel_, vulLevel) };


    protected:
      shared_ptr<string> aclPreRuleId_ {};
      shared_ptr<string> aclPreRuleName_ {};
      shared_ptr<string> aclPreState_ {};
      shared_ptr<string> appDpiState_ {};
      shared_ptr<int32_t> appId_ {};
      shared_ptr<string> appName_ {};
      shared_ptr<string> attackApp_ {};
      shared_ptr<int32_t> attackType_ {};
      shared_ptr<string> cityId_ {};
      shared_ptr<string> closeReason_ {};
      shared_ptr<string> cloudInstanceId_ {};
      shared_ptr<string> countryId_ {};
      shared_ptr<string> direction_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<string> domainUrl_ {};
      shared_ptr<string> dstIP_ {};
      shared_ptr<int32_t> dstPort_ {};
      shared_ptr<DataList::DstVpc> dstVpc_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<string> ext_ {};
      shared_ptr<string> inBytes_ {};
      shared_ptr<string> inPackets_ {};
      shared_ptr<string> ipProtocol_ {};
      shared_ptr<string> isp_ {};
      shared_ptr<string> ispId_ {};
      shared_ptr<string> location_ {};
      shared_ptr<string> memberUid_ {};
      shared_ptr<string> outBytes_ {};
      shared_ptr<string> outPackets_ {};
      shared_ptr<int64_t> packetBytes_ {};
      shared_ptr<int64_t> packetCount_ {};
      shared_ptr<string> privateIp_ {};
      shared_ptr<int32_t> privatePort_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> ruleId_ {};
      shared_ptr<string> ruleName_ {};
      shared_ptr<int32_t> ruleResult_ {};
      shared_ptr<string> ruleSource_ {};
      shared_ptr<vector<DataList::Rules>> rules_ {};
      shared_ptr<string> srcIP_ {};
      shared_ptr<int32_t> srcPort_ {};
      shared_ptr<string> srcPrivateIP_ {};
      shared_ptr<DataList::SrcVpc> srcVpc_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<string> tlsRuleId_ {};
      shared_ptr<string> tlsRuleName_ {};
      shared_ptr<string> tlsScopeId_ {};
      shared_ptr<string> vpcFirewallId_ {};
      shared_ptr<int32_t> vulLevel_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeTrafficLogResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeTrafficLogResponseBody::DataList>) };
    inline vector<DescribeTrafficLogResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeTrafficLogResponseBody::DataList>) };
    inline DescribeTrafficLogResponseBody& setDataList(const vector<DescribeTrafficLogResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeTrafficLogResponseBody& setDataList(vector<DescribeTrafficLogResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeTrafficLogResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeTrafficLogResponseBody::PageInfo) };
    inline DescribeTrafficLogResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeTrafficLogResponseBody::PageInfo) };
    inline DescribeTrafficLogResponseBody& setPageInfo(const DescribeTrafficLogResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeTrafficLogResponseBody& setPageInfo(DescribeTrafficLogResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTrafficLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeTrafficLogResponseBody::DataList>> dataList_ {};
    shared_ptr<DescribeTrafficLogResponseBody::PageInfo> pageInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
