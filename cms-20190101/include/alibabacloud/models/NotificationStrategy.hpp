// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NotificationStrategyEscalationSetting.hpp>
#include <alibabacloud/models/NotificationStrategyFilterSetting.hpp>
#include <alibabacloud/models/NotificationStrategyGroupingSetting.hpp>
#include <alibabacloud/models/NotificationStrategyPushingSetting.hpp>
#include <alibabacloud/models/NotificationStrategyRouteSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class NotificationStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotificationStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EscalationSetting, escalationSetting_);
      DARABONBA_PTR_TO_JSON(FilterSetting, filterSetting_);
      DARABONBA_PTR_TO_JSON(GroupingSetting, groupingSetting_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(PushingSetting, pushingSetting_);
      DARABONBA_PTR_TO_JSON(RouteSetting, routeSetting_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, NotificationStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EscalationSetting, escalationSetting_);
      DARABONBA_PTR_FROM_JSON(FilterSetting, filterSetting_);
      DARABONBA_PTR_FROM_JSON(GroupingSetting, groupingSetting_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(PushingSetting, pushingSetting_);
      DARABONBA_PTR_FROM_JSON(RouteSetting, routeSetting_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    NotificationStrategy() = default ;
    NotificationStrategy(const NotificationStrategy &) = default ;
    NotificationStrategy(NotificationStrategy &&) = default ;
    NotificationStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotificationStrategy() = default ;
    NotificationStrategy& operator=(const NotificationStrategy &) = default ;
    NotificationStrategy& operator=(NotificationStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->escalationSetting_ == nullptr && return this->filterSetting_ == nullptr && return this->groupingSetting_ == nullptr && return this->name_ == nullptr
        && return this->product_ == nullptr && return this->pushingSetting_ == nullptr && return this->routeSetting_ == nullptr && return this->updateTime_ == nullptr && return this->userId_ == nullptr
        && return this->uuid_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline NotificationStrategy& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline NotificationStrategy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // escalationSetting Field Functions 
    bool hasEscalationSetting() const { return this->escalationSetting_ != nullptr;};
    void deleteEscalationSetting() { this->escalationSetting_ = nullptr;};
    inline const NotificationStrategyEscalationSetting & escalationSetting() const { DARABONBA_PTR_GET_CONST(escalationSetting_, NotificationStrategyEscalationSetting) };
    inline NotificationStrategyEscalationSetting escalationSetting() { DARABONBA_PTR_GET(escalationSetting_, NotificationStrategyEscalationSetting) };
    inline NotificationStrategy& setEscalationSetting(const NotificationStrategyEscalationSetting & escalationSetting) { DARABONBA_PTR_SET_VALUE(escalationSetting_, escalationSetting) };
    inline NotificationStrategy& setEscalationSetting(NotificationStrategyEscalationSetting && escalationSetting) { DARABONBA_PTR_SET_RVALUE(escalationSetting_, escalationSetting) };


    // filterSetting Field Functions 
    bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
    void deleteFilterSetting() { this->filterSetting_ = nullptr;};
    inline const NotificationStrategyFilterSetting & filterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, NotificationStrategyFilterSetting) };
    inline NotificationStrategyFilterSetting filterSetting() { DARABONBA_PTR_GET(filterSetting_, NotificationStrategyFilterSetting) };
    inline NotificationStrategy& setFilterSetting(const NotificationStrategyFilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
    inline NotificationStrategy& setFilterSetting(NotificationStrategyFilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


    // groupingSetting Field Functions 
    bool hasGroupingSetting() const { return this->groupingSetting_ != nullptr;};
    void deleteGroupingSetting() { this->groupingSetting_ = nullptr;};
    inline const NotificationStrategyGroupingSetting & groupingSetting() const { DARABONBA_PTR_GET_CONST(groupingSetting_, NotificationStrategyGroupingSetting) };
    inline NotificationStrategyGroupingSetting groupingSetting() { DARABONBA_PTR_GET(groupingSetting_, NotificationStrategyGroupingSetting) };
    inline NotificationStrategy& setGroupingSetting(const NotificationStrategyGroupingSetting & groupingSetting) { DARABONBA_PTR_SET_VALUE(groupingSetting_, groupingSetting) };
    inline NotificationStrategy& setGroupingSetting(NotificationStrategyGroupingSetting && groupingSetting) { DARABONBA_PTR_SET_RVALUE(groupingSetting_, groupingSetting) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline NotificationStrategy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline NotificationStrategy& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // pushingSetting Field Functions 
    bool hasPushingSetting() const { return this->pushingSetting_ != nullptr;};
    void deletePushingSetting() { this->pushingSetting_ = nullptr;};
    inline const NotificationStrategyPushingSetting & pushingSetting() const { DARABONBA_PTR_GET_CONST(pushingSetting_, NotificationStrategyPushingSetting) };
    inline NotificationStrategyPushingSetting pushingSetting() { DARABONBA_PTR_GET(pushingSetting_, NotificationStrategyPushingSetting) };
    inline NotificationStrategy& setPushingSetting(const NotificationStrategyPushingSetting & pushingSetting) { DARABONBA_PTR_SET_VALUE(pushingSetting_, pushingSetting) };
    inline NotificationStrategy& setPushingSetting(NotificationStrategyPushingSetting && pushingSetting) { DARABONBA_PTR_SET_RVALUE(pushingSetting_, pushingSetting) };


    // routeSetting Field Functions 
    bool hasRouteSetting() const { return this->routeSetting_ != nullptr;};
    void deleteRouteSetting() { this->routeSetting_ = nullptr;};
    inline const NotificationStrategyRouteSetting & routeSetting() const { DARABONBA_PTR_GET_CONST(routeSetting_, NotificationStrategyRouteSetting) };
    inline NotificationStrategyRouteSetting routeSetting() { DARABONBA_PTR_GET(routeSetting_, NotificationStrategyRouteSetting) };
    inline NotificationStrategy& setRouteSetting(const NotificationStrategyRouteSetting & routeSetting) { DARABONBA_PTR_SET_VALUE(routeSetting_, routeSetting) };
    inline NotificationStrategy& setRouteSetting(NotificationStrategyRouteSetting && routeSetting) { DARABONBA_PTR_SET_RVALUE(routeSetting_, routeSetting) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline NotificationStrategy& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline NotificationStrategy& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline NotificationStrategy& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<NotificationStrategyEscalationSetting> escalationSetting_ = nullptr;
    std::shared_ptr<NotificationStrategyFilterSetting> filterSetting_ = nullptr;
    std::shared_ptr<NotificationStrategyGroupingSetting> groupingSetting_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<NotificationStrategyPushingSetting> pushingSetting_ = nullptr;
    std::shared_ptr<NotificationStrategyRouteSetting> routeSetting_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
