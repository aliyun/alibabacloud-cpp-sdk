// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMERGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMERGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCustomerGatewayRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateCustomerGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomerGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Asn, asn_);
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomerGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Asn, asn_);
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateCustomerGatewayRequest() = default ;
    CreateCustomerGatewayRequest(const CreateCustomerGatewayRequest &) = default ;
    CreateCustomerGatewayRequest(CreateCustomerGatewayRequest &&) = default ;
    CreateCustomerGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomerGatewayRequest() = default ;
    CreateCustomerGatewayRequest& operator=(const CreateCustomerGatewayRequest &) = default ;
    CreateCustomerGatewayRequest& operator=(CreateCustomerGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asn_ != nullptr
        && this->authKey_ != nullptr && this->clientToken_ != nullptr && this->description_ != nullptr && this->ipAddress_ != nullptr && this->name_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->tags_ != nullptr; };
    // asn Field Functions 
    bool hasAsn() const { return this->asn_ != nullptr;};
    void deleteAsn() { this->asn_ = nullptr;};
    inline string asn() const { DARABONBA_PTR_GET_DEFAULT(asn_, "") };
    inline CreateCustomerGatewayRequest& setAsn(string asn) { DARABONBA_PTR_SET_VALUE(asn_, asn) };


    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string authKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline CreateCustomerGatewayRequest& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCustomerGatewayRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCustomerGatewayRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline CreateCustomerGatewayRequest& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCustomerGatewayRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateCustomerGatewayRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateCustomerGatewayRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCustomerGatewayRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateCustomerGatewayRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateCustomerGatewayRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateCustomerGatewayRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateCustomerGatewayRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateCustomerGatewayRequestTags>) };
    inline vector<CreateCustomerGatewayRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateCustomerGatewayRequestTags>) };
    inline CreateCustomerGatewayRequest& setTags(const vector<CreateCustomerGatewayRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateCustomerGatewayRequest& setTags(vector<CreateCustomerGatewayRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The autonomous system number (ASN) of the gateway device in your data center. This parameter is required If you want to use Border Gateway Protocol (BGP) for the IPsec-VPN connection. Valid values: 1 to 4294967295. 45104 is not supported.
    // 
    // **Asn** is a 4-byte number. You can enter it in two segments and separate the first 16 bits from the following 16 bits with a period (.). Enter the number in each segment in decimal format.
    // 
    // For example, if you enter 123.456, the ASN is 8061384. The ASN is calculated by using the following formula: 123 × 65536 + 456 = 8061384.
    // 
    // > - We recommend that you use a private ASN to establish BGP connections to Alibaba Cloud. For information about the range of private ASNs, see the relevant documentation.
    // > - 45104 is a unique identifier assigned by IANA to Alibaba Cloud. It is used to identify Alibaba Cloud during route selection and data transmission over the Internet.
    std::shared_ptr<string> asn_ = nullptr;
    // The authentication key of the BGP routing protocol for the gateway device in the data center.
    // 
    // The key must be 1 to 64 characters in length. It can contain only ASCII characters and cannot contain spaces or question marks (?).
    std::shared_ptr<string> authKey_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // > If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the customer gateway.
    // 
    // The description must be 1 to 100 characters in length, and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The static IP address of the gateway device in the data center.
    // 
    // *   If you want to create a public IPsec-VPN connection, enter a public IP address.
    // *   If you want to create a private IPsec-VPN connection, enter a private IP address.
    // 
    // You cannot use the following IP addresses. Otherwise, a IPsec-VPN connection cannot be established:
    // 
    // *   100.64.0.0~100.127.255.255
    // *   127.0.0.0~127.255.255.255
    // *   169.254.0.0~169.254.255.255
    // *   224.0.0.0~239.255.255.255
    // *   255.0.0.0~255.255.255.255
    // 
    // This parameter is required.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The name of the customer gateway.
    // 
    // The name must be 1 to 100 characters in length, and cannot start with `http://` or `https://`.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the customer gateway.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the customer gateway belongs.
    // 
    // - You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query the resource group list.
    // 
    // - If you do not specify a resource group, the customer gateway will belong to the default resource group after being created.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tag value.
    // 
    // The tag value can be an empty string and cannot exceed 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
    // 
    // Each tag key corresponds to one tag value. You can specify up to 20 tag values in each call.
    std::shared_ptr<vector<CreateCustomerGatewayRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
