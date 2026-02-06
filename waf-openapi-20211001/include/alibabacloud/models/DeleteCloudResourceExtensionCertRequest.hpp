// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLOUDRESOURCEEXTENSIONCERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLOUDRESOURCEEXTENSIONCERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DeleteCloudResourceExtensionCertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCloudResourceExtensionCertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CloudResourceId, cloudResourceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCloudResourceExtensionCertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CloudResourceId, cloudResourceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DeleteCloudResourceExtensionCertRequest() = default ;
    DeleteCloudResourceExtensionCertRequest(const DeleteCloudResourceExtensionCertRequest &) = default ;
    DeleteCloudResourceExtensionCertRequest(DeleteCloudResourceExtensionCertRequest &&) = default ;
    DeleteCloudResourceExtensionCertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCloudResourceExtensionCertRequest() = default ;
    DeleteCloudResourceExtensionCertRequest& operator=(const DeleteCloudResourceExtensionCertRequest &) = default ;
    DeleteCloudResourceExtensionCertRequest& operator=(DeleteCloudResourceExtensionCertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certId_ == nullptr
        && this->cloudResourceId_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline DeleteCloudResourceExtensionCertRequest& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // cloudResourceId Field Functions 
    bool hasCloudResourceId() const { return this->cloudResourceId_ != nullptr;};
    void deleteCloudResourceId() { this->cloudResourceId_ = nullptr;};
    inline string getCloudResourceId() const { DARABONBA_PTR_GET_DEFAULT(cloudResourceId_, "") };
    inline DeleteCloudResourceExtensionCertRequest& setCloudResourceId(string cloudResourceId) { DARABONBA_PTR_SET_VALUE(cloudResourceId_, cloudResourceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteCloudResourceExtensionCertRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteCloudResourceExtensionCertRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DeleteCloudResourceExtensionCertRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // This parameter is required.
    shared_ptr<string> certId_ {};
    // This parameter is required.
    shared_ptr<string> cloudResourceId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceManagerResourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
