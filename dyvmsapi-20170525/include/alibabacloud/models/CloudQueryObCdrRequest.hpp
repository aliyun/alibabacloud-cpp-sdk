// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDQUERYOBCDRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDQUERYOBCDRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudQueryObCdrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudQueryObCdrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(AgentNumber, agentNumber_);
      DARABONBA_PTR_TO_JSON(CallType, callType_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Clid, clid_);
      DARABONBA_PTR_TO_JSON(Cno, cno_);
      DARABONBA_PTR_TO_JSON(CustomerNumber, customerNumber_);
      DARABONBA_PTR_TO_JSON(DownGrade, downGrade_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(Gno, gno_);
      DARABONBA_PTR_TO_JSON(IsRealAnswer, isRealAnswer_);
      DARABONBA_PTR_TO_JSON(LeftDisplayNumber, leftDisplayNumber_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(RequestUniqueId, requestUniqueId_);
      DARABONBA_PTR_TO_JSON(ReturnCount, returnCount_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeRangeType, timeRangeType_);
      DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
      DARABONBA_PTR_TO_JSON(UserFieldValue, userFieldValue_);
      DARABONBA_PTR_TO_JSON(UserFieldkey, userFieldkey_);
    };
    friend void from_json(const Darabonba::Json& j, CloudQueryObCdrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(AgentNumber, agentNumber_);
      DARABONBA_PTR_FROM_JSON(CallType, callType_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Clid, clid_);
      DARABONBA_PTR_FROM_JSON(Cno, cno_);
      DARABONBA_PTR_FROM_JSON(CustomerNumber, customerNumber_);
      DARABONBA_PTR_FROM_JSON(DownGrade, downGrade_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(Gno, gno_);
      DARABONBA_PTR_FROM_JSON(IsRealAnswer, isRealAnswer_);
      DARABONBA_PTR_FROM_JSON(LeftDisplayNumber, leftDisplayNumber_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(RequestUniqueId, requestUniqueId_);
      DARABONBA_PTR_FROM_JSON(ReturnCount, returnCount_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeRangeType, timeRangeType_);
      DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
      DARABONBA_PTR_FROM_JSON(UserFieldValue, userFieldValue_);
      DARABONBA_PTR_FROM_JSON(UserFieldkey, userFieldkey_);
    };
    CloudQueryObCdrRequest() = default ;
    CloudQueryObCdrRequest(const CloudQueryObCdrRequest &) = default ;
    CloudQueryObCdrRequest(CloudQueryObCdrRequest &&) = default ;
    CloudQueryObCdrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudQueryObCdrRequest() = default ;
    CloudQueryObCdrRequest& operator=(const CloudQueryObCdrRequest &) = default ;
    CloudQueryObCdrRequest& operator=(CloudQueryObCdrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentName_ == nullptr
        && this->agentNumber_ == nullptr && this->callType_ == nullptr && this->city_ == nullptr && this->clid_ == nullptr && this->cno_ == nullptr
        && this->customerNumber_ == nullptr && this->downGrade_ == nullptr && this->endTime_ == nullptr && this->enterpriseId_ == nullptr && this->gno_ == nullptr
        && this->isRealAnswer_ == nullptr && this->leftDisplayNumber_ == nullptr && this->limit_ == nullptr && this->order_ == nullptr && this->province_ == nullptr
        && this->requestUniqueId_ == nullptr && this->returnCount_ == nullptr && this->start_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->timeRangeType_ == nullptr && this->uniqueId_ == nullptr && this->userFieldValue_ == nullptr && this->userFieldkey_ == nullptr; };
    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline CloudQueryObCdrRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // agentNumber Field Functions 
    bool hasAgentNumber() const { return this->agentNumber_ != nullptr;};
    void deleteAgentNumber() { this->agentNumber_ = nullptr;};
    inline string getAgentNumber() const { DARABONBA_PTR_GET_DEFAULT(agentNumber_, "") };
    inline CloudQueryObCdrRequest& setAgentNumber(string agentNumber) { DARABONBA_PTR_SET_VALUE(agentNumber_, agentNumber) };


    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline int64_t getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0L) };
    inline CloudQueryObCdrRequest& setCallType(int64_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline CloudQueryObCdrRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // clid Field Functions 
    bool hasClid() const { return this->clid_ != nullptr;};
    void deleteClid() { this->clid_ = nullptr;};
    inline string getClid() const { DARABONBA_PTR_GET_DEFAULT(clid_, "") };
    inline CloudQueryObCdrRequest& setClid(string clid) { DARABONBA_PTR_SET_VALUE(clid_, clid) };


    // cno Field Functions 
    bool hasCno() const { return this->cno_ != nullptr;};
    void deleteCno() { this->cno_ = nullptr;};
    inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
    inline CloudQueryObCdrRequest& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


    // customerNumber Field Functions 
    bool hasCustomerNumber() const { return this->customerNumber_ != nullptr;};
    void deleteCustomerNumber() { this->customerNumber_ = nullptr;};
    inline string getCustomerNumber() const { DARABONBA_PTR_GET_DEFAULT(customerNumber_, "") };
    inline CloudQueryObCdrRequest& setCustomerNumber(string customerNumber) { DARABONBA_PTR_SET_VALUE(customerNumber_, customerNumber) };


    // downGrade Field Functions 
    bool hasDownGrade() const { return this->downGrade_ != nullptr;};
    void deleteDownGrade() { this->downGrade_ = nullptr;};
    inline int64_t getDownGrade() const { DARABONBA_PTR_GET_DEFAULT(downGrade_, 0L) };
    inline CloudQueryObCdrRequest& setDownGrade(int64_t downGrade) { DARABONBA_PTR_SET_VALUE(downGrade_, downGrade) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CloudQueryObCdrRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudQueryObCdrRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // gno Field Functions 
    bool hasGno() const { return this->gno_ != nullptr;};
    void deleteGno() { this->gno_ = nullptr;};
    inline string getGno() const { DARABONBA_PTR_GET_DEFAULT(gno_, "") };
    inline CloudQueryObCdrRequest& setGno(string gno) { DARABONBA_PTR_SET_VALUE(gno_, gno) };


    // isRealAnswer Field Functions 
    bool hasIsRealAnswer() const { return this->isRealAnswer_ != nullptr;};
    void deleteIsRealAnswer() { this->isRealAnswer_ = nullptr;};
    inline int64_t getIsRealAnswer() const { DARABONBA_PTR_GET_DEFAULT(isRealAnswer_, 0L) };
    inline CloudQueryObCdrRequest& setIsRealAnswer(int64_t isRealAnswer) { DARABONBA_PTR_SET_VALUE(isRealAnswer_, isRealAnswer) };


    // leftDisplayNumber Field Functions 
    bool hasLeftDisplayNumber() const { return this->leftDisplayNumber_ != nullptr;};
    void deleteLeftDisplayNumber() { this->leftDisplayNumber_ = nullptr;};
    inline string getLeftDisplayNumber() const { DARABONBA_PTR_GET_DEFAULT(leftDisplayNumber_, "") };
    inline CloudQueryObCdrRequest& setLeftDisplayNumber(string leftDisplayNumber) { DARABONBA_PTR_SET_VALUE(leftDisplayNumber_, leftDisplayNumber) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline CloudQueryObCdrRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int64_t getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, 0L) };
    inline CloudQueryObCdrRequest& setOrder(int64_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline CloudQueryObCdrRequest& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // requestUniqueId Field Functions 
    bool hasRequestUniqueId() const { return this->requestUniqueId_ != nullptr;};
    void deleteRequestUniqueId() { this->requestUniqueId_ = nullptr;};
    inline string getRequestUniqueId() const { DARABONBA_PTR_GET_DEFAULT(requestUniqueId_, "") };
    inline CloudQueryObCdrRequest& setRequestUniqueId(string requestUniqueId) { DARABONBA_PTR_SET_VALUE(requestUniqueId_, requestUniqueId) };


    // returnCount Field Functions 
    bool hasReturnCount() const { return this->returnCount_ != nullptr;};
    void deleteReturnCount() { this->returnCount_ = nullptr;};
    inline int64_t getReturnCount() const { DARABONBA_PTR_GET_DEFAULT(returnCount_, 0L) };
    inline CloudQueryObCdrRequest& setReturnCount(int64_t returnCount) { DARABONBA_PTR_SET_VALUE(returnCount_, returnCount) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline CloudQueryObCdrRequest& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CloudQueryObCdrRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline CloudQueryObCdrRequest& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeRangeType Field Functions 
    bool hasTimeRangeType() const { return this->timeRangeType_ != nullptr;};
    void deleteTimeRangeType() { this->timeRangeType_ = nullptr;};
    inline string getTimeRangeType() const { DARABONBA_PTR_GET_DEFAULT(timeRangeType_, "") };
    inline CloudQueryObCdrRequest& setTimeRangeType(string timeRangeType) { DARABONBA_PTR_SET_VALUE(timeRangeType_, timeRangeType) };


    // uniqueId Field Functions 
    bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
    void deleteUniqueId() { this->uniqueId_ = nullptr;};
    inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
    inline CloudQueryObCdrRequest& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


    // userFieldValue Field Functions 
    bool hasUserFieldValue() const { return this->userFieldValue_ != nullptr;};
    void deleteUserFieldValue() { this->userFieldValue_ = nullptr;};
    inline string getUserFieldValue() const { DARABONBA_PTR_GET_DEFAULT(userFieldValue_, "") };
    inline CloudQueryObCdrRequest& setUserFieldValue(string userFieldValue) { DARABONBA_PTR_SET_VALUE(userFieldValue_, userFieldValue) };


    // userFieldkey Field Functions 
    bool hasUserFieldkey() const { return this->userFieldkey_ != nullptr;};
    void deleteUserFieldkey() { this->userFieldkey_ = nullptr;};
    inline string getUserFieldkey() const { DARABONBA_PTR_GET_DEFAULT(userFieldkey_, "") };
    inline CloudQueryObCdrRequest& setUserFieldkey(string userFieldkey) { DARABONBA_PTR_SET_VALUE(userFieldkey_, userFieldkey) };


  protected:
    // 座席姓名
    shared_ptr<string> agentName_ {};
    // 座席号码
    shared_ptr<string> agentNumber_ {};
    // 呼叫类型；为空表示全部，可选值为：4:预览外呼 6:主叫外呼 9:内部呼叫
    shared_ptr<int64_t> callType_ {};
    // 客户电话归属城市；为空表示全部，如"成都"，此参数需要URLEncode
    shared_ptr<string> city_ {};
    // 客户侧外显号码过滤条件
    shared_ptr<string> clid_ {};
    // 座席工号，单个座席工号3-10位，支持一个或多个座席工号查询，多个座席工号以英文逗号隔开，一次最多支持100个。不支持模糊匹配。
    shared_ptr<string> cno_ {};
    // 客户号码，支持一个或多个客户号码查询，多个客户号码以英文逗号隔开，一次最多支持100个。不支持模糊匹配。
    shared_ptr<string> customerNumber_ {};
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
    // 客户侧真实外显号码过滤条件，当使用虚拟号进行AXB外呼且开关打开时，实际过滤的客户侧真实外显号码是虚拟号
    shared_ptr<string> leftDisplayNumber_ {};
    // 需要取出的数据条数；大于0，最大不能超过1000，默认10
    shared_ptr<int64_t> limit_ {};
    // 排序方式；取值说明：0: 按照记录产生的时序顺序排序，1：按照记录产生的时序逆序排序，2: 按照结束时间的时序顺序排序，3：按照结束时间的时序逆序排序
    shared_ptr<int64_t> order_ {};
    // 客户电话归属省份；为空表示全部，如"四川"，此参数需要URLEncode
    shared_ptr<string> province_ {};
    // 查询请求唯一id对应的记录信息，默认查询当前月，如requestUniqueId不属于当前月，查询时请传递查询参数 查询开始时间(startTime)
    shared_ptr<string> requestUniqueId_ {};
    // 是否返回总条数；取值说明：0: 不返回，1：返回，不传默认为1
    shared_ptr<int64_t> returnCount_ {};
    // 从第几条开始取；大于等于0，默认0
    shared_ptr<int64_t> start_ {};
    // 查询开始时间；时间戳格式,精确到s。startTime与endTime不允许跨月，默认值取当前月份第一天
    shared_ptr<int64_t> startTime_ {};
    // 呼叫结果；参数说明：30 座席未接听; 31 座席接听,未呼叫客户; 32 座席接听,客户未接听; 33 双方接听; 50 主叫外呼接听; 51 主叫外呼,客户未接听; 52 主叫外呼,双方接听。
    shared_ptr<int64_t> status_ {};
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
