// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERROUTETABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERROUTETABLEREQUEST_HPP_
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
  class CreateTransitRouterRouteTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterRouteTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteTableOptions, routeTableOptions_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableDescription, transitRouterRouteTableDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableName, transitRouterRouteTableName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterRouteTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteTableOptions, routeTableOptions_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableDescription, transitRouterRouteTableDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableName, transitRouterRouteTableName_);
    };
    CreateTransitRouterRouteTableRequest() = default ;
    CreateTransitRouterRouteTableRequest(const CreateTransitRouterRouteTableRequest &) = default ;
    CreateTransitRouterRouteTableRequest(CreateTransitRouterRouteTableRequest &&) = default ;
    CreateTransitRouterRouteTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterRouteTableRequest() = default ;
    CreateTransitRouterRouteTableRequest& operator=(const CreateTransitRouterRouteTableRequest &) = default ;
    CreateTransitRouterRouteTableRequest& operator=(CreateTransitRouterRouteTableRequest &&) = default ;
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
      // The tag key of the resource.
      // 
      // The tag key cannot be an empty string. The tag key can be up to 64 characters in length and cannot start with \\`aliyun\\` or \\`acs:\\`. It cannot contain \\`http\\://\\` or \\`https\\://\\`.
      // 
      // You can specify up to 20 tag keys.
      shared_ptr<string> key_ {};
      // The tag value of the resource.
      // 
      // The tag value can be an empty string or a string of up to 128 characters. It cannot start with \\`aliyun\\` or \\`acs:\\` and cannot contain \\`http\\://\\` or \\`https\\://\\`.
      // 
      // Each tag key must have a unique tag value. You can specify up to 20 tag values.
      shared_ptr<string> value_ {};
    };

    class RouteTableOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteTableOptions& obj) { 
        DARABONBA_PTR_TO_JSON(MultiRegionECMP, multiRegionECMP_);
      };
      friend void from_json(const Darabonba::Json& j, RouteTableOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(MultiRegionECMP, multiRegionECMP_);
      };
      RouteTableOptions() = default ;
      RouteTableOptions(const RouteTableOptions &) = default ;
      RouteTableOptions(RouteTableOptions &&) = default ;
      RouteTableOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteTableOptions() = default ;
      RouteTableOptions& operator=(const RouteTableOptions &) = default ;
      RouteTableOptions& operator=(RouteTableOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->multiRegionECMP_ == nullptr; };
      // multiRegionECMP Field Functions 
      bool hasMultiRegionECMP() const { return this->multiRegionECMP_ != nullptr;};
      void deleteMultiRegionECMP() { this->multiRegionECMP_ = nullptr;};
      inline string getMultiRegionECMP() const { DARABONBA_PTR_GET_DEFAULT(multiRegionECMP_, "") };
      inline RouteTableOptions& setMultiRegionECMP(string multiRegionECMP) { DARABONBA_PTR_SET_VALUE(multiRegionECMP_, multiRegionECMP) };


    protected:
      // The multi-region equal-cost multi-path (ECMP) routing feature. Valid values:
      // 
      // - **disable** (default): disables the multi-region ECMP routing feature. If you disable the multi-region ECMP routing feature, routes that are learned from different regions but have the same prefix and attributes select the transit router with the smallest region ID as the next hop. The region ID is sorted in alphabetical order. In this case, the latency and bandwidth consumption of the traffic may change. Make sure that you are aware of the impact before you disable the feature.
      // 
      // - **enable**: enables the multi-region ECMP routing feature. If you enable the multi-region ECMP routing feature, routes that are learned from different regions but have the same prefix and attributes are considered ECMP routes. In this case, the latency and bandwidth consumption of the traffic may change. Make sure that you are aware of the impact before you enable the feature.
      shared_ptr<string> multiRegionECMP_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->routeTableOptions_ == nullptr && this->tag_ == nullptr && this->transitRouterId_ == nullptr && this->transitRouterRouteTableDescription_ == nullptr && this->transitRouterRouteTableName_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTransitRouterRouteTableRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTransitRouterRouteTableRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTransitRouterRouteTableRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTransitRouterRouteTableRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTransitRouterRouteTableRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTransitRouterRouteTableRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeTableOptions Field Functions 
    bool hasRouteTableOptions() const { return this->routeTableOptions_ != nullptr;};
    void deleteRouteTableOptions() { this->routeTableOptions_ = nullptr;};
    inline const CreateTransitRouterRouteTableRequest::RouteTableOptions & getRouteTableOptions() const { DARABONBA_PTR_GET_CONST(routeTableOptions_, CreateTransitRouterRouteTableRequest::RouteTableOptions) };
    inline CreateTransitRouterRouteTableRequest::RouteTableOptions getRouteTableOptions() { DARABONBA_PTR_GET(routeTableOptions_, CreateTransitRouterRouteTableRequest::RouteTableOptions) };
    inline CreateTransitRouterRouteTableRequest& setRouteTableOptions(const CreateTransitRouterRouteTableRequest::RouteTableOptions & routeTableOptions) { DARABONBA_PTR_SET_VALUE(routeTableOptions_, routeTableOptions) };
    inline CreateTransitRouterRouteTableRequest& setRouteTableOptions(CreateTransitRouterRouteTableRequest::RouteTableOptions && routeTableOptions) { DARABONBA_PTR_SET_RVALUE(routeTableOptions_, routeTableOptions) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateTransitRouterRouteTableRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateTransitRouterRouteTableRequest::Tag>) };
    inline vector<CreateTransitRouterRouteTableRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateTransitRouterRouteTableRequest::Tag>) };
    inline CreateTransitRouterRouteTableRequest& setTag(const vector<CreateTransitRouterRouteTableRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateTransitRouterRouteTableRequest& setTag(vector<CreateTransitRouterRouteTableRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline CreateTransitRouterRouteTableRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterRouteTableDescription Field Functions 
    bool hasTransitRouterRouteTableDescription() const { return this->transitRouterRouteTableDescription_ != nullptr;};
    void deleteTransitRouterRouteTableDescription() { this->transitRouterRouteTableDescription_ = nullptr;};
    inline string getTransitRouterRouteTableDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableDescription_, "") };
    inline CreateTransitRouterRouteTableRequest& setTransitRouterRouteTableDescription(string transitRouterRouteTableDescription) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableDescription_, transitRouterRouteTableDescription) };


    // transitRouterRouteTableName Field Functions 
    bool hasTransitRouterRouteTableName() const { return this->transitRouterRouteTableName_ != nullptr;};
    void deleteTransitRouterRouteTableName() { this->transitRouterRouteTableName_ = nullptr;};
    inline string getTransitRouterRouteTableName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableName_, "") };
    inline CreateTransitRouterRouteTableRequest& setTransitRouterRouteTableName(string transitRouterRouteTableName) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableName_, transitRouterRouteTableName) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // Generate a token from your client to ensure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the request as the **ClientToken**. The **RequestId** of each request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run. The system checks the request for potential issues, including required parameters, request format, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // 
    // - **false** (default): performs a dry run and sends the request. If the request passes the dry run, a custom route table is created.
    shared_ptr<bool> dryRun_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The features of the route table.
    shared_ptr<CreateTransitRouterRouteTableRequest::RouteTableOptions> routeTableOptions_ {};
    // The tag.
    // 
    // You can specify up to 20 tags in each call.
    shared_ptr<vector<CreateTransitRouterRouteTableRequest::Tag>> tag_ {};
    // The ID of the Enterprise Edition transit router instance.
    // 
    // This parameter is required.
    shared_ptr<string> transitRouterId_ {};
    // The description of the custom route table.
    // 
    // The description can be empty or 1 to 256 characters in length. It cannot start with \\`http\\://\\` or \\`https\\://\\`.
    shared_ptr<string> transitRouterRouteTableDescription_ {};
    // The name of the custom route table.
    // 
    // The name can be empty or 1 to 128 characters in length. It cannot start with \\`http\\://\\` or \\`https\\://\\`.
    shared_ptr<string> transitRouterRouteTableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
