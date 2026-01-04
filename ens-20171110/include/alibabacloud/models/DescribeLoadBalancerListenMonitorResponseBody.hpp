// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeLoadBalancerListenMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerListenMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerMonitorListenData, loadBalancerMonitorListenData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerListenMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerMonitorListenData, loadBalancerMonitorListenData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLoadBalancerListenMonitorResponseBody() = default ;
    DescribeLoadBalancerListenMonitorResponseBody(const DescribeLoadBalancerListenMonitorResponseBody &) = default ;
    DescribeLoadBalancerListenMonitorResponseBody(DescribeLoadBalancerListenMonitorResponseBody &&) = default ;
    DescribeLoadBalancerListenMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerListenMonitorResponseBody() = default ;
    DescribeLoadBalancerListenMonitorResponseBody& operator=(const DescribeLoadBalancerListenMonitorResponseBody &) = default ;
    DescribeLoadBalancerListenMonitorResponseBody& operator=(DescribeLoadBalancerListenMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LoadBalancerMonitorListenData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoadBalancerMonitorListenData& obj) { 
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
      friend void from_json(const Darabonba::Json& j, LoadBalancerMonitorListenData& obj) { 
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
      LoadBalancerMonitorListenData() = default ;
      LoadBalancerMonitorListenData(const LoadBalancerMonitorListenData &) = default ;
      LoadBalancerMonitorListenData(LoadBalancerMonitorListenData &&) = default ;
      LoadBalancerMonitorListenData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoadBalancerMonitorListenData() = default ;
      LoadBalancerMonitorListenData& operator=(const LoadBalancerMonitorListenData &) = default ;
      LoadBalancerMonitorListenData& operator=(LoadBalancerMonitorListenData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actConns_ == nullptr
        && this->bizTime_ == nullptr && this->conns_ == nullptr && this->dropConns_ == nullptr && this->ensRegionId_ == nullptr && this->inActConns_ == nullptr
        && this->inBytes_ == nullptr && this->inDropBytes_ == nullptr && this->inDropPkts_ == nullptr && this->inPkts_ == nullptr && this->inValidRsNum_ == nullptr
        && this->loadBalancerId_ == nullptr && this->outBytes_ == nullptr && this->outDropBytes_ == nullptr && this->outDropPkts_ == nullptr && this->outPkts_ == nullptr
        && this->proto_ == nullptr && this->VPort_ == nullptr && this->validRsNum_ == nullptr && this->vip_ == nullptr && this->vni_ == nullptr; };
      // actConns Field Functions 
      bool hasActConns() const { return this->actConns_ != nullptr;};
      void deleteActConns() { this->actConns_ = nullptr;};
      inline string getActConns() const { DARABONBA_PTR_GET_DEFAULT(actConns_, "") };
      inline LoadBalancerMonitorListenData& setActConns(string actConns) { DARABONBA_PTR_SET_VALUE(actConns_, actConns) };


      // bizTime Field Functions 
      bool hasBizTime() const { return this->bizTime_ != nullptr;};
      void deleteBizTime() { this->bizTime_ = nullptr;};
      inline string getBizTime() const { DARABONBA_PTR_GET_DEFAULT(bizTime_, "") };
      inline LoadBalancerMonitorListenData& setBizTime(string bizTime) { DARABONBA_PTR_SET_VALUE(bizTime_, bizTime) };


      // conns Field Functions 
      bool hasConns() const { return this->conns_ != nullptr;};
      void deleteConns() { this->conns_ = nullptr;};
      inline string getConns() const { DARABONBA_PTR_GET_DEFAULT(conns_, "") };
      inline LoadBalancerMonitorListenData& setConns(string conns) { DARABONBA_PTR_SET_VALUE(conns_, conns) };


      // dropConns Field Functions 
      bool hasDropConns() const { return this->dropConns_ != nullptr;};
      void deleteDropConns() { this->dropConns_ = nullptr;};
      inline string getDropConns() const { DARABONBA_PTR_GET_DEFAULT(dropConns_, "") };
      inline LoadBalancerMonitorListenData& setDropConns(string dropConns) { DARABONBA_PTR_SET_VALUE(dropConns_, dropConns) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline LoadBalancerMonitorListenData& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // inActConns Field Functions 
      bool hasInActConns() const { return this->inActConns_ != nullptr;};
      void deleteInActConns() { this->inActConns_ = nullptr;};
      inline string getInActConns() const { DARABONBA_PTR_GET_DEFAULT(inActConns_, "") };
      inline LoadBalancerMonitorListenData& setInActConns(string inActConns) { DARABONBA_PTR_SET_VALUE(inActConns_, inActConns) };


      // inBytes Field Functions 
      bool hasInBytes() const { return this->inBytes_ != nullptr;};
      void deleteInBytes() { this->inBytes_ = nullptr;};
      inline string getInBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, "") };
      inline LoadBalancerMonitorListenData& setInBytes(string inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


      // inDropBytes Field Functions 
      bool hasInDropBytes() const { return this->inDropBytes_ != nullptr;};
      void deleteInDropBytes() { this->inDropBytes_ = nullptr;};
      inline string getInDropBytes() const { DARABONBA_PTR_GET_DEFAULT(inDropBytes_, "") };
      inline LoadBalancerMonitorListenData& setInDropBytes(string inDropBytes) { DARABONBA_PTR_SET_VALUE(inDropBytes_, inDropBytes) };


      // inDropPkts Field Functions 
      bool hasInDropPkts() const { return this->inDropPkts_ != nullptr;};
      void deleteInDropPkts() { this->inDropPkts_ = nullptr;};
      inline string getInDropPkts() const { DARABONBA_PTR_GET_DEFAULT(inDropPkts_, "") };
      inline LoadBalancerMonitorListenData& setInDropPkts(string inDropPkts) { DARABONBA_PTR_SET_VALUE(inDropPkts_, inDropPkts) };


      // inPkts Field Functions 
      bool hasInPkts() const { return this->inPkts_ != nullptr;};
      void deleteInPkts() { this->inPkts_ = nullptr;};
      inline string getInPkts() const { DARABONBA_PTR_GET_DEFAULT(inPkts_, "") };
      inline LoadBalancerMonitorListenData& setInPkts(string inPkts) { DARABONBA_PTR_SET_VALUE(inPkts_, inPkts) };


      // inValidRsNum Field Functions 
      bool hasInValidRsNum() const { return this->inValidRsNum_ != nullptr;};
      void deleteInValidRsNum() { this->inValidRsNum_ = nullptr;};
      inline string getInValidRsNum() const { DARABONBA_PTR_GET_DEFAULT(inValidRsNum_, "") };
      inline LoadBalancerMonitorListenData& setInValidRsNum(string inValidRsNum) { DARABONBA_PTR_SET_VALUE(inValidRsNum_, inValidRsNum) };


      // loadBalancerId Field Functions 
      bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
      void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
      inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
      inline LoadBalancerMonitorListenData& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


      // outBytes Field Functions 
      bool hasOutBytes() const { return this->outBytes_ != nullptr;};
      void deleteOutBytes() { this->outBytes_ = nullptr;};
      inline string getOutBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, "") };
      inline LoadBalancerMonitorListenData& setOutBytes(string outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


      // outDropBytes Field Functions 
      bool hasOutDropBytes() const { return this->outDropBytes_ != nullptr;};
      void deleteOutDropBytes() { this->outDropBytes_ = nullptr;};
      inline string getOutDropBytes() const { DARABONBA_PTR_GET_DEFAULT(outDropBytes_, "") };
      inline LoadBalancerMonitorListenData& setOutDropBytes(string outDropBytes) { DARABONBA_PTR_SET_VALUE(outDropBytes_, outDropBytes) };


      // outDropPkts Field Functions 
      bool hasOutDropPkts() const { return this->outDropPkts_ != nullptr;};
      void deleteOutDropPkts() { this->outDropPkts_ = nullptr;};
      inline string getOutDropPkts() const { DARABONBA_PTR_GET_DEFAULT(outDropPkts_, "") };
      inline LoadBalancerMonitorListenData& setOutDropPkts(string outDropPkts) { DARABONBA_PTR_SET_VALUE(outDropPkts_, outDropPkts) };


      // outPkts Field Functions 
      bool hasOutPkts() const { return this->outPkts_ != nullptr;};
      void deleteOutPkts() { this->outPkts_ = nullptr;};
      inline string getOutPkts() const { DARABONBA_PTR_GET_DEFAULT(outPkts_, "") };
      inline LoadBalancerMonitorListenData& setOutPkts(string outPkts) { DARABONBA_PTR_SET_VALUE(outPkts_, outPkts) };


      // proto Field Functions 
      bool hasProto() const { return this->proto_ != nullptr;};
      void deleteProto() { this->proto_ = nullptr;};
      inline string getProto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
      inline LoadBalancerMonitorListenData& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


      // VPort Field Functions 
      bool hasVPort() const { return this->VPort_ != nullptr;};
      void deleteVPort() { this->VPort_ = nullptr;};
      inline string getVPort() const { DARABONBA_PTR_GET_DEFAULT(VPort_, "") };
      inline LoadBalancerMonitorListenData& setVPort(string VPort) { DARABONBA_PTR_SET_VALUE(VPort_, VPort) };


      // validRsNum Field Functions 
      bool hasValidRsNum() const { return this->validRsNum_ != nullptr;};
      void deleteValidRsNum() { this->validRsNum_ = nullptr;};
      inline string getValidRsNum() const { DARABONBA_PTR_GET_DEFAULT(validRsNum_, "") };
      inline LoadBalancerMonitorListenData& setValidRsNum(string validRsNum) { DARABONBA_PTR_SET_VALUE(validRsNum_, validRsNum) };


      // vip Field Functions 
      bool hasVip() const { return this->vip_ != nullptr;};
      void deleteVip() { this->vip_ = nullptr;};
      inline string getVip() const { DARABONBA_PTR_GET_DEFAULT(vip_, "") };
      inline LoadBalancerMonitorListenData& setVip(string vip) { DARABONBA_PTR_SET_VALUE(vip_, vip) };


      // vni Field Functions 
      bool hasVni() const { return this->vni_ != nullptr;};
      void deleteVni() { this->vni_ = nullptr;};
      inline string getVni() const { DARABONBA_PTR_GET_DEFAULT(vni_, "") };
      inline LoadBalancerMonitorListenData& setVni(string vni) { DARABONBA_PTR_SET_VALUE(vni_, vni) };


    protected:
      // The number of active connections.
      shared_ptr<string> actConns_ {};
      // The business time.
      shared_ptr<string> bizTime_ {};
      // The number of new connections.
      shared_ptr<string> conns_ {};
      // The number of dropped connections.
      shared_ptr<string> dropConns_ {};
      // The ID of the node to which the ELB instance belongs.
      shared_ptr<string> ensRegionId_ {};
      // The number of inactive connections.
      shared_ptr<string> inActConns_ {};
      // The inbound traffic.
      shared_ptr<string> inBytes_ {};
      // The dropped inbound traffic.
      shared_ptr<string> inDropBytes_ {};
      // The number of dropped inbound packets.
      shared_ptr<string> inDropPkts_ {};
      // The number of inbound packets.
      shared_ptr<string> inPkts_ {};
      // The number of unavailable servers that are attached to the monitored ELB instance.
      shared_ptr<string> inValidRsNum_ {};
      // The ID of the ELB instance.
      shared_ptr<string> loadBalancerId_ {};
      // The outbound traffic.
      shared_ptr<string> outBytes_ {};
      // The dropped outbound traffic.
      shared_ptr<string> outDropBytes_ {};
      // The number of dropped outbound packets.
      shared_ptr<string> outDropPkts_ {};
      // The number of outbound packets.
      shared_ptr<string> outPkts_ {};
      // The network protocol.
      shared_ptr<string> proto_ {};
      // The VIP port of the ELB instance.
      shared_ptr<string> VPort_ {};
      // The number of available servers that are attached to the monitored ELB instance.
      shared_ptr<string> validRsNum_ {};
      // The virtual IP address (VIP) of the instance.
      shared_ptr<string> vip_ {};
      // The ID of the tunnel.
      shared_ptr<string> vni_ {};
    };

    virtual bool empty() const override { return this->loadBalancerMonitorListenData_ == nullptr
        && this->requestId_ == nullptr; };
    // loadBalancerMonitorListenData Field Functions 
    bool hasLoadBalancerMonitorListenData() const { return this->loadBalancerMonitorListenData_ != nullptr;};
    void deleteLoadBalancerMonitorListenData() { this->loadBalancerMonitorListenData_ = nullptr;};
    inline const vector<DescribeLoadBalancerListenMonitorResponseBody::LoadBalancerMonitorListenData> & getLoadBalancerMonitorListenData() const { DARABONBA_PTR_GET_CONST(loadBalancerMonitorListenData_, vector<DescribeLoadBalancerListenMonitorResponseBody::LoadBalancerMonitorListenData>) };
    inline vector<DescribeLoadBalancerListenMonitorResponseBody::LoadBalancerMonitorListenData> getLoadBalancerMonitorListenData() { DARABONBA_PTR_GET(loadBalancerMonitorListenData_, vector<DescribeLoadBalancerListenMonitorResponseBody::LoadBalancerMonitorListenData>) };
    inline DescribeLoadBalancerListenMonitorResponseBody& setLoadBalancerMonitorListenData(const vector<DescribeLoadBalancerListenMonitorResponseBody::LoadBalancerMonitorListenData> & loadBalancerMonitorListenData) { DARABONBA_PTR_SET_VALUE(loadBalancerMonitorListenData_, loadBalancerMonitorListenData) };
    inline DescribeLoadBalancerListenMonitorResponseBody& setLoadBalancerMonitorListenData(vector<DescribeLoadBalancerListenMonitorResponseBody::LoadBalancerMonitorListenData> && loadBalancerMonitorListenData) { DARABONBA_PTR_SET_RVALUE(loadBalancerMonitorListenData_, loadBalancerMonitorListenData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The TCP/UDP monitoring data of the ELB instance.
    shared_ptr<vector<DescribeLoadBalancerListenMonitorResponseBody::LoadBalancerMonitorListenData>> loadBalancerMonitorListenData_ {};
    // Id of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
