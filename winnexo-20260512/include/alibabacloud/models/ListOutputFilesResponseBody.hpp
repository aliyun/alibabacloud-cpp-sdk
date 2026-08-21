// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOUTPUTFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOUTPUTFILESRESPONSEBODY_HPP_
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
  class ListOutputFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOutputFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListOutputFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListOutputFilesResponseBody() = default ;
    ListOutputFilesResponseBody(const ListOutputFilesResponseBody &) = default ;
    ListOutputFilesResponseBody(ListOutputFilesResponseBody &&) = default ;
    ListOutputFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOutputFilesResponseBody() = default ;
    ListOutputFilesResponseBody& operator=(const ListOutputFilesResponseBody &) = default ;
    ListOutputFilesResponseBody& operator=(ListOutputFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(conversationId, conversationId_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
        DARABONBA_PTR_TO_JSON(outputId, outputId_);
        DARABONBA_PTR_TO_JSON(outputItems, outputItems_);
        DARABONBA_PTR_TO_JSON(outputType, outputType_);
        DARABONBA_PTR_TO_JSON(outputTypeDisplayName, outputTypeDisplayName_);
        DARABONBA_PTR_TO_JSON(skillOutputId, skillOutputId_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(conversationId, conversationId_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
        DARABONBA_PTR_FROM_JSON(outputId, outputId_);
        DARABONBA_PTR_FROM_JSON(outputItems, outputItems_);
        DARABONBA_PTR_FROM_JSON(outputType, outputType_);
        DARABONBA_PTR_FROM_JSON(outputTypeDisplayName, outputTypeDisplayName_);
        DARABONBA_PTR_FROM_JSON(skillOutputId, skillOutputId_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OutputItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OutputItems& obj) { 
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(emailInfo, emailInfo_);
          DARABONBA_PTR_TO_JSON(fileInfo, fileInfo_);
          DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(itemName, itemName_);
          DARABONBA_PTR_TO_JSON(itemType, itemType_);
          DARABONBA_PTR_TO_JSON(itemTypeDisplayName, itemTypeDisplayName_);
          DARABONBA_PTR_TO_JSON(messageId, messageId_);
          DARABONBA_PTR_TO_JSON(outputItemId, outputItemId_);
          DARABONBA_PTR_TO_JSON(shareEnabled, shareEnabled_);
          DARABONBA_PTR_TO_JSON(shareToken, shareToken_);
          DARABONBA_PTR_TO_JSON(skillOutputId, skillOutputId_);
          DARABONBA_PTR_TO_JSON(slidesInfo, slidesInfo_);
          DARABONBA_PTR_TO_JSON(taskExecutionId, taskExecutionId_);
        };
        friend void from_json(const Darabonba::Json& j, OutputItems& obj) { 
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(emailInfo, emailInfo_);
          DARABONBA_PTR_FROM_JSON(fileInfo, fileInfo_);
          DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(itemName, itemName_);
          DARABONBA_PTR_FROM_JSON(itemType, itemType_);
          DARABONBA_PTR_FROM_JSON(itemTypeDisplayName, itemTypeDisplayName_);
          DARABONBA_PTR_FROM_JSON(messageId, messageId_);
          DARABONBA_PTR_FROM_JSON(outputItemId, outputItemId_);
          DARABONBA_PTR_FROM_JSON(shareEnabled, shareEnabled_);
          DARABONBA_PTR_FROM_JSON(shareToken, shareToken_);
          DARABONBA_PTR_FROM_JSON(skillOutputId, skillOutputId_);
          DARABONBA_PTR_FROM_JSON(slidesInfo, slidesInfo_);
          DARABONBA_PTR_FROM_JSON(taskExecutionId, taskExecutionId_);
        };
        OutputItems() = default ;
        OutputItems(const OutputItems &) = default ;
        OutputItems(OutputItems &&) = default ;
        OutputItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OutputItems() = default ;
        OutputItems& operator=(const OutputItems &) = default ;
        OutputItems& operator=(OutputItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SlidesInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SlidesInfo& obj) { 
            DARABONBA_PTR_TO_JSON(completedSlides, completedSlides_);
            DARABONBA_PTR_TO_JSON(pptId, pptId_);
            DARABONBA_PTR_TO_JSON(pptName, pptName_);
            DARABONBA_PTR_TO_JSON(totalSlides, totalSlides_);
          };
          friend void from_json(const Darabonba::Json& j, SlidesInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(completedSlides, completedSlides_);
            DARABONBA_PTR_FROM_JSON(pptId, pptId_);
            DARABONBA_PTR_FROM_JSON(pptName, pptName_);
            DARABONBA_PTR_FROM_JSON(totalSlides, totalSlides_);
          };
          SlidesInfo() = default ;
          SlidesInfo(const SlidesInfo &) = default ;
          SlidesInfo(SlidesInfo &&) = default ;
          SlidesInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SlidesInfo() = default ;
          SlidesInfo& operator=(const SlidesInfo &) = default ;
          SlidesInfo& operator=(SlidesInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->completedSlides_ == nullptr
        && this->pptId_ == nullptr && this->pptName_ == nullptr && this->totalSlides_ == nullptr; };
          // completedSlides Field Functions 
          bool hasCompletedSlides() const { return this->completedSlides_ != nullptr;};
          void deleteCompletedSlides() { this->completedSlides_ = nullptr;};
          inline int64_t getCompletedSlides() const { DARABONBA_PTR_GET_DEFAULT(completedSlides_, 0L) };
          inline SlidesInfo& setCompletedSlides(int64_t completedSlides) { DARABONBA_PTR_SET_VALUE(completedSlides_, completedSlides) };


          // pptId Field Functions 
          bool hasPptId() const { return this->pptId_ != nullptr;};
          void deletePptId() { this->pptId_ = nullptr;};
          inline string getPptId() const { DARABONBA_PTR_GET_DEFAULT(pptId_, "") };
          inline SlidesInfo& setPptId(string pptId) { DARABONBA_PTR_SET_VALUE(pptId_, pptId) };


          // pptName Field Functions 
          bool hasPptName() const { return this->pptName_ != nullptr;};
          void deletePptName() { this->pptName_ = nullptr;};
          inline string getPptName() const { DARABONBA_PTR_GET_DEFAULT(pptName_, "") };
          inline SlidesInfo& setPptName(string pptName) { DARABONBA_PTR_SET_VALUE(pptName_, pptName) };


          // totalSlides Field Functions 
          bool hasTotalSlides() const { return this->totalSlides_ != nullptr;};
          void deleteTotalSlides() { this->totalSlides_ = nullptr;};
          inline int64_t getTotalSlides() const { DARABONBA_PTR_GET_DEFAULT(totalSlides_, 0L) };
          inline SlidesInfo& setTotalSlides(int64_t totalSlides) { DARABONBA_PTR_SET_VALUE(totalSlides_, totalSlides) };


        protected:
          // The number of completed slides.
          shared_ptr<int64_t> completedSlides_ {};
          // PPT ID
          shared_ptr<string> pptId_ {};
          // The PPT name.
          shared_ptr<string> pptName_ {};
          // The total number of slides.
          shared_ptr<int64_t> totalSlides_ {};
        };

        class FileInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FileInfo& obj) { 
            DARABONBA_PTR_TO_JSON(description, description_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(path, path_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, FileInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(description, description_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(path, path_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          FileInfo() = default ;
          FileInfo(const FileInfo &) = default ;
          FileInfo(FileInfo &&) = default ;
          FileInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FileInfo() = default ;
          FileInfo& operator=(const FileInfo &) = default ;
          FileInfo& operator=(FileInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->path_ == nullptr && this->type_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline FileInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline FileInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
          inline FileInfo& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline FileInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The file description.
          shared_ptr<string> description_ {};
          // The file name.
          shared_ptr<string> name_ {};
          // The file path (OSS object key).
          shared_ptr<string> path_ {};
          // The file type, such as .pdf or .md.
          shared_ptr<string> type_ {};
        };

        class EmailInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EmailInfo& obj) { 
            DARABONBA_PTR_TO_JSON(body, body_);
            DARABONBA_PTR_TO_JSON(contentType, contentType_);
            DARABONBA_PTR_TO_JSON(recipients, recipients_);
            DARABONBA_PTR_TO_JSON(subject, subject_);
          };
          friend void from_json(const Darabonba::Json& j, EmailInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(body, body_);
            DARABONBA_PTR_FROM_JSON(contentType, contentType_);
            DARABONBA_PTR_FROM_JSON(recipients, recipients_);
            DARABONBA_PTR_FROM_JSON(subject, subject_);
          };
          EmailInfo() = default ;
          EmailInfo(const EmailInfo &) = default ;
          EmailInfo(EmailInfo &&) = default ;
          EmailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EmailInfo() = default ;
          EmailInfo& operator=(const EmailInfo &) = default ;
          EmailInfo& operator=(EmailInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->body_ == nullptr
        && this->contentType_ == nullptr && this->recipients_ == nullptr && this->subject_ == nullptr; };
          // body Field Functions 
          bool hasBody() const { return this->body_ != nullptr;};
          void deleteBody() { this->body_ = nullptr;};
          inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
          inline EmailInfo& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


          // contentType Field Functions 
          bool hasContentType() const { return this->contentType_ != nullptr;};
          void deleteContentType() { this->contentType_ = nullptr;};
          inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
          inline EmailInfo& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


          // recipients Field Functions 
          bool hasRecipients() const { return this->recipients_ != nullptr;};
          void deleteRecipients() { this->recipients_ = nullptr;};
          inline const vector<string> & getRecipients() const { DARABONBA_PTR_GET_CONST(recipients_, vector<string>) };
          inline vector<string> getRecipients() { DARABONBA_PTR_GET(recipients_, vector<string>) };
          inline EmailInfo& setRecipients(const vector<string> & recipients) { DARABONBA_PTR_SET_VALUE(recipients_, recipients) };
          inline EmailInfo& setRecipients(vector<string> && recipients) { DARABONBA_PTR_SET_RVALUE(recipients_, recipients) };


          // subject Field Functions 
          bool hasSubject() const { return this->subject_ != nullptr;};
          void deleteSubject() { this->subject_ = nullptr;};
          inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
          inline EmailInfo& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


        protected:
          // The email body.
          shared_ptr<string> body_ {};
          // The content type, such as MARKDOWN/JSONML/HTML.
          shared_ptr<string> contentType_ {};
          // The recipient list.
          shared_ptr<vector<string>> recipients_ {};
          // The email subject.
          shared_ptr<string> subject_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->emailInfo_ == nullptr && this->fileInfo_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->itemName_ == nullptr
        && this->itemType_ == nullptr && this->itemTypeDisplayName_ == nullptr && this->messageId_ == nullptr && this->outputItemId_ == nullptr && this->shareEnabled_ == nullptr
        && this->shareToken_ == nullptr && this->skillOutputId_ == nullptr && this->slidesInfo_ == nullptr && this->taskExecutionId_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline OutputItems& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // emailInfo Field Functions 
        bool hasEmailInfo() const { return this->emailInfo_ != nullptr;};
        void deleteEmailInfo() { this->emailInfo_ = nullptr;};
        inline const OutputItems::EmailInfo & getEmailInfo() const { DARABONBA_PTR_GET_CONST(emailInfo_, OutputItems::EmailInfo) };
        inline OutputItems::EmailInfo getEmailInfo() { DARABONBA_PTR_GET(emailInfo_, OutputItems::EmailInfo) };
        inline OutputItems& setEmailInfo(const OutputItems::EmailInfo & emailInfo) { DARABONBA_PTR_SET_VALUE(emailInfo_, emailInfo) };
        inline OutputItems& setEmailInfo(OutputItems::EmailInfo && emailInfo) { DARABONBA_PTR_SET_RVALUE(emailInfo_, emailInfo) };


        // fileInfo Field Functions 
        bool hasFileInfo() const { return this->fileInfo_ != nullptr;};
        void deleteFileInfo() { this->fileInfo_ = nullptr;};
        inline const OutputItems::FileInfo & getFileInfo() const { DARABONBA_PTR_GET_CONST(fileInfo_, OutputItems::FileInfo) };
        inline OutputItems::FileInfo getFileInfo() { DARABONBA_PTR_GET(fileInfo_, OutputItems::FileInfo) };
        inline OutputItems& setFileInfo(const OutputItems::FileInfo & fileInfo) { DARABONBA_PTR_SET_VALUE(fileInfo_, fileInfo) };
        inline OutputItems& setFileInfo(OutputItems::FileInfo && fileInfo) { DARABONBA_PTR_SET_RVALUE(fileInfo_, fileInfo) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline OutputItems& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline OutputItems& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // itemName Field Functions 
        bool hasItemName() const { return this->itemName_ != nullptr;};
        void deleteItemName() { this->itemName_ = nullptr;};
        inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
        inline OutputItems& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


        // itemType Field Functions 
        bool hasItemType() const { return this->itemType_ != nullptr;};
        void deleteItemType() { this->itemType_ = nullptr;};
        inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
        inline OutputItems& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


        // itemTypeDisplayName Field Functions 
        bool hasItemTypeDisplayName() const { return this->itemTypeDisplayName_ != nullptr;};
        void deleteItemTypeDisplayName() { this->itemTypeDisplayName_ = nullptr;};
        inline string getItemTypeDisplayName() const { DARABONBA_PTR_GET_DEFAULT(itemTypeDisplayName_, "") };
        inline OutputItems& setItemTypeDisplayName(string itemTypeDisplayName) { DARABONBA_PTR_SET_VALUE(itemTypeDisplayName_, itemTypeDisplayName) };


        // messageId Field Functions 
        bool hasMessageId() const { return this->messageId_ != nullptr;};
        void deleteMessageId() { this->messageId_ = nullptr;};
        inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
        inline OutputItems& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


        // outputItemId Field Functions 
        bool hasOutputItemId() const { return this->outputItemId_ != nullptr;};
        void deleteOutputItemId() { this->outputItemId_ = nullptr;};
        inline string getOutputItemId() const { DARABONBA_PTR_GET_DEFAULT(outputItemId_, "") };
        inline OutputItems& setOutputItemId(string outputItemId) { DARABONBA_PTR_SET_VALUE(outputItemId_, outputItemId) };


        // shareEnabled Field Functions 
        bool hasShareEnabled() const { return this->shareEnabled_ != nullptr;};
        void deleteShareEnabled() { this->shareEnabled_ = nullptr;};
        inline bool getShareEnabled() const { DARABONBA_PTR_GET_DEFAULT(shareEnabled_, false) };
        inline OutputItems& setShareEnabled(bool shareEnabled) { DARABONBA_PTR_SET_VALUE(shareEnabled_, shareEnabled) };


        // shareToken Field Functions 
        bool hasShareToken() const { return this->shareToken_ != nullptr;};
        void deleteShareToken() { this->shareToken_ = nullptr;};
        inline string getShareToken() const { DARABONBA_PTR_GET_DEFAULT(shareToken_, "") };
        inline OutputItems& setShareToken(string shareToken) { DARABONBA_PTR_SET_VALUE(shareToken_, shareToken) };


        // skillOutputId Field Functions 
        bool hasSkillOutputId() const { return this->skillOutputId_ != nullptr;};
        void deleteSkillOutputId() { this->skillOutputId_ = nullptr;};
        inline string getSkillOutputId() const { DARABONBA_PTR_GET_DEFAULT(skillOutputId_, "") };
        inline OutputItems& setSkillOutputId(string skillOutputId) { DARABONBA_PTR_SET_VALUE(skillOutputId_, skillOutputId) };


        // slidesInfo Field Functions 
        bool hasSlidesInfo() const { return this->slidesInfo_ != nullptr;};
        void deleteSlidesInfo() { this->slidesInfo_ = nullptr;};
        inline const OutputItems::SlidesInfo & getSlidesInfo() const { DARABONBA_PTR_GET_CONST(slidesInfo_, OutputItems::SlidesInfo) };
        inline OutputItems::SlidesInfo getSlidesInfo() { DARABONBA_PTR_GET(slidesInfo_, OutputItems::SlidesInfo) };
        inline OutputItems& setSlidesInfo(const OutputItems::SlidesInfo & slidesInfo) { DARABONBA_PTR_SET_VALUE(slidesInfo_, slidesInfo) };
        inline OutputItems& setSlidesInfo(OutputItems::SlidesInfo && slidesInfo) { DARABONBA_PTR_SET_RVALUE(slidesInfo_, slidesInfo) };


        // taskExecutionId Field Functions 
        bool hasTaskExecutionId() const { return this->taskExecutionId_ != nullptr;};
        void deleteTaskExecutionId() { this->taskExecutionId_ = nullptr;};
        inline string getTaskExecutionId() const { DARABONBA_PTR_GET_DEFAULT(taskExecutionId_, "") };
        inline OutputItems& setTaskExecutionId(string taskExecutionId) { DARABONBA_PTR_SET_VALUE(taskExecutionId_, taskExecutionId) };


      protected:
        // The creation time in ISO 8601 format.
        shared_ptr<string> createTime_ {};
        // The email information. This field is present when the output type is email.
        shared_ptr<OutputItems::EmailInfo> emailInfo_ {};
        // The file information. This field is present when the output type is file.
        shared_ptr<OutputItems::FileInfo> fileInfo_ {};
        // The database creation time in ISO 8601 format.
        shared_ptr<string> gmtCreate_ {};
        // The database update time in ISO 8601 format.
        shared_ptr<string> gmtModified_ {};
        // The output name.
        shared_ptr<string> itemName_ {};
        // The type of the output item. Valid values: ppt, html, document, picture, slides, video, audio, email, and others.
        shared_ptr<string> itemType_ {};
        // The internationalized display name of the output detail type.
        shared_ptr<string> itemTypeDisplayName_ {};
        // The message ID.
        shared_ptr<string> messageId_ {};
        // The output detail ID.
        shared_ptr<string> outputItemId_ {};
        // Indicates whether sharing is enabled.
        shared_ptr<bool> shareEnabled_ {};
        // The share token, which is present when sharing is enabled. You can use this token to access the public share preview API.
        shared_ptr<string> shareToken_ {};
        // The skill output ID.
        shared_ptr<string> skillOutputId_ {};
        // The slides information. This field is present when the output type is slides.
        shared_ptr<OutputItems::SlidesInfo> slidesInfo_ {};
        // The task execution ID.
        shared_ptr<string> taskExecutionId_ {};
      };

      virtual bool empty() const override { return this->conversationId_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->name_ == nullptr && this->operatingObjectName_ == nullptr && this->outputId_ == nullptr
        && this->outputItems_ == nullptr && this->outputType_ == nullptr && this->outputTypeDisplayName_ == nullptr && this->skillOutputId_ == nullptr && this->taskId_ == nullptr; };
      // conversationId Field Functions 
      bool hasConversationId() const { return this->conversationId_ != nullptr;};
      void deleteConversationId() { this->conversationId_ = nullptr;};
      inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
      inline Items& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Items& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Items& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // operatingObjectName Field Functions 
      bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
      void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
      inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
      inline Items& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


      // outputId Field Functions 
      bool hasOutputId() const { return this->outputId_ != nullptr;};
      void deleteOutputId() { this->outputId_ = nullptr;};
      inline string getOutputId() const { DARABONBA_PTR_GET_DEFAULT(outputId_, "") };
      inline Items& setOutputId(string outputId) { DARABONBA_PTR_SET_VALUE(outputId_, outputId) };


      // outputItems Field Functions 
      bool hasOutputItems() const { return this->outputItems_ != nullptr;};
      void deleteOutputItems() { this->outputItems_ = nullptr;};
      inline const vector<Items::OutputItems> & getOutputItems() const { DARABONBA_PTR_GET_CONST(outputItems_, vector<Items::OutputItems>) };
      inline vector<Items::OutputItems> getOutputItems() { DARABONBA_PTR_GET(outputItems_, vector<Items::OutputItems>) };
      inline Items& setOutputItems(const vector<Items::OutputItems> & outputItems) { DARABONBA_PTR_SET_VALUE(outputItems_, outputItems) };
      inline Items& setOutputItems(vector<Items::OutputItems> && outputItems) { DARABONBA_PTR_SET_RVALUE(outputItems_, outputItems) };


      // outputType Field Functions 
      bool hasOutputType() const { return this->outputType_ != nullptr;};
      void deleteOutputType() { this->outputType_ = nullptr;};
      inline string getOutputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
      inline Items& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


      // outputTypeDisplayName Field Functions 
      bool hasOutputTypeDisplayName() const { return this->outputTypeDisplayName_ != nullptr;};
      void deleteOutputTypeDisplayName() { this->outputTypeDisplayName_ = nullptr;};
      inline string getOutputTypeDisplayName() const { DARABONBA_PTR_GET_DEFAULT(outputTypeDisplayName_, "") };
      inline Items& setOutputTypeDisplayName(string outputTypeDisplayName) { DARABONBA_PTR_SET_VALUE(outputTypeDisplayName_, outputTypeDisplayName) };


      // skillOutputId Field Functions 
      bool hasSkillOutputId() const { return this->skillOutputId_ != nullptr;};
      void deleteSkillOutputId() { this->skillOutputId_ = nullptr;};
      inline string getSkillOutputId() const { DARABONBA_PTR_GET_DEFAULT(skillOutputId_, "") };
      inline Items& setSkillOutputId(string skillOutputId) { DARABONBA_PTR_SET_VALUE(skillOutputId_, skillOutputId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Items& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The conversation ID.
      shared_ptr<string> conversationId_ {};
      // The creation time in ISO 8601 format.
      shared_ptr<string> gmtCreate_ {};
      // The update time in ISO 8601 format.
      shared_ptr<string> gmtModified_ {};
      // The output name.
      shared_ptr<string> name_ {};
      // The name of the digital employee (operating object).
      shared_ptr<string> operatingObjectName_ {};
      // The output ID.
      shared_ptr<string> outputId_ {};
      // The output detail list.
      shared_ptr<vector<Items::OutputItems>> outputItems_ {};
      // The output type: `conversation/skill/task`.
      shared_ptr<string> outputType_ {};
      // The internationalized display name of the output type.
      shared_ptr<string> outputTypeDisplayName_ {};
      // The skill output ID.
      shared_ptr<string> skillOutputId_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListOutputFilesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListOutputFilesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListOutputFilesResponseBody::Items>) };
    inline vector<ListOutputFilesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListOutputFilesResponseBody::Items>) };
    inline ListOutputFilesResponseBody& setItems(const vector<ListOutputFilesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListOutputFilesResponseBody& setItems(vector<ListOutputFilesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListOutputFilesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListOutputFilesResponseBody& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListOutputFilesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOutputFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListOutputFilesResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The output list.
    shared_ptr<vector<ListOutputFilesResponseBody::Items>> items_ {};
    // The prompt message.
    shared_ptr<string> message_ {};
    // The current page number.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
    // The total number of outputs that match the specified conditions.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
