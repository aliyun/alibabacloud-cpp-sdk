// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISSOCIATEVPNGATEWAYWITHCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISSOCIATEVPNGATEWAYWITHCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DissociateVpnGatewayWithCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DissociateVpnGatewayWithCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, DissociateVpnGatewayWithCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    DissociateVpnGatewayWithCertificateRequest() = default ;
    DissociateVpnGatewayWithCertificateRequest(const DissociateVpnGatewayWithCertificateRequest &) = default ;
    DissociateVpnGatewayWithCertificateRequest(DissociateVpnGatewayWithCertificateRequest &&) = default ;
    DissociateVpnGatewayWithCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DissociateVpnGatewayWithCertificateRequest() = default ;
    DissociateVpnGatewayWithCertificateRequest& operator=(const DissociateVpnGatewayWithCertificateRequest &) = default ;
    DissociateVpnGatewayWithCertificateRequest& operator=(DissociateVpnGatewayWithCertificateRequest &&) = default ;
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
    inline DissociateVpnGatewayWithCertificateRequest& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // certificateType Field Functions 
    bool hasCertificateType() const { return this->certificateType_ != nullptr;};
    void deleteCertificateType() { this->certificateType_ = nullptr;};
    inline string getCertificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
    inline DissociateVpnGatewayWithCertificateRequest& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DissociateVpnGatewayWithCertificateRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DissociateVpnGatewayWithCertificateRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DissociateVpnGatewayWithCertificateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline DissociateVpnGatewayWithCertificateRequest& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The certificate ID.
    // 
    // > The certificate ID refers to the ID generated after the SSL certificate is associated with the VPN gateway, not the ID of the SSL certificate itself.
    // <props="china">You can call the [ListVpnCertificateAssociations](https://help.aliyun.com/document_detail/2521961.html) operation to query the certificate ID.
    // 
    // This parameter is required.
    shared_ptr<string> certificateId_ {};
    // The certificate type. Valid values:
    // 
    // - **Encryption**: encryption certificate.
    // 
    // - **Signature**: signing certificate.
    // 
    // This parameter is required.
    shared_ptr<string> certificateType_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The ClientToken value can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** may differ for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run without performing the actual request. The system checks the request for potential issues, including required parameters, request format, and instance status. If the request fails the dry run, the corresponding error is returned. If the request passes the dry run, the error code `DryRunOperation` is returned.
    // 
    // - **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, the VPN gateway is dissociated from the SSL certificate.
    shared_ptr<bool> dryRun_ {};
    // The region ID of the VPN gateway.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The instance ID of the VPN gateway.
    // 
    // This parameter is required.
    shared_ptr<string> vpnGatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
