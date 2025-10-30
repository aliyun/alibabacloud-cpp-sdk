// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLETEMPLATEBINDRESPONSEBODYRESULTOBJECTCHARGEVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLETEMPLATEBINDRESPONSEBODYRESULTOBJECTCHARGEVARIABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(fieldType, fieldType_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(fieldType, fieldType_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables() = default ;
    DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables(const DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables &) = default ;
    DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables(DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables &&) = default ;
    DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables() = default ;
    DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables& operator=(const DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables &) = default ;
    DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables& operator=(DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->description_ == nullptr && return this->fieldType_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->title_ == nullptr
        && return this->type_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline string fieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
    inline DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeEventVariableTemplateBindResponseBodyResultObjectChargeVariables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Variable code
    std::shared_ptr<string> code_ = nullptr;
    // Description of the variable.
    std::shared_ptr<string> description_ = nullptr;
    // Field type.
    std::shared_ptr<string> fieldType_ = nullptr;
    // Primary key ID
    std::shared_ptr<int64_t> id_ = nullptr;
    // Variable name
    std::shared_ptr<string> name_ = nullptr;
    // Title.
    std::shared_ptr<string> title_ = nullptr;
    // Variable type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
