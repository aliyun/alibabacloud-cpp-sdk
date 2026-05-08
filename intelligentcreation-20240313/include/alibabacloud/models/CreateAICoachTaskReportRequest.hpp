// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAICOACHTASKREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAICOACHTASKREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CreateAICoachTaskReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAICoachTaskReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dialogueList, dialogueList_);
      DARABONBA_PTR_TO_JSON(idempotentId, idempotentId_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAICoachTaskReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dialogueList, dialogueList_);
      DARABONBA_PTR_FROM_JSON(idempotentId, idempotentId_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    CreateAICoachTaskReportRequest() = default ;
    CreateAICoachTaskReportRequest(const CreateAICoachTaskReportRequest &) = default ;
    CreateAICoachTaskReportRequest(CreateAICoachTaskReportRequest &&) = default ;
    CreateAICoachTaskReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAICoachTaskReportRequest() = default ;
    CreateAICoachTaskReportRequest& operator=(const CreateAICoachTaskReportRequest &) = default ;
    CreateAICoachTaskReportRequest& operator=(CreateAICoachTaskReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DialogueList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DialogueList& obj) { 
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(role, role_);
      };
      friend void from_json(const Darabonba::Json& j, DialogueList& obj) { 
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(role, role_);
      };
      DialogueList() = default ;
      DialogueList(const DialogueList &) = default ;
      DialogueList(DialogueList &&) = default ;
      DialogueList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DialogueList() = default ;
      DialogueList& operator=(const DialogueList &) = default ;
      DialogueList& operator=(DialogueList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr
        && this->role_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline DialogueList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline DialogueList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      shared_ptr<string> message_ {};
      shared_ptr<string> role_ {};
    };

    virtual bool empty() const override { return this->dialogueList_ == nullptr
        && this->idempotentId_ == nullptr && this->taskId_ == nullptr; };
    // dialogueList Field Functions 
    bool hasDialogueList() const { return this->dialogueList_ != nullptr;};
    void deleteDialogueList() { this->dialogueList_ = nullptr;};
    inline const vector<CreateAICoachTaskReportRequest::DialogueList> & getDialogueList() const { DARABONBA_PTR_GET_CONST(dialogueList_, vector<CreateAICoachTaskReportRequest::DialogueList>) };
    inline vector<CreateAICoachTaskReportRequest::DialogueList> getDialogueList() { DARABONBA_PTR_GET(dialogueList_, vector<CreateAICoachTaskReportRequest::DialogueList>) };
    inline CreateAICoachTaskReportRequest& setDialogueList(const vector<CreateAICoachTaskReportRequest::DialogueList> & dialogueList) { DARABONBA_PTR_SET_VALUE(dialogueList_, dialogueList) };
    inline CreateAICoachTaskReportRequest& setDialogueList(vector<CreateAICoachTaskReportRequest::DialogueList> && dialogueList) { DARABONBA_PTR_SET_RVALUE(dialogueList_, dialogueList) };


    // idempotentId Field Functions 
    bool hasIdempotentId() const { return this->idempotentId_ != nullptr;};
    void deleteIdempotentId() { this->idempotentId_ = nullptr;};
    inline string getIdempotentId() const { DARABONBA_PTR_GET_DEFAULT(idempotentId_, "") };
    inline CreateAICoachTaskReportRequest& setIdempotentId(string idempotentId) { DARABONBA_PTR_SET_VALUE(idempotentId_, idempotentId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateAICoachTaskReportRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<vector<CreateAICoachTaskReportRequest::DialogueList>> dialogueList_ {};
    shared_ptr<string> idempotentId_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
