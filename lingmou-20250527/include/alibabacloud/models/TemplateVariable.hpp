// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATEVARIABLE_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATEVARIABLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class TemplateVariable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TemplateVariable& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_ANY_TO_JSON(properties, properties_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, TemplateVariable& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_ANY_FROM_JSON(properties, properties_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    TemplateVariable() = default ;
    TemplateVariable(const TemplateVariable &) = default ;
    TemplateVariable(TemplateVariable &&) = default ;
    TemplateVariable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TemplateVariable() = default ;
    TemplateVariable& operator=(const TemplateVariable &) = default ;
    TemplateVariable& operator=(TemplateVariable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->properties_ == nullptr && return this->type_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline TemplateVariable& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline     const Darabonba::Json & properties() const { DARABONBA_GET(properties_) };
    Darabonba::Json & properties() { DARABONBA_GET(properties_) };
    inline TemplateVariable& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
    inline TemplateVariable& setProperties(Darabonba::Json & properties) { DARABONBA_SET_RVALUE(properties_, properties) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline TemplateVariable& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    Darabonba::Json properties_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
