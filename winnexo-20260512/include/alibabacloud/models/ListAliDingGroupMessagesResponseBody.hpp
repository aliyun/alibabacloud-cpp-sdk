// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALIDINGGROUPMESSAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALIDINGGROUPMESSAGESRESPONSEBODY_HPP_
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
  class ListAliDingGroupMessagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAliDingGroupMessagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextTime, nextTime_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAliDingGroupMessagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextTime, nextTime_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListAliDingGroupMessagesResponseBody() = default ;
    ListAliDingGroupMessagesResponseBody(const ListAliDingGroupMessagesResponseBody &) = default ;
    ListAliDingGroupMessagesResponseBody(ListAliDingGroupMessagesResponseBody &&) = default ;
    ListAliDingGroupMessagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAliDingGroupMessagesResponseBody() = default ;
    ListAliDingGroupMessagesResponseBody& operator=(const ListAliDingGroupMessagesResponseBody &) = default ;
    ListAliDingGroupMessagesResponseBody& operator=(ListAliDingGroupMessagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(attachments, attachments_);
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(messageId, messageId_);
        DARABONBA_PTR_TO_JSON(messageType, messageType_);
        DARABONBA_PTR_TO_JSON(senderId, senderId_);
        DARABONBA_PTR_TO_JSON(senderName, senderName_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(attachments, attachments_);
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(messageId, messageId_);
        DARABONBA_PTR_FROM_JSON(messageType, messageType_);
        DARABONBA_PTR_FROM_JSON(senderId, senderId_);
        DARABONBA_PTR_FROM_JSON(senderName, senderName_);
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
      class Attachments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Attachments& obj) { 
          DARABONBA_PTR_TO_JSON(attachmentId, attachmentId_);
          DARABONBA_PTR_TO_JSON(attachmentType, attachmentType_);
          DARABONBA_PTR_TO_JSON(durationMs, durationMs_);
          DARABONBA_PTR_TO_JSON(fileName, fileName_);
          DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
          DARABONBA_PTR_TO_JSON(height, height_);
          DARABONBA_PTR_TO_JSON(mimeType, mimeType_);
          DARABONBA_PTR_TO_JSON(width, width_);
        };
        friend void from_json(const Darabonba::Json& j, Attachments& obj) { 
          DARABONBA_PTR_FROM_JSON(attachmentId, attachmentId_);
          DARABONBA_PTR_FROM_JSON(attachmentType, attachmentType_);
          DARABONBA_PTR_FROM_JSON(durationMs, durationMs_);
          DARABONBA_PTR_FROM_JSON(fileName, fileName_);
          DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
          DARABONBA_PTR_FROM_JSON(height, height_);
          DARABONBA_PTR_FROM_JSON(mimeType, mimeType_);
          DARABONBA_PTR_FROM_JSON(width, width_);
        };
        Attachments() = default ;
        Attachments(const Attachments &) = default ;
        Attachments(Attachments &&) = default ;
        Attachments(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Attachments() = default ;
        Attachments& operator=(const Attachments &) = default ;
        Attachments& operator=(Attachments &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attachmentId_ == nullptr
        && this->attachmentType_ == nullptr && this->durationMs_ == nullptr && this->fileName_ == nullptr && this->fileSize_ == nullptr && this->height_ == nullptr
        && this->mimeType_ == nullptr && this->width_ == nullptr; };
        // attachmentId Field Functions 
        bool hasAttachmentId() const { return this->attachmentId_ != nullptr;};
        void deleteAttachmentId() { this->attachmentId_ = nullptr;};
        inline string getAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(attachmentId_, "") };
        inline Attachments& setAttachmentId(string attachmentId) { DARABONBA_PTR_SET_VALUE(attachmentId_, attachmentId) };


        // attachmentType Field Functions 
        bool hasAttachmentType() const { return this->attachmentType_ != nullptr;};
        void deleteAttachmentType() { this->attachmentType_ = nullptr;};
        inline string getAttachmentType() const { DARABONBA_PTR_GET_DEFAULT(attachmentType_, "") };
        inline Attachments& setAttachmentType(string attachmentType) { DARABONBA_PTR_SET_VALUE(attachmentType_, attachmentType) };


        // durationMs Field Functions 
        bool hasDurationMs() const { return this->durationMs_ != nullptr;};
        void deleteDurationMs() { this->durationMs_ = nullptr;};
        inline int64_t getDurationMs() const { DARABONBA_PTR_GET_DEFAULT(durationMs_, 0L) };
        inline Attachments& setDurationMs(int64_t durationMs) { DARABONBA_PTR_SET_VALUE(durationMs_, durationMs) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline Attachments& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
        inline Attachments& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int64_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
        inline Attachments& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // mimeType Field Functions 
        bool hasMimeType() const { return this->mimeType_ != nullptr;};
        void deleteMimeType() { this->mimeType_ = nullptr;};
        inline string getMimeType() const { DARABONBA_PTR_GET_DEFAULT(mimeType_, "") };
        inline Attachments& setMimeType(string mimeType) { DARABONBA_PTR_SET_VALUE(mimeType_, mimeType) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int64_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
        inline Attachments& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The attachment ID.
        shared_ptr<string> attachmentId_ {};
        // The attachment type.
        shared_ptr<string> attachmentType_ {};
        // The execution duration of the asynchronous task.
        shared_ptr<int64_t> durationMs_ {};
        // The new file name. This parameter is optional. If you do not specify this parameter or set it to an empty string, the original file name is retained.
        shared_ptr<string> fileName_ {};
        // The file size, in **bytes**.
        shared_ptr<int64_t> fileSize_ {};
        // The thumbnail height, in pixels.
        shared_ptr<int64_t> height_ {};
        // The media type. The file name extension is in uppercase, such as XLS, DOC, DOCX, PDF, or XLSX.
        shared_ptr<string> mimeType_ {};
        // The image width, in pixels.
        shared_ptr<int64_t> width_ {};
      };

      virtual bool empty() const override { return this->attachments_ == nullptr
        && this->content_ == nullptr && this->createTime_ == nullptr && this->messageId_ == nullptr && this->messageType_ == nullptr && this->senderId_ == nullptr
        && this->senderName_ == nullptr; };
      // attachments Field Functions 
      bool hasAttachments() const { return this->attachments_ != nullptr;};
      void deleteAttachments() { this->attachments_ = nullptr;};
      inline const vector<Items::Attachments> & getAttachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<Items::Attachments>) };
      inline vector<Items::Attachments> getAttachments() { DARABONBA_PTR_GET(attachments_, vector<Items::Attachments>) };
      inline Items& setAttachments(const vector<Items::Attachments> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
      inline Items& setAttachments(vector<Items::Attachments> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Items& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Items& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
      inline Items& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


      // messageType Field Functions 
      bool hasMessageType() const { return this->messageType_ != nullptr;};
      void deleteMessageType() { this->messageType_ = nullptr;};
      inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
      inline Items& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


      // senderId Field Functions 
      bool hasSenderId() const { return this->senderId_ != nullptr;};
      void deleteSenderId() { this->senderId_ = nullptr;};
      inline string getSenderId() const { DARABONBA_PTR_GET_DEFAULT(senderId_, "") };
      inline Items& setSenderId(string senderId) { DARABONBA_PTR_SET_VALUE(senderId_, senderId) };


      // senderName Field Functions 
      bool hasSenderName() const { return this->senderName_ != nullptr;};
      void deleteSenderName() { this->senderName_ = nullptr;};
      inline string getSenderName() const { DARABONBA_PTR_GET_DEFAULT(senderName_, "") };
      inline Items& setSenderName(string senderName) { DARABONBA_PTR_SET_VALUE(senderName_, senderName) };


    protected:
      // The comment attachments.
      shared_ptr<vector<Items::Attachments>> attachments_ {};
      // The returned content.
      shared_ptr<string> content_ {};
      // The creation time in ISO 8601 format.
      shared_ptr<string> createTime_ {};
      // The message ID.
      shared_ptr<string> messageId_ {};
      // The message type. Valid values:
      // - **MARKDOWN**: Markdown message.
      // - **ACTIONCARD**: card message.
      // 
      // > Markdown messages do not support message buttons.
      shared_ptr<string> messageType_ {};
      // The DingTalk ID of the business-side customer service representative.
      shared_ptr<string> senderId_ {};
      // The name of the message sender.
      shared_ptr<string> senderName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->hasMore_ == nullptr && this->items_ == nullptr && this->message_ == nullptr && this->nextTime_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAliDingGroupMessagesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListAliDingGroupMessagesResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListAliDingGroupMessagesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListAliDingGroupMessagesResponseBody::Items>) };
    inline vector<ListAliDingGroupMessagesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListAliDingGroupMessagesResponseBody::Items>) };
    inline ListAliDingGroupMessagesResponseBody& setItems(const vector<ListAliDingGroupMessagesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListAliDingGroupMessagesResponseBody& setItems(vector<ListAliDingGroupMessagesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAliDingGroupMessagesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextTime Field Functions 
    bool hasNextTime() const { return this->nextTime_ != nullptr;};
    void deleteNextTime() { this->nextTime_ = nullptr;};
    inline string getNextTime() const { DARABONBA_PTR_GET_DEFAULT(nextTime_, "") };
    inline ListAliDingGroupMessagesResponseBody& setNextTime(string nextTime) { DARABONBA_PTR_SET_VALUE(nextTime_, nextTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAliDingGroupMessagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // Indicates whether more pages are available.
    shared_ptr<bool> hasMore_ {};
    // The file information.
    shared_ptr<vector<ListAliDingGroupMessagesResponseBody::Items>> items_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The time when the next plan is scheduled.
    shared_ptr<string> nextTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
