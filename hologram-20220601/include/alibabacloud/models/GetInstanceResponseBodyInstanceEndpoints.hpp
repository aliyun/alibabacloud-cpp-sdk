// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYINSTANCEENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYINSTANCEENDPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class GetInstanceResponseBodyInstanceEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyInstanceEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(AlternativeEndpoints, alternativeEndpoints_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyInstanceEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(AlternativeEndpoints, alternativeEndpoints_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
    };
    GetInstanceResponseBodyInstanceEndpoints() = default ;
    GetInstanceResponseBodyInstanceEndpoints(const GetInstanceResponseBodyInstanceEndpoints &) = default ;
    GetInstanceResponseBodyInstanceEndpoints(GetInstanceResponseBodyInstanceEndpoints &&) = default ;
    GetInstanceResponseBodyInstanceEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyInstanceEndpoints() = default ;
    GetInstanceResponseBodyInstanceEndpoints& operator=(const GetInstanceResponseBodyInstanceEndpoints &) = default ;
    GetInstanceResponseBodyInstanceEndpoints& operator=(GetInstanceResponseBodyInstanceEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alternativeEndpoints_ != nullptr
        && this->enabled_ != nullptr && this->endpoint_ != nullptr && this->type_ != nullptr && this->vSwitchId_ != nullptr && this->vpcId_ != nullptr
        && this->vpcInstanceId_ != nullptr; };
    // alternativeEndpoints Field Functions 
    bool hasAlternativeEndpoints() const { return this->alternativeEndpoints_ != nullptr;};
    void deleteAlternativeEndpoints() { this->alternativeEndpoints_ = nullptr;};
    inline string alternativeEndpoints() const { DARABONBA_PTR_GET_DEFAULT(alternativeEndpoints_, "") };
    inline GetInstanceResponseBodyInstanceEndpoints& setAlternativeEndpoints(string alternativeEndpoints) { DARABONBA_PTR_SET_VALUE(alternativeEndpoints_, alternativeEndpoints) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetInstanceResponseBodyInstanceEndpoints& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline GetInstanceResponseBodyInstanceEndpoints& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetInstanceResponseBodyInstanceEndpoints& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GetInstanceResponseBodyInstanceEndpoints& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetInstanceResponseBodyInstanceEndpoints& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcInstanceId Field Functions 
    bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
    void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
    inline string vpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
    inline GetInstanceResponseBodyInstanceEndpoints& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


  protected:
    // The endpoint. This parameter is returned if both the AnyTunnel and SingleTunnel modes are enabled for an instance, and the instance is switched from the AnyTunnel mode to the SingleTunnel mode. In this case, two endpoints are returned.
    std::shared_ptr<string> alternativeEndpoints_ = nullptr;
    // Indicates whether the network is enabled.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<bool> enabled_ = nullptr;
    // The endpoint.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The network type.
    // 
    // Valid values:
    // 
    // *   VPCSingleTunnel
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     virtual private cloud (VPC)
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   Intranet
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     internal network
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   VPCAnyTunnel
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     not supported by new instances
    // 
    //     <!-- -->
    // 
    // *   Internet
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     Internet
    // 
    //     <!-- -->
    // 
    //     .
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the VPC to which the instance belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the instance that is deployed in the VPC.
    std::shared_ptr<string> vpcInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
