// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICATTRIBUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class GetTopicAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTopicAttributesResponseBody() = default ;
    GetTopicAttributesResponseBody(const GetTopicAttributesResponseBody &) = default ;
    GetTopicAttributesResponseBody(GetTopicAttributesResponseBody &&) = default ;
    GetTopicAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicAttributesResponseBody() = default ;
    GetTopicAttributesResponseBody& operator=(const GetTopicAttributesResponseBody &) = default ;
    GetTopicAttributesResponseBody& operator=(GetTopicAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EnableSSE, enableSSE_);
        DARABONBA_PTR_TO_JSON(EncryptionEnabled, encryptionEnabled_);
        DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
        DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
        DARABONBA_PTR_TO_JSON(LoggingEnabled, loggingEnabled_);
        DARABONBA_PTR_TO_JSON(MaxMessageSize, maxMessageSize_);
        DARABONBA_PTR_TO_JSON(MessageCount, messageCount_);
        DARABONBA_PTR_TO_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
        DARABONBA_PTR_TO_JSON(SseAlgorithm, sseAlgorithm_);
        DARABONBA_PTR_TO_JSON(SseType, sseType_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TopicInnerUrl, topicInnerUrl_);
        DARABONBA_PTR_TO_JSON(TopicName, topicName_);
        DARABONBA_PTR_TO_JSON(TopicType, topicType_);
        DARABONBA_PTR_TO_JSON(TopicUrl, topicUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EnableSSE, enableSSE_);
        DARABONBA_PTR_FROM_JSON(EncryptionEnabled, encryptionEnabled_);
        DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
        DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
        DARABONBA_PTR_FROM_JSON(LoggingEnabled, loggingEnabled_);
        DARABONBA_PTR_FROM_JSON(MaxMessageSize, maxMessageSize_);
        DARABONBA_PTR_FROM_JSON(MessageCount, messageCount_);
        DARABONBA_PTR_FROM_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
        DARABONBA_PTR_FROM_JSON(SseAlgorithm, sseAlgorithm_);
        DARABONBA_PTR_FROM_JSON(SseType, sseType_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TopicInnerUrl, topicInnerUrl_);
        DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
        DARABONBA_PTR_FROM_JSON(TopicType, topicType_);
        DARABONBA_PTR_FROM_JSON(TopicUrl, topicUrl_);
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
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The key of the tag.
        shared_ptr<string> tagKey_ {};
        // The value of the tag.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->enableSSE_ == nullptr && this->encryptionEnabled_ == nullptr && this->kmsKeyId_ == nullptr && this->lastModifyTime_ == nullptr && this->loggingEnabled_ == nullptr
        && this->maxMessageSize_ == nullptr && this->messageCount_ == nullptr && this->messageRetentionPeriod_ == nullptr && this->sseAlgorithm_ == nullptr && this->sseType_ == nullptr
        && this->tags_ == nullptr && this->topicInnerUrl_ == nullptr && this->topicName_ == nullptr && this->topicType_ == nullptr && this->topicUrl_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // enableSSE Field Functions 
      bool hasEnableSSE() const { return this->enableSSE_ != nullptr;};
      void deleteEnableSSE() { this->enableSSE_ = nullptr;};
      inline bool getEnableSSE() const { DARABONBA_PTR_GET_DEFAULT(enableSSE_, false) };
      inline Data& setEnableSSE(bool enableSSE) { DARABONBA_PTR_SET_VALUE(enableSSE_, enableSSE) };


      // encryptionEnabled Field Functions 
      bool hasEncryptionEnabled() const { return this->encryptionEnabled_ != nullptr;};
      void deleteEncryptionEnabled() { this->encryptionEnabled_ = nullptr;};
      inline bool getEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(encryptionEnabled_, false) };
      inline Data& setEncryptionEnabled(bool encryptionEnabled) { DARABONBA_PTR_SET_VALUE(encryptionEnabled_, encryptionEnabled) };


      // kmsKeyId Field Functions 
      bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
      void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
      inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
      inline Data& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


      // lastModifyTime Field Functions 
      bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
      void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
      inline int64_t getLastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, 0L) };
      inline Data& setLastModifyTime(int64_t lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


      // loggingEnabled Field Functions 
      bool hasLoggingEnabled() const { return this->loggingEnabled_ != nullptr;};
      void deleteLoggingEnabled() { this->loggingEnabled_ = nullptr;};
      inline bool getLoggingEnabled() const { DARABONBA_PTR_GET_DEFAULT(loggingEnabled_, false) };
      inline Data& setLoggingEnabled(bool loggingEnabled) { DARABONBA_PTR_SET_VALUE(loggingEnabled_, loggingEnabled) };


      // maxMessageSize Field Functions 
      bool hasMaxMessageSize() const { return this->maxMessageSize_ != nullptr;};
      void deleteMaxMessageSize() { this->maxMessageSize_ = nullptr;};
      inline int64_t getMaxMessageSize() const { DARABONBA_PTR_GET_DEFAULT(maxMessageSize_, 0L) };
      inline Data& setMaxMessageSize(int64_t maxMessageSize) { DARABONBA_PTR_SET_VALUE(maxMessageSize_, maxMessageSize) };


      // messageCount Field Functions 
      bool hasMessageCount() const { return this->messageCount_ != nullptr;};
      void deleteMessageCount() { this->messageCount_ = nullptr;};
      inline int64_t getMessageCount() const { DARABONBA_PTR_GET_DEFAULT(messageCount_, 0L) };
      inline Data& setMessageCount(int64_t messageCount) { DARABONBA_PTR_SET_VALUE(messageCount_, messageCount) };


      // messageRetentionPeriod Field Functions 
      bool hasMessageRetentionPeriod() const { return this->messageRetentionPeriod_ != nullptr;};
      void deleteMessageRetentionPeriod() { this->messageRetentionPeriod_ = nullptr;};
      inline int64_t getMessageRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(messageRetentionPeriod_, 0L) };
      inline Data& setMessageRetentionPeriod(int64_t messageRetentionPeriod) { DARABONBA_PTR_SET_VALUE(messageRetentionPeriod_, messageRetentionPeriod) };


      // sseAlgorithm Field Functions 
      bool hasSseAlgorithm() const { return this->sseAlgorithm_ != nullptr;};
      void deleteSseAlgorithm() { this->sseAlgorithm_ = nullptr;};
      inline string getSseAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(sseAlgorithm_, "") };
      inline Data& setSseAlgorithm(string sseAlgorithm) { DARABONBA_PTR_SET_VALUE(sseAlgorithm_, sseAlgorithm) };


      // sseType Field Functions 
      bool hasSseType() const { return this->sseType_ != nullptr;};
      void deleteSseType() { this->sseType_ = nullptr;};
      inline string getSseType() const { DARABONBA_PTR_GET_DEFAULT(sseType_, "") };
      inline Data& setSseType(string sseType) { DARABONBA_PTR_SET_VALUE(sseType_, sseType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
      inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
      inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // topicInnerUrl Field Functions 
      bool hasTopicInnerUrl() const { return this->topicInnerUrl_ != nullptr;};
      void deleteTopicInnerUrl() { this->topicInnerUrl_ = nullptr;};
      inline string getTopicInnerUrl() const { DARABONBA_PTR_GET_DEFAULT(topicInnerUrl_, "") };
      inline Data& setTopicInnerUrl(string topicInnerUrl) { DARABONBA_PTR_SET_VALUE(topicInnerUrl_, topicInnerUrl) };


      // topicName Field Functions 
      bool hasTopicName() const { return this->topicName_ != nullptr;};
      void deleteTopicName() { this->topicName_ = nullptr;};
      inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
      inline Data& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


      // topicType Field Functions 
      bool hasTopicType() const { return this->topicType_ != nullptr;};
      void deleteTopicType() { this->topicType_ = nullptr;};
      inline string getTopicType() const { DARABONBA_PTR_GET_DEFAULT(topicType_, "") };
      inline Data& setTopicType(string topicType) { DARABONBA_PTR_SET_VALUE(topicType_, topicType) };


      // topicUrl Field Functions 
      bool hasTopicUrl() const { return this->topicUrl_ != nullptr;};
      void deleteTopicUrl() { this->topicUrl_ = nullptr;};
      inline string getTopicUrl() const { DARABONBA_PTR_GET_DEFAULT(topicUrl_, "") };
      inline Data& setTopicUrl(string topicUrl) { DARABONBA_PTR_SET_VALUE(topicUrl_, topicUrl) };


    protected:
      // The time when the topic was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<bool> enableSSE_ {};
      shared_ptr<bool> encryptionEnabled_ {};
      shared_ptr<string> kmsKeyId_ {};
      // The most recent time when the topic attributes were modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> lastModifyTime_ {};
      // Indicates whether the Log Management feature is enabled. Valid values:
      // 
      // - True: Enabled.
      // 
      // - False: Disabled.
      shared_ptr<bool> loggingEnabled_ {};
      // The maximum length of the message body sent to the topic. Unit: bytes.
      shared_ptr<int64_t> maxMessageSize_ {};
      // The number of messages in the topic.
      shared_ptr<int64_t> messageCount_ {};
      // The maximum duration for which a message is retained in the topic. After the period of time specified by this parameter elapses since the message is sent to the topic, the message is deleted regardless of whether it is successfully pushed to the user. Unit: seconds.
      shared_ptr<int64_t> messageRetentionPeriod_ {};
      shared_ptr<string> sseAlgorithm_ {};
      shared_ptr<string> sseType_ {};
      // The list of resource tags.
      shared_ptr<vector<Data::Tags>> tags_ {};
      shared_ptr<string> topicInnerUrl_ {};
      // The name of the topic.
      shared_ptr<string> topicName_ {};
      // The type of the topic. Valid values:
      //    * normal: normal topic
      //    * fifo: FIFO topic
      shared_ptr<string> topicType_ {};
      shared_ptr<string> topicUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetTopicAttributesResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTopicAttributesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTopicAttributesResponseBody::Data) };
    inline GetTopicAttributesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTopicAttributesResponseBody::Data) };
    inline GetTopicAttributesResponseBody& setData(const GetTopicAttributesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTopicAttributesResponseBody& setData(GetTopicAttributesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTopicAttributesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTopicAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTopicAttributesResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTopicAttributesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<int64_t> code_ {};
    // The response data.
    shared_ptr<GetTopicAttributesResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The response status.
    shared_ptr<string> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
