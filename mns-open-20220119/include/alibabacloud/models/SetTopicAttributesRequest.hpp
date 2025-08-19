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
      DARABONBA_PTR_TO_JSON(MaxMessageSize, maxMessageSize_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, SetTopicAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableLogging, enableLogging_);
      DARABONBA_PTR_FROM_JSON(MaxMessageSize, maxMessageSize_);
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
    virtual bool empty() const override { this->enableLogging_ != nullptr
        && this->maxMessageSize_ != nullptr && this->topicName_ != nullptr; };
    // enableLogging Field Functions 
    bool hasEnableLogging() const { return this->enableLogging_ != nullptr;};
    void deleteEnableLogging() { this->enableLogging_ = nullptr;};
    inline bool enableLogging() const { DARABONBA_PTR_GET_DEFAULT(enableLogging_, false) };
    inline SetTopicAttributesRequest& setEnableLogging(bool enableLogging) { DARABONBA_PTR_SET_VALUE(enableLogging_, enableLogging) };


    // maxMessageSize Field Functions 
    bool hasMaxMessageSize() const { return this->maxMessageSize_ != nullptr;};
    void deleteMaxMessageSize() { this->maxMessageSize_ = nullptr;};
    inline int64_t maxMessageSize() const { DARABONBA_PTR_GET_DEFAULT(maxMessageSize_, 0L) };
    inline SetTopicAttributesRequest& setMaxMessageSize(int64_t maxMessageSize) { DARABONBA_PTR_SET_VALUE(maxMessageSize_, maxMessageSize) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline SetTopicAttributesRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // Specifies whether to enable the log management feature. Valid values:
    // 
    // *   true: enabled.
    // *   false: disabled. Default value: false.
    std::shared_ptr<bool> enableLogging_ = nullptr;
    // The maximum length of the message that is sent to the topic. Valid values: 1024 to 65536. Unit: bytes. Default value: 65536.
    std::shared_ptr<int64_t> maxMessageSize_ = nullptr;
    // The name of the topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
