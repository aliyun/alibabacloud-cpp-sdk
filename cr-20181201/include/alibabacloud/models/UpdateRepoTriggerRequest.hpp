// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREPOTRIGGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREPOTRIGGERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class UpdateRepoTriggerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRepoTriggerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(TriggerId, triggerId_);
      DARABONBA_PTR_TO_JSON(TriggerName, triggerName_);
      DARABONBA_PTR_TO_JSON(TriggerTag, triggerTag_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_TO_JSON(TriggerUrl, triggerUrl_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRepoTriggerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(TriggerId, triggerId_);
      DARABONBA_PTR_FROM_JSON(TriggerName, triggerName_);
      DARABONBA_PTR_FROM_JSON(TriggerTag, triggerTag_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_FROM_JSON(TriggerUrl, triggerUrl_);
    };
    UpdateRepoTriggerRequest() = default ;
    UpdateRepoTriggerRequest(const UpdateRepoTriggerRequest &) = default ;
    UpdateRepoTriggerRequest(UpdateRepoTriggerRequest &&) = default ;
    UpdateRepoTriggerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRepoTriggerRequest() = default ;
    UpdateRepoTriggerRequest& operator=(const UpdateRepoTriggerRequest &) = default ;
    UpdateRepoTriggerRequest& operator=(UpdateRepoTriggerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->repoId_ == nullptr && return this->triggerId_ == nullptr && return this->triggerName_ == nullptr && return this->triggerTag_ == nullptr && return this->triggerType_ == nullptr
        && return this->triggerUrl_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateRepoTriggerRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline UpdateRepoTriggerRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // triggerId Field Functions 
    bool hasTriggerId() const { return this->triggerId_ != nullptr;};
    void deleteTriggerId() { this->triggerId_ = nullptr;};
    inline string triggerId() const { DARABONBA_PTR_GET_DEFAULT(triggerId_, "") };
    inline UpdateRepoTriggerRequest& setTriggerId(string triggerId) { DARABONBA_PTR_SET_VALUE(triggerId_, triggerId) };


    // triggerName Field Functions 
    bool hasTriggerName() const { return this->triggerName_ != nullptr;};
    void deleteTriggerName() { this->triggerName_ = nullptr;};
    inline string triggerName() const { DARABONBA_PTR_GET_DEFAULT(triggerName_, "") };
    inline UpdateRepoTriggerRequest& setTriggerName(string triggerName) { DARABONBA_PTR_SET_VALUE(triggerName_, triggerName) };


    // triggerTag Field Functions 
    bool hasTriggerTag() const { return this->triggerTag_ != nullptr;};
    void deleteTriggerTag() { this->triggerTag_ = nullptr;};
    inline string triggerTag() const { DARABONBA_PTR_GET_DEFAULT(triggerTag_, "") };
    inline UpdateRepoTriggerRequest& setTriggerTag(string triggerTag) { DARABONBA_PTR_SET_VALUE(triggerTag_, triggerTag) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline UpdateRepoTriggerRequest& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    // triggerUrl Field Functions 
    bool hasTriggerUrl() const { return this->triggerUrl_ != nullptr;};
    void deleteTriggerUrl() { this->triggerUrl_ = nullptr;};
    inline string triggerUrl() const { DARABONBA_PTR_GET_DEFAULT(triggerUrl_, "") };
    inline UpdateRepoTriggerRequest& setTriggerUrl(string triggerUrl) { DARABONBA_PTR_SET_VALUE(triggerUrl_, triggerUrl) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the image repository.
    // 
    // This parameter is required.
    std::shared_ptr<string> repoId_ = nullptr;
    // The ID of the trigger.
    // 
    // This parameter is required.
    std::shared_ptr<string> triggerId_ = nullptr;
    // The name of the trigger.
    // 
    // You can specify the TriggerName or TriggerUrl parameter. The TriggerName parameter is optional.
    std::shared_ptr<string> triggerName_ = nullptr;
    // The image tag based on which the trigger is set.
    std::shared_ptr<string> triggerTag_ = nullptr;
    // The type of the trigger. Valid values:
    // 
    // *   `ALL`: a trigger that supports both tags and regular expressions.
    // *   `TAG_LISTTAG`: a tag-based trigger.
    // *   `TAG_REG_EXP`: a regular expression-based trigger.
    std::shared_ptr<string> triggerType_ = nullptr;
    // The URL of the trigger.
    std::shared_ptr<string> triggerUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
