// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROCESSDEFINITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROCESSDEFINITIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetProcessDefinitionResponseBodyOriginator.hpp>
#include <vector>
#include <alibabacloud/models/GetProcessDefinitionResponseBodyOwners.hpp>
#include <alibabacloud/models/GetProcessDefinitionResponseBodyTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetProcessDefinitionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProcessDefinitionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(formUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(originator, originator_);
      DARABONBA_PTR_TO_JSON(outResult, outResult_);
      DARABONBA_PTR_TO_JSON(owners, owners_);
      DARABONBA_PTR_TO_JSON(processId, processId_);
      DARABONBA_PTR_TO_JSON(processInstanceId, processInstanceId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tasks, tasks_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_ANY_TO_JSON(variables, variables_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetProcessDefinitionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(formUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(originator, originator_);
      DARABONBA_PTR_FROM_JSON(outResult, outResult_);
      DARABONBA_PTR_FROM_JSON(owners, owners_);
      DARABONBA_PTR_FROM_JSON(processId, processId_);
      DARABONBA_PTR_FROM_JSON(processInstanceId, processInstanceId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_ANY_FROM_JSON(variables, variables_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetProcessDefinitionResponseBody() = default ;
    GetProcessDefinitionResponseBody(const GetProcessDefinitionResponseBody &) = default ;
    GetProcessDefinitionResponseBody(GetProcessDefinitionResponseBody &&) = default ;
    GetProcessDefinitionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProcessDefinitionResponseBody() = default ;
    GetProcessDefinitionResponseBody& operator=(const GetProcessDefinitionResponseBody &) = default ;
    GetProcessDefinitionResponseBody& operator=(GetProcessDefinitionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->formUuid_ != nullptr
        && this->originator_ != nullptr && this->outResult_ != nullptr && this->owners_ != nullptr && this->processId_ != nullptr && this->processInstanceId_ != nullptr
        && this->requestId_ != nullptr && this->status_ != nullptr && this->tasks_ != nullptr && this->title_ != nullptr && this->variables_ != nullptr
        && this->vendorRequestId_ != nullptr && this->vendorType_ != nullptr; };
    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline GetProcessDefinitionResponseBody& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // originator Field Functions 
    bool hasOriginator() const { return this->originator_ != nullptr;};
    void deleteOriginator() { this->originator_ = nullptr;};
    inline const GetProcessDefinitionResponseBodyOriginator & originator() const { DARABONBA_PTR_GET_CONST(originator_, GetProcessDefinitionResponseBodyOriginator) };
    inline GetProcessDefinitionResponseBodyOriginator originator() { DARABONBA_PTR_GET(originator_, GetProcessDefinitionResponseBodyOriginator) };
    inline GetProcessDefinitionResponseBody& setOriginator(const GetProcessDefinitionResponseBodyOriginator & originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };
    inline GetProcessDefinitionResponseBody& setOriginator(GetProcessDefinitionResponseBodyOriginator && originator) { DARABONBA_PTR_SET_RVALUE(originator_, originator) };


    // outResult Field Functions 
    bool hasOutResult() const { return this->outResult_ != nullptr;};
    void deleteOutResult() { this->outResult_ = nullptr;};
    inline string outResult() const { DARABONBA_PTR_GET_DEFAULT(outResult_, "") };
    inline GetProcessDefinitionResponseBody& setOutResult(string outResult) { DARABONBA_PTR_SET_VALUE(outResult_, outResult) };


    // owners Field Functions 
    bool hasOwners() const { return this->owners_ != nullptr;};
    void deleteOwners() { this->owners_ = nullptr;};
    inline const vector<GetProcessDefinitionResponseBodyOwners> & owners() const { DARABONBA_PTR_GET_CONST(owners_, vector<GetProcessDefinitionResponseBodyOwners>) };
    inline vector<GetProcessDefinitionResponseBodyOwners> owners() { DARABONBA_PTR_GET(owners_, vector<GetProcessDefinitionResponseBodyOwners>) };
    inline GetProcessDefinitionResponseBody& setOwners(const vector<GetProcessDefinitionResponseBodyOwners> & owners) { DARABONBA_PTR_SET_VALUE(owners_, owners) };
    inline GetProcessDefinitionResponseBody& setOwners(vector<GetProcessDefinitionResponseBodyOwners> && owners) { DARABONBA_PTR_SET_RVALUE(owners_, owners) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline GetProcessDefinitionResponseBody& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string processInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline GetProcessDefinitionResponseBody& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProcessDefinitionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetProcessDefinitionResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<GetProcessDefinitionResponseBodyTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<GetProcessDefinitionResponseBodyTasks>) };
    inline vector<GetProcessDefinitionResponseBodyTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<GetProcessDefinitionResponseBodyTasks>) };
    inline GetProcessDefinitionResponseBody& setTasks(const vector<GetProcessDefinitionResponseBodyTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline GetProcessDefinitionResponseBody& setTasks(vector<GetProcessDefinitionResponseBodyTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetProcessDefinitionResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline     const Darabonba::Json & variables() const { DARABONBA_GET(variables_) };
    Darabonba::Json & variables() { DARABONBA_GET(variables_) };
    inline GetProcessDefinitionResponseBody& setVariables(const Darabonba::Json & variables) { DARABONBA_SET_VALUE(variables_, variables) };
    inline GetProcessDefinitionResponseBody& setVariables(Darabonba::Json & variables) { DARABONBA_SET_RVALUE(variables_, variables) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetProcessDefinitionResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetProcessDefinitionResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<string> formUuid_ = nullptr;
    std::shared_ptr<GetProcessDefinitionResponseBodyOriginator> originator_ = nullptr;
    std::shared_ptr<string> outResult_ = nullptr;
    std::shared_ptr<vector<GetProcessDefinitionResponseBodyOwners>> owners_ = nullptr;
    std::shared_ptr<string> processId_ = nullptr;
    std::shared_ptr<string> processInstanceId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<GetProcessDefinitionResponseBodyTasks>> tasks_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    Darabonba::Json variables_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
