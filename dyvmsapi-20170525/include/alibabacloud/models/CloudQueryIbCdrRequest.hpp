// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDQUERYIBCDRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDQUERYIBCDRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudQueryIbCdrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudQueryIbCdrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalleeNumber, calleeNumber_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Cno, cno_);
      DARABONBA_PTR_TO_JSON(CustomerNumber, customerNumber_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(Hotline, hotline_);
      DARABONBA_PTR_TO_JSON(JoinQueueCode, joinQueueCode_);
      DARABONBA_PTR_TO_JSON(LeaveQueueCode, leaveQueueCode_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(Qno, qno_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeRangeType, timeRangeType_);
      DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
      DARABONBA_PTR_TO_JSON(UserFieldValue, userFieldValue_);
      DARABONBA_PTR_TO_JSON(UserFieldkey, userFieldkey_);
    };
    friend void from_json(const Darabonba::Json& j, CloudQueryIbCdrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalleeNumber, calleeNumber_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Cno, cno_);
      DARABONBA_PTR_FROM_JSON(CustomerNumber, customerNumber_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(Hotline, hotline_);
      DARABONBA_PTR_FROM_JSON(JoinQueueCode, joinQueueCode_);
      DARABONBA_PTR_FROM_JSON(LeaveQueueCode, leaveQueueCode_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(Qno, qno_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeRangeType, timeRangeType_);
      DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
      DARABONBA_PTR_FROM_JSON(UserFieldValue, userFieldValue_);
      DARABONBA_PTR_FROM_JSON(UserFieldkey, userFieldkey_);
    };
    CloudQueryIbCdrRequest() = default ;
    CloudQueryIbCdrRequest(const CloudQueryIbCdrRequest &) = default ;
    CloudQueryIbCdrRequest(CloudQueryIbCdrRequest &&) = default ;
    CloudQueryIbCdrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudQueryIbCdrRequest() = default ;
    CloudQueryIbCdrRequest& operator=(const CloudQueryIbCdrRequest &) = default ;
    CloudQueryIbCdrRequest& operator=(CloudQueryIbCdrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calleeNumber_ == nullptr
        && this->city_ == nullptr && this->cno_ == nullptr && this->customerNumber_ == nullptr && this->endTime_ == nullptr && this->enterpriseId_ == nullptr
        && this->hotline_ == nullptr && this->joinQueueCode_ == nullptr && this->leaveQueueCode_ == nullptr && this->limit_ == nullptr && this->province_ == nullptr
        && this->qno_ == nullptr && this->start_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->timeRangeType_ == nullptr
        && this->uniqueId_ == nullptr && this->userFieldValue_ == nullptr && this->userFieldkey_ == nullptr; };
    // calleeNumber Field Functions 
    bool hasCalleeNumber() const { return this->calleeNumber_ != nullptr;};
    void deleteCalleeNumber() { this->calleeNumber_ = nullptr;};
    inline string getCalleeNumber() const { DARABONBA_PTR_GET_DEFAULT(calleeNumber_, "") };
    inline CloudQueryIbCdrRequest& setCalleeNumber(string calleeNumber) { DARABONBA_PTR_SET_VALUE(calleeNumber_, calleeNumber) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline CloudQueryIbCdrRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // cno Field Functions 
    bool hasCno() const { return this->cno_ != nullptr;};
    void deleteCno() { this->cno_ = nullptr;};
    inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
    inline CloudQueryIbCdrRequest& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


    // customerNumber Field Functions 
    bool hasCustomerNumber() const { return this->customerNumber_ != nullptr;};
    void deleteCustomerNumber() { this->customerNumber_ = nullptr;};
    inline string getCustomerNumber() const { DARABONBA_PTR_GET_DEFAULT(customerNumber_, "") };
    inline CloudQueryIbCdrRequest& setCustomerNumber(string customerNumber) { DARABONBA_PTR_SET_VALUE(customerNumber_, customerNumber) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CloudQueryIbCdrRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudQueryIbCdrRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // hotline Field Functions 
    bool hasHotline() const { return this->hotline_ != nullptr;};
    void deleteHotline() { this->hotline_ = nullptr;};
    inline string getHotline() const { DARABONBA_PTR_GET_DEFAULT(hotline_, "") };
    inline CloudQueryIbCdrRequest& setHotline(string hotline) { DARABONBA_PTR_SET_VALUE(hotline_, hotline) };


    // joinQueueCode Field Functions 
    bool hasJoinQueueCode() const { return this->joinQueueCode_ != nullptr;};
    void deleteJoinQueueCode() { this->joinQueueCode_ = nullptr;};
    inline int64_t getJoinQueueCode() const { DARABONBA_PTR_GET_DEFAULT(joinQueueCode_, 0L) };
    inline CloudQueryIbCdrRequest& setJoinQueueCode(int64_t joinQueueCode) { DARABONBA_PTR_SET_VALUE(joinQueueCode_, joinQueueCode) };


    // leaveQueueCode Field Functions 
    bool hasLeaveQueueCode() const { return this->leaveQueueCode_ != nullptr;};
    void deleteLeaveQueueCode() { this->leaveQueueCode_ = nullptr;};
    inline int64_t getLeaveQueueCode() const { DARABONBA_PTR_GET_DEFAULT(leaveQueueCode_, 0L) };
    inline CloudQueryIbCdrRequest& setLeaveQueueCode(int64_t leaveQueueCode) { DARABONBA_PTR_SET_VALUE(leaveQueueCode_, leaveQueueCode) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline CloudQueryIbCdrRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline CloudQueryIbCdrRequest& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // qno Field Functions 
    bool hasQno() const { return this->qno_ != nullptr;};
    void deleteQno() { this->qno_ = nullptr;};
    inline string getQno() const { DARABONBA_PTR_GET_DEFAULT(qno_, "") };
    inline CloudQueryIbCdrRequest& setQno(string qno) { DARABONBA_PTR_SET_VALUE(qno_, qno) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline CloudQueryIbCdrRequest& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CloudQueryIbCdrRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline CloudQueryIbCdrRequest& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeRangeType Field Functions 
    bool hasTimeRangeType() const { return this->timeRangeType_ != nullptr;};
    void deleteTimeRangeType() { this->timeRangeType_ = nullptr;};
    inline string getTimeRangeType() const { DARABONBA_PTR_GET_DEFAULT(timeRangeType_, "") };
    inline CloudQueryIbCdrRequest& setTimeRangeType(string timeRangeType) { DARABONBA_PTR_SET_VALUE(timeRangeType_, timeRangeType) };


    // uniqueId Field Functions 
    bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
    void deleteUniqueId() { this->uniqueId_ = nullptr;};
    inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
    inline CloudQueryIbCdrRequest& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


    // userFieldValue Field Functions 
    bool hasUserFieldValue() const { return this->userFieldValue_ != nullptr;};
    void deleteUserFieldValue() { this->userFieldValue_ = nullptr;};
    inline string getUserFieldValue() const { DARABONBA_PTR_GET_DEFAULT(userFieldValue_, "") };
    inline CloudQueryIbCdrRequest& setUserFieldValue(string userFieldValue) { DARABONBA_PTR_SET_VALUE(userFieldValue_, userFieldValue) };


    // userFieldkey Field Functions 
    bool hasUserFieldkey() const { return this->userFieldkey_ != nullptr;};
    void deleteUserFieldkey() { this->userFieldkey_ = nullptr;};
    inline string getUserFieldkey() const { DARABONBA_PTR_GET_DEFAULT(userFieldkey_, "") };
    inline CloudQueryIbCdrRequest& setUserFieldkey(string userFieldkey) { DARABONBA_PTR_SET_VALUE(userFieldkey_, userFieldkey) };


  protected:
    // 座席号码
    shared_ptr<string> calleeNumber_ {};
    // 客户电话归属城市；为空表示全部，如"成都"，此参数需要URLEncode
    shared_ptr<string> city_ {};
    // 座席工号,此字段支持传入多个座席工号，使用英文半角逗号隔开
    shared_ptr<string> cno_ {};
    // 客户号码
    shared_ptr<string> customerNumber_ {};
    // 查询结束时间；时间戳格式,精确到s。startTime与endTime不允许跨月，默认值取当前月份最后一天
    shared_ptr<int64_t> endTime_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 热线号码
    shared_ptr<string> hotline_ {};
    // 未进入队列原因 参数说明： 4: 无座席未进入队列 , 3: 队列满未进入队列
    shared_ptr<int64_t> joinQueueCode_ {};
    // 离开队列原因 参数说明： 2: 队列中放弃 , 3: 队列中超时溢出 , 4: 队列中无座席溢出
    shared_ptr<int64_t> leaveQueueCode_ {};
    // 需要取出的数据条数；大于0，最大不能超过1000，默认10
    shared_ptr<int64_t> limit_ {};
    // 客户电话归属省份；为空表示全部，如"四川"，此参数需要URLEncode
    shared_ptr<string> province_ {};
    // 队列号 参数说明：-1: 未进入队列
    shared_ptr<string> qno_ {};
    // 从第几条开始取；大于等于0，默认0
    shared_ptr<int64_t> start_ {};
    // 查询开始时间；时间戳格式,精确到s。startTime与endTime不允许跨月，默认值取当前月份第一天
    shared_ptr<int64_t> startTime_ {};
    // 呼叫结果；参数说明： 1:座席接听 2:已呼叫座席，座席未接听 3:系统接听 4:系统未接听-IVR配置错误 5:系统未接听-停机 6:系统未接听-欠费 7:系统未接听-黑名单 8:系统未接听-未注册 9:系统未接听-彩铃 11:系统未接听-呼叫超出营帐中设置的最大限制 12:系统未接听-客户呼入系统后在系统未应答前挂机 13:其他错误 14:未进入队列 15:队列中放弃 16:队列中超时溢出 17:队列中无座席溢出 18:无座席未进入队列 19:队列满未进入队列
    shared_ptr<int64_t> status_ {};
    // 查询时间开始结束范围生效类型；通话记录startTime和endTime时间范围生效类型，当startTime和endTime不为空时生效；取值：1.呼叫开始时间 2.呼叫结束时间； 默认为1
    shared_ptr<string> timeRangeType_ {};
    // 如果uniqueId值不为空，则以下其它参数无效，即仅查询电话唯一标识为uniqueId的记录信息
    shared_ptr<string> uniqueId_ {};
    // 用户自定义参数指定查询value；传递该参数时必须传递userFieldKey，仅查询一个字段，不支持模糊匹配， 构造的自定义字段查询条件为:{"userFieldkey":"userFieldvalue"}，此参数需要URLEncode
    shared_ptr<string> userFieldValue_ {};
    // 用户自定义参数指定查询key；传递该参数时必须传递userFieldValue，仅查询一个字段，不支持模糊匹配， 构造的自定义字段查询条件为:{"userFieldkey":"userFieldvalue"}，此参数需要URLEncode
    shared_ptr<string> userFieldkey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
