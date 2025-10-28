// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYCOMPONENTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYCOMPONENTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListComponentsResponseBodyComponentListComponent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListComponentsResponseBodyComponentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentsResponseBodyComponentList& obj) { 
      DARABONBA_PTR_TO_JSON(Component, component_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentsResponseBodyComponentList& obj) { 
      DARABONBA_PTR_FROM_JSON(Component, component_);
    };
    ListComponentsResponseBodyComponentList() = default ;
    ListComponentsResponseBodyComponentList(const ListComponentsResponseBodyComponentList &) = default ;
    ListComponentsResponseBodyComponentList(ListComponentsResponseBodyComponentList &&) = default ;
    ListComponentsResponseBodyComponentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentsResponseBodyComponentList() = default ;
    ListComponentsResponseBodyComponentList& operator=(const ListComponentsResponseBodyComponentList &) = default ;
    ListComponentsResponseBodyComponentList& operator=(ListComponentsResponseBodyComponentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->component_ == nullptr; };
    // component Field Functions 
    bool hasComponent() const { return this->component_ != nullptr;};
    void deleteComponent() { this->component_ = nullptr;};
    inline const vector<Models::ListComponentsResponseBodyComponentListComponent> & component() const { DARABONBA_PTR_GET_CONST(component_, vector<Models::ListComponentsResponseBodyComponentListComponent>) };
    inline vector<Models::ListComponentsResponseBodyComponentListComponent> component() { DARABONBA_PTR_GET(component_, vector<Models::ListComponentsResponseBodyComponentListComponent>) };
    inline ListComponentsResponseBodyComponentList& setComponent(const vector<Models::ListComponentsResponseBodyComponentListComponent> & component) { DARABONBA_PTR_SET_VALUE(component_, component) };
    inline ListComponentsResponseBodyComponentList& setComponent(vector<Models::ListComponentsResponseBodyComponentListComponent> && component) { DARABONBA_PTR_SET_RVALUE(component_, component) };


  protected:
    std::shared_ptr<vector<Models::ListComponentsResponseBodyComponentListComponent>> component_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
