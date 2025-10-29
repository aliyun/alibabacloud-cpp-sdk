// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVEDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVEDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddLiveDomainRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddLiveDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLiveDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckUrl, checkUrl_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(LiveDomainType, liveDomainType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TopLevelDomain, topLevelDomain_);
    };
    friend void from_json(const Darabonba::Json& j, AddLiveDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckUrl, checkUrl_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(LiveDomainType, liveDomainType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TopLevelDomain, topLevelDomain_);
    };
    AddLiveDomainRequest() = default ;
    AddLiveDomainRequest(const AddLiveDomainRequest &) = default ;
    AddLiveDomainRequest(AddLiveDomainRequest &&) = default ;
    AddLiveDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLiveDomainRequest() = default ;
    AddLiveDomainRequest& operator=(const AddLiveDomainRequest &) = default ;
    AddLiveDomainRequest& operator=(AddLiveDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkUrl_ == nullptr
        && return this->domainName_ == nullptr && return this->liveDomainType_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->region_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->scope_ == nullptr && return this->securityToken_ == nullptr && return this->tag_ == nullptr && return this->topLevelDomain_ == nullptr; };
    // checkUrl Field Functions 
    bool hasCheckUrl() const { return this->checkUrl_ != nullptr;};
    void deleteCheckUrl() { this->checkUrl_ = nullptr;};
    inline string checkUrl() const { DARABONBA_PTR_GET_DEFAULT(checkUrl_, "") };
    inline AddLiveDomainRequest& setCheckUrl(string checkUrl) { DARABONBA_PTR_SET_VALUE(checkUrl_, checkUrl) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddLiveDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // liveDomainType Field Functions 
    bool hasLiveDomainType() const { return this->liveDomainType_ != nullptr;};
    void deleteLiveDomainType() { this->liveDomainType_ = nullptr;};
    inline string liveDomainType() const { DARABONBA_PTR_GET_DEFAULT(liveDomainType_, "") };
    inline AddLiveDomainRequest& setLiveDomainType(string liveDomainType) { DARABONBA_PTR_SET_VALUE(liveDomainType_, liveDomainType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AddLiveDomainRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddLiveDomainRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline AddLiveDomainRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AddLiveDomainRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline AddLiveDomainRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline AddLiveDomainRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<AddLiveDomainRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<AddLiveDomainRequestTag>) };
    inline vector<AddLiveDomainRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<AddLiveDomainRequestTag>) };
    inline AddLiveDomainRequest& setTag(const vector<AddLiveDomainRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline AddLiveDomainRequest& setTag(vector<AddLiveDomainRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // topLevelDomain Field Functions 
    bool hasTopLevelDomain() const { return this->topLevelDomain_ != nullptr;};
    void deleteTopLevelDomain() { this->topLevelDomain_ = nullptr;};
    inline string topLevelDomain() const { DARABONBA_PTR_GET_DEFAULT(topLevelDomain_, "") };
    inline AddLiveDomainRequest& setTopLevelDomain(string topLevelDomain) { DARABONBA_PTR_SET_VALUE(topLevelDomain_, topLevelDomain) };


  protected:
    // The URL that is used for health checks.
    std::shared_ptr<string> checkUrl_ = nullptr;
    // The ingest domain or streaming domain that you want to add. Wildcard domain names that start with a period (.) are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The type of the domain name. Valid values:
    // 
    // *   **liveVideo**: streaming domain. This value is required if you set the DomainName parameter to a streaming domain.
    // *   **liveEdge**: ingest domain. This value is required if you set the DomainName parameter to an ingest domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> liveDomainType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region in which the domain name resides. Valid values:
    // 
    // *   **cn-beijing**: China (Beijing)
    // *   **cn-shanghai**: China (Shanghai)
    // *   **cn-shenzhen**: China (Shenzhen)
    // *   **cn-qingdao**: China (Qingdao)
    // *   **ap-southeast-1**: Singapore
    // *   **eu-central-1**: Germany (Frankfurt)
    // *   **ap-northeast-1**: Japan (Tokyo)
    // *   **ap-southeast-5**: Indonesia (Jakarta)
    // 
    // >  Make sure that the settings of the Region and Scope parameters do not conflict with each other.
    // 
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    // The ID of the resource group. For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/2381067.html).
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The edge group. This parameter is applicable to users of level 3 or higher in mainland China and users outside mainland China. Valid values:
    // 
    // *   **domestic**: mainland China. This is the default value.
    // *   **overseas**: outside mainland China.
    // *   **global**: regions in and outside mainland China.
    std::shared_ptr<string> scope_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The tags.
    std::shared_ptr<vector<AddLiveDomainRequestTag>> tag_ = nullptr;
    // The top-level domain name.
    std::shared_ptr<string> topLevelDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
