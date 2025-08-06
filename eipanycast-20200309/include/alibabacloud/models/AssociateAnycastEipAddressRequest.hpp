// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEANYCASTEIPADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEANYCASTEIPADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AssociateAnycastEipAddressRequestPopLocations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class AssociateAnycastEipAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateAnycastEipAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnycastId, anycastId_);
      DARABONBA_PTR_TO_JSON(AssociationMode, associationMode_);
      DARABONBA_PTR_TO_JSON(BindInstanceId, bindInstanceId_);
      DARABONBA_PTR_TO_JSON(BindInstanceRegionId, bindInstanceRegionId_);
      DARABONBA_PTR_TO_JSON(BindInstanceType, bindInstanceType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(PopLocations, popLocations_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateAnycastEipAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnycastId, anycastId_);
      DARABONBA_PTR_FROM_JSON(AssociationMode, associationMode_);
      DARABONBA_PTR_FROM_JSON(BindInstanceId, bindInstanceId_);
      DARABONBA_PTR_FROM_JSON(BindInstanceRegionId, bindInstanceRegionId_);
      DARABONBA_PTR_FROM_JSON(BindInstanceType, bindInstanceType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(PopLocations, popLocations_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
    };
    AssociateAnycastEipAddressRequest() = default ;
    AssociateAnycastEipAddressRequest(const AssociateAnycastEipAddressRequest &) = default ;
    AssociateAnycastEipAddressRequest(AssociateAnycastEipAddressRequest &&) = default ;
    AssociateAnycastEipAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateAnycastEipAddressRequest() = default ;
    AssociateAnycastEipAddressRequest& operator=(const AssociateAnycastEipAddressRequest &) = default ;
    AssociateAnycastEipAddressRequest& operator=(AssociateAnycastEipAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->anycastId_ != nullptr
        && this->associationMode_ != nullptr && this->bindInstanceId_ != nullptr && this->bindInstanceRegionId_ != nullptr && this->bindInstanceType_ != nullptr && this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->popLocations_ != nullptr && this->privateIpAddress_ != nullptr; };
    // anycastId Field Functions 
    bool hasAnycastId() const { return this->anycastId_ != nullptr;};
    void deleteAnycastId() { this->anycastId_ = nullptr;};
    inline string anycastId() const { DARABONBA_PTR_GET_DEFAULT(anycastId_, "") };
    inline AssociateAnycastEipAddressRequest& setAnycastId(string anycastId) { DARABONBA_PTR_SET_VALUE(anycastId_, anycastId) };


    // associationMode Field Functions 
    bool hasAssociationMode() const { return this->associationMode_ != nullptr;};
    void deleteAssociationMode() { this->associationMode_ = nullptr;};
    inline string associationMode() const { DARABONBA_PTR_GET_DEFAULT(associationMode_, "") };
    inline AssociateAnycastEipAddressRequest& setAssociationMode(string associationMode) { DARABONBA_PTR_SET_VALUE(associationMode_, associationMode) };


    // bindInstanceId Field Functions 
    bool hasBindInstanceId() const { return this->bindInstanceId_ != nullptr;};
    void deleteBindInstanceId() { this->bindInstanceId_ = nullptr;};
    inline string bindInstanceId() const { DARABONBA_PTR_GET_DEFAULT(bindInstanceId_, "") };
    inline AssociateAnycastEipAddressRequest& setBindInstanceId(string bindInstanceId) { DARABONBA_PTR_SET_VALUE(bindInstanceId_, bindInstanceId) };


    // bindInstanceRegionId Field Functions 
    bool hasBindInstanceRegionId() const { return this->bindInstanceRegionId_ != nullptr;};
    void deleteBindInstanceRegionId() { this->bindInstanceRegionId_ = nullptr;};
    inline string bindInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(bindInstanceRegionId_, "") };
    inline AssociateAnycastEipAddressRequest& setBindInstanceRegionId(string bindInstanceRegionId) { DARABONBA_PTR_SET_VALUE(bindInstanceRegionId_, bindInstanceRegionId) };


    // bindInstanceType Field Functions 
    bool hasBindInstanceType() const { return this->bindInstanceType_ != nullptr;};
    void deleteBindInstanceType() { this->bindInstanceType_ = nullptr;};
    inline string bindInstanceType() const { DARABONBA_PTR_GET_DEFAULT(bindInstanceType_, "") };
    inline AssociateAnycastEipAddressRequest& setBindInstanceType(string bindInstanceType) { DARABONBA_PTR_SET_VALUE(bindInstanceType_, bindInstanceType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AssociateAnycastEipAddressRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AssociateAnycastEipAddressRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // popLocations Field Functions 
    bool hasPopLocations() const { return this->popLocations_ != nullptr;};
    void deletePopLocations() { this->popLocations_ = nullptr;};
    inline const vector<AssociateAnycastEipAddressRequestPopLocations> & popLocations() const { DARABONBA_PTR_GET_CONST(popLocations_, vector<AssociateAnycastEipAddressRequestPopLocations>) };
    inline vector<AssociateAnycastEipAddressRequestPopLocations> popLocations() { DARABONBA_PTR_GET(popLocations_, vector<AssociateAnycastEipAddressRequestPopLocations>) };
    inline AssociateAnycastEipAddressRequest& setPopLocations(const vector<AssociateAnycastEipAddressRequestPopLocations> & popLocations) { DARABONBA_PTR_SET_VALUE(popLocations_, popLocations) };
    inline AssociateAnycastEipAddressRequest& setPopLocations(vector<AssociateAnycastEipAddressRequestPopLocations> && popLocations) { DARABONBA_PTR_SET_RVALUE(popLocations_, popLocations) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline AssociateAnycastEipAddressRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


  protected:
    // The ID of the Anycast EIP.
    // 
    // This parameter is required.
    std::shared_ptr<string> anycastId_ = nullptr;
    // The association mode. Valid values:
    // 
    // *   **Default**: the default mode. In this mode, the endpoint to be associated serves as the default origin server.
    // *   **Normal**: the standard mode. In this mode, the endpoint to be associated serves as a standard origin server.
    // 
    // > You can associate endpoints in multiple regions with an Anycast EIP. However, only one endpoint can serve as the default origin server. Others serve as standard origin servers. If you do not specify or add an access point, requests are forwarded to the default origin server.\\
    // 
    // 
    // *   If this is your first time to associate an Anycast EIP with an endpoint, set the value to **Default**.
    // *   If not, you can also set the value to **Default**, which specifies a new default origin server. In this case, the previous origin server functions as a standard origin server.
    std::shared_ptr<string> associationMode_ = nullptr;
    // The ID of the endpoint with which you want to associate the Anycast EIP.
    // 
    // This parameter is required.
    std::shared_ptr<string> bindInstanceId_ = nullptr;
    // The ID of the region where the endpoint is deployed.
    // 
    // You can associate Anycast EIPs only with endpoints in specific regions. You can call the [DescribeAnycastServerRegions](https://help.aliyun.com/document_detail/171939.html) operation to query the region IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> bindInstanceRegionId_ = nullptr;
    // The type of endpoint with which you want to associate the Anycast EIP. Valid values:
    // 
    // *   **SlbInstance**: internal-facing Server Load Balancer (SLB) instance that is deployed in a virtual private cloud (VPC)
    // *   **NetworkInterface**: elastic network interface (ENI)
    // 
    // This parameter is required.
    std::shared_ptr<string> bindInstanceType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // > If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false**(default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The information about the access points in associated access areas when you associate an Anycast EIP with an endpoint.
    // 
    // If this is your first time to associate an Anycast EIP with an endpoint, ignore this parameter. The system automatically associates all access areas.
    // 
    // You can call the [DescribeAnycastPopLocations](https://help.aliyun.com/document_detail/171938.html) operation to query information about access points in supported access areas.
    std::shared_ptr<vector<AssociateAnycastEipAddressRequestPopLocations>> popLocations_ = nullptr;
    // The secondary private IP address of the ENI with which you want to associate the Anycast EIP.
    // 
    // This parameter is valid only when you set **BindInstanceType** to **NetworkInterface**. If you do not set this parameter, the primary private IP address of the ENI is used.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
