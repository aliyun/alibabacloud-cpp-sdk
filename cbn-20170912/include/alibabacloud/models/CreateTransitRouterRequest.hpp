// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTransitRouterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SupportMulticast, supportMulticast_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TransitRouterCidrList, transitRouterCidrList_);
      DARABONBA_PTR_TO_JSON(TransitRouterDescription, transitRouterDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterName, transitRouterName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SupportMulticast, supportMulticast_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TransitRouterCidrList, transitRouterCidrList_);
      DARABONBA_PTR_FROM_JSON(TransitRouterDescription, transitRouterDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterName, transitRouterName_);
    };
    CreateTransitRouterRequest() = default ;
    CreateTransitRouterRequest(const CreateTransitRouterRequest &) = default ;
    CreateTransitRouterRequest(CreateTransitRouterRequest &&) = default ;
    CreateTransitRouterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterRequest() = default ;
    CreateTransitRouterRequest& operator=(const CreateTransitRouterRequest &) = default ;
    CreateTransitRouterRequest& operator=(CreateTransitRouterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TransitRouterCidrList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TransitRouterCidrList& obj) { 
        DARABONBA_PTR_TO_JSON(Cidr, cidr_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PublishCidrRoute, publishCidrRoute_);
      };
      friend void from_json(const Darabonba::Json& j, TransitRouterCidrList& obj) { 
        DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PublishCidrRoute, publishCidrRoute_);
      };
      TransitRouterCidrList() = default ;
      TransitRouterCidrList(const TransitRouterCidrList &) = default ;
      TransitRouterCidrList(TransitRouterCidrList &&) = default ;
      TransitRouterCidrList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TransitRouterCidrList() = default ;
      TransitRouterCidrList& operator=(const TransitRouterCidrList &) = default ;
      TransitRouterCidrList& operator=(TransitRouterCidrList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cidr_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->publishCidrRoute_ == nullptr; };
      // cidr Field Functions 
      bool hasCidr() const { return this->cidr_ != nullptr;};
      void deleteCidr() { this->cidr_ = nullptr;};
      inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
      inline TransitRouterCidrList& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline TransitRouterCidrList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TransitRouterCidrList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // publishCidrRoute Field Functions 
      bool hasPublishCidrRoute() const { return this->publishCidrRoute_ != nullptr;};
      void deletePublishCidrRoute() { this->publishCidrRoute_ = nullptr;};
      inline bool getPublishCidrRoute() const { DARABONBA_PTR_GET_DEFAULT(publishCidrRoute_, false) };
      inline TransitRouterCidrList& setPublishCidrRoute(bool publishCidrRoute) { DARABONBA_PTR_SET_VALUE(publishCidrRoute_, publishCidrRoute) };


    protected:
      // The CIDR block of the transit router.
      shared_ptr<string> cidr_ {};
      // The description of the transit router CIDR block.
      // 
      // The description must be 1 to 256 characters in length.
      shared_ptr<string> description_ {};
      // The name of the transit router CIDR block.
      // 
      // The name must be 1 to 128 characters in length.
      shared_ptr<string> name_ {};
      // Specifies whether to allow the system to automatically add a route that points to the CIDR block to the route table of the transit router.
      // 
      // *   **true** (default)
      // 
      //     If you set the value to true, after you create a VPN attachment on a private VPN gateway and enable route learning for the VPN attachment, the system automatically adds the following route to the route table of the transit router that is in route learning relationship with the VPN attachment:
      // 
      //     A blackhole route whose destination CIDR block is the transit router CIDR block, which refers to the CIDR block from which gateway IP addresses are allocated to the IPsec-VPN connection.
      // 
      //     The blackhole route is advertised only to the route tables of virtual border routers (VBRs) connected to the transit router.
      // 
      // *   **false**
      shared_ptr<bool> publishCidrRoute_ {};
    };

    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      // 
      // The tag keys cannot be an empty string. The tag key can be up to 64 characters in length. It cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
      // 
      // You can specify at most 20 tag keys in each call.
      shared_ptr<string> key_ {};
      // The tag value.
      // 
      // The tag value can be an empty string or up to 128 characters in length. It cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
      // 
      // Each key-value must be unique. You can specify at most 20 tag values in each call.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->cenId_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->supportMulticast_ == nullptr && this->tag_ == nullptr && this->transitRouterCidrList_ == nullptr
        && this->transitRouterDescription_ == nullptr && this->transitRouterName_ == nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateTransitRouterRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTransitRouterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTransitRouterRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTransitRouterRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTransitRouterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTransitRouterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTransitRouterRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTransitRouterRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // supportMulticast Field Functions 
    bool hasSupportMulticast() const { return this->supportMulticast_ != nullptr;};
    void deleteSupportMulticast() { this->supportMulticast_ = nullptr;};
    inline bool getSupportMulticast() const { DARABONBA_PTR_GET_DEFAULT(supportMulticast_, false) };
    inline CreateTransitRouterRequest& setSupportMulticast(bool supportMulticast) { DARABONBA_PTR_SET_VALUE(supportMulticast_, supportMulticast) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateTransitRouterRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateTransitRouterRequest::Tag>) };
    inline vector<CreateTransitRouterRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateTransitRouterRequest::Tag>) };
    inline CreateTransitRouterRequest& setTag(const vector<CreateTransitRouterRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateTransitRouterRequest& setTag(vector<CreateTransitRouterRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transitRouterCidrList Field Functions 
    bool hasTransitRouterCidrList() const { return this->transitRouterCidrList_ != nullptr;};
    void deleteTransitRouterCidrList() { this->transitRouterCidrList_ = nullptr;};
    inline const vector<CreateTransitRouterRequest::TransitRouterCidrList> & getTransitRouterCidrList() const { DARABONBA_PTR_GET_CONST(transitRouterCidrList_, vector<CreateTransitRouterRequest::TransitRouterCidrList>) };
    inline vector<CreateTransitRouterRequest::TransitRouterCidrList> getTransitRouterCidrList() { DARABONBA_PTR_GET(transitRouterCidrList_, vector<CreateTransitRouterRequest::TransitRouterCidrList>) };
    inline CreateTransitRouterRequest& setTransitRouterCidrList(const vector<CreateTransitRouterRequest::TransitRouterCidrList> & transitRouterCidrList) { DARABONBA_PTR_SET_VALUE(transitRouterCidrList_, transitRouterCidrList) };
    inline CreateTransitRouterRequest& setTransitRouterCidrList(vector<CreateTransitRouterRequest::TransitRouterCidrList> && transitRouterCidrList) { DARABONBA_PTR_SET_RVALUE(transitRouterCidrList_, transitRouterCidrList) };


    // transitRouterDescription Field Functions 
    bool hasTransitRouterDescription() const { return this->transitRouterDescription_ != nullptr;};
    void deleteTransitRouterDescription() { this->transitRouterDescription_ = nullptr;};
    inline string getTransitRouterDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterDescription_, "") };
    inline CreateTransitRouterRequest& setTransitRouterDescription(string transitRouterDescription) { DARABONBA_PTR_SET_VALUE(transitRouterDescription_, transitRouterDescription) };


    // transitRouterName Field Functions 
    bool hasTransitRouterName() const { return this->transitRouterName_ != nullptr;};
    void deleteTransitRouterName() { this->transitRouterName_ = nullptr;};
    inline string getTransitRouterName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterName_, "") };
    inline CreateTransitRouterRequest& setTransitRouterName(string transitRouterName) { DARABONBA_PTR_SET_VALUE(transitRouterName_, transitRouterName) };


  protected:
    // The ID of the Cloud Enterprise Network (CEN) instance.
    // 
    // This parameter is required.
    shared_ptr<string> cenId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, the system automatically uses **RequestId** as **ClientToken**. The value of **RequestId** of each API request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to check the request without performing the operation. Check items include permissions and the status of the specified cloud resources. Valid values:
    // 
    // *   **false** (default): sends the request. If the request passes the check, an Enterprise Edition transit router is created.
    // *   **true**: checks the request but does not create the Enterprise Edition transit router. If you use this value, the system checks whether the required parameters are set, and whether the request syntax is valid. If the request fails the check, an error message is returned. If the request passes the check, the `DryRunOperation` error code is returned.
    shared_ptr<bool> dryRun_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the Enterprise Edition transit router is deployed.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to enable the multicast feature for the Enterprise Edition transit router. Valid values:
    // 
    // *   **false** (default): no
    // *   **true**: yes
    // 
    // The multicast feature is supported only in specific regions. You can call [ListTransitRouterAvailableResource](https://help.aliyun.com/document_detail/261356.html) to query the regions that support multicast.
    shared_ptr<bool> supportMulticast_ {};
    // The tags.
    shared_ptr<vector<CreateTransitRouterRequest::Tag>> tag_ {};
    // The CIDR blocks to be added to the transit router.
    shared_ptr<vector<CreateTransitRouterRequest::TransitRouterCidrList>> transitRouterCidrList_ {};
    // The description of the Enterprise Edition transit router instance.
    // 
    // The description must be 1 to 256 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    shared_ptr<string> transitRouterDescription_ {};
    // The name of the Enterprise Edition transit router.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    shared_ptr<string> transitRouterName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
