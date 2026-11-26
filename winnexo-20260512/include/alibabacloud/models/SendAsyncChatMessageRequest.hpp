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
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(autoPreference, autoPreference_);
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
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(reuseLastSession, reuseLastSession_);
      DARABONBA_PTR_TO_JSON(segments, segments_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(taskExecution, taskExecution_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(thinkingEnabled, thinkingEnabled_);
      DARABONBA_PTR_TO_JSON(thinkingLevel, thinkingLevel_);
      DARABONBA_PTR_TO_JSON(workMode, workMode_);
    };
    friend void from_json(const Darabonba::Json& j, SendAsyncChatMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(autoPreference, autoPreference_);
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
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(reuseLastSession, reuseLastSession_);
      DARABONBA_PTR_FROM_JSON(segments, segments_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(taskExecution, taskExecution_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(thinkingEnabled, thinkingEnabled_);
      DARABONBA_PTR_FROM_JSON(thinkingLevel, thinkingLevel_);
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
      // The display content of the segment.
      shared_ptr<string> content_ {};
      // The category of the mentioned object.
      shared_ptr<string> mentionType_ {};
      // The name of the referenced object.
      shared_ptr<string> name_ {};
      // The ID of the referenced object.
      shared_ptr<string> objectId_ {};
      // The object type of the referenced object.
      shared_ptr<string> objectType_ {};
      // The session type.
      shared_ptr<string> sessionType_ {};
      // The segment type.
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
      // The file ID, returned by uploadChatFile.
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
        // The file name of the attachment.
        shared_ptr<string> fileName_ {};
        // The public access URL of the attachment. This parameter is optional.
        shared_ptr<string> filePublicUrl_ {};
        // The file record ID of the attachment. This parameter is required. It is used to verify the ownership of the attachment and provide it for session processing.
        shared_ptr<string> fileRecordId_ {};
        // The internal access URL of the attachment. This parameter is optional.
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
      // The annotation content entered by the user.
      shared_ptr<string> annotation_ {};
      // The list of attachments associated with the output annotation. This parameter is only applicable when type is set to output_annotation.
      shared_ptr<vector<ContextItems::AnnotationFiles>> annotationFiles_ {};
      // The content corresponding to the reference or annotation. For output_annotation, this parameter is optional, but annotationFiles must be provided.
      shared_ptr<string> content_ {};
      // The ID of the referenced or annotated output file.
      shared_ptr<string> fileId_ {};
      // The name of the referenced or annotated output file.
      shared_ptr<string> fileName_ {};
      // The type of the referenced or annotated output file.
      shared_ptr<string> fileType_ {};
      // The ID of the referenced or annotated message.
      shared_ptr<string> messageId_ {};
      // The name of the sender of the referenced or annotated message.
      shared_ptr<string> senderName_ {};
      // The context type. Valid values: message_reference, message_selection, message_annotation, output_selection, and output_annotation.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->autoPreference_ == nullptr && this->content_ == nullptr && this->contentType_ == nullptr && this->contextItems_ == nullptr && this->digitalEmployeeName_ == nullptr
        && this->directChat_ == nullptr && this->directMaxHistoryRounds_ == nullptr && this->enableWebSearch_ == nullptr && this->files_ == nullptr && this->locale_ == nullptr
        && this->model_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->reuseLastSession_ == nullptr && this->segments_ == nullptr
        && this->sessionId_ == nullptr && this->stream_ == nullptr && this->taskExecution_ == nullptr && this->tenantId_ == nullptr && this->thinkingEnabled_ == nullptr
        && this->thinkingLevel_ == nullptr && this->workMode_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline SendAsyncChatMessageRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // autoPreference Field Functions 
    bool hasAutoPreference() const { return this->autoPreference_ != nullptr;};
    void deleteAutoPreference() { this->autoPreference_ = nullptr;};
    inline string getAutoPreference() const { DARABONBA_PTR_GET_DEFAULT(autoPreference_, "") };
    inline SendAsyncChatMessageRequest& setAutoPreference(string autoPreference) { DARABONBA_PTR_SET_VALUE(autoPreference_, autoPreference) };


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


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline SendAsyncChatMessageRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline SendAsyncChatMessageRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


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


    // thinkingEnabled Field Functions 
    bool hasThinkingEnabled() const { return this->thinkingEnabled_ != nullptr;};
    void deleteThinkingEnabled() { this->thinkingEnabled_ = nullptr;};
    inline bool getThinkingEnabled() const { DARABONBA_PTR_GET_DEFAULT(thinkingEnabled_, false) };
    inline SendAsyncChatMessageRequest& setThinkingEnabled(bool thinkingEnabled) { DARABONBA_PTR_SET_VALUE(thinkingEnabled_, thinkingEnabled) };


    // thinkingLevel Field Functions 
    bool hasThinkingLevel() const { return this->thinkingLevel_ != nullptr;};
    void deleteThinkingLevel() { this->thinkingLevel_ = nullptr;};
    inline string getThinkingLevel() const { DARABONBA_PTR_GET_DEFAULT(thinkingLevel_, "") };
    inline SendAsyncChatMessageRequest& setThinkingLevel(string thinkingLevel) { DARABONBA_PTR_SET_VALUE(thinkingLevel_, thinkingLevel) };


    // workMode Field Functions 
    bool hasWorkMode() const { return this->workMode_ != nullptr;};
    void deleteWorkMode() { this->workMode_ = nullptr;};
    inline string getWorkMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
    inline SendAsyncChatMessageRequest& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


  protected:
    // 平台应用 Token（控制台签发）。传入后将以 opsUserId 或 opsUserCode 指定的用户身份执行
    shared_ptr<string> appToken_ {};
    // AUTO 偏好：none=默认、performance=效果优先、credit=成本优先；缺省或 null 继承会话，空白重置为 none
    shared_ptr<string> autoPreference_ {};
    // The body of the user message.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
    // The message type. Valid values: Text and Markdown.
    shared_ptr<string> contentType_ {};
    // The references and annotations for the current turn.
    shared_ptr<vector<SendAsyncChatMessageRequest::ContextItems>> contextItems_ {};
    // The list of digital employee names. For compatibility with the old format, a single string can also be passed.
    shared_ptr<vector<string>> digitalEmployeeName_ {};
    // **[Deprecated]** Use workMode=direct instead. If set to true, winnexo_chat is retained and processed in request-level direct mode.
    shared_ptr<bool> directChat_ {};
    // The maximum number of history rounds referenced in the current turn for the direct mode. Valid values: integers from 0 to 100. Default value: 0. Invalid values fall back to the original single-turn path. This parameter is ignored in non-direct modes.
    Darabonba::Json directMaxHistoryRounds_ {};
    // Specifies whether to enable web search. Default value: false. In the task execution scenario (when taskExecution is passed), the task configuration prevails.
    shared_ptr<bool> enableWebSearch_ {};
    // The list of file references. Each item is an object, and fileId is required (returned by uploadChatFile).
    shared_ptr<vector<SendAsyncChatMessageRequest::Files>> files_ {};
    // The language for the current turn. Valid values: zh-CN and en-US. This parameter is used for API error messages and passed through to CodeAgent. If omitted, the current language behavior is retained and user settings are not modified.
    shared_ptr<string> locale_ {};
    // The model tier. Valid values: quick, standard, flagship, auto, or other currently available model names (case-insensitive). If not specified, the model tier of the session is inherited. For a new session, the default value is standard.
    shared_ptr<string> model_ {};
    // 代理用户编码（租户内唯一），仅当应用凭证配置为 source_uid 时使用
    shared_ptr<string> opsUserCode_ {};
    // 代理用户ID（WINNEXO 平台用户ID），仅当应用凭证配置为 winnexo_uid 时使用
    shared_ptr<string> opsUserId_ {};
    // Specifies whether to reuse the most recent session under the digital employee when sessionId is not provided (CLI scenario). Default value: false, which means a new session is created.
    shared_ptr<bool> reuseLastSession_ {};
    // The structured segments in the message, such as session or object mentions.
    shared_ptr<vector<SendAsyncChatMessageRequest::Segments>> segments_ {};
    // The session ID. If not specified, a new session is created.
    shared_ptr<string> sessionId_ {};
    // Specifies whether to use streaming generation. This API always generates background content in streaming mode and writes it to the message stream. The value of this parameter does not change the response structure.
    shared_ptr<bool> stream_ {};
    // The task execution metadata returned by executeScheduledTask. If passed, the request is processed through the task execution pipeline.
    shared_ptr<SendAsyncChatMessageRequest::TaskExecution> taskExecution_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // 本轮显式覆盖是否思考；AUTO 未传时由决策模型判断，固定档未传时沿用个人设置，最终遵守模型能力与租户开关
    shared_ptr<bool> thinkingEnabled_ {};
    // 本轮显式覆盖思考强度；AUTO 未传时由决策模型判断，固定档未传时沿用个人设置，最终遵守模型能力与租户开关
    shared_ptr<string> thinkingLevel_ {};
    // The session work mode. Valid values: ask (quick Q&A), work (deep work, default), and direct (direct connection mode, which does not start the sandbox, uses independent direct history controlled by directMaxHistoryRounds, and is equivalent to directChat=true). The ask and work modes are session-level. For continued chats, the session mode is inherited by default. To switch modes, create a new session or fork. In multi-digital employee or task execution scenarios, if ask is passed, it takes effect as work. If directChat is set to true, this parameter is ignored.
    shared_ptr<string> workMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
