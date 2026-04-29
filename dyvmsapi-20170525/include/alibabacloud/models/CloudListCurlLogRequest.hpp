// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDLISTCURLLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDLISTCURLLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudListCurlLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudListCurlLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Retry, retry_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CloudListCurlLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Retry, retry_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CloudListCurlLogRequest() = default ;
    CloudListCurlLogRequest(const CloudListCurlLogRequest &) = default ;
    CloudListCurlLogRequest(CloudListCurlLogRequest &&) = default ;
    CloudListCurlLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudListCurlLogRequest() = default ;
    CloudListCurlLogRequest& operator=(const CloudListCurlLogRequest &) = default ;
    CloudListCurlLogRequest& operator=(CloudListCurlLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->enterpriseId_ == nullptr && this->limit_ == nullptr && this->result_ == nullptr && this->retry_ == nullptr && this->start_ == nullptr
        && this->startTime_ == nullptr && this->type_ == nullptr && this->url_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CloudListCurlLogRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudListCurlLogRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline string getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
    inline CloudListCurlLogRequest& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline int64_t getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, 0L) };
    inline CloudListCurlLogRequest& setResult(int64_t result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // retry Field Functions 
    bool hasRetry() const { return this->retry_ != nullptr;};
    void deleteRetry() { this->retry_ = nullptr;};
    inline int64_t getRetry() const { DARABONBA_PTR_GET_DEFAULT(retry_, 0L) };
    inline CloudListCurlLogRequest& setRetry(int64_t retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline CloudListCurlLogRequest& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CloudListCurlLogRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline CloudListCurlLogRequest& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CloudListCurlLogRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // 查询结束时间；格式:"yyyy-MM-dd HH:mm:ss",精确到s。startTime与endTime不允许跨月，默认值取当前月份最后一天
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 需要取出的数据条数；大于0，最大不能超过500，默认10
    shared_ptr<string> limit_ {};
    // 推送结果；取值：1、成功，0、失败
    shared_ptr<int64_t> result_ {};
    // 重试次数；默认-2
    shared_ptr<int64_t> retry_ {};
    // 从第几条开始取；大于等于0，默认0
    shared_ptr<string> start_ {};
    // 查询开始时间；格式:"yyyy-MM-dd HH:mm:ss",精确到s。startTime与endTime不允许跨月，默认值取当前月份第一天
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // 推送类型；1:来电推送、2:来电响铃推送、3:外呼响铃推送、4:webcall转座席响铃推送、5:来电接通推送、6:外呼接通推送、7:来电挂机推送、8:外呼挂机推送、9:座席状态推送、10:按键推送、11:号码状态识别推送、12:录音状态推送、13:HTTP交互推送、15:ASR语音转换结果推送、14:预测式外呼任务推送、16:webcall客户侧响铃推送、17:满意度调查推送、18:预测外呼客户接听状态推送、19:NLU推送、20:预测外呼双方接听推送、21:IVR交互结束推送、22:外呼客户响铃推送、23:webcall客户接听推送、24:webcall转接响铃推送、25:webcall转接接通推送、26:主叫外呼分机响铃推送、27:主叫外呼分机接听推送、28:主叫外呼客户响铃推送、29:主叫外呼双方接通推送
    shared_ptr<int64_t> type_ {};
    // 推送的url；说明：目的URL
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
