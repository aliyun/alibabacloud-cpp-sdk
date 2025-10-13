// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCENETWORKTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCENETWORKTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class UpdateInstanceNetworkTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceNetworkTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(anyTunnelToSingleTunnel, anyTunnelToSingleTunnel_);
      DARABONBA_PTR_TO_JSON(networkTypes, networkTypes_);
      DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(vpcOwnerId, vpcOwnerId_);
      DARABONBA_PTR_TO_JSON(vpcRegionId, vpcRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceNetworkTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(anyTunnelToSingleTunnel, anyTunnelToSingleTunnel_);
      DARABONBA_PTR_FROM_JSON(networkTypes, networkTypes_);
      DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(vpcOwnerId, vpcOwnerId_);
      DARABONBA_PTR_FROM_JSON(vpcRegionId, vpcRegionId_);
    };
    UpdateInstanceNetworkTypeRequest() = default ;
    UpdateInstanceNetworkTypeRequest(const UpdateInstanceNetworkTypeRequest &) = default ;
    UpdateInstanceNetworkTypeRequest(UpdateInstanceNetworkTypeRequest &&) = default ;
    UpdateInstanceNetworkTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceNetworkTypeRequest() = default ;
    UpdateInstanceNetworkTypeRequest& operator=(const UpdateInstanceNetworkTypeRequest &) = default ;
    UpdateInstanceNetworkTypeRequest& operator=(UpdateInstanceNetworkTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->anyTunnelToSingleTunnel_ != nullptr
        && this->networkTypes_ != nullptr && this->vSwitchId_ != nullptr && this->vpcId_ != nullptr && this->vpcOwnerId_ != nullptr && this->vpcRegionId_ != nullptr; };
    // anyTunnelToSingleTunnel Field Functions 
    bool hasAnyTunnelToSingleTunnel() const { return this->anyTunnelToSingleTunnel_ != nullptr;};
    void deleteAnyTunnelToSingleTunnel() { this->anyTunnelToSingleTunnel_ = nullptr;};
    inline string anyTunnelToSingleTunnel() const { DARABONBA_PTR_GET_DEFAULT(anyTunnelToSingleTunnel_, "") };
    inline UpdateInstanceNetworkTypeRequest& setAnyTunnelToSingleTunnel(string anyTunnelToSingleTunnel) { DARABONBA_PTR_SET_VALUE(anyTunnelToSingleTunnel_, anyTunnelToSingleTunnel) };


    // networkTypes Field Functions 
    bool hasNetworkTypes() const { return this->networkTypes_ != nullptr;};
    void deleteNetworkTypes() { this->networkTypes_ = nullptr;};
    inline string networkTypes() const { DARABONBA_PTR_GET_DEFAULT(networkTypes_, "") };
    inline UpdateInstanceNetworkTypeRequest& setNetworkTypes(string networkTypes) { DARABONBA_PTR_SET_VALUE(networkTypes_, networkTypes) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline UpdateInstanceNetworkTypeRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline UpdateInstanceNetworkTypeRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcOwnerId Field Functions 
    bool hasVpcOwnerId() const { return this->vpcOwnerId_ != nullptr;};
    void deleteVpcOwnerId() { this->vpcOwnerId_ = nullptr;};
    inline string vpcOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vpcOwnerId_, "") };
    inline UpdateInstanceNetworkTypeRequest& setVpcOwnerId(string vpcOwnerId) { DARABONBA_PTR_SET_VALUE(vpcOwnerId_, vpcOwnerId) };


    // vpcRegionId Field Functions 
    bool hasVpcRegionId() const { return this->vpcRegionId_ != nullptr;};
    void deleteVpcRegionId() { this->vpcRegionId_ = nullptr;};
    inline string vpcRegionId() const { DARABONBA_PTR_GET_DEFAULT(vpcRegionId_, "") };
    inline UpdateInstanceNetworkTypeRequest& setVpcRegionId(string vpcRegionId) { DARABONBA_PTR_SET_VALUE(vpcRegionId_, vpcRegionId) };


  protected:
    // Specifies whether to change the network type from AnyTunnel to SingleTunnel. This parameter is invalid for new instances. For new instances, this parameter is set to null by default.
    // 
    // Valid values:
    // 
    // *   others/null: The network type is not changed from AnyTunnel to SingleTunnel.
    // *   true: The network type is changed from AnyTunnel to SingleTunnel.
    std::shared_ptr<string> anyTunnelToSingleTunnel_ = nullptr;
    // A list of network types that you want to enable. The network types are randomly ordered in the list. For example, the Internet, Intranet, and VPCSingleTunnel network types are enabled. If you want to disable the Internet type, set this parameter to Intranet,VPCSingleTunnel.
    // 
    // Valid values:
    // 
    // *   VPCSingleTunnel: virtual private cloud (VPC).
    // *   Intranet: internal network.
    // *   VPCAnyTunnel: compatibility requirements. This value is not supported by new instances.
    // *   Internet: Internet.
    std::shared_ptr<string> networkTypes_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the VPC belongs.
    std::shared_ptr<string> vpcOwnerId_ = nullptr;
    // The region in which the VPC resides.
    std::shared_ptr<string> vpcRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
