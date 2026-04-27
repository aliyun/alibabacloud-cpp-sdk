// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDWEBCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDWEBCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudWebcallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudWebcallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amd, amd_);
      DARABONBA_PTR_TO_JSON(Clid, clid_);
      DARABONBA_PTR_TO_JSON(ClidAreaCode, clidAreaCode_);
      DARABONBA_PTR_TO_JSON(ClidGroup, clidGroup_);
      DARABONBA_PTR_TO_JSON(ClidList, clidList_);
      DARABONBA_PTR_TO_JSON(CrnId, crnId_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(ExpirTime, expirTime_);
      DARABONBA_PTR_TO_JSON(IvrId, ivrId_);
      DARABONBA_PTR_TO_JSON(MultiTelDelay, multiTelDelay_);
      DARABONBA_PTR_TO_JSON(MultiTelPush, multiTelPush_);
      DARABONBA_PTR_TO_JSON(RequestUniqueId, requestUniqueId_);
      DARABONBA_PTR_TO_JSON(Retry, retry_);
      DARABONBA_PTR_TO_JSON(RetryInterval, retryInterval_);
      DARABONBA_PTR_TO_JSON(Tel, tel_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(UserField, userField_);
      DARABONBA_PTR_TO_JSON(Vid, vid_);
    };
    friend void from_json(const Darabonba::Json& j, CloudWebcallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amd, amd_);
      DARABONBA_PTR_FROM_JSON(Clid, clid_);
      DARABONBA_PTR_FROM_JSON(ClidAreaCode, clidAreaCode_);
      DARABONBA_PTR_FROM_JSON(ClidGroup, clidGroup_);
      DARABONBA_PTR_FROM_JSON(ClidList, clidList_);
      DARABONBA_PTR_FROM_JSON(CrnId, crnId_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(ExpirTime, expirTime_);
      DARABONBA_PTR_FROM_JSON(IvrId, ivrId_);
      DARABONBA_PTR_FROM_JSON(MultiTelDelay, multiTelDelay_);
      DARABONBA_PTR_FROM_JSON(MultiTelPush, multiTelPush_);
      DARABONBA_PTR_FROM_JSON(RequestUniqueId, requestUniqueId_);
      DARABONBA_PTR_FROM_JSON(Retry, retry_);
      DARABONBA_PTR_FROM_JSON(RetryInterval, retryInterval_);
      DARABONBA_PTR_FROM_JSON(Tel, tel_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(UserField, userField_);
      DARABONBA_PTR_FROM_JSON(Vid, vid_);
    };
    CloudWebcallRequest() = default ;
    CloudWebcallRequest(const CloudWebcallRequest &) = default ;
    CloudWebcallRequest(CloudWebcallRequest &&) = default ;
    CloudWebcallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudWebcallRequest() = default ;
    CloudWebcallRequest& operator=(const CloudWebcallRequest &) = default ;
    CloudWebcallRequest& operator=(CloudWebcallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amd_ == nullptr
        && this->clid_ == nullptr && this->clidAreaCode_ == nullptr && this->clidGroup_ == nullptr && this->clidList_ == nullptr && this->crnId_ == nullptr
        && this->delay_ == nullptr && this->enterpriseId_ == nullptr && this->expirTime_ == nullptr && this->ivrId_ == nullptr && this->multiTelDelay_ == nullptr
        && this->multiTelPush_ == nullptr && this->requestUniqueId_ == nullptr && this->retry_ == nullptr && this->retryInterval_ == nullptr && this->tel_ == nullptr
        && this->timeout_ == nullptr && this->userField_ == nullptr && this->vid_ == nullptr; };
    // amd Field Functions 
    bool hasAmd() const { return this->amd_ != nullptr;};
    void deleteAmd() { this->amd_ = nullptr;};
    inline int64_t getAmd() const { DARABONBA_PTR_GET_DEFAULT(amd_, 0L) };
    inline CloudWebcallRequest& setAmd(int64_t amd) { DARABONBA_PTR_SET_VALUE(amd_, amd) };


    // clid Field Functions 
    bool hasClid() const { return this->clid_ != nullptr;};
    void deleteClid() { this->clid_ = nullptr;};
    inline string getClid() const { DARABONBA_PTR_GET_DEFAULT(clid_, "") };
    inline CloudWebcallRequest& setClid(string clid) { DARABONBA_PTR_SET_VALUE(clid_, clid) };


    // clidAreaCode Field Functions 
    bool hasClidAreaCode() const { return this->clidAreaCode_ != nullptr;};
    void deleteClidAreaCode() { this->clidAreaCode_ = nullptr;};
    inline string getClidAreaCode() const { DARABONBA_PTR_GET_DEFAULT(clidAreaCode_, "") };
    inline CloudWebcallRequest& setClidAreaCode(string clidAreaCode) { DARABONBA_PTR_SET_VALUE(clidAreaCode_, clidAreaCode) };


    // clidGroup Field Functions 
    bool hasClidGroup() const { return this->clidGroup_ != nullptr;};
    void deleteClidGroup() { this->clidGroup_ = nullptr;};
    inline string getClidGroup() const { DARABONBA_PTR_GET_DEFAULT(clidGroup_, "") };
    inline CloudWebcallRequest& setClidGroup(string clidGroup) { DARABONBA_PTR_SET_VALUE(clidGroup_, clidGroup) };


    // clidList Field Functions 
    bool hasClidList() const { return this->clidList_ != nullptr;};
    void deleteClidList() { this->clidList_ = nullptr;};
    inline string getClidList() const { DARABONBA_PTR_GET_DEFAULT(clidList_, "") };
    inline CloudWebcallRequest& setClidList(string clidList) { DARABONBA_PTR_SET_VALUE(clidList_, clidList) };


    // crnId Field Functions 
    bool hasCrnId() const { return this->crnId_ != nullptr;};
    void deleteCrnId() { this->crnId_ = nullptr;};
    inline string getCrnId() const { DARABONBA_PTR_GET_DEFAULT(crnId_, "") };
    inline CloudWebcallRequest& setCrnId(string crnId) { DARABONBA_PTR_SET_VALUE(crnId_, crnId) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline int64_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
    inline CloudWebcallRequest& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudWebcallRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // expirTime Field Functions 
    bool hasExpirTime() const { return this->expirTime_ != nullptr;};
    void deleteExpirTime() { this->expirTime_ = nullptr;};
    inline string getExpirTime() const { DARABONBA_PTR_GET_DEFAULT(expirTime_, "") };
    inline CloudWebcallRequest& setExpirTime(string expirTime) { DARABONBA_PTR_SET_VALUE(expirTime_, expirTime) };


    // ivrId Field Functions 
    bool hasIvrId() const { return this->ivrId_ != nullptr;};
    void deleteIvrId() { this->ivrId_ = nullptr;};
    inline int64_t getIvrId() const { DARABONBA_PTR_GET_DEFAULT(ivrId_, 0L) };
    inline CloudWebcallRequest& setIvrId(int64_t ivrId) { DARABONBA_PTR_SET_VALUE(ivrId_, ivrId) };


    // multiTelDelay Field Functions 
    bool hasMultiTelDelay() const { return this->multiTelDelay_ != nullptr;};
    void deleteMultiTelDelay() { this->multiTelDelay_ = nullptr;};
    inline int64_t getMultiTelDelay() const { DARABONBA_PTR_GET_DEFAULT(multiTelDelay_, 0L) };
    inline CloudWebcallRequest& setMultiTelDelay(int64_t multiTelDelay) { DARABONBA_PTR_SET_VALUE(multiTelDelay_, multiTelDelay) };


    // multiTelPush Field Functions 
    bool hasMultiTelPush() const { return this->multiTelPush_ != nullptr;};
    void deleteMultiTelPush() { this->multiTelPush_ = nullptr;};
    inline int64_t getMultiTelPush() const { DARABONBA_PTR_GET_DEFAULT(multiTelPush_, 0L) };
    inline CloudWebcallRequest& setMultiTelPush(int64_t multiTelPush) { DARABONBA_PTR_SET_VALUE(multiTelPush_, multiTelPush) };


    // requestUniqueId Field Functions 
    bool hasRequestUniqueId() const { return this->requestUniqueId_ != nullptr;};
    void deleteRequestUniqueId() { this->requestUniqueId_ = nullptr;};
    inline string getRequestUniqueId() const { DARABONBA_PTR_GET_DEFAULT(requestUniqueId_, "") };
    inline CloudWebcallRequest& setRequestUniqueId(string requestUniqueId) { DARABONBA_PTR_SET_VALUE(requestUniqueId_, requestUniqueId) };


    // retry Field Functions 
    bool hasRetry() const { return this->retry_ != nullptr;};
    void deleteRetry() { this->retry_ = nullptr;};
    inline int64_t getRetry() const { DARABONBA_PTR_GET_DEFAULT(retry_, 0L) };
    inline CloudWebcallRequest& setRetry(int64_t retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


    // retryInterval Field Functions 
    bool hasRetryInterval() const { return this->retryInterval_ != nullptr;};
    void deleteRetryInterval() { this->retryInterval_ = nullptr;};
    inline int64_t getRetryInterval() const { DARABONBA_PTR_GET_DEFAULT(retryInterval_, 0L) };
    inline CloudWebcallRequest& setRetryInterval(int64_t retryInterval) { DARABONBA_PTR_SET_VALUE(retryInterval_, retryInterval) };


    // tel Field Functions 
    bool hasTel() const { return this->tel_ != nullptr;};
    void deleteTel() { this->tel_ = nullptr;};
    inline string getTel() const { DARABONBA_PTR_GET_DEFAULT(tel_, "") };
    inline CloudWebcallRequest& setTel(string tel) { DARABONBA_PTR_SET_VALUE(tel_, tel) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline CloudWebcallRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // userField Field Functions 
    bool hasUserField() const { return this->userField_ != nullptr;};
    void deleteUserField() { this->userField_ = nullptr;};
    inline string getUserField() const { DARABONBA_PTR_GET_DEFAULT(userField_, "") };
    inline CloudWebcallRequest& setUserField(string userField) { DARABONBA_PTR_SET_VALUE(userField_, userField) };


    // vid Field Functions 
    bool hasVid() const { return this->vid_ != nullptr;};
    void deleteVid() { this->vid_ = nullptr;};
    inline string getVid() const { DARABONBA_PTR_GET_DEFAULT(vid_, "") };
    inline CloudWebcallRequest& setVid(string vid) { DARABONBA_PTR_SET_VALUE(vid_, vid) };


  protected:
    // 是否开启amd；自动应答检查（传真机等），1.开启 0.不开启 默认为0
    shared_ptr<int64_t> amd_ {};
    // 可传入企业中继号码或设置好的客户侧外显号码
    shared_ptr<string> clid_ {};
    // 客户侧外显指定地区号码，优先级低于clid
    shared_ptr<string> clidAreaCode_ {};
    // 客户侧外显号码组；使用clidGroup需要账号支持按标识路由，优先级低于clid
    shared_ptr<string> clidGroup_ {};
    // 指定本次外呼使用的客户侧外显号码集合，系统将根据号码调度策略选择可用号码进行外呼
    shared_ptr<string> clidList_ {};
    // 外显导航标识
    shared_ptr<string> crnId_ {};
    // 延迟时长；秒数，延迟多少秒呼叫 参数取值范围：0<=delay<=60 默认为0
    shared_ptr<int64_t> delay_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 过期时间，精确到s，yyyy-MM-dd HH:mm:ss
    shared_ptr<string> expirTime_ {};
    // 回呼接通后进入的ivrId；如果不传此参数，使用后台配置的ivr
    shared_ptr<int64_t> ivrId_ {};
    // 多号码时呼叫延时；tel多个号码时，号码之间的呼叫延迟，最大120秒，默认0
    shared_ptr<int64_t> multiTelDelay_ {};
    // 多号码，是否每个号码呼叫都挂机推送；取值说明 0：只挂机推送一次； 1：每次呼叫都触发挂机推送；默认0
    shared_ptr<int64_t> multiTelPush_ {};
    // 请求唯一标识；说明：长度不超过300个字节。1个汉字是3字节。此字段保存到通话记录requestUniqueId字段，后续接口查询使用。一次接口请求造成的多次呼叫requestUniqueId相同；如果是加密的号码，需要URLEncode后传入
    shared_ptr<string> requestUniqueId_ {};
    // 重试次数；最大5次，使用的企业需要开启webcall自动重试开关
    shared_ptr<int64_t> retry_ {};
    // 重试间隔，单位分钟，最小0分钟，最大59分钟
    shared_ptr<int64_t> retryInterval_ {};
    // 电话号码；固话带区号，手机不加0；固话带分机的以\\"-\\"分隔；支持多个号码，多个直接用英文逗号’,’分隔；传多个号码时，若前面的号码没接通则会呼叫后面的号码，若接通则不会呼叫；[加密外呼](../字段定义/接口部分/加密外呼号码加密规则.md)；如果是加密的号码，需要URLEncode后传入
    // 
    // This parameter is required.
    shared_ptr<string> tel_ {};
    // 呼叫客户超时时间；说明：参数取值范围 0<=timeout<=60；不传入，默认30(单位:s)
    shared_ptr<int64_t> timeout_ {};
    // 用户自定义字段；说明：长度不超过250个字节。1个汉字是3字节。此字段保存到通话记录userField字段，后续接口查询使用。该字段需“动态附带参数”paramNames有值时方可生效。
    shared_ptr<string> userField_ {};
    // 用哪种语言播放ivr提示音；1.普通话 2.粤语 4.标贝TTS 5.普通话-甜美女音 默认为1
    shared_ptr<string> vid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
