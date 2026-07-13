// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class GetMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMessageResponseBody() = default ;
    GetMessageResponseBody(const GetMessageResponseBody &) = default ;
    GetMessageResponseBody(GetMessageResponseBody &&) = default ;
    GetMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageResponseBody() = default ;
    GetMessageResponseBody& operator=(const GetMessageResponseBody &) = default ;
    GetMessageResponseBody& operator=(GetMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MessageContent, messageContent_);
        DARABONBA_PTR_TO_JSON(MessageId, messageId_);
        DARABONBA_PTR_TO_JSON(MessageLevel, messageLevel_);
        DARABONBA_PTR_TO_JSON(MessageName, messageName_);
        DARABONBA_PTR_TO_JSON(MessageSourceId, messageSourceId_);
        DARABONBA_PTR_TO_JSON(MessageSourceRegionId, messageSourceRegionId_);
        DARABONBA_PTR_TO_JSON(MessageSourceType, messageSourceType_);
        DARABONBA_PTR_TO_JSON(MessageTime, messageTime_);
        DARABONBA_PTR_TO_JSON(MessageType, messageType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MessageContent, messageContent_);
        DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
        DARABONBA_PTR_FROM_JSON(MessageLevel, messageLevel_);
        DARABONBA_PTR_FROM_JSON(MessageName, messageName_);
        DARABONBA_PTR_FROM_JSON(MessageSourceId, messageSourceId_);
        DARABONBA_PTR_FROM_JSON(MessageSourceRegionId, messageSourceRegionId_);
        DARABONBA_PTR_FROM_JSON(MessageSourceType, messageSourceType_);
        DARABONBA_PTR_FROM_JSON(MessageTime, messageTime_);
        DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->messageContent_ == nullptr
        && this->messageId_ == nullptr && this->messageLevel_ == nullptr && this->messageName_ == nullptr && this->messageSourceId_ == nullptr && this->messageSourceRegionId_ == nullptr
        && this->messageSourceType_ == nullptr && this->messageTime_ == nullptr && this->messageType_ == nullptr; };
      // messageContent Field Functions 
      bool hasMessageContent() const { return this->messageContent_ != nullptr;};
      void deleteMessageContent() { this->messageContent_ = nullptr;};
      inline string getMessageContent() const { DARABONBA_PTR_GET_DEFAULT(messageContent_, "") };
      inline Data& setMessageContent(string messageContent) { DARABONBA_PTR_SET_VALUE(messageContent_, messageContent) };


      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
      inline Data& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


      // messageLevel Field Functions 
      bool hasMessageLevel() const { return this->messageLevel_ != nullptr;};
      void deleteMessageLevel() { this->messageLevel_ = nullptr;};
      inline string getMessageLevel() const { DARABONBA_PTR_GET_DEFAULT(messageLevel_, "") };
      inline Data& setMessageLevel(string messageLevel) { DARABONBA_PTR_SET_VALUE(messageLevel_, messageLevel) };


      // messageName Field Functions 
      bool hasMessageName() const { return this->messageName_ != nullptr;};
      void deleteMessageName() { this->messageName_ = nullptr;};
      inline string getMessageName() const { DARABONBA_PTR_GET_DEFAULT(messageName_, "") };
      inline Data& setMessageName(string messageName) { DARABONBA_PTR_SET_VALUE(messageName_, messageName) };


      // messageSourceId Field Functions 
      bool hasMessageSourceId() const { return this->messageSourceId_ != nullptr;};
      void deleteMessageSourceId() { this->messageSourceId_ = nullptr;};
      inline string getMessageSourceId() const { DARABONBA_PTR_GET_DEFAULT(messageSourceId_, "") };
      inline Data& setMessageSourceId(string messageSourceId) { DARABONBA_PTR_SET_VALUE(messageSourceId_, messageSourceId) };


      // messageSourceRegionId Field Functions 
      bool hasMessageSourceRegionId() const { return this->messageSourceRegionId_ != nullptr;};
      void deleteMessageSourceRegionId() { this->messageSourceRegionId_ = nullptr;};
      inline string getMessageSourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(messageSourceRegionId_, "") };
      inline Data& setMessageSourceRegionId(string messageSourceRegionId) { DARABONBA_PTR_SET_VALUE(messageSourceRegionId_, messageSourceRegionId) };


      // messageSourceType Field Functions 
      bool hasMessageSourceType() const { return this->messageSourceType_ != nullptr;};
      void deleteMessageSourceType() { this->messageSourceType_ = nullptr;};
      inline string getMessageSourceType() const { DARABONBA_PTR_GET_DEFAULT(messageSourceType_, "") };
      inline Data& setMessageSourceType(string messageSourceType) { DARABONBA_PTR_SET_VALUE(messageSourceType_, messageSourceType) };


      // messageTime Field Functions 
      bool hasMessageTime() const { return this->messageTime_ != nullptr;};
      void deleteMessageTime() { this->messageTime_ = nullptr;};
      inline int64_t getMessageTime() const { DARABONBA_PTR_GET_DEFAULT(messageTime_, 0L) };
      inline Data& setMessageTime(int64_t messageTime) { DARABONBA_PTR_SET_VALUE(messageTime_, messageTime) };


      // messageType Field Functions 
      bool hasMessageType() const { return this->messageType_ != nullptr;};
      void deleteMessageType() { this->messageType_ = nullptr;};
      inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
      inline Data& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    protected:
      // Message content.
      shared_ptr<string> messageContent_ {};
      // Message ID.
      shared_ptr<string> messageId_ {};
      // Message level.
      shared_ptr<string> messageLevel_ {};
      // Message name.
      shared_ptr<string> messageName_ {};
      // Message source ID.
      shared_ptr<string> messageSourceId_ {};
      // Message source region ID.
      shared_ptr<string> messageSourceRegionId_ {};
      // Message source type.
      shared_ptr<string> messageSourceType_ {};
      // Message time.
      shared_ptr<int64_t> messageTime_ {};
      // Message type.
      shared_ptr<string> messageType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMessageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMessageResponseBody::Data) };
    inline GetMessageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMessageResponseBody::Data) };
    inline GetMessageResponseBody& setData(const GetMessageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMessageResponseBody& setData(GetMessageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<GetMessageResponseBody::Data> data_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
