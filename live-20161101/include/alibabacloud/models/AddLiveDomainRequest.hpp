// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVEDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVEDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->checkUrl_ == nullptr
        && this->domainName_ == nullptr && this->liveDomainType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->region_ == nullptr
        && this->resourceGroupId_ == nullptr && this->scope_ == nullptr && this->securityToken_ == nullptr && this->tag_ == nullptr && this->topLevelDomain_ == nullptr; };
    // checkUrl Field Functions 
    bool hasCheckUrl() const { return this->checkUrl_ != nullptr;};
    void deleteCheckUrl() { this->checkUrl_ = nullptr;};
    inline string getCheckUrl() const { DARABONBA_PTR_GET_DEFAULT(checkUrl_, "") };
    inline AddLiveDomainRequest& setCheckUrl(string checkUrl) { DARABONBA_PTR_SET_VALUE(checkUrl_, checkUrl) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddLiveDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // liveDomainType Field Functions 
    bool hasLiveDomainType() const { return this->liveDomainType_ != nullptr;};
    void deleteLiveDomainType() { this->liveDomainType_ = nullptr;};
    inline string getLiveDomainType() const { DARABONBA_PTR_GET_DEFAULT(liveDomainType_, "") };
    inline AddLiveDomainRequest& setLiveDomainType(string liveDomainType) { DARABONBA_PTR_SET_VALUE(liveDomainType_, liveDomainType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AddLiveDomainRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddLiveDomainRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline AddLiveDomainRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AddLiveDomainRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline AddLiveDomainRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline AddLiveDomainRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<AddLiveDomainRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<AddLiveDomainRequest::Tag>) };
    inline vector<AddLiveDomainRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<AddLiveDomainRequest::Tag>) };
    inline AddLiveDomainRequest& setTag(const vector<AddLiveDomainRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline AddLiveDomainRequest& setTag(vector<AddLiveDomainRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // topLevelDomain Field Functions 
    bool hasTopLevelDomain() const { return this->topLevelDomain_ != nullptr;};
    void deleteTopLevelDomain() { this->topLevelDomain_ = nullptr;};
    inline string getTopLevelDomain() const { DARABONBA_PTR_GET_DEFAULT(topLevelDomain_, "") };
    inline AddLiveDomainRequest& setTopLevelDomain(string topLevelDomain) { DARABONBA_PTR_SET_VALUE(topLevelDomain_, topLevelDomain) };


  protected:
    // The health check URL.
    shared_ptr<string> checkUrl_ {};
    // The ingest domain or streaming domain to be connected to ApsaraVideo Live. Wildcard domain names are supported and must start with a period (.).
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The type of the domain name. Valid values:
    // 
    // - **liveVideo**: streaming domain. If you set DomainName (the domain name to be connected to ApsaraVideo Live) to a streaming domain, you must set this parameter to liveVideo.
    // - **liveEdge**: edge ingest domain. If you set DomainName (the domain name to be connected to ApsaraVideo Live) to an ingest domain, you must set this parameter to liveEdge.
    // 
    // This parameter is required.
    shared_ptr<string> liveDomainType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The unit information of the live streaming domain name. Valid values:
    // 
    // - **cn-beijing**: Beijing.
    // - **cn-shanghai**: Shanghai.
    // - **cn-shenzhen**: Shenzhen.
    // - **cn-qingdao**: Qingdao.
    // - **ap-southeast-1**: Singapore.
    // - **eu-central-1**: Germany.
    // - **ap-northeast-1**: Tokyo.
    // - **ap-southeast-5**: Jakarta.
    // 
    // >Region (unit information of the live streaming domain name) and Scope (acceleration region) do not restrict each other.
    // 
    // This parameter is required.
    shared_ptr<string> region_ {};
    // The resource group ID. For more information about resource groups, see [What is a resource group](https://help.aliyun.com/document_detail/2381067.html).
    shared_ptr<string> resourceGroupId_ {};
    // The acceleration region. This parameter takes effect for international users and China site users at L3 or above. Valid values:
    // 
    // - **domestic** (default): the Chinese mainland.
    // - **overseas**: outside the Chinese mainland, including Hong Kong (China), Macao (China), and Taiwan (China).
    // - **global**: global acceleration.
    shared_ptr<string> scope_ {};
    shared_ptr<string> securityToken_ {};
    // The list of tags.
    shared_ptr<vector<AddLiveDomainRequest::Tag>> tag_ {};
    // The top-level domain name for access.
    shared_ptr<string> topLevelDomain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
