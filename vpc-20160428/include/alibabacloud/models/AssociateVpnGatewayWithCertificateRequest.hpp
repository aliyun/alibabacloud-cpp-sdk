// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEVPNGATEWAYWITHCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEVPNGATEWAYWITHCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AssociateVpnGatewayWithCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateVpnGatewayWithCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateVpnGatewayWithCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    AssociateVpnGatewayWithCertificateRequest() = default ;
    AssociateVpnGatewayWithCertificateRequest(const AssociateVpnGatewayWithCertificateRequest &) = default ;
    AssociateVpnGatewayWithCertificateRequest(AssociateVpnGatewayWithCertificateRequest &&) = default ;
    AssociateVpnGatewayWithCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateVpnGatewayWithCertificateRequest() = default ;
    AssociateVpnGatewayWithCertificateRequest& operator=(const AssociateVpnGatewayWithCertificateRequest &) = default ;
    AssociateVpnGatewayWithCertificateRequest& operator=(AssociateVpnGatewayWithCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateId_ == nullptr
        && this->certificateType_ == nullptr && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->regionId_ == nullptr && this->vpnGatewayId_ == nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline AssociateVpnGatewayWithCertificateRequest& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // certificateType Field Functions 
    bool hasCertificateType() const { return this->certificateType_ != nullptr;};
    void deleteCertificateType() { this->certificateType_ = nullptr;};
    inline string getCertificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
    inline AssociateVpnGatewayWithCertificateRequest& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AssociateVpnGatewayWithCertificateRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AssociateVpnGatewayWithCertificateRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AssociateVpnGatewayWithCertificateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline AssociateVpnGatewayWithCertificateRequest& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The ID of the certificate.
    // 
    // This parameter is required.
    shared_ptr<string> certificateId_ {};
    // The type of the certificate. Valid values:
    // 
    // - **Encryption**: specifies the SSL certificate as an encrypt certificate.
    // - **Signature**: specifies the SSL certificate as a signing certificate.
    // 
    // This parameter is required.
    shared_ptr<string> certificateType_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that the value is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is unique.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to only precheck the request. Valid values:
    // 
    // - **true**: prechecks the request without performing the association operation. The system checks whether the required parameters are specified, the request format, and the instance status. If the request fails the precheck, an error is returned. If the request passes the precheck, the request ID is returned.
    // 
    // - **false** (default): sends the request. After the request passes the precheck, the VPN gateway is associated with the certificate.
    shared_ptr<bool> dryRun_ {};
    // The region ID of the VPN gateway.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The instance ID of the VPN gateway.
    // 
    // > Only ShangMi (SM) VPN gateways support attaching certificates.
    // 
    // This parameter is required.
    shared_ptr<string> vpnGatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
