// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCOMPONENTSVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKCOMPONENTSVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class CheckComponentsVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckComponentsVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckComponentsVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckComponentsVersionResponseBody() = default ;
    CheckComponentsVersionResponseBody(const CheckComponentsVersionResponseBody &) = default ;
    CheckComponentsVersionResponseBody(CheckComponentsVersionResponseBody &&) = default ;
    CheckComponentsVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckComponentsVersionResponseBody() = default ;
    CheckComponentsVersionResponseBody& operator=(const CheckComponentsVersionResponseBody &) = default ;
    CheckComponentsVersionResponseBody& operator=(CheckComponentsVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Components : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Components& obj) { 
        DARABONBA_PTR_TO_JSON(Component, component_);
      };
      friend void from_json(const Darabonba::Json& j, Components& obj) { 
        DARABONBA_PTR_FROM_JSON(Component, component_);
      };
      Components() = default ;
      Components(const Components &) = default ;
      Components(Components &&) = default ;
      Components(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Components() = default ;
      Components& operator=(const Components &) = default ;
      Components& operator=(Components &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Component : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Component& obj) { 
          DARABONBA_PTR_TO_JSON(Component, component_);
          DARABONBA_PTR_TO_JSON(IsLatestVersion, isLatestVersion_);
        };
        friend void from_json(const Darabonba::Json& j, Component& obj) { 
          DARABONBA_PTR_FROM_JSON(Component, component_);
          DARABONBA_PTR_FROM_JSON(IsLatestVersion, isLatestVersion_);
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
        virtual bool empty() const override { return this->component_ == nullptr
        && this->isLatestVersion_ == nullptr; };
        // component Field Functions 
        bool hasComponent() const { return this->component_ != nullptr;};
        void deleteComponent() { this->component_ = nullptr;};
        inline string getComponent() const { DARABONBA_PTR_GET_DEFAULT(component_, "") };
        inline Component& setComponent(string component) { DARABONBA_PTR_SET_VALUE(component_, component) };


        // isLatestVersion Field Functions 
        bool hasIsLatestVersion() const { return this->isLatestVersion_ != nullptr;};
        void deleteIsLatestVersion() { this->isLatestVersion_ = nullptr;};
        inline string getIsLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(isLatestVersion_, "") };
        inline Component& setIsLatestVersion(string isLatestVersion) { DARABONBA_PTR_SET_VALUE(isLatestVersion_, isLatestVersion) };


      protected:
        shared_ptr<string> component_ {};
        shared_ptr<string> isLatestVersion_ {};
      };

      virtual bool empty() const override { return this->component_ == nullptr; };
      // component Field Functions 
      bool hasComponent() const { return this->component_ != nullptr;};
      void deleteComponent() { this->component_ = nullptr;};
      inline const vector<Components::Component> & getComponent() const { DARABONBA_PTR_GET_CONST(component_, vector<Components::Component>) };
      inline vector<Components::Component> getComponent() { DARABONBA_PTR_GET(component_, vector<Components::Component>) };
      inline Components& setComponent(const vector<Components::Component> & component) { DARABONBA_PTR_SET_VALUE(component_, component) };
      inline Components& setComponent(vector<Components::Component> && component) { DARABONBA_PTR_SET_RVALUE(component_, component) };


    protected:
      shared_ptr<vector<Components::Component>> component_ {};
    };

    virtual bool empty() const override { return this->components_ == nullptr
        && this->requestId_ == nullptr; };
    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const CheckComponentsVersionResponseBody::Components & getComponents() const { DARABONBA_PTR_GET_CONST(components_, CheckComponentsVersionResponseBody::Components) };
    inline CheckComponentsVersionResponseBody::Components getComponents() { DARABONBA_PTR_GET(components_, CheckComponentsVersionResponseBody::Components) };
    inline CheckComponentsVersionResponseBody& setComponents(const CheckComponentsVersionResponseBody::Components & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline CheckComponentsVersionResponseBody& setComponents(CheckComponentsVersionResponseBody::Components && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckComponentsVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CheckComponentsVersionResponseBody::Components> components_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
