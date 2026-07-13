// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOPICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETOPICREQUEST_HPP_
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
  class CreateTopicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTopicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableLogging, enableLogging_);
      DARABONBA_PTR_TO_JSON(EnableSSE, enableSSE_);
      DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(MaxMessageSize, maxMessageSize_);
      DARABONBA_PTR_TO_JSON(SseAlgorithm, sseAlgorithm_);
      DARABONBA_PTR_TO_JSON(SseType, sseType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
      DARABONBA_PTR_TO_JSON(TopicType, topicType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTopicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableLogging, enableLogging_);
      DARABONBA_PTR_FROM_JSON(EnableSSE, enableSSE_);
      DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(MaxMessageSize, maxMessageSize_);
      DARABONBA_PTR_FROM_JSON(SseAlgorithm, sseAlgorithm_);
      DARABONBA_PTR_FROM_JSON(SseType, sseType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
      DARABONBA_PTR_FROM_JSON(TopicType, topicType_);
    };
    CreateTopicRequest() = default ;
    CreateTopicRequest(const CreateTopicRequest &) = default ;
    CreateTopicRequest(CreateTopicRequest &&) = default ;
    CreateTopicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTopicRequest() = default ;
    CreateTopicRequest& operator=(const CreateTopicRequest &) = default ;
    CreateTopicRequest& operator=(CreateTopicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag.
      shared_ptr<string> key_ {};
      // The value of the tag.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->enableLogging_ == nullptr
        && this->enableSSE_ == nullptr && this->kmsKeyId_ == nullptr && this->maxMessageSize_ == nullptr && this->sseAlgorithm_ == nullptr && this->sseType_ == nullptr
        && this->tag_ == nullptr && this->topicName_ == nullptr && this->topicType_ == nullptr; };
    // enableLogging Field Functions 
    bool hasEnableLogging() const { return this->enableLogging_ != nullptr;};
    void deleteEnableLogging() { this->enableLogging_ = nullptr;};
    inline bool getEnableLogging() const { DARABONBA_PTR_GET_DEFAULT(enableLogging_, false) };
    inline CreateTopicRequest& setEnableLogging(bool enableLogging) { DARABONBA_PTR_SET_VALUE(enableLogging_, enableLogging) };


    // enableSSE Field Functions 
    bool hasEnableSSE() const { return this->enableSSE_ != nullptr;};
    void deleteEnableSSE() { this->enableSSE_ = nullptr;};
    inline bool getEnableSSE() const { DARABONBA_PTR_GET_DEFAULT(enableSSE_, false) };
    inline CreateTopicRequest& setEnableSSE(bool enableSSE) { DARABONBA_PTR_SET_VALUE(enableSSE_, enableSSE) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline CreateTopicRequest& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // maxMessageSize Field Functions 
    bool hasMaxMessageSize() const { return this->maxMessageSize_ != nullptr;};
    void deleteMaxMessageSize() { this->maxMessageSize_ = nullptr;};
    inline int64_t getMaxMessageSize() const { DARABONBA_PTR_GET_DEFAULT(maxMessageSize_, 0L) };
    inline CreateTopicRequest& setMaxMessageSize(int64_t maxMessageSize) { DARABONBA_PTR_SET_VALUE(maxMessageSize_, maxMessageSize) };


    // sseAlgorithm Field Functions 
    bool hasSseAlgorithm() const { return this->sseAlgorithm_ != nullptr;};
    void deleteSseAlgorithm() { this->sseAlgorithm_ = nullptr;};
    inline string getSseAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(sseAlgorithm_, "") };
    inline CreateTopicRequest& setSseAlgorithm(string sseAlgorithm) { DARABONBA_PTR_SET_VALUE(sseAlgorithm_, sseAlgorithm) };


    // sseType Field Functions 
    bool hasSseType() const { return this->sseType_ != nullptr;};
    void deleteSseType() { this->sseType_ = nullptr;};
    inline string getSseType() const { DARABONBA_PTR_GET_DEFAULT(sseType_, "") };
    inline CreateTopicRequest& setSseType(string sseType) { DARABONBA_PTR_SET_VALUE(sseType_, sseType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateTopicRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateTopicRequest::Tag>) };
    inline vector<CreateTopicRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateTopicRequest::Tag>) };
    inline CreateTopicRequest& setTag(const vector<CreateTopicRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateTopicRequest& setTag(vector<CreateTopicRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline CreateTopicRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    // topicType Field Functions 
    bool hasTopicType() const { return this->topicType_ != nullptr;};
    void deleteTopicType() { this->topicType_ = nullptr;};
    inline string getTopicType() const { DARABONBA_PTR_GET_DEFAULT(topicType_, "") };
    inline CreateTopicRequest& setTopicType(string topicType) { DARABONBA_PTR_SET_VALUE(topicType_, topicType) };


  protected:
    // Specifies whether to enable the log management feature. Valid values:
    // 
    // - true: Enabled.
    // 
    // - false: Disabled.
    // Default value: false.
    shared_ptr<bool> enableLogging_ {};
    shared_ptr<bool> enableSSE_ {};
    shared_ptr<string> kmsKeyId_ {};
    // The maximum length of the message body sent to the topic. Valid values: 1024 to 65536. Unit: bytes. Default value: 65536.
    shared_ptr<int64_t> maxMessageSize_ {};
    shared_ptr<string> sseAlgorithm_ {};
    shared_ptr<string> sseType_ {};
    // The list of resource tags.
    shared_ptr<vector<CreateTopicRequest::Tag>> tag_ {};
    // The name of the topic to create.
    // 
    // This parameter is required.
    shared_ptr<string> topicName_ {};
    // The type of the topic. Valid values:
    //    * normal: normal topic
    //    * fifo: FIFO topic
    shared_ptr<string> topicType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
