// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATETEMPLATECONTENTRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_VALIDATETEMPLATECONTENTRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ValidateTemplateContentResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateTemplateContentResponseBodyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateTemplateContentResponseBodyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ValidateTemplateContentResponseBodyTasks() = default ;
    ValidateTemplateContentResponseBodyTasks(const ValidateTemplateContentResponseBodyTasks &) = default ;
    ValidateTemplateContentResponseBodyTasks(ValidateTemplateContentResponseBodyTasks &&) = default ;
    ValidateTemplateContentResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateTemplateContentResponseBodyTasks() = default ;
    ValidateTemplateContentResponseBodyTasks& operator=(const ValidateTemplateContentResponseBodyTasks &) = default ;
    ValidateTemplateContentResponseBodyTasks& operator=(ValidateTemplateContentResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->name_ == nullptr && return this->outputs_ == nullptr && return this->properties_ == nullptr && return this->type_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ValidateTemplateContentResponseBodyTasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ValidateTemplateContentResponseBodyTasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string outputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline ValidateTemplateContentResponseBodyTasks& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline string properties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
    inline ValidateTemplateContentResponseBodyTasks& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ValidateTemplateContentResponseBodyTasks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The description of the task.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> name_ = nullptr;
    // The outputs of the task.
    std::shared_ptr<string> outputs_ = nullptr;
    // The properties of the task.
    std::shared_ptr<string> properties_ = nullptr;
    // The type of the task.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
