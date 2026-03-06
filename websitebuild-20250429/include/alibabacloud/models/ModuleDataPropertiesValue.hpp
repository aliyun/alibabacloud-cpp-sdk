// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEDATAPROPERTIESVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEDATAPROPERTIESVALUE_HPP_
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
  class ModuleDataPropertiesValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleDataPropertiesValue& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleDataPropertiesValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    ModuleDataPropertiesValue() = default ;
    ModuleDataPropertiesValue(const ModuleDataPropertiesValue &) = default ;
    ModuleDataPropertiesValue(ModuleDataPropertiesValue &&) = default ;
    ModuleDataPropertiesValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleDataPropertiesValue() = default ;
    ModuleDataPropertiesValue& operator=(const ModuleDataPropertiesValue &) = default ;
    ModuleDataPropertiesValue& operator=(ModuleDataPropertiesValue &&) = default ;
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
    inline ModuleDataPropertiesValue& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<ModuleDataPropertiesValue::Values> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<ModuleDataPropertiesValue::Values>) };
    inline vector<ModuleDataPropertiesValue::Values> getValues() { DARABONBA_PTR_GET(values_, vector<ModuleDataPropertiesValue::Values>) };
    inline ModuleDataPropertiesValue& setValues(const vector<ModuleDataPropertiesValue::Values> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline ModuleDataPropertiesValue& setValues(vector<ModuleDataPropertiesValue::Values> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ModuleDataPropertiesValue::Values>> values_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
