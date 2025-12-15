// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONRESPONSEBODYADDON_HPP_
#define ALIBABACLOUD_MODELS_GETADDONRESPONSEBODYADDON_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAddonResponseBodyAddonResourcesSpec.hpp>
#include <vector>
#include <alibabacloud/models/GetAddonResponseBodyAddonServicesSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetAddonResponseBodyAddon : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonResponseBodyAddon& obj) { 
      DARABONBA_PTR_TO_JSON(AddonId, addonId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(InstallTime, installTime_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourcesSpec, resourcesSpec_);
      DARABONBA_PTR_TO_JSON(ServicesSpec, servicesSpec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonResponseBodyAddon& obj) { 
      DARABONBA_PTR_FROM_JSON(AddonId, addonId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(InstallTime, installTime_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourcesSpec, resourcesSpec_);
      DARABONBA_PTR_FROM_JSON(ServicesSpec, servicesSpec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetAddonResponseBodyAddon() = default ;
    GetAddonResponseBodyAddon(const GetAddonResponseBodyAddon &) = default ;
    GetAddonResponseBodyAddon(GetAddonResponseBodyAddon &&) = default ;
    GetAddonResponseBodyAddon(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonResponseBodyAddon() = default ;
    GetAddonResponseBodyAddon& operator=(const GetAddonResponseBodyAddon &) = default ;
    GetAddonResponseBodyAddon& operator=(GetAddonResponseBodyAddon &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonId_ == nullptr
        && return this->description_ == nullptr && return this->icon_ == nullptr && return this->installTime_ == nullptr && return this->label_ == nullptr && return this->name_ == nullptr
        && return this->resourcesSpec_ == nullptr && return this->servicesSpec_ == nullptr && return this->status_ == nullptr && return this->version_ == nullptr; };
    // addonId Field Functions 
    bool hasAddonId() const { return this->addonId_ != nullptr;};
    void deleteAddonId() { this->addonId_ = nullptr;};
    inline string addonId() const { DARABONBA_PTR_GET_DEFAULT(addonId_, "") };
    inline GetAddonResponseBodyAddon& setAddonId(string addonId) { DARABONBA_PTR_SET_VALUE(addonId_, addonId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAddonResponseBodyAddon& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline GetAddonResponseBodyAddon& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // installTime Field Functions 
    bool hasInstallTime() const { return this->installTime_ != nullptr;};
    void deleteInstallTime() { this->installTime_ = nullptr;};
    inline string installTime() const { DARABONBA_PTR_GET_DEFAULT(installTime_, "") };
    inline GetAddonResponseBodyAddon& setInstallTime(string installTime) { DARABONBA_PTR_SET_VALUE(installTime_, installTime) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetAddonResponseBodyAddon& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAddonResponseBodyAddon& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourcesSpec Field Functions 
    bool hasResourcesSpec() const { return this->resourcesSpec_ != nullptr;};
    void deleteResourcesSpec() { this->resourcesSpec_ = nullptr;};
    inline const Models::GetAddonResponseBodyAddonResourcesSpec & resourcesSpec() const { DARABONBA_PTR_GET_CONST(resourcesSpec_, Models::GetAddonResponseBodyAddonResourcesSpec) };
    inline Models::GetAddonResponseBodyAddonResourcesSpec resourcesSpec() { DARABONBA_PTR_GET(resourcesSpec_, Models::GetAddonResponseBodyAddonResourcesSpec) };
    inline GetAddonResponseBodyAddon& setResourcesSpec(const Models::GetAddonResponseBodyAddonResourcesSpec & resourcesSpec) { DARABONBA_PTR_SET_VALUE(resourcesSpec_, resourcesSpec) };
    inline GetAddonResponseBodyAddon& setResourcesSpec(Models::GetAddonResponseBodyAddonResourcesSpec && resourcesSpec) { DARABONBA_PTR_SET_RVALUE(resourcesSpec_, resourcesSpec) };


    // servicesSpec Field Functions 
    bool hasServicesSpec() const { return this->servicesSpec_ != nullptr;};
    void deleteServicesSpec() { this->servicesSpec_ = nullptr;};
    inline const vector<Models::GetAddonResponseBodyAddonServicesSpec> & servicesSpec() const { DARABONBA_PTR_GET_CONST(servicesSpec_, vector<Models::GetAddonResponseBodyAddonServicesSpec>) };
    inline vector<Models::GetAddonResponseBodyAddonServicesSpec> servicesSpec() { DARABONBA_PTR_GET(servicesSpec_, vector<Models::GetAddonResponseBodyAddonServicesSpec>) };
    inline GetAddonResponseBodyAddon& setServicesSpec(const vector<Models::GetAddonResponseBodyAddonServicesSpec> & servicesSpec) { DARABONBA_PTR_SET_VALUE(servicesSpec_, servicesSpec) };
    inline GetAddonResponseBodyAddon& setServicesSpec(vector<Models::GetAddonResponseBodyAddonServicesSpec> && servicesSpec) { DARABONBA_PTR_SET_RVALUE(servicesSpec_, servicesSpec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAddonResponseBodyAddon& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetAddonResponseBodyAddon& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The addon ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> addonId_ = nullptr;
    // The addon description.
    std::shared_ptr<string> description_ = nullptr;
    // The addon icon.
    std::shared_ptr<string> icon_ = nullptr;
    // The time when the addon was installed.
    std::shared_ptr<string> installTime_ = nullptr;
    // The addon label.
    std::shared_ptr<string> label_ = nullptr;
    // The addon name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The resource configurations of the addon.
    std::shared_ptr<Models::GetAddonResponseBodyAddonResourcesSpec> resourcesSpec_ = nullptr;
    // The service configurations of the addon.
    std::shared_ptr<vector<Models::GetAddonResponseBodyAddonServicesSpec>> servicesSpec_ = nullptr;
    // The addon status.
    std::shared_ptr<string> status_ = nullptr;
    // The addon version.
    // 
    // This parameter is required.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
