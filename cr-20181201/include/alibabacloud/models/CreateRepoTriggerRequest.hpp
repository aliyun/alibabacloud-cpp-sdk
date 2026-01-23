// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPOTRIGGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPOTRIGGERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateRepoTriggerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRepoTriggerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(TriggerName, triggerName_);
      DARABONBA_PTR_TO_JSON(TriggerTag, triggerTag_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_TO_JSON(TriggerUrl, triggerUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRepoTriggerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(TriggerName, triggerName_);
      DARABONBA_PTR_FROM_JSON(TriggerTag, triggerTag_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_FROM_JSON(TriggerUrl, triggerUrl_);
    };
    CreateRepoTriggerRequest() = default ;
    CreateRepoTriggerRequest(const CreateRepoTriggerRequest &) = default ;
    CreateRepoTriggerRequest(CreateRepoTriggerRequest &&) = default ;
    CreateRepoTriggerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRepoTriggerRequest() = default ;
    CreateRepoTriggerRequest& operator=(const CreateRepoTriggerRequest &) = default ;
    CreateRepoTriggerRequest& operator=(CreateRepoTriggerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->repoId_ == nullptr && this->triggerName_ == nullptr && this->triggerTag_ == nullptr && this->triggerType_ == nullptr && this->triggerUrl_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateRepoTriggerRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline CreateRepoTriggerRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // triggerName Field Functions 
    bool hasTriggerName() const { return this->triggerName_ != nullptr;};
    void deleteTriggerName() { this->triggerName_ = nullptr;};
    inline string getTriggerName() const { DARABONBA_PTR_GET_DEFAULT(triggerName_, "") };
    inline CreateRepoTriggerRequest& setTriggerName(string triggerName) { DARABONBA_PTR_SET_VALUE(triggerName_, triggerName) };


    // triggerTag Field Functions 
    bool hasTriggerTag() const { return this->triggerTag_ != nullptr;};
    void deleteTriggerTag() { this->triggerTag_ = nullptr;};
    inline string getTriggerTag() const { DARABONBA_PTR_GET_DEFAULT(triggerTag_, "") };
    inline CreateRepoTriggerRequest& setTriggerTag(string triggerTag) { DARABONBA_PTR_SET_VALUE(triggerTag_, triggerTag) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline CreateRepoTriggerRequest& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    // triggerUrl Field Functions 
    bool hasTriggerUrl() const { return this->triggerUrl_ != nullptr;};
    void deleteTriggerUrl() { this->triggerUrl_ = nullptr;};
    inline string getTriggerUrl() const { DARABONBA_PTR_GET_DEFAULT(triggerUrl_, "") };
    inline CreateRepoTriggerRequest& setTriggerUrl(string triggerUrl) { DARABONBA_PTR_SET_VALUE(triggerUrl_, triggerUrl) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the image repository.
    // 
    // This parameter is required.
    shared_ptr<string> repoId_ {};
    // The name of the trigger.
    // 
    // This parameter is required.
    shared_ptr<string> triggerName_ {};
    // The image tag based on which the trigger is set.
    // 
    // > 
    // 
    // *   If `TriggerType` is set to `ALL`, `TriggerTag` can be set to a string or an array, for example, `*`.
    // 
    // *   If `TriggerType` is set to `TAG_LIST`, `TriggerTag` must be set to an array, for example, `[1]`.
    // *   If `TriggerType` is set to `TAG_REG_EXP`, `TriggerTag` must be set to a string, for example, `*`.
    shared_ptr<string> triggerTag_ {};
    // The type of the trigger. Valid values:
    // 
    // *   `ALL`: a trigger that supports both tags and regular expressions.
    // *   `TAG_LIST`: a tag-based trigger.
    // *   `TAG_REG_EXP`: a regular expression-based trigger.
    // 
    // This parameter is required.
    shared_ptr<string> triggerType_ {};
    // The URL of the trigger.
    // 
    // This parameter is required.
    shared_ptr<string> triggerUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
