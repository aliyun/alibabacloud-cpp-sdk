// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTIONRISKYTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTIONRISKYTASKSRESPONSEBODY_HPP_
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
  class ListExecutionRiskyTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutionRiskyTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskyTasks, riskyTasks_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutionRiskyTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskyTasks, riskyTasks_);
    };
    ListExecutionRiskyTasksResponseBody() = default ;
    ListExecutionRiskyTasksResponseBody(const ListExecutionRiskyTasksResponseBody &) = default ;
    ListExecutionRiskyTasksResponseBody(ListExecutionRiskyTasksResponseBody &&) = default ;
    ListExecutionRiskyTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutionRiskyTasksResponseBody() = default ;
    ListExecutionRiskyTasksResponseBody& operator=(const ListExecutionRiskyTasksResponseBody &) = default ;
    ListExecutionRiskyTasksResponseBody& operator=(ListExecutionRiskyTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RiskyTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskyTasks& obj) { 
        DARABONBA_PTR_TO_JSON(API, API_);
        DARABONBA_PTR_TO_JSON(Service, service_);
        DARABONBA_PTR_TO_JSON(Task, task_);
        DARABONBA_PTR_TO_JSON(Template, template_);
      };
      friend void from_json(const Darabonba::Json& j, RiskyTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(API, API_);
        DARABONBA_PTR_FROM_JSON(Service, service_);
        DARABONBA_PTR_FROM_JSON(Task, task_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
      };
      RiskyTasks() = default ;
      RiskyTasks(const RiskyTasks &) = default ;
      RiskyTasks(RiskyTasks &&) = default ;
      RiskyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskyTasks() = default ;
      RiskyTasks& operator=(const RiskyTasks &) = default ;
      RiskyTasks& operator=(RiskyTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->API_ == nullptr
        && this->service_ == nullptr && this->task_ == nullptr && this->template_ == nullptr; };
      // API Field Functions 
      bool hasAPI() const { return this->API_ != nullptr;};
      void deleteAPI() { this->API_ = nullptr;};
      inline string getAPI() const { DARABONBA_PTR_GET_DEFAULT(API_, "") };
      inline RiskyTasks& setAPI(string API) { DARABONBA_PTR_SET_VALUE(API_, API) };


      // service Field Functions 
      bool hasService() const { return this->service_ != nullptr;};
      void deleteService() { this->service_ = nullptr;};
      inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
      inline RiskyTasks& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


      // task Field Functions 
      bool hasTask() const { return this->task_ != nullptr;};
      void deleteTask() { this->task_ = nullptr;};
      inline const vector<string> & getTask() const { DARABONBA_PTR_GET_CONST(task_, vector<string>) };
      inline vector<string> getTask() { DARABONBA_PTR_GET(task_, vector<string>) };
      inline RiskyTasks& setTask(const vector<string> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
      inline RiskyTasks& setTask(vector<string> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline const vector<string> & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, vector<string>) };
      inline vector<string> getTemplate() { DARABONBA_PTR_GET(template_, vector<string>) };
      inline RiskyTasks& setTemplate(const vector<string> & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
      inline RiskyTasks& setTemplate(vector<string> && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


    protected:
      // The name of the operation that the high-risk task calls.
      shared_ptr<string> API_ {};
      // The cloud service in which the high-risk task runs.
      shared_ptr<string> service_ {};
      // The details of the high-risk task.
      shared_ptr<vector<string>> task_ {};
      // The details of templates to which the high-risk task belongs.
      shared_ptr<vector<string>> template_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->riskyTasks_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExecutionRiskyTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskyTasks Field Functions 
    bool hasRiskyTasks() const { return this->riskyTasks_ != nullptr;};
    void deleteRiskyTasks() { this->riskyTasks_ = nullptr;};
    inline const vector<ListExecutionRiskyTasksResponseBody::RiskyTasks> & getRiskyTasks() const { DARABONBA_PTR_GET_CONST(riskyTasks_, vector<ListExecutionRiskyTasksResponseBody::RiskyTasks>) };
    inline vector<ListExecutionRiskyTasksResponseBody::RiskyTasks> getRiskyTasks() { DARABONBA_PTR_GET(riskyTasks_, vector<ListExecutionRiskyTasksResponseBody::RiskyTasks>) };
    inline ListExecutionRiskyTasksResponseBody& setRiskyTasks(const vector<ListExecutionRiskyTasksResponseBody::RiskyTasks> & riskyTasks) { DARABONBA_PTR_SET_VALUE(riskyTasks_, riskyTasks) };
    inline ListExecutionRiskyTasksResponseBody& setRiskyTasks(vector<ListExecutionRiskyTasksResponseBody::RiskyTasks> && riskyTasks) { DARABONBA_PTR_SET_RVALUE(riskyTasks_, riskyTasks) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about high-risk tasks.
    shared_ptr<vector<ListExecutionRiskyTasksResponseBody::RiskyTasks>> riskyTasks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
