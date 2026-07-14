// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYPOLICYSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYPOLICYSUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NotifyStrategyDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class NotifyPolicySummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyPolicySummary& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(notifyStrategy, notifyStrategy_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyPolicySummary& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(notifyStrategy, notifyStrategy_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    NotifyPolicySummary() = default ;
    NotifyPolicySummary(const NotifyPolicySummary &) = default ;
    NotifyPolicySummary(NotifyPolicySummary &&) = default ;
    NotifyPolicySummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyPolicySummary() = default ;
    NotifyPolicySummary& operator=(const NotifyPolicySummary &) = default ;
    NotifyPolicySummary& operator=(NotifyPolicySummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->enabled_ == nullptr && this->name_ == nullptr && this->notifyStrategy_ == nullptr && this->updateTime_ == nullptr
        && this->userId_ == nullptr && this->uuid_ == nullptr && this->version_ == nullptr && this->workspace_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline NotifyPolicySummary& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline NotifyPolicySummary& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline NotifyPolicySummary& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline NotifyPolicySummary& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyStrategy Field Functions 
    bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
    void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
    inline const NotifyStrategyDetail & getNotifyStrategy() const { DARABONBA_PTR_GET_CONST(notifyStrategy_, NotifyStrategyDetail) };
    inline NotifyStrategyDetail getNotifyStrategy() { DARABONBA_PTR_GET(notifyStrategy_, NotifyStrategyDetail) };
    inline NotifyPolicySummary& setNotifyStrategy(const NotifyStrategyDetail & notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };
    inline NotifyPolicySummary& setNotifyStrategy(NotifyStrategyDetail && notifyStrategy) { DARABONBA_PTR_SET_RVALUE(notifyStrategy_, notifyStrategy) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline NotifyPolicySummary& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline NotifyPolicySummary& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline NotifyPolicySummary& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline NotifyPolicySummary& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline NotifyPolicySummary& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> enabled_ {};
    shared_ptr<string> name_ {};
    shared_ptr<NotifyStrategyDetail> notifyStrategy_ {};
    shared_ptr<string> updateTime_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<string> uuid_ {};
    shared_ptr<int32_t> version_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
