// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMFYWORKFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMFYWORKFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateComfyWorkflowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComfyWorkflowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MissingNodes, missingNodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComfyWorkflowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MissingNodes, missingNodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    CreateComfyWorkflowResponseBody() = default ;
    CreateComfyWorkflowResponseBody(const CreateComfyWorkflowResponseBody &) = default ;
    CreateComfyWorkflowResponseBody(CreateComfyWorkflowResponseBody &&) = default ;
    CreateComfyWorkflowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComfyWorkflowResponseBody() = default ;
    CreateComfyWorkflowResponseBody& operator=(const CreateComfyWorkflowResponseBody &) = default ;
    CreateComfyWorkflowResponseBody& operator=(CreateComfyWorkflowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->missingNodes_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->workflowId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline CreateComfyWorkflowResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateComfyWorkflowResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // missingNodes Field Functions 
    bool hasMissingNodes() const { return this->missingNodes_ != nullptr;};
    void deleteMissingNodes() { this->missingNodes_ = nullptr;};
    inline const vector<string> & getMissingNodes() const { DARABONBA_PTR_GET_CONST(missingNodes_, vector<string>) };
    inline vector<string> getMissingNodes() { DARABONBA_PTR_GET(missingNodes_, vector<string>) };
    inline CreateComfyWorkflowResponseBody& setMissingNodes(const vector<string> & missingNodes) { DARABONBA_PTR_SET_VALUE(missingNodes_, missingNodes) };
    inline CreateComfyWorkflowResponseBody& setMissingNodes(vector<string> && missingNodes) { DARABONBA_PTR_SET_RVALUE(missingNodes_, missingNodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateComfyWorkflowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateComfyWorkflowResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline CreateComfyWorkflowResponseBody& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> missingNodes_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> workflowId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
