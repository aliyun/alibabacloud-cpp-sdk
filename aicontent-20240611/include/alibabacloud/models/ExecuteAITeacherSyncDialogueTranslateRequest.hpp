// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEAITEACHERSYNCDIALOGUETRANSLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEAITEACHERSYNCDIALOGUETRANSLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ExecuteAITeacherSyncDialogueTranslateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAITeacherSyncDialogueTranslateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dialogueTasks, dialogueTasks_);
      DARABONBA_PTR_TO_JSON(records, records_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAITeacherSyncDialogueTranslateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dialogueTasks, dialogueTasks_);
      DARABONBA_PTR_FROM_JSON(records, records_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    ExecuteAITeacherSyncDialogueTranslateRequest() = default ;
    ExecuteAITeacherSyncDialogueTranslateRequest(const ExecuteAITeacherSyncDialogueTranslateRequest &) = default ;
    ExecuteAITeacherSyncDialogueTranslateRequest(ExecuteAITeacherSyncDialogueTranslateRequest &&) = default ;
    ExecuteAITeacherSyncDialogueTranslateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAITeacherSyncDialogueTranslateRequest() = default ;
    ExecuteAITeacherSyncDialogueTranslateRequest& operator=(const ExecuteAITeacherSyncDialogueTranslateRequest &) = default ;
    ExecuteAITeacherSyncDialogueTranslateRequest& operator=(ExecuteAITeacherSyncDialogueTranslateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(isOffTopicControl, isOffTopicControl_);
        DARABONBA_PTR_TO_JSON(isOnTopic, isOnTopic_);
        DARABONBA_PTR_TO_JSON(order, order_);
        DARABONBA_PTR_TO_JSON(role, role_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(isOffTopicControl, isOffTopicControl_);
        DARABONBA_PTR_FROM_JSON(isOnTopic, isOnTopic_);
        DARABONBA_PTR_FROM_JSON(order, order_);
        DARABONBA_PTR_FROM_JSON(role, role_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->isOffTopicControl_ == nullptr && this->isOnTopic_ == nullptr && this->order_ == nullptr && this->role_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Records& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // isOffTopicControl Field Functions 
      bool hasIsOffTopicControl() const { return this->isOffTopicControl_ != nullptr;};
      void deleteIsOffTopicControl() { this->isOffTopicControl_ = nullptr;};
      inline bool getIsOffTopicControl() const { DARABONBA_PTR_GET_DEFAULT(isOffTopicControl_, false) };
      inline Records& setIsOffTopicControl(bool isOffTopicControl) { DARABONBA_PTR_SET_VALUE(isOffTopicControl_, isOffTopicControl) };


      // isOnTopic Field Functions 
      bool hasIsOnTopic() const { return this->isOnTopic_ != nullptr;};
      void deleteIsOnTopic() { this->isOnTopic_ = nullptr;};
      inline bool getIsOnTopic() const { DARABONBA_PTR_GET_DEFAULT(isOnTopic_, false) };
      inline Records& setIsOnTopic(bool isOnTopic) { DARABONBA_PTR_SET_VALUE(isOnTopic_, isOnTopic) };


      // order Field Functions 
      bool hasOrder() const { return this->order_ != nullptr;};
      void deleteOrder() { this->order_ = nullptr;};
      inline int32_t getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
      inline Records& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Records& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      // This parameter is required.
      shared_ptr<string> content_ {};
      shared_ptr<bool> isOffTopicControl_ {};
      shared_ptr<bool> isOnTopic_ {};
      // This parameter is required.
      shared_ptr<int32_t> order_ {};
      // This parameter is required.
      shared_ptr<string> role_ {};
    };

    class DialogueTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DialogueTasks& obj) { 
        DARABONBA_PTR_TO_JSON(assistant, assistant_);
        DARABONBA_PTR_TO_JSON(assistantTranslate, assistantTranslate_);
        DARABONBA_PTR_TO_JSON(order, order_);
        DARABONBA_PTR_TO_JSON(user, user_);
      };
      friend void from_json(const Darabonba::Json& j, DialogueTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(assistant, assistant_);
        DARABONBA_PTR_FROM_JSON(assistantTranslate, assistantTranslate_);
        DARABONBA_PTR_FROM_JSON(order, order_);
        DARABONBA_PTR_FROM_JSON(user, user_);
      };
      DialogueTasks() = default ;
      DialogueTasks(const DialogueTasks &) = default ;
      DialogueTasks(DialogueTasks &&) = default ;
      DialogueTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DialogueTasks() = default ;
      DialogueTasks& operator=(const DialogueTasks &) = default ;
      DialogueTasks& operator=(DialogueTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assistant_ == nullptr
        && this->assistantTranslate_ == nullptr && this->order_ == nullptr && this->user_ == nullptr; };
      // assistant Field Functions 
      bool hasAssistant() const { return this->assistant_ != nullptr;};
      void deleteAssistant() { this->assistant_ = nullptr;};
      inline string getAssistant() const { DARABONBA_PTR_GET_DEFAULT(assistant_, "") };
      inline DialogueTasks& setAssistant(string assistant) { DARABONBA_PTR_SET_VALUE(assistant_, assistant) };


      // assistantTranslate Field Functions 
      bool hasAssistantTranslate() const { return this->assistantTranslate_ != nullptr;};
      void deleteAssistantTranslate() { this->assistantTranslate_ = nullptr;};
      inline string getAssistantTranslate() const { DARABONBA_PTR_GET_DEFAULT(assistantTranslate_, "") };
      inline DialogueTasks& setAssistantTranslate(string assistantTranslate) { DARABONBA_PTR_SET_VALUE(assistantTranslate_, assistantTranslate) };


      // order Field Functions 
      bool hasOrder() const { return this->order_ != nullptr;};
      void deleteOrder() { this->order_ = nullptr;};
      inline int32_t getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
      inline DialogueTasks& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline DialogueTasks& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // This parameter is required.
      shared_ptr<string> assistant_ {};
      shared_ptr<string> assistantTranslate_ {};
      // This parameter is required.
      shared_ptr<int32_t> order_ {};
      // This parameter is required.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->dialogueTasks_ == nullptr
        && this->records_ == nullptr && this->userId_ == nullptr; };
    // dialogueTasks Field Functions 
    bool hasDialogueTasks() const { return this->dialogueTasks_ != nullptr;};
    void deleteDialogueTasks() { this->dialogueTasks_ = nullptr;};
    inline const vector<ExecuteAITeacherSyncDialogueTranslateRequest::DialogueTasks> & getDialogueTasks() const { DARABONBA_PTR_GET_CONST(dialogueTasks_, vector<ExecuteAITeacherSyncDialogueTranslateRequest::DialogueTasks>) };
    inline vector<ExecuteAITeacherSyncDialogueTranslateRequest::DialogueTasks> getDialogueTasks() { DARABONBA_PTR_GET(dialogueTasks_, vector<ExecuteAITeacherSyncDialogueTranslateRequest::DialogueTasks>) };
    inline ExecuteAITeacherSyncDialogueTranslateRequest& setDialogueTasks(const vector<ExecuteAITeacherSyncDialogueTranslateRequest::DialogueTasks> & dialogueTasks) { DARABONBA_PTR_SET_VALUE(dialogueTasks_, dialogueTasks) };
    inline ExecuteAITeacherSyncDialogueTranslateRequest& setDialogueTasks(vector<ExecuteAITeacherSyncDialogueTranslateRequest::DialogueTasks> && dialogueTasks) { DARABONBA_PTR_SET_RVALUE(dialogueTasks_, dialogueTasks) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<ExecuteAITeacherSyncDialogueTranslateRequest::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<ExecuteAITeacherSyncDialogueTranslateRequest::Records>) };
    inline vector<ExecuteAITeacherSyncDialogueTranslateRequest::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<ExecuteAITeacherSyncDialogueTranslateRequest::Records>) };
    inline ExecuteAITeacherSyncDialogueTranslateRequest& setRecords(const vector<ExecuteAITeacherSyncDialogueTranslateRequest::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline ExecuteAITeacherSyncDialogueTranslateRequest& setRecords(vector<ExecuteAITeacherSyncDialogueTranslateRequest::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ExecuteAITeacherSyncDialogueTranslateRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<ExecuteAITeacherSyncDialogueTranslateRequest::DialogueTasks>> dialogueTasks_ {};
    shared_ptr<vector<ExecuteAITeacherSyncDialogueTranslateRequest::Records>> records_ {};
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
