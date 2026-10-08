// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListComponentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ComponentList, componentList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ComponentList, componentList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    ListComponentsResponseBody() = default ;
    ListComponentsResponseBody(const ListComponentsResponseBody &) = default ;
    ListComponentsResponseBody(ListComponentsResponseBody &&) = default ;
    ListComponentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentsResponseBody() = default ;
    ListComponentsResponseBody& operator=(const ListComponentsResponseBody &) = default ;
    ListComponentsResponseBody& operator=(ListComponentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ComponentList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComponentList& obj) { 
        DARABONBA_PTR_TO_JSON(Component, component_);
      };
      friend void from_json(const Darabonba::Json& j, ComponentList& obj) { 
        DARABONBA_PTR_FROM_JSON(Component, component_);
      };
      ComponentList() = default ;
      ComponentList(const ComponentList &) = default ;
      ComponentList(ComponentList &&) = default ;
      ComponentList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComponentList() = default ;
      ComponentList& operator=(const ComponentList &) = default ;
      ComponentList& operator=(ComponentList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Component : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Component& obj) { 
          DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
          DARABONBA_PTR_TO_JSON(ComponentKey, componentKey_);
          DARABONBA_PTR_TO_JSON(Desc, desc_);
          DARABONBA_PTR_TO_JSON(Expired, expired_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Component& obj) { 
          DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
          DARABONBA_PTR_FROM_JSON(ComponentKey, componentKey_);
          DARABONBA_PTR_FROM_JSON(Desc, desc_);
          DARABONBA_PTR_FROM_JSON(Expired, expired_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        Component() = default ;
        Component(const Component &) = default ;
        Component(Component &&) = default ;
        Component(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Component() = default ;
        Component& operator=(const Component &) = default ;
        Component& operator=(Component &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->componentId_ == nullptr
        && this->componentKey_ == nullptr && this->desc_ == nullptr && this->expired_ == nullptr && this->type_ == nullptr && this->version_ == nullptr; };
        // componentId Field Functions 
        bool hasComponentId() const { return this->componentId_ != nullptr;};
        void deleteComponentId() { this->componentId_ = nullptr;};
        inline string getComponentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
        inline Component& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


        // componentKey Field Functions 
        bool hasComponentKey() const { return this->componentKey_ != nullptr;};
        void deleteComponentKey() { this->componentKey_ = nullptr;};
        inline string getComponentKey() const { DARABONBA_PTR_GET_DEFAULT(componentKey_, "") };
        inline Component& setComponentKey(string componentKey) { DARABONBA_PTR_SET_VALUE(componentKey_, componentKey) };


        // desc Field Functions 
        bool hasDesc() const { return this->desc_ != nullptr;};
        void deleteDesc() { this->desc_ = nullptr;};
        inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
        inline Component& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


        // expired Field Functions 
        bool hasExpired() const { return this->expired_ != nullptr;};
        void deleteExpired() { this->expired_ = nullptr;};
        inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
        inline Component& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Component& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Component& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> componentId_ {};
        shared_ptr<string> componentKey_ {};
        shared_ptr<string> desc_ {};
        shared_ptr<bool> expired_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->component_ == nullptr; };
      // component Field Functions 
      bool hasComponent() const { return this->component_ != nullptr;};
      void deleteComponent() { this->component_ = nullptr;};
      inline const vector<ComponentList::Component> & getComponent() const { DARABONBA_PTR_GET_CONST(component_, vector<ComponentList::Component>) };
      inline vector<ComponentList::Component> getComponent() { DARABONBA_PTR_GET(component_, vector<ComponentList::Component>) };
      inline ComponentList& setComponent(const vector<ComponentList::Component> & component) { DARABONBA_PTR_SET_VALUE(component_, component) };
      inline ComponentList& setComponent(vector<ComponentList::Component> && component) { DARABONBA_PTR_SET_RVALUE(component_, component) };


    protected:
      shared_ptr<vector<ComponentList::Component>> component_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->componentList_ == nullptr && this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListComponentsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // componentList Field Functions 
    bool hasComponentList() const { return this->componentList_ != nullptr;};
    void deleteComponentList() { this->componentList_ = nullptr;};
    inline const ListComponentsResponseBody::ComponentList & getComponentList() const { DARABONBA_PTR_GET_CONST(componentList_, ListComponentsResponseBody::ComponentList) };
    inline ListComponentsResponseBody::ComponentList getComponentList() { DARABONBA_PTR_GET(componentList_, ListComponentsResponseBody::ComponentList) };
    inline ListComponentsResponseBody& setComponentList(const ListComponentsResponseBody::ComponentList & componentList) { DARABONBA_PTR_SET_VALUE(componentList_, componentList) };
    inline ListComponentsResponseBody& setComponentList(ListComponentsResponseBody::ComponentList && componentList) { DARABONBA_PTR_SET_RVALUE(componentList_, componentList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListComponentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    shared_ptr<ListComponentsResponseBody::ComponentList> componentList_ {};
    // The message that is returned.
    shared_ptr<string> message_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
