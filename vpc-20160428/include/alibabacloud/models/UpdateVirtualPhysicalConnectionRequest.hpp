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
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run without modifying the VLAN ID of the shared Express Connect circuit. The system checks whether required parameters are specified, whether the request format is valid, and whether the instance status is valid. If the check fails, the corresponding error is returned. If the check succeeds, the corresponding request ID is returned.
    // - **false** (default): sends a normal request. After the request passes the check, the VLAN ID of the shared Express Connect circuit is modified.
    shared_ptr<bool> dryRun_ {};
    // The expected bandwidth value of the shared Express Connect circuit. The bandwidth value takes effect only after payment is completed.
    // 
    // Valid values: **50M**, **100M**, **200M**, **300M**, **400M**, **500M**, **1G**, **2G**, **5G**, **8G**, and **10G**.
    // 
    // <props="china">
    // > The bandwidth values **2G**, **5G**, **8G**, and **10G** are not available by default. To use these values, contact your account manager.
    // 
    // <props="intl">
    // > The bandwidth values **2G**, **5G**, **8G**, and **10G** are not available by default. To use these values, contact your account manager.
    // 
    // Unit: **M** indicates Mbit/s and **G** indicates Gbit/s.
    shared_ptr<string> expectSpec_ {};
    // The instance ID of the shared Express Connect circuit.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the shared Express Connect circuit.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // Generate a parameter value from your client to ensure uniqueness across different requests. ClientToken supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> token_ {};
    // The VLAN ID of the shared Express Connect circuit. Valid values: **0** to **2999**.
    // 
    // - If the VLAN ID is **0**, the physical vSwitch port of the Virtual Border Router (VBR) does not use VLAN mode but uses Layer 3 vRouter interface mode. In Layer 3 vRouter interface mode, each Express Connect circuit corresponds to one VBR.
    // - If the VLAN ID is **1** to **2999**, the physical vSwitch port of the VBR uses VLAN-based Layer 3 subinterfaces. In Layer 3 subinterface mode, each VLAN ID corresponds to one VBR. In this case, the Express Connect circuit of the VBR can connect to VPCs under multiple accounts. VBRs in different VLANs have network isolation at Layer 2 and cannot communicate with each other.
    // 
    // This parameter is required.
    shared_ptr<int64_t> vlanId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
