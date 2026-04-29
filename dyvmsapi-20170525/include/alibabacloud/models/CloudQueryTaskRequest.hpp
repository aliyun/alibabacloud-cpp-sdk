// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDQUERYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDQUERYTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudQueryTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudQueryTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoStart, autoStart_);
      DARABONBA_PTR_TO_JSON(AutoStop, autoStop_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeType, timeType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CloudQueryTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoStart, autoStart_);
      DARABONBA_PTR_FROM_JSON(AutoStop, autoStop_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CloudQueryTaskRequest() = default ;
    CloudQueryTaskRequest(const CloudQueryTaskRequest &) = default ;
    CloudQueryTaskRequest(CloudQueryTaskRequest &&) = default ;
    CloudQueryTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudQueryTaskRequest() = default ;
    CloudQueryTaskRequest& operator=(const CloudQueryTaskRequest &) = default ;
    CloudQueryTaskRequest& operator=(CloudQueryTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoStart_ == nullptr
        && this->autoStop_ == nullptr && this->endTime_ == nullptr && this->enterpriseId_ == nullptr && this->limit_ == nullptr && this->name_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->start_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->timeType_ == nullptr && this->type_ == nullptr; };
    // autoStart Field Functions 
    bool hasAutoStart() const { return this->autoStart_ != nullptr;};
    void deleteAutoStart() { this->autoStart_ = nullptr;};
    inline int64_t getAutoStart() const { DARABONBA_PTR_GET_DEFAULT(autoStart_, 0L) };
    inline CloudQueryTaskRequest& setAutoStart(int64_t autoStart) { DARABONBA_PTR_SET_VALUE(autoStart_, autoStart) };


    // autoStop Field Functions 
    bool hasAutoStop() const { return this->autoStop_ != nullptr;};
    void deleteAutoStop() { this->autoStop_ = nullptr;};
    inline int64_t getAutoStop() const { DARABONBA_PTR_GET_DEFAULT(autoStop_, 0L) };
    inline CloudQueryTaskRequest& setAutoStop(int64_t autoStop) { DARABONBA_PTR_SET_VALUE(autoStop_, autoStop) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CloudQueryTaskRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudQueryTaskRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline CloudQueryTaskRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CloudQueryTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CloudQueryTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CloudQueryTaskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CloudQueryTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline CloudQueryTaskRequest& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CloudQueryTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline CloudQueryTaskRequest& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline int64_t getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0L) };
    inline CloudQueryTaskRequest& setTimeType(int64_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline CloudQueryTaskRequest& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // 定时开始；0.关闭 1.开启
    shared_ptr<int64_t> autoStart_ {};
    // 定时结束；0.关闭 1.开启
    shared_ptr<int64_t> autoStop_ {};
    // 查询结束时间；格式说明："2019-10-11 23:59:59"
    shared_ptr<string> endTime_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 需要取出的数据条数；大于0，最大不能超过100，默认10
    shared_ptr<int64_t> limit_ {};
    // 任务名称；需进行UTF-8格式的URLEncode编码
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 从第几条开始获取；大于等于0，默认0
    shared_ptr<int64_t> start_ {};
    // 查询开始时间；格式说明："2019-10-11 00:00:00"
    shared_ptr<string> startTime_ {};
    // 任务状态；0.初始 1.运行中 2.暂停 3.结束
    shared_ptr<int64_t> status_ {};
    // 时间过滤条件；1.任务启动时间 2.任务结束时间 3.任务创建时间
    shared_ptr<int64_t> timeType_ {};
    // 任务类型；1.预测外呼任务 2.自动外呼任务
    // 
    // This parameter is required.
    shared_ptr<int64_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
