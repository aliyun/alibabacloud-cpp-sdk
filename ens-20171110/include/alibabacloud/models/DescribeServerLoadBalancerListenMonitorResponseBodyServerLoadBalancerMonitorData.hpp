// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVERLOADBALANCERLISTENMONITORRESPONSEBODYSERVERLOADBALANCERMONITORDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVERLOADBALANCERLISTENMONITORRESPONSEBODYSERVERLOADBALANCERMONITORDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData& obj) { 
      DARABONBA_PTR_TO_JSON(Acc, acc_);
      DARABONBA_PTR_TO_JSON(BizTime, bizTime_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_TO_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_TO_JSON(Proto, proto_);
      DARABONBA_PTR_TO_JSON(Reqs2xx, reqs2xx_);
      DARABONBA_PTR_TO_JSON(Reqs3xx, reqs3xx_);
      DARABONBA_PTR_TO_JSON(Reqs4xx, reqs4xx_);
      DARABONBA_PTR_TO_JSON(Reqs5xx, reqs5xx_);
      DARABONBA_PTR_TO_JSON(RtAvg, rtAvg_);
      DARABONBA_PTR_TO_JSON(Vip, vip_);
      DARABONBA_PTR_TO_JSON(Vni, vni_);
      DARABONBA_PTR_TO_JSON(Vport, vport_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData& obj) { 
      DARABONBA_PTR_FROM_JSON(Acc, acc_);
      DARABONBA_PTR_FROM_JSON(BizTime, bizTime_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_FROM_JSON(Proto, proto_);
      DARABONBA_PTR_FROM_JSON(Reqs2xx, reqs2xx_);
      DARABONBA_PTR_FROM_JSON(Reqs3xx, reqs3xx_);
      DARABONBA_PTR_FROM_JSON(Reqs4xx, reqs4xx_);
      DARABONBA_PTR_FROM_JSON(Reqs5xx, reqs5xx_);
      DARABONBA_PTR_FROM_JSON(RtAvg, rtAvg_);
      DARABONBA_PTR_FROM_JSON(Vip, vip_);
      DARABONBA_PTR_FROM_JSON(Vni, vni_);
      DARABONBA_PTR_FROM_JSON(Vport, vport_);
    };
    DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData() = default ;
    DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData(const DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData &) = default ;
    DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData(DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData &&) = default ;
    DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData() = default ;
    DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData& operator=(const DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData &) = default ;
    DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData& operator=(DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acc_ != nullptr
        && this->bizTime_ != nullptr && this->ensRegionId_ != nullptr && this->loadBalancerId_ != nullptr && this->loadBalancerName_ != nullptr && this->loadBalancerSpec_ != nullptr
        && this->proto_ != nullptr && this->reqs2xx_ != nullptr && this->reqs3xx_ != nullptr && this->reqs4xx_ != nullptr && this->reqs5xx_ != nullptr
        && this->rtAvg_ != nullptr && this->vip_ != nullptr && this->vni_ != nullptr && this->vport_ != nullptr; };
    // acc Field Functions 
    bool hasAcc() const { return this->acc_ != nullptr;};
    void deleteAcc() { this->acc_ = nullptr;};
    inline int32_t acc() const { DARABONBA_PTR_GET_DEFAULT(acc_, 0) };
    inline DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData& setAcc(int32_t acc) { DARABONBA_PTR_SET_VALUE(acc_, acc) };


    // bizTime Field Functions 
    bool hasBizTime() const { return this->bizTime_ != nullptr;};
    void deleteBizTime() { this->bizTime_ = nullptr;};
    inline string bizTime() const { DARABONBA_PTR_GET_DEFAULT(bizTime_, "") };
    inline DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData& setBizTime(string bizTime) { DARABONBA_PTR_SET_VALUE(bizTime_, bizTime) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string loadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


    // loadBalancerSpec Field Functions 
    bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
    void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
    inline string loadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerSpec_, "") };
    inline DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData& setLoadBalancerSpec(string loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string proto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // reqs2xx Field Functions 
    bool hasReqs2xx() const { return this->reqs2xx_ != nullptr;};
    void deleteReqs2xx() { this->reqs2xx_ = nullptr;};
    inline int32_t reqs2xx() const { DARABONBA_PTR_GET_DEFAULT(reqs2xx_, 0) };
    inline DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData& setReqs2xx(int32_t reqs2xx) { DARABONBA_PTR_SET_VALUE(reqs2xx_, reqs2xx) };


    // reqs3xx Field Functions 
    bool hasReqs3xx() const { return this->reqs3xx_ != nullptr;};
    void deleteReqs3xx() { this->reqs3xx_ = nullptr;};
    inline int32_t reqs3xx() const { DARABONBA_PTR_GET_DEFAULT(reqs3xx_, 0) };
    inline DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData& setReqs3xx(int32_t reqs3xx) { DARABONBA_PTR_SET_VALUE(reqs3xx_, reqs3xx) };


    // reqs4xx Field Functions 
    bool hasReqs4xx() const { return this->reqs4xx_ != nullptr;};
    void deleteReqs4xx() { this->reqs4xx_ = nullptr;};
    inline int32_t reqs4xx() const { DARABONBA_PTR_GET_DEFAULT(reqs4xx_, 0) };
    inline DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData& setReqs4xx(int32_t reqs4xx) { DARABONBA_PTR_SET_VALUE(reqs4xx_, reqs4xx) };


    // reqs5xx Field Functions 
    bool hasReqs5xx() const { return this->reqs5xx_ != nullptr;};
    void deleteReqs5xx() { this->reqs5xx_ = nullptr;};
    inline int32_t reqs5xx() const { DARABONBA_PTR_GET_DEFAULT(reqs5xx_, 0) };
    inline DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData& setReqs5xx(int32_t reqs5xx) { DARABONBA_PTR_SET_VALUE(reqs5xx_, reqs5xx) };


    // rtAvg Field Functions 
    bool hasRtAvg() const { return this->rtAvg_ != nullptr;};
    void deleteRtAvg() { this->rtAvg_ = nullptr;};
    inline int32_t rtAvg() const { DARABONBA_PTR_GET_DEFAULT(rtAvg_, 0) };
    inline DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData& setRtAvg(int32_t rtAvg) { DARABONBA_PTR_SET_VALUE(rtAvg_, rtAvg) };


    // vip Field Functions 
    bool hasVip() const { return this->vip_ != nullptr;};
    void deleteVip() { this->vip_ = nullptr;};
    inline string vip() const { DARABONBA_PTR_GET_DEFAULT(vip_, "") };
    inline DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData& setVip(string vip) { DARABONBA_PTR_SET_VALUE(vip_, vip) };


    // vni Field Functions 
    bool hasVni() const { return this->vni_ != nullptr;};
    void deleteVni() { this->vni_ = nullptr;};
    inline int32_t vni() const { DARABONBA_PTR_GET_DEFAULT(vni_, 0) };
    inline DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData& setVni(int32_t vni) { DARABONBA_PTR_SET_VALUE(vni_, vni) };


    // vport Field Functions 
    bool hasVport() const { return this->vport_ != nullptr;};
    void deleteVport() { this->vport_ = nullptr;};
    inline int32_t vport() const { DARABONBA_PTR_GET_DEFAULT(vport_, 0) };
    inline DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData& setVport(int32_t vport) { DARABONBA_PTR_SET_VALUE(vport_, vport) };


  protected:
    // The total number of requests.
    std::shared_ptr<int32_t> acc_ = nullptr;
    // The business time of the log. Logs are collected every minute.
    std::shared_ptr<string> bizTime_ = nullptr;
    // The ID of the node to which the ELB instance belongs.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The ID of the ELB instance.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The name of the ELB instance.
    std::shared_ptr<string> loadBalancerName_ = nullptr;
    // The specification of the ELB instance.
    std::shared_ptr<string> loadBalancerSpec_ = nullptr;
    // The request protocol, such as http, https, or tcp.
    std::shared_ptr<string> proto_ = nullptr;
    // The number of requests with HTTP 2xx status code returned.
    std::shared_ptr<int32_t> reqs2xx_ = nullptr;
    // The number of requests with HTTP 3xx status code returned.
    std::shared_ptr<int32_t> reqs3xx_ = nullptr;
    // The number of requests with HTTP 4xx status code returned.
    std::shared_ptr<int32_t> reqs4xx_ = nullptr;
    // The number of requests with HTTP 5xx status code returned.
    std::shared_ptr<int32_t> reqs5xx_ = nullptr;
    // The average response time. Unit: milliseconds.
    std::shared_ptr<int32_t> rtAvg_ = nullptr;
    // The VIP of the instance.
    std::shared_ptr<string> vip_ = nullptr;
    // The ID of the tunnel.
    std::shared_ptr<int32_t> vni_ = nullptr;
    // The VIP port, such as 80, 8080, or 443.
    std::shared_ptr<int32_t> vport_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
