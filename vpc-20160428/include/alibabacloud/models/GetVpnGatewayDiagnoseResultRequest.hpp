// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPNGATEWAYDIAGNOSERESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVPNGATEWAYDIAGNOSERESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetVpnGatewayDiagnoseResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpnGatewayDiagnoseResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DiagnoseId, diagnoseId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpnGatewayDiagnoseResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DiagnoseId, diagnoseId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    GetVpnGatewayDiagnoseResultRequest() = default ;
    GetVpnGatewayDiagnoseResultRequest(const GetVpnGatewayDiagnoseResultRequest &) = default ;
    GetVpnGatewayDiagnoseResultRequest(GetVpnGatewayDiagnoseResultRequest &&) = default ;
    GetVpnGatewayDiagnoseResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpnGatewayDiagnoseResultRequest() = default ;
    GetVpnGatewayDiagnoseResultRequest& operator=(const GetVpnGatewayDiagnoseResultRequest &) = default ;
    GetVpnGatewayDiagnoseResultRequest& operator=(GetVpnGatewayDiagnoseResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->diagnoseId_ == nullptr && return this->regionId_ == nullptr && return this->vpnGatewayId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetVpnGatewayDiagnoseResultRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // diagnoseId Field Functions 
    bool hasDiagnoseId() const { return this->diagnoseId_ != nullptr;};
    void deleteDiagnoseId() { this->diagnoseId_ = nullptr;};
    inline string diagnoseId() const { DARABONBA_PTR_GET_DEFAULT(diagnoseId_, "") };
    inline GetVpnGatewayDiagnoseResultRequest& setDiagnoseId(string diagnoseId) { DARABONBA_PTR_SET_VALUE(diagnoseId_, diagnoseId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetVpnGatewayDiagnoseResultRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string vpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline GetVpnGatewayDiagnoseResultRequest& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // **
    // 
    // **Description** If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the diagnostic operation.
    // 
    // When you call the [DiagnoseVpnGateway](https://help.aliyun.com/document_detail/469751.html) operation, the system returns a corresponding ID.
    std::shared_ptr<string> diagnoseId_ = nullptr;
    // The region ID of the VPN gateway.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the VPN gateway.
    std::shared_ptr<string> vpnGatewayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
