// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTRANSITROUTERMULTICASTDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTRANSITROUTERMULTICASTDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyTransitRouterMulticastDomainRequestOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ModifyTransitRouterMulticastDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTransitRouterMulticastDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomainDescription, transitRouterMulticastDomainDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
      DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomainName, transitRouterMulticastDomainName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTransitRouterMulticastDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomainDescription, transitRouterMulticastDomainDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomainName, transitRouterMulticastDomainName_);
    };
    ModifyTransitRouterMulticastDomainRequest() = default ;
    ModifyTransitRouterMulticastDomainRequest(const ModifyTransitRouterMulticastDomainRequest &) = default ;
    ModifyTransitRouterMulticastDomainRequest(ModifyTransitRouterMulticastDomainRequest &&) = default ;
    ModifyTransitRouterMulticastDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTransitRouterMulticastDomainRequest() = default ;
    ModifyTransitRouterMulticastDomainRequest& operator=(const ModifyTransitRouterMulticastDomainRequest &) = default ;
    ModifyTransitRouterMulticastDomainRequest& operator=(ModifyTransitRouterMulticastDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->options_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->transitRouterMulticastDomainDescription_ != nullptr && this->transitRouterMulticastDomainId_ != nullptr && this->transitRouterMulticastDomainName_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyTransitRouterMulticastDomainRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyTransitRouterMulticastDomainRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const ModifyTransitRouterMulticastDomainRequestOptions & options() const { DARABONBA_PTR_GET_CONST(options_, ModifyTransitRouterMulticastDomainRequestOptions) };
    inline ModifyTransitRouterMulticastDomainRequestOptions options() { DARABONBA_PTR_GET(options_, ModifyTransitRouterMulticastDomainRequestOptions) };
    inline ModifyTransitRouterMulticastDomainRequest& setOptions(const ModifyTransitRouterMulticastDomainRequestOptions & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline ModifyTransitRouterMulticastDomainRequest& setOptions(ModifyTransitRouterMulticastDomainRequestOptions && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyTransitRouterMulticastDomainRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyTransitRouterMulticastDomainRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyTransitRouterMulticastDomainRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyTransitRouterMulticastDomainRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transitRouterMulticastDomainDescription Field Functions 
    bool hasTransitRouterMulticastDomainDescription() const { return this->transitRouterMulticastDomainDescription_ != nullptr;};
    void deleteTransitRouterMulticastDomainDescription() { this->transitRouterMulticastDomainDescription_ = nullptr;};
    inline string transitRouterMulticastDomainDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainDescription_, "") };
    inline ModifyTransitRouterMulticastDomainRequest& setTransitRouterMulticastDomainDescription(string transitRouterMulticastDomainDescription) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainDescription_, transitRouterMulticastDomainDescription) };


    // transitRouterMulticastDomainId Field Functions 
    bool hasTransitRouterMulticastDomainId() const { return this->transitRouterMulticastDomainId_ != nullptr;};
    void deleteTransitRouterMulticastDomainId() { this->transitRouterMulticastDomainId_ = nullptr;};
    inline string transitRouterMulticastDomainId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainId_, "") };
    inline ModifyTransitRouterMulticastDomainRequest& setTransitRouterMulticastDomainId(string transitRouterMulticastDomainId) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainId_, transitRouterMulticastDomainId) };


    // transitRouterMulticastDomainName Field Functions 
    bool hasTransitRouterMulticastDomainName() const { return this->transitRouterMulticastDomainName_ != nullptr;};
    void deleteTransitRouterMulticastDomainName() { this->transitRouterMulticastDomainName_ = nullptr;};
    inline string transitRouterMulticastDomainName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainName_, "") };
    inline ModifyTransitRouterMulticastDomainRequest& setTransitRouterMulticastDomainName(string transitRouterMulticastDomainName) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainName_, transitRouterMulticastDomainName) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // Multicast domain feature.
    std::shared_ptr<ModifyTransitRouterMulticastDomainRequestOptions> options_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The new description of the multicast domain.
    // 
    // This parameter is optional. If you enter a description, it must be 1 to 256 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> transitRouterMulticastDomainDescription_ = nullptr;
    // The ID of the multicast domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterMulticastDomainId_ = nullptr;
    // The new name of the multicast domain.
    // 
    // The name can be empty or 1 to 128 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> transitRouterMulticastDomainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
