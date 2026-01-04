// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPNCERTIFICATEASSOCIATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVPNCERTIFICATEASSOCIATIONSREQUEST_HPP_
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
  class ListVpnCertificateAssociationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpnCertificateAssociationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpnCertificateAssociationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    ListVpnCertificateAssociationsRequest() = default ;
    ListVpnCertificateAssociationsRequest(const ListVpnCertificateAssociationsRequest &) = default ;
    ListVpnCertificateAssociationsRequest(ListVpnCertificateAssociationsRequest &&) = default ;
    ListVpnCertificateAssociationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpnCertificateAssociationsRequest() = default ;
    ListVpnCertificateAssociationsRequest& operator=(const ListVpnCertificateAssociationsRequest &) = default ;
    ListVpnCertificateAssociationsRequest& operator=(ListVpnCertificateAssociationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateId_ == nullptr
        && this->certificateType_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->vpnGatewayId_ == nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline const vector<string> & getCertificateId() const { DARABONBA_PTR_GET_CONST(certificateId_, vector<string>) };
    inline vector<string> getCertificateId() { DARABONBA_PTR_GET(certificateId_, vector<string>) };
    inline ListVpnCertificateAssociationsRequest& setCertificateId(const vector<string> & certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };
    inline ListVpnCertificateAssociationsRequest& setCertificateId(vector<string> && certificateId) { DARABONBA_PTR_SET_RVALUE(certificateId_, certificateId) };


    // certificateType Field Functions 
    bool hasCertificateType() const { return this->certificateType_ != nullptr;};
    void deleteCertificateType() { this->certificateType_ = nullptr;};
    inline string getCertificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
    inline ListVpnCertificateAssociationsRequest& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpnCertificateAssociationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpnCertificateAssociationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVpnCertificateAssociationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline const vector<string> & getVpnGatewayId() const { DARABONBA_PTR_GET_CONST(vpnGatewayId_, vector<string>) };
    inline vector<string> getVpnGatewayId() { DARABONBA_PTR_GET(vpnGatewayId_, vector<string>) };
    inline ListVpnCertificateAssociationsRequest& setVpnGatewayId(const vector<string> & vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };
    inline ListVpnCertificateAssociationsRequest& setVpnGatewayId(vector<string> && vpnGatewayId) { DARABONBA_PTR_SET_RVALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The list of certificate IDs.
    // 
    // You can query the association between at most 20 SSL certificates and VPN gateways.
    shared_ptr<vector<string>> certificateId_ {};
    // The certificate type. Valid values:
    // 
    // *   **Encryption**
    // *   **Signature**
    shared_ptr<string> certificateType_ {};
    // The number of entries to return on each page. Valid values: **1** to **20**. Default value: **1**.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of **NextToken**.
    shared_ptr<string> nextToken_ {};
    // The region ID of the VPN gateway.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The list of VPN gateway IDs.
    // 
    // You can query the association between at most 20 VPN gateways and SSL certificates.
    shared_ptr<vector<string>> vpnGatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
