// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDAGENTWORKLOADREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDAGENTWORKLOADREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudAgentWorkloadReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudAgentWorkloadReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cnos, cnos_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(Gnos, gnos_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StatisticMethod, statisticMethod_);
      DARABONBA_PTR_TO_JSON(TimeRangeType, timeRangeType_);
    };
    friend void from_json(const Darabonba::Json& j, CloudAgentWorkloadReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cnos, cnos_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(Gnos, gnos_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StatisticMethod, statisticMethod_);
      DARABONBA_PTR_FROM_JSON(TimeRangeType, timeRangeType_);
    };
    CloudAgentWorkloadReportRequest() = default ;
    CloudAgentWorkloadReportRequest(const CloudAgentWorkloadReportRequest &) = default ;
    CloudAgentWorkloadReportRequest(CloudAgentWorkloadReportRequest &&) = default ;
    CloudAgentWorkloadReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudAgentWorkloadReportRequest() = default ;
    CloudAgentWorkloadReportRequest& operator=(const CloudAgentWorkloadReportRequest &) = default ;
    CloudAgentWorkloadReportRequest& operator=(CloudAgentWorkloadReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cnos_ == nullptr
        && this->endTime_ == nullptr && this->enterpriseId_ == nullptr && this->gnos_ == nullptr && this->limit_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->start_ == nullptr && this->startTime_ == nullptr && this->statisticMethod_ == nullptr
        && this->timeRangeType_ == nullptr; };
    // cnos Field Functions 
    bool hasCnos() const { return this->cnos_ != nullptr;};
    void deleteCnos() { this->cnos_ = nullptr;};
    inline string getCnos() const { DARABONBA_PTR_GET_DEFAULT(cnos_, "") };
    inline CloudAgentWorkloadReportRequest& setCnos(string cnos) { DARABONBA_PTR_SET_VALUE(cnos_, cnos) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CloudAgentWorkloadReportRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudAgentWorkloadReportRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // gnos Field Functions 
    bool hasGnos() const { return this->gnos_ != nullptr;};
    void deleteGnos() { this->gnos_ = nullptr;};
    inline string getGnos() const { DARABONBA_PTR_GET_DEFAULT(gnos_, "") };
    inline CloudAgentWorkloadReportRequest& setGnos(string gnos) { DARABONBA_PTR_SET_VALUE(gnos_, gnos) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline CloudAgentWorkloadReportRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CloudAgentWorkloadReportRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CloudAgentWorkloadReportRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CloudAgentWorkloadReportRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline CloudAgentWorkloadReportRequest& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CloudAgentWorkloadReportRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statisticMethod Field Functions 
    bool hasStatisticMethod() const { return this->statisticMethod_ != nullptr;};
    void deleteStatisticMethod() { this->statisticMethod_ = nullptr;};
    inline int64_t getStatisticMethod() const { DARABONBA_PTR_GET_DEFAULT(statisticMethod_, 0L) };
    inline CloudAgentWorkloadReportRequest& setStatisticMethod(int64_t statisticMethod) { DARABONBA_PTR_SET_VALUE(statisticMethod_, statisticMethod) };


    // timeRangeType Field Functions 
    bool hasTimeRangeType() const { return this->timeRangeType_ != nullptr;};
    void deleteTimeRangeType() { this->timeRangeType_ = nullptr;};
    inline int64_t getTimeRangeType() const { DARABONBA_PTR_GET_DEFAULT(timeRangeType_, 0L) };
    inline CloudAgentWorkloadReportRequest& setTimeRangeType(int64_t timeRangeType) { DARABONBA_PTR_SET_VALUE(timeRangeType_, timeRangeType) };


  protected:
    // 座席号；说明：根据座席工号查询指定座席的工作量统计支持按照多个座席工号进行查询，多个座席工号之间使用英文逗号","分隔，默认查询账户下所有座席的工作量统计
    shared_ptr<string> cnos_ {};
    // 说明：统计日期的结束时间，格式：yyyy-MM-dd
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 说明：根据外呼编号查询指定座席的工作量统计,默认查询账户下所有座席的工作量统计
    shared_ptr<string> gnos_ {};
    // 查询条数；取值：最大不能超过1000，默认10
    shared_ptr<int64_t> limit_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 查询起始位置；取值：大于等于0，默认0
    shared_ptr<int64_t> start_ {};
    // 说明：统计日期的开始时间，格式：yyyy-MM-dd
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // 统计方法；说明：0：分时1：分日2：汇总 10：队列汇总
    // 
    // This parameter is required.
    shared_ptr<int64_t> statisticMethod_ {};
    // 说明：统计报表类型，1：日报表2：周报表3：月报表4：自定义时间
    // 
    // This parameter is required.
    shared_ptr<int64_t> timeRangeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
