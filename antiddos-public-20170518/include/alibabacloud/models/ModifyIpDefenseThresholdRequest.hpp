// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYIPDEFENSETHRESHOLDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYIPDEFENSETHRESHOLDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class ModifyIpDefenseThresholdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyIpDefenseThresholdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IsAuto, isAuto_);
      DARABONBA_PTR_TO_JSON(Pps, pps_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyIpDefenseThresholdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IsAuto, isAuto_);
      DARABONBA_PTR_FROM_JSON(Pps, pps_);
    };
    ModifyIpDefenseThresholdRequest() = default ;
    ModifyIpDefenseThresholdRequest(const ModifyIpDefenseThresholdRequest &) = default ;
    ModifyIpDefenseThresholdRequest(ModifyIpDefenseThresholdRequest &&) = default ;
    ModifyIpDefenseThresholdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyIpDefenseThresholdRequest() = default ;
    ModifyIpDefenseThresholdRequest& operator=(const ModifyIpDefenseThresholdRequest &) = default ;
    ModifyIpDefenseThresholdRequest& operator=(ModifyIpDefenseThresholdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bps_ != nullptr
        && this->ddosRegionId_ != nullptr && this->instanceId_ != nullptr && this->instanceType_ != nullptr && this->internetIp_ != nullptr && this->isAuto_ != nullptr
        && this->pps_ != nullptr; };
    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline int32_t bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0) };
    inline ModifyIpDefenseThresholdRequest& setBps(int32_t bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // ddosRegionId Field Functions 
    bool hasDdosRegionId() const { return this->ddosRegionId_ != nullptr;};
    void deleteDdosRegionId() { this->ddosRegionId_ = nullptr;};
    inline string ddosRegionId() const { DARABONBA_PTR_GET_DEFAULT(ddosRegionId_, "") };
    inline ModifyIpDefenseThresholdRequest& setDdosRegionId(string ddosRegionId) { DARABONBA_PTR_SET_VALUE(ddosRegionId_, ddosRegionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyIpDefenseThresholdRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyIpDefenseThresholdRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ModifyIpDefenseThresholdRequest& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // isAuto Field Functions 
    bool hasIsAuto() const { return this->isAuto_ != nullptr;};
    void deleteIsAuto() { this->isAuto_ = nullptr;};
    inline bool isAuto() const { DARABONBA_PTR_GET_DEFAULT(isAuto_, false) };
    inline ModifyIpDefenseThresholdRequest& setIsAuto(bool isAuto) { DARABONBA_PTR_SET_VALUE(isAuto_, isAuto) };


    // pps Field Functions 
    bool hasPps() const { return this->pps_ != nullptr;};
    void deletePps() { this->pps_ = nullptr;};
    inline int32_t pps() const { DARABONBA_PTR_GET_DEFAULT(pps_, 0) };
    inline ModifyIpDefenseThresholdRequest& setPps(int32_t pps) { DARABONBA_PTR_SET_VALUE(pps_, pps) };


  protected:
    // The traffic scrubbing threshold. Unit: Mbit/s. The traffic scrubbing threshold cannot exceed the peak inbound or outbound Internet traffic, whichever is larger, of the asset. When you modify Bps, Pps is required. Otherwise, Bps does not take effect.
    // 
    // You can use the monitoring tool that is provided by the asset to query the Internet traffic of the asset:
    // 
    // *   If the asset is an ECS instance, see [View instance monitoring information](https://help.aliyun.com/document_detail/25482.html).
    // *   If the asset is an SLB instance, see [View monitoring data](https://help.aliyun.com/document_detail/85982.html).
    // *   If the asset is an EIP, see [View monitoring data](https://help.aliyun.com/document_detail/85354.html).
    std::shared_ptr<int32_t> bps_ = nullptr;
    // The region ID of the asset.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/353250.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> ddosRegionId_ = nullptr;
    // The ID of the asset.
    // 
    // > You can call the [DescribeInstance](https://help.aliyun.com/document_detail/354191.html) operation to query the IDs of ECS instances, SLB instances, and EIPs within the current Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the asset. Valid values:
    // 
    // *   **ecs**: an Elastic Compute Service (ECS) instance.
    // *   **slb**: a Server Load Balancer (SLB) instance.
    // *   **eip**: an elastic IP address (EIP).
    // *   **ipv6**: an IPv6 gateway.
    // *   **swas**: a simple application server.
    // *   **waf**: a Web Application Firewall (WAF) instance of the Exclusive edition.
    // *   **ga_basic**: a Global Accelerator (GA) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The IP address of the asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> internetIp_ = nullptr;
    // Specifies whether to automatically adjust the scrubbing threshold based on the traffic load on the asset. Valid values:
    // 
    // *   **true**: automatically adjusts the scrubbing threshold. You do not need to configure the **Bps** and **Pps** parameters.
    // *   **false**: The scrubbing threshold is not automatically adjusted. You must configure the **Bps** and **Pps** parameters. This is the default value.
    std::shared_ptr<bool> isAuto_ = nullptr;
    // The packet scrubbing threshold. Unit: packets per second (PPS). When you modify Pps, Bps is required. Otherwise, Pps does not take effect.
    // 
    // The packet scrubbing threshold cannot exceed the peak number of inbound or outbound packets, whichever is larger, of the asset. You can use the monitoring tool that is provided by the asset to query the number of packets of the asset:
    // 
    // *   If the asset is an ECS instance, see [View instance monitoring information](https://help.aliyun.com/document_detail/25482.html).
    // *   If the asset is an SLB instance, see [View monitoring data](https://help.aliyun.com/document_detail/85982.html).
    // *   If the asset is an EIP, see [View monitoring data](https://help.aliyun.com/document_detail/85354.html).
    std::shared_ptr<int32_t> pps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
