// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEVERSIONSVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEVERSIONSVALUE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModuleVersionsValueComponentsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ModuleVersionsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleVersionsValue& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Components, components_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleVersionsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
    };
    ModuleVersionsValue() = default ;
    ModuleVersionsValue(const ModuleVersionsValue &) = default ;
    ModuleVersionsValue(ModuleVersionsValue &&) = default ;
    ModuleVersionsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleVersionsValue() = default ;
    ModuleVersionsValue& operator=(const ModuleVersionsValue &) = default ;
    ModuleVersionsValue& operator=(ModuleVersionsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr && this->components_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModuleVersionsValue& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModuleVersionsValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const map<string, ModuleVersionsValueComponentsValue> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, map<string, ModuleVersionsValueComponentsValue>) };
    inline map<string, ModuleVersionsValueComponentsValue> getComponents() { DARABONBA_PTR_GET(components_, map<string, ModuleVersionsValueComponentsValue>) };
    inline ModuleVersionsValue& setComponents(const map<string, ModuleVersionsValueComponentsValue> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline ModuleVersionsValue& setComponents(map<string, ModuleVersionsValueComponentsValue> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


  protected:
    // code
    shared_ptr<string> code_ {};
    // name
    shared_ptr<string> name_ {};
    // components
    shared_ptr<map<string, ModuleVersionsValueComponentsValue>> components_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
