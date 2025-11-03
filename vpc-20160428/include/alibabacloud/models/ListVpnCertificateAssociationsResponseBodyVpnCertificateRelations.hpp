// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPNCERTIFICATEASSOCIATIONSRESPONSEBODYVPNCERTIFICATERELATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTVPNCERTIFICATEASSOCIATIONSRESPONSEBODYVPNCERTIFICATERELATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations& obj) { 
      DARABONBA_PTR_TO_JSON(AssociationTime, associationTime_);
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociationTime, associationTime_);
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations() = default ;
    ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations(const ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations &) = default ;
    ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations(ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations &&) = default ;
    ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations() = default ;
    ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations& operator=(const ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations &) = default ;
    ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations& operator=(ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associationTime_ == nullptr
        && return this->certificateId_ == nullptr && return this->certificateType_ == nullptr && return this->regionId_ == nullptr && return this->vpnGatewayId_ == nullptr; };
    // associationTime Field Functions 
    bool hasAssociationTime() const { return this->associationTime_ != nullptr;};
    void deleteAssociationTime() { this->associationTime_ = nullptr;};
    inline string associationTime() const { DARABONBA_PTR_GET_DEFAULT(associationTime_, "") };
    inline ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations& setAssociationTime(string associationTime) { DARABONBA_PTR_SET_VALUE(associationTime_, associationTime) };


    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // certificateType Field Functions 
    bool hasCertificateType() const { return this->certificateType_ != nullptr;};
    void deleteCertificateType() { this->certificateType_ = nullptr;};
    inline string certificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
    inline ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string vpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The time when the Anycast EIP was associated.
    // 
    // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> associationTime_ = nullptr;
    // The certificate ID.
    std::shared_ptr<string> certificateId_ = nullptr;
    // The type of the certificate.
    // 
    // *   **Encryption**
    // *   **Signature**
    std::shared_ptr<string> certificateType_ = nullptr;
    // The ID of the region where the VPN gateway is created.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the VPN gateway.
    std::shared_ptr<string> vpnGatewayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
