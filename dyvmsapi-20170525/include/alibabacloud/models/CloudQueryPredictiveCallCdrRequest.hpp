// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDQUERYPREDICTIVECALLCDRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDQUERYPREDICTIVECALLCDRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudQueryPredictiveCallCdrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudQueryPredictiveCallCdrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Clid, clid_);
      DARABONBA_PTR_TO_JSON(Cno, cno_);
      DARABONBA_PTR_TO_JSON(CustomerNumber, customerNumber_);
      DARABONBA_PTR_TO_JSON(DisplayNumber, displayNumber_);
      DARABONBA_PTR_TO_JSON(DownGrade, downGrade_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(Gno, gno_);
      DARABONBA_PTR_TO_JSON(IsRealAnswer, isRealAnswer_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(RequestUniqueId, requestUniqueId_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskFileId, taskFileId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TimeRangeType, timeRangeType_);
      DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
      DARABONBA_PTR_TO_JSON(UserFieldValue, userFieldValue_);
      DARABONBA_PTR_TO_JSON(UserFieldkey, userFieldkey_);
    };
    friend void from_json(const Darabonba::Json& j, CloudQueryPredictiveCallCdrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Clid, clid_);
      DARABONBA_PTR_FROM_JSON(Cno, cno_);
      DARABONBA_PTR_FROM_JSON(CustomerNumber, customerNumber_);
      DARABONBA_PTR_FROM_JSON(DisplayNumber, displayNumber_);
      DARABONBA_PTR_FROM_JSON(DownGrade, downGrade_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(Gno, gno_);
      DARABONBA_PTR_FROM_JSON(IsRealAnswer, isRealAnswer_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(RequestUniqueId, requestUniqueId_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskFileId, taskFileId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TimeRangeType, timeRangeType_);
      DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
      DARABONBA_PTR_FROM_JSON(UserFieldValue, userFieldValue_);
      DARABONBA_PTR_FROM_JSON(UserFieldkey, userFieldkey_);
    };
    CloudQueryPredictiveCallCdrRequest() = default ;
    CloudQueryPredictiveCallCdrRequest(const CloudQueryPredictiveCallCdrRequest &) = default ;
    CloudQueryPredictiveCallCdrRequest(CloudQueryPredictiveCallCdrRequest &&) = default ;
    CloudQueryPredictiveCallCdrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudQueryPredictiveCallCdrRequest() = default ;
    CloudQueryPredictiveCallCdrRequest& operator=(const CloudQueryPredictiveCallCdrRequest &) = default ;
    CloudQueryPredictiveCallCdrRequest& operator=(CloudQueryPredictiveCallCdrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentName_ == nullptr
        && this->city_ == nullptr && this->clid_ == nullptr && this->cno_ == nullptr && this->customerNumber_ == nullptr && this->displayNumber_ == nullptr
        && this->downGrade_ == nullptr && this->endTime_ == nullptr && this->enterpriseId_ == nullptr && this->gno_ == nullptr && this->isRealAnswer_ == nullptr
        && this->limit_ == nullptr && this->province_ == nullptr && this->requestUniqueId_ == nullptr && this->start_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->taskFileId_ == nullptr && this->taskId_ == nullptr && this->timeRangeType_ == nullptr && this->uniqueId_ == nullptr
        && this->userFieldValue_ == nullptr && this->userFieldkey_ == nullptr; };
    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline CloudQueryPredictiveCallCdrRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline CloudQueryPredictiveCallCdrRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // clid Field Functions 
    bool hasClid() const { return this->clid_ != nullptr;};
    void deleteClid() { this->clid_ = nullptr;};
    inline string getClid() const { DARABONBA_PTR_GET_DEFAULT(clid_, "") };
    inline CloudQueryPredictiveCallCdrRequest& setClid(string clid) { DARABONBA_PTR_SET_VALUE(clid_, clid) };


    // cno Field Functions 
    bool hasCno() const { return this->cno_ != nullptr;};
    void deleteCno() { this->cno_ = nullptr;};
    inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
    inline CloudQueryPredictiveCallCdrRequest& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


    // customerNumber Field Functions 
    bool hasCustomerNumber() const { return this->customerNumber_ != nullptr;};
    void deleteCustomerNumber() { this->customerNumber_ = nullptr;};
    inline string getCustomerNumber() const { DARABONBA_PTR_GET_DEFAULT(customerNumber_, "") };
    inline CloudQueryPredictiveCallCdrRequest& setCustomerNumber(string customerNumber) { DARABONBA_PTR_SET_VALUE(customerNumber_, customerNumber) };


    // displayNumber Field Functions 
    bool hasDisplayNumber() const { return this->displayNumber_ != nullptr;};
    void deleteDisplayNumber() { this->displayNumber_ = nullptr;};
    inline string getDisplayNumber() const { DARABONBA_PTR_GET_DEFAULT(displayNumber_, "") };
    inline CloudQueryPredictiveCallCdrRequest& setDisplayNumber(string displayNumber) { DARABONBA_PTR_SET_VALUE(displayNumber_, displayNumber) };


    // downGrade Field Functions 
    bool hasDownGrade() const { return this->downGrade_ != nullptr;};
    void deleteDownGrade() { this->downGrade_ = nullptr;};
    inline int64_t getDownGrade() const { DARABONBA_PTR_GET_DEFAULT(downGrade_, 0L) };
    inline CloudQueryPredictiveCallCdrRequest& setDownGrade(int64_t downGrade) { DARABONBA_PTR_SET_VALUE(downGrade_, downGrade) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CloudQueryPredictiveCallCdrRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudQueryPredictiveCallCdrRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // gno Field Functions 
    bool hasGno() const { return this->gno_ != nullptr;};
    void deleteGno() { this->gno_ = nullptr;};
    inline string getGno() const { DARABONBA_PTR_GET_DEFAULT(gno_, "") };
    inline CloudQueryPredictiveCallCdrRequest& setGno(string gno) { DARABONBA_PTR_SET_VALUE(gno_, gno) };


    // isRealAnswer Field Functions 
    bool hasIsRealAnswer() const { return this->isRealAnswer_ != nullptr;};
    void deleteIsRealAnswer() { this->isRealAnswer_ = nullptr;};
    inline int64_t getIsRealAnswer() const { DARABONBA_PTR_GET_DEFAULT(isRealAnswer_, 0L) };
    inline CloudQueryPredictiveCallCdrRequest& setIsRealAnswer(int64_t isRealAnswer) { DARABONBA_PTR_SET_VALUE(isRealAnswer_, isRealAnswer) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline CloudQueryPredictiveCallCdrRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline CloudQueryPredictiveCallCdrRequest& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // requestUniqueId Field Functions 
    bool hasRequestUniqueId() const { return this->requestUniqueId_ != nullptr;};
    void deleteRequestUniqueId() { this->requestUniqueId_ = nullptr;};
    inline string getRequestUniqueId() const { DARABONBA_PTR_GET_DEFAULT(requestUniqueId_, "") };
    inline CloudQueryPredictiveCallCdrRequest& setRequestUniqueId(string requestUniqueId) { DARABONBA_PTR_SET_VALUE(requestUniqueId_, requestUniqueId) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline CloudQueryPredictiveCallCdrRequest& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CloudQueryPredictiveCallCdrRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline CloudQueryPredictiveCallCdrRequest& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskFileId Field Functions 
    bool hasTaskFileId() const { return this->taskFileId_ != nullptr;};
    void deleteTaskFileId() { this->taskFileId_ = nullptr;};
    inline int64_t getTaskFileId() const { DARABONBA_PTR_GET_DEFAULT(taskFileId_, 0L) };
    inline CloudQueryPredictiveCallCdrRequest& setTaskFileId(int64_t taskFileId) { DARABONBA_PTR_SET_VALUE(taskFileId_, taskFileId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline CloudQueryPredictiveCallCdrRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // timeRangeType Field Functions 
    bool hasTimeRangeType() const { return this->timeRangeType_ != nullptr;};
    void deleteTimeRangeType() { this->timeRangeType_ = nullptr;};
    inline string getTimeRangeType() const { DARABONBA_PTR_GET_DEFAULT(timeRangeType_, "") };
    inline CloudQueryPredictiveCallCdrRequest& setTimeRangeType(string timeRangeType) { DARABONBA_PTR_SET_VALUE(timeRangeType_, timeRangeType) };


    // uniqueId Field Functions 
    bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
    void deleteUniqueId() { this->uniqueId_ = nullptr;};
    inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
    inline CloudQueryPredictiveCallCdrRequest& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


    // userFieldValue Field Functions 
    bool hasUserFieldValue() const { return this->userFieldValue_ != nullptr;};
    void deleteUserFieldValue() { this->userFieldValue_ = nullptr;};
    inline string getUserFieldValue() const { DARABONBA_PTR_GET_DEFAULT(userFieldValue_, "") };
    inline CloudQueryPredictiveCallCdrRequest& setUserFieldValue(string userFieldValue) { DARABONBA_PTR_SET_VALUE(userFieldValue_, userFieldValue) };


    // userFieldkey Field Functions 
    bool hasUserFieldkey() const { return this->userFieldkey_ != nullptr;};
    void deleteUserFieldkey() { this->userFieldkey_ = nullptr;};
    inline string getUserFieldkey() const { DARABONBA_PTR_GET_DEFAULT(userFieldkey_, "") };
    inline CloudQueryPredictiveCallCdrRequest& setUserFieldkey(string userFieldkey) { DARABONBA_PTR_SET_VALUE(userFieldkey_, userFieldkey) };


  protected:
    // 座席姓名
    shared_ptr<string> agentName_ {};
    // 客户电话归属城市；为空表示全部，如"成都"，此参数需要URLEncode
    shared_ptr<string> city_ {};
    // 外显号码；外显的号码
    shared_ptr<string> clid_ {};
    // 座席工号，3-10位数字
    shared_ptr<string> cno_ {};
    // 客户电话；客户号码，如：18012345678
    shared_ptr<string> customerNumber_ {};
    // 客户侧真实外显号码，当使用AXB场景进行外呼时，客户侧的真实外显号码为虚拟号
    shared_ptr<string> displayNumber_ {};
    // 是否呼叫降级；0-否, 1-是
    shared_ptr<int64_t> downGrade_ {};
    // 查询结束时间；时间戳格式,精确到s。startTime与endTime不允许跨月，默认值取当前月份最后一天
    shared_ptr<int64_t> endTime_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 座席所属外呼组 单个外呼组号2-20位，支持一个或多个座席工号查询，多个座席工号以英文逗号隔开，一次最多支持10个。不支持模糊匹配。
    shared_ptr<string> gno_ {};
    // 真人接听；取值说明：1-是、0-否
    shared_ptr<int64_t> isRealAnswer_ {};
    // 需要取出的数据条数；大于0，最大不能超过1000，默认10
    shared_ptr<int64_t> limit_ {};
    // 客户电话归属省份；为空表示全部，如"四川"，此参数需要URLEncode
    shared_ptr<string> province_ {};
    // 查询请求唯一id对应的记录信息，默认查询当前月，如requestUniqueId不属于当前月，查询时请传递查询参数 查询开始时间(startTime)
    shared_ptr<string> requestUniqueId_ {};
    // 从第几条开始取；大于等于0，默认0
    shared_ptr<int64_t> start_ {};
    // 查询开始时间；时间戳格式,精确到s。startTime与endTime不允许跨月，默认值取当前月份第一天
    shared_ptr<int64_t> startTime_ {};
    // 呼叫结果；参数说明：40:预测外呼, 客户未接听； 41:预测外呼, 客户接听； 42: 预测外呼,已呼叫； 43: 预测外呼, 双方接听
    shared_ptr<int64_t> status_ {};
    // 批次id
    shared_ptr<int64_t> taskFileId_ {};
    // 外呼任务id
    shared_ptr<int64_t> taskId_ {};
    // 查询时间开始结束范围生效类型；通话记录startTime和endTime时间范围生效类型，当startTime和endTime不为空时生效；取值：1.呼叫开始时间 2.呼叫结束时间； 默认为1
    shared_ptr<string> timeRangeType_ {};
    // 如果uniqueId值不为空，则以下其它参数无效，即仅查询电话唯一标识为uniqueId的记录信息
    shared_ptr<string> uniqueId_ {};
    // 用户自定义参数指定查询value；传递该参数时必须传递userFieldKey，仅查询一个字段，不支持模糊匹配，构造的自定义字段查询条件为:{"userFieldkey":"userFieldvalue"}，此参数需要URLEncode
    shared_ptr<string> userFieldValue_ {};
    // 用户自定义参数指定查询key；传递该参数时必须传递userFieldValue，仅查询一个字段，不支持模糊匹配，构造的自定义字段查询条件为:{"userFieldkey":"userFieldvalue"}，此参数需要URLEncode
    shared_ptr<string> userFieldkey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
