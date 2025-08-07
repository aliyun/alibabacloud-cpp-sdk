// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDomainRequestListen.hpp>
#include <alibabacloud/models/CreateDomainRequestRedirect.hpp>
#include <vector>
#include <alibabacloud/models/CreateDomainRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Listen, listen_);
      DARABONBA_PTR_TO_JSON(Redirect, redirect_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Listen, listen_);
      DARABONBA_PTR_FROM_JSON(Redirect, redirect_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateDomainRequest() = default ;
    CreateDomainRequest(const CreateDomainRequest &) = default ;
    CreateDomainRequest(CreateDomainRequest &&) = default ;
    CreateDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDomainRequest() = default ;
    CreateDomainRequest& operator=(const CreateDomainRequest &) = default ;
    CreateDomainRequest& operator=(CreateDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessType_ != nullptr
        && this->domain_ != nullptr && this->instanceId_ != nullptr && this->listen_ != nullptr && this->redirect_ != nullptr && this->regionId_ != nullptr
        && this->resourceManagerResourceGroupId_ != nullptr && this->tag_ != nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline CreateDomainRequest& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateDomainRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDomainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // listen Field Functions 
    bool hasListen() const { return this->listen_ != nullptr;};
    void deleteListen() { this->listen_ = nullptr;};
    inline const CreateDomainRequestListen & listen() const { DARABONBA_PTR_GET_CONST(listen_, CreateDomainRequestListen) };
    inline CreateDomainRequestListen listen() { DARABONBA_PTR_GET(listen_, CreateDomainRequestListen) };
    inline CreateDomainRequest& setListen(const CreateDomainRequestListen & listen) { DARABONBA_PTR_SET_VALUE(listen_, listen) };
    inline CreateDomainRequest& setListen(CreateDomainRequestListen && listen) { DARABONBA_PTR_SET_RVALUE(listen_, listen) };


    // redirect Field Functions 
    bool hasRedirect() const { return this->redirect_ != nullptr;};
    void deleteRedirect() { this->redirect_ = nullptr;};
    inline const CreateDomainRequestRedirect & redirect() const { DARABONBA_PTR_GET_CONST(redirect_, CreateDomainRequestRedirect) };
    inline CreateDomainRequestRedirect redirect() { DARABONBA_PTR_GET(redirect_, CreateDomainRequestRedirect) };
    inline CreateDomainRequest& setRedirect(const CreateDomainRequestRedirect & redirect) { DARABONBA_PTR_SET_VALUE(redirect_, redirect) };
    inline CreateDomainRequest& setRedirect(CreateDomainRequestRedirect && redirect) { DARABONBA_PTR_SET_RVALUE(redirect_, redirect) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDomainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline CreateDomainRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDomainRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDomainRequestTag>) };
    inline vector<CreateDomainRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateDomainRequestTag>) };
    inline CreateDomainRequest& setTag(const vector<CreateDomainRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDomainRequest& setTag(vector<CreateDomainRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


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
    std::shared_ptr<CreateDomainRequestListen> listen_ = nullptr;
    // The forwarding configurations.
    // 
    // This parameter is required.
    std::shared_ptr<CreateDomainRequestRedirect> redirect_ = nullptr;
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
    std::shared_ptr<vector<CreateDomainRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
