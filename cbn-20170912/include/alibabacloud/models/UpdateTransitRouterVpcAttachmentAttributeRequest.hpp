// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRANSITROUTERVPCATTACHMENTATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRANSITROUTERVPCATTACHMENTATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class UpdateTransitRouterVpcAttachmentAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTransitRouterVpcAttachmentAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
      DARABONBA_PTR_TO_JSON(TransitRouterVPCAttachmentOptions, transitRouterVPCAttachmentOptions_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTransitRouterVpcAttachmentAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
      DARABONBA_PTR_FROM_JSON(TransitRouterVPCAttachmentOptions, transitRouterVPCAttachmentOptions_);
    };
    UpdateTransitRouterVpcAttachmentAttributeRequest() = default ;
    UpdateTransitRouterVpcAttachmentAttributeRequest(const UpdateTransitRouterVpcAttachmentAttributeRequest &) = default ;
    UpdateTransitRouterVpcAttachmentAttributeRequest(UpdateTransitRouterVpcAttachmentAttributeRequest &&) = default ;
    UpdateTransitRouterVpcAttachmentAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTransitRouterVpcAttachmentAttributeRequest() = default ;
    UpdateTransitRouterVpcAttachmentAttributeRequest& operator=(const UpdateTransitRouterVpcAttachmentAttributeRequest &) = default ;
    UpdateTransitRouterVpcAttachmentAttributeRequest& operator=(UpdateTransitRouterVpcAttachmentAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Options : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Options& obj) { 
        DARABONBA_PTR_TO_JSON(ApplianceModeSupport, applianceModeSupport_);
        DARABONBA_PTR_TO_JSON(Ipv6Support, ipv6Support_);
      };
      friend void from_json(const Darabonba::Json& j, Options& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplianceModeSupport, applianceModeSupport_);
        DARABONBA_PTR_FROM_JSON(Ipv6Support, ipv6Support_);
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
      virtual bool empty() const override { return this->applianceModeSupport_ == nullptr
        && this->ipv6Support_ == nullptr; };
      // applianceModeSupport Field Functions 
      bool hasApplianceModeSupport() const { return this->applianceModeSupport_ != nullptr;};
      void deleteApplianceModeSupport() { this->applianceModeSupport_ = nullptr;};
      inline string getApplianceModeSupport() const { DARABONBA_PTR_GET_DEFAULT(applianceModeSupport_, "") };
      inline Options& setApplianceModeSupport(string applianceModeSupport) { DARABONBA_PTR_SET_VALUE(applianceModeSupport_, applianceModeSupport) };


      // ipv6Support Field Functions 
      bool hasIpv6Support() const { return this->ipv6Support_ != nullptr;};
      void deleteIpv6Support() { this->ipv6Support_ = nullptr;};
      inline string getIpv6Support() const { DARABONBA_PTR_GET_DEFAULT(ipv6Support_, "") };
      inline Options& setIpv6Support(string ipv6Support) { DARABONBA_PTR_SET_VALUE(ipv6Support_, ipv6Support) };


    protected:
      shared_ptr<string> applianceModeSupport_ {};
      shared_ptr<string> ipv6Support_ {};
    };

    virtual bool empty() const override { return this->autoPublishRouteEnabled_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->options_ == nullptr && this->orderType_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->transitRouterAttachmentDescription_ == nullptr && this->transitRouterAttachmentId_ == nullptr
        && this->transitRouterAttachmentName_ == nullptr && this->transitRouterVPCAttachmentOptions_ == nullptr; };
    // autoPublishRouteEnabled Field Functions 
    bool hasAutoPublishRouteEnabled() const { return this->autoPublishRouteEnabled_ != nullptr;};
    void deleteAutoPublishRouteEnabled() { this->autoPublishRouteEnabled_ = nullptr;};
    inline bool getAutoPublishRouteEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoPublishRouteEnabled_, false) };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) { DARABONBA_PTR_SET_VALUE(autoPublishRouteEnabled_, autoPublishRouteEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const UpdateTransitRouterVpcAttachmentAttributeRequest::Options & getOptions() const { DARABONBA_PTR_GET_CONST(options_, UpdateTransitRouterVpcAttachmentAttributeRequest::Options) };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest::Options getOptions() { DARABONBA_PTR_GET(options_, UpdateTransitRouterVpcAttachmentAttributeRequest::Options) };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setOptions(const UpdateTransitRouterVpcAttachmentAttributeRequest::Options & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setOptions(UpdateTransitRouterVpcAttachmentAttributeRequest::Options && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transitRouterAttachmentDescription Field Functions 
    bool hasTransitRouterAttachmentDescription() const { return this->transitRouterAttachmentDescription_ != nullptr;};
    void deleteTransitRouterAttachmentDescription() { this->transitRouterAttachmentDescription_ = nullptr;};
    inline string getTransitRouterAttachmentDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentDescription_, "") };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setTransitRouterAttachmentDescription(string transitRouterAttachmentDescription) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentDescription_, transitRouterAttachmentDescription) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string getTransitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterAttachmentName Field Functions 
    bool hasTransitRouterAttachmentName() const { return this->transitRouterAttachmentName_ != nullptr;};
    void deleteTransitRouterAttachmentName() { this->transitRouterAttachmentName_ = nullptr;};
    inline string getTransitRouterAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentName_, "") };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setTransitRouterAttachmentName(string transitRouterAttachmentName) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentName_, transitRouterAttachmentName) };


    // transitRouterVPCAttachmentOptions Field Functions 
    bool hasTransitRouterVPCAttachmentOptions() const { return this->transitRouterVPCAttachmentOptions_ != nullptr;};
    void deleteTransitRouterVPCAttachmentOptions() { this->transitRouterVPCAttachmentOptions_ = nullptr;};
    inline const map<string, string> & getTransitRouterVPCAttachmentOptions() const { DARABONBA_PTR_GET_CONST(transitRouterVPCAttachmentOptions_, map<string, string>) };
    inline map<string, string> getTransitRouterVPCAttachmentOptions() { DARABONBA_PTR_GET(transitRouterVPCAttachmentOptions_, map<string, string>) };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setTransitRouterVPCAttachmentOptions(const map<string, string> & transitRouterVPCAttachmentOptions) { DARABONBA_PTR_SET_VALUE(transitRouterVPCAttachmentOptions_, transitRouterVPCAttachmentOptions) };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setTransitRouterVPCAttachmentOptions(map<string, string> && transitRouterVPCAttachmentOptions) { DARABONBA_PTR_SET_RVALUE(transitRouterVPCAttachmentOptions_, transitRouterVPCAttachmentOptions) };


  protected:
    // Specifies whether to allow the Enterprise Edition transit router to automatically advertise routes to the VPC.
    // 
    // - **false**: The transit router does not automatically advertise routes.
    // 
    // - **true**: The transit router automatically advertises routes.
    shared_ptr<bool> autoPublishRouteEnabled_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the token from your client, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the request as the **ClientToken**. The **RequestId** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run, which checks for issues such as permissions and instance status. Valid values:
    // 
    // - **false** (default): sends a normal request. After the request passes the check, the system modifies the name and description of the VPC connection.
    // 
    // - **true**: sends a check request. The system validates the request without modifying the VPC connection. If the check passes, the system returns the ID of the request. Otherwise, the system returns an error.
    shared_ptr<bool> dryRun_ {};
    // The billing method.
    shared_ptr<UpdateTransitRouterVpcAttachmentAttributeRequest::Options> options_ {};
    // The billing method.
    shared_ptr<string> orderType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The new description of the VPC connection.
    // 
    // The description can be empty or 1 to 256 characters in length, and cannot start with http\\:// or https\\://.
    shared_ptr<string> transitRouterAttachmentDescription_ {};
    // The ID of the VPC connection.
    // 
    // This parameter is required.
    shared_ptr<string> transitRouterAttachmentId_ {};
    // The new name of the VPC connection.
    // 
    // The name can be empty or 1 to 128 characters in length, and cannot start with http\\:// or https\\://.
    shared_ptr<string> transitRouterAttachmentName_ {};
    // The feature properties of the VPC connection. This parameter is deprecated. We recommend that you use the `Options` parameter.
    shared_ptr<map<string, string>> transitRouterVPCAttachmentOptions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
