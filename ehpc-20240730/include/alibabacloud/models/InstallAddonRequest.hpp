// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLADDONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLADDONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class InstallAddonRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallAddonRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddonName, addonName_);
      DARABONBA_PTR_TO_JSON(AddonVersion, addonVersion_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ResourcesSpec, resourcesSpec_);
      DARABONBA_PTR_TO_JSON(ServicesSpec, servicesSpec_);
    };
    friend void from_json(const Darabonba::Json& j, InstallAddonRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddonName, addonName_);
      DARABONBA_PTR_FROM_JSON(AddonVersion, addonVersion_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ResourcesSpec, resourcesSpec_);
      DARABONBA_PTR_FROM_JSON(ServicesSpec, servicesSpec_);
    };
    InstallAddonRequest() = default ;
    InstallAddonRequest(const InstallAddonRequest &) = default ;
    InstallAddonRequest(InstallAddonRequest &&) = default ;
    InstallAddonRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallAddonRequest() = default ;
    InstallAddonRequest& operator=(const InstallAddonRequest &) = default ;
    InstallAddonRequest& operator=(InstallAddonRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonName_ == nullptr
        && return this->addonVersion_ == nullptr && return this->clusterId_ == nullptr && return this->resourcesSpec_ == nullptr && return this->servicesSpec_ == nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string addonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline InstallAddonRequest& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // addonVersion Field Functions 
    bool hasAddonVersion() const { return this->addonVersion_ != nullptr;};
    void deleteAddonVersion() { this->addonVersion_ = nullptr;};
    inline string addonVersion() const { DARABONBA_PTR_GET_DEFAULT(addonVersion_, "") };
    inline InstallAddonRequest& setAddonVersion(string addonVersion) { DARABONBA_PTR_SET_VALUE(addonVersion_, addonVersion) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline InstallAddonRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // resourcesSpec Field Functions 
    bool hasResourcesSpec() const { return this->resourcesSpec_ != nullptr;};
    void deleteResourcesSpec() { this->resourcesSpec_ = nullptr;};
    inline string resourcesSpec() const { DARABONBA_PTR_GET_DEFAULT(resourcesSpec_, "") };
    inline InstallAddonRequest& setResourcesSpec(string resourcesSpec) { DARABONBA_PTR_SET_VALUE(resourcesSpec_, resourcesSpec) };


    // servicesSpec Field Functions 
    bool hasServicesSpec() const { return this->servicesSpec_ != nullptr;};
    void deleteServicesSpec() { this->servicesSpec_ = nullptr;};
    inline string servicesSpec() const { DARABONBA_PTR_GET_DEFAULT(servicesSpec_, "") };
    inline InstallAddonRequest& setServicesSpec(string servicesSpec) { DARABONBA_PTR_SET_VALUE(servicesSpec_, servicesSpec) };


  protected:
    // The addon name.
    // 
    // This parameter is required.
    std::shared_ptr<string> addonName_ = nullptr;
    // The addon version.
    // 
    // This parameter is required.
    std::shared_ptr<string> addonVersion_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The resource configurations of the addon.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourcesSpec_ = nullptr;
    // The service configurations of the addon.
    // 
    // This parameter is required.
    std::shared_ptr<string> servicesSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
