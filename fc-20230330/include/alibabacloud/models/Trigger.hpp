// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGER_HPP_
#define ALIBABACLOUD_MODELS_TRIGGER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HTTPTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class Trigger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Trigger& obj) { 
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(httpTrigger, httpTrigger_);
      DARABONBA_PTR_TO_JSON(invocationRole, invocationRole_);
      DARABONBA_PTR_TO_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(sourceArn, sourceArn_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(targetArn, targetArn_);
      DARABONBA_PTR_TO_JSON(triggerConfig, triggerConfig_);
      DARABONBA_PTR_TO_JSON(triggerId, triggerId_);
      DARABONBA_PTR_TO_JSON(triggerName, triggerName_);
      DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, Trigger& obj) { 
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(httpTrigger, httpTrigger_);
      DARABONBA_PTR_FROM_JSON(invocationRole, invocationRole_);
      DARABONBA_PTR_FROM_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(sourceArn, sourceArn_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(targetArn, targetArn_);
      DARABONBA_PTR_FROM_JSON(triggerConfig, triggerConfig_);
      DARABONBA_PTR_FROM_JSON(triggerId, triggerId_);
      DARABONBA_PTR_FROM_JSON(triggerName, triggerName_);
      DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
    };
    Trigger() = default ;
    Trigger(const Trigger &) = default ;
    Trigger(Trigger &&) = default ;
    Trigger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Trigger() = default ;
    Trigger& operator=(const Trigger &) = default ;
    Trigger& operator=(Trigger &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && return this->description_ == nullptr && return this->httpTrigger_ == nullptr && return this->invocationRole_ == nullptr && return this->lastModifiedTime_ == nullptr && return this->qualifier_ == nullptr
        && return this->sourceArn_ == nullptr && return this->status_ == nullptr && return this->targetArn_ == nullptr && return this->triggerConfig_ == nullptr && return this->triggerId_ == nullptr
        && return this->triggerName_ == nullptr && return this->triggerType_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline Trigger& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Trigger& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // httpTrigger Field Functions 
    bool hasHttpTrigger() const { return this->httpTrigger_ != nullptr;};
    void deleteHttpTrigger() { this->httpTrigger_ = nullptr;};
    inline const HTTPTrigger & httpTrigger() const { DARABONBA_PTR_GET_CONST(httpTrigger_, HTTPTrigger) };
    inline HTTPTrigger httpTrigger() { DARABONBA_PTR_GET(httpTrigger_, HTTPTrigger) };
    inline Trigger& setHttpTrigger(const HTTPTrigger & httpTrigger) { DARABONBA_PTR_SET_VALUE(httpTrigger_, httpTrigger) };
    inline Trigger& setHttpTrigger(HTTPTrigger && httpTrigger) { DARABONBA_PTR_SET_RVALUE(httpTrigger_, httpTrigger) };


    // invocationRole Field Functions 
    bool hasInvocationRole() const { return this->invocationRole_ != nullptr;};
    void deleteInvocationRole() { this->invocationRole_ = nullptr;};
    inline string invocationRole() const { DARABONBA_PTR_GET_DEFAULT(invocationRole_, "") };
    inline Trigger& setInvocationRole(string invocationRole) { DARABONBA_PTR_SET_VALUE(invocationRole_, invocationRole) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline string lastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
    inline Trigger& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline Trigger& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // sourceArn Field Functions 
    bool hasSourceArn() const { return this->sourceArn_ != nullptr;};
    void deleteSourceArn() { this->sourceArn_ = nullptr;};
    inline string sourceArn() const { DARABONBA_PTR_GET_DEFAULT(sourceArn_, "") };
    inline Trigger& setSourceArn(string sourceArn) { DARABONBA_PTR_SET_VALUE(sourceArn_, sourceArn) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Trigger& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetArn Field Functions 
    bool hasTargetArn() const { return this->targetArn_ != nullptr;};
    void deleteTargetArn() { this->targetArn_ = nullptr;};
    inline string targetArn() const { DARABONBA_PTR_GET_DEFAULT(targetArn_, "") };
    inline Trigger& setTargetArn(string targetArn) { DARABONBA_PTR_SET_VALUE(targetArn_, targetArn) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline string triggerConfig() const { DARABONBA_PTR_GET_DEFAULT(triggerConfig_, "") };
    inline Trigger& setTriggerConfig(string triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };


    // triggerId Field Functions 
    bool hasTriggerId() const { return this->triggerId_ != nullptr;};
    void deleteTriggerId() { this->triggerId_ = nullptr;};
    inline string triggerId() const { DARABONBA_PTR_GET_DEFAULT(triggerId_, "") };
    inline Trigger& setTriggerId(string triggerId) { DARABONBA_PTR_SET_VALUE(triggerId_, triggerId) };


    // triggerName Field Functions 
    bool hasTriggerName() const { return this->triggerName_ != nullptr;};
    void deleteTriggerName() { this->triggerName_ = nullptr;};
    inline string triggerName() const { DARABONBA_PTR_GET_DEFAULT(triggerName_, "") };
    inline Trigger& setTriggerName(string triggerName) { DARABONBA_PTR_SET_VALUE(triggerName_, triggerName) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline Trigger& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<HTTPTrigger> httpTrigger_ = nullptr;
    std::shared_ptr<string> invocationRole_ = nullptr;
    std::shared_ptr<string> lastModifiedTime_ = nullptr;
    std::shared_ptr<string> qualifier_ = nullptr;
    std::shared_ptr<string> sourceArn_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> targetArn_ = nullptr;
    std::shared_ptr<string> triggerConfig_ = nullptr;
    std::shared_ptr<string> triggerId_ = nullptr;
    std::shared_ptr<string> triggerName_ = nullptr;
    std::shared_ptr<string> triggerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
