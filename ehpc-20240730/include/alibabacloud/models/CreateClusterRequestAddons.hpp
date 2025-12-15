// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTADDONS_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTADDONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateClusterRequestAddons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestAddons& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourcesSpec, resourcesSpec_);
      DARABONBA_PTR_TO_JSON(ServicesSpec, servicesSpec_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestAddons& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourcesSpec, resourcesSpec_);
      DARABONBA_PTR_FROM_JSON(ServicesSpec, servicesSpec_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    CreateClusterRequestAddons() = default ;
    CreateClusterRequestAddons(const CreateClusterRequestAddons &) = default ;
    CreateClusterRequestAddons(CreateClusterRequestAddons &&) = default ;
    CreateClusterRequestAddons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestAddons() = default ;
    CreateClusterRequestAddons& operator=(const CreateClusterRequestAddons &) = default ;
    CreateClusterRequestAddons& operator=(CreateClusterRequestAddons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->resourcesSpec_ == nullptr && return this->servicesSpec_ == nullptr && return this->version_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateClusterRequestAddons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourcesSpec Field Functions 
    bool hasResourcesSpec() const { return this->resourcesSpec_ != nullptr;};
    void deleteResourcesSpec() { this->resourcesSpec_ = nullptr;};
    inline string resourcesSpec() const { DARABONBA_PTR_GET_DEFAULT(resourcesSpec_, "") };
    inline CreateClusterRequestAddons& setResourcesSpec(string resourcesSpec) { DARABONBA_PTR_SET_VALUE(resourcesSpec_, resourcesSpec) };


    // servicesSpec Field Functions 
    bool hasServicesSpec() const { return this->servicesSpec_ != nullptr;};
    void deleteServicesSpec() { this->servicesSpec_ = nullptr;};
    inline string servicesSpec() const { DARABONBA_PTR_GET_DEFAULT(servicesSpec_, "") };
    inline CreateClusterRequestAddons& setServicesSpec(string servicesSpec) { DARABONBA_PTR_SET_VALUE(servicesSpec_, servicesSpec) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateClusterRequestAddons& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The addon name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The resource configurations of the addon.
    std::shared_ptr<string> resourcesSpec_ = nullptr;
    // The service configurations of the addon.
    std::shared_ptr<string> servicesSpec_ = nullptr;
    // The addon version.
    // 
    // This parameter is required.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
