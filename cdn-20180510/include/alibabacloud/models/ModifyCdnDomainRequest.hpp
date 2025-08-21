// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCDNDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCDNDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ModifyCdnDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCdnDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_PTR_TO_JSON(TopLevelDomain, topLevelDomain_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCdnDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_PTR_FROM_JSON(TopLevelDomain, topLevelDomain_);
    };
    ModifyCdnDomainRequest() = default ;
    ModifyCdnDomainRequest(const ModifyCdnDomainRequest &) = default ;
    ModifyCdnDomainRequest(ModifyCdnDomainRequest &&) = default ;
    ModifyCdnDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCdnDomainRequest() = default ;
    ModifyCdnDomainRequest& operator=(const ModifyCdnDomainRequest &) = default ;
    ModifyCdnDomainRequest& operator=(ModifyCdnDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->ownerId_ != nullptr && this->resourceGroupId_ != nullptr && this->securityToken_ != nullptr && this->sources_ != nullptr && this->topLevelDomain_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ModifyCdnDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyCdnDomainRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyCdnDomainRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyCdnDomainRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline string sources() const { DARABONBA_PTR_GET_DEFAULT(sources_, "") };
    inline ModifyCdnDomainRequest& setSources(string sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };


    // topLevelDomain Field Functions 
    bool hasTopLevelDomain() const { return this->topLevelDomain_ != nullptr;};
    void deleteTopLevelDomain() { this->topLevelDomain_ = nullptr;};
    inline string topLevelDomain() const { DARABONBA_PTR_GET_DEFAULT(topLevelDomain_, "") };
    inline ModifyCdnDomainRequest& setTopLevelDomain(string topLevelDomain) { DARABONBA_PTR_SET_VALUE(topLevelDomain_, topLevelDomain) };


  protected:
    // The accelerated domain name. You can specify only one domain name in each request.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The information about the addresses of origin servers.
    // 
    // > Do not set **Sources** and **TopLevelDomain** at the same time. If you set **Sources** and **TopLevelDomain** at the same time, **TopLevelDomain** does not take effect.
    std::shared_ptr<string> sources_ = nullptr;
    // The root domain. To add a root domain name, you must be added to the whitelist specified by the CDN_TOP_LEVEL_DOMAIN_GREY_USER_LIST parameter.
    // 
    // > Do not set **Sources** and **TopLevelDomain** at the same time. If you set **Sources** and **TopLevelDomain** at the same time, **TopLevelDomain** does not take effect.
    std::shared_ptr<string> topLevelDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
