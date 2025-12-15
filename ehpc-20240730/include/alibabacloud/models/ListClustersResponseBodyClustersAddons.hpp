// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYCLUSTERSADDONS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYCLUSTERSADDONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListClustersResponseBodyClustersAddonsResourcesSpec.hpp>
#include <vector>
#include <alibabacloud/models/ListClustersResponseBodyClustersAddonsServicesSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListClustersResponseBodyClustersAddons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClustersResponseBodyClustersAddons& obj) { 
      DARABONBA_PTR_TO_JSON(AddonId, addonId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourcesSpec, resourcesSpec_);
      DARABONBA_PTR_TO_JSON(ServicesSpec, servicesSpec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListClustersResponseBodyClustersAddons& obj) { 
      DARABONBA_PTR_FROM_JSON(AddonId, addonId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourcesSpec, resourcesSpec_);
      DARABONBA_PTR_FROM_JSON(ServicesSpec, servicesSpec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListClustersResponseBodyClustersAddons() = default ;
    ListClustersResponseBodyClustersAddons(const ListClustersResponseBodyClustersAddons &) = default ;
    ListClustersResponseBodyClustersAddons(ListClustersResponseBodyClustersAddons &&) = default ;
    ListClustersResponseBodyClustersAddons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClustersResponseBodyClustersAddons() = default ;
    ListClustersResponseBodyClustersAddons& operator=(const ListClustersResponseBodyClustersAddons &) = default ;
    ListClustersResponseBodyClustersAddons& operator=(ListClustersResponseBodyClustersAddons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonId_ == nullptr
        && return this->description_ == nullptr && return this->label_ == nullptr && return this->name_ == nullptr && return this->resourcesSpec_ == nullptr && return this->servicesSpec_ == nullptr
        && return this->status_ == nullptr && return this->version_ == nullptr; };
    // addonId Field Functions 
    bool hasAddonId() const { return this->addonId_ != nullptr;};
    void deleteAddonId() { this->addonId_ = nullptr;};
    inline string addonId() const { DARABONBA_PTR_GET_DEFAULT(addonId_, "") };
    inline ListClustersResponseBodyClustersAddons& setAddonId(string addonId) { DARABONBA_PTR_SET_VALUE(addonId_, addonId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListClustersResponseBodyClustersAddons& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ListClustersResponseBodyClustersAddons& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListClustersResponseBodyClustersAddons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourcesSpec Field Functions 
    bool hasResourcesSpec() const { return this->resourcesSpec_ != nullptr;};
    void deleteResourcesSpec() { this->resourcesSpec_ = nullptr;};
    inline const Models::ListClustersResponseBodyClustersAddonsResourcesSpec & resourcesSpec() const { DARABONBA_PTR_GET_CONST(resourcesSpec_, Models::ListClustersResponseBodyClustersAddonsResourcesSpec) };
    inline Models::ListClustersResponseBodyClustersAddonsResourcesSpec resourcesSpec() { DARABONBA_PTR_GET(resourcesSpec_, Models::ListClustersResponseBodyClustersAddonsResourcesSpec) };
    inline ListClustersResponseBodyClustersAddons& setResourcesSpec(const Models::ListClustersResponseBodyClustersAddonsResourcesSpec & resourcesSpec) { DARABONBA_PTR_SET_VALUE(resourcesSpec_, resourcesSpec) };
    inline ListClustersResponseBodyClustersAddons& setResourcesSpec(Models::ListClustersResponseBodyClustersAddonsResourcesSpec && resourcesSpec) { DARABONBA_PTR_SET_RVALUE(resourcesSpec_, resourcesSpec) };


    // servicesSpec Field Functions 
    bool hasServicesSpec() const { return this->servicesSpec_ != nullptr;};
    void deleteServicesSpec() { this->servicesSpec_ = nullptr;};
    inline const vector<Models::ListClustersResponseBodyClustersAddonsServicesSpec> & servicesSpec() const { DARABONBA_PTR_GET_CONST(servicesSpec_, vector<Models::ListClustersResponseBodyClustersAddonsServicesSpec>) };
    inline vector<Models::ListClustersResponseBodyClustersAddonsServicesSpec> servicesSpec() { DARABONBA_PTR_GET(servicesSpec_, vector<Models::ListClustersResponseBodyClustersAddonsServicesSpec>) };
    inline ListClustersResponseBodyClustersAddons& setServicesSpec(const vector<Models::ListClustersResponseBodyClustersAddonsServicesSpec> & servicesSpec) { DARABONBA_PTR_SET_VALUE(servicesSpec_, servicesSpec) };
    inline ListClustersResponseBodyClustersAddons& setServicesSpec(vector<Models::ListClustersResponseBodyClustersAddonsServicesSpec> && servicesSpec) { DARABONBA_PTR_SET_RVALUE(servicesSpec_, servicesSpec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListClustersResponseBodyClustersAddons& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListClustersResponseBodyClustersAddons& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The addon ID.
    std::shared_ptr<string> addonId_ = nullptr;
    // The addon description.
    std::shared_ptr<string> description_ = nullptr;
    // The addon label.
    std::shared_ptr<string> label_ = nullptr;
    // The addon name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The resource configurations of the addon.
    std::shared_ptr<Models::ListClustersResponseBodyClustersAddonsResourcesSpec> resourcesSpec_ = nullptr;
    // The information about the addon services.
    std::shared_ptr<vector<Models::ListClustersResponseBodyClustersAddonsServicesSpec>> servicesSpec_ = nullptr;
    // The addon state.
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
