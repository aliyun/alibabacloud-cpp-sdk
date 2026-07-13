// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETTOPICATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETTOPICATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class SetTopicAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetTopicAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableLogging, enableLogging_);
      DARABONBA_PTR_TO_JSON(EnableSSE, enableSSE_);
      DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(MaxMessageSize, maxMessageSize_);
      DARABONBA_PTR_TO_JSON(SseAlgorithm, sseAlgorithm_);
      DARABONBA_PTR_TO_JSON(SseType, sseType_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, SetTopicAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableLogging, enableLogging_);
      DARABONBA_PTR_FROM_JSON(EnableSSE, enableSSE_);
      DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(MaxMessageSize, maxMessageSize_);
      DARABONBA_PTR_FROM_JSON(SseAlgorithm, sseAlgorithm_);
      DARABONBA_PTR_FROM_JSON(SseType, sseType_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    SetTopicAttributesRequest() = default ;
    SetTopicAttributesRequest(const SetTopicAttributesRequest &) = default ;
    SetTopicAttributesRequest(SetTopicAttributesRequest &&) = default ;
    SetTopicAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetTopicAttributesRequest() = default ;
    SetTopicAttributesRequest& operator=(const SetTopicAttributesRequest &) = default ;
    SetTopicAttributesRequest& operator=(SetTopicAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableLogging_ == nullptr
        && this->enableSSE_ == nullptr && this->kmsKeyId_ == nullptr && this->maxMessageSize_ == nullptr && this->sseAlgorithm_ == nullptr && this->sseType_ == nullptr
        && this->topicName_ == nullptr; };
    // enableLogging Field Functions 
    bool hasEnableLogging() const { return this->enableLogging_ != nullptr;};
    void deleteEnableLogging() { this->enableLogging_ = nullptr;};
    inline bool getEnableLogging() const { DARABONBA_PTR_GET_DEFAULT(enableLogging_, false) };
    inline SetTopicAttributesRequest& setEnableLogging(bool enableLogging) { DARABONBA_PTR_SET_VALUE(enableLogging_, enableLogging) };


    // enableSSE Field Functions 
    bool hasEnableSSE() const { return this->enableSSE_ != nullptr;};
    void deleteEnableSSE() { this->enableSSE_ = nullptr;};
    inline bool getEnableSSE() const { DARABONBA_PTR_GET_DEFAULT(enableSSE_, false) };
    inline SetTopicAttributesRequest& setEnableSSE(bool enableSSE) { DARABONBA_PTR_SET_VALUE(enableSSE_, enableSSE) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline SetTopicAttributesRequest& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // maxMessageSize Field Functions 
    bool hasMaxMessageSize() const { return this->maxMessageSize_ != nullptr;};
    void deleteMaxMessageSize() { this->maxMessageSize_ = nullptr;};
    inline int64_t getMaxMessageSize() const { DARABONBA_PTR_GET_DEFAULT(maxMessageSize_, 0L) };
    inline SetTopicAttributesRequest& setMaxMessageSize(int64_t maxMessageSize) { DARABONBA_PTR_SET_VALUE(maxMessageSize_, maxMessageSize) };


    // sseAlgorithm Field Functions 
    bool hasSseAlgorithm() const { return this->sseAlgorithm_ != nullptr;};
    void deleteSseAlgorithm() { this->sseAlgorithm_ = nullptr;};
    inline string getSseAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(sseAlgorithm_, "") };
    inline SetTopicAttributesRequest& setSseAlgorithm(string sseAlgorithm) { DARABONBA_PTR_SET_VALUE(sseAlgorithm_, sseAlgorithm) };


    // sseType Field Functions 
    bool hasSseType() const { return this->sseType_ != nullptr;};
    void deleteSseType() { this->sseType_ = nullptr;};
    inline string getSseType() const { DARABONBA_PTR_GET_DEFAULT(sseType_, "") };
    inline SetTopicAttributesRequest& setSseType(string sseType) { DARABONBA_PTR_SET_VALUE(sseType_, sseType) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline SetTopicAttributesRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


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
    // The name of the topic.
    // 
    // This parameter is required.
    shared_ptr<string> topicName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
