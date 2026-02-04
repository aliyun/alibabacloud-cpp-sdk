// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERMULTICASTDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERMULTICASTDOMAINREQUEST_HPP_
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
  class CreateTransitRouterMulticastDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterMulticastDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomainDescription, transitRouterMulticastDomainDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomainName, transitRouterMulticastDomainName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterMulticastDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomainDescription, transitRouterMulticastDomainDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomainName, transitRouterMulticastDomainName_);
    };
    CreateTransitRouterMulticastDomainRequest() = default ;
    CreateTransitRouterMulticastDomainRequest(const CreateTransitRouterMulticastDomainRequest &) = default ;
    CreateTransitRouterMulticastDomainRequest(CreateTransitRouterMulticastDomainRequest &&) = default ;
    CreateTransitRouterMulticastDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterMulticastDomainRequest() = default ;
    CreateTransitRouterMulticastDomainRequest& operator=(const CreateTransitRouterMulticastDomainRequest &) = default ;
    CreateTransitRouterMulticastDomainRequest& operator=(CreateTransitRouterMulticastDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // The tag key cannot be an empty string. The tag key can be up to 64 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
      // 
      // You can specify at most 20 tag keys.
      shared_ptr<string> key_ {};
      // The tag value.
      // 
      // The tag value can be 0 to 128 characters in length, and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      // 
      // Each tag key must have a unique tag value. You can specify at most 20 tag values in each call.
      shared_ptr<string> value_ {};
    };

    class Options : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Options& obj) { 
        DARABONBA_PTR_TO_JSON(Igmpv2Support, igmpv2Support_);
      };
      friend void from_json(const Darabonba::Json& j, Options& obj) { 
        DARABONBA_PTR_FROM_JSON(Igmpv2Support, igmpv2Support_);
      };
      Options() = default ;
      Options(const Options &) = default ;
      Options(Options &&) = default ;
      Options(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Options() = default ;
      Options& operator=(const Options &) = default ;
      Options& operator=(Options &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->igmpv2Support_ == nullptr; };
      // igmpv2Support Field Functions 
      bool hasIgmpv2Support() const { return this->igmpv2Support_ != nullptr;};
      void deleteIgmpv2Support() { this->igmpv2Support_ = nullptr;};
      inline string getIgmpv2Support() const { DARABONBA_PTR_GET_DEFAULT(igmpv2Support_, "") };
      inline Options& setIgmpv2Support(string igmpv2Support) { DARABONBA_PTR_SET_VALUE(igmpv2Support_, igmpv2Support) };


    protected:
      // Indicates whether the IGMP feature is enabled for the multicast domain. Once enabled, hosts can dynamically join or leave multicast groups by using IGMP protocol. Valid values:
      // 
      // *   **enable**: enables IGMP.
      // *   **disable**(default): disables IGMP.
      // 
      // > *   The IGMP feature is in beta testing. To use it, contact your account manager.
      // > *   If you select this option, you cannot disable IPv6 after the VBR is created.
      shared_ptr<string> igmpv2Support_ {};
    };

    virtual bool empty() const override { return this->cenId_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->options_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tag_ == nullptr && this->transitRouterId_ == nullptr
        && this->transitRouterMulticastDomainDescription_ == nullptr && this->transitRouterMulticastDomainName_ == nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateTransitRouterMulticastDomainRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTransitRouterMulticastDomainRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTransitRouterMulticastDomainRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const CreateTransitRouterMulticastDomainRequest::Options & getOptions() const { DARABONBA_PTR_GET_CONST(options_, CreateTransitRouterMulticastDomainRequest::Options) };
    inline CreateTransitRouterMulticastDomainRequest::Options getOptions() { DARABONBA_PTR_GET(options_, CreateTransitRouterMulticastDomainRequest::Options) };
    inline CreateTransitRouterMulticastDomainRequest& setOptions(const CreateTransitRouterMulticastDomainRequest::Options & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline CreateTransitRouterMulticastDomainRequest& setOptions(CreateTransitRouterMulticastDomainRequest::Options && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTransitRouterMulticastDomainRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTransitRouterMulticastDomainRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTransitRouterMulticastDomainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTransitRouterMulticastDomainRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTransitRouterMulticastDomainRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateTransitRouterMulticastDomainRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateTransitRouterMulticastDomainRequest::Tag>) };
    inline vector<CreateTransitRouterMulticastDomainRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateTransitRouterMulticastDomainRequest::Tag>) };
    inline CreateTransitRouterMulticastDomainRequest& setTag(const vector<CreateTransitRouterMulticastDomainRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateTransitRouterMulticastDomainRequest& setTag(vector<CreateTransitRouterMulticastDomainRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline CreateTransitRouterMulticastDomainRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterMulticastDomainDescription Field Functions 
    bool hasTransitRouterMulticastDomainDescription() const { return this->transitRouterMulticastDomainDescription_ != nullptr;};
    void deleteTransitRouterMulticastDomainDescription() { this->transitRouterMulticastDomainDescription_ = nullptr;};
    inline string getTransitRouterMulticastDomainDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainDescription_, "") };
    inline CreateTransitRouterMulticastDomainRequest& setTransitRouterMulticastDomainDescription(string transitRouterMulticastDomainDescription) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainDescription_, transitRouterMulticastDomainDescription) };


    // transitRouterMulticastDomainName Field Functions 
    bool hasTransitRouterMulticastDomainName() const { return this->transitRouterMulticastDomainName_ != nullptr;};
    void deleteTransitRouterMulticastDomainName() { this->transitRouterMulticastDomainName_ = nullptr;};
    inline string getTransitRouterMulticastDomainName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainName_, "") };
    inline CreateTransitRouterMulticastDomainRequest& setTransitRouterMulticastDomainName(string transitRouterMulticastDomainName) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainName_, transitRouterMulticastDomainName) };


  protected:
    // The ID of the Cloud Enterprise Network (CEN) instance.
    shared_ptr<string> cenId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among different requests. The token can contain only ASCII characters.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true**: performs a dry run. The system checks the required parameters, request format, and limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and sends the request.
    shared_ptr<bool> dryRun_ {};
    // Multicast domain feature.
    shared_ptr<CreateTransitRouterMulticastDomainRequest::Options> options_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the transit router.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The information about the tags.
    // 
    // You can specify at most 20 tags in each call.
    shared_ptr<vector<CreateTransitRouterMulticastDomainRequest::Tag>> tag_ {};
    // The ID of the transit router.
    shared_ptr<string> transitRouterId_ {};
    // The description of the multicast domain.
    // 
    // The description must be 1 to 256 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    shared_ptr<string> transitRouterMulticastDomainDescription_ {};
    // The name of the multicast domain.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    shared_ptr<string> transitRouterMulticastDomainName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
