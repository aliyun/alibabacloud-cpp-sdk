// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAITEACHERSYNCDIALOGUESUGGESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAITEACHERSYNCDIALOGUESUGGESTIONREQUEST_HPP_
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
  class GetAITeacherSyncDialogueSuggestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAITeacherSyncDialogueSuggestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dialogueTasks, dialogueTasks_);
      DARABONBA_PTR_TO_JSON(languageCode, languageCode_);
      DARABONBA_PTR_TO_JSON(records, records_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAITeacherSyncDialogueSuggestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dialogueTasks, dialogueTasks_);
      DARABONBA_PTR_FROM_JSON(languageCode, languageCode_);
      DARABONBA_PTR_FROM_JSON(records, records_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    GetAITeacherSyncDialogueSuggestionRequest() = default ;
    GetAITeacherSyncDialogueSuggestionRequest(const GetAITeacherSyncDialogueSuggestionRequest &) = default ;
    GetAITeacherSyncDialogueSuggestionRequest(GetAITeacherSyncDialogueSuggestionRequest &&) = default ;
    GetAITeacherSyncDialogueSuggestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAITeacherSyncDialogueSuggestionRequest() = default ;
    GetAITeacherSyncDialogueSuggestionRequest& operator=(const GetAITeacherSyncDialogueSuggestionRequest &) = default ;
    GetAITeacherSyncDialogueSuggestionRequest& operator=(GetAITeacherSyncDialogueSuggestionRequest &&) = default ;
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
        && this->languageCode_ == nullptr && this->records_ == nullptr && this->userId_ == nullptr; };
    // dialogueTasks Field Functions 
    bool hasDialogueTasks() const { return this->dialogueTasks_ != nullptr;};
    void deleteDialogueTasks() { this->dialogueTasks_ = nullptr;};
    inline const vector<GetAITeacherSyncDialogueSuggestionRequest::DialogueTasks> & getDialogueTasks() const { DARABONBA_PTR_GET_CONST(dialogueTasks_, vector<GetAITeacherSyncDialogueSuggestionRequest::DialogueTasks>) };
    inline vector<GetAITeacherSyncDialogueSuggestionRequest::DialogueTasks> getDialogueTasks() { DARABONBA_PTR_GET(dialogueTasks_, vector<GetAITeacherSyncDialogueSuggestionRequest::DialogueTasks>) };
    inline GetAITeacherSyncDialogueSuggestionRequest& setDialogueTasks(const vector<GetAITeacherSyncDialogueSuggestionRequest::DialogueTasks> & dialogueTasks) { DARABONBA_PTR_SET_VALUE(dialogueTasks_, dialogueTasks) };
    inline GetAITeacherSyncDialogueSuggestionRequest& setDialogueTasks(vector<GetAITeacherSyncDialogueSuggestionRequest::DialogueTasks> && dialogueTasks) { DARABONBA_PTR_SET_RVALUE(dialogueTasks_, dialogueTasks) };


    // languageCode Field Functions 
    bool hasLanguageCode() const { return this->languageCode_ != nullptr;};
    void deleteLanguageCode() { this->languageCode_ = nullptr;};
    inline string getLanguageCode() const { DARABONBA_PTR_GET_DEFAULT(languageCode_, "") };
    inline GetAITeacherSyncDialogueSuggestionRequest& setLanguageCode(string languageCode) { DARABONBA_PTR_SET_VALUE(languageCode_, languageCode) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<GetAITeacherSyncDialogueSuggestionRequest::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<GetAITeacherSyncDialogueSuggestionRequest::Records>) };
    inline vector<GetAITeacherSyncDialogueSuggestionRequest::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<GetAITeacherSyncDialogueSuggestionRequest::Records>) };
    inline GetAITeacherSyncDialogueSuggestionRequest& setRecords(const vector<GetAITeacherSyncDialogueSuggestionRequest::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline GetAITeacherSyncDialogueSuggestionRequest& setRecords(vector<GetAITeacherSyncDialogueSuggestionRequest::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetAITeacherSyncDialogueSuggestionRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<GetAITeacherSyncDialogueSuggestionRequest::DialogueTasks>> dialogueTasks_ {};
    shared_ptr<string> languageCode_ {};
    // This parameter is required.
    shared_ptr<vector<GetAITeacherSyncDialogueSuggestionRequest::Records>> records_ {};
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
