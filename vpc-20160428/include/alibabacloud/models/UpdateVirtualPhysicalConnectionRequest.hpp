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
    virtual bool empty() const override { this->dryRun_ != nullptr
        && this->expectSpec_ != nullptr && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->token_ != nullptr && this->vlanId_ != nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateVirtualPhysicalConnectionRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // expectSpec Field Functions 
    bool hasExpectSpec() const { return this->expectSpec_ != nullptr;};
    void deleteExpectSpec() { this->expectSpec_ = nullptr;};
    inline string expectSpec() const { DARABONBA_PTR_GET_DEFAULT(expectSpec_, "") };
    inline UpdateVirtualPhysicalConnectionRequest& setExpectSpec(string expectSpec) { DARABONBA_PTR_SET_VALUE(expectSpec_, expectSpec) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateVirtualPhysicalConnectionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateVirtualPhysicalConnectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline UpdateVirtualPhysicalConnectionRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // vlanId Field Functions 
    bool hasVlanId() const { return this->vlanId_ != nullptr;};
    void deleteVlanId() { this->vlanId_ = nullptr;};
    inline int64_t vlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, 0L) };
    inline UpdateVirtualPhysicalConnectionRequest& setVlanId(int64_t vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


  protected:
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values: Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including required parameters, request syntax, and instance status. If the request fails to pass the dry run, an error message is returned. If the request passes the dry run, the system returns the ID of the request.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The estimated bandwidth value of the hosted connection. The estimated bandwidth value takes effect only after the payment is completed.
    // 
    // Valid values: **50M**, **100M**, **200M**, **300M**, **400M**, **500M**, **1G**, **2G**, **5G**, **8G**, and **10G**.
    // 
    // >  **2G**, **5G**, **8G**, and **10G** are unavailable by default. If you want to use these bandwidth values, contact your account manager.
    // 
    // **M** indicates Mbit/s and **G** indicates Gbit/s.
    std::shared_ptr<string> expectSpec_ = nullptr;
    // The ID of the hosted connection over Express Connect circuit.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the hosted connection.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to obtain the region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> token_ = nullptr;
    // The VLAN ID of the hosted connection over Express Connect circuit. Valid values: **0** to **2999**.
    // 
    // *   If the VLAN ID is set to **0**, it indicates that the switch port of the virtual border router (VBR) is a Layer 3 router interface instead of a VLAN interface. When a Layer 3 router interface is used, each Express Connect circuit corresponds to a VBR.
    // *   If the VLAN ID is set to a value from **1** to **2999**, the switch port of the VBR is a Layer 3 VLAN subinterface. When a Layer 3 VLAN subinterface is used, each VLAN ID corresponds to one VBR. In this case, the Express Connect circuit with which the VBR is associated can be used to connect to virtual private clouds (VPCs) that belong to different Alibaba Cloud accounts. VBRs in different VLANs are isolated from each other at Layer 2.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> vlanId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
