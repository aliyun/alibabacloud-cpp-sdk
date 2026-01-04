// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPSECSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPSECSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateIpsecServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpsecServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(IpsecServerId, ipsecServerId_);
      DARABONBA_PTR_TO_JSON(IpsecServerName, ipsecServerName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpsecServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(IpsecServerId, ipsecServerId_);
      DARABONBA_PTR_FROM_JSON(IpsecServerName, ipsecServerName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    CreateIpsecServerResponseBody() = default ;
    CreateIpsecServerResponseBody(const CreateIpsecServerResponseBody &) = default ;
    CreateIpsecServerResponseBody(CreateIpsecServerResponseBody &&) = default ;
    CreateIpsecServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpsecServerResponseBody() = default ;
    CreateIpsecServerResponseBody& operator=(const CreateIpsecServerResponseBody &) = default ;
    CreateIpsecServerResponseBody& operator=(CreateIpsecServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->ipsecServerId_ == nullptr && this->ipsecServerName_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->vpnGatewayId_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline CreateIpsecServerResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // ipsecServerId Field Functions 
    bool hasIpsecServerId() const { return this->ipsecServerId_ != nullptr;};
    void deleteIpsecServerId() { this->ipsecServerId_ = nullptr;};
    inline string getIpsecServerId() const { DARABONBA_PTR_GET_DEFAULT(ipsecServerId_, "") };
    inline CreateIpsecServerResponseBody& setIpsecServerId(string ipsecServerId) { DARABONBA_PTR_SET_VALUE(ipsecServerId_, ipsecServerId) };


    // ipsecServerName Field Functions 
    bool hasIpsecServerName() const { return this->ipsecServerName_ != nullptr;};
    void deleteIpsecServerName() { this->ipsecServerName_ = nullptr;};
    inline string getIpsecServerName() const { DARABONBA_PTR_GET_DEFAULT(ipsecServerName_, "") };
    inline CreateIpsecServerResponseBody& setIpsecServerName(string ipsecServerName) { DARABONBA_PTR_SET_VALUE(ipsecServerName_, ipsecServerName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateIpsecServerResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIpsecServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline CreateIpsecServerResponseBody& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The time when the IPsec server was created.
    // 
    // T is used as a delimiter. Z indicates that the time is in UTC.
    shared_ptr<string> creationTime_ {};
    // The IPsec server ID.
    shared_ptr<string> ipsecServerId_ {};
    // The IPsec server name.
    shared_ptr<string> ipsecServerName_ {};
    // The ID of the region where the VPN gateway is deployed.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the VPN gateway.
    shared_ptr<string> vpnGatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
