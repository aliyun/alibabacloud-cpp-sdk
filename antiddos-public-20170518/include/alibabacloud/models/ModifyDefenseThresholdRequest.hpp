// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEFENSETHRESHOLDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEFENSETHRESHOLDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class ModifyDefenseThresholdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDefenseThresholdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IsAuto, isAuto_);
      DARABONBA_PTR_TO_JSON(Pps, pps_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDefenseThresholdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IsAuto, isAuto_);
      DARABONBA_PTR_FROM_JSON(Pps, pps_);
    };
    ModifyDefenseThresholdRequest() = default ;
    ModifyDefenseThresholdRequest(const ModifyDefenseThresholdRequest &) = default ;
    ModifyDefenseThresholdRequest(ModifyDefenseThresholdRequest &&) = default ;
    ModifyDefenseThresholdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDefenseThresholdRequest() = default ;
    ModifyDefenseThresholdRequest& operator=(const ModifyDefenseThresholdRequest &) = default ;
    ModifyDefenseThresholdRequest& operator=(ModifyDefenseThresholdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bps_ == nullptr
        && this->clientToken_ == nullptr && this->ddosRegionId_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->internetIp_ == nullptr
        && this->isAuto_ == nullptr && this->pps_ == nullptr; };
    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline int32_t getBps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0) };
    inline ModifyDefenseThresholdRequest& setBps(int32_t bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDefenseThresholdRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ddosRegionId Field Functions 
    bool hasDdosRegionId() const { return this->ddosRegionId_ != nullptr;};
    void deleteDdosRegionId() { this->ddosRegionId_ = nullptr;};
    inline string getDdosRegionId() const { DARABONBA_PTR_GET_DEFAULT(ddosRegionId_, "") };
    inline ModifyDefenseThresholdRequest& setDdosRegionId(string ddosRegionId) { DARABONBA_PTR_SET_VALUE(ddosRegionId_, ddosRegionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyDefenseThresholdRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyDefenseThresholdRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ModifyDefenseThresholdRequest& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // isAuto Field Functions 
    bool hasIsAuto() const { return this->isAuto_ != nullptr;};
    void deleteIsAuto() { this->isAuto_ = nullptr;};
    inline bool getIsAuto() const { DARABONBA_PTR_GET_DEFAULT(isAuto_, false) };
    inline ModifyDefenseThresholdRequest& setIsAuto(bool isAuto) { DARABONBA_PTR_SET_VALUE(isAuto_, isAuto) };


    // pps Field Functions 
    bool hasPps() const { return this->pps_ != nullptr;};
    void deletePps() { this->pps_ = nullptr;};
    inline int32_t getPps() const { DARABONBA_PTR_GET_DEFAULT(pps_, 0) };
    inline ModifyDefenseThresholdRequest& setPps(int32_t pps) { DARABONBA_PTR_SET_VALUE(pps_, pps) };


  protected:
    // The scrubbing threshold for traffic in Mbps. This value cannot exceed the peak public network traffic of the instance. If you specify Bps, you must also specify Pps. Otherwise, the change does not take effect.
    // 
    // Use the monitoring tools of your instance to query its public network traffic:
    // 
    // - For an ECS instance, see [View instance monitoring information](https://help.aliyun.com/document_detail/25482.html).
    // 
    // - For an SLB instance, see [View monitoring data](https://help.aliyun.com/document_detail/85982.html).
    // 
    // <props="china">
    // 
    // - For an EIP instance, see [View monitoring data](https://help.aliyun.com/document_detail/85354.html).
    shared_ptr<int32_t> bps_ {};
    shared_ptr<string> clientToken_ {};
    // The region ID of the asset that is assigned a public IP address.
    // 
    // > Call [DescribeRegions](https://help.aliyun.com/document_detail/353250.html) to query all region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> ddosRegionId_ {};
    // The instance ID of the asset that is assigned a public IP address.
    // 
    // > Call [DescribeInstance](https://help.aliyun.com/document_detail/354191.html) to query the IDs of the ECS, SLB, and EIP instances that belong to your Alibaba Cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The instance type of the asset that is assigned a public IP address. Valid values:
    // 
    // - **ecs**: Elastic Compute Service (ECS) instance.
    // 
    // - **slb**: Server Load Balancer (SLB) instance.
    // 
    // - **eip**: Elastic IP Address (EIP) instance.
    // 
    // - **ipv6**: IPv6 Gateway instance.
    // 
    // - **swas**: simple application server instance.
    // 
    // - **waf**: dedicated Web Application Firewall (WAF) instance.
    // 
    // - **ga_basic**: basic Global Accelerator (GA) instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceType_ {};
    // The public IP address of the asset.
    shared_ptr<string> internetIp_ {};
    // Specifies whether to automatically adjust the scrubbing threshold based on the traffic loads of the instance. Valid values:
    // 
    // - **true**: The scrubbing threshold is automatically adjusted. You do not need to set the **Bps** and **Pps** parameters.
    // 
    // - **false**: The scrubbing threshold is not automatically adjusted. You must set the **Bps** and **Pps** parameters.
    // 
    // Default value: false
    shared_ptr<bool> isAuto_ {};
    // The scrubbing threshold for packets per second (pps). This value cannot exceed the peak packet traffic of the instance. If you specify Pps, you must also specify Bps. Otherwise, the change does not take effect.
    // 
    // Use the monitoring tools of your instance to query its packet traffic:
    // 
    // - For an ECS instance, see [View instance monitoring information](https://help.aliyun.com/document_detail/25482.html).
    // 
    // - For an SLB instance, see [View monitoring data](https://help.aliyun.com/document_detail/85982.html).
    // 
    // <props="china">
    // 
    // - For an EIP instance, see [View monitoring data](https://help.aliyun.com/document_detail/85354.html).
    shared_ptr<int32_t> pps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
