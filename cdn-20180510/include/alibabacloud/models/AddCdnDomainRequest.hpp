// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCDNDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCDNDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddCdnDomainRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class AddCdnDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCdnDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdnType, cdnType_);
      DARABONBA_PTR_TO_JSON(CheckUrl, checkUrl_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TopLevelDomain, topLevelDomain_);
    };
    friend void from_json(const Darabonba::Json& j, AddCdnDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdnType, cdnType_);
      DARABONBA_PTR_FROM_JSON(CheckUrl, checkUrl_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TopLevelDomain, topLevelDomain_);
    };
    AddCdnDomainRequest() = default ;
    AddCdnDomainRequest(const AddCdnDomainRequest &) = default ;
    AddCdnDomainRequest(AddCdnDomainRequest &&) = default ;
    AddCdnDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCdnDomainRequest() = default ;
    AddCdnDomainRequest& operator=(const AddCdnDomainRequest &) = default ;
    AddCdnDomainRequest& operator=(AddCdnDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdnType_ == nullptr
        && return this->checkUrl_ == nullptr && return this->domainName_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->scope_ == nullptr && return this->securityToken_ == nullptr && return this->sources_ == nullptr && return this->tag_ == nullptr && return this->topLevelDomain_ == nullptr; };
    // cdnType Field Functions 
    bool hasCdnType() const { return this->cdnType_ != nullptr;};
    void deleteCdnType() { this->cdnType_ = nullptr;};
    inline string cdnType() const { DARABONBA_PTR_GET_DEFAULT(cdnType_, "") };
    inline AddCdnDomainRequest& setCdnType(string cdnType) { DARABONBA_PTR_SET_VALUE(cdnType_, cdnType) };


    // checkUrl Field Functions 
    bool hasCheckUrl() const { return this->checkUrl_ != nullptr;};
    void deleteCheckUrl() { this->checkUrl_ = nullptr;};
    inline string checkUrl() const { DARABONBA_PTR_GET_DEFAULT(checkUrl_, "") };
    inline AddCdnDomainRequest& setCheckUrl(string checkUrl) { DARABONBA_PTR_SET_VALUE(checkUrl_, checkUrl) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddCdnDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AddCdnDomainRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddCdnDomainRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AddCdnDomainRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline AddCdnDomainRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline AddCdnDomainRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline string sources() const { DARABONBA_PTR_GET_DEFAULT(sources_, "") };
    inline AddCdnDomainRequest& setSources(string sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<AddCdnDomainRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<AddCdnDomainRequestTag>) };
    inline vector<AddCdnDomainRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<AddCdnDomainRequestTag>) };
    inline AddCdnDomainRequest& setTag(const vector<AddCdnDomainRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline AddCdnDomainRequest& setTag(vector<AddCdnDomainRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // topLevelDomain Field Functions 
    bool hasTopLevelDomain() const { return this->topLevelDomain_ != nullptr;};
    void deleteTopLevelDomain() { this->topLevelDomain_ = nullptr;};
    inline string topLevelDomain() const { DARABONBA_PTR_GET_DEFAULT(topLevelDomain_, "") };
    inline AddCdnDomainRequest& setTopLevelDomain(string topLevelDomain) { DARABONBA_PTR_SET_VALUE(topLevelDomain_, topLevelDomain) };


  protected:
    // The workload type of the accelerated domain name. Valid values:
    // 
    // *   **web**: images and small files
    // *   **download**: large files
    // *   **video**: on-demand video and audio streaming
    // 
    // This parameter is required.
    std::shared_ptr<string> cdnType_ = nullptr;
    // The URL that is used to check the accessibility of the origin server.
    std::shared_ptr<string> checkUrl_ = nullptr;
    // The domain name that you want to add to Alibaba Cloud CDN.
    // 
    // A wildcard domain that starts with a period (.) is supported, such as .example.com.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the resource group.
    // 
    // If you do not set this parameter, the system uses the ID of the default resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The acceleration region. Default value: domestic. Valid values:
    // 
    // *   **domestic**: Chinese mainland
    // *   **overseas**: global (excluding the Chinese mainland)
    // *   **global**: global
    std::shared_ptr<string> scope_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The information about the addresses of origin servers.
    // 
    // This parameter is required.
    std::shared_ptr<string> sources_ = nullptr;
    // Details about the tags. You can specify up to 20 tags.
    std::shared_ptr<vector<AddCdnDomainRequestTag>> tag_ = nullptr;
    // The top-level domain.
    std::shared_ptr<string> topLevelDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
