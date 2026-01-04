// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPNCERTIFICATEASSOCIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPNCERTIFICATEASSOCIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListVpnCertificateAssociationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpnCertificateAssociationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpnCertificateRelations, vpnCertificateRelations_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpnCertificateAssociationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpnCertificateRelations, vpnCertificateRelations_);
    };
    ListVpnCertificateAssociationsResponseBody() = default ;
    ListVpnCertificateAssociationsResponseBody(const ListVpnCertificateAssociationsResponseBody &) = default ;
    ListVpnCertificateAssociationsResponseBody(ListVpnCertificateAssociationsResponseBody &&) = default ;
    ListVpnCertificateAssociationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpnCertificateAssociationsResponseBody() = default ;
    ListVpnCertificateAssociationsResponseBody& operator=(const ListVpnCertificateAssociationsResponseBody &) = default ;
    ListVpnCertificateAssociationsResponseBody& operator=(ListVpnCertificateAssociationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpnCertificateRelations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpnCertificateRelations& obj) { 
        DARABONBA_PTR_TO_JSON(AssociationTime, associationTime_);
        DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
        DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
      };
      friend void from_json(const Darabonba::Json& j, VpnCertificateRelations& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociationTime, associationTime_);
        DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
        DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
      };
      VpnCertificateRelations() = default ;
      VpnCertificateRelations(const VpnCertificateRelations &) = default ;
      VpnCertificateRelations(VpnCertificateRelations &&) = default ;
      VpnCertificateRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpnCertificateRelations() = default ;
      VpnCertificateRelations& operator=(const VpnCertificateRelations &) = default ;
      VpnCertificateRelations& operator=(VpnCertificateRelations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->associationTime_ == nullptr
        && this->certificateId_ == nullptr && this->certificateType_ == nullptr && this->regionId_ == nullptr && this->vpnGatewayId_ == nullptr; };
      // associationTime Field Functions 
      bool hasAssociationTime() const { return this->associationTime_ != nullptr;};
      void deleteAssociationTime() { this->associationTime_ = nullptr;};
      inline string getAssociationTime() const { DARABONBA_PTR_GET_DEFAULT(associationTime_, "") };
      inline VpnCertificateRelations& setAssociationTime(string associationTime) { DARABONBA_PTR_SET_VALUE(associationTime_, associationTime) };


      // certificateId Field Functions 
      bool hasCertificateId() const { return this->certificateId_ != nullptr;};
      void deleteCertificateId() { this->certificateId_ = nullptr;};
      inline string getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
      inline VpnCertificateRelations& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


      // certificateType Field Functions 
      bool hasCertificateType() const { return this->certificateType_ != nullptr;};
      void deleteCertificateType() { this->certificateType_ = nullptr;};
      inline string getCertificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
      inline VpnCertificateRelations& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline VpnCertificateRelations& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // vpnGatewayId Field Functions 
      bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
      void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
      inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
      inline VpnCertificateRelations& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


    protected:
      // The time when the Anycast EIP was associated.
      // 
      // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> associationTime_ {};
      // The certificate ID.
      shared_ptr<string> certificateId_ {};
      // The type of the certificate.
      // 
      // *   **Encryption**
      // *   **Signature**
      shared_ptr<string> certificateType_ {};
      // The ID of the region where the VPN gateway is created.
      shared_ptr<string> regionId_ {};
      // The ID of the VPN gateway.
      shared_ptr<string> vpnGatewayId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vpnCertificateRelations_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpnCertificateAssociationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpnCertificateAssociationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpnCertificateAssociationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListVpnCertificateAssociationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpnCertificateRelations Field Functions 
    bool hasVpnCertificateRelations() const { return this->vpnCertificateRelations_ != nullptr;};
    void deleteVpnCertificateRelations() { this->vpnCertificateRelations_ = nullptr;};
    inline const vector<ListVpnCertificateAssociationsResponseBody::VpnCertificateRelations> & getVpnCertificateRelations() const { DARABONBA_PTR_GET_CONST(vpnCertificateRelations_, vector<ListVpnCertificateAssociationsResponseBody::VpnCertificateRelations>) };
    inline vector<ListVpnCertificateAssociationsResponseBody::VpnCertificateRelations> getVpnCertificateRelations() { DARABONBA_PTR_GET(vpnCertificateRelations_, vector<ListVpnCertificateAssociationsResponseBody::VpnCertificateRelations>) };
    inline ListVpnCertificateAssociationsResponseBody& setVpnCertificateRelations(const vector<ListVpnCertificateAssociationsResponseBody::VpnCertificateRelations> & vpnCertificateRelations) { DARABONBA_PTR_SET_VALUE(vpnCertificateRelations_, vpnCertificateRelations) };
    inline ListVpnCertificateAssociationsResponseBody& setVpnCertificateRelations(vector<ListVpnCertificateAssociationsResponseBody::VpnCertificateRelations> && vpnCertificateRelations) { DARABONBA_PTR_SET_RVALUE(vpnCertificateRelations_, vpnCertificateRelations) };


  protected:
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If **NextToken** is not empty, the value indicates the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The association information.
    shared_ptr<vector<ListVpnCertificateAssociationsResponseBody::VpnCertificateRelations>> vpnCertificateRelations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
