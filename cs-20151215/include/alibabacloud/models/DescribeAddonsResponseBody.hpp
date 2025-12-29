// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/StandardComponentsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeAddonsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentGroups, componentGroups_);
      DARABONBA_PTR_TO_JSON(StandardComponents, standardComponents_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentGroups, componentGroups_);
      DARABONBA_PTR_FROM_JSON(StandardComponents, standardComponents_);
    };
    DescribeAddonsResponseBody() = default ;
    DescribeAddonsResponseBody(const DescribeAddonsResponseBody &) = default ;
    DescribeAddonsResponseBody(DescribeAddonsResponseBody &&) = default ;
    DescribeAddonsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonsResponseBody() = default ;
    DescribeAddonsResponseBody& operator=(const DescribeAddonsResponseBody &) = default ;
    DescribeAddonsResponseBody& operator=(DescribeAddonsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ComponentGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComponentGroups& obj) { 
        DARABONBA_PTR_TO_JSON(group_name, groupName_);
        DARABONBA_PTR_TO_JSON(items, items_);
      };
      friend void from_json(const Darabonba::Json& j, ComponentGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(group_name, groupName_);
        DARABONBA_PTR_FROM_JSON(items, items_);
      };
      ComponentGroups() = default ;
      ComponentGroups(const ComponentGroups &) = default ;
      ComponentGroups(ComponentGroups &&) = default ;
      ComponentGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComponentGroups() = default ;
      ComponentGroups& operator=(const ComponentGroups &) = default ;
      ComponentGroups& operator=(ComponentGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The name of the component.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->groupName_ == nullptr
        && this->items_ == nullptr; };
      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline ComponentGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<ComponentGroups::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ComponentGroups::Items>) };
      inline vector<ComponentGroups::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ComponentGroups::Items>) };
      inline ComponentGroups& setItems(const vector<ComponentGroups::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline ComponentGroups& setItems(vector<ComponentGroups::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      // The name of the component group.
      shared_ptr<string> groupName_ {};
      // The names of the components in the component group.
      shared_ptr<vector<ComponentGroups::Items>> items_ {};
    };

    virtual bool empty() const override { return this->componentGroups_ == nullptr
        && this->standardComponents_ == nullptr; };
    // componentGroups Field Functions 
    bool hasComponentGroups() const { return this->componentGroups_ != nullptr;};
    void deleteComponentGroups() { this->componentGroups_ = nullptr;};
    inline const vector<DescribeAddonsResponseBody::ComponentGroups> & getComponentGroups() const { DARABONBA_PTR_GET_CONST(componentGroups_, vector<DescribeAddonsResponseBody::ComponentGroups>) };
    inline vector<DescribeAddonsResponseBody::ComponentGroups> getComponentGroups() { DARABONBA_PTR_GET(componentGroups_, vector<DescribeAddonsResponseBody::ComponentGroups>) };
    inline DescribeAddonsResponseBody& setComponentGroups(const vector<DescribeAddonsResponseBody::ComponentGroups> & componentGroups) { DARABONBA_PTR_SET_VALUE(componentGroups_, componentGroups) };
    inline DescribeAddonsResponseBody& setComponentGroups(vector<DescribeAddonsResponseBody::ComponentGroups> && componentGroups) { DARABONBA_PTR_SET_RVALUE(componentGroups_, componentGroups) };


    // standardComponents Field Functions 
    bool hasStandardComponents() const { return this->standardComponents_ != nullptr;};
    void deleteStandardComponents() { this->standardComponents_ = nullptr;};
    inline const map<string, StandardComponentsValue> & getStandardComponents() const { DARABONBA_PTR_GET_CONST(standardComponents_, map<string, StandardComponentsValue>) };
    inline map<string, StandardComponentsValue> getStandardComponents() { DARABONBA_PTR_GET(standardComponents_, map<string, StandardComponentsValue>) };
    inline DescribeAddonsResponseBody& setStandardComponents(const map<string, StandardComponentsValue> & standardComponents) { DARABONBA_PTR_SET_VALUE(standardComponents_, standardComponents) };
    inline DescribeAddonsResponseBody& setStandardComponents(map<string, StandardComponentsValue> && standardComponents) { DARABONBA_PTR_SET_RVALUE(standardComponents_, standardComponents) };


  protected:
    // The list of the returned components.
    shared_ptr<vector<DescribeAddonsResponseBody::ComponentGroups>> componentGroups_ {};
    // Standard components.
    shared_ptr<map<string, StandardComponentsValue>> standardComponents_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
