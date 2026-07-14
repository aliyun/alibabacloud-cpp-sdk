// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NotifyStrategyDetail.hpp>
#include <alibabacloud/models/ResponsePlanDetail.hpp>
#include <alibabacloud/models/SubscriptionDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class NotifyPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(notifyStrategy, notifyStrategy_);
      DARABONBA_PTR_TO_JSON(responsePlan, responsePlan_);
      DARABONBA_PTR_TO_JSON(subscription, subscription_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(notifyStrategy, notifyStrategy_);
      DARABONBA_PTR_FROM_JSON(responsePlan, responsePlan_);
      DARABONBA_PTR_FROM_JSON(subscription, subscription_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    NotifyPolicy() = default ;
    NotifyPolicy(const NotifyPolicy &) = default ;
    NotifyPolicy(NotifyPolicy &&) = default ;
    NotifyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyPolicy() = default ;
    NotifyPolicy& operator=(const NotifyPolicy &) = default ;
    NotifyPolicy& operator=(NotifyPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->enabled_ == nullptr && this->name_ == nullptr && this->notifyStrategy_ == nullptr && this->responsePlan_ == nullptr
        && this->subscription_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr && this->uuid_ == nullptr && this->version_ == nullptr
        && this->workspace_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline NotifyPolicy& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline NotifyPolicy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline NotifyPolicy& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline NotifyPolicy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyStrategy Field Functions 
    bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
    void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
    inline const NotifyStrategyDetail & getNotifyStrategy() const { DARABONBA_PTR_GET_CONST(notifyStrategy_, NotifyStrategyDetail) };
    inline NotifyStrategyDetail getNotifyStrategy() { DARABONBA_PTR_GET(notifyStrategy_, NotifyStrategyDetail) };
    inline NotifyPolicy& setNotifyStrategy(const NotifyStrategyDetail & notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };
    inline NotifyPolicy& setNotifyStrategy(NotifyStrategyDetail && notifyStrategy) { DARABONBA_PTR_SET_RVALUE(notifyStrategy_, notifyStrategy) };


    // responsePlan Field Functions 
    bool hasResponsePlan() const { return this->responsePlan_ != nullptr;};
    void deleteResponsePlan() { this->responsePlan_ = nullptr;};
    inline const ResponsePlanDetail & getResponsePlan() const { DARABONBA_PTR_GET_CONST(responsePlan_, ResponsePlanDetail) };
    inline ResponsePlanDetail getResponsePlan() { DARABONBA_PTR_GET(responsePlan_, ResponsePlanDetail) };
    inline NotifyPolicy& setResponsePlan(const ResponsePlanDetail & responsePlan) { DARABONBA_PTR_SET_VALUE(responsePlan_, responsePlan) };
    inline NotifyPolicy& setResponsePlan(ResponsePlanDetail && responsePlan) { DARABONBA_PTR_SET_RVALUE(responsePlan_, responsePlan) };


    // subscription Field Functions 
    bool hasSubscription() const { return this->subscription_ != nullptr;};
    void deleteSubscription() { this->subscription_ = nullptr;};
    inline const SubscriptionDetail & getSubscription() const { DARABONBA_PTR_GET_CONST(subscription_, SubscriptionDetail) };
    inline SubscriptionDetail getSubscription() { DARABONBA_PTR_GET(subscription_, SubscriptionDetail) };
    inline NotifyPolicy& setSubscription(const SubscriptionDetail & subscription) { DARABONBA_PTR_SET_VALUE(subscription_, subscription) };
    inline NotifyPolicy& setSubscription(SubscriptionDetail && subscription) { DARABONBA_PTR_SET_RVALUE(subscription_, subscription) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline NotifyPolicy& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline NotifyPolicy& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline NotifyPolicy& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline NotifyPolicy& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline NotifyPolicy& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The creation time. The value is a UNIX timestamp string in milliseconds.
    shared_ptr<string> createTime_ {};
    // The policy description.
    shared_ptr<string> description_ {};
    // Indicates whether the policy is enabled. This is a read-only field controlled by the Enable or Disable operation.
    shared_ptr<bool> enabled_ {};
    // The policy name.
    shared_ptr<string> name_ {};
    // The notification policy sub-entity details.
    shared_ptr<NotifyStrategyDetail> notifyStrategy_ {};
    // The response plan sub-entity details.
    shared_ptr<ResponsePlanDetail> responsePlan_ {};
    // The subscription sub-entity details.
    shared_ptr<SubscriptionDetail> subscription_ {};
    // The update time. The value is a UNIX timestamp string in milliseconds.
    shared_ptr<string> updateTime_ {};
    // The Alibaba Cloud account UID.
    shared_ptr<string> userId_ {};
    // The unique identifier of the policy.
    shared_ptr<string> uuid_ {};
    // The optimistic locking version number.
    shared_ptr<int32_t> version_ {};
    // The workspace identifier.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
