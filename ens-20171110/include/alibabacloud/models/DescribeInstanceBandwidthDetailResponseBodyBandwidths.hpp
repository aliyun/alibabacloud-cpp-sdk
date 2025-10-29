// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEBANDWIDTHDETAILRESPONSEBODYBANDWIDTHS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEBANDWIDTHDETAILRESPONSEBODYBANDWIDTHS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceBandwidthDetailResponseBodyBandwidths : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceBandwidthDetailResponseBodyBandwidths& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(BizTime, bizTime_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(FlowType, flowType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(RxBw, rxBw_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(TxBw, txBw_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceBandwidthDetailResponseBodyBandwidths& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(BizTime, bizTime_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(FlowType, flowType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(RxBw, rxBw_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(TxBw, txBw_);
    };
    DescribeInstanceBandwidthDetailResponseBodyBandwidths() = default ;
    DescribeInstanceBandwidthDetailResponseBodyBandwidths(const DescribeInstanceBandwidthDetailResponseBodyBandwidths &) = default ;
    DescribeInstanceBandwidthDetailResponseBodyBandwidths(DescribeInstanceBandwidthDetailResponseBodyBandwidths &&) = default ;
    DescribeInstanceBandwidthDetailResponseBodyBandwidths(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceBandwidthDetailResponseBodyBandwidths() = default ;
    DescribeInstanceBandwidthDetailResponseBodyBandwidths& operator=(const DescribeInstanceBandwidthDetailResponseBodyBandwidths &) = default ;
    DescribeInstanceBandwidthDetailResponseBodyBandwidths& operator=(DescribeInstanceBandwidthDetailResponseBodyBandwidths &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->bizTime_ == nullptr && return this->ensRegionId_ == nullptr && return this->flowType_ == nullptr && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr
        && return this->ip_ == nullptr && return this->isp_ == nullptr && return this->rxBw_ == nullptr && return this->serviceType_ == nullptr && return this->txBw_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeInstanceBandwidthDetailResponseBodyBandwidths& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // bizTime Field Functions 
    bool hasBizTime() const { return this->bizTime_ != nullptr;};
    void deleteBizTime() { this->bizTime_ = nullptr;};
    inline string bizTime() const { DARABONBA_PTR_GET_DEFAULT(bizTime_, "") };
    inline DescribeInstanceBandwidthDetailResponseBodyBandwidths& setBizTime(string bizTime) { DARABONBA_PTR_SET_VALUE(bizTime_, bizTime) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeInstanceBandwidthDetailResponseBodyBandwidths& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // flowType Field Functions 
    bool hasFlowType() const { return this->flowType_ != nullptr;};
    void deleteFlowType() { this->flowType_ = nullptr;};
    inline int32_t flowType() const { DARABONBA_PTR_GET_DEFAULT(flowType_, 0) };
    inline DescribeInstanceBandwidthDetailResponseBodyBandwidths& setFlowType(int32_t flowType) { DARABONBA_PTR_SET_VALUE(flowType_, flowType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceBandwidthDetailResponseBodyBandwidths& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeInstanceBandwidthDetailResponseBodyBandwidths& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeInstanceBandwidthDetailResponseBodyBandwidths& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeInstanceBandwidthDetailResponseBodyBandwidths& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // rxBw Field Functions 
    bool hasRxBw() const { return this->rxBw_ != nullptr;};
    void deleteRxBw() { this->rxBw_ = nullptr;};
    inline int64_t rxBw() const { DARABONBA_PTR_GET_DEFAULT(rxBw_, 0L) };
    inline DescribeInstanceBandwidthDetailResponseBodyBandwidths& setRxBw(int64_t rxBw) { DARABONBA_PTR_SET_VALUE(rxBw_, rxBw) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline DescribeInstanceBandwidthDetailResponseBodyBandwidths& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // txBw Field Functions 
    bool hasTxBw() const { return this->txBw_ != nullptr;};
    void deleteTxBw() { this->txBw_ = nullptr;};
    inline int64_t txBw() const { DARABONBA_PTR_GET_DEFAULT(txBw_, 0L) };
    inline DescribeInstanceBandwidthDetailResponseBodyBandwidths& setTxBw(int64_t txBw) { DARABONBA_PTR_SET_VALUE(txBw_, txBw) };


  protected:
    // The user ID.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The bandwidth service time. The data granularity is 5 minutes.
    std::shared_ptr<string> bizTime_ = nullptr;
    // The node ID.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The type of the bandwidth. Valid values: 1, which indicates public network bandwidth. 2, which indicates internal network bandwidth.
    std::shared_ptr<int32_t> flowType_ = nullptr;
    // The plan ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the instance, such as vm, eip, single_tenant, and nc.
    std::shared_ptr<string> instanceType_ = nullptr;
    // null
    std::shared_ptr<string> ip_ = nullptr;
    // The Internet service provider to which the IP address belongs.
    std::shared_ptr<string> isp_ = nullptr;
    // null
    std::shared_ptr<int64_t> rxBw_ = nullptr;
    // The type of the service, such as vm, eip, esk, and meta.
    std::shared_ptr<string> serviceType_ = nullptr;
    // null
    std::shared_ptr<int64_t> txBw_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
