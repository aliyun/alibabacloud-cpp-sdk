// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVCCRESPONSEBODYCONTENTCISROUTERINFOCCINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETVCCRESPONSEBODYCONTENTCISROUTERINFOCCINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetVccResponseBodyContentCisRouterInfoCcInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVccResponseBodyContentCisRouterInfoCcInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CcId, ccId_);
      DARABONBA_PTR_TO_JSON(LocalGatewayIp, localGatewayIp_);
      DARABONBA_PTR_TO_JSON(RemoteGatewayIp, remoteGatewayIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubnetMask, subnetMask_);
      DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVccResponseBodyContentCisRouterInfoCcInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CcId, ccId_);
      DARABONBA_PTR_FROM_JSON(LocalGatewayIp, localGatewayIp_);
      DARABONBA_PTR_FROM_JSON(RemoteGatewayIp, remoteGatewayIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubnetMask, subnetMask_);
      DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
    };
    GetVccResponseBodyContentCisRouterInfoCcInfos() = default ;
    GetVccResponseBodyContentCisRouterInfoCcInfos(const GetVccResponseBodyContentCisRouterInfoCcInfos &) = default ;
    GetVccResponseBodyContentCisRouterInfoCcInfos(GetVccResponseBodyContentCisRouterInfoCcInfos &&) = default ;
    GetVccResponseBodyContentCisRouterInfoCcInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVccResponseBodyContentCisRouterInfoCcInfos() = default ;
    GetVccResponseBodyContentCisRouterInfoCcInfos& operator=(const GetVccResponseBodyContentCisRouterInfoCcInfos &) = default ;
    GetVccResponseBodyContentCisRouterInfoCcInfos& operator=(GetVccResponseBodyContentCisRouterInfoCcInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ccId_ == nullptr
        && return this->localGatewayIp_ == nullptr && return this->remoteGatewayIp_ == nullptr && return this->status_ == nullptr && return this->subnetMask_ == nullptr && return this->vlanId_ == nullptr; };
    // ccId Field Functions 
    bool hasCcId() const { return this->ccId_ != nullptr;};
    void deleteCcId() { this->ccId_ = nullptr;};
    inline string ccId() const { DARABONBA_PTR_GET_DEFAULT(ccId_, "") };
    inline GetVccResponseBodyContentCisRouterInfoCcInfos& setCcId(string ccId) { DARABONBA_PTR_SET_VALUE(ccId_, ccId) };


    // localGatewayIp Field Functions 
    bool hasLocalGatewayIp() const { return this->localGatewayIp_ != nullptr;};
    void deleteLocalGatewayIp() { this->localGatewayIp_ = nullptr;};
    inline string localGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localGatewayIp_, "") };
    inline GetVccResponseBodyContentCisRouterInfoCcInfos& setLocalGatewayIp(string localGatewayIp) { DARABONBA_PTR_SET_VALUE(localGatewayIp_, localGatewayIp) };


    // remoteGatewayIp Field Functions 
    bool hasRemoteGatewayIp() const { return this->remoteGatewayIp_ != nullptr;};
    void deleteRemoteGatewayIp() { this->remoteGatewayIp_ = nullptr;};
    inline string remoteGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(remoteGatewayIp_, "") };
    inline GetVccResponseBodyContentCisRouterInfoCcInfos& setRemoteGatewayIp(string remoteGatewayIp) { DARABONBA_PTR_SET_VALUE(remoteGatewayIp_, remoteGatewayIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVccResponseBodyContentCisRouterInfoCcInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subnetMask Field Functions 
    bool hasSubnetMask() const { return this->subnetMask_ != nullptr;};
    void deleteSubnetMask() { this->subnetMask_ = nullptr;};
    inline string subnetMask() const { DARABONBA_PTR_GET_DEFAULT(subnetMask_, "") };
    inline GetVccResponseBodyContentCisRouterInfoCcInfos& setSubnetMask(string subnetMask) { DARABONBA_PTR_SET_VALUE(subnetMask_, subnetMask) };


    // vlanId Field Functions 
    bool hasVlanId() const { return this->vlanId_ != nullptr;};
    void deleteVlanId() { this->vlanId_ = nullptr;};
    inline string vlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, "") };
    inline GetVccResponseBodyContentCisRouterInfoCcInfos& setVlanId(string vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


  protected:
    // Leased Line ID
    std::shared_ptr<string> ccId_ = nullptr;
    // Lingjun Side Interconnection IPv4 Address
    std::shared_ptr<string> localGatewayIp_ = nullptr;
    // Lingjun Side Interconnection IPv4 Address
    std::shared_ptr<string> remoteGatewayIp_ = nullptr;
    // The state of the rule.
    std::shared_ptr<string> status_ = nullptr;
    // Subnet mask
    std::shared_ptr<string> subnetMask_ = nullptr;
    // Vlan ID of the leased line
    std::shared_ptr<string> vlanId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
