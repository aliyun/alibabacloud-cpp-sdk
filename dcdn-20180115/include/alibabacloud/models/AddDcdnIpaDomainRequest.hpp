// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDCDNIPADOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDCDNIPADOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class AddDcdnIpaDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDcdnIpaDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckUrl, checkUrl_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_PTR_TO_JSON(TopLevelDomain, topLevelDomain_);
    };
    friend void from_json(const Darabonba::Json& j, AddDcdnIpaDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckUrl, checkUrl_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_PTR_FROM_JSON(TopLevelDomain, topLevelDomain_);
    };
    AddDcdnIpaDomainRequest() = default ;
    AddDcdnIpaDomainRequest(const AddDcdnIpaDomainRequest &) = default ;
    AddDcdnIpaDomainRequest(AddDcdnIpaDomainRequest &&) = default ;
    AddDcdnIpaDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDcdnIpaDomainRequest() = default ;
    AddDcdnIpaDomainRequest& operator=(const AddDcdnIpaDomainRequest &) = default ;
    AddDcdnIpaDomainRequest& operator=(AddDcdnIpaDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkUrl_ != nullptr
        && this->domainName_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->protocol_ != nullptr && this->resourceGroupId_ != nullptr
        && this->scope_ != nullptr && this->securityToken_ != nullptr && this->sources_ != nullptr && this->topLevelDomain_ != nullptr; };
    // checkUrl Field Functions 
    bool hasCheckUrl() const { return this->checkUrl_ != nullptr;};
    void deleteCheckUrl() { this->checkUrl_ = nullptr;};
    inline string checkUrl() const { DARABONBA_PTR_GET_DEFAULT(checkUrl_, "") };
    inline AddDcdnIpaDomainRequest& setCheckUrl(string checkUrl) { DARABONBA_PTR_SET_VALUE(checkUrl_, checkUrl) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddDcdnIpaDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AddDcdnIpaDomainRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddDcdnIpaDomainRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline AddDcdnIpaDomainRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AddDcdnIpaDomainRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline AddDcdnIpaDomainRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline AddDcdnIpaDomainRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline string sources() const { DARABONBA_PTR_GET_DEFAULT(sources_, "") };
    inline AddDcdnIpaDomainRequest& setSources(string sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };


    // topLevelDomain Field Functions 
    bool hasTopLevelDomain() const { return this->topLevelDomain_ != nullptr;};
    void deleteTopLevelDomain() { this->topLevelDomain_ = nullptr;};
    inline string topLevelDomain() const { DARABONBA_PTR_GET_DEFAULT(topLevelDomain_, "") };
    inline AddDcdnIpaDomainRequest& setTopLevelDomain(string topLevelDomain) { DARABONBA_PTR_SET_VALUE(topLevelDomain_, topLevelDomain) };


  protected:
    // The URL that is used for health checks.
    std::shared_ptr<string> checkUrl_ = nullptr;
    // The domain name to be added to IPA.
    // 
    // A wildcard domain that starts with a period (.) is supported, such as .example.com.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The protocol. Valid values:
    // 
    // *   **udp**
    // *   **tcp**
    // 
    // **
    // 
    // **Description** For example: `{"protocol":"udp"}`.
    std::shared_ptr<string> protocol_ = nullptr;
    // The ID of the resource group. If you do not specify a value for this parameter, the system automatically assigns the ID of the default resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The acceleration region. Default value: domestic. Valid values:
    // 
    // *   **domestic**: Chinese mainland
    // *   **overseas**: outside the Chinese mainland
    // *   **global**: global
    std::shared_ptr<string> scope_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The information about the addresses of origin servers.
    // 
    // This parameter is required.
    std::shared_ptr<string> sources_ = nullptr;
    // The top-level domain.
    std::shared_ptr<string> topLevelDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
