// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULENEXTPROPERTIESVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULENEXTPROPERTIESVALUE_HPP_
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
  class ModuleNextPropertiesValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleNextPropertiesValue& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleNextPropertiesValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    ModuleNextPropertiesValue() = default ;
    ModuleNextPropertiesValue(const ModuleNextPropertiesValue &) = default ;
    ModuleNextPropertiesValue(ModuleNextPropertiesValue &&) = default ;
    ModuleNextPropertiesValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleNextPropertiesValue() = default ;
    ModuleNextPropertiesValue& operator=(const ModuleNextPropertiesValue &) = default ;
    ModuleNextPropertiesValue& operator=(ModuleNextPropertiesValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Values : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Values& obj) { 
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Values& obj) { 
        DARABONBA_PTR_FROM_JSON(Value, value_);
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
      virtual bool empty() const override { return this->value_ == nullptr; };
      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Values& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // placeholder
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->values_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModuleNextPropertiesValue& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<ModuleNextPropertiesValue::Values> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<ModuleNextPropertiesValue::Values>) };
    inline vector<ModuleNextPropertiesValue::Values> getValues() { DARABONBA_PTR_GET(values_, vector<ModuleNextPropertiesValue::Values>) };
    inline ModuleNextPropertiesValue& setValues(const vector<ModuleNextPropertiesValue::Values> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline ModuleNextPropertiesValue& setValues(vector<ModuleNextPropertiesValue::Values> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ModuleNextPropertiesValue::Values>> values_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
