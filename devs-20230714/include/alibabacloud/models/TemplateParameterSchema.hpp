// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATEPARAMETERSCHEMA_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATEPARAMETERSCHEMA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TemplateParameterSchemaRoleExtension.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class TemplateParameterSchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TemplateParameterSchema& obj) { 
      DARABONBA_ANY_TO_JSON(default, default_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enum, enum_);
      DARABONBA_PTR_TO_JSON(pattern, pattern_);
      DARABONBA_PTR_TO_JSON(required, required_);
      DARABONBA_PTR_TO_JSON(roleExtension, roleExtension_);
      DARABONBA_PTR_TO_JSON(sensitive, sensitive_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, TemplateParameterSchema& obj) { 
      DARABONBA_ANY_FROM_JSON(default, default_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enum, enum_);
      DARABONBA_PTR_FROM_JSON(pattern, pattern_);
      DARABONBA_PTR_FROM_JSON(required, required_);
      DARABONBA_PTR_FROM_JSON(roleExtension, roleExtension_);
      DARABONBA_PTR_FROM_JSON(sensitive, sensitive_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    TemplateParameterSchema() = default ;
    TemplateParameterSchema(const TemplateParameterSchema &) = default ;
    TemplateParameterSchema(TemplateParameterSchema &&) = default ;
    TemplateParameterSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TemplateParameterSchema() = default ;
    TemplateParameterSchema& operator=(const TemplateParameterSchema &) = default ;
    TemplateParameterSchema& operator=(TemplateParameterSchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->default_ != nullptr
        && this->description_ != nullptr && this->enum_ != nullptr && this->pattern_ != nullptr && this->required_ != nullptr && this->roleExtension_ != nullptr
        && this->sensitive_ != nullptr && this->title_ != nullptr && this->type_ != nullptr; };
    // default Field Functions 
    bool hasDefault() const { return this->default_ != nullptr;};
    void deleteDefault() { this->default_ = nullptr;};
    inline     const Darabonba::Json & _default() const { DARABONBA_GET(default_) };
    Darabonba::Json & _default() { DARABONBA_GET(default_) };
    inline TemplateParameterSchema& setDefault(const Darabonba::Json & _default) { DARABONBA_SET_VALUE(default_, _default) };
    inline TemplateParameterSchema& setDefault(Darabonba::Json & _default) { DARABONBA_SET_RVALUE(default_, _default) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline TemplateParameterSchema& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enum Field Functions 
    bool hasEnum() const { return this->enum_ != nullptr;};
    void deleteEnum() { this->enum_ = nullptr;};
    inline const vector<string> & _enum() const { DARABONBA_PTR_GET_CONST(enum_, vector<string>) };
    inline vector<string> _enum() { DARABONBA_PTR_GET(enum_, vector<string>) };
    inline TemplateParameterSchema& setEnum(const vector<string> & _enum) { DARABONBA_PTR_SET_VALUE(enum_, _enum) };
    inline TemplateParameterSchema& setEnum(vector<string> && _enum) { DARABONBA_PTR_SET_RVALUE(enum_, _enum) };


    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline string pattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
    inline TemplateParameterSchema& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline TemplateParameterSchema& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    // roleExtension Field Functions 
    bool hasRoleExtension() const { return this->roleExtension_ != nullptr;};
    void deleteRoleExtension() { this->roleExtension_ = nullptr;};
    inline const TemplateParameterSchemaRoleExtension & roleExtension() const { DARABONBA_PTR_GET_CONST(roleExtension_, TemplateParameterSchemaRoleExtension) };
    inline TemplateParameterSchemaRoleExtension roleExtension() { DARABONBA_PTR_GET(roleExtension_, TemplateParameterSchemaRoleExtension) };
    inline TemplateParameterSchema& setRoleExtension(const TemplateParameterSchemaRoleExtension & roleExtension) { DARABONBA_PTR_SET_VALUE(roleExtension_, roleExtension) };
    inline TemplateParameterSchema& setRoleExtension(TemplateParameterSchemaRoleExtension && roleExtension) { DARABONBA_PTR_SET_RVALUE(roleExtension_, roleExtension) };


    // sensitive Field Functions 
    bool hasSensitive() const { return this->sensitive_ != nullptr;};
    void deleteSensitive() { this->sensitive_ = nullptr;};
    inline bool sensitive() const { DARABONBA_PTR_GET_DEFAULT(sensitive_, false) };
    inline TemplateParameterSchema& setSensitive(bool sensitive) { DARABONBA_PTR_SET_VALUE(sensitive_, sensitive) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline TemplateParameterSchema& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline TemplateParameterSchema& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    Darabonba::Json default_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<string>> enum_ = nullptr;
    std::shared_ptr<string> pattern_ = nullptr;
    std::shared_ptr<bool> required_ = nullptr;
    std::shared_ptr<TemplateParameterSchemaRoleExtension> roleExtension_ = nullptr;
    std::shared_ptr<bool> sensitive_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
