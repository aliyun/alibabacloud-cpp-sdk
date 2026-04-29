// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDCREATEENTERPRISETIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDCREATEENTERPRISETIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudCreateEnterpriseTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudCreateEnterpriseTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DayOfWeek, dayOfWeek_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(FromDay, fromDay_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimeType, timeType_);
      DARABONBA_PTR_TO_JSON(ToDay, toDay_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CloudCreateEnterpriseTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DayOfWeek, dayOfWeek_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(FromDay, fromDay_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
      DARABONBA_PTR_FROM_JSON(ToDay, toDay_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CloudCreateEnterpriseTimeRequest() = default ;
    CloudCreateEnterpriseTimeRequest(const CloudCreateEnterpriseTimeRequest &) = default ;
    CloudCreateEnterpriseTimeRequest(CloudCreateEnterpriseTimeRequest &&) = default ;
    CloudCreateEnterpriseTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudCreateEnterpriseTimeRequest() = default ;
    CloudCreateEnterpriseTimeRequest& operator=(const CloudCreateEnterpriseTimeRequest &) = default ;
    CloudCreateEnterpriseTimeRequest& operator=(CloudCreateEnterpriseTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dayOfWeek_ == nullptr
        && this->endTime_ == nullptr && this->enterpriseId_ == nullptr && this->fromDay_ == nullptr && this->name_ == nullptr && this->ownerId_ == nullptr
        && this->priority_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->startTime_ == nullptr && this->timeType_ == nullptr
        && this->toDay_ == nullptr && this->type_ == nullptr; };
    // dayOfWeek Field Functions 
    bool hasDayOfWeek() const { return this->dayOfWeek_ != nullptr;};
    void deleteDayOfWeek() { this->dayOfWeek_ = nullptr;};
    inline string getDayOfWeek() const { DARABONBA_PTR_GET_DEFAULT(dayOfWeek_, "") };
    inline CloudCreateEnterpriseTimeRequest& setDayOfWeek(string dayOfWeek) { DARABONBA_PTR_SET_VALUE(dayOfWeek_, dayOfWeek) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CloudCreateEnterpriseTimeRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudCreateEnterpriseTimeRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // fromDay Field Functions 
    bool hasFromDay() const { return this->fromDay_ != nullptr;};
    void deleteFromDay() { this->fromDay_ = nullptr;};
    inline string getFromDay() const { DARABONBA_PTR_GET_DEFAULT(fromDay_, "") };
    inline CloudCreateEnterpriseTimeRequest& setFromDay(string fromDay) { DARABONBA_PTR_SET_VALUE(fromDay_, fromDay) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CloudCreateEnterpriseTimeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CloudCreateEnterpriseTimeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline CloudCreateEnterpriseTimeRequest& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CloudCreateEnterpriseTimeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CloudCreateEnterpriseTimeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CloudCreateEnterpriseTimeRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline int64_t getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0L) };
    inline CloudCreateEnterpriseTimeRequest& setTimeType(int64_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // toDay Field Functions 
    bool hasToDay() const { return this->toDay_ != nullptr;};
    void deleteToDay() { this->toDay_ = nullptr;};
    inline string getToDay() const { DARABONBA_PTR_GET_DEFAULT(toDay_, "") };
    inline CloudCreateEnterpriseTimeRequest& setToDay(string toDay) { DARABONBA_PTR_SET_VALUE(toDay_, toDay) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline CloudCreateEnterpriseTimeRequest& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // 当type=1 时必选,周一：2、周二：3、周三：4、周四：5、周五：6、周六：7、周日：1。星期值以,分隔 例如： 2,3,4代表周一周二周三、type=2时为空串
    shared_ptr<string> dayOfWeek_ {};
    // 结束时间；格式为 HH:mm 例如、 19:00 startTime不能大于endTime
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 起始日期；当type=2 时必选，格式为：yyyy-MM-dd 、type=1时为空串 fromDay不能大于toDay
    shared_ptr<string> fromDay_ {};
    // 时间条件名称；同一呼叫中心下不能重复
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 时间条件优先级；同一呼叫中心下不能重复，值从1开始，值越小优先级越高
    // 
    // This parameter is required.
    shared_ptr<int64_t> priority_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 开始时间；格式为 HH:mm 例如、 06:00 startTime不能大于endTime
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // 时间类型 1.连续 2.间隔
    // 
    // This parameter is required.
    shared_ptr<int64_t> timeType_ {};
    // 终止日期；当type=2 时必选，格式为：yyyy-MM-dd 、type=1时为空串 fromDay不能大于toDay
    shared_ptr<string> toDay_ {};
    // 条件类型 1:按照星期配置 2:按照固定时间配置
    // 
    // This parameter is required.
    shared_ptr<int64_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
