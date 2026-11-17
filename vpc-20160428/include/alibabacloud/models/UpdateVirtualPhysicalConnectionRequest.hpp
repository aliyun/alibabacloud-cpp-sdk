// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVIRTUALPHYSICALCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVIRTUALPHYSICALCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class UpdateVirtualPhysicalConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVirtualPhysicalConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ExpectSpec, expectSpec_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVirtualPhysicalConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(ExpectSpec, expectSpec_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
    };
    UpdateVirtualPhysicalConnectionRequest() = default ;
    UpdateVirtualPhysicalConnectionRequest(const UpdateVirtualPhysicalConnectionRequest &) = default ;
    UpdateVirtualPhysicalConnectionRequest(UpdateVirtualPhysicalConnectionRequest &&) = default ;
    UpdateVirtualPhysicalConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVirtualPhysicalConnectionRequest() = default ;
    UpdateVirtualPhysicalConnectionRequest& operator=(const UpdateVirtualPhysicalConnectionRequest &) = default ;
    UpdateVirtualPhysicalConnectionRequest& operator=(UpdateVirtualPhysicalConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->expectSpec_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->token_ == nullptr && this->vlanId_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateVirtualPhysicalConnectionRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // expectSpec Field Functions 
    bool hasExpectSpec() const { return this->expectSpec_ != nullptr;};
    void deleteExpectSpec() { this->expectSpec_ = nullptr;};
    inline string getExpectSpec() const { DARABONBA_PTR_GET_DEFAULT(expectSpec_, "") };
    inline UpdateVirtualPhysicalConnectionRequest& setExpectSpec(string expectSpec) { DARABONBA_PTR_SET_VALUE(expectSpec_, expectSpec) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateVirtualPhysicalConnectionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateVirtualPhysicalConnectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline UpdateVirtualPhysicalConnectionRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // vlanId Field Functions 
    bool hasVlanId() const { return this->vlanId_ != nullptr;};
    void deleteVlanId() { this->vlanId_ = nullptr;};
    inline int64_t getVlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, 0L) };
    inline UpdateVirtualPhysicalConnectionRequest& setVlanId(int64_t vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


  protected:
    // Specifies whether to only perform a dry run for the request. Valid values:
    // 
    // - **true**: The system performs a dry run without modifying the VLAN ID of the shared Express Connect circuit. The system checks whether the required parameters are specified, the request format, and the instance status. If the request fails the dry run, the corresponding error is returned. If the request passes the dry run, the corresponding request ID is returned.
    // - **false** (default): The system sends a normal request. After the request passes the dry run, the VLAN ID of the shared Express Connect circuit is modified.
    shared_ptr<bool> dryRun_ {};
    // The expected bandwidth of the shared Express Connect circuit. The bandwidth takes effect only after the payment is completed.
    // 
    // Valid values: **50M**, **100M**, **200M**, **300M**, **400M**, **500M**, **1G**, **2G**, **5G**, **8G**, and **10G**.
    // 
    // <props="china">
    // > The bandwidth values of **2G**, **5G**, **8G**, and **10G** are not available by default. To use these values, contact your account manager.
    // 
    // <props="intl">
    // > The bandwidth values of **2G**, **5G**, **8G**, and **10G** are not available by default. To use these values, contact your account manager.
    // 
    // Unit: **M** indicates Mbps, and **G** indicates Gbps.
    shared_ptr<string> expectSpec_ {};
    // The instance ID of the shared Express Connect circuit.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the shared Express Connect circuit.
    // 
    // You can invoke the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> token_ {};
    // The VLAN ID of the shared Express Connect circuit. Valid values: **0** to **2999**.
    // 
    // - A value of **0** specifies that the physical vSwitch port of the Virtual Border Router (VBR), which acts as a vRouter, does not use the VLAN mode, but uses the Layer 3 routing interface mode. In the Layer 3 routing interface mode, each Express Connect circuit corresponds to one VBR.
    // - A value of **1** to **2999** specifies that the physical vSwitch port of the VBR uses a VLAN-based Layer 3 subinterface. In the Layer 3 subinterface mode, each VLAN ID corresponds to one VBR. In this case, the Express Connect circuit of the VBR can be used to connect VPCs that belong to different Alibaba Cloud accounts. Layer 2 network isolation is implemented for VBRs in different VLANs, and they cannot communicate with each other.
    // 
    // This parameter is required.
    shared_ptr<int64_t> vlanId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
