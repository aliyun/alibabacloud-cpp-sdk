// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEVERSIONSVALUECOMPONENTSVALUEPROPERTIESVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEVERSIONSVALUECOMPONENTSVALUEPROPERTIESVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ModuleVersionsValueComponentsValuePropertiesValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleVersionsValueComponentsValuePropertiesValue& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleVersionsValueComponentsValuePropertiesValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    ModuleVersionsValueComponentsValuePropertiesValue() = default ;
    ModuleVersionsValueComponentsValuePropertiesValue(const ModuleVersionsValueComponentsValuePropertiesValue &) = default ;
    ModuleVersionsValueComponentsValuePropertiesValue(ModuleVersionsValueComponentsValuePropertiesValue &&) = default ;
    ModuleVersionsValueComponentsValuePropertiesValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleVersionsValueComponentsValuePropertiesValue() = default ;
    ModuleVersionsValueComponentsValuePropertiesValue& operator=(const ModuleVersionsValueComponentsValuePropertiesValue &) = default ;
    ModuleVersionsValueComponentsValuePropertiesValue& operator=(ModuleVersionsValueComponentsValuePropertiesValue &&) = default ;
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
    inline ModuleVersionsValueComponentsValuePropertiesValue& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModuleVersionsValueComponentsValuePropertiesValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ModuleVersionsValueComponentsValuePropertiesValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<ModuleVersionsValueComponentsValuePropertiesValue::Values> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<ModuleVersionsValueComponentsValuePropertiesValue::Values>) };
    inline vector<ModuleVersionsValueComponentsValuePropertiesValue::Values> getValues() { DARABONBA_PTR_GET(values_, vector<ModuleVersionsValueComponentsValuePropertiesValue::Values>) };
    inline ModuleVersionsValueComponentsValuePropertiesValue& setValues(const vector<ModuleVersionsValueComponentsValuePropertiesValue::Values> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline ModuleVersionsValueComponentsValuePropertiesValue& setValues(vector<ModuleVersionsValueComponentsValuePropertiesValue::Values> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> value_ {};
    shared_ptr<vector<ModuleVersionsValueComponentsValuePropertiesValue::Values>> values_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
