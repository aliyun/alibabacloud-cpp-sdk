// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHATMESSAGECONTENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHATMESSAGECONTENTSRESPONSEBODY_HPP_
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
  class ListChatMessageContentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChatMessageContentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListChatMessageContentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListChatMessageContentsResponseBody() = default ;
    ListChatMessageContentsResponseBody(const ListChatMessageContentsResponseBody &) = default ;
    ListChatMessageContentsResponseBody(ListChatMessageContentsResponseBody &&) = default ;
    ListChatMessageContentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChatMessageContentsResponseBody() = default ;
    ListChatMessageContentsResponseBody& operator=(const ListChatMessageContentsResponseBody &) = default ;
    ListChatMessageContentsResponseBody& operator=(ListChatMessageContentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(attachments, attachments_);
        DARABONBA_PTR_TO_JSON(messageId, messageId_);
        DARABONBA_PTR_TO_JSON(messageType, messageType_);
        DARABONBA_PTR_TO_JSON(recordId, recordId_);
        DARABONBA_PTR_TO_JSON(senderId, senderId_);
        DARABONBA_PTR_TO_JSON(senderName, senderName_);
        DARABONBA_PTR_TO_JSON(sentAt, sentAt_);
        DARABONBA_PTR_TO_JSON(text, text_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(attachments, attachments_);
        DARABONBA_PTR_FROM_JSON(messageId, messageId_);
        DARABONBA_PTR_FROM_JSON(messageType, messageType_);
        DARABONBA_PTR_FROM_JSON(recordId, recordId_);
        DARABONBA_PTR_FROM_JSON(senderId, senderId_);
        DARABONBA_PTR_FROM_JSON(senderName, senderName_);
        DARABONBA_PTR_FROM_JSON(sentAt, sentAt_);
        DARABONBA_PTR_FROM_JSON(text, text_);
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
          DARABONBA_PTR_TO_JSON(charCount, charCount_);
          DARABONBA_PTR_TO_JSON(chunkCount, chunkCount_);
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(emptyReason, emptyReason_);
          DARABONBA_PTR_TO_JSON(failureCode, failureCode_);
          DARABONBA_PTR_TO_JSON(failureReason, failureReason_);
          DARABONBA_PTR_TO_JSON(fileName, fileName_);
          DARABONBA_PTR_TO_JSON(found, found_);
          DARABONBA_PTR_TO_JSON(messageId, messageId_);
          DARABONBA_PTR_TO_JSON(modality, modality_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(truncated, truncated_);
        };
        friend void from_json(const Darabonba::Json& j, Attachments& obj) { 
          DARABONBA_PTR_FROM_JSON(attachmentId, attachmentId_);
          DARABONBA_PTR_FROM_JSON(charCount, charCount_);
          DARABONBA_PTR_FROM_JSON(chunkCount, chunkCount_);
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(emptyReason, emptyReason_);
          DARABONBA_PTR_FROM_JSON(failureCode, failureCode_);
          DARABONBA_PTR_FROM_JSON(failureReason, failureReason_);
          DARABONBA_PTR_FROM_JSON(fileName, fileName_);
          DARABONBA_PTR_FROM_JSON(found, found_);
          DARABONBA_PTR_FROM_JSON(messageId, messageId_);
          DARABONBA_PTR_FROM_JSON(modality, modality_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(truncated, truncated_);
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
        && this->charCount_ == nullptr && this->chunkCount_ == nullptr && this->content_ == nullptr && this->emptyReason_ == nullptr && this->failureCode_ == nullptr
        && this->failureReason_ == nullptr && this->fileName_ == nullptr && this->found_ == nullptr && this->messageId_ == nullptr && this->modality_ == nullptr
        && this->status_ == nullptr && this->truncated_ == nullptr; };
        // attachmentId Field Functions 
        bool hasAttachmentId() const { return this->attachmentId_ != nullptr;};
        void deleteAttachmentId() { this->attachmentId_ = nullptr;};
        inline string getAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(attachmentId_, "") };
        inline Attachments& setAttachmentId(string attachmentId) { DARABONBA_PTR_SET_VALUE(attachmentId_, attachmentId) };


        // charCount Field Functions 
        bool hasCharCount() const { return this->charCount_ != nullptr;};
        void deleteCharCount() { this->charCount_ = nullptr;};
        inline int64_t getCharCount() const { DARABONBA_PTR_GET_DEFAULT(charCount_, 0L) };
        inline Attachments& setCharCount(int64_t charCount) { DARABONBA_PTR_SET_VALUE(charCount_, charCount) };


        // chunkCount Field Functions 
        bool hasChunkCount() const { return this->chunkCount_ != nullptr;};
        void deleteChunkCount() { this->chunkCount_ = nullptr;};
        inline int32_t getChunkCount() const { DARABONBA_PTR_GET_DEFAULT(chunkCount_, 0) };
        inline Attachments& setChunkCount(int32_t chunkCount) { DARABONBA_PTR_SET_VALUE(chunkCount_, chunkCount) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Attachments& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // emptyReason Field Functions 
        bool hasEmptyReason() const { return this->emptyReason_ != nullptr;};
        void deleteEmptyReason() { this->emptyReason_ = nullptr;};
        inline string getEmptyReason() const { DARABONBA_PTR_GET_DEFAULT(emptyReason_, "") };
        inline Attachments& setEmptyReason(string emptyReason) { DARABONBA_PTR_SET_VALUE(emptyReason_, emptyReason) };


        // failureCode Field Functions 
        bool hasFailureCode() const { return this->failureCode_ != nullptr;};
        void deleteFailureCode() { this->failureCode_ = nullptr;};
        inline string getFailureCode() const { DARABONBA_PTR_GET_DEFAULT(failureCode_, "") };
        inline Attachments& setFailureCode(string failureCode) { DARABONBA_PTR_SET_VALUE(failureCode_, failureCode) };


        // failureReason Field Functions 
        bool hasFailureReason() const { return this->failureReason_ != nullptr;};
        void deleteFailureReason() { this->failureReason_ = nullptr;};
        inline string getFailureReason() const { DARABONBA_PTR_GET_DEFAULT(failureReason_, "") };
        inline Attachments& setFailureReason(string failureReason) { DARABONBA_PTR_SET_VALUE(failureReason_, failureReason) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline Attachments& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // found Field Functions 
        bool hasFound() const { return this->found_ != nullptr;};
        void deleteFound() { this->found_ = nullptr;};
        inline bool getFound() const { DARABONBA_PTR_GET_DEFAULT(found_, false) };
        inline Attachments& setFound(bool found) { DARABONBA_PTR_SET_VALUE(found_, found) };


        // messageId Field Functions 
        bool hasMessageId() const { return this->messageId_ != nullptr;};
        void deleteMessageId() { this->messageId_ = nullptr;};
        inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
        inline Attachments& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


        // modality Field Functions 
        bool hasModality() const { return this->modality_ != nullptr;};
        void deleteModality() { this->modality_ = nullptr;};
        inline string getModality() const { DARABONBA_PTR_GET_DEFAULT(modality_, "") };
        inline Attachments& setModality(string modality) { DARABONBA_PTR_SET_VALUE(modality_, modality) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Attachments& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // truncated Field Functions 
        bool hasTruncated() const { return this->truncated_ != nullptr;};
        void deleteTruncated() { this->truncated_ = nullptr;};
        inline bool getTruncated() const { DARABONBA_PTR_GET_DEFAULT(truncated_, false) };
        inline Attachments& setTruncated(bool truncated) { DARABONBA_PTR_SET_VALUE(truncated_, truncated) };


      protected:
        // The ID of the attachment.
        shared_ptr<string> attachmentId_ {};
        // The total number of characters in the content.
        shared_ptr<int64_t> charCount_ {};
        // The number of chunks.
        shared_ptr<int32_t> chunkCount_ {};
        // The content of the user message.
        shared_ptr<string> content_ {};
        // The reason why the content is empty.
        shared_ptr<string> emptyReason_ {};
        // The failure code of the batch. Valid values:
        // - ARREARAGE: The account has an overdue payment.
        // - NO_TARGET: No valid inspection instance is available.
        // - TIMEOUT: The batch execution timed out.
        // - SYSTEM_ERROR: A system error occurred.
        // - ALL_INSTANCE_FAILED: All instance inspections failed.
        // 
        // This parameter is empty if the batch does not fail.
        shared_ptr<string> failureCode_ {};
        // The failure summary of the asynchronous task. This parameter is not returned if no failure information is available. You can use the taskId and requestId to troubleshoot the issue.
        shared_ptr<string> failureReason_ {};
        // The new file name. This parameter is optional. If you do not specify this parameter or specify an empty string, the original file name is retained.
        shared_ptr<string> fileName_ {};
        // Specifies whether the standard package instance is found.
        shared_ptr<bool> found_ {};
        // The ID of the message.
        shared_ptr<string> messageId_ {};
        // The type of the attachment.
        shared_ptr<string> modality_ {};
        // The status of the data source. Valid values:
        // - **1**: Online.
        // - **0**: Offline.
        shared_ptr<string> status_ {};
        // Specifies whether the scan result is truncated.
        shared_ptr<bool> truncated_ {};
      };

      virtual bool empty() const override { return this->attachments_ == nullptr
        && this->messageId_ == nullptr && this->messageType_ == nullptr && this->recordId_ == nullptr && this->senderId_ == nullptr && this->senderName_ == nullptr
        && this->sentAt_ == nullptr && this->text_ == nullptr; };
      // attachments Field Functions 
      bool hasAttachments() const { return this->attachments_ != nullptr;};
      void deleteAttachments() { this->attachments_ = nullptr;};
      inline const vector<Items::Attachments> & getAttachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<Items::Attachments>) };
      inline vector<Items::Attachments> getAttachments() { DARABONBA_PTR_GET(attachments_, vector<Items::Attachments>) };
      inline Items& setAttachments(const vector<Items::Attachments> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
      inline Items& setAttachments(vector<Items::Attachments> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


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


      // recordId Field Functions 
      bool hasRecordId() const { return this->recordId_ != nullptr;};
      void deleteRecordId() { this->recordId_ = nullptr;};
      inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
      inline Items& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


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


      // sentAt Field Functions 
      bool hasSentAt() const { return this->sentAt_ != nullptr;};
      void deleteSentAt() { this->sentAt_ = nullptr;};
      inline string getSentAt() const { DARABONBA_PTR_GET_DEFAULT(sentAt_, "") };
      inline Items& setSentAt(string sentAt) { DARABONBA_PTR_SET_VALUE(sentAt_, sentAt) };


      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline Items& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    protected:
      // The content type. Valid values:
      // - 0: Text.
      // - 1: Image material.
      // - 2: Handwritten text.
      shared_ptr<vector<Items::Attachments>> attachments_ {};
      // The ID of the message.
      shared_ptr<string> messageId_ {};
      // The message type. Valid values:
      // - **MARKDOWN**: Markdown message.
      // - **ACTIONCARD**: Card message.
      // 
      // > Message buttons cannot be used in Markdown messages.
      shared_ptr<string> messageType_ {};
      // The ID of the service record.
      shared_ptr<int64_t> recordId_ {};
      // The DingTalk ID of the customer service representative.
      shared_ptr<string> senderId_ {};
      // The name of the message sender.
      shared_ptr<string> senderName_ {};
      // The time when the message was sent.
      shared_ptr<string> sentAt_ {};
      // The batch text to be translated.
      shared_ptr<string> text_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->hasMore_ == nullptr && this->items_ == nullptr && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->sourceId_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListChatMessageContentsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListChatMessageContentsResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListChatMessageContentsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListChatMessageContentsResponseBody::Items>) };
    inline vector<ListChatMessageContentsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListChatMessageContentsResponseBody::Items>) };
    inline ListChatMessageContentsResponseBody& setItems(const vector<ListChatMessageContentsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListChatMessageContentsResponseBody& setItems(vector<ListChatMessageContentsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListChatMessageContentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListChatMessageContentsResponseBody& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChatMessageContentsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListChatMessageContentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ListChatMessageContentsResponseBody& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListChatMessageContentsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // Specifies whether there is a next page.
    shared_ptr<bool> hasMore_ {};
    // The list of MCP cards.
    shared_ptr<vector<ListChatMessageContentsResponseBody::Items>> items_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The current page number.
    shared_ptr<int32_t> page_ {};
    // The maximum number of data records returned in this request.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the original project.
    shared_ptr<string> sourceId_ {};
    // The total number of records.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
