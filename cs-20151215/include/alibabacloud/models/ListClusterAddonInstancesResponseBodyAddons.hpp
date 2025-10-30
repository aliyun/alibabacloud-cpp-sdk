// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERADDONINSTANCESRESPONSEBODYADDONS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERADDONINSTANCESRESPONSEBODYADDONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListClusterAddonInstancesResponseBodyAddons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterAddonInstancesResponseBodyAddons& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterAddonInstancesResponseBodyAddons& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListClusterAddonInstancesResponseBodyAddons() = default ;
    ListClusterAddonInstancesResponseBodyAddons(const ListClusterAddonInstancesResponseBodyAddons &) = default ;
    ListClusterAddonInstancesResponseBodyAddons(ListClusterAddonInstancesResponseBodyAddons &&) = default ;
    ListClusterAddonInstancesResponseBodyAddons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterAddonInstancesResponseBodyAddons() = default ;
    ListClusterAddonInstancesResponseBodyAddons& operator=(const ListClusterAddonInstancesResponseBodyAddons &) = default ;
    ListClusterAddonInstancesResponseBodyAddons& operator=(ListClusterAddonInstancesResponseBodyAddons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->state_ == nullptr && return this->version_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListClusterAddonInstancesResponseBodyAddons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListClusterAddonInstancesResponseBodyAddons& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListClusterAddonInstancesResponseBodyAddons& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The component name.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the component. Valid values:
    // 
    // *   active: The component is installed.
    // *   updating: The component is being modified.
    // *   upgrading: The component is being updated.
    // *   deleting: The component is being uninstalled.
    std::shared_ptr<string> state_ = nullptr;
    // The version of the component.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
