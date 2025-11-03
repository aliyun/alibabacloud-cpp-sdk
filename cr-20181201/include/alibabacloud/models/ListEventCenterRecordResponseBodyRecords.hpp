// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTCENTERRECORDRESPONSEBODYRECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTCENTERRECORDRESPONSEBODYRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListEventCenterRecordResponseBodyRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventCenterRecordResponseBodyRecords& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EventChannel, eventChannel_);
      DARABONBA_PTR_TO_JSON(EventNotifyId, eventNotifyId_);
      DARABONBA_PTR_TO_JSON(EventNotifyMethod, eventNotifyMethod_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventCenterRecordResponseBodyRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EventChannel, eventChannel_);
      DARABONBA_PTR_FROM_JSON(EventNotifyId, eventNotifyId_);
      DARABONBA_PTR_FROM_JSON(EventNotifyMethod, eventNotifyMethod_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListEventCenterRecordResponseBodyRecords() = default ;
    ListEventCenterRecordResponseBodyRecords(const ListEventCenterRecordResponseBodyRecords &) = default ;
    ListEventCenterRecordResponseBodyRecords(ListEventCenterRecordResponseBodyRecords &&) = default ;
    ListEventCenterRecordResponseBodyRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventCenterRecordResponseBodyRecords() = default ;
    ListEventCenterRecordResponseBodyRecords& operator=(const ListEventCenterRecordResponseBodyRecords &) = default ;
    ListEventCenterRecordResponseBodyRecords& operator=(ListEventCenterRecordResponseBodyRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->eventChannel_ == nullptr && return this->eventNotifyId_ == nullptr && return this->eventNotifyMethod_ == nullptr && return this->eventType_ == nullptr && return this->instanceId_ == nullptr
        && return this->namespace_ == nullptr && return this->recordId_ == nullptr && return this->repoName_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr
        && return this->tag_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListEventCenterRecordResponseBodyRecords& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // eventChannel Field Functions 
    bool hasEventChannel() const { return this->eventChannel_ != nullptr;};
    void deleteEventChannel() { this->eventChannel_ = nullptr;};
    inline string eventChannel() const { DARABONBA_PTR_GET_DEFAULT(eventChannel_, "") };
    inline ListEventCenterRecordResponseBodyRecords& setEventChannel(string eventChannel) { DARABONBA_PTR_SET_VALUE(eventChannel_, eventChannel) };


    // eventNotifyId Field Functions 
    bool hasEventNotifyId() const { return this->eventNotifyId_ != nullptr;};
    void deleteEventNotifyId() { this->eventNotifyId_ = nullptr;};
    inline string eventNotifyId() const { DARABONBA_PTR_GET_DEFAULT(eventNotifyId_, "") };
    inline ListEventCenterRecordResponseBodyRecords& setEventNotifyId(string eventNotifyId) { DARABONBA_PTR_SET_VALUE(eventNotifyId_, eventNotifyId) };


    // eventNotifyMethod Field Functions 
    bool hasEventNotifyMethod() const { return this->eventNotifyMethod_ != nullptr;};
    void deleteEventNotifyMethod() { this->eventNotifyMethod_ = nullptr;};
    inline string eventNotifyMethod() const { DARABONBA_PTR_GET_DEFAULT(eventNotifyMethod_, "") };
    inline ListEventCenterRecordResponseBodyRecords& setEventNotifyMethod(string eventNotifyMethod) { DARABONBA_PTR_SET_VALUE(eventNotifyMethod_, eventNotifyMethod) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline ListEventCenterRecordResponseBodyRecords& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListEventCenterRecordResponseBodyRecords& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListEventCenterRecordResponseBodyRecords& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline ListEventCenterRecordResponseBodyRecords& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline ListEventCenterRecordResponseBodyRecords& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ListEventCenterRecordResponseBodyRecords& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListEventCenterRecordResponseBodyRecords& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListEventCenterRecordResponseBodyRecords& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListEventCenterRecordResponseBodyRecords& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the event was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The event notification channel.
    std::shared_ptr<string> eventChannel_ = nullptr;
    // The ID of the event notification.
    std::shared_ptr<string> eventNotifyId_ = nullptr;
    // The notification method. Valid values:
    // 
    // *   `http`: The notification is sent over HTTP.
    // *   `https`: The notification is sent over HTTPS.
    // *   `dingding`: The notification is sent by using DingTalk.
    std::shared_ptr<string> eventNotifyMethod_ = nullptr;
    // The type of the event.
    std::shared_ptr<string> eventType_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The ID of the event record.
    std::shared_ptr<string> recordId_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The ID of the event notification rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the event notification rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The tags.
    std::shared_ptr<string> tag_ = nullptr;
    // The time when the event was last updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
