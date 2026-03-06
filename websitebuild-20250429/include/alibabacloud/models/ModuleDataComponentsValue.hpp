// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEDATACOMPONENTSVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEDATACOMPONENTSVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/ModuleDataComponentsValuePropertiesValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ModuleDataComponentsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleDataComponentsValue& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(InstanceProperty, instanceProperty_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(ModuleAttrStatus, moduleAttrStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleDataComponentsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(InstanceProperty, instanceProperty_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(ModuleAttrStatus, moduleAttrStatus_);
    };
    ModuleDataComponentsValue() = default ;
    ModuleDataComponentsValue(const ModuleDataComponentsValue &) = default ;
    ModuleDataComponentsValue(ModuleDataComponentsValue &&) = default ;
    ModuleDataComponentsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleDataComponentsValue() = default ;
    ModuleDataComponentsValue& operator=(const ModuleDataComponentsValue &) = default ;
    ModuleDataComponentsValue& operator=(ModuleDataComponentsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceProperty : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceProperty& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceProperty& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      InstanceProperty() = default ;
      InstanceProperty(const InstanceProperty &) = default ;
      InstanceProperty(InstanceProperty &&) = default ;
      InstanceProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceProperty() = default ;
      InstanceProperty& operator=(const InstanceProperty &) = default ;
      InstanceProperty& operator=(InstanceProperty &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Values : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Values& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Value, value_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Values& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Values() = default ;
        Values(const Values &) = default ;
        Values(Values &&) = default ;
        Values(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Values() = default ;
        Values& operator=(const Values &) = default ;
        Values& operator=(Values &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->value_ == nullptr && this->name_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Values& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Values& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Values& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<string> value_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr && this->values_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline InstanceProperty& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline InstanceProperty& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline InstanceProperty& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<InstanceProperty::Values> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<InstanceProperty::Values>) };
      inline vector<InstanceProperty::Values> getValues() { DARABONBA_PTR_GET(values_, vector<InstanceProperty::Values>) };
      inline InstanceProperty& setValues(const vector<InstanceProperty::Values> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline InstanceProperty& setValues(vector<InstanceProperty::Values> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> value_ {};
      shared_ptr<vector<InstanceProperty::Values>> values_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr && this->instanceProperty_ == nullptr && this->properties_ == nullptr && this->moduleAttrStatus_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModuleDataComponentsValue& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModuleDataComponentsValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // instanceProperty Field Functions 
    bool hasInstanceProperty() const { return this->instanceProperty_ != nullptr;};
    void deleteInstanceProperty() { this->instanceProperty_ = nullptr;};
    inline const vector<ModuleDataComponentsValue::InstanceProperty> & getInstanceProperty() const { DARABONBA_PTR_GET_CONST(instanceProperty_, vector<ModuleDataComponentsValue::InstanceProperty>) };
    inline vector<ModuleDataComponentsValue::InstanceProperty> getInstanceProperty() { DARABONBA_PTR_GET(instanceProperty_, vector<ModuleDataComponentsValue::InstanceProperty>) };
    inline ModuleDataComponentsValue& setInstanceProperty(const vector<ModuleDataComponentsValue::InstanceProperty> & instanceProperty) { DARABONBA_PTR_SET_VALUE(instanceProperty_, instanceProperty) };
    inline ModuleDataComponentsValue& setInstanceProperty(vector<ModuleDataComponentsValue::InstanceProperty> && instanceProperty) { DARABONBA_PTR_SET_RVALUE(instanceProperty_, instanceProperty) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const map<string, ModuleDataComponentsValuePropertiesValue> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, map<string, ModuleDataComponentsValuePropertiesValue>) };
    inline map<string, ModuleDataComponentsValuePropertiesValue> getProperties() { DARABONBA_PTR_GET(properties_, map<string, ModuleDataComponentsValuePropertiesValue>) };
    inline ModuleDataComponentsValue& setProperties(const map<string, ModuleDataComponentsValuePropertiesValue> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline ModuleDataComponentsValue& setProperties(map<string, ModuleDataComponentsValuePropertiesValue> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // moduleAttrStatus Field Functions 
    bool hasModuleAttrStatus() const { return this->moduleAttrStatus_ != nullptr;};
    void deleteModuleAttrStatus() { this->moduleAttrStatus_ = nullptr;};
    inline int32_t getModuleAttrStatus() const { DARABONBA_PTR_GET_DEFAULT(moduleAttrStatus_, 0) };
    inline ModuleDataComponentsValue& setModuleAttrStatus(int32_t moduleAttrStatus) { DARABONBA_PTR_SET_VALUE(moduleAttrStatus_, moduleAttrStatus) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> name_ {};
    shared_ptr<vector<ModuleDataComponentsValue::InstanceProperty>> instanceProperty_ {};
    shared_ptr<map<string, ModuleDataComponentsValuePropertiesValue>> properties_ {};
    shared_ptr<int32_t> moduleAttrStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
