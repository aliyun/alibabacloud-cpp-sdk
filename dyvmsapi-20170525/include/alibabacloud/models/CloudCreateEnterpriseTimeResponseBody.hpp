// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDCREATEENTERPRISETIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDCREATEENTERPRISETIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudCreateEnterpriseTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudCreateEnterpriseTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudCreateEnterpriseTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudCreateEnterpriseTimeResponseBody() = default ;
    CloudCreateEnterpriseTimeResponseBody(const CloudCreateEnterpriseTimeResponseBody &) = default ;
    CloudCreateEnterpriseTimeResponseBody(CloudCreateEnterpriseTimeResponseBody &&) = default ;
    CloudCreateEnterpriseTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudCreateEnterpriseTimeResponseBody() = default ;
    CloudCreateEnterpriseTimeResponseBody& operator=(const CloudCreateEnterpriseTimeResponseBody &) = default ;
    CloudCreateEnterpriseTimeResponseBody& operator=(CloudCreateEnterpriseTimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DayOfWeek, dayOfWeek_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
        DARABONBA_PTR_TO_JSON(FromDay, fromDay_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TimeType, timeType_);
        DARABONBA_PTR_TO_JSON(ToDay, toDay_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DayOfWeek, dayOfWeek_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
        DARABONBA_PTR_FROM_JSON(FromDay, fromDay_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
        DARABONBA_PTR_FROM_JSON(ToDay, toDay_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dayOfWeek_ == nullptr && this->endTime_ == nullptr && this->enterpriseId_ == nullptr && this->fromDay_ == nullptr && this->id_ == nullptr
        && this->name_ == nullptr && this->priority_ == nullptr && this->startTime_ == nullptr && this->timeType_ == nullptr && this->toDay_ == nullptr
        && this->type_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dayOfWeek Field Functions 
      bool hasDayOfWeek() const { return this->dayOfWeek_ != nullptr;};
      void deleteDayOfWeek() { this->dayOfWeek_ = nullptr;};
      inline string getDayOfWeek() const { DARABONBA_PTR_GET_DEFAULT(dayOfWeek_, "") };
      inline Data& setDayOfWeek(string dayOfWeek) { DARABONBA_PTR_SET_VALUE(dayOfWeek_, dayOfWeek) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // enterpriseId Field Functions 
      bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
      void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
      inline string getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, "") };
      inline Data& setEnterpriseId(string enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


      // fromDay Field Functions 
      bool hasFromDay() const { return this->fromDay_ != nullptr;};
      void deleteFromDay() { this->fromDay_ = nullptr;};
      inline string getFromDay() const { DARABONBA_PTR_GET_DEFAULT(fromDay_, "") };
      inline Data& setFromDay(string fromDay) { DARABONBA_PTR_SET_VALUE(fromDay_, fromDay) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline Data& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // timeType Field Functions 
      bool hasTimeType() const { return this->timeType_ != nullptr;};
      void deleteTimeType() { this->timeType_ = nullptr;};
      inline string getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
      inline Data& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


      // toDay Field Functions 
      bool hasToDay() const { return this->toDay_ != nullptr;};
      void deleteToDay() { this->toDay_ = nullptr;};
      inline string getToDay() const { DARABONBA_PTR_GET_DEFAULT(toDay_, "") };
      inline Data& setToDay(string toDay) { DARABONBA_PTR_SET_VALUE(toDay_, toDay) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // 创建时间，格式为： yyyy-MM-dd HH:mm:ss
      shared_ptr<string> createTime_ {};
      // 星期 周一：2、周二：3、周三：4、周四：5、周五：6、周六：7、周日：1、使用","进行分割、type=2时为空串
      shared_ptr<string> dayOfWeek_ {};
      // 结束时间 格式为 HH:mm startTime不能大于endTime
      shared_ptr<string> endTime_ {};
      // 呼叫中心编号
      shared_ptr<string> enterpriseId_ {};
      // 起始日期 格式为：yyyy-MM-dd、type=1时为空串 fromDay不能大于toDay
      shared_ptr<string> fromDay_ {};
      // 时间条件id
      shared_ptr<string> id_ {};
      // 时间条件名称 、同一呼叫中心下不能重复
      shared_ptr<string> name_ {};
      // 优先级、同一呼叫中心下不能重复，值从1开始，值越小优先级越高
      shared_ptr<string> priority_ {};
      // 开始时间 格式为 HH:mm startTime不能大于endTime
      shared_ptr<string> startTime_ {};
      // 时间类型 1.连续 2.间隔
      shared_ptr<string> timeType_ {};
      // 终止日期 格式为：yyyy-MM-dd、type=1时为空串 fromDay不能大于toDay
      shared_ptr<string> toDay_ {};
      // 时间条件类型 1:按照星期配置 2:按照固定时间配置
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudCreateEnterpriseTimeResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudCreateEnterpriseTimeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudCreateEnterpriseTimeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudCreateEnterpriseTimeResponseBody::Data) };
    inline CloudCreateEnterpriseTimeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudCreateEnterpriseTimeResponseBody::Data) };
    inline CloudCreateEnterpriseTimeResponseBody& setData(const CloudCreateEnterpriseTimeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudCreateEnterpriseTimeResponseBody& setData(CloudCreateEnterpriseTimeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudCreateEnterpriseTimeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudCreateEnterpriseTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudCreateEnterpriseTimeResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
