// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class DescribeRecordingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NeedVoiceSliceRecording, needVoiceSliceRecording_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NeedVoiceSliceRecording, needVoiceSliceRecording_);
    };
    DescribeRecordingRequest() = default ;
    DescribeRecordingRequest(const DescribeRecordingRequest &) = default ;
    DescribeRecordingRequest(DescribeRecordingRequest &&) = default ;
    DescribeRecordingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordingRequest() = default ;
    DescribeRecordingRequest& operator=(const DescribeRecordingRequest &) = default ;
    DescribeRecordingRequest& operator=(DescribeRecordingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversationId_ == nullptr
        && this->instanceId_ == nullptr && this->needVoiceSliceRecording_ == nullptr; };
    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline DescribeRecordingRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRecordingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // needVoiceSliceRecording Field Functions 
    bool hasNeedVoiceSliceRecording() const { return this->needVoiceSliceRecording_ != nullptr;};
    void deleteNeedVoiceSliceRecording() { this->needVoiceSliceRecording_ = nullptr;};
    inline bool getNeedVoiceSliceRecording() const { DARABONBA_PTR_GET_DEFAULT(needVoiceSliceRecording_, false) };
    inline DescribeRecordingRequest& setNeedVoiceSliceRecording(bool needVoiceSliceRecording) { DARABONBA_PTR_SET_VALUE(needVoiceSliceRecording_, needVoiceSliceRecording) };


  protected:
    // The session ID.
    // 
    // This parameter is required.
    shared_ptr<string> conversationId_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> needVoiceSliceRecording_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
