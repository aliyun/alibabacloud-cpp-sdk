// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTODODETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTODODETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetTodoDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTodoDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(assigneeCount, assigneeCount_);
      DARABONBA_PTR_TO_JSON(assignees, assignees_);
      DARABONBA_ANY_TO_JSON(attachmentPolicy, attachmentPolicy_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(completedAt, completedAt_);
      DARABONBA_PTR_TO_JSON(completedByUserId, completedByUserId_);
      DARABONBA_PTR_TO_JSON(completedByUserName, completedByUserName_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(isRead, isRead_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(messageId, messageId_);
      DARABONBA_PTR_TO_JSON(myAssigneeStatus, myAssigneeStatus_);
      DARABONBA_PTR_TO_JSON(myDisplayState, myDisplayState_);
      DARABONBA_ANY_TO_JSON(myPermissions, myPermissions_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(questions, questions_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_ANY_TO_JSON(resultPayload, resultPayload_);
      DARABONBA_ANY_TO_JSON(sourceContext, sourceContext_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(sourceWorkflowId, sourceWorkflowId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(todoId, todoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTodoDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(assigneeCount, assigneeCount_);
      DARABONBA_PTR_FROM_JSON(assignees, assignees_);
      DARABONBA_ANY_FROM_JSON(attachmentPolicy, attachmentPolicy_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(completedAt, completedAt_);
      DARABONBA_PTR_FROM_JSON(completedByUserId, completedByUserId_);
      DARABONBA_PTR_FROM_JSON(completedByUserName, completedByUserName_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(isRead, isRead_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(messageId, messageId_);
      DARABONBA_PTR_FROM_JSON(myAssigneeStatus, myAssigneeStatus_);
      DARABONBA_PTR_FROM_JSON(myDisplayState, myDisplayState_);
      DARABONBA_ANY_FROM_JSON(myPermissions, myPermissions_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(questions, questions_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_ANY_FROM_JSON(resultPayload, resultPayload_);
      DARABONBA_ANY_FROM_JSON(sourceContext, sourceContext_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(sourceWorkflowId, sourceWorkflowId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(todoId, todoId_);
    };
    GetTodoDetailResponseBody() = default ;
    GetTodoDetailResponseBody(const GetTodoDetailResponseBody &) = default ;
    GetTodoDetailResponseBody(GetTodoDetailResponseBody &&) = default ;
    GetTodoDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTodoDetailResponseBody() = default ;
    GetTodoDetailResponseBody& operator=(const GetTodoDetailResponseBody &) = default ;
    GetTodoDetailResponseBody& operator=(GetTodoDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Questions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Questions& obj) { 
        DARABONBA_PTR_TO_JSON(allowCustom, allowCustom_);
        DARABONBA_PTR_TO_JSON(customLabel, customLabel_);
        DARABONBA_PTR_TO_JSON(customMaxLength, customMaxLength_);
        DARABONBA_PTR_TO_JSON(customPlaceholder, customPlaceholder_);
        DARABONBA_PTR_TO_JSON(maxLength, maxLength_);
        DARABONBA_PTR_TO_JSON(mode, mode_);
        DARABONBA_PTR_TO_JSON(options, options_);
        DARABONBA_PTR_TO_JSON(placeholder, placeholder_);
        DARABONBA_PTR_TO_JSON(question, question_);
        DARABONBA_PTR_TO_JSON(required, required_);
      };
      friend void from_json(const Darabonba::Json& j, Questions& obj) { 
        DARABONBA_PTR_FROM_JSON(allowCustom, allowCustom_);
        DARABONBA_PTR_FROM_JSON(customLabel, customLabel_);
        DARABONBA_PTR_FROM_JSON(customMaxLength, customMaxLength_);
        DARABONBA_PTR_FROM_JSON(customPlaceholder, customPlaceholder_);
        DARABONBA_PTR_FROM_JSON(maxLength, maxLength_);
        DARABONBA_PTR_FROM_JSON(mode, mode_);
        DARABONBA_PTR_FROM_JSON(options, options_);
        DARABONBA_PTR_FROM_JSON(placeholder, placeholder_);
        DARABONBA_PTR_FROM_JSON(question, question_);
        DARABONBA_PTR_FROM_JSON(required, required_);
      };
      Questions() = default ;
      Questions(const Questions &) = default ;
      Questions(Questions &&) = default ;
      Questions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Questions() = default ;
      Questions& operator=(const Questions &) = default ;
      Questions& operator=(Questions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Options : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Options& obj) { 
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(label, label_);
          DARABONBA_PTR_TO_JSON(recommended, recommended_);
        };
        friend void from_json(const Darabonba::Json& j, Options& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(label, label_);
          DARABONBA_PTR_FROM_JSON(recommended, recommended_);
        };
        Options() = default ;
        Options(const Options &) = default ;
        Options(Options &&) = default ;
        Options(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Options() = default ;
        Options& operator=(const Options &) = default ;
        Options& operator=(Options &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->label_ == nullptr && this->recommended_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Options& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Options& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // recommended Field Functions 
        bool hasRecommended() const { return this->recommended_ != nullptr;};
        void deleteRecommended() { this->recommended_ = nullptr;};
        inline bool getRecommended() const { DARABONBA_PTR_GET_DEFAULT(recommended_, false) };
        inline Options& setRecommended(bool recommended) { DARABONBA_PTR_SET_VALUE(recommended_, recommended) };


      protected:
        // 选项补充说明
        shared_ptr<string> description_ {};
        // 选项文案（引用键）
        shared_ptr<string> label_ {};
        // 是否推荐
        shared_ptr<bool> recommended_ {};
      };

      virtual bool empty() const override { return this->allowCustom_ == nullptr
        && this->customLabel_ == nullptr && this->customMaxLength_ == nullptr && this->customPlaceholder_ == nullptr && this->maxLength_ == nullptr && this->mode_ == nullptr
        && this->options_ == nullptr && this->placeholder_ == nullptr && this->question_ == nullptr && this->required_ == nullptr; };
      // allowCustom Field Functions 
      bool hasAllowCustom() const { return this->allowCustom_ != nullptr;};
      void deleteAllowCustom() { this->allowCustom_ = nullptr;};
      inline bool getAllowCustom() const { DARABONBA_PTR_GET_DEFAULT(allowCustom_, false) };
      inline Questions& setAllowCustom(bool allowCustom) { DARABONBA_PTR_SET_VALUE(allowCustom_, allowCustom) };


      // customLabel Field Functions 
      bool hasCustomLabel() const { return this->customLabel_ != nullptr;};
      void deleteCustomLabel() { this->customLabel_ = nullptr;};
      inline string getCustomLabel() const { DARABONBA_PTR_GET_DEFAULT(customLabel_, "") };
      inline Questions& setCustomLabel(string customLabel) { DARABONBA_PTR_SET_VALUE(customLabel_, customLabel) };


      // customMaxLength Field Functions 
      bool hasCustomMaxLength() const { return this->customMaxLength_ != nullptr;};
      void deleteCustomMaxLength() { this->customMaxLength_ = nullptr;};
      inline int64_t getCustomMaxLength() const { DARABONBA_PTR_GET_DEFAULT(customMaxLength_, 0L) };
      inline Questions& setCustomMaxLength(int64_t customMaxLength) { DARABONBA_PTR_SET_VALUE(customMaxLength_, customMaxLength) };


      // customPlaceholder Field Functions 
      bool hasCustomPlaceholder() const { return this->customPlaceholder_ != nullptr;};
      void deleteCustomPlaceholder() { this->customPlaceholder_ = nullptr;};
      inline string getCustomPlaceholder() const { DARABONBA_PTR_GET_DEFAULT(customPlaceholder_, "") };
      inline Questions& setCustomPlaceholder(string customPlaceholder) { DARABONBA_PTR_SET_VALUE(customPlaceholder_, customPlaceholder) };


      // maxLength Field Functions 
      bool hasMaxLength() const { return this->maxLength_ != nullptr;};
      void deleteMaxLength() { this->maxLength_ = nullptr;};
      inline int64_t getMaxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0L) };
      inline Questions& setMaxLength(int64_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Questions& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // options Field Functions 
      bool hasOptions() const { return this->options_ != nullptr;};
      void deleteOptions() { this->options_ = nullptr;};
      inline const vector<Questions::Options> & getOptions() const { DARABONBA_PTR_GET_CONST(options_, vector<Questions::Options>) };
      inline vector<Questions::Options> getOptions() { DARABONBA_PTR_GET(options_, vector<Questions::Options>) };
      inline Questions& setOptions(const vector<Questions::Options> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
      inline Questions& setOptions(vector<Questions::Options> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


      // placeholder Field Functions 
      bool hasPlaceholder() const { return this->placeholder_ != nullptr;};
      void deletePlaceholder() { this->placeholder_ = nullptr;};
      inline string getPlaceholder() const { DARABONBA_PTR_GET_DEFAULT(placeholder_, "") };
      inline Questions& setPlaceholder(string placeholder) { DARABONBA_PTR_SET_VALUE(placeholder_, placeholder) };


      // question Field Functions 
      bool hasQuestion() const { return this->question_ != nullptr;};
      void deleteQuestion() { this->question_ = nullptr;};
      inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
      inline Questions& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


      // required Field Functions 
      bool hasRequired() const { return this->required_ != nullptr;};
      void deleteRequired() { this->required_ = nullptr;};
      inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
      inline Questions& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    protected:
      // 是否允许自定义输入
      shared_ptr<bool> allowCustom_ {};
      // 自定义输入项文案
      shared_ptr<string> customLabel_ {};
      // 自定义输入长度上限
      shared_ptr<int64_t> customMaxLength_ {};
      // 自定义输入占位符
      shared_ptr<string> customPlaceholder_ {};
      // TEXT 题长度上限
      shared_ptr<int64_t> maxLength_ {};
      // 作答形态：SINGLE_CHOICE/MULTI_CHOICE/TEXT
      shared_ptr<string> mode_ {};
      // 选项（选择类必有）
      shared_ptr<vector<Questions::Options>> options_ {};
      // TEXT 题占位符
      shared_ptr<string> placeholder_ {};
      // 问题正文（引用键）
      shared_ptr<string> question_ {};
      // 是否必答
      shared_ptr<bool> required_ {};
    };

    class Assignees : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Assignees& obj) { 
        DARABONBA_PTR_TO_JSON(actedAt, actedAt_);
        DARABONBA_PTR_TO_JSON(assigneeSource, assigneeSource_);
        DARABONBA_PTR_TO_JSON(assigneeUserId, assigneeUserId_);
        DARABONBA_PTR_TO_JSON(readAt, readAt_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(transferredFromUserId, transferredFromUserId_);
      };
      friend void from_json(const Darabonba::Json& j, Assignees& obj) { 
        DARABONBA_PTR_FROM_JSON(actedAt, actedAt_);
        DARABONBA_PTR_FROM_JSON(assigneeSource, assigneeSource_);
        DARABONBA_PTR_FROM_JSON(assigneeUserId, assigneeUserId_);
        DARABONBA_PTR_FROM_JSON(readAt, readAt_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(transferredFromUserId, transferredFromUserId_);
      };
      Assignees() = default ;
      Assignees(const Assignees &) = default ;
      Assignees(Assignees &&) = default ;
      Assignees(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Assignees() = default ;
      Assignees& operator=(const Assignees &) = default ;
      Assignees& operator=(Assignees &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actedAt_ == nullptr
        && this->assigneeSource_ == nullptr && this->assigneeUserId_ == nullptr && this->readAt_ == nullptr && this->status_ == nullptr && this->transferredFromUserId_ == nullptr; };
      // actedAt Field Functions 
      bool hasActedAt() const { return this->actedAt_ != nullptr;};
      void deleteActedAt() { this->actedAt_ = nullptr;};
      inline string getActedAt() const { DARABONBA_PTR_GET_DEFAULT(actedAt_, "") };
      inline Assignees& setActedAt(string actedAt) { DARABONBA_PTR_SET_VALUE(actedAt_, actedAt) };


      // assigneeSource Field Functions 
      bool hasAssigneeSource() const { return this->assigneeSource_ != nullptr;};
      void deleteAssigneeSource() { this->assigneeSource_ = nullptr;};
      inline string getAssigneeSource() const { DARABONBA_PTR_GET_DEFAULT(assigneeSource_, "") };
      inline Assignees& setAssigneeSource(string assigneeSource) { DARABONBA_PTR_SET_VALUE(assigneeSource_, assigneeSource) };


      // assigneeUserId Field Functions 
      bool hasAssigneeUserId() const { return this->assigneeUserId_ != nullptr;};
      void deleteAssigneeUserId() { this->assigneeUserId_ = nullptr;};
      inline string getAssigneeUserId() const { DARABONBA_PTR_GET_DEFAULT(assigneeUserId_, "") };
      inline Assignees& setAssigneeUserId(string assigneeUserId) { DARABONBA_PTR_SET_VALUE(assigneeUserId_, assigneeUserId) };


      // readAt Field Functions 
      bool hasReadAt() const { return this->readAt_ != nullptr;};
      void deleteReadAt() { this->readAt_ = nullptr;};
      inline string getReadAt() const { DARABONBA_PTR_GET_DEFAULT(readAt_, "") };
      inline Assignees& setReadAt(string readAt) { DARABONBA_PTR_SET_VALUE(readAt_, readAt) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Assignees& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // transferredFromUserId Field Functions 
      bool hasTransferredFromUserId() const { return this->transferredFromUserId_ != nullptr;};
      void deleteTransferredFromUserId() { this->transferredFromUserId_ = nullptr;};
      inline string getTransferredFromUserId() const { DARABONBA_PTR_GET_DEFAULT(transferredFromUserId_, "") };
      inline Assignees& setTransferredFromUserId(string transferredFromUserId) { DARABONBA_PTR_SET_VALUE(transferredFromUserId_, transferredFromUserId) };


    protected:
      // 处理时间（北京时间）；未处理为空
      shared_ptr<string> actedAt_ {};
      // 处理人来源：ORIGINAL/TRANSFERRED
      shared_ptr<string> assigneeSource_ {};
      // 处理人用户ID
      shared_ptr<string> assigneeUserId_ {};
      // 已读时间（北京时间）；未读为空
      shared_ptr<string> readAt_ {};
      // 处理人行状态
      shared_ptr<string> status_ {};
      // 转出人用户ID；仅转办产生
      shared_ptr<string> transferredFromUserId_ {};
    };

    virtual bool empty() const override { return this->assigneeCount_ == nullptr
        && this->assignees_ == nullptr && this->attachmentPolicy_ == nullptr && this->code_ == nullptr && this->completedAt_ == nullptr && this->completedByUserId_ == nullptr
        && this->completedByUserName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->isRead_ == nullptr && this->message_ == nullptr
        && this->messageId_ == nullptr && this->myAssigneeStatus_ == nullptr && this->myDisplayState_ == nullptr && this->myPermissions_ == nullptr && this->priority_ == nullptr
        && this->questions_ == nullptr && this->requestId_ == nullptr && this->resultPayload_ == nullptr && this->sourceContext_ == nullptr && this->sourceType_ == nullptr
        && this->sourceWorkflowId_ == nullptr && this->status_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->todoId_ == nullptr; };
    // assigneeCount Field Functions 
    bool hasAssigneeCount() const { return this->assigneeCount_ != nullptr;};
    void deleteAssigneeCount() { this->assigneeCount_ = nullptr;};
    inline int64_t getAssigneeCount() const { DARABONBA_PTR_GET_DEFAULT(assigneeCount_, 0L) };
    inline GetTodoDetailResponseBody& setAssigneeCount(int64_t assigneeCount) { DARABONBA_PTR_SET_VALUE(assigneeCount_, assigneeCount) };


    // assignees Field Functions 
    bool hasAssignees() const { return this->assignees_ != nullptr;};
    void deleteAssignees() { this->assignees_ = nullptr;};
    inline const vector<GetTodoDetailResponseBody::Assignees> & getAssignees() const { DARABONBA_PTR_GET_CONST(assignees_, vector<GetTodoDetailResponseBody::Assignees>) };
    inline vector<GetTodoDetailResponseBody::Assignees> getAssignees() { DARABONBA_PTR_GET(assignees_, vector<GetTodoDetailResponseBody::Assignees>) };
    inline GetTodoDetailResponseBody& setAssignees(const vector<GetTodoDetailResponseBody::Assignees> & assignees) { DARABONBA_PTR_SET_VALUE(assignees_, assignees) };
    inline GetTodoDetailResponseBody& setAssignees(vector<GetTodoDetailResponseBody::Assignees> && assignees) { DARABONBA_PTR_SET_RVALUE(assignees_, assignees) };


    // attachmentPolicy Field Functions 
    bool hasAttachmentPolicy() const { return this->attachmentPolicy_ != nullptr;};
    void deleteAttachmentPolicy() { this->attachmentPolicy_ = nullptr;};
    inline     const Darabonba::Json & getAttachmentPolicy() const { DARABONBA_GET(attachmentPolicy_) };
    Darabonba::Json & getAttachmentPolicy() { DARABONBA_GET(attachmentPolicy_) };
    inline GetTodoDetailResponseBody& setAttachmentPolicy(const Darabonba::Json & attachmentPolicy) { DARABONBA_SET_VALUE(attachmentPolicy_, attachmentPolicy) };
    inline GetTodoDetailResponseBody& setAttachmentPolicy(Darabonba::Json && attachmentPolicy) { DARABONBA_SET_RVALUE(attachmentPolicy_, attachmentPolicy) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTodoDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // completedAt Field Functions 
    bool hasCompletedAt() const { return this->completedAt_ != nullptr;};
    void deleteCompletedAt() { this->completedAt_ = nullptr;};
    inline string getCompletedAt() const { DARABONBA_PTR_GET_DEFAULT(completedAt_, "") };
    inline GetTodoDetailResponseBody& setCompletedAt(string completedAt) { DARABONBA_PTR_SET_VALUE(completedAt_, completedAt) };


    // completedByUserId Field Functions 
    bool hasCompletedByUserId() const { return this->completedByUserId_ != nullptr;};
    void deleteCompletedByUserId() { this->completedByUserId_ = nullptr;};
    inline string getCompletedByUserId() const { DARABONBA_PTR_GET_DEFAULT(completedByUserId_, "") };
    inline GetTodoDetailResponseBody& setCompletedByUserId(string completedByUserId) { DARABONBA_PTR_SET_VALUE(completedByUserId_, completedByUserId) };


    // completedByUserName Field Functions 
    bool hasCompletedByUserName() const { return this->completedByUserName_ != nullptr;};
    void deleteCompletedByUserName() { this->completedByUserName_ = nullptr;};
    inline string getCompletedByUserName() const { DARABONBA_PTR_GET_DEFAULT(completedByUserName_, "") };
    inline GetTodoDetailResponseBody& setCompletedByUserName(string completedByUserName) { DARABONBA_PTR_SET_VALUE(completedByUserName_, completedByUserName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetTodoDetailResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetTodoDetailResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // isRead Field Functions 
    bool hasIsRead() const { return this->isRead_ != nullptr;};
    void deleteIsRead() { this->isRead_ = nullptr;};
    inline bool getIsRead() const { DARABONBA_PTR_GET_DEFAULT(isRead_, false) };
    inline GetTodoDetailResponseBody& setIsRead(bool isRead) { DARABONBA_PTR_SET_VALUE(isRead_, isRead) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTodoDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline GetTodoDetailResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // myAssigneeStatus Field Functions 
    bool hasMyAssigneeStatus() const { return this->myAssigneeStatus_ != nullptr;};
    void deleteMyAssigneeStatus() { this->myAssigneeStatus_ = nullptr;};
    inline string getMyAssigneeStatus() const { DARABONBA_PTR_GET_DEFAULT(myAssigneeStatus_, "") };
    inline GetTodoDetailResponseBody& setMyAssigneeStatus(string myAssigneeStatus) { DARABONBA_PTR_SET_VALUE(myAssigneeStatus_, myAssigneeStatus) };


    // myDisplayState Field Functions 
    bool hasMyDisplayState() const { return this->myDisplayState_ != nullptr;};
    void deleteMyDisplayState() { this->myDisplayState_ = nullptr;};
    inline string getMyDisplayState() const { DARABONBA_PTR_GET_DEFAULT(myDisplayState_, "") };
    inline GetTodoDetailResponseBody& setMyDisplayState(string myDisplayState) { DARABONBA_PTR_SET_VALUE(myDisplayState_, myDisplayState) };


    // myPermissions Field Functions 
    bool hasMyPermissions() const { return this->myPermissions_ != nullptr;};
    void deleteMyPermissions() { this->myPermissions_ = nullptr;};
    inline     const Darabonba::Json & getMyPermissions() const { DARABONBA_GET(myPermissions_) };
    Darabonba::Json & getMyPermissions() { DARABONBA_GET(myPermissions_) };
    inline GetTodoDetailResponseBody& setMyPermissions(const Darabonba::Json & myPermissions) { DARABONBA_SET_VALUE(myPermissions_, myPermissions) };
    inline GetTodoDetailResponseBody& setMyPermissions(Darabonba::Json && myPermissions) { DARABONBA_SET_RVALUE(myPermissions_, myPermissions) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline GetTodoDetailResponseBody& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // questions Field Functions 
    bool hasQuestions() const { return this->questions_ != nullptr;};
    void deleteQuestions() { this->questions_ = nullptr;};
    inline const vector<GetTodoDetailResponseBody::Questions> & getQuestions() const { DARABONBA_PTR_GET_CONST(questions_, vector<GetTodoDetailResponseBody::Questions>) };
    inline vector<GetTodoDetailResponseBody::Questions> getQuestions() { DARABONBA_PTR_GET(questions_, vector<GetTodoDetailResponseBody::Questions>) };
    inline GetTodoDetailResponseBody& setQuestions(const vector<GetTodoDetailResponseBody::Questions> & questions) { DARABONBA_PTR_SET_VALUE(questions_, questions) };
    inline GetTodoDetailResponseBody& setQuestions(vector<GetTodoDetailResponseBody::Questions> && questions) { DARABONBA_PTR_SET_RVALUE(questions_, questions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTodoDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultPayload Field Functions 
    bool hasResultPayload() const { return this->resultPayload_ != nullptr;};
    void deleteResultPayload() { this->resultPayload_ = nullptr;};
    inline     const Darabonba::Json & getResultPayload() const { DARABONBA_GET(resultPayload_) };
    Darabonba::Json & getResultPayload() { DARABONBA_GET(resultPayload_) };
    inline GetTodoDetailResponseBody& setResultPayload(const Darabonba::Json & resultPayload) { DARABONBA_SET_VALUE(resultPayload_, resultPayload) };
    inline GetTodoDetailResponseBody& setResultPayload(Darabonba::Json && resultPayload) { DARABONBA_SET_RVALUE(resultPayload_, resultPayload) };


    // sourceContext Field Functions 
    bool hasSourceContext() const { return this->sourceContext_ != nullptr;};
    void deleteSourceContext() { this->sourceContext_ = nullptr;};
    inline     const Darabonba::Json & getSourceContext() const { DARABONBA_GET(sourceContext_) };
    Darabonba::Json & getSourceContext() { DARABONBA_GET(sourceContext_) };
    inline GetTodoDetailResponseBody& setSourceContext(const Darabonba::Json & sourceContext) { DARABONBA_SET_VALUE(sourceContext_, sourceContext) };
    inline GetTodoDetailResponseBody& setSourceContext(Darabonba::Json && sourceContext) { DARABONBA_SET_RVALUE(sourceContext_, sourceContext) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetTodoDetailResponseBody& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // sourceWorkflowId Field Functions 
    bool hasSourceWorkflowId() const { return this->sourceWorkflowId_ != nullptr;};
    void deleteSourceWorkflowId() { this->sourceWorkflowId_ = nullptr;};
    inline string getSourceWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(sourceWorkflowId_, "") };
    inline GetTodoDetailResponseBody& setSourceWorkflowId(string sourceWorkflowId) { DARABONBA_PTR_SET_VALUE(sourceWorkflowId_, sourceWorkflowId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTodoDetailResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline GetTodoDetailResponseBody& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetTodoDetailResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // todoId Field Functions 
    bool hasTodoId() const { return this->todoId_ != nullptr;};
    void deleteTodoId() { this->todoId_ = nullptr;};
    inline string getTodoId() const { DARABONBA_PTR_GET_DEFAULT(todoId_, "") };
    inline GetTodoDetailResponseBody& setTodoId(string todoId) { DARABONBA_PTR_SET_VALUE(todoId_, todoId) };


  protected:
    // 处理人数量
    shared_ptr<int64_t> assigneeCount_ {};
    // 全部处理人
    shared_ptr<vector<GetTodoDetailResponseBody::Assignees>> assignees_ {};
    // 附件策略（当前版本附件不落库）
    Darabonba::Json attachmentPolicy_ {};
    // 业务状态码；成功为200
    shared_ptr<string> code_ {};
    // 完成时间（北京时间 YYYY-MM-DD HH:mm:ss）
    shared_ptr<string> completedAt_ {};
    // 完成人用户ID；未完成为空
    shared_ptr<string> completedByUserId_ {};
    // 完成人姓名；未完成为空
    shared_ptr<string> completedByUserName_ {};
    // 创建时间（北京时间 YYYY-MM-DD HH:mm:ss）
    shared_ptr<string> gmtCreate_ {};
    // 最后修改时间（北京时间 YYYY-MM-DD HH:mm:ss）
    shared_ptr<string> gmtModified_ {};
    // 调用者是否已读
    shared_ptr<bool> isRead_ {};
    // 错误描述
    shared_ptr<string> message_ {};
    // 发出该待办的 assistant 消息ID；无会话来源为空
    shared_ptr<string> messageId_ {};
    // 调用者的处理人行状态
    shared_ptr<string> myAssigneeStatus_ {};
    // 调用者的列表展示状态
    shared_ptr<string> myDisplayState_ {};
    // 调用者权限（canSubmit/canTransfer）
    Darabonba::Json myPermissions_ {};
    // 优先级
    shared_ptr<string> priority_ {};
    // 问题清单（结构化投影）
    shared_ptr<vector<GetTodoDetailResponseBody::Questions>> questions_ {};
    // 请求追踪ID
    shared_ptr<string> requestId_ {};
    // 作答内容（JSONB 原样；未提交为空对象缺省）
    Darabonba::Json resultPayload_ {};
    // 来源上下文（创建时原样透传）
    Darabonba::Json sourceContext_ {};
    // 待办来源类型
    shared_ptr<string> sourceType_ {};
    // 工作流ID（sourceType=WORKFLOW 时必有）
    shared_ptr<string> sourceWorkflowId_ {};
    // 待办主状态
    shared_ptr<string> status_ {};
    // 待办摘要
    shared_ptr<string> summary_ {};
    // 待办标题
    shared_ptr<string> title_ {};
    // 待办ID
    shared_ptr<string> todoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
