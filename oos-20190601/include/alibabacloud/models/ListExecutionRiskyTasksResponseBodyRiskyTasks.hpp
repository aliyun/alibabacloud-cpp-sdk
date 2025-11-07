// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTIONRISKYTASKSRESPONSEBODYRISKYTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTIONRISKYTASKSRESPONSEBODYRISKYTASKS_HPP_
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
  class ListExecutionRiskyTasksResponseBodyRiskyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutionRiskyTasksResponseBodyRiskyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(API, API_);
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(Task, task_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutionRiskyTasksResponseBodyRiskyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(API, API_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    ListExecutionRiskyTasksResponseBodyRiskyTasks() = default ;
    ListExecutionRiskyTasksResponseBodyRiskyTasks(const ListExecutionRiskyTasksResponseBodyRiskyTasks &) = default ;
    ListExecutionRiskyTasksResponseBodyRiskyTasks(ListExecutionRiskyTasksResponseBodyRiskyTasks &&) = default ;
    ListExecutionRiskyTasksResponseBodyRiskyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutionRiskyTasksResponseBodyRiskyTasks() = default ;
    ListExecutionRiskyTasksResponseBodyRiskyTasks& operator=(const ListExecutionRiskyTasksResponseBodyRiskyTasks &) = default ;
    ListExecutionRiskyTasksResponseBodyRiskyTasks& operator=(ListExecutionRiskyTasksResponseBodyRiskyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->API_ == nullptr
        && return this->service_ == nullptr && return this->task_ == nullptr && return this->template_ == nullptr; };
    // API Field Functions 
    bool hasAPI() const { return this->API_ != nullptr;};
    void deleteAPI() { this->API_ = nullptr;};
    inline string API() const { DARABONBA_PTR_GET_DEFAULT(API_, "") };
    inline ListExecutionRiskyTasksResponseBodyRiskyTasks& setAPI(string API) { DARABONBA_PTR_SET_VALUE(API_, API) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline ListExecutionRiskyTasksResponseBodyRiskyTasks& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const vector<string> & task() const { DARABONBA_PTR_GET_CONST(task_, vector<string>) };
    inline vector<string> task() { DARABONBA_PTR_GET(task_, vector<string>) };
    inline ListExecutionRiskyTasksResponseBodyRiskyTasks& setTask(const vector<string> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline ListExecutionRiskyTasksResponseBodyRiskyTasks& setTask(vector<string> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const vector<string> & _template() const { DARABONBA_PTR_GET_CONST(template_, vector<string>) };
    inline vector<string> _template() { DARABONBA_PTR_GET(template_, vector<string>) };
    inline ListExecutionRiskyTasksResponseBodyRiskyTasks& setTemplate(const vector<string> & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline ListExecutionRiskyTasksResponseBodyRiskyTasks& setTemplate(vector<string> && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    // The name of the operation that the high-risk task calls.
    std::shared_ptr<string> API_ = nullptr;
    // The cloud service in which the high-risk task runs.
    std::shared_ptr<string> service_ = nullptr;
    // The details of the high-risk task.
    std::shared_ptr<vector<string>> task_ = nullptr;
    // The details of templates to which the high-risk task belongs.
    std::shared_ptr<vector<string>> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
