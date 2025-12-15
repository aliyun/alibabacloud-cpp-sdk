// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONTEMPLATERESPONSEBODYADDON_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONTEMPLATERESPONSEBODYADDON_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAddonTemplateResponseBodyAddonResourcesSpec.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAddonTemplateResponseBodyAddonServicesSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class DescribeAddonTemplateResponseBodyAddon : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonTemplateResponseBodyAddon& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(LastUpdate, lastUpdate_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourcesSpec, resourcesSpec_);
      DARABONBA_PTR_TO_JSON(ServicesSpec, servicesSpec_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonTemplateResponseBodyAddon& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(LastUpdate, lastUpdate_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourcesSpec, resourcesSpec_);
      DARABONBA_PTR_FROM_JSON(ServicesSpec, servicesSpec_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeAddonTemplateResponseBodyAddon() = default ;
    DescribeAddonTemplateResponseBodyAddon(const DescribeAddonTemplateResponseBodyAddon &) = default ;
    DescribeAddonTemplateResponseBodyAddon(DescribeAddonTemplateResponseBodyAddon &&) = default ;
    DescribeAddonTemplateResponseBodyAddon(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonTemplateResponseBodyAddon() = default ;
    DescribeAddonTemplateResponseBodyAddon& operator=(const DescribeAddonTemplateResponseBodyAddon &) = default ;
    DescribeAddonTemplateResponseBodyAddon& operator=(DescribeAddonTemplateResponseBodyAddon &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->icon_ == nullptr && return this->label_ == nullptr && return this->lastUpdate_ == nullptr && return this->name_ == nullptr && return this->resourcesSpec_ == nullptr
        && return this->servicesSpec_ == nullptr && return this->version_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAddonTemplateResponseBodyAddon& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline DescribeAddonTemplateResponseBodyAddon& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline DescribeAddonTemplateResponseBodyAddon& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // lastUpdate Field Functions 
    bool hasLastUpdate() const { return this->lastUpdate_ != nullptr;};
    void deleteLastUpdate() { this->lastUpdate_ = nullptr;};
    inline string lastUpdate() const { DARABONBA_PTR_GET_DEFAULT(lastUpdate_, "") };
    inline DescribeAddonTemplateResponseBodyAddon& setLastUpdate(string lastUpdate) { DARABONBA_PTR_SET_VALUE(lastUpdate_, lastUpdate) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAddonTemplateResponseBodyAddon& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourcesSpec Field Functions 
    bool hasResourcesSpec() const { return this->resourcesSpec_ != nullptr;};
    void deleteResourcesSpec() { this->resourcesSpec_ = nullptr;};
    inline const Models::DescribeAddonTemplateResponseBodyAddonResourcesSpec & resourcesSpec() const { DARABONBA_PTR_GET_CONST(resourcesSpec_, Models::DescribeAddonTemplateResponseBodyAddonResourcesSpec) };
    inline Models::DescribeAddonTemplateResponseBodyAddonResourcesSpec resourcesSpec() { DARABONBA_PTR_GET(resourcesSpec_, Models::DescribeAddonTemplateResponseBodyAddonResourcesSpec) };
    inline DescribeAddonTemplateResponseBodyAddon& setResourcesSpec(const Models::DescribeAddonTemplateResponseBodyAddonResourcesSpec & resourcesSpec) { DARABONBA_PTR_SET_VALUE(resourcesSpec_, resourcesSpec) };
    inline DescribeAddonTemplateResponseBodyAddon& setResourcesSpec(Models::DescribeAddonTemplateResponseBodyAddonResourcesSpec && resourcesSpec) { DARABONBA_PTR_SET_RVALUE(resourcesSpec_, resourcesSpec) };


    // servicesSpec Field Functions 
    bool hasServicesSpec() const { return this->servicesSpec_ != nullptr;};
    void deleteServicesSpec() { this->servicesSpec_ = nullptr;};
    inline const vector<Models::DescribeAddonTemplateResponseBodyAddonServicesSpec> & servicesSpec() const { DARABONBA_PTR_GET_CONST(servicesSpec_, vector<Models::DescribeAddonTemplateResponseBodyAddonServicesSpec>) };
    inline vector<Models::DescribeAddonTemplateResponseBodyAddonServicesSpec> servicesSpec() { DARABONBA_PTR_GET(servicesSpec_, vector<Models::DescribeAddonTemplateResponseBodyAddonServicesSpec>) };
    inline DescribeAddonTemplateResponseBodyAddon& setServicesSpec(const vector<Models::DescribeAddonTemplateResponseBodyAddonServicesSpec> & servicesSpec) { DARABONBA_PTR_SET_VALUE(servicesSpec_, servicesSpec) };
    inline DescribeAddonTemplateResponseBodyAddon& setServicesSpec(vector<Models::DescribeAddonTemplateResponseBodyAddonServicesSpec> && servicesSpec) { DARABONBA_PTR_SET_RVALUE(servicesSpec_, servicesSpec) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeAddonTemplateResponseBodyAddon& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The addon description.
    std::shared_ptr<string> description_ = nullptr;
    // The addon icon.
    std::shared_ptr<string> icon_ = nullptr;
    // The addon label.
    std::shared_ptr<string> label_ = nullptr;
    // The date when the addon template was last updated.
    std::shared_ptr<string> lastUpdate_ = nullptr;
    // The addon name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The resource configurations of the addon.
    std::shared_ptr<Models::DescribeAddonTemplateResponseBodyAddonResourcesSpec> resourcesSpec_ = nullptr;
    // The addon configurations.
    std::shared_ptr<vector<Models::DescribeAddonTemplateResponseBodyAddonServicesSpec>> servicesSpec_ = nullptr;
    // The addon version.
    // 
    // This parameter is required.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
