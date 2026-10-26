// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDAGENTCONVERSATIONMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDAGENTCONVERSATIONMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class SendAgentConversationMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendAgentConversationMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(attachments, attachments_);
      DARABONBA_PTR_TO_JSON(clientContext, clientContext_);
      DARABONBA_PTR_TO_JSON(images, images_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(messageType, messageType_);
      DARABONBA_PTR_TO_JSON(ticketRequestId, ticketRequestId_);
    };
    friend void from_json(const Darabonba::Json& j, SendAgentConversationMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(attachments, attachments_);
      DARABONBA_PTR_FROM_JSON(clientContext, clientContext_);
      DARABONBA_PTR_FROM_JSON(images, images_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(messageType, messageType_);
      DARABONBA_PTR_FROM_JSON(ticketRequestId, ticketRequestId_);
    };
    SendAgentConversationMessageRequest() = default ;
    SendAgentConversationMessageRequest(const SendAgentConversationMessageRequest &) = default ;
    SendAgentConversationMessageRequest(SendAgentConversationMessageRequest &&) = default ;
    SendAgentConversationMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendAgentConversationMessageRequest() = default ;
    SendAgentConversationMessageRequest& operator=(const SendAgentConversationMessageRequest &) = default ;
    SendAgentConversationMessageRequest& operator=(SendAgentConversationMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Images : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Images& obj) { 
        DARABONBA_PTR_TO_JSON(dataBase64, dataBase64_);
        DARABONBA_PTR_TO_JSON(mediaType, mediaType_);
      };
      friend void from_json(const Darabonba::Json& j, Images& obj) { 
        DARABONBA_PTR_FROM_JSON(dataBase64, dataBase64_);
        DARABONBA_PTR_FROM_JSON(mediaType, mediaType_);
      };
      Images() = default ;
      Images(const Images &) = default ;
      Images(Images &&) = default ;
      Images(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Images() = default ;
      Images& operator=(const Images &) = default ;
      Images& operator=(Images &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataBase64_ == nullptr
        && this->mediaType_ == nullptr; };
      // dataBase64 Field Functions 
      bool hasDataBase64() const { return this->dataBase64_ != nullptr;};
      void deleteDataBase64() { this->dataBase64_ = nullptr;};
      inline string getDataBase64() const { DARABONBA_PTR_GET_DEFAULT(dataBase64_, "") };
      inline Images& setDataBase64(string dataBase64) { DARABONBA_PTR_SET_VALUE(dataBase64_, dataBase64) };


      // mediaType Field Functions 
      bool hasMediaType() const { return this->mediaType_ != nullptr;};
      void deleteMediaType() { this->mediaType_ = nullptr;};
      inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
      inline Images& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    protected:
      // This parameter is required.
      shared_ptr<string> dataBase64_ {};
      // This parameter is required.
      shared_ptr<string> mediaType_ {};
    };

    class Attachments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Attachments& obj) { 
        DARABONBA_PTR_TO_JSON(fileName, fileName_);
        DARABONBA_PTR_TO_JSON(keptLines, keptLines_);
        DARABONBA_PTR_TO_JSON(kind, kind_);
        DARABONBA_PTR_TO_JSON(sandboxPath, sandboxPath_);
        DARABONBA_PTR_TO_JSON(sizeBytes, sizeBytes_);
        DARABONBA_PTR_TO_JSON(timeRangeEnd, timeRangeEnd_);
        DARABONBA_PTR_TO_JSON(timeRangeStart, timeRangeStart_);
        DARABONBA_PTR_TO_JSON(totalLines, totalLines_);
      };
      friend void from_json(const Darabonba::Json& j, Attachments& obj) { 
        DARABONBA_PTR_FROM_JSON(fileName, fileName_);
        DARABONBA_PTR_FROM_JSON(keptLines, keptLines_);
        DARABONBA_PTR_FROM_JSON(kind, kind_);
        DARABONBA_PTR_FROM_JSON(sandboxPath, sandboxPath_);
        DARABONBA_PTR_FROM_JSON(sizeBytes, sizeBytes_);
        DARABONBA_PTR_FROM_JSON(timeRangeEnd, timeRangeEnd_);
        DARABONBA_PTR_FROM_JSON(timeRangeStart, timeRangeStart_);
        DARABONBA_PTR_FROM_JSON(totalLines, totalLines_);
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
      virtual bool empty() const override { return this->fileName_ == nullptr
        && this->keptLines_ == nullptr && this->kind_ == nullptr && this->sandboxPath_ == nullptr && this->sizeBytes_ == nullptr && this->timeRangeEnd_ == nullptr
        && this->timeRangeStart_ == nullptr && this->totalLines_ == nullptr; };
      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Attachments& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // keptLines Field Functions 
      bool hasKeptLines() const { return this->keptLines_ != nullptr;};
      void deleteKeptLines() { this->keptLines_ = nullptr;};
      inline int64_t getKeptLines() const { DARABONBA_PTR_GET_DEFAULT(keptLines_, 0L) };
      inline Attachments& setKeptLines(int64_t keptLines) { DARABONBA_PTR_SET_VALUE(keptLines_, keptLines) };


      // kind Field Functions 
      bool hasKind() const { return this->kind_ != nullptr;};
      void deleteKind() { this->kind_ = nullptr;};
      inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
      inline Attachments& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


      // sandboxPath Field Functions 
      bool hasSandboxPath() const { return this->sandboxPath_ != nullptr;};
      void deleteSandboxPath() { this->sandboxPath_ = nullptr;};
      inline string getSandboxPath() const { DARABONBA_PTR_GET_DEFAULT(sandboxPath_, "") };
      inline Attachments& setSandboxPath(string sandboxPath) { DARABONBA_PTR_SET_VALUE(sandboxPath_, sandboxPath) };


      // sizeBytes Field Functions 
      bool hasSizeBytes() const { return this->sizeBytes_ != nullptr;};
      void deleteSizeBytes() { this->sizeBytes_ = nullptr;};
      inline int64_t getSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(sizeBytes_, 0L) };
      inline Attachments& setSizeBytes(int64_t sizeBytes) { DARABONBA_PTR_SET_VALUE(sizeBytes_, sizeBytes) };


      // timeRangeEnd Field Functions 
      bool hasTimeRangeEnd() const { return this->timeRangeEnd_ != nullptr;};
      void deleteTimeRangeEnd() { this->timeRangeEnd_ = nullptr;};
      inline string getTimeRangeEnd() const { DARABONBA_PTR_GET_DEFAULT(timeRangeEnd_, "") };
      inline Attachments& setTimeRangeEnd(string timeRangeEnd) { DARABONBA_PTR_SET_VALUE(timeRangeEnd_, timeRangeEnd) };


      // timeRangeStart Field Functions 
      bool hasTimeRangeStart() const { return this->timeRangeStart_ != nullptr;};
      void deleteTimeRangeStart() { this->timeRangeStart_ = nullptr;};
      inline string getTimeRangeStart() const { DARABONBA_PTR_GET_DEFAULT(timeRangeStart_, "") };
      inline Attachments& setTimeRangeStart(string timeRangeStart) { DARABONBA_PTR_SET_VALUE(timeRangeStart_, timeRangeStart) };


      // totalLines Field Functions 
      bool hasTotalLines() const { return this->totalLines_ != nullptr;};
      void deleteTotalLines() { this->totalLines_ = nullptr;};
      inline int64_t getTotalLines() const { DARABONBA_PTR_GET_DEFAULT(totalLines_, 0L) };
      inline Attachments& setTotalLines(int64_t totalLines) { DARABONBA_PTR_SET_VALUE(totalLines_, totalLines) };


    protected:
      // This parameter is required.
      shared_ptr<string> fileName_ {};
      shared_ptr<int64_t> keptLines_ {};
      // This parameter is required.
      shared_ptr<string> kind_ {};
      // This parameter is required.
      shared_ptr<string> sandboxPath_ {};
      // This parameter is required.
      shared_ptr<int64_t> sizeBytes_ {};
      shared_ptr<string> timeRangeEnd_ {};
      shared_ptr<string> timeRangeStart_ {};
      shared_ptr<int64_t> totalLines_ {};
    };

    virtual bool empty() const override { return this->attachments_ == nullptr
        && this->clientContext_ == nullptr && this->images_ == nullptr && this->message_ == nullptr && this->messageType_ == nullptr && this->ticketRequestId_ == nullptr; };
    // attachments Field Functions 
    bool hasAttachments() const { return this->attachments_ != nullptr;};
    void deleteAttachments() { this->attachments_ = nullptr;};
    inline const vector<SendAgentConversationMessageRequest::Attachments> & getAttachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<SendAgentConversationMessageRequest::Attachments>) };
    inline vector<SendAgentConversationMessageRequest::Attachments> getAttachments() { DARABONBA_PTR_GET(attachments_, vector<SendAgentConversationMessageRequest::Attachments>) };
    inline SendAgentConversationMessageRequest& setAttachments(const vector<SendAgentConversationMessageRequest::Attachments> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
    inline SendAgentConversationMessageRequest& setAttachments(vector<SendAgentConversationMessageRequest::Attachments> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


    // clientContext Field Functions 
    bool hasClientContext() const { return this->clientContext_ != nullptr;};
    void deleteClientContext() { this->clientContext_ = nullptr;};
    inline string getClientContext() const { DARABONBA_PTR_GET_DEFAULT(clientContext_, "") };
    inline SendAgentConversationMessageRequest& setClientContext(string clientContext) { DARABONBA_PTR_SET_VALUE(clientContext_, clientContext) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<SendAgentConversationMessageRequest::Images> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<SendAgentConversationMessageRequest::Images>) };
    inline vector<SendAgentConversationMessageRequest::Images> getImages() { DARABONBA_PTR_GET(images_, vector<SendAgentConversationMessageRequest::Images>) };
    inline SendAgentConversationMessageRequest& setImages(const vector<SendAgentConversationMessageRequest::Images> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline SendAgentConversationMessageRequest& setImages(vector<SendAgentConversationMessageRequest::Images> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SendAgentConversationMessageRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline SendAgentConversationMessageRequest& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // ticketRequestId Field Functions 
    bool hasTicketRequestId() const { return this->ticketRequestId_ != nullptr;};
    void deleteTicketRequestId() { this->ticketRequestId_ = nullptr;};
    inline string getTicketRequestId() const { DARABONBA_PTR_GET_DEFAULT(ticketRequestId_, "") };
    inline SendAgentConversationMessageRequest& setTicketRequestId(string ticketRequestId) { DARABONBA_PTR_SET_VALUE(ticketRequestId_, ticketRequestId) };


  protected:
    shared_ptr<vector<SendAgentConversationMessageRequest::Attachments>> attachments_ {};
    shared_ptr<string> clientContext_ {};
    shared_ptr<vector<SendAgentConversationMessageRequest::Images>> images_ {};
    // This parameter is required.
    shared_ptr<string> message_ {};
    shared_ptr<string> messageType_ {};
    shared_ptr<string> ticketRequestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
