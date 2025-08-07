// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOMAINSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOMAINSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDomainShrinkRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateDomainShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDomainShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Listen, listenShrink_);
      DARABONBA_PTR_TO_JSON(Redirect, redirectShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDomainShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Listen, listenShrink_);
      DARABONBA_PTR_FROM_JSON(Redirect, redirectShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateDomainShrinkRequest() = default ;
    CreateDomainShrinkRequest(const CreateDomainShrinkRequest &) = default ;
    CreateDomainShrinkRequest(CreateDomainShrinkRequest &&) = default ;
    CreateDomainShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDomainShrinkRequest() = default ;
    CreateDomainShrinkRequest& operator=(const CreateDomainShrinkRequest &) = default ;
    CreateDomainShrinkRequest& operator=(CreateDomainShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessType_ != nullptr
        && this->domain_ != nullptr && this->instanceId_ != nullptr && this->listenShrink_ != nullptr && this->redirectShrink_ != nullptr && this->regionId_ != nullptr
        && this->resourceManagerResourceGroupId_ != nullptr && this->tag_ != nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline CreateDomainShrinkRequest& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateDomainShrinkRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDomainShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // listenShrink Field Functions 
    bool hasListenShrink() const { return this->listenShrink_ != nullptr;};
    void deleteListenShrink() { this->listenShrink_ = nullptr;};
    inline string listenShrink() const { DARABONBA_PTR_GET_DEFAULT(listenShrink_, "") };
    inline CreateDomainShrinkRequest& setListenShrink(string listenShrink) { DARABONBA_PTR_SET_VALUE(listenShrink_, listenShrink) };


    // redirectShrink Field Functions 
    bool hasRedirectShrink() const { return this->redirectShrink_ != nullptr;};
    void deleteRedirectShrink() { this->redirectShrink_ = nullptr;};
    inline string redirectShrink() const { DARABONBA_PTR_GET_DEFAULT(redirectShrink_, "") };
    inline CreateDomainShrinkRequest& setRedirectShrink(string redirectShrink) { DARABONBA_PTR_SET_VALUE(redirectShrink_, redirectShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDomainShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline CreateDomainShrinkRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDomainShrinkRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDomainShrinkRequestTag>) };
    inline vector<CreateDomainShrinkRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateDomainShrinkRequestTag>) };
    inline CreateDomainShrinkRequest& setTag(const vector<CreateDomainShrinkRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDomainShrinkRequest& setTag(vector<CreateDomainShrinkRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The mode in which you want to add the domain name to WAF. Valid values:
    // 
    // *   **share:** adds the domain name to WAF in CNAME record mode. This is the default value.
    // *   **hybrid_cloud_cname:** adds the domain name to WAF in hybrid cloud reverse proxy mode.
    std::shared_ptr<string> accessType_ = nullptr;
    // The domain name that you want to add to WAF.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // > You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to obtain the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The listener configurations.
    // 
    // This parameter is required.
    std::shared_ptr<string> listenShrink_ = nullptr;
    // The forwarding configurations.
    // 
    // This parameter is required.
    std::shared_ptr<string> redirectShrink_ = nullptr;
    // The region where the WAF instance resides. Valid values:
    // 
    // *   **cn-hangzhou**: the Chinese mainland
    // *   **ap-southeast-1**: outside the Chinese mainland
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The tags. You can specify up to 20 tags.
    std::shared_ptr<vector<CreateDomainShrinkRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
