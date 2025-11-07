// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATETEMPLATECONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VALIDATETEMPLATECONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ValidateTemplateContentResponseBodyTasks.hpp>
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
    virtual bool empty() const override { return this->outputs_ == nullptr
        && return this->parameters_ == nullptr && return this->ramRole_ == nullptr && return this->requestId_ == nullptr && return this->tasks_ == nullptr; };
    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string outputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline ValidateTemplateContentResponseBody& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ValidateTemplateContentResponseBody& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string ramRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline ValidateTemplateContentResponseBody& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ValidateTemplateContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<ValidateTemplateContentResponseBodyTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ValidateTemplateContentResponseBodyTasks>) };
    inline vector<ValidateTemplateContentResponseBodyTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<ValidateTemplateContentResponseBodyTasks>) };
    inline ValidateTemplateContentResponseBody& setTasks(const vector<ValidateTemplateContentResponseBodyTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ValidateTemplateContentResponseBody& setTasks(vector<ValidateTemplateContentResponseBodyTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // The outputs of the template.
    std::shared_ptr<string> outputs_ = nullptr;
    // The parameters of the template.
    std::shared_ptr<string> parameters_ = nullptr;
    // The RAM role.
    std::shared_ptr<string> ramRole_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The task defined in the template.
    std::shared_ptr<vector<ValidateTemplateContentResponseBodyTasks>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
