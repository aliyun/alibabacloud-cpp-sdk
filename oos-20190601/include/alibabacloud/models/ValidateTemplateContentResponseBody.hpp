// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATETEMPLATECONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VALIDATETEMPLATECONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ValidateTemplateContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateTemplateContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RamRole, ramRole_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateTemplateContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RamRole, ramRole_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    ValidateTemplateContentResponseBody() = default ;
    ValidateTemplateContentResponseBody(const ValidateTemplateContentResponseBody &) = default ;
    ValidateTemplateContentResponseBody(ValidateTemplateContentResponseBody &&) = default ;
    ValidateTemplateContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateTemplateContentResponseBody() = default ;
    ValidateTemplateContentResponseBody& operator=(const ValidateTemplateContentResponseBody &) = default ;
    ValidateTemplateContentResponseBody& operator=(ValidateTemplateContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Outputs, outputs_);
        DARABONBA_PTR_TO_JSON(Properties, properties_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
        DARABONBA_PTR_FROM_JSON(Properties, properties_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Tasks() = default ;
      Tasks(const Tasks &) = default ;
      Tasks(Tasks &&) = default ;
      Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tasks() = default ;
      Tasks& operator=(const Tasks &) = default ;
      Tasks& operator=(Tasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->outputs_ == nullptr && this->properties_ == nullptr && this->type_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Tasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Tasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
      inline Tasks& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline string getProperties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
      inline Tasks& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Tasks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The description of the task.
      shared_ptr<string> description_ {};
      // The name of the task.
      shared_ptr<string> name_ {};
      // The outputs of the task.
      shared_ptr<string> outputs_ {};
      // The properties of the task.
      shared_ptr<string> properties_ {};
      // The type of the task.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->outputs_ == nullptr
        && this->parameters_ == nullptr && this->ramRole_ == nullptr && this->requestId_ == nullptr && this->tasks_ == nullptr; };
    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline ValidateTemplateContentResponseBody& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ValidateTemplateContentResponseBody& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string getRamRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline ValidateTemplateContentResponseBody& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ValidateTemplateContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<ValidateTemplateContentResponseBody::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ValidateTemplateContentResponseBody::Tasks>) };
    inline vector<ValidateTemplateContentResponseBody::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<ValidateTemplateContentResponseBody::Tasks>) };
    inline ValidateTemplateContentResponseBody& setTasks(const vector<ValidateTemplateContentResponseBody::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ValidateTemplateContentResponseBody& setTasks(vector<ValidateTemplateContentResponseBody::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // The outputs of the template.
    shared_ptr<string> outputs_ {};
    // The parameters of the template.
    shared_ptr<string> parameters_ {};
    // The RAM role.
    shared_ptr<string> ramRole_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The task defined in the template.
    shared_ptr<vector<ValidateTemplateContentResponseBody::Tasks>> tasks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
