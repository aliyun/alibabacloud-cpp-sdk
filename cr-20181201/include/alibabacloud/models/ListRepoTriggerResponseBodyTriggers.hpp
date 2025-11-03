// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOTRIGGERRESPONSEBODYTRIGGERS_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOTRIGGERRESPONSEBODYTRIGGERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoTriggerResponseBodyTriggers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoTriggerResponseBodyTriggers& obj) { 
      DARABONBA_PTR_TO_JSON(RepoEvent, repoEvent_);
      DARABONBA_PTR_TO_JSON(TriggerId, triggerId_);
      DARABONBA_PTR_TO_JSON(TriggerName, triggerName_);
      DARABONBA_PTR_TO_JSON(TriggerTag, triggerTag_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_TO_JSON(TriggerUrl, triggerUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoTriggerResponseBodyTriggers& obj) { 
      DARABONBA_PTR_FROM_JSON(RepoEvent, repoEvent_);
      DARABONBA_PTR_FROM_JSON(TriggerId, triggerId_);
      DARABONBA_PTR_FROM_JSON(TriggerName, triggerName_);
      DARABONBA_PTR_FROM_JSON(TriggerTag, triggerTag_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_FROM_JSON(TriggerUrl, triggerUrl_);
    };
    ListRepoTriggerResponseBodyTriggers() = default ;
    ListRepoTriggerResponseBodyTriggers(const ListRepoTriggerResponseBodyTriggers &) = default ;
    ListRepoTriggerResponseBodyTriggers(ListRepoTriggerResponseBodyTriggers &&) = default ;
    ListRepoTriggerResponseBodyTriggers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoTriggerResponseBodyTriggers() = default ;
    ListRepoTriggerResponseBodyTriggers& operator=(const ListRepoTriggerResponseBodyTriggers &) = default ;
    ListRepoTriggerResponseBodyTriggers& operator=(ListRepoTriggerResponseBodyTriggers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->repoEvent_ == nullptr
        && return this->triggerId_ == nullptr && return this->triggerName_ == nullptr && return this->triggerTag_ == nullptr && return this->triggerType_ == nullptr && return this->triggerUrl_ == nullptr; };
    // repoEvent Field Functions 
    bool hasRepoEvent() const { return this->repoEvent_ != nullptr;};
    void deleteRepoEvent() { this->repoEvent_ = nullptr;};
    inline string repoEvent() const { DARABONBA_PTR_GET_DEFAULT(repoEvent_, "") };
    inline ListRepoTriggerResponseBodyTriggers& setRepoEvent(string repoEvent) { DARABONBA_PTR_SET_VALUE(repoEvent_, repoEvent) };


    // triggerId Field Functions 
    bool hasTriggerId() const { return this->triggerId_ != nullptr;};
    void deleteTriggerId() { this->triggerId_ = nullptr;};
    inline string triggerId() const { DARABONBA_PTR_GET_DEFAULT(triggerId_, "") };
    inline ListRepoTriggerResponseBodyTriggers& setTriggerId(string triggerId) { DARABONBA_PTR_SET_VALUE(triggerId_, triggerId) };


    // triggerName Field Functions 
    bool hasTriggerName() const { return this->triggerName_ != nullptr;};
    void deleteTriggerName() { this->triggerName_ = nullptr;};
    inline string triggerName() const { DARABONBA_PTR_GET_DEFAULT(triggerName_, "") };
    inline ListRepoTriggerResponseBodyTriggers& setTriggerName(string triggerName) { DARABONBA_PTR_SET_VALUE(triggerName_, triggerName) };


    // triggerTag Field Functions 
    bool hasTriggerTag() const { return this->triggerTag_ != nullptr;};
    void deleteTriggerTag() { this->triggerTag_ = nullptr;};
    inline string triggerTag() const { DARABONBA_PTR_GET_DEFAULT(triggerTag_, "") };
    inline ListRepoTriggerResponseBodyTriggers& setTriggerTag(string triggerTag) { DARABONBA_PTR_SET_VALUE(triggerTag_, triggerTag) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline ListRepoTriggerResponseBodyTriggers& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    // triggerUrl Field Functions 
    bool hasTriggerUrl() const { return this->triggerUrl_ != nullptr;};
    void deleteTriggerUrl() { this->triggerUrl_ = nullptr;};
    inline string triggerUrl() const { DARABONBA_PTR_GET_DEFAULT(triggerUrl_, "") };
    inline ListRepoTriggerResponseBodyTriggers& setTriggerUrl(string triggerUrl) { DARABONBA_PTR_SET_VALUE(triggerUrl_, triggerUrl) };


  protected:
    // The type of the event that activates the trigger. Valid values:
    // 
    // *   `BUILD_SUCCESS`: The trigger is activated when an image building task is successful.
    // *   `BUILD_Fail`: The trigger is activated when an image building task fails.
    std::shared_ptr<string> repoEvent_ = nullptr;
    // The ID of the trigger.
    std::shared_ptr<string> triggerId_ = nullptr;
    // The name of the trigger.
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
