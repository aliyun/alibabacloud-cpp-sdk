// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAITEACHEREXPANSIONDIALOGUESUGGESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAITEACHEREXPANSIONDIALOGUESUGGESTIONREQUEST_HPP_
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
  class GetAITeacherExpansionDialogueSuggestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAITeacherExpansionDialogueSuggestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(background, background_);
      DARABONBA_PTR_TO_JSON(dialogueTasks, dialogueTasks_);
      DARABONBA_PTR_TO_JSON(languageCode, languageCode_);
      DARABONBA_PTR_TO_JSON(records, records_);
      DARABONBA_PTR_TO_JSON(roleInfo, roleInfo_);
      DARABONBA_PTR_TO_JSON(startSentence, startSentence_);
      DARABONBA_PTR_TO_JSON(topic, topic_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAITeacherExpansionDialogueSuggestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(background, background_);
      DARABONBA_PTR_FROM_JSON(dialogueTasks, dialogueTasks_);
      DARABONBA_PTR_FROM_JSON(languageCode, languageCode_);
      DARABONBA_PTR_FROM_JSON(records, records_);
      DARABONBA_PTR_FROM_JSON(roleInfo, roleInfo_);
      DARABONBA_PTR_FROM_JSON(startSentence, startSentence_);
      DARABONBA_PTR_FROM_JSON(topic, topic_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    GetAITeacherExpansionDialogueSuggestionRequest() = default ;
    GetAITeacherExpansionDialogueSuggestionRequest(const GetAITeacherExpansionDialogueSuggestionRequest &) = default ;
    GetAITeacherExpansionDialogueSuggestionRequest(GetAITeacherExpansionDialogueSuggestionRequest &&) = default ;
    GetAITeacherExpansionDialogueSuggestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAITeacherExpansionDialogueSuggestionRequest() = default ;
    GetAITeacherExpansionDialogueSuggestionRequest& operator=(const GetAITeacherExpansionDialogueSuggestionRequest &) = default ;
    GetAITeacherExpansionDialogueSuggestionRequest& operator=(GetAITeacherExpansionDialogueSuggestionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RoleInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RoleInfo& obj) { 
        DARABONBA_PTR_TO_JSON(assistant, assistant_);
        DARABONBA_PTR_TO_JSON(user, user_);
      };
      friend void from_json(const Darabonba::Json& j, RoleInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(assistant, assistant_);
        DARABONBA_PTR_FROM_JSON(user, user_);
      };
      RoleInfo() = default ;
      RoleInfo(const RoleInfo &) = default ;
      RoleInfo(RoleInfo &&) = default ;
      RoleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RoleInfo() = default ;
      RoleInfo& operator=(const RoleInfo &) = default ;
      RoleInfo& operator=(RoleInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assistant_ == nullptr
        && this->user_ == nullptr; };
      // assistant Field Functions 
      bool hasAssistant() const { return this->assistant_ != nullptr;};
      void deleteAssistant() { this->assistant_ = nullptr;};
      inline string getAssistant() const { DARABONBA_PTR_GET_DEFAULT(assistant_, "") };
      inline RoleInfo& setAssistant(string assistant) { DARABONBA_PTR_SET_VALUE(assistant_, assistant) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline RoleInfo& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // This parameter is required.
      shared_ptr<string> assistant_ {};
      // This parameter is required.
      shared_ptr<string> user_ {};
    };

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

    virtual bool empty() const override { return this->background_ == nullptr
        && this->dialogueTasks_ == nullptr && this->languageCode_ == nullptr && this->records_ == nullptr && this->roleInfo_ == nullptr && this->startSentence_ == nullptr
        && this->topic_ == nullptr && this->userId_ == nullptr; };
    // background Field Functions 
    bool hasBackground() const { return this->background_ != nullptr;};
    void deleteBackground() { this->background_ = nullptr;};
    inline string getBackground() const { DARABONBA_PTR_GET_DEFAULT(background_, "") };
    inline GetAITeacherExpansionDialogueSuggestionRequest& setBackground(string background) { DARABONBA_PTR_SET_VALUE(background_, background) };


    // dialogueTasks Field Functions 
    bool hasDialogueTasks() const { return this->dialogueTasks_ != nullptr;};
    void deleteDialogueTasks() { this->dialogueTasks_ = nullptr;};
    inline const vector<GetAITeacherExpansionDialogueSuggestionRequest::DialogueTasks> & getDialogueTasks() const { DARABONBA_PTR_GET_CONST(dialogueTasks_, vector<GetAITeacherExpansionDialogueSuggestionRequest::DialogueTasks>) };
    inline vector<GetAITeacherExpansionDialogueSuggestionRequest::DialogueTasks> getDialogueTasks() { DARABONBA_PTR_GET(dialogueTasks_, vector<GetAITeacherExpansionDialogueSuggestionRequest::DialogueTasks>) };
    inline GetAITeacherExpansionDialogueSuggestionRequest& setDialogueTasks(const vector<GetAITeacherExpansionDialogueSuggestionRequest::DialogueTasks> & dialogueTasks) { DARABONBA_PTR_SET_VALUE(dialogueTasks_, dialogueTasks) };
    inline GetAITeacherExpansionDialogueSuggestionRequest& setDialogueTasks(vector<GetAITeacherExpansionDialogueSuggestionRequest::DialogueTasks> && dialogueTasks) { DARABONBA_PTR_SET_RVALUE(dialogueTasks_, dialogueTasks) };


    // languageCode Field Functions 
    bool hasLanguageCode() const { return this->languageCode_ != nullptr;};
    void deleteLanguageCode() { this->languageCode_ = nullptr;};
    inline string getLanguageCode() const { DARABONBA_PTR_GET_DEFAULT(languageCode_, "") };
    inline GetAITeacherExpansionDialogueSuggestionRequest& setLanguageCode(string languageCode) { DARABONBA_PTR_SET_VALUE(languageCode_, languageCode) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<GetAITeacherExpansionDialogueSuggestionRequest::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<GetAITeacherExpansionDialogueSuggestionRequest::Records>) };
    inline vector<GetAITeacherExpansionDialogueSuggestionRequest::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<GetAITeacherExpansionDialogueSuggestionRequest::Records>) };
    inline GetAITeacherExpansionDialogueSuggestionRequest& setRecords(const vector<GetAITeacherExpansionDialogueSuggestionRequest::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline GetAITeacherExpansionDialogueSuggestionRequest& setRecords(vector<GetAITeacherExpansionDialogueSuggestionRequest::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // roleInfo Field Functions 
    bool hasRoleInfo() const { return this->roleInfo_ != nullptr;};
    void deleteRoleInfo() { this->roleInfo_ = nullptr;};
    inline const GetAITeacherExpansionDialogueSuggestionRequest::RoleInfo & getRoleInfo() const { DARABONBA_PTR_GET_CONST(roleInfo_, GetAITeacherExpansionDialogueSuggestionRequest::RoleInfo) };
    inline GetAITeacherExpansionDialogueSuggestionRequest::RoleInfo getRoleInfo() { DARABONBA_PTR_GET(roleInfo_, GetAITeacherExpansionDialogueSuggestionRequest::RoleInfo) };
    inline GetAITeacherExpansionDialogueSuggestionRequest& setRoleInfo(const GetAITeacherExpansionDialogueSuggestionRequest::RoleInfo & roleInfo) { DARABONBA_PTR_SET_VALUE(roleInfo_, roleInfo) };
    inline GetAITeacherExpansionDialogueSuggestionRequest& setRoleInfo(GetAITeacherExpansionDialogueSuggestionRequest::RoleInfo && roleInfo) { DARABONBA_PTR_SET_RVALUE(roleInfo_, roleInfo) };


    // startSentence Field Functions 
    bool hasStartSentence() const { return this->startSentence_ != nullptr;};
    void deleteStartSentence() { this->startSentence_ = nullptr;};
    inline string getStartSentence() const { DARABONBA_PTR_GET_DEFAULT(startSentence_, "") };
    inline GetAITeacherExpansionDialogueSuggestionRequest& setStartSentence(string startSentence) { DARABONBA_PTR_SET_VALUE(startSentence_, startSentence) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline GetAITeacherExpansionDialogueSuggestionRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetAITeacherExpansionDialogueSuggestionRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    shared_ptr<string> background_ {};
    // This parameter is required.
    shared_ptr<vector<GetAITeacherExpansionDialogueSuggestionRequest::DialogueTasks>> dialogueTasks_ {};
    shared_ptr<string> languageCode_ {};
    // This parameter is required.
    shared_ptr<vector<GetAITeacherExpansionDialogueSuggestionRequest::Records>> records_ {};
    // This parameter is required.
    shared_ptr<GetAITeacherExpansionDialogueSuggestionRequest::RoleInfo> roleInfo_ {};
    shared_ptr<string> startSentence_ {};
    // This parameter is required.
    shared_ptr<string> topic_ {};
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
