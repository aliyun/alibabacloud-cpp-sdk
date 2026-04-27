// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDPREVIEWOUTCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDPREVIEWOUTCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudPreviewoutcallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudPreviewoutcallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupTels, backupTels_);
      DARABONBA_PTR_TO_JSON(CallVariables, callVariables_);
      DARABONBA_PTR_TO_JSON(CdrIsAsr, cdrIsAsr_);
      DARABONBA_PTR_TO_JSON(ClidList, clidList_);
      DARABONBA_PTR_TO_JSON(Cno, cno_);
      DARABONBA_PTR_TO_JSON(CrnId, crnId_);
      DARABONBA_PTR_TO_JSON(DialTelTimeout, dialTelTimeout_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(IsInvestigation, isInvestigation_);
      DARABONBA_PTR_TO_JSON(ObClid, obClid_);
      DARABONBA_PTR_TO_JSON(ObClidAreaCode, obClidAreaCode_);
      DARABONBA_PTR_TO_JSON(ObClidGroup, obClidGroup_);
      DARABONBA_PTR_TO_JSON(RequestUniqueId, requestUniqueId_);
      DARABONBA_PTR_TO_JSON(Tel, tel_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, CloudPreviewoutcallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupTels, backupTels_);
      DARABONBA_PTR_FROM_JSON(CallVariables, callVariables_);
      DARABONBA_PTR_FROM_JSON(CdrIsAsr, cdrIsAsr_);
      DARABONBA_PTR_FROM_JSON(ClidList, clidList_);
      DARABONBA_PTR_FROM_JSON(Cno, cno_);
      DARABONBA_PTR_FROM_JSON(CrnId, crnId_);
      DARABONBA_PTR_FROM_JSON(DialTelTimeout, dialTelTimeout_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(IsInvestigation, isInvestigation_);
      DARABONBA_PTR_FROM_JSON(ObClid, obClid_);
      DARABONBA_PTR_FROM_JSON(ObClidAreaCode, obClidAreaCode_);
      DARABONBA_PTR_FROM_JSON(ObClidGroup, obClidGroup_);
      DARABONBA_PTR_FROM_JSON(RequestUniqueId, requestUniqueId_);
      DARABONBA_PTR_FROM_JSON(Tel, tel_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    CloudPreviewoutcallRequest() = default ;
    CloudPreviewoutcallRequest(const CloudPreviewoutcallRequest &) = default ;
    CloudPreviewoutcallRequest(CloudPreviewoutcallRequest &&) = default ;
    CloudPreviewoutcallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudPreviewoutcallRequest() = default ;
    CloudPreviewoutcallRequest& operator=(const CloudPreviewoutcallRequest &) = default ;
    CloudPreviewoutcallRequest& operator=(CloudPreviewoutcallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupTels_ == nullptr
        && this->callVariables_ == nullptr && this->cdrIsAsr_ == nullptr && this->clidList_ == nullptr && this->cno_ == nullptr && this->crnId_ == nullptr
        && this->dialTelTimeout_ == nullptr && this->enterpriseId_ == nullptr && this->isInvestigation_ == nullptr && this->obClid_ == nullptr && this->obClidAreaCode_ == nullptr
        && this->obClidGroup_ == nullptr && this->requestUniqueId_ == nullptr && this->tel_ == nullptr && this->timeout_ == nullptr; };
    // backupTels Field Functions 
    bool hasBackupTels() const { return this->backupTels_ != nullptr;};
    void deleteBackupTels() { this->backupTels_ = nullptr;};
    inline string getBackupTels() const { DARABONBA_PTR_GET_DEFAULT(backupTels_, "") };
    inline CloudPreviewoutcallRequest& setBackupTels(string backupTels) { DARABONBA_PTR_SET_VALUE(backupTels_, backupTels) };


    // callVariables Field Functions 
    bool hasCallVariables() const { return this->callVariables_ != nullptr;};
    void deleteCallVariables() { this->callVariables_ = nullptr;};
    inline string getCallVariables() const { DARABONBA_PTR_GET_DEFAULT(callVariables_, "") };
    inline CloudPreviewoutcallRequest& setCallVariables(string callVariables) { DARABONBA_PTR_SET_VALUE(callVariables_, callVariables) };


    // cdrIsAsr Field Functions 
    bool hasCdrIsAsr() const { return this->cdrIsAsr_ != nullptr;};
    void deleteCdrIsAsr() { this->cdrIsAsr_ = nullptr;};
    inline int64_t getCdrIsAsr() const { DARABONBA_PTR_GET_DEFAULT(cdrIsAsr_, 0L) };
    inline CloudPreviewoutcallRequest& setCdrIsAsr(int64_t cdrIsAsr) { DARABONBA_PTR_SET_VALUE(cdrIsAsr_, cdrIsAsr) };


    // clidList Field Functions 
    bool hasClidList() const { return this->clidList_ != nullptr;};
    void deleteClidList() { this->clidList_ = nullptr;};
    inline string getClidList() const { DARABONBA_PTR_GET_DEFAULT(clidList_, "") };
    inline CloudPreviewoutcallRequest& setClidList(string clidList) { DARABONBA_PTR_SET_VALUE(clidList_, clidList) };


    // cno Field Functions 
    bool hasCno() const { return this->cno_ != nullptr;};
    void deleteCno() { this->cno_ = nullptr;};
    inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
    inline CloudPreviewoutcallRequest& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


    // crnId Field Functions 
    bool hasCrnId() const { return this->crnId_ != nullptr;};
    void deleteCrnId() { this->crnId_ = nullptr;};
    inline string getCrnId() const { DARABONBA_PTR_GET_DEFAULT(crnId_, "") };
    inline CloudPreviewoutcallRequest& setCrnId(string crnId) { DARABONBA_PTR_SET_VALUE(crnId_, crnId) };


    // dialTelTimeout Field Functions 
    bool hasDialTelTimeout() const { return this->dialTelTimeout_ != nullptr;};
    void deleteDialTelTimeout() { this->dialTelTimeout_ = nullptr;};
    inline int64_t getDialTelTimeout() const { DARABONBA_PTR_GET_DEFAULT(dialTelTimeout_, 0L) };
    inline CloudPreviewoutcallRequest& setDialTelTimeout(int64_t dialTelTimeout) { DARABONBA_PTR_SET_VALUE(dialTelTimeout_, dialTelTimeout) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudPreviewoutcallRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // isInvestigation Field Functions 
    bool hasIsInvestigation() const { return this->isInvestigation_ != nullptr;};
    void deleteIsInvestigation() { this->isInvestigation_ = nullptr;};
    inline int64_t getIsInvestigation() const { DARABONBA_PTR_GET_DEFAULT(isInvestigation_, 0L) };
    inline CloudPreviewoutcallRequest& setIsInvestigation(int64_t isInvestigation) { DARABONBA_PTR_SET_VALUE(isInvestigation_, isInvestigation) };


    // obClid Field Functions 
    bool hasObClid() const { return this->obClid_ != nullptr;};
    void deleteObClid() { this->obClid_ = nullptr;};
    inline string getObClid() const { DARABONBA_PTR_GET_DEFAULT(obClid_, "") };
    inline CloudPreviewoutcallRequest& setObClid(string obClid) { DARABONBA_PTR_SET_VALUE(obClid_, obClid) };


    // obClidAreaCode Field Functions 
    bool hasObClidAreaCode() const { return this->obClidAreaCode_ != nullptr;};
    void deleteObClidAreaCode() { this->obClidAreaCode_ = nullptr;};
    inline string getObClidAreaCode() const { DARABONBA_PTR_GET_DEFAULT(obClidAreaCode_, "") };
    inline CloudPreviewoutcallRequest& setObClidAreaCode(string obClidAreaCode) { DARABONBA_PTR_SET_VALUE(obClidAreaCode_, obClidAreaCode) };


    // obClidGroup Field Functions 
    bool hasObClidGroup() const { return this->obClidGroup_ != nullptr;};
    void deleteObClidGroup() { this->obClidGroup_ = nullptr;};
    inline string getObClidGroup() const { DARABONBA_PTR_GET_DEFAULT(obClidGroup_, "") };
    inline CloudPreviewoutcallRequest& setObClidGroup(string obClidGroup) { DARABONBA_PTR_SET_VALUE(obClidGroup_, obClidGroup) };


    // requestUniqueId Field Functions 
    bool hasRequestUniqueId() const { return this->requestUniqueId_ != nullptr;};
    void deleteRequestUniqueId() { this->requestUniqueId_ = nullptr;};
    inline string getRequestUniqueId() const { DARABONBA_PTR_GET_DEFAULT(requestUniqueId_, "") };
    inline CloudPreviewoutcallRequest& setRequestUniqueId(string requestUniqueId) { DARABONBA_PTR_SET_VALUE(requestUniqueId_, requestUniqueId) };


    // tel Field Functions 
    bool hasTel() const { return this->tel_ != nullptr;};
    void deleteTel() { this->tel_ = nullptr;};
    inline string getTel() const { DARABONBA_PTR_GET_DEFAULT(tel_, "") };
    inline CloudPreviewoutcallRequest& setTel(string tel) { DARABONBA_PTR_SET_VALUE(tel_, tel) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline CloudPreviewoutcallRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // 备用外呼号码；tel没呼通时呼叫备用号码，最多支持5个号码，多个之间用逗号分隔
    shared_ptr<string> backupTels_ {};
    // 通道变量可以在以下场景中使用：1. 事件推送，作为推送字段使用2. 通话记录中，将字段存储在自定义字段3. 通过SIP-Header方式将字段传到呼叫的下游链路格式如: [{"name":"mainUniqueId","value":"cdr_main_unique_id","type":"2"},{"name":"callType","value":"cdr_call_type","type":"2"}]name：变量名称value：变量值type：变量类型，1.普通变量 2.PJSIP_HEADER变量（用于将变量通过SIP-Header方式传到客户侧，最多支持5个）
    shared_ptr<string> callVariables_ {};
    // 此次通话录音是否进行ASR转写；0.不进行 1.进行 默认：1
    shared_ptr<int64_t> cdrIsAsr_ {};
    // 外显号码集合, 格式如: [{"clid":"1708587xxxx","priority":1},{"clid":"1304412xxxx","priority":2},{"clid":"0107990xxxx","priority":3}] clid：外显号码（String类型）（必填）priority：优先级（Integer类型）（非必填） 特别说明： 一次呼叫最多允许传10个指定号码；若指定了号码优先级，要求所有传入的号码都必传
    shared_ptr<string> clidList_ {};
    // 座席工号；3-10位数字
    // 
    // This parameter is required.
    shared_ptr<string> cno_ {};
    // 外显导航标识
    shared_ptr<string> crnId_ {};
    // 呼叫客户侧超时时间；取值范围 5<=dialTelTimeout<=60，默认45(单位:s)
    shared_ptr<int64_t> dialTelTimeout_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 是否满意度调查；0.不进行满意度调查 1.进行满意度调查，默认：取企业配置
    shared_ptr<int64_t> isInvestigation_ {};
    // 可传入企业中继号码或设置好的客户侧外显号码
    shared_ptr<string> obClid_ {};
    // 指定外显区号；传入区号，在指定区号下外显号码；如果obClid和obClidAreaCode都传的情况下，按照obClid外显
    shared_ptr<string> obClidAreaCode_ {};
    // 客户侧外显号码组；使用clidGroup需要账号支持按标识路由，使用此参数时clid参数无效
    shared_ptr<string> obClidGroup_ {};
    // 请求唯一id；取值：如果没有传入值则系统会生产。如果是加密的号码，需要URLEncode后传入
    shared_ptr<string> requestUniqueId_ {};
    // 需要进行呼叫的客户方电话号码，固话带区号，手机不加0。 当开启号码隐藏设置时，可从弹屏事件中获取customerNumberKey的值，进行外呼；[加密外呼](../字段定义/接口部分/加密外呼号码加密规则.md)；如果是加密的号码，需要URLEncode后传入；当外呼相关配置-支持分机号外呼开启后，此字段可支持传手机号-分机号格式
    // 
    // This parameter is required.
    shared_ptr<string> tel_ {};
    // 呼叫座席侧超时时间；取值范围 5<=timeout<=60，默认30(单位:s)
    shared_ptr<int64_t> timeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
