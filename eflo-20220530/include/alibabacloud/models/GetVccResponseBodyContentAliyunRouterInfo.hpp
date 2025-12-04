// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVCCRESPONSEBODYCONTENTALIYUNROUTERINFO_HPP_
#define ALIBABACLOUD_MODELS_GETVCCRESPONSEBODYCONTENTALIYUNROUTERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetVccResponseBodyContentAliyunRouterInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVccResponseBodyContentAliyunRouterInfo& obj) { 
      DARABONBA_PTR_TO_JSON(LocalGatewayIp, localGatewayIp_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(PcId, pcId_);
      DARABONBA_PTR_TO_JSON(PeerGatewayIp, peerGatewayIp_);
      DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
      DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVccResponseBodyContentAliyunRouterInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalGatewayIp, localGatewayIp_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(PcId, pcId_);
      DARABONBA_PTR_FROM_JSON(PeerGatewayIp, peerGatewayIp_);
      DARABONBA_PTR_FROM_JSON(VbrId, vbrId_);
      DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
    };
    GetVccResponseBodyContentAliyunRouterInfo() = default ;
    GetVccResponseBodyContentAliyunRouterInfo(const GetVccResponseBodyContentAliyunRouterInfo &) = default ;
    GetVccResponseBodyContentAliyunRouterInfo(GetVccResponseBodyContentAliyunRouterInfo &&) = default ;
    GetVccResponseBodyContentAliyunRouterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVccResponseBodyContentAliyunRouterInfo() = default ;
    GetVccResponseBodyContentAliyunRouterInfo& operator=(const GetVccResponseBodyContentAliyunRouterInfo &) = default ;
    GetVccResponseBodyContentAliyunRouterInfo& operator=(GetVccResponseBodyContentAliyunRouterInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->localGatewayIp_ == nullptr
        && return this->mask_ == nullptr && return this->pcId_ == nullptr && return this->peerGatewayIp_ == nullptr && return this->vbrId_ == nullptr && return this->vlanId_ == nullptr; };
    // localGatewayIp Field Functions 
    bool hasLocalGatewayIp() const { return this->localGatewayIp_ != nullptr;};
    void deleteLocalGatewayIp() { this->localGatewayIp_ = nullptr;};
    inline string localGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localGatewayIp_, "") };
    inline GetVccResponseBodyContentAliyunRouterInfo& setLocalGatewayIp(string localGatewayIp) { DARABONBA_PTR_SET_VALUE(localGatewayIp_, localGatewayIp) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string mask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline GetVccResponseBodyContentAliyunRouterInfo& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // pcId Field Functions 
    bool hasPcId() const { return this->pcId_ != nullptr;};
    void deletePcId() { this->pcId_ = nullptr;};
    inline string pcId() const { DARABONBA_PTR_GET_DEFAULT(pcId_, "") };
    inline GetVccResponseBodyContentAliyunRouterInfo& setPcId(string pcId) { DARABONBA_PTR_SET_VALUE(pcId_, pcId) };


    // peerGatewayIp Field Functions 
    bool hasPeerGatewayIp() const { return this->peerGatewayIp_ != nullptr;};
    void deletePeerGatewayIp() { this->peerGatewayIp_ = nullptr;};
    inline string peerGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerGatewayIp_, "") };
    inline GetVccResponseBodyContentAliyunRouterInfo& setPeerGatewayIp(string peerGatewayIp) { DARABONBA_PTR_SET_VALUE(peerGatewayIp_, peerGatewayIp) };


    // vbrId Field Functions 
    bool hasVbrId() const { return this->vbrId_ != nullptr;};
    void deleteVbrId() { this->vbrId_ = nullptr;};
    inline string vbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
    inline GetVccResponseBodyContentAliyunRouterInfo& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


    // vlanId Field Functions 
    bool hasVlanId() const { return this->vlanId_ != nullptr;};
    void deleteVlanId() { this->vlanId_ = nullptr;};
    inline string vlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, "") };
    inline GetVccResponseBodyContentAliyunRouterInfo& setVlanId(string vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


  protected:
    // IPv4 address of Alibaba Cloud-side interconnection
    std::shared_ptr<string> localGatewayIp_ = nullptr;
    // Masking
    std::shared_ptr<string> mask_ = nullptr;
    // Express Connect circuit ID
    std::shared_ptr<string> pcId_ = nullptr;
    // Lingjun Side Interconnection IPv4 Address
    std::shared_ptr<string> peerGatewayIp_ = nullptr;
    // The ID of the VBR.
    std::shared_ptr<string> vbrId_ = nullptr;
    // VLAN ID of the VBR
    std::shared_ptr<string> vlanId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
