// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyDomainRequestListen.hpp>
#include <alibabacloud/models/ModifyDomainRequestRedirect.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Listen, listen_);
      DARABONBA_PTR_TO_JSON(Redirect, redirect_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Listen, listen_);
      DARABONBA_PTR_FROM_JSON(Redirect, redirect_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyDomainRequest() = default ;
    ModifyDomainRequest(const ModifyDomainRequest &) = default ;
    ModifyDomainRequest(ModifyDomainRequest &&) = default ;
    ModifyDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDomainRequest() = default ;
    ModifyDomainRequest& operator=(const ModifyDomainRequest &) = default ;
    ModifyDomainRequest& operator=(ModifyDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessType_ != nullptr
        && this->domain_ != nullptr && this->domainId_ != nullptr && this->instanceId_ != nullptr && this->listen_ != nullptr && this->redirect_ != nullptr
        && this->regionId_ != nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline ModifyDomainRequest& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyDomainRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline ModifyDomainRequest& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyDomainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // listen Field Functions 
    bool hasListen() const { return this->listen_ != nullptr;};
    void deleteListen() { this->listen_ = nullptr;};
    inline const ModifyDomainRequestListen & listen() const { DARABONBA_PTR_GET_CONST(listen_, ModifyDomainRequestListen) };
    inline ModifyDomainRequestListen listen() { DARABONBA_PTR_GET(listen_, ModifyDomainRequestListen) };
    inline ModifyDomainRequest& setListen(const ModifyDomainRequestListen & listen) { DARABONBA_PTR_SET_VALUE(listen_, listen) };
    inline ModifyDomainRequest& setListen(ModifyDomainRequestListen && listen) { DARABONBA_PTR_SET_RVALUE(listen_, listen) };


    // redirect Field Functions 
    bool hasRedirect() const { return this->redirect_ != nullptr;};
    void deleteRedirect() { this->redirect_ = nullptr;};
    inline const ModifyDomainRequestRedirect & redirect() const { DARABONBA_PTR_GET_CONST(redirect_, ModifyDomainRequestRedirect) };
    inline ModifyDomainRequestRedirect redirect() { DARABONBA_PTR_GET(redirect_, ModifyDomainRequestRedirect) };
    inline ModifyDomainRequest& setRedirect(const ModifyDomainRequestRedirect & redirect) { DARABONBA_PTR_SET_VALUE(redirect_, redirect) };
    inline ModifyDomainRequest& setRedirect(ModifyDomainRequestRedirect && redirect) { DARABONBA_PTR_SET_RVALUE(redirect_, redirect) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDomainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The mode in which you want to add the domain name to WAF. Set the value to share.
    // 
    // *   **share:** adds the domain name to WAF in CNAME record mode. This is the default value.
    std::shared_ptr<string> accessType_ = nullptr;
    // The domain name whose access configurations you want to modify.
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> domainId_ = nullptr;
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to obtain the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The listener configurations.
    // 
    // This parameter is required.
    std::shared_ptr<ModifyDomainRequestListen> listen_ = nullptr;
    // The forwarding configurations.
    // 
    // This parameter is required.
    std::shared_ptr<ModifyDomainRequestRedirect> redirect_ = nullptr;
    // The region where the WAF instance resides. Valid values:
    // 
    // *   **cn-hangzhou:** the Chinese mainland.
    // *   **ap-southeast-1:** outside the Chinese mainland.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
