// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMERGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMERGATEWAYREQUEST_HPP_
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
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. If you specify this parameter, the value cannot be an empty string.
      // 
      // The tag key can be up to 64 characters in length and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      // 
      // You can specify up to 20 tag keys at a time.
      shared_ptr<string> key_ {};
      // The tag value.
      // 
      // The tag value can be up to 128 characters in length and can be an empty string. It cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
      // 
      // Each tag key corresponds to one tag value. You can specify up to 20 tag values at a time.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->asn_ == nullptr
        && this->authKey_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->ipAddress_ == nullptr && this->name_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->tags_ == nullptr; };
    // asn Field Functions 
    bool hasAsn() const { return this->asn_ != nullptr;};
    void deleteAsn() { this->asn_ = nullptr;};
    inline string getAsn() const { DARABONBA_PTR_GET_DEFAULT(asn_, "") };
    inline CreateCustomerGatewayRequest& setAsn(string asn) { DARABONBA_PTR_SET_VALUE(asn_, asn) };


    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string getAuthKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline CreateCustomerGatewayRequest& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCustomerGatewayRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCustomerGatewayRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline CreateCustomerGatewayRequest& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCustomerGatewayRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateCustomerGatewayRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateCustomerGatewayRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCustomerGatewayRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateCustomerGatewayRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateCustomerGatewayRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateCustomerGatewayRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateCustomerGatewayRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateCustomerGatewayRequest::Tags>) };
    inline vector<CreateCustomerGatewayRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateCustomerGatewayRequest::Tags>) };
    inline CreateCustomerGatewayRequest& setTags(const vector<CreateCustomerGatewayRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateCustomerGatewayRequest& setTags(vector<CreateCustomerGatewayRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The Autonomous System Number (ASN) of the gateway device in the on-premises data center. This parameter is required if you plan to enable Border Gateway Protocol (BGP) dynamic routing for the IPsec-VPN connection. Valid values: 1 to 4294967295. The value 45104 is not supported.
    // 
    // **Asn** is a 4-byte number that can be entered in the two-segment format: the first 16 bits.the last 16 bits. Each segment is entered in decimal notation.
    // 
    // For example, if you enter 123.456, the ASN is 123 × 65536 + 456 = 8061384.
    // 
    // > - Use a private ASN to establish a BGP connection with Alibaba Cloud. For more information about the range of private ASNs, refer to the relevant documentation.
    // > - 45104 is a unique identity allocated to Alibaba Cloud Computing Co., Ltd. by the Internet Assigned Numbers Authority (IANA). It is used to identify Alibaba Cloud in global Internet routing and data transmission.
    shared_ptr<string> asn_ {};
    // The authentication key of the BGP routing protocol for the gateway device in the on-premises data center.
    // 
    // The key must be 1 to 64 characters in length and can contain only ASCII characters. Spaces, Chinese characters, and half-width question marks (?) are not supported.
    shared_ptr<string> authKey_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // The description of the customer gateway.  
    // 
    // The description must be 1 to 100 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The static IP address of the gateway device in the on-premises data center.
    // 
    // - If you want to create an IPsec-VPN connection that uses the public network type, enter a public IP address.
    // 
    // - If you want to create an IPsec-VPN connection that uses the private network type, enter a private IP address.
    // 
    // The following IP addresses are not supported. If you use these IP addresses, the IPsec-VPN connection cannot be established:
    // 
    // - 100.64.0.0 to 100.127.255.255
    // - 127.0.0.0 to 127.255.255.255
    // - 169.254.0.0 to 169.254.255.255
    // - 224.0.0.0 to 239.255.255.255
    // - 255.0.0.0 to 255.255.255.255
    // 
    // This parameter is required.
    shared_ptr<string> ipAddress_ {};
    // The name of the customer gateway.  
    // 
    // The name must be 1 to 100 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the customer gateway. 
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the customer gateway belongs.
    // 
    // - You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query the resource group ID.
    // - If you do not specify a resource group, the customer gateway is added to the default resource group after it is created.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The list of tags to add to the customer gateway.
    // 
    // You can add up to 20 tags to a customer gateway at a time.
    shared_ptr<vector<CreateCustomerGatewayRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
