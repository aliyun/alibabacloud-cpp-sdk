// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKFLOWREQUESTTASKSOUTPUTSVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKFLOWREQUESTTASKSOUTPUTSVARIABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateWorkflowRequestTasksOutputsVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkflowRequestTasksOutputsVariables& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkflowRequestTasksOutputsVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    UpdateWorkflowRequestTasksOutputsVariables() = default ;
    UpdateWorkflowRequestTasksOutputsVariables(const UpdateWorkflowRequestTasksOutputsVariables &) = default ;
    UpdateWorkflowRequestTasksOutputsVariables(UpdateWorkflowRequestTasksOutputsVariables &&) = default ;
    UpdateWorkflowRequestTasksOutputsVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkflowRequestTasksOutputsVariables() = default ;
    UpdateWorkflowRequestTasksOutputsVariables& operator=(const UpdateWorkflowRequestTasksOutputsVariables &) = default ;
    UpdateWorkflowRequestTasksOutputsVariables& operator=(UpdateWorkflowRequestTasksOutputsVariables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->type_ == nullptr && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateWorkflowRequestTasksOutputsVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateWorkflowRequestTasksOutputsVariables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateWorkflowRequestTasksOutputsVariables& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The name of the variable.
    std::shared_ptr<string> name_ = nullptr;
    // The type. Valid values:
    // 
    // *   Constant: constant
    // *   PassThrough: node output
    // *   System: variable
    // *   NodeOutput: script output
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // The value of the variable.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
