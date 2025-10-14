// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENMONITORRESPONSEBODYLOADBALANCERMONITORLISTENDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENMONITORRESPONSEBODYLOADBALANCERMONITORLISTENDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& obj) { 
      DARABONBA_PTR_TO_JSON(ActConns, actConns_);
      DARABONBA_PTR_TO_JSON(BizTime, bizTime_);
      DARABONBA_PTR_TO_JSON(Conns, conns_);
      DARABONBA_PTR_TO_JSON(DropConns, dropConns_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(InActConns, inActConns_);
      DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
      DARABONBA_PTR_TO_JSON(InDropBytes, inDropBytes_);
      DARABONBA_PTR_TO_JSON(InDropPkts, inDropPkts_);
      DARABONBA_PTR_TO_JSON(InPkts, inPkts_);
      DARABONBA_PTR_TO_JSON(InValidRsNum, inValidRsNum_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_TO_JSON(OutDropBytes, outDropBytes_);
      DARABONBA_PTR_TO_JSON(OutDropPkts, outDropPkts_);
      DARABONBA_PTR_TO_JSON(OutPkts, outPkts_);
      DARABONBA_PTR_TO_JSON(Proto, proto_);
      DARABONBA_PTR_TO_JSON(VPort, VPort_);
      DARABONBA_PTR_TO_JSON(ValidRsNum, validRsNum_);
      DARABONBA_PTR_TO_JSON(Vip, vip_);
      DARABONBA_PTR_TO_JSON(Vni, vni_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActConns, actConns_);
      DARABONBA_PTR_FROM_JSON(BizTime, bizTime_);
      DARABONBA_PTR_FROM_JSON(Conns, conns_);
      DARABONBA_PTR_FROM_JSON(DropConns, dropConns_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(InActConns, inActConns_);
      DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
      DARABONBA_PTR_FROM_JSON(InDropBytes, inDropBytes_);
      DARABONBA_PTR_FROM_JSON(InDropPkts, inDropPkts_);
      DARABONBA_PTR_FROM_JSON(InPkts, inPkts_);
      DARABONBA_PTR_FROM_JSON(InValidRsNum, inValidRsNum_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_FROM_JSON(OutDropBytes, outDropBytes_);
      DARABONBA_PTR_FROM_JSON(OutDropPkts, outDropPkts_);
      DARABONBA_PTR_FROM_JSON(OutPkts, outPkts_);
      DARABONBA_PTR_FROM_JSON(Proto, proto_);
      DARABONBA_PTR_FROM_JSON(VPort, VPort_);
      DARABONBA_PTR_FROM_JSON(ValidRsNum, validRsNum_);
      DARABONBA_PTR_FROM_JSON(Vip, vip_);
      DARABONBA_PTR_FROM_JSON(Vni, vni_);
    };
    DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData() = default ;
    DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData(const DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData &) = default ;
    DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData(DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData &&) = default ;
    DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData() = default ;
    DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& operator=(const DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData &) = default ;
    DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& operator=(DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actConns_ == nullptr
        && return this->bizTime_ == nullptr && return this->conns_ == nullptr && return this->dropConns_ == nullptr && return this->ensRegionId_ == nullptr && return this->inActConns_ == nullptr
        && return this->inBytes_ == nullptr && return this->inDropBytes_ == nullptr && return this->inDropPkts_ == nullptr && return this->inPkts_ == nullptr && return this->inValidRsNum_ == nullptr
        && return this->loadBalancerId_ == nullptr && return this->outBytes_ == nullptr && return this->outDropBytes_ == nullptr && return this->outDropPkts_ == nullptr && return this->outPkts_ == nullptr
        && return this->proto_ == nullptr && return this->VPort_ == nullptr && return this->validRsNum_ == nullptr && return this->vip_ == nullptr && return this->vni_ == nullptr; };
    // actConns Field Functions 
    bool hasActConns() const { return this->actConns_ != nullptr;};
    void deleteActConns() { this->actConns_ = nullptr;};
    inline string actConns() const { DARABONBA_PTR_GET_DEFAULT(actConns_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setActConns(string actConns) { DARABONBA_PTR_SET_VALUE(actConns_, actConns) };


    // bizTime Field Functions 
    bool hasBizTime() const { return this->bizTime_ != nullptr;};
    void deleteBizTime() { this->bizTime_ = nullptr;};
    inline string bizTime() const { DARABONBA_PTR_GET_DEFAULT(bizTime_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setBizTime(string bizTime) { DARABONBA_PTR_SET_VALUE(bizTime_, bizTime) };


    // conns Field Functions 
    bool hasConns() const { return this->conns_ != nullptr;};
    void deleteConns() { this->conns_ = nullptr;};
    inline string conns() const { DARABONBA_PTR_GET_DEFAULT(conns_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setConns(string conns) { DARABONBA_PTR_SET_VALUE(conns_, conns) };


    // dropConns Field Functions 
    bool hasDropConns() const { return this->dropConns_ != nullptr;};
    void deleteDropConns() { this->dropConns_ = nullptr;};
    inline string dropConns() const { DARABONBA_PTR_GET_DEFAULT(dropConns_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setDropConns(string dropConns) { DARABONBA_PTR_SET_VALUE(dropConns_, dropConns) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // inActConns Field Functions 
    bool hasInActConns() const { return this->inActConns_ != nullptr;};
    void deleteInActConns() { this->inActConns_ = nullptr;};
    inline string inActConns() const { DARABONBA_PTR_GET_DEFAULT(inActConns_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setInActConns(string inActConns) { DARABONBA_PTR_SET_VALUE(inActConns_, inActConns) };


    // inBytes Field Functions 
    bool hasInBytes() const { return this->inBytes_ != nullptr;};
    void deleteInBytes() { this->inBytes_ = nullptr;};
    inline string inBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setInBytes(string inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


    // inDropBytes Field Functions 
    bool hasInDropBytes() const { return this->inDropBytes_ != nullptr;};
    void deleteInDropBytes() { this->inDropBytes_ = nullptr;};
    inline string inDropBytes() const { DARABONBA_PTR_GET_DEFAULT(inDropBytes_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setInDropBytes(string inDropBytes) { DARABONBA_PTR_SET_VALUE(inDropBytes_, inDropBytes) };


    // inDropPkts Field Functions 
    bool hasInDropPkts() const { return this->inDropPkts_ != nullptr;};
    void deleteInDropPkts() { this->inDropPkts_ = nullptr;};
    inline string inDropPkts() const { DARABONBA_PTR_GET_DEFAULT(inDropPkts_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setInDropPkts(string inDropPkts) { DARABONBA_PTR_SET_VALUE(inDropPkts_, inDropPkts) };


    // inPkts Field Functions 
    bool hasInPkts() const { return this->inPkts_ != nullptr;};
    void deleteInPkts() { this->inPkts_ = nullptr;};
    inline string inPkts() const { DARABONBA_PTR_GET_DEFAULT(inPkts_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setInPkts(string inPkts) { DARABONBA_PTR_SET_VALUE(inPkts_, inPkts) };


    // inValidRsNum Field Functions 
    bool hasInValidRsNum() const { return this->inValidRsNum_ != nullptr;};
    void deleteInValidRsNum() { this->inValidRsNum_ = nullptr;};
    inline string inValidRsNum() const { DARABONBA_PTR_GET_DEFAULT(inValidRsNum_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setInValidRsNum(string inValidRsNum) { DARABONBA_PTR_SET_VALUE(inValidRsNum_, inValidRsNum) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // outBytes Field Functions 
    bool hasOutBytes() const { return this->outBytes_ != nullptr;};
    void deleteOutBytes() { this->outBytes_ = nullptr;};
    inline string outBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setOutBytes(string outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


    // outDropBytes Field Functions 
    bool hasOutDropBytes() const { return this->outDropBytes_ != nullptr;};
    void deleteOutDropBytes() { this->outDropBytes_ = nullptr;};
    inline string outDropBytes() const { DARABONBA_PTR_GET_DEFAULT(outDropBytes_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setOutDropBytes(string outDropBytes) { DARABONBA_PTR_SET_VALUE(outDropBytes_, outDropBytes) };


    // outDropPkts Field Functions 
    bool hasOutDropPkts() const { return this->outDropPkts_ != nullptr;};
    void deleteOutDropPkts() { this->outDropPkts_ = nullptr;};
    inline string outDropPkts() const { DARABONBA_PTR_GET_DEFAULT(outDropPkts_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setOutDropPkts(string outDropPkts) { DARABONBA_PTR_SET_VALUE(outDropPkts_, outDropPkts) };


    // outPkts Field Functions 
    bool hasOutPkts() const { return this->outPkts_ != nullptr;};
    void deleteOutPkts() { this->outPkts_ = nullptr;};
    inline string outPkts() const { DARABONBA_PTR_GET_DEFAULT(outPkts_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setOutPkts(string outPkts) { DARABONBA_PTR_SET_VALUE(outPkts_, outPkts) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string proto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // VPort Field Functions 
    bool hasVPort() const { return this->VPort_ != nullptr;};
    void deleteVPort() { this->VPort_ = nullptr;};
    inline string VPort() const { DARABONBA_PTR_GET_DEFAULT(VPort_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setVPort(string VPort) { DARABONBA_PTR_SET_VALUE(VPort_, VPort) };


    // validRsNum Field Functions 
    bool hasValidRsNum() const { return this->validRsNum_ != nullptr;};
    void deleteValidRsNum() { this->validRsNum_ = nullptr;};
    inline string validRsNum() const { DARABONBA_PTR_GET_DEFAULT(validRsNum_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setValidRsNum(string validRsNum) { DARABONBA_PTR_SET_VALUE(validRsNum_, validRsNum) };


    // vip Field Functions 
    bool hasVip() const { return this->vip_ != nullptr;};
    void deleteVip() { this->vip_ = nullptr;};
    inline string vip() const { DARABONBA_PTR_GET_DEFAULT(vip_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setVip(string vip) { DARABONBA_PTR_SET_VALUE(vip_, vip) };


    // vni Field Functions 
    bool hasVni() const { return this->vni_ != nullptr;};
    void deleteVni() { this->vni_ = nullptr;};
    inline string vni() const { DARABONBA_PTR_GET_DEFAULT(vni_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData& setVni(string vni) { DARABONBA_PTR_SET_VALUE(vni_, vni) };


  protected:
    // The number of active connections.
    std::shared_ptr<string> actConns_ = nullptr;
    // The business time.
    std::shared_ptr<string> bizTime_ = nullptr;
    // The number of new connections.
    std::shared_ptr<string> conns_ = nullptr;
    // The number of dropped connections.
    std::shared_ptr<string> dropConns_ = nullptr;
    // The ID of the node to which the ELB instance belongs.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The number of inactive connections.
    std::shared_ptr<string> inActConns_ = nullptr;
    // The inbound traffic.
    std::shared_ptr<string> inBytes_ = nullptr;
    // The dropped inbound traffic.
    std::shared_ptr<string> inDropBytes_ = nullptr;
    // The number of dropped inbound packets.
    std::shared_ptr<string> inDropPkts_ = nullptr;
    // The number of inbound packets.
    std::shared_ptr<string> inPkts_ = nullptr;
    // The number of unavailable servers that are attached to the monitored ELB instance.
    std::shared_ptr<string> inValidRsNum_ = nullptr;
    // The ID of the ELB instance.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The outbound traffic.
    std::shared_ptr<string> outBytes_ = nullptr;
    // The dropped outbound traffic.
    std::shared_ptr<string> outDropBytes_ = nullptr;
    // The number of dropped outbound packets.
    std::shared_ptr<string> outDropPkts_ = nullptr;
    // The number of outbound packets.
    std::shared_ptr<string> outPkts_ = nullptr;
    // The network protocol.
    std::shared_ptr<string> proto_ = nullptr;
    // The VIP port of the ELB instance.
    std::shared_ptr<string> VPort_ = nullptr;
    // The number of available servers that are attached to the monitored ELB instance.
    std::shared_ptr<string> validRsNum_ = nullptr;
    // The virtual IP address (VIP) of the instance.
    std::shared_ptr<string> vip_ = nullptr;
    // The ID of the tunnel.
    std::shared_ptr<string> vni_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
