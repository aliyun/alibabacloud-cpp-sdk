// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2LISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2LISTRESPONSEBODY_HPP_
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
  class DescribeTrFirewallsV2ListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrFirewallsV2ListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpcTrFirewalls, vpcTrFirewalls_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrFirewallsV2ListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpcTrFirewalls, vpcTrFirewalls_);
    };
    DescribeTrFirewallsV2ListResponseBody() = default ;
    DescribeTrFirewallsV2ListResponseBody(const DescribeTrFirewallsV2ListResponseBody &) = default ;
    DescribeTrFirewallsV2ListResponseBody(DescribeTrFirewallsV2ListResponseBody &&) = default ;
    DescribeTrFirewallsV2ListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrFirewallsV2ListResponseBody() = default ;
    DescribeTrFirewallsV2ListResponseBody& operator=(const DescribeTrFirewallsV2ListResponseBody &) = default ;
    DescribeTrFirewallsV2ListResponseBody& operator=(DescribeTrFirewallsV2ListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpcTrFirewalls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpcTrFirewalls& obj) { 
        DARABONBA_PTR_TO_JSON(AclConfig, aclConfig_);
        DARABONBA_PTR_TO_JSON(CenId, cenId_);
        DARABONBA_PTR_TO_JSON(CenName, cenName_);
        DARABONBA_PTR_TO_JSON(CloudFirewallVpcOrderType, cloudFirewallVpcOrderType_);
        DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
        DARABONBA_PTR_TO_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
        DARABONBA_PTR_TO_JSON(IpsConfig, ipsConfig_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
        DARABONBA_PTR_TO_JSON(ProtectedResource, protectedResource_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(RegionStatus, regionStatus_);
        DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
        DARABONBA_PTR_TO_JSON(RouteMode, routeMode_);
        DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
        DARABONBA_PTR_TO_JSON(UnprotectedResource, unprotectedResource_);
        DARABONBA_PTR_TO_JSON(VpcFirewallName, vpcFirewallName_);
      };
      friend void from_json(const Darabonba::Json& j, VpcTrFirewalls& obj) { 
        DARABONBA_PTR_FROM_JSON(AclConfig, aclConfig_);
        DARABONBA_PTR_FROM_JSON(CenId, cenId_);
        DARABONBA_PTR_FROM_JSON(CenName, cenName_);
        DARABONBA_PTR_FROM_JSON(CloudFirewallVpcOrderType, cloudFirewallVpcOrderType_);
        DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
        DARABONBA_PTR_FROM_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
        DARABONBA_PTR_FROM_JSON(IpsConfig, ipsConfig_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
        DARABONBA_PTR_FROM_JSON(ProtectedResource, protectedResource_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(RegionStatus, regionStatus_);
        DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
        DARABONBA_PTR_FROM_JSON(RouteMode, routeMode_);
        DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
        DARABONBA_PTR_FROM_JSON(UnprotectedResource, unprotectedResource_);
        DARABONBA_PTR_FROM_JSON(VpcFirewallName, vpcFirewallName_);
      };
      VpcTrFirewalls() = default ;
      VpcTrFirewalls(const VpcTrFirewalls &) = default ;
      VpcTrFirewalls(VpcTrFirewalls &&) = default ;
      VpcTrFirewalls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpcTrFirewalls() = default ;
      VpcTrFirewalls& operator=(const VpcTrFirewalls &) = default ;
      VpcTrFirewalls& operator=(VpcTrFirewalls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UnprotectedResource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UnprotectedResource& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(EcrList, ecrList_);
          DARABONBA_PTR_TO_JSON(PeerTrList, peerTrList_);
          DARABONBA_PTR_TO_JSON(VbrList, vbrList_);
          DARABONBA_PTR_TO_JSON(VpcList, vpcList_);
          DARABONBA_PTR_TO_JSON(VpnList, vpnList_);
        };
        friend void from_json(const Darabonba::Json& j, UnprotectedResource& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(EcrList, ecrList_);
          DARABONBA_PTR_FROM_JSON(PeerTrList, peerTrList_);
          DARABONBA_PTR_FROM_JSON(VbrList, vbrList_);
          DARABONBA_PTR_FROM_JSON(VpcList, vpcList_);
          DARABONBA_PTR_FROM_JSON(VpnList, vpnList_);
        };
        UnprotectedResource() = default ;
        UnprotectedResource(const UnprotectedResource &) = default ;
        UnprotectedResource(UnprotectedResource &&) = default ;
        UnprotectedResource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UnprotectedResource() = default ;
        UnprotectedResource& operator=(const UnprotectedResource &) = default ;
        UnprotectedResource& operator=(UnprotectedResource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->ecrList_ == nullptr && this->peerTrList_ == nullptr && this->vbrList_ == nullptr && this->vpcList_ == nullptr && this->vpnList_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline UnprotectedResource& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // ecrList Field Functions 
        bool hasEcrList() const { return this->ecrList_ != nullptr;};
        void deleteEcrList() { this->ecrList_ = nullptr;};
        inline const vector<string> & getEcrList() const { DARABONBA_PTR_GET_CONST(ecrList_, vector<string>) };
        inline vector<string> getEcrList() { DARABONBA_PTR_GET(ecrList_, vector<string>) };
        inline UnprotectedResource& setEcrList(const vector<string> & ecrList) { DARABONBA_PTR_SET_VALUE(ecrList_, ecrList) };
        inline UnprotectedResource& setEcrList(vector<string> && ecrList) { DARABONBA_PTR_SET_RVALUE(ecrList_, ecrList) };


        // peerTrList Field Functions 
        bool hasPeerTrList() const { return this->peerTrList_ != nullptr;};
        void deletePeerTrList() { this->peerTrList_ = nullptr;};
        inline const vector<string> & getPeerTrList() const { DARABONBA_PTR_GET_CONST(peerTrList_, vector<string>) };
        inline vector<string> getPeerTrList() { DARABONBA_PTR_GET(peerTrList_, vector<string>) };
        inline UnprotectedResource& setPeerTrList(const vector<string> & peerTrList) { DARABONBA_PTR_SET_VALUE(peerTrList_, peerTrList) };
        inline UnprotectedResource& setPeerTrList(vector<string> && peerTrList) { DARABONBA_PTR_SET_RVALUE(peerTrList_, peerTrList) };


        // vbrList Field Functions 
        bool hasVbrList() const { return this->vbrList_ != nullptr;};
        void deleteVbrList() { this->vbrList_ = nullptr;};
        inline const vector<string> & getVbrList() const { DARABONBA_PTR_GET_CONST(vbrList_, vector<string>) };
        inline vector<string> getVbrList() { DARABONBA_PTR_GET(vbrList_, vector<string>) };
        inline UnprotectedResource& setVbrList(const vector<string> & vbrList) { DARABONBA_PTR_SET_VALUE(vbrList_, vbrList) };
        inline UnprotectedResource& setVbrList(vector<string> && vbrList) { DARABONBA_PTR_SET_RVALUE(vbrList_, vbrList) };


        // vpcList Field Functions 
        bool hasVpcList() const { return this->vpcList_ != nullptr;};
        void deleteVpcList() { this->vpcList_ = nullptr;};
        inline const vector<string> & getVpcList() const { DARABONBA_PTR_GET_CONST(vpcList_, vector<string>) };
        inline vector<string> getVpcList() { DARABONBA_PTR_GET(vpcList_, vector<string>) };
        inline UnprotectedResource& setVpcList(const vector<string> & vpcList) { DARABONBA_PTR_SET_VALUE(vpcList_, vpcList) };
        inline UnprotectedResource& setVpcList(vector<string> && vpcList) { DARABONBA_PTR_SET_RVALUE(vpcList_, vpcList) };


        // vpnList Field Functions 
        bool hasVpnList() const { return this->vpnList_ != nullptr;};
        void deleteVpnList() { this->vpnList_ = nullptr;};
        inline const vector<string> & getVpnList() const { DARABONBA_PTR_GET_CONST(vpnList_, vector<string>) };
        inline vector<string> getVpnList() { DARABONBA_PTR_GET(vpnList_, vector<string>) };
        inline UnprotectedResource& setVpnList(const vector<string> & vpnList) { DARABONBA_PTR_SET_VALUE(vpnList_, vpnList) };
        inline UnprotectedResource& setVpnList(vector<string> && vpnList) { DARABONBA_PTR_SET_RVALUE(vpnList_, vpnList) };


      protected:
        // The number of unprotected resources.
        shared_ptr<int32_t> count_ {};
        // The unprotected express connect routers.
        shared_ptr<vector<string>> ecrList_ {};
        // The unprotected peer transit routers.
        shared_ptr<vector<string>> peerTrList_ {};
        // The unprotected VBRs.
        shared_ptr<vector<string>> vbrList_ {};
        // The unprotected VPCs.
        shared_ptr<vector<string>> vpcList_ {};
        // The unprotected VPN gateways.
        shared_ptr<vector<string>> vpnList_ {};
      };

      class ProtectedResource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProtectedResource& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(EcrList, ecrList_);
          DARABONBA_PTR_TO_JSON(PeerTrList, peerTrList_);
          DARABONBA_PTR_TO_JSON(VbrList, vbrList_);
          DARABONBA_PTR_TO_JSON(VpcList, vpcList_);
          DARABONBA_PTR_TO_JSON(VpnList, vpnList_);
        };
        friend void from_json(const Darabonba::Json& j, ProtectedResource& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(EcrList, ecrList_);
          DARABONBA_PTR_FROM_JSON(PeerTrList, peerTrList_);
          DARABONBA_PTR_FROM_JSON(VbrList, vbrList_);
          DARABONBA_PTR_FROM_JSON(VpcList, vpcList_);
          DARABONBA_PTR_FROM_JSON(VpnList, vpnList_);
        };
        ProtectedResource() = default ;
        ProtectedResource(const ProtectedResource &) = default ;
        ProtectedResource(ProtectedResource &&) = default ;
        ProtectedResource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProtectedResource() = default ;
        ProtectedResource& operator=(const ProtectedResource &) = default ;
        ProtectedResource& operator=(ProtectedResource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->ecrList_ == nullptr && this->peerTrList_ == nullptr && this->vbrList_ == nullptr && this->vpcList_ == nullptr && this->vpnList_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline ProtectedResource& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // ecrList Field Functions 
        bool hasEcrList() const { return this->ecrList_ != nullptr;};
        void deleteEcrList() { this->ecrList_ = nullptr;};
        inline const vector<string> & getEcrList() const { DARABONBA_PTR_GET_CONST(ecrList_, vector<string>) };
        inline vector<string> getEcrList() { DARABONBA_PTR_GET(ecrList_, vector<string>) };
        inline ProtectedResource& setEcrList(const vector<string> & ecrList) { DARABONBA_PTR_SET_VALUE(ecrList_, ecrList) };
        inline ProtectedResource& setEcrList(vector<string> && ecrList) { DARABONBA_PTR_SET_RVALUE(ecrList_, ecrList) };


        // peerTrList Field Functions 
        bool hasPeerTrList() const { return this->peerTrList_ != nullptr;};
        void deletePeerTrList() { this->peerTrList_ = nullptr;};
        inline const vector<string> & getPeerTrList() const { DARABONBA_PTR_GET_CONST(peerTrList_, vector<string>) };
        inline vector<string> getPeerTrList() { DARABONBA_PTR_GET(peerTrList_, vector<string>) };
        inline ProtectedResource& setPeerTrList(const vector<string> & peerTrList) { DARABONBA_PTR_SET_VALUE(peerTrList_, peerTrList) };
        inline ProtectedResource& setPeerTrList(vector<string> && peerTrList) { DARABONBA_PTR_SET_RVALUE(peerTrList_, peerTrList) };


        // vbrList Field Functions 
        bool hasVbrList() const { return this->vbrList_ != nullptr;};
        void deleteVbrList() { this->vbrList_ = nullptr;};
        inline const vector<string> & getVbrList() const { DARABONBA_PTR_GET_CONST(vbrList_, vector<string>) };
        inline vector<string> getVbrList() { DARABONBA_PTR_GET(vbrList_, vector<string>) };
        inline ProtectedResource& setVbrList(const vector<string> & vbrList) { DARABONBA_PTR_SET_VALUE(vbrList_, vbrList) };
        inline ProtectedResource& setVbrList(vector<string> && vbrList) { DARABONBA_PTR_SET_RVALUE(vbrList_, vbrList) };


        // vpcList Field Functions 
        bool hasVpcList() const { return this->vpcList_ != nullptr;};
        void deleteVpcList() { this->vpcList_ = nullptr;};
        inline const vector<string> & getVpcList() const { DARABONBA_PTR_GET_CONST(vpcList_, vector<string>) };
        inline vector<string> getVpcList() { DARABONBA_PTR_GET(vpcList_, vector<string>) };
        inline ProtectedResource& setVpcList(const vector<string> & vpcList) { DARABONBA_PTR_SET_VALUE(vpcList_, vpcList) };
        inline ProtectedResource& setVpcList(vector<string> && vpcList) { DARABONBA_PTR_SET_RVALUE(vpcList_, vpcList) };


        // vpnList Field Functions 
        bool hasVpnList() const { return this->vpnList_ != nullptr;};
        void deleteVpnList() { this->vpnList_ = nullptr;};
        inline const vector<string> & getVpnList() const { DARABONBA_PTR_GET_CONST(vpnList_, vector<string>) };
        inline vector<string> getVpnList() { DARABONBA_PTR_GET(vpnList_, vector<string>) };
        inline ProtectedResource& setVpnList(const vector<string> & vpnList) { DARABONBA_PTR_SET_VALUE(vpnList_, vpnList) };
        inline ProtectedResource& setVpnList(vector<string> && vpnList) { DARABONBA_PTR_SET_RVALUE(vpnList_, vpnList) };


      protected:
        // The number of protected resources.
        shared_ptr<int32_t> count_ {};
        // The protected express connect routers.
        shared_ptr<vector<string>> ecrList_ {};
        // The protected peer transit routers.
        shared_ptr<vector<string>> peerTrList_ {};
        // The protected virtual border routers (VBRs).
        shared_ptr<vector<string>> vbrList_ {};
        // The protected VPCs.
        shared_ptr<vector<string>> vpcList_ {};
        // The protected VPN gateways.
        shared_ptr<vector<string>> vpnList_ {};
      };

      class IpsConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpsConfig& obj) { 
          DARABONBA_PTR_TO_JSON(BasicRules, basicRules_);
          DARABONBA_PTR_TO_JSON(EnableAllPatch, enableAllPatch_);
          DARABONBA_PTR_TO_JSON(RuleClass, ruleClass_);
          DARABONBA_PTR_TO_JSON(RunMode, runMode_);
        };
        friend void from_json(const Darabonba::Json& j, IpsConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(BasicRules, basicRules_);
          DARABONBA_PTR_FROM_JSON(EnableAllPatch, enableAllPatch_);
          DARABONBA_PTR_FROM_JSON(RuleClass, ruleClass_);
          DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
        };
        IpsConfig() = default ;
        IpsConfig(const IpsConfig &) = default ;
        IpsConfig(IpsConfig &&) = default ;
        IpsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpsConfig() = default ;
        IpsConfig& operator=(const IpsConfig &) = default ;
        IpsConfig& operator=(IpsConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->basicRules_ == nullptr
        && this->enableAllPatch_ == nullptr && this->ruleClass_ == nullptr && this->runMode_ == nullptr; };
        // basicRules Field Functions 
        bool hasBasicRules() const { return this->basicRules_ != nullptr;};
        void deleteBasicRules() { this->basicRules_ = nullptr;};
        inline int32_t getBasicRules() const { DARABONBA_PTR_GET_DEFAULT(basicRules_, 0) };
        inline IpsConfig& setBasicRules(int32_t basicRules) { DARABONBA_PTR_SET_VALUE(basicRules_, basicRules) };


        // enableAllPatch Field Functions 
        bool hasEnableAllPatch() const { return this->enableAllPatch_ != nullptr;};
        void deleteEnableAllPatch() { this->enableAllPatch_ = nullptr;};
        inline int32_t getEnableAllPatch() const { DARABONBA_PTR_GET_DEFAULT(enableAllPatch_, 0) };
        inline IpsConfig& setEnableAllPatch(int32_t enableAllPatch) { DARABONBA_PTR_SET_VALUE(enableAllPatch_, enableAllPatch) };


        // ruleClass Field Functions 
        bool hasRuleClass() const { return this->ruleClass_ != nullptr;};
        void deleteRuleClass() { this->ruleClass_ = nullptr;};
        inline int32_t getRuleClass() const { DARABONBA_PTR_GET_DEFAULT(ruleClass_, 0) };
        inline IpsConfig& setRuleClass(int32_t ruleClass) { DARABONBA_PTR_SET_VALUE(ruleClass_, ruleClass) };


        // runMode Field Functions 
        bool hasRunMode() const { return this->runMode_ != nullptr;};
        void deleteRunMode() { this->runMode_ = nullptr;};
        inline int32_t getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, 0) };
        inline IpsConfig& setRunMode(int32_t runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


      protected:
        // Indicates whether basic protection is enabled. Valid values:
        // 
        // *   **1**: yes
        // *   **0**: no
        shared_ptr<int32_t> basicRules_ {};
        // Indicates whether virtual patching is enabled. Valid values:
        // 
        // *   **1**: yes
        // *   **0**: no
        shared_ptr<int32_t> enableAllPatch_ {};
        // The level of the rule group for the IPS. Valid values:
        // 
        // *   **1**: loose.
        // *   **2**: medium.
        // *   **3**: strict.
        shared_ptr<int32_t> ruleClass_ {};
        // The mode of the IPS. Valid values:
        // 
        // *   **1**: block mode
        // *   **0**: monitor mode
        shared_ptr<int32_t> runMode_ {};
      };

      class AclConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AclConfig& obj) { 
          DARABONBA_PTR_TO_JSON(StrictMode, strictMode_);
        };
        friend void from_json(const Darabonba::Json& j, AclConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(StrictMode, strictMode_);
        };
        AclConfig() = default ;
        AclConfig(const AclConfig &) = default ;
        AclConfig(AclConfig &&) = default ;
        AclConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AclConfig() = default ;
        AclConfig& operator=(const AclConfig &) = default ;
        AclConfig& operator=(AclConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->strictMode_ == nullptr; };
        // strictMode Field Functions 
        bool hasStrictMode() const { return this->strictMode_ != nullptr;};
        void deleteStrictMode() { this->strictMode_ = nullptr;};
        inline int32_t getStrictMode() const { DARABONBA_PTR_GET_DEFAULT(strictMode_, 0) };
        inline AclConfig& setStrictMode(int32_t strictMode) { DARABONBA_PTR_SET_VALUE(strictMode_, strictMode) };


      protected:
        // Whether to enable strict mode
        // - 1: Enable strict mode
        // - 0: Disable strict mode
        shared_ptr<int32_t> strictMode_ {};
      };

      virtual bool empty() const override { return this->aclConfig_ == nullptr
        && this->cenId_ == nullptr && this->cenName_ == nullptr && this->cloudFirewallVpcOrderType_ == nullptr && this->firewallId_ == nullptr && this->firewallSwitchStatus_ == nullptr
        && this->ipsConfig_ == nullptr && this->ownerId_ == nullptr && this->precheckStatus_ == nullptr && this->protectedResource_ == nullptr && this->regionNo_ == nullptr
        && this->regionStatus_ == nullptr && this->resultCode_ == nullptr && this->routeMode_ == nullptr && this->transitRouterId_ == nullptr && this->unprotectedResource_ == nullptr
        && this->vpcFirewallName_ == nullptr; };
      // aclConfig Field Functions 
      bool hasAclConfig() const { return this->aclConfig_ != nullptr;};
      void deleteAclConfig() { this->aclConfig_ = nullptr;};
      inline const VpcTrFirewalls::AclConfig & getAclConfig() const { DARABONBA_PTR_GET_CONST(aclConfig_, VpcTrFirewalls::AclConfig) };
      inline VpcTrFirewalls::AclConfig getAclConfig() { DARABONBA_PTR_GET(aclConfig_, VpcTrFirewalls::AclConfig) };
      inline VpcTrFirewalls& setAclConfig(const VpcTrFirewalls::AclConfig & aclConfig) { DARABONBA_PTR_SET_VALUE(aclConfig_, aclConfig) };
      inline VpcTrFirewalls& setAclConfig(VpcTrFirewalls::AclConfig && aclConfig) { DARABONBA_PTR_SET_RVALUE(aclConfig_, aclConfig) };


      // cenId Field Functions 
      bool hasCenId() const { return this->cenId_ != nullptr;};
      void deleteCenId() { this->cenId_ = nullptr;};
      inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
      inline VpcTrFirewalls& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


      // cenName Field Functions 
      bool hasCenName() const { return this->cenName_ != nullptr;};
      void deleteCenName() { this->cenName_ = nullptr;};
      inline string getCenName() const { DARABONBA_PTR_GET_DEFAULT(cenName_, "") };
      inline VpcTrFirewalls& setCenName(string cenName) { DARABONBA_PTR_SET_VALUE(cenName_, cenName) };


      // cloudFirewallVpcOrderType Field Functions 
      bool hasCloudFirewallVpcOrderType() const { return this->cloudFirewallVpcOrderType_ != nullptr;};
      void deleteCloudFirewallVpcOrderType() { this->cloudFirewallVpcOrderType_ = nullptr;};
      inline string getCloudFirewallVpcOrderType() const { DARABONBA_PTR_GET_DEFAULT(cloudFirewallVpcOrderType_, "") };
      inline VpcTrFirewalls& setCloudFirewallVpcOrderType(string cloudFirewallVpcOrderType) { DARABONBA_PTR_SET_VALUE(cloudFirewallVpcOrderType_, cloudFirewallVpcOrderType) };


      // firewallId Field Functions 
      bool hasFirewallId() const { return this->firewallId_ != nullptr;};
      void deleteFirewallId() { this->firewallId_ = nullptr;};
      inline string getFirewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
      inline VpcTrFirewalls& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


      // firewallSwitchStatus Field Functions 
      bool hasFirewallSwitchStatus() const { return this->firewallSwitchStatus_ != nullptr;};
      void deleteFirewallSwitchStatus() { this->firewallSwitchStatus_ = nullptr;};
      inline string getFirewallSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitchStatus_, "") };
      inline VpcTrFirewalls& setFirewallSwitchStatus(string firewallSwitchStatus) { DARABONBA_PTR_SET_VALUE(firewallSwitchStatus_, firewallSwitchStatus) };


      // ipsConfig Field Functions 
      bool hasIpsConfig() const { return this->ipsConfig_ != nullptr;};
      void deleteIpsConfig() { this->ipsConfig_ = nullptr;};
      inline const VpcTrFirewalls::IpsConfig & getIpsConfig() const { DARABONBA_PTR_GET_CONST(ipsConfig_, VpcTrFirewalls::IpsConfig) };
      inline VpcTrFirewalls::IpsConfig getIpsConfig() { DARABONBA_PTR_GET(ipsConfig_, VpcTrFirewalls::IpsConfig) };
      inline VpcTrFirewalls& setIpsConfig(const VpcTrFirewalls::IpsConfig & ipsConfig) { DARABONBA_PTR_SET_VALUE(ipsConfig_, ipsConfig) };
      inline VpcTrFirewalls& setIpsConfig(VpcTrFirewalls::IpsConfig && ipsConfig) { DARABONBA_PTR_SET_RVALUE(ipsConfig_, ipsConfig) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
      inline VpcTrFirewalls& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // precheckStatus Field Functions 
      bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
      void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
      inline string getPrecheckStatus() const { DARABONBA_PTR_GET_DEFAULT(precheckStatus_, "") };
      inline VpcTrFirewalls& setPrecheckStatus(string precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };


      // protectedResource Field Functions 
      bool hasProtectedResource() const { return this->protectedResource_ != nullptr;};
      void deleteProtectedResource() { this->protectedResource_ = nullptr;};
      inline const VpcTrFirewalls::ProtectedResource & getProtectedResource() const { DARABONBA_PTR_GET_CONST(protectedResource_, VpcTrFirewalls::ProtectedResource) };
      inline VpcTrFirewalls::ProtectedResource getProtectedResource() { DARABONBA_PTR_GET(protectedResource_, VpcTrFirewalls::ProtectedResource) };
      inline VpcTrFirewalls& setProtectedResource(const VpcTrFirewalls::ProtectedResource & protectedResource) { DARABONBA_PTR_SET_VALUE(protectedResource_, protectedResource) };
      inline VpcTrFirewalls& setProtectedResource(VpcTrFirewalls::ProtectedResource && protectedResource) { DARABONBA_PTR_SET_RVALUE(protectedResource_, protectedResource) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline VpcTrFirewalls& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // regionStatus Field Functions 
      bool hasRegionStatus() const { return this->regionStatus_ != nullptr;};
      void deleteRegionStatus() { this->regionStatus_ = nullptr;};
      inline string getRegionStatus() const { DARABONBA_PTR_GET_DEFAULT(regionStatus_, "") };
      inline VpcTrFirewalls& setRegionStatus(string regionStatus) { DARABONBA_PTR_SET_VALUE(regionStatus_, regionStatus) };


      // resultCode Field Functions 
      bool hasResultCode() const { return this->resultCode_ != nullptr;};
      void deleteResultCode() { this->resultCode_ = nullptr;};
      inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
      inline VpcTrFirewalls& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


      // routeMode Field Functions 
      bool hasRouteMode() const { return this->routeMode_ != nullptr;};
      void deleteRouteMode() { this->routeMode_ = nullptr;};
      inline string getRouteMode() const { DARABONBA_PTR_GET_DEFAULT(routeMode_, "") };
      inline VpcTrFirewalls& setRouteMode(string routeMode) { DARABONBA_PTR_SET_VALUE(routeMode_, routeMode) };


      // transitRouterId Field Functions 
      bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
      void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
      inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
      inline VpcTrFirewalls& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


      // unprotectedResource Field Functions 
      bool hasUnprotectedResource() const { return this->unprotectedResource_ != nullptr;};
      void deleteUnprotectedResource() { this->unprotectedResource_ = nullptr;};
      inline const VpcTrFirewalls::UnprotectedResource & getUnprotectedResource() const { DARABONBA_PTR_GET_CONST(unprotectedResource_, VpcTrFirewalls::UnprotectedResource) };
      inline VpcTrFirewalls::UnprotectedResource getUnprotectedResource() { DARABONBA_PTR_GET(unprotectedResource_, VpcTrFirewalls::UnprotectedResource) };
      inline VpcTrFirewalls& setUnprotectedResource(const VpcTrFirewalls::UnprotectedResource & unprotectedResource) { DARABONBA_PTR_SET_VALUE(unprotectedResource_, unprotectedResource) };
      inline VpcTrFirewalls& setUnprotectedResource(VpcTrFirewalls::UnprotectedResource && unprotectedResource) { DARABONBA_PTR_SET_RVALUE(unprotectedResource_, unprotectedResource) };


      // vpcFirewallName Field Functions 
      bool hasVpcFirewallName() const { return this->vpcFirewallName_ != nullptr;};
      void deleteVpcFirewallName() { this->vpcFirewallName_ = nullptr;};
      inline string getVpcFirewallName() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallName_, "") };
      inline VpcTrFirewalls& setVpcFirewallName(string vpcFirewallName) { DARABONBA_PTR_SET_VALUE(vpcFirewallName_, vpcFirewallName) };


    protected:
      // ACL engine mode.
      shared_ptr<VpcTrFirewalls::AclConfig> aclConfig_ {};
      // The ID of the CEN instance.
      shared_ptr<string> cenId_ {};
      // The name of the CEN instance.
      shared_ptr<string> cenName_ {};
      // The party responsible for the TR fees generated by the VPC firewall. Values:
      // 
      // - **PayByCloudFirewall**: Fees are borne by the Cloud Firewall.
      // - **PayByCenOwner**: Fees are borne by the account to which the CEN instance belongs.
      shared_ptr<string> cloudFirewallVpcOrderType_ {};
      // The instance ID of the VPC firewall.
      shared_ptr<string> firewallId_ {};
      // The status of the VPC firewall. Valid values:
      // 
      // *   **opened**: The VPC firewall is enabled.
      // *   **closed**: The VPC firewall is disabled.
      // *   **notconfigured**: The VPC firewall is not created.
      // *   **configured**: The VPC firewall is created but is not enabled.
      // *   **creating**: The VPC firewall is being created.
      // *   **opening**: The VPC firewall is being enabled.
      // *   **deleting**: The VPC firewall is being deleted.
      // 
      // >  If you do not specify this parameter, VPC firewalls in all states are queried.
      shared_ptr<string> firewallSwitchStatus_ {};
      // The intrusion prevention system (IPS) configurations.
      shared_ptr<VpcTrFirewalls::IpsConfig> ipsConfig_ {};
      // The ID of the Alibaba Cloud account to which the VPC belongs.
      shared_ptr<int64_t> ownerId_ {};
      // Indicates whether the VPC firewall can be automatically enabled. Valid values:
      // 
      // *   **passed**: yes
      // *   **failed**: no
      // *   **unknown**
      shared_ptr<string> precheckStatus_ {};
      // The protected resources.
      shared_ptr<VpcTrFirewalls::ProtectedResource> protectedResource_ {};
      // The region ID of the transit router.
      shared_ptr<string> regionNo_ {};
      // Indicates whether you can create a VPC firewall in a specified region. Valid values:
      // 
      // *   **enable**: yes
      // *   **disable**: no
      shared_ptr<string> regionStatus_ {};
      // The result code of the operation that creates the VPC firewall. Valid values:
      // 
      // *   **RegionDisable**: VPC Firewall is not supported in the region of the network instance. You cannot create a VPC firewall for the network instance.
      // *   **Empty string**: You can create a VPC firewall for the network instance.
      shared_ptr<string> resultCode_ {};
      // The routing mode of the VPC firewall. Valid values:
      // 
      // *   **managed**: automatic mode
      // *   **manual**: manual mode
      shared_ptr<string> routeMode_ {};
      // The ID of the transit router.
      shared_ptr<string> transitRouterId_ {};
      // The unprotected resources.
      shared_ptr<VpcTrFirewalls::UnprotectedResource> unprotectedResource_ {};
      // The instance name of the VPC firewall.
      shared_ptr<string> vpcFirewallName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->vpcTrFirewalls_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTrFirewallsV2ListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeTrFirewallsV2ListResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpcTrFirewalls Field Functions 
    bool hasVpcTrFirewalls() const { return this->vpcTrFirewalls_ != nullptr;};
    void deleteVpcTrFirewalls() { this->vpcTrFirewalls_ = nullptr;};
    inline const vector<DescribeTrFirewallsV2ListResponseBody::VpcTrFirewalls> & getVpcTrFirewalls() const { DARABONBA_PTR_GET_CONST(vpcTrFirewalls_, vector<DescribeTrFirewallsV2ListResponseBody::VpcTrFirewalls>) };
    inline vector<DescribeTrFirewallsV2ListResponseBody::VpcTrFirewalls> getVpcTrFirewalls() { DARABONBA_PTR_GET(vpcTrFirewalls_, vector<DescribeTrFirewallsV2ListResponseBody::VpcTrFirewalls>) };
    inline DescribeTrFirewallsV2ListResponseBody& setVpcTrFirewalls(const vector<DescribeTrFirewallsV2ListResponseBody::VpcTrFirewalls> & vpcTrFirewalls) { DARABONBA_PTR_SET_VALUE(vpcTrFirewalls_, vpcTrFirewalls) };
    inline DescribeTrFirewallsV2ListResponseBody& setVpcTrFirewalls(vector<DescribeTrFirewallsV2ListResponseBody::VpcTrFirewalls> && vpcTrFirewalls) { DARABONBA_PTR_SET_RVALUE(vpcTrFirewalls_, vpcTrFirewalls) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
    // The VPC firewalls.
    shared_ptr<vector<DescribeTrFirewallsV2ListResponseBody::VpcTrFirewalls>> vpcTrFirewalls_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
