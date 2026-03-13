// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRIGGERINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATETRIGGERINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CreateTriggerInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTriggerInput& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(invocationRole, invocationRole_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(sourceArn, sourceArn_);
      DARABONBA_PTR_TO_JSON(triggerConfig, triggerConfig_);
      DARABONBA_PTR_TO_JSON(triggerName, triggerName_);
      DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTriggerInput& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(invocationRole, invocationRole_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(sourceArn, sourceArn_);
      DARABONBA_PTR_FROM_JSON(triggerConfig, triggerConfig_);
      DARABONBA_PTR_FROM_JSON(triggerName, triggerName_);
      DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
    };
    CreateTriggerInput() = default ;
    CreateTriggerInput(const CreateTriggerInput &) = default ;
    CreateTriggerInput(CreateTriggerInput &&) = default ;
    CreateTriggerInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTriggerInput() = default ;
    CreateTriggerInput& operator=(const CreateTriggerInput &) = default ;
    CreateTriggerInput& operator=(CreateTriggerInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->invocationRole_ == nullptr && this->qualifier_ == nullptr && this->sourceArn_ == nullptr && this->triggerConfig_ == nullptr && this->triggerName_ == nullptr
        && this->triggerType_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTriggerInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // invocationRole Field Functions 
    bool hasInvocationRole() const { return this->invocationRole_ != nullptr;};
    void deleteInvocationRole() { this->invocationRole_ = nullptr;};
    inline string getInvocationRole() const { DARABONBA_PTR_GET_DEFAULT(invocationRole_, "") };
    inline CreateTriggerInput& setInvocationRole(string invocationRole) { DARABONBA_PTR_SET_VALUE(invocationRole_, invocationRole) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline CreateTriggerInput& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // sourceArn Field Functions 
    bool hasSourceArn() const { return this->sourceArn_ != nullptr;};
    void deleteSourceArn() { this->sourceArn_ = nullptr;};
    inline string getSourceArn() const { DARABONBA_PTR_GET_DEFAULT(sourceArn_, "") };
    inline CreateTriggerInput& setSourceArn(string sourceArn) { DARABONBA_PTR_SET_VALUE(sourceArn_, sourceArn) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline string getTriggerConfig() const { DARABONBA_PTR_GET_DEFAULT(triggerConfig_, "") };
    inline CreateTriggerInput& setTriggerConfig(string triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };


    // triggerName Field Functions 
    bool hasTriggerName() const { return this->triggerName_ != nullptr;};
    void deleteTriggerName() { this->triggerName_ = nullptr;};
    inline string getTriggerName() const { DARABONBA_PTR_GET_DEFAULT(triggerName_, "") };
    inline CreateTriggerInput& setTriggerName(string triggerName) { DARABONBA_PTR_SET_VALUE(triggerName_, triggerName) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline CreateTriggerInput& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    // The description of the trigger.
    shared_ptr<string> description_ {};
    // The RAM role that is used by the event source such as Object Storage Service (OSS) to invoke the function.
    shared_ptr<string> invocationRole_ {};
    // The version or alias of the function.
    shared_ptr<string> qualifier_ {};
    // The Alibaba Cloud Resource Name (ARN) of the trigger event source.
    shared_ptr<string> sourceArn_ {};
    // The configurations of the trigger. The configurations vary based on the trigger type. The following items list the data structures for different types of triggers:
    // 
    // *   OSS triggers: [OSSTriggerConfig](https://help.aliyun.com/document_detail/2766465.html).
    // *   Simple Log Service trigger: [LogTriggerConfig](https://help.aliyun.com/document_detail/2618711.html).
    // *   Time triggers: [TimerTriggerConfig](https://help.aliyun.com/document_detail/2754638.html).
    // *   HTTP triggers: [HTTPTriggerConfig](https://help.aliyun.com/document_detail/2766461.html).
    // *   Tablestore triggers: Specify the **SourceArnm** parameter and leave this parameter empty.
    // *   Alibaba Cloud CDN event triggers: [CDNEventsTriggerConfig](https://help.aliyun.com/document_detail/2766462.html).
    // *   MNS topic triggers: [MnsTopicTriggerConfig](https://help.aliyun.com/document_detail/2766464.html).
    // *   EventBridge-based triggers: [EventBridgeTriggerConfig](https://help.aliyun.com/document_detail/2766447.html).
    // 
    // This parameter is required.
    shared_ptr<string> triggerConfig_ {};
    // The name of the trigger. The name can contain only letters, digits, hyphens (-), and underscores (_). The name must be 1 to 128 characters in length and cannot start with a digit or a hyphen (-).
    // 
    // This parameter is required.
    shared_ptr<string> triggerName_ {};
    // The type of the trigger. Valid values:
    // 
    // *   **oss**: OSS event triggers. For more information, see [Overview](https://help.aliyun.com/document_detail/2513613.html).
    // *   **log**: Simple Log Service triggers. For more information, see [Simple Log Service triggers](https://help.aliyun.com/document_detail/2513638.html).
    // *   **timer**: time triggers. For more information, see [Time triggers](https://help.aliyun.com/document_detail/2513611.html).
    // *   **http**: HTTP triggers. For more information, see [Overview](https://help.aliyun.com/document_detail/2513634.html).
    // *   **tablestore**: Tablestore triggers. For more information, see [Tablestore triggers](https://help.aliyun.com/document_detail/2513640.html).
    // *   **cdn_events**: CDN event triggers. For more information, see [Overview](https://help.aliyun.com/document_detail/2513636.html).
    // *   **mns_topic**: Message Service (MNS) topic triggers. For more information, see [MNS topic triggers](https://help.aliyun.com/document_detail/2513641.html).
    // *   **eventbridge**: EventBridge-based triggers.
    // 
    // This parameter is required.
    shared_ptr<string> triggerType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
