// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEAGENTINFOSATTRIBUTESHOWINFOMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEAGENTINFOSATTRIBUTESHOWINFOMAPVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleAgentInfosAttributeShowInfoMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleAgentInfosAttributeShowInfoMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(text, text_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleAgentInfosAttributeShowInfoMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(text, text_);
    };
    ModuleAgentInfosAttributeShowInfoMapValue() = default ;
    ModuleAgentInfosAttributeShowInfoMapValue(const ModuleAgentInfosAttributeShowInfoMapValue &) = default ;
    ModuleAgentInfosAttributeShowInfoMapValue(ModuleAgentInfosAttributeShowInfoMapValue &&) = default ;
    ModuleAgentInfosAttributeShowInfoMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleAgentInfosAttributeShowInfoMapValue() = default ;
    ModuleAgentInfosAttributeShowInfoMapValue& operator=(const ModuleAgentInfosAttributeShowInfoMapValue &) = default ;
    ModuleAgentInfosAttributeShowInfoMapValue& operator=(ModuleAgentInfosAttributeShowInfoMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->name_ != nullptr && this->text_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModuleAgentInfosAttributeShowInfoMapValue& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModuleAgentInfosAttributeShowInfoMapValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ModuleAgentInfosAttributeShowInfoMapValue& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
