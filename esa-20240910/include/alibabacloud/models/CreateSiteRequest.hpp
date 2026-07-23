// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESITEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESITEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateSiteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSiteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(Coverage, coverage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSiteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(Coverage, coverage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
    };
    CreateSiteRequest() = default ;
    CreateSiteRequest(const CreateSiteRequest &) = default ;
    CreateSiteRequest(CreateSiteRequest &&) = default ;
    CreateSiteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSiteRequest() = default ;
    CreateSiteRequest& operator=(const CreateSiteRequest &) = default ;
    CreateSiteRequest& operator=(CreateSiteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessType_ == nullptr
        && this->coverage_ == nullptr && this->instanceId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwner_ == nullptr && this->siteName_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline CreateSiteRequest& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // coverage Field Functions 
    bool hasCoverage() const { return this->coverage_ != nullptr;};
    void deleteCoverage() { this->coverage_ = nullptr;};
    inline string getCoverage() const { DARABONBA_PTR_GET_DEFAULT(coverage_, "") };
    inline CreateSiteRequest& setCoverage(string coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateSiteRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateSiteRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwner Field Functions 
    bool hasResourceOwner() const { return this->resourceOwner_ != nullptr;};
    void deleteResourceOwner() { this->resourceOwner_ = nullptr;};
    inline int64_t getResourceOwner() const { DARABONBA_PTR_GET_DEFAULT(resourceOwner_, 0L) };
    inline CreateSiteRequest& setResourceOwner(int64_t resourceOwner) { DARABONBA_PTR_SET_VALUE(resourceOwner_, resourceOwner) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline CreateSiteRequest& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


  protected:
    // The access type of the site. Valid values:
    // 
    // - **NS**: access by using managed NS.
    // - **CNAME**: access by configuring a CNAME record.
    // 
    // This parameter is required.
    shared_ptr<string> accessType_ {};
    // The acceleration region. Valid values:
    // - **domestic**: the Chinese mainland only.
    // - **global**: global.
    // - **overseas**: global (excluding the Chinese mainland).
    // 
    // This parameter is required.
    shared_ptr<string> coverage_ {};
    // The instance ID. You can call the [ListUserRatePlanInstances](https://help.aliyun.com/document_detail/2852398.html) operation to obtain the instance ID. You must specify at least one of the instance ID and site ID. If both are specified, the instance ID takes precedence.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The resource group ID. If you do not specify this parameter, the system automatically uses the default resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<int64_t> resourceOwner_ {};
    // The site name.
    // 
    // This parameter is required.
    shared_ptr<string> siteName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
