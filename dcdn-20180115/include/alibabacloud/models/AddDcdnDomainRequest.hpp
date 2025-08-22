// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDCDNDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDCDNDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddDcdnDomainRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class AddDcdnDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDcdnDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckUrl, checkUrl_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TopLevelDomain, topLevelDomain_);
    };
    friend void from_json(const Darabonba::Json& j, AddDcdnDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckUrl, checkUrl_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TopLevelDomain, topLevelDomain_);
    };
    AddDcdnDomainRequest() = default ;
    AddDcdnDomainRequest(const AddDcdnDomainRequest &) = default ;
    AddDcdnDomainRequest(AddDcdnDomainRequest &&) = default ;
    AddDcdnDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDcdnDomainRequest() = default ;
    AddDcdnDomainRequest& operator=(const AddDcdnDomainRequest &) = default ;
    AddDcdnDomainRequest& operator=(AddDcdnDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkUrl_ != nullptr
        && this->domainName_ != nullptr && this->functionType_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->scene_ != nullptr && this->scope_ != nullptr && this->securityToken_ != nullptr && this->sources_ != nullptr && this->tag_ != nullptr
        && this->topLevelDomain_ != nullptr; };
    // checkUrl Field Functions 
    bool hasCheckUrl() const { return this->checkUrl_ != nullptr;};
    void deleteCheckUrl() { this->checkUrl_ = nullptr;};
    inline string checkUrl() const { DARABONBA_PTR_GET_DEFAULT(checkUrl_, "") };
    inline AddDcdnDomainRequest& setCheckUrl(string checkUrl) { DARABONBA_PTR_SET_VALUE(checkUrl_, checkUrl) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddDcdnDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string functionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline AddDcdnDomainRequest& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AddDcdnDomainRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddDcdnDomainRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AddDcdnDomainRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline AddDcdnDomainRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline AddDcdnDomainRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline AddDcdnDomainRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline string sources() const { DARABONBA_PTR_GET_DEFAULT(sources_, "") };
    inline AddDcdnDomainRequest& setSources(string sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<AddDcdnDomainRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<AddDcdnDomainRequestTag>) };
    inline vector<AddDcdnDomainRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<AddDcdnDomainRequestTag>) };
    inline AddDcdnDomainRequest& setTag(const vector<AddDcdnDomainRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline AddDcdnDomainRequest& setTag(vector<AddDcdnDomainRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // topLevelDomain Field Functions 
    bool hasTopLevelDomain() const { return this->topLevelDomain_ != nullptr;};
    void deleteTopLevelDomain() { this->topLevelDomain_ = nullptr;};
    inline string topLevelDomain() const { DARABONBA_PTR_GET_DEFAULT(topLevelDomain_, "") };
    inline AddDcdnDomainRequest& setTopLevelDomain(string topLevelDomain) { DARABONBA_PTR_SET_VALUE(topLevelDomain_, topLevelDomain) };


  protected:
    // The URL that is used for health checks.
    std::shared_ptr<string> checkUrl_ = nullptr;
    // The domain name that you want to add. You can specify only one domain name in each request.
    // 
    // Wildcard domain names are supported. A wildcard domain name must start with a period (.), such as .example.com.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // Computing service type. Valid values:
    // 
    // *   **routine**
    // *   **image**
    // *   **cloudFunction**
    std::shared_ptr<string> functionType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the resource group. If you do not specify a value for this parameter, the system automatically assigns the ID of the default resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The Acceleration scen. Supported:
    // 
    // * apiscene:API acceleration.
    // * webservicescene: accelerate website business.
    // * staticscene: video and graphic acceleration.
    // * (Empty): no scene.
    std::shared_ptr<string> scene_ = nullptr;
    // The acceleration region. Valid values:
    // 
    // *   **domestic**: Chinese mainland
    // *   **overseas**: outside the Chinese mainland
    // *   **global**: global
    // 
    // Default value: **domestic**.
    std::shared_ptr<string> scope_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The information about the addresses of origin servers.
    std::shared_ptr<string> sources_ = nullptr;
    // The information about the tags.
    std::shared_ptr<vector<AddDcdnDomainRequestTag>> tag_ = nullptr;
    // The top-level domain.
    std::shared_ptr<string> topLevelDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
