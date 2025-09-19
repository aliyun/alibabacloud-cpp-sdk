// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHONEYPOTPROBEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHONEYPOTPROBEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateHoneypotProbeRequestHoneypotBindList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateHoneypotProbeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHoneypotProbeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Arp, arp_);
      DARABONBA_PTR_TO_JSON(BusinessGroupId, businessGroupId_);
      DARABONBA_PTR_TO_JSON(ControlNodeId, controlNodeId_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(HoneypotBindList, honeypotBindList_);
      DARABONBA_PTR_TO_JSON(Ping, ping_);
      DARABONBA_PTR_TO_JSON(ProbeType, probeType_);
      DARABONBA_PTR_TO_JSON(ProbeVersion, probeVersion_);
      DARABONBA_PTR_TO_JSON(ProxyIp, proxyIp_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHoneypotProbeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Arp, arp_);
      DARABONBA_PTR_FROM_JSON(BusinessGroupId, businessGroupId_);
      DARABONBA_PTR_FROM_JSON(ControlNodeId, controlNodeId_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(HoneypotBindList, honeypotBindList_);
      DARABONBA_PTR_FROM_JSON(Ping, ping_);
      DARABONBA_PTR_FROM_JSON(ProbeType, probeType_);
      DARABONBA_PTR_FROM_JSON(ProbeVersion, probeVersion_);
      DARABONBA_PTR_FROM_JSON(ProxyIp, proxyIp_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateHoneypotProbeRequest() = default ;
    CreateHoneypotProbeRequest(const CreateHoneypotProbeRequest &) = default ;
    CreateHoneypotProbeRequest(CreateHoneypotProbeRequest &&) = default ;
    CreateHoneypotProbeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHoneypotProbeRequest() = default ;
    CreateHoneypotProbeRequest& operator=(const CreateHoneypotProbeRequest &) = default ;
    CreateHoneypotProbeRequest& operator=(CreateHoneypotProbeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arp_ != nullptr
        && this->businessGroupId_ != nullptr && this->controlNodeId_ != nullptr && this->displayName_ != nullptr && this->honeypotBindList_ != nullptr && this->ping_ != nullptr
        && this->probeType_ != nullptr && this->probeVersion_ != nullptr && this->proxyIp_ != nullptr && this->uuid_ != nullptr && this->vpcId_ != nullptr; };
    // arp Field Functions 
    bool hasArp() const { return this->arp_ != nullptr;};
    void deleteArp() { this->arp_ = nullptr;};
    inline bool arp() const { DARABONBA_PTR_GET_DEFAULT(arp_, false) };
    inline CreateHoneypotProbeRequest& setArp(bool arp) { DARABONBA_PTR_SET_VALUE(arp_, arp) };


    // businessGroupId Field Functions 
    bool hasBusinessGroupId() const { return this->businessGroupId_ != nullptr;};
    void deleteBusinessGroupId() { this->businessGroupId_ = nullptr;};
    inline string businessGroupId() const { DARABONBA_PTR_GET_DEFAULT(businessGroupId_, "") };
    inline CreateHoneypotProbeRequest& setBusinessGroupId(string businessGroupId) { DARABONBA_PTR_SET_VALUE(businessGroupId_, businessGroupId) };


    // controlNodeId Field Functions 
    bool hasControlNodeId() const { return this->controlNodeId_ != nullptr;};
    void deleteControlNodeId() { this->controlNodeId_ = nullptr;};
    inline string controlNodeId() const { DARABONBA_PTR_GET_DEFAULT(controlNodeId_, "") };
    inline CreateHoneypotProbeRequest& setControlNodeId(string controlNodeId) { DARABONBA_PTR_SET_VALUE(controlNodeId_, controlNodeId) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateHoneypotProbeRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // honeypotBindList Field Functions 
    bool hasHoneypotBindList() const { return this->honeypotBindList_ != nullptr;};
    void deleteHoneypotBindList() { this->honeypotBindList_ = nullptr;};
    inline const vector<CreateHoneypotProbeRequestHoneypotBindList> & honeypotBindList() const { DARABONBA_PTR_GET_CONST(honeypotBindList_, vector<CreateHoneypotProbeRequestHoneypotBindList>) };
    inline vector<CreateHoneypotProbeRequestHoneypotBindList> honeypotBindList() { DARABONBA_PTR_GET(honeypotBindList_, vector<CreateHoneypotProbeRequestHoneypotBindList>) };
    inline CreateHoneypotProbeRequest& setHoneypotBindList(const vector<CreateHoneypotProbeRequestHoneypotBindList> & honeypotBindList) { DARABONBA_PTR_SET_VALUE(honeypotBindList_, honeypotBindList) };
    inline CreateHoneypotProbeRequest& setHoneypotBindList(vector<CreateHoneypotProbeRequestHoneypotBindList> && honeypotBindList) { DARABONBA_PTR_SET_RVALUE(honeypotBindList_, honeypotBindList) };


    // ping Field Functions 
    bool hasPing() const { return this->ping_ != nullptr;};
    void deletePing() { this->ping_ = nullptr;};
    inline bool ping() const { DARABONBA_PTR_GET_DEFAULT(ping_, false) };
    inline CreateHoneypotProbeRequest& setPing(bool ping) { DARABONBA_PTR_SET_VALUE(ping_, ping) };


    // probeType Field Functions 
    bool hasProbeType() const { return this->probeType_ != nullptr;};
    void deleteProbeType() { this->probeType_ = nullptr;};
    inline string probeType() const { DARABONBA_PTR_GET_DEFAULT(probeType_, "") };
    inline CreateHoneypotProbeRequest& setProbeType(string probeType) { DARABONBA_PTR_SET_VALUE(probeType_, probeType) };


    // probeVersion Field Functions 
    bool hasProbeVersion() const { return this->probeVersion_ != nullptr;};
    void deleteProbeVersion() { this->probeVersion_ = nullptr;};
    inline string probeVersion() const { DARABONBA_PTR_GET_DEFAULT(probeVersion_, "") };
    inline CreateHoneypotProbeRequest& setProbeVersion(string probeVersion) { DARABONBA_PTR_SET_VALUE(probeVersion_, probeVersion) };


    // proxyIp Field Functions 
    bool hasProxyIp() const { return this->proxyIp_ != nullptr;};
    void deleteProxyIp() { this->proxyIp_ = nullptr;};
    inline string proxyIp() const { DARABONBA_PTR_GET_DEFAULT(proxyIp_, "") };
    inline CreateHoneypotProbeRequest& setProxyIp(string proxyIp) { DARABONBA_PTR_SET_VALUE(proxyIp_, proxyIp) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline CreateHoneypotProbeRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateHoneypotProbeRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Specifies whether to enable Address Resolution Protocol (ARP) spoofing. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> arp_ = nullptr;
    // The ID of the business group.
    std::shared_ptr<string> businessGroupId_ = nullptr;
    // The ID of the management node.
    // 
    // > You can call the [ListHoneypotNode](~~ListHoneypotNode~~) operation to query the IDs of management nodes.
    // 
    // This parameter is required.
    std::shared_ptr<string> controlNodeId_ = nullptr;
    // The name of the probe.
    // 
    // This parameter is required.
    std::shared_ptr<string> displayName_ = nullptr;
    // The configuration of the probe.
    std::shared_ptr<vector<CreateHoneypotProbeRequestHoneypotBindList>> honeypotBindList_ = nullptr;
    // Specifies whether to enable ping scan. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> ping_ = nullptr;
    // The type of the probe. Valid values:
    // 
    // *   **host_probe**: host probe
    // *   **vpc_black_hole_probe**: virtual private cloud (VPC) probe
    // 
    // This parameter is required.
    std::shared_ptr<string> probeType_ = nullptr;
    // The version of the probe.
    std::shared_ptr<string> probeVersion_ = nullptr;
    // The IP address of the proxy.
    std::shared_ptr<string> proxyIp_ = nullptr;
    // The UUID of the instance.
    // 
    // > If **ProbeType** is set to **host_probe**, this parameter is required.
    std::shared_ptr<string> uuid_ = nullptr;
    // The ID of the VPC.
    // 
    // > If **ProbeType** is set to **vpc_black_hole_probe**, this parameter is required. You can call the [DescribeVpcHoneyPotList](~~DescribeVpcHoneyPotList~~) operation to query the IDs of VPCs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
