// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIAGNOSEVPNGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DIAGNOSEVPNGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DiagnoseVpnGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiagnoseVpnGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(IPsecExtendInfo, IPsecExtendInfo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, DiagnoseVpnGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(IPsecExtendInfo, IPsecExtendInfo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    DiagnoseVpnGatewayRequest() = default ;
    DiagnoseVpnGatewayRequest(const DiagnoseVpnGatewayRequest &) = default ;
    DiagnoseVpnGatewayRequest(DiagnoseVpnGatewayRequest &&) = default ;
    DiagnoseVpnGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiagnoseVpnGatewayRequest() = default ;
    DiagnoseVpnGatewayRequest& operator=(const DiagnoseVpnGatewayRequest &) = default ;
    DiagnoseVpnGatewayRequest& operator=(DiagnoseVpnGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->IPsecExtendInfo_ != nullptr && this->regionId_ != nullptr && this->resourceId_ != nullptr && this->resourceType_ != nullptr && this->vpnGatewayId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DiagnoseVpnGatewayRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // IPsecExtendInfo Field Functions 
    bool hasIPsecExtendInfo() const { return this->IPsecExtendInfo_ != nullptr;};
    void deleteIPsecExtendInfo() { this->IPsecExtendInfo_ = nullptr;};
    inline string IPsecExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(IPsecExtendInfo_, "") };
    inline DiagnoseVpnGatewayRequest& setIPsecExtendInfo(string IPsecExtendInfo) { DARABONBA_PTR_SET_VALUE(IPsecExtendInfo_, IPsecExtendInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DiagnoseVpnGatewayRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DiagnoseVpnGatewayRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DiagnoseVpnGatewayRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string vpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline DiagnoseVpnGatewayRequest& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Check the connectivity of the destination address. Valid values:
    // 
    // *   **PrivateSourceIp**: the source IP address. The source IP address must be on the VPC side.
    // *   **PrivateDestinationIp**: the destination IP address. The destination IP address must be on the data center side.
    std::shared_ptr<string> IPsecExtendInfo_ = nullptr;
    // The region ID of the VPN gateway.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource to be diagnosed.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the resource.
    // 
    // Set the value to **Ipsec**, which specifies an IPsec-VPN connection.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The ID of the VPN gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpnGatewayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
