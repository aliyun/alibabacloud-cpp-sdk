// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERADDONINSTANCERESOURCESRESPONSEBODYKUBERNETESOBJECTS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERADDONINSTANCERESOURCESRESPONSEBODYKUBERNETESOBJECTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects& obj) { 
      DARABONBA_PTR_TO_JSON(group, group_);
      DARABONBA_PTR_TO_JSON(kind, kind_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects& obj) { 
      DARABONBA_PTR_FROM_JSON(group, group_);
      DARABONBA_PTR_FROM_JSON(kind, kind_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects() = default ;
    ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects(const ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects &) = default ;
    ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects(ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects &&) = default ;
    ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects() = default ;
    ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects& operator=(const ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects &) = default ;
    ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects& operator=(ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->group_ == nullptr
        && return this->kind_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->version_ == nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> group_ = nullptr;
    std::shared_ptr<string> kind_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
