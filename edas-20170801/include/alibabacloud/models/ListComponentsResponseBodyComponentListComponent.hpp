// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYCOMPONENTLISTCOMPONENT_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYCOMPONENTLISTCOMPONENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListComponentsResponseBodyComponentListComponent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentsResponseBodyComponentListComponent& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
      DARABONBA_PTR_TO_JSON(ComponentKey, componentKey_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentsResponseBodyComponentListComponent& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
      DARABONBA_PTR_FROM_JSON(ComponentKey, componentKey_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListComponentsResponseBodyComponentListComponent() = default ;
    ListComponentsResponseBodyComponentListComponent(const ListComponentsResponseBodyComponentListComponent &) = default ;
    ListComponentsResponseBodyComponentListComponent(ListComponentsResponseBodyComponentListComponent &&) = default ;
    ListComponentsResponseBodyComponentListComponent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentsResponseBodyComponentListComponent() = default ;
    ListComponentsResponseBodyComponentListComponent& operator=(const ListComponentsResponseBodyComponentListComponent &) = default ;
    ListComponentsResponseBodyComponentListComponent& operator=(ListComponentsResponseBodyComponentListComponent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentId_ == nullptr
        && return this->componentKey_ == nullptr && return this->desc_ == nullptr && return this->expired_ == nullptr && return this->type_ == nullptr && return this->version_ == nullptr; };
    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline string componentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
    inline ListComponentsResponseBodyComponentListComponent& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


    // componentKey Field Functions 
    bool hasComponentKey() const { return this->componentKey_ != nullptr;};
    void deleteComponentKey() { this->componentKey_ = nullptr;};
    inline string componentKey() const { DARABONBA_PTR_GET_DEFAULT(componentKey_, "") };
    inline ListComponentsResponseBodyComponentListComponent& setComponentKey(string componentKey) { DARABONBA_PTR_SET_VALUE(componentKey_, componentKey) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline ListComponentsResponseBodyComponentListComponent& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline ListComponentsResponseBodyComponentListComponent& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListComponentsResponseBodyComponentListComponent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListComponentsResponseBodyComponentListComponent& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The ID of the component.
    std::shared_ptr<string> componentId_ = nullptr;
    // The key of the component.
    std::shared_ptr<string> componentKey_ = nullptr;
    // The description of the component.
    std::shared_ptr<string> desc_ = nullptr;
    // Indicates whether the component has expired. Valid values:
    // 
    // *   false: The component has not expired.
    // *   true: The component has expired.
    std::shared_ptr<bool> expired_ = nullptr;
    // The type of the component. Valid values:
    // 
    // *   JDK
    // *   TOMCAT
    // *   TENGINE
    std::shared_ptr<string> type_ = nullptr;
    // The version of the component.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
