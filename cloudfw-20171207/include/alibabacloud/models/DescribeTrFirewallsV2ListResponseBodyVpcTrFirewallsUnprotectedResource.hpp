// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2LISTRESPONSEBODYVPCTRFIREWALLSUNPROTECTEDRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2LISTRESPONSEBODYVPCTRFIREWALLSUNPROTECTEDRESOURCE_HPP_
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
  class DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(EcrList, ecrList_);
      DARABONBA_PTR_TO_JSON(PeerTrList, peerTrList_);
      DARABONBA_PTR_TO_JSON(VbrList, vbrList_);
      DARABONBA_PTR_TO_JSON(VpcList, vpcList_);
      DARABONBA_PTR_TO_JSON(VpnList, vpnList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(EcrList, ecrList_);
      DARABONBA_PTR_FROM_JSON(PeerTrList, peerTrList_);
      DARABONBA_PTR_FROM_JSON(VbrList, vbrList_);
      DARABONBA_PTR_FROM_JSON(VpcList, vpcList_);
      DARABONBA_PTR_FROM_JSON(VpnList, vpnList_);
    };
    DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource() = default ;
    DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource(const DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource &) = default ;
    DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource(DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource &&) = default ;
    DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource() = default ;
    DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource& operator=(const DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource &) = default ;
    DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource& operator=(DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->ecrList_ == nullptr && return this->peerTrList_ == nullptr && return this->vbrList_ == nullptr && return this->vpcList_ == nullptr && return this->vpnList_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ecrList Field Functions 
    bool hasEcrList() const { return this->ecrList_ != nullptr;};
    void deleteEcrList() { this->ecrList_ = nullptr;};
    inline const vector<string> & ecrList() const { DARABONBA_PTR_GET_CONST(ecrList_, vector<string>) };
    inline vector<string> ecrList() { DARABONBA_PTR_GET(ecrList_, vector<string>) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource& setEcrList(const vector<string> & ecrList) { DARABONBA_PTR_SET_VALUE(ecrList_, ecrList) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource& setEcrList(vector<string> && ecrList) { DARABONBA_PTR_SET_RVALUE(ecrList_, ecrList) };


    // peerTrList Field Functions 
    bool hasPeerTrList() const { return this->peerTrList_ != nullptr;};
    void deletePeerTrList() { this->peerTrList_ = nullptr;};
    inline const vector<string> & peerTrList() const { DARABONBA_PTR_GET_CONST(peerTrList_, vector<string>) };
    inline vector<string> peerTrList() { DARABONBA_PTR_GET(peerTrList_, vector<string>) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource& setPeerTrList(const vector<string> & peerTrList) { DARABONBA_PTR_SET_VALUE(peerTrList_, peerTrList) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource& setPeerTrList(vector<string> && peerTrList) { DARABONBA_PTR_SET_RVALUE(peerTrList_, peerTrList) };


    // vbrList Field Functions 
    bool hasVbrList() const { return this->vbrList_ != nullptr;};
    void deleteVbrList() { this->vbrList_ = nullptr;};
    inline const vector<string> & vbrList() const { DARABONBA_PTR_GET_CONST(vbrList_, vector<string>) };
    inline vector<string> vbrList() { DARABONBA_PTR_GET(vbrList_, vector<string>) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource& setVbrList(const vector<string> & vbrList) { DARABONBA_PTR_SET_VALUE(vbrList_, vbrList) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource& setVbrList(vector<string> && vbrList) { DARABONBA_PTR_SET_RVALUE(vbrList_, vbrList) };


    // vpcList Field Functions 
    bool hasVpcList() const { return this->vpcList_ != nullptr;};
    void deleteVpcList() { this->vpcList_ = nullptr;};
    inline const vector<string> & vpcList() const { DARABONBA_PTR_GET_CONST(vpcList_, vector<string>) };
    inline vector<string> vpcList() { DARABONBA_PTR_GET(vpcList_, vector<string>) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource& setVpcList(const vector<string> & vpcList) { DARABONBA_PTR_SET_VALUE(vpcList_, vpcList) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource& setVpcList(vector<string> && vpcList) { DARABONBA_PTR_SET_RVALUE(vpcList_, vpcList) };


    // vpnList Field Functions 
    bool hasVpnList() const { return this->vpnList_ != nullptr;};
    void deleteVpnList() { this->vpnList_ = nullptr;};
    inline const vector<string> & vpnList() const { DARABONBA_PTR_GET_CONST(vpnList_, vector<string>) };
    inline vector<string> vpnList() { DARABONBA_PTR_GET(vpnList_, vector<string>) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource& setVpnList(const vector<string> & vpnList) { DARABONBA_PTR_SET_VALUE(vpnList_, vpnList) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource& setVpnList(vector<string> && vpnList) { DARABONBA_PTR_SET_RVALUE(vpnList_, vpnList) };


  protected:
    // The number of unprotected resources.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The unprotected express connect routers.
    std::shared_ptr<vector<string>> ecrList_ = nullptr;
    // The unprotected peer transit routers.
    std::shared_ptr<vector<string>> peerTrList_ = nullptr;
    // The unprotected VBRs.
    std::shared_ptr<vector<string>> vbrList_ = nullptr;
    // The unprotected VPCs.
    std::shared_ptr<vector<string>> vpcList_ = nullptr;
    // The unprotected VPN gateways.
    std::shared_ptr<vector<string>> vpnList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
