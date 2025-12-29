// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERADDONINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERADDONINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListClusterAddonInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterAddonInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(addons, addons_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterAddonInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(addons, addons_);
    };
    ListClusterAddonInstancesResponseBody() = default ;
    ListClusterAddonInstancesResponseBody(const ListClusterAddonInstancesResponseBody &) = default ;
    ListClusterAddonInstancesResponseBody(ListClusterAddonInstancesResponseBody &&) = default ;
    ListClusterAddonInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterAddonInstancesResponseBody() = default ;
    ListClusterAddonInstancesResponseBody& operator=(const ListClusterAddonInstancesResponseBody &) = default ;
    ListClusterAddonInstancesResponseBody& operator=(ListClusterAddonInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Addons : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Addons& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(state, state_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Addons& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(state, state_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      Addons() = default ;
      Addons(const Addons &) = default ;
      Addons(Addons &&) = default ;
      Addons(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Addons() = default ;
      Addons& operator=(const Addons &) = default ;
      Addons& operator=(Addons &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->state_ == nullptr && this->version_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Addons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Addons& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Addons& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The component name.
      shared_ptr<string> name_ {};
      // The status of the component. Valid values:
      // 
      // *   active: The component is installed.
      // *   updating: The component is being modified.
      // *   upgrading: The component is being updated.
      // *   deleting: The component is being uninstalled.
      shared_ptr<string> state_ {};
      // The version of the component.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->addons_ == nullptr; };
    // addons Field Functions 
    bool hasAddons() const { return this->addons_ != nullptr;};
    void deleteAddons() { this->addons_ = nullptr;};
    inline const vector<ListClusterAddonInstancesResponseBody::Addons> & getAddons() const { DARABONBA_PTR_GET_CONST(addons_, vector<ListClusterAddonInstancesResponseBody::Addons>) };
    inline vector<ListClusterAddonInstancesResponseBody::Addons> getAddons() { DARABONBA_PTR_GET(addons_, vector<ListClusterAddonInstancesResponseBody::Addons>) };
    inline ListClusterAddonInstancesResponseBody& setAddons(const vector<ListClusterAddonInstancesResponseBody::Addons> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
    inline ListClusterAddonInstancesResponseBody& setAddons(vector<ListClusterAddonInstancesResponseBody::Addons> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


  protected:
    // A list of components that are installed in the cluster.
    shared_ptr<vector<ListClusterAddonInstancesResponseBody::Addons>> addons_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
