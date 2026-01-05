// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DeleteDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteDomainRequest() = default ;
    DeleteDomainRequest(const DeleteDomainRequest &) = default ;
    DeleteDomainRequest(DeleteDomainRequest &&) = default ;
    DeleteDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDomainRequest() = default ;
    DeleteDomainRequest& operator=(const DeleteDomainRequest &) = default ;
    DeleteDomainRequest& operator=(DeleteDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessType_ == nullptr
        && this->domain_ == nullptr && this->domainId_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline DeleteDomainRequest& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DeleteDomainRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline DeleteDomainRequest& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteDomainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDomainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The mode in which the domain name is added to WAF. Valid values:
    // 
    // *   **share:** CNAME record mode. This is the default value.
    // *   **hybrid_cloud_cname:** hybrid cloud reverse proxy mode.
    shared_ptr<string> accessType_ {};
    // The domain name that you want to delete.
    shared_ptr<string> domain_ {};
    // The ID of the domain name.
    shared_ptr<string> domainId_ {};
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to obtain the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region where the WAF instance resides. Valid values:
    // 
    // *   **cn-hangzhou:** the Chinese mainland.
    // *   **ap-southeast-1:** outside the Chinese mainland.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
