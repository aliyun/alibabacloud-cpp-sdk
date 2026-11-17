// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDASYNCCHATMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDASYNCCHATMESSAGEREQUEST_HPP_
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
  class SendAsyncChatMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendAsyncChatMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(contextItems, contextItems_);
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_TO_JSON(directChat, directChat_);
      DARABONBA_ANY_TO_JSON(directMaxHistoryRounds, directMaxHistoryRounds_);
      DARABONBA_PTR_TO_JSON(enableWebSearch, enableWebSearch_);
      DARABONBA_PTR_TO_JSON(files, files_);
      DARABONBA_PTR_TO_JSON(locale, locale_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(reuseLastSession, reuseLastSession_);
      DARABONBA_PTR_TO_JSON(segments, segments_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(taskExecution, taskExecution_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(workMode, workMode_);
    };
    friend void from_json(const Darabonba::Json& j, SendAsyncChatMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(contextItems, contextItems_);
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_FROM_JSON(directChat, directChat_);
      DARABONBA_ANY_FROM_JSON(directMaxHistoryRounds, directMaxHistoryRounds_);
      DARABONBA_PTR_FROM_JSON(enableWebSearch, enableWebSearch_);
      DARABONBA_PTR_FROM_JSON(files, files_);
      DARABONBA_PTR_FROM_JSON(locale, locale_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(reuseLastSession, reuseLastSession_);
      DARABONBA_PTR_FROM_JSON(segments, segments_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(taskExecution, taskExecution_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(workMode, workMode_);
    };
    SendAsyncChatMessageRequest() = default ;
    SendAsyncChatMessageRequest(const SendAsyncChatMessageRequest &) = default ;
    SendAsyncChatMessageRequest(SendAsyncChatMessageRequest &&) = default ;
    SendAsyncChatMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendAsyncChatMessageRequest() = default ;
    SendAsyncChatMessageRequest& operator=(const SendAsyncChatMessageRequest &) = default ;
    SendAsyncChatMessageRequest& operator=(SendAsyncChatMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskExecution : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskExecution& obj) { 
        DARABONBA_PTR_TO_JSON(billingId, billingId_);
        DARABONBA_PTR_TO_JSON(enableWebSearch, enableWebSearch_);
        DARABONBA_PTR_TO_JSON(executionId, executionId_);
        DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
        DARABONBA_PTR_TO_JSON(skillCodes, skillCodes_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(taskName, taskName_);
        DARABONBA_PTR_TO_JSON(taskUnderstand, taskUnderstand_);
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, TaskExecution& obj) { 
        DARABONBA_PTR_FROM_JSON(billingId, billingId_);
        DARABONBA_PTR_FROM_JSON(enableWebSearch, enableWebSearch_);
        DARABONBA_PTR_FROM_JSON(executionId, executionId_);
        DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
        DARABONBA_PTR_FROM_JSON(skillCodes, skillCodes_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(taskName, taskName_);
        DARABONBA_PTR_FROM_JSON(taskUnderstand, taskUnderstand_);
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
      };
      TaskExecution() = default ;
      TaskExecution(const TaskExecution &) = default ;
      TaskExecution(TaskExecution &&) = default ;
      TaskExecution(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskExecution() = default ;
      TaskExecution& operator=(const TaskExecution &) = default ;
      TaskExecution& operator=(TaskExecution &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->billingId_ == nullptr
        && this->enableWebSearch_ == nullptr && this->executionId_ == nullptr && this->operatingObjectName_ == nullptr && this->skillCodes_ == nullptr && this->taskId_ == nullptr
        && this->taskName_ == nullptr && this->taskUnderstand_ == nullptr && this->tenantId_ == nullptr && this->userId_ == nullptr; };
      // billingId Field Functions 
      bool hasBillingId() const { return this->billingId_ != nullptr;};
      void deleteBillingId() { this->billingId_ = nullptr;};
      inline string getBillingId() const { DARABONBA_PTR_GET_DEFAULT(billingId_, "") };
      inline TaskExecution& setBillingId(string billingId) { DARABONBA_PTR_SET_VALUE(billingId_, billingId) };


      // enableWebSearch Field Functions 
      bool hasEnableWebSearch() const { return this->enableWebSearch_ != nullptr;};
      void deleteEnableWebSearch() { this->enableWebSearch_ = nullptr;};
      inline bool getEnableWebSearch() const { DARABONBA_PTR_GET_DEFAULT(enableWebSearch_, false) };
      inline TaskExecution& setEnableWebSearch(bool enableWebSearch) { DARABONBA_PTR_SET_VALUE(enableWebSearch_, enableWebSearch) };


      // executionId Field Functions 
      bool hasExecutionId() const { return this->executionId_ != nullptr;};
      void deleteExecutionId() { this->executionId_ = nullptr;};
      inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
      inline TaskExecution& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


      // operatingObjectName Field Functions 
      bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
      void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
      inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
      inline TaskExecution& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


      // skillCodes Field Functions 
      bool hasSkillCodes() const { return this->skillCodes_ != nullptr;};
      void deleteSkillCodes() { this->skillCodes_ = nullptr;};
      inline const vector<string> & getSkillCodes() const { DARABONBA_PTR_GET_CONST(skillCodes_, vector<string>) };
      inline vector<string> getSkillCodes() { DARABONBA_PTR_GET(skillCodes_, vector<string>) };
      inline TaskExecution& setSkillCodes(const vector<string> & skillCodes) { DARABONBA_PTR_SET_VALUE(skillCodes_, skillCodes) };
      inline TaskExecution& setSkillCodes(vector<string> && skillCodes) { DARABONBA_PTR_SET_RVALUE(skillCodes_, skillCodes) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskExecution& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline TaskExecution& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskUnderstand Field Functions 
      bool hasTaskUnderstand() const { return this->taskUnderstand_ != nullptr;};
      void deleteTaskUnderstand() { this->taskUnderstand_ = nullptr;};
      inline string getTaskUnderstand() const { DARABONBA_PTR_GET_DEFAULT(taskUnderstand_, "") };
      inline TaskExecution& setTaskUnderstand(string taskUnderstand) { DARABONBA_PTR_SET_VALUE(taskUnderstand_, taskUnderstand) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TaskExecution& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline TaskExecution& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The billing ID.
      shared_ptr<string> billingId_ {};
      // Specifies whether to enable web search.
      shared_ptr<bool> enableWebSearch_ {};
      // The execution record ID.
      // 
      // This parameter is required.
      shared_ptr<string> executionId_ {};
      // The name of the digital employee.
      shared_ptr<string> operatingObjectName_ {};
      // The list of associated skill codes.
      shared_ptr<vector<string>> skillCodes_ {};
      // The task ID.
      // 
      // This parameter is required.
      shared_ptr<string> taskId_ {};
      // The task name.
      shared_ptr<string> taskName_ {};
      // The task understanding content.
      shared_ptr<string> taskUnderstand_ {};
      // The ID of the tenant to which the task belongs.
      shared_ptr<string> tenantId_ {};
      // The ID of the user to which the task belongs.
      shared_ptr<string> userId_ {};
    };

    class Segments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Segments& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(mentionType, mentionType_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(objectId, objectId_);
        DARABONBA_PTR_TO_JSON(objectType, objectType_);
        DARABONBA_PTR_TO_JSON(sessionType, sessionType_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Segments& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(mentionType, mentionType_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(objectId, objectId_);
        DARABONBA_PTR_FROM_JSON(objectType, objectType_);
        DARABONBA_PTR_FROM_JSON(sessionType, sessionType_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Segments() = default ;
      Segments(const Segments &) = default ;
      Segments(Segments &&) = default ;
      Segments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Segments() = default ;
      Segments& operator=(const Segments &) = default ;
      Segments& operator=(Segments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->mentionType_ == nullptr && this->name_ == nullptr && this->objectId_ == nullptr && this->objectType_ == nullptr && this->sessionType_ == nullptr
        && this->type_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Segments& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // mentionType Field Functions 
      bool hasMentionType() const { return this->mentionType_ != nullptr;};
      void deleteMentionType() { this->mentionType_ = nullptr;};
      inline string getMentionType() const { DARABONBA_PTR_GET_DEFAULT(mentionType_, "") };
      inline Segments& setMentionType(string mentionType) { DARABONBA_PTR_SET_VALUE(mentionType_, mentionType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Segments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // objectId Field Functions 
      bool hasObjectId() const { return this->objectId_ != nullptr;};
      void deleteObjectId() { this->objectId_ = nullptr;};
      inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
      inline Segments& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


      // objectType Field Functions 
      bool hasObjectType() const { return this->objectType_ != nullptr;};
      void deleteObjectType() { this->objectType_ = nullptr;};
      inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
      inline Segments& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


      // sessionType Field Functions 
      bool hasSessionType() const { return this->sessionType_ != nullptr;};
      void deleteSessionType() { this->sessionType_ = nullptr;};
      inline string getSessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
      inline Segments& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Segments& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // 片段展示内容
      shared_ptr<string> content_ {};
      // 提及对象类别
      shared_ptr<string> mentionType_ {};
      // 被引用对象名称
      shared_ptr<string> name_ {};
      // 被引用对象 ID
      shared_ptr<string> objectId_ {};
      // 被引用对象类型
      shared_ptr<string> objectType_ {};
      // 会话类型
      shared_ptr<string> sessionType_ {};
      // 片段类型
      shared_ptr<string> type_ {};
    };

    class Files : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Files& obj) { 
        DARABONBA_PTR_TO_JSON(fileId, fileId_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Files& obj) { 
        DARABONBA_PTR_FROM_JSON(fileId, fileId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Files() = default ;
      Files(const Files &) = default ;
      Files(Files &&) = default ;
      Files(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Files() = default ;
      Files& operator=(const Files &) = default ;
      Files& operator=(Files &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileId_ == nullptr
        && this->type_ == nullptr; };
      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Files& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Files& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The file ID, which is returned by the uploadChatFile operation.
      // 
      // This parameter is required.
      shared_ptr<string> fileId_ {};
      // The file type.
      shared_ptr<string> type_ {};
    };

    class ContextItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContextItems& obj) { 
        DARABONBA_PTR_TO_JSON(annotation, annotation_);
        DARABONBA_PTR_TO_JSON(annotationFiles, annotationFiles_);
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(fileId, fileId_);
        DARABONBA_PTR_TO_JSON(fileName, fileName_);
        DARABONBA_PTR_TO_JSON(fileType, fileType_);
        DARABONBA_PTR_TO_JSON(messageId, messageId_);
        DARABONBA_PTR_TO_JSON(senderName, senderName_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ContextItems& obj) { 
        DARABONBA_PTR_FROM_JSON(annotation, annotation_);
        DARABONBA_PTR_FROM_JSON(annotationFiles, annotationFiles_);
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(fileId, fileId_);
        DARABONBA_PTR_FROM_JSON(fileName, fileName_);
        DARABONBA_PTR_FROM_JSON(fileType, fileType_);
        DARABONBA_PTR_FROM_JSON(messageId, messageId_);
        DARABONBA_PTR_FROM_JSON(senderName, senderName_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      ContextItems() = default ;
      ContextItems(const ContextItems &) = default ;
      ContextItems(ContextItems &&) = default ;
      ContextItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContextItems() = default ;
      ContextItems& operator=(const ContextItems &) = default ;
      ContextItems& operator=(ContextItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AnnotationFiles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AnnotationFiles& obj) { 
          DARABONBA_PTR_TO_JSON(fileName, fileName_);
          DARABONBA_PTR_TO_JSON(filePublicUrl, filePublicUrl_);
          DARABONBA_PTR_TO_JSON(fileRecordId, fileRecordId_);
          DARABONBA_PTR_TO_JSON(fileUrl, fileUrl_);
        };
        friend void from_json(const Darabonba::Json& j, AnnotationFiles& obj) { 
          DARABONBA_PTR_FROM_JSON(fileName, fileName_);
          DARABONBA_PTR_FROM_JSON(filePublicUrl, filePublicUrl_);
          DARABONBA_PTR_FROM_JSON(fileRecordId, fileRecordId_);
          DARABONBA_PTR_FROM_JSON(fileUrl, fileUrl_);
        };
        AnnotationFiles() = default ;
        AnnotationFiles(const AnnotationFiles &) = default ;
        AnnotationFiles(AnnotationFiles &&) = default ;
        AnnotationFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AnnotationFiles() = default ;
        AnnotationFiles& operator=(const AnnotationFiles &) = default ;
        AnnotationFiles& operator=(AnnotationFiles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileName_ == nullptr
        && this->filePublicUrl_ == nullptr && this->fileRecordId_ == nullptr && this->fileUrl_ == nullptr; };
        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline AnnotationFiles& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // filePublicUrl Field Functions 
        bool hasFilePublicUrl() const { return this->filePublicUrl_ != nullptr;};
        void deleteFilePublicUrl() { this->filePublicUrl_ = nullptr;};
        inline string getFilePublicUrl() const { DARABONBA_PTR_GET_DEFAULT(filePublicUrl_, "") };
        inline AnnotationFiles& setFilePublicUrl(string filePublicUrl) { DARABONBA_PTR_SET_VALUE(filePublicUrl_, filePublicUrl) };


        // fileRecordId Field Functions 
        bool hasFileRecordId() const { return this->fileRecordId_ != nullptr;};
        void deleteFileRecordId() { this->fileRecordId_ = nullptr;};
        inline string getFileRecordId() const { DARABONBA_PTR_GET_DEFAULT(fileRecordId_, "") };
        inline AnnotationFiles& setFileRecordId(string fileRecordId) { DARABONBA_PTR_SET_VALUE(fileRecordId_, fileRecordId) };


        // fileUrl Field Functions 
        bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
        void deleteFileUrl() { this->fileUrl_ = nullptr;};
        inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
        inline AnnotationFiles& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


      protected:
        // 文件名称
        shared_ptr<string> fileName_ {};
        // 文件公开访问地址
        shared_ptr<string> filePublicUrl_ {};
        // 文件记录 ID
        shared_ptr<string> fileRecordId_ {};
        // 文件内部访问地址
        shared_ptr<string> fileUrl_ {};
      };

      virtual bool empty() const override { return this->annotation_ == nullptr
        && this->annotationFiles_ == nullptr && this->content_ == nullptr && this->fileId_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr
        && this->messageId_ == nullptr && this->senderName_ == nullptr && this->type_ == nullptr; };
      // annotation Field Functions 
      bool hasAnnotation() const { return this->annotation_ != nullptr;};
      void deleteAnnotation() { this->annotation_ = nullptr;};
      inline string getAnnotation() const { DARABONBA_PTR_GET_DEFAULT(annotation_, "") };
      inline ContextItems& setAnnotation(string annotation) { DARABONBA_PTR_SET_VALUE(annotation_, annotation) };


      // annotationFiles Field Functions 
      bool hasAnnotationFiles() const { return this->annotationFiles_ != nullptr;};
      void deleteAnnotationFiles() { this->annotationFiles_ = nullptr;};
      inline const vector<ContextItems::AnnotationFiles> & getAnnotationFiles() const { DARABONBA_PTR_GET_CONST(annotationFiles_, vector<ContextItems::AnnotationFiles>) };
      inline vector<ContextItems::AnnotationFiles> getAnnotationFiles() { DARABONBA_PTR_GET(annotationFiles_, vector<ContextItems::AnnotationFiles>) };
      inline ContextItems& setAnnotationFiles(const vector<ContextItems::AnnotationFiles> & annotationFiles) { DARABONBA_PTR_SET_VALUE(annotationFiles_, annotationFiles) };
      inline ContextItems& setAnnotationFiles(vector<ContextItems::AnnotationFiles> && annotationFiles) { DARABONBA_PTR_SET_RVALUE(annotationFiles_, annotationFiles) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline ContextItems& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline ContextItems& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline ContextItems& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileType Field Functions 
      bool hasFileType() const { return this->fileType_ != nullptr;};
      void deleteFileType() { this->fileType_ = nullptr;};
      inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
      inline ContextItems& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
      inline ContextItems& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


      // senderName Field Functions 
      bool hasSenderName() const { return this->senderName_ != nullptr;};
      void deleteSenderName() { this->senderName_ = nullptr;};
      inline string getSenderName() const { DARABONBA_PTR_GET_DEFAULT(senderName_, "") };
      inline ContextItems& setSenderName(string senderName) { DARABONBA_PTR_SET_VALUE(senderName_, senderName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ContextItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // 用户对引用内容的批注
      shared_ptr<string> annotation_ {};
      // 批注关联的文件列表
      shared_ptr<vector<ContextItems::AnnotationFiles>> annotationFiles_ {};
      // 被引用内容正文
      shared_ptr<string> content_ {};
      // 被引用文件 ID
      shared_ptr<string> fileId_ {};
      // 被引用文件名称
      shared_ptr<string> fileName_ {};
      // 被引用文件类型
      shared_ptr<string> fileType_ {};
      // 被引用消息 ID
      shared_ptr<string> messageId_ {};
      // 消息发送者名称
      shared_ptr<string> senderName_ {};
      // 上下文条目类型
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->contentType_ == nullptr && this->contextItems_ == nullptr && this->digitalEmployeeName_ == nullptr && this->directChat_ == nullptr && this->directMaxHistoryRounds_ == nullptr
        && this->enableWebSearch_ == nullptr && this->files_ == nullptr && this->locale_ == nullptr && this->model_ == nullptr && this->reuseLastSession_ == nullptr
        && this->segments_ == nullptr && this->sessionId_ == nullptr && this->stream_ == nullptr && this->taskExecution_ == nullptr && this->tenantId_ == nullptr
        && this->workMode_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SendAsyncChatMessageRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline SendAsyncChatMessageRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // contextItems Field Functions 
    bool hasContextItems() const { return this->contextItems_ != nullptr;};
    void deleteContextItems() { this->contextItems_ = nullptr;};
    inline const vector<SendAsyncChatMessageRequest::ContextItems> & getContextItems() const { DARABONBA_PTR_GET_CONST(contextItems_, vector<SendAsyncChatMessageRequest::ContextItems>) };
    inline vector<SendAsyncChatMessageRequest::ContextItems> getContextItems() { DARABONBA_PTR_GET(contextItems_, vector<SendAsyncChatMessageRequest::ContextItems>) };
    inline SendAsyncChatMessageRequest& setContextItems(const vector<SendAsyncChatMessageRequest::ContextItems> & contextItems) { DARABONBA_PTR_SET_VALUE(contextItems_, contextItems) };
    inline SendAsyncChatMessageRequest& setContextItems(vector<SendAsyncChatMessageRequest::ContextItems> && contextItems) { DARABONBA_PTR_SET_RVALUE(contextItems_, contextItems) };


    // digitalEmployeeName Field Functions 
    bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
    void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
    inline const vector<string> & getDigitalEmployeeName() const { DARABONBA_PTR_GET_CONST(digitalEmployeeName_, vector<string>) };
    inline vector<string> getDigitalEmployeeName() { DARABONBA_PTR_GET(digitalEmployeeName_, vector<string>) };
    inline SendAsyncChatMessageRequest& setDigitalEmployeeName(const vector<string> & digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };
    inline SendAsyncChatMessageRequest& setDigitalEmployeeName(vector<string> && digitalEmployeeName) { DARABONBA_PTR_SET_RVALUE(digitalEmployeeName_, digitalEmployeeName) };


    // directChat Field Functions 
    bool hasDirectChat() const { return this->directChat_ != nullptr;};
    void deleteDirectChat() { this->directChat_ = nullptr;};
    inline bool getDirectChat() const { DARABONBA_PTR_GET_DEFAULT(directChat_, false) };
    inline SendAsyncChatMessageRequest& setDirectChat(bool directChat) { DARABONBA_PTR_SET_VALUE(directChat_, directChat) };


    // directMaxHistoryRounds Field Functions 
    bool hasDirectMaxHistoryRounds() const { return this->directMaxHistoryRounds_ != nullptr;};
    void deleteDirectMaxHistoryRounds() { this->directMaxHistoryRounds_ = nullptr;};
    inline     const Darabonba::Json & getDirectMaxHistoryRounds() const { DARABONBA_GET(directMaxHistoryRounds_) };
    Darabonba::Json & getDirectMaxHistoryRounds() { DARABONBA_GET(directMaxHistoryRounds_) };
    inline SendAsyncChatMessageRequest& setDirectMaxHistoryRounds(const Darabonba::Json & directMaxHistoryRounds) { DARABONBA_SET_VALUE(directMaxHistoryRounds_, directMaxHistoryRounds) };
    inline SendAsyncChatMessageRequest& setDirectMaxHistoryRounds(Darabonba::Json && directMaxHistoryRounds) { DARABONBA_SET_RVALUE(directMaxHistoryRounds_, directMaxHistoryRounds) };


    // enableWebSearch Field Functions 
    bool hasEnableWebSearch() const { return this->enableWebSearch_ != nullptr;};
    void deleteEnableWebSearch() { this->enableWebSearch_ = nullptr;};
    inline bool getEnableWebSearch() const { DARABONBA_PTR_GET_DEFAULT(enableWebSearch_, false) };
    inline SendAsyncChatMessageRequest& setEnableWebSearch(bool enableWebSearch) { DARABONBA_PTR_SET_VALUE(enableWebSearch_, enableWebSearch) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<SendAsyncChatMessageRequest::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<SendAsyncChatMessageRequest::Files>) };
    inline vector<SendAsyncChatMessageRequest::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<SendAsyncChatMessageRequest::Files>) };
    inline SendAsyncChatMessageRequest& setFiles(const vector<SendAsyncChatMessageRequest::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline SendAsyncChatMessageRequest& setFiles(vector<SendAsyncChatMessageRequest::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // locale Field Functions 
    bool hasLocale() const { return this->locale_ != nullptr;};
    void deleteLocale() { this->locale_ = nullptr;};
    inline string getLocale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
    inline SendAsyncChatMessageRequest& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline SendAsyncChatMessageRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // reuseLastSession Field Functions 
    bool hasReuseLastSession() const { return this->reuseLastSession_ != nullptr;};
    void deleteReuseLastSession() { this->reuseLastSession_ = nullptr;};
    inline bool getReuseLastSession() const { DARABONBA_PTR_GET_DEFAULT(reuseLastSession_, false) };
    inline SendAsyncChatMessageRequest& setReuseLastSession(bool reuseLastSession) { DARABONBA_PTR_SET_VALUE(reuseLastSession_, reuseLastSession) };


    // segments Field Functions 
    bool hasSegments() const { return this->segments_ != nullptr;};
    void deleteSegments() { this->segments_ = nullptr;};
    inline const vector<SendAsyncChatMessageRequest::Segments> & getSegments() const { DARABONBA_PTR_GET_CONST(segments_, vector<SendAsyncChatMessageRequest::Segments>) };
    inline vector<SendAsyncChatMessageRequest::Segments> getSegments() { DARABONBA_PTR_GET(segments_, vector<SendAsyncChatMessageRequest::Segments>) };
    inline SendAsyncChatMessageRequest& setSegments(const vector<SendAsyncChatMessageRequest::Segments> & segments) { DARABONBA_PTR_SET_VALUE(segments_, segments) };
    inline SendAsyncChatMessageRequest& setSegments(vector<SendAsyncChatMessageRequest::Segments> && segments) { DARABONBA_PTR_SET_RVALUE(segments_, segments) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SendAsyncChatMessageRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline SendAsyncChatMessageRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // taskExecution Field Functions 
    bool hasTaskExecution() const { return this->taskExecution_ != nullptr;};
    void deleteTaskExecution() { this->taskExecution_ = nullptr;};
    inline const SendAsyncChatMessageRequest::TaskExecution & getTaskExecution() const { DARABONBA_PTR_GET_CONST(taskExecution_, SendAsyncChatMessageRequest::TaskExecution) };
    inline SendAsyncChatMessageRequest::TaskExecution getTaskExecution() { DARABONBA_PTR_GET(taskExecution_, SendAsyncChatMessageRequest::TaskExecution) };
    inline SendAsyncChatMessageRequest& setTaskExecution(const SendAsyncChatMessageRequest::TaskExecution & taskExecution) { DARABONBA_PTR_SET_VALUE(taskExecution_, taskExecution) };
    inline SendAsyncChatMessageRequest& setTaskExecution(SendAsyncChatMessageRequest::TaskExecution && taskExecution) { DARABONBA_PTR_SET_RVALUE(taskExecution_, taskExecution) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SendAsyncChatMessageRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workMode Field Functions 
    bool hasWorkMode() const { return this->workMode_ != nullptr;};
    void deleteWorkMode() { this->workMode_ = nullptr;};
    inline string getWorkMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
    inline SendAsyncChatMessageRequest& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


  protected:
    // The body of the user message.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
    // The message type. Valid values: Text and Markdown.
    shared_ptr<string> contentType_ {};
    // 作为本轮上下文引用的消息或文件条目
    shared_ptr<vector<SendAsyncChatMessageRequest::ContextItems>> contextItems_ {};
    // The list of digital employee names. For compatibility with the legacy format, a single string can also be passed.
    shared_ptr<vector<string>> digitalEmployeeName_ {};
    // Specifies whether to enable direct connection mode. If set to true, regular scenario routing is skipped and the direct conversation scenario is used.
    shared_ptr<bool> directChat_ {};
    // 本轮携带的最近完整 direct 问答轮数，不含本轮输入。仅 workMode=direct 或 directChat=true 时生效。有效值为 0–100 的 JSON 整数，省略时由后端按 0 处理，不携带历史但仍保存当前轮。null、布尔值、字符串、小数及越界值按原 direct 路径处理，网关保留原始值供后端判定。work/ask 忽略此字段。该参数不限制转换为 work 时的历史范围
    Darabonba::Json directMaxHistoryRounds_ {};
    // Specifies whether to enable web search. Default value: false. In the task execution scenario where taskExecution is passed, the task configuration prevails.
    shared_ptr<bool> enableWebSearch_ {};
    // The list of file references. Each item is an object, and the fileId parameter is required. The fileId is returned by the uploadChatFile operation.
    shared_ptr<vector<SendAsyncChatMessageRequest::Files>> files_ {};
    // 本轮语言，可选 zh-CN、en-US，用于接口错误文案并透传给 CodeAgent；省略时沿用当前语言行为，不修改用户设置
    shared_ptr<string> locale_ {};
    // The abstract model tier. Valid values: quick, standard, and flagship. If not specified, standard is used for new sessions, and the current tier is retained for existing sessions.
    shared_ptr<string> model_ {};
    // Specifies whether to reuse the most recent session under the digital employee when sessionId is not specified. This is typically used in CLI scenarios. Default value: false, which means a new session is created.
    shared_ptr<bool> reuseLastSession_ {};
    // 消息中的结构化片段，例如会话或对象提及
    shared_ptr<vector<SendAsyncChatMessageRequest::Segments>> segments_ {};
    // The session ID. If not specified, a new session is created.
    shared_ptr<string> sessionId_ {};
    // Specifies whether to use streaming generation. This operation always generates backend content in streaming mode and writes it to the message stream. The value of this parameter does not change the response structure.
    shared_ptr<bool> stream_ {};
    // The task execution metadata returned by the executeScheduledTask operation. If passed, the request is processed through the task execution pipeline.
    shared_ptr<SendAsyncChatMessageRequest::TaskExecution> taskExecution_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The session work mode. Valid values: ask (quick Q&A, which trims tools, skills, and connectors for single-turn direct answers), work (deep work, default), and direct (direct connection mode at the request level, which does not start a sandbox and prevents context pollution, equivalent to directChat=true). The ask and work modes are session-level. The mode is fixed when a new session is created and inherited by default in subsequent chats. If the explicitly passed value is inconsistent with the session mode, a parameter error is returned. To switch modes, create a new session or fork the current one. If ask is passed in multi-digital-employee or task execution scenarios, it takes effect as work. This parameter is ignored when directChat is set to true.
    shared_ptr<string> workMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
