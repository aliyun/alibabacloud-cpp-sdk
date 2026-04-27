// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDBATCHCREATEAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDBATCHCREATEAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudBatchCreateAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudBatchCreateAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
      DARABONBA_PTR_TO_JSON(CallPower, callPower_);
      DARABONBA_PTR_TO_JSON(Cno, cno_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(EndCno, endCno_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(IbRecord, ibRecord_);
      DARABONBA_PTR_TO_JSON(IsAsr, isAsr_);
      DARABONBA_PTR_TO_JSON(IsOb, isOb_);
      DARABONBA_PTR_TO_JSON(IsQualityCheck, isQualityCheck_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ObClid, obClid_);
      DARABONBA_PTR_TO_JSON(ObClidProperty, obClidProperty_);
      DARABONBA_PTR_TO_JSON(ObClidType, obClidType_);
      DARABONBA_PTR_TO_JSON(ObRecord, obRecord_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Power, power_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SkillIds, skillIds_);
      DARABONBA_PTR_TO_JSON(SkillLevels, skillLevels_);
      DARABONBA_PTR_TO_JSON(WebrtcUrlType, webrtcUrlType_);
      DARABONBA_PTR_TO_JSON(Wrapup, wrapup_);
    };
    friend void from_json(const Darabonba::Json& j, CloudBatchCreateAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
      DARABONBA_PTR_FROM_JSON(CallPower, callPower_);
      DARABONBA_PTR_FROM_JSON(Cno, cno_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(EndCno, endCno_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(IbRecord, ibRecord_);
      DARABONBA_PTR_FROM_JSON(IsAsr, isAsr_);
      DARABONBA_PTR_FROM_JSON(IsOb, isOb_);
      DARABONBA_PTR_FROM_JSON(IsQualityCheck, isQualityCheck_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ObClid, obClid_);
      DARABONBA_PTR_FROM_JSON(ObClidProperty, obClidProperty_);
      DARABONBA_PTR_FROM_JSON(ObClidType, obClidType_);
      DARABONBA_PTR_FROM_JSON(ObRecord, obRecord_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Power, power_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SkillIds, skillIds_);
      DARABONBA_PTR_FROM_JSON(SkillLevels, skillLevels_);
      DARABONBA_PTR_FROM_JSON(WebrtcUrlType, webrtcUrlType_);
      DARABONBA_PTR_FROM_JSON(Wrapup, wrapup_);
    };
    CloudBatchCreateAgentRequest() = default ;
    CloudBatchCreateAgentRequest(const CloudBatchCreateAgentRequest &) = default ;
    CloudBatchCreateAgentRequest(CloudBatchCreateAgentRequest &&) = default ;
    CloudBatchCreateAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudBatchCreateAgentRequest() = default ;
    CloudBatchCreateAgentRequest& operator=(const CloudBatchCreateAgentRequest &) = default ;
    CloudBatchCreateAgentRequest& operator=(CloudBatchCreateAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && this->areaCode_ == nullptr && this->callPower_ == nullptr && this->cno_ == nullptr && this->comment_ == nullptr && this->endCno_ == nullptr
        && this->enterpriseId_ == nullptr && this->ibRecord_ == nullptr && this->isAsr_ == nullptr && this->isOb_ == nullptr && this->isQualityCheck_ == nullptr
        && this->name_ == nullptr && this->obClid_ == nullptr && this->obClidProperty_ == nullptr && this->obClidType_ == nullptr && this->obRecord_ == nullptr
        && this->ownerId_ == nullptr && this->power_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->skillIds_ == nullptr
        && this->skillLevels_ == nullptr && this->webrtcUrlType_ == nullptr && this->wrapup_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline int64_t getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, 0L) };
    inline CloudBatchCreateAgentRequest& setActive(int64_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // areaCode Field Functions 
    bool hasAreaCode() const { return this->areaCode_ != nullptr;};
    void deleteAreaCode() { this->areaCode_ = nullptr;};
    inline string getAreaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
    inline CloudBatchCreateAgentRequest& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


    // callPower Field Functions 
    bool hasCallPower() const { return this->callPower_ != nullptr;};
    void deleteCallPower() { this->callPower_ = nullptr;};
    inline int64_t getCallPower() const { DARABONBA_PTR_GET_DEFAULT(callPower_, 0L) };
    inline CloudBatchCreateAgentRequest& setCallPower(int64_t callPower) { DARABONBA_PTR_SET_VALUE(callPower_, callPower) };


    // cno Field Functions 
    bool hasCno() const { return this->cno_ != nullptr;};
    void deleteCno() { this->cno_ = nullptr;};
    inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
    inline CloudBatchCreateAgentRequest& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CloudBatchCreateAgentRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // endCno Field Functions 
    bool hasEndCno() const { return this->endCno_ != nullptr;};
    void deleteEndCno() { this->endCno_ = nullptr;};
    inline string getEndCno() const { DARABONBA_PTR_GET_DEFAULT(endCno_, "") };
    inline CloudBatchCreateAgentRequest& setEndCno(string endCno) { DARABONBA_PTR_SET_VALUE(endCno_, endCno) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudBatchCreateAgentRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // ibRecord Field Functions 
    bool hasIbRecord() const { return this->ibRecord_ != nullptr;};
    void deleteIbRecord() { this->ibRecord_ = nullptr;};
    inline int64_t getIbRecord() const { DARABONBA_PTR_GET_DEFAULT(ibRecord_, 0L) };
    inline CloudBatchCreateAgentRequest& setIbRecord(int64_t ibRecord) { DARABONBA_PTR_SET_VALUE(ibRecord_, ibRecord) };


    // isAsr Field Functions 
    bool hasIsAsr() const { return this->isAsr_ != nullptr;};
    void deleteIsAsr() { this->isAsr_ = nullptr;};
    inline int64_t getIsAsr() const { DARABONBA_PTR_GET_DEFAULT(isAsr_, 0L) };
    inline CloudBatchCreateAgentRequest& setIsAsr(int64_t isAsr) { DARABONBA_PTR_SET_VALUE(isAsr_, isAsr) };


    // isOb Field Functions 
    bool hasIsOb() const { return this->isOb_ != nullptr;};
    void deleteIsOb() { this->isOb_ = nullptr;};
    inline int64_t getIsOb() const { DARABONBA_PTR_GET_DEFAULT(isOb_, 0L) };
    inline CloudBatchCreateAgentRequest& setIsOb(int64_t isOb) { DARABONBA_PTR_SET_VALUE(isOb_, isOb) };


    // isQualityCheck Field Functions 
    bool hasIsQualityCheck() const { return this->isQualityCheck_ != nullptr;};
    void deleteIsQualityCheck() { this->isQualityCheck_ = nullptr;};
    inline int64_t getIsQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(isQualityCheck_, 0L) };
    inline CloudBatchCreateAgentRequest& setIsQualityCheck(int64_t isQualityCheck) { DARABONBA_PTR_SET_VALUE(isQualityCheck_, isQualityCheck) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CloudBatchCreateAgentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // obClid Field Functions 
    bool hasObClid() const { return this->obClid_ != nullptr;};
    void deleteObClid() { this->obClid_ = nullptr;};
    inline string getObClid() const { DARABONBA_PTR_GET_DEFAULT(obClid_, "") };
    inline CloudBatchCreateAgentRequest& setObClid(string obClid) { DARABONBA_PTR_SET_VALUE(obClid_, obClid) };


    // obClidProperty Field Functions 
    bool hasObClidProperty() const { return this->obClidProperty_ != nullptr;};
    void deleteObClidProperty() { this->obClidProperty_ = nullptr;};
    inline string getObClidProperty() const { DARABONBA_PTR_GET_DEFAULT(obClidProperty_, "") };
    inline CloudBatchCreateAgentRequest& setObClidProperty(string obClidProperty) { DARABONBA_PTR_SET_VALUE(obClidProperty_, obClidProperty) };


    // obClidType Field Functions 
    bool hasObClidType() const { return this->obClidType_ != nullptr;};
    void deleteObClidType() { this->obClidType_ = nullptr;};
    inline int64_t getObClidType() const { DARABONBA_PTR_GET_DEFAULT(obClidType_, 0L) };
    inline CloudBatchCreateAgentRequest& setObClidType(int64_t obClidType) { DARABONBA_PTR_SET_VALUE(obClidType_, obClidType) };


    // obRecord Field Functions 
    bool hasObRecord() const { return this->obRecord_ != nullptr;};
    void deleteObRecord() { this->obRecord_ = nullptr;};
    inline int64_t getObRecord() const { DARABONBA_PTR_GET_DEFAULT(obRecord_, 0L) };
    inline CloudBatchCreateAgentRequest& setObRecord(int64_t obRecord) { DARABONBA_PTR_SET_VALUE(obRecord_, obRecord) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CloudBatchCreateAgentRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // power Field Functions 
    bool hasPower() const { return this->power_ != nullptr;};
    void deletePower() { this->power_ = nullptr;};
    inline int64_t getPower() const { DARABONBA_PTR_GET_DEFAULT(power_, 0L) };
    inline CloudBatchCreateAgentRequest& setPower(int64_t power) { DARABONBA_PTR_SET_VALUE(power_, power) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CloudBatchCreateAgentRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CloudBatchCreateAgentRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // skillIds Field Functions 
    bool hasSkillIds() const { return this->skillIds_ != nullptr;};
    void deleteSkillIds() { this->skillIds_ = nullptr;};
    inline string getSkillIds() const { DARABONBA_PTR_GET_DEFAULT(skillIds_, "") };
    inline CloudBatchCreateAgentRequest& setSkillIds(string skillIds) { DARABONBA_PTR_SET_VALUE(skillIds_, skillIds) };


    // skillLevels Field Functions 
    bool hasSkillLevels() const { return this->skillLevels_ != nullptr;};
    void deleteSkillLevels() { this->skillLevels_ = nullptr;};
    inline string getSkillLevels() const { DARABONBA_PTR_GET_DEFAULT(skillLevels_, "") };
    inline CloudBatchCreateAgentRequest& setSkillLevels(string skillLevels) { DARABONBA_PTR_SET_VALUE(skillLevels_, skillLevels) };


    // webrtcUrlType Field Functions 
    bool hasWebrtcUrlType() const { return this->webrtcUrlType_ != nullptr;};
    void deleteWebrtcUrlType() { this->webrtcUrlType_ = nullptr;};
    inline int64_t getWebrtcUrlType() const { DARABONBA_PTR_GET_DEFAULT(webrtcUrlType_, 0L) };
    inline CloudBatchCreateAgentRequest& setWebrtcUrlType(int64_t webrtcUrlType) { DARABONBA_PTR_SET_VALUE(webrtcUrlType_, webrtcUrlType) };


    // wrapup Field Functions 
    bool hasWrapup() const { return this->wrapup_ != nullptr;};
    void deleteWrapup() { this->wrapup_ = nullptr;};
    inline int64_t getWrapup() const { DARABONBA_PTR_GET_DEFAULT(wrapup_, 0L) };
    inline CloudBatchCreateAgentRequest& setWrapup(int64_t wrapup) { DARABONBA_PTR_SET_VALUE(wrapup_, wrapup) };


  protected:
    // 是否激活；取值0或1，取值说明 0：不激活，1激活，默认激活
    shared_ptr<int64_t> active_ {};
    // 座席所属区号；区号格式
    // 
    // This parameter is required.
    shared_ptr<string> areaCode_ {};
    // 呼叫权限；取值说明 0：无限制，1：国内长途，2：国内本市，3：内部呼叫，默认无限制
    shared_ptr<int64_t> callPower_ {};
    // 开始座席工号；正整数，取值3-10位数字
    // 
    // This parameter is required.
    shared_ptr<string> cno_ {};
    // 备注
    shared_ptr<string> comment_ {};
    // 结束座席工号；正整数，取值3-10位数字，单次批量创建不能超过100个
    // 
    // This parameter is required.
    shared_ptr<string> endCno_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 呼入是否录音；取值说明 0：不录用，1：录音，默认录音
    shared_ptr<int64_t> ibRecord_ {};
    // 是否开启ASR转写；取值说明：0：不开启，1：开启，默认不开启
    shared_ptr<int64_t> isAsr_ {};
    // 是否允许外呼；取值说明 0：不允许，1：可以，默认允许
    shared_ptr<int64_t> isOb_ {};
    // 是否开启座席质检；取值说明：0：不开启，1：开启，默认开启
    shared_ptr<int64_t> isQualityCheck_ {};
    // 座席姓名；需进行UTF-8格式的URLEncode编码
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // 透传号码；可传入企业中继号码或设置好的客户侧外显号码，当obClidType值为2或3时必选
    shared_ptr<string> obClid_ {};
    // 外显属性；取值：{"isMatchCapital":0,"areaCodeRule":1}；obClidType=4时，isMatchCapital表示是否匹配省会号码，1是 0否，areaCodeRule表示区号匹配规则，1座席区号 2客户号码区号
    shared_ptr<string> obClidProperty_ {};
    // 外显规则；取值：1:默认 2:随机 3:按区号 4 动态外显 ，默认值为1
    shared_ptr<int64_t> obClidType_ {};
    // 外呼是否录音；取值说明 0：不录音，1：录音，默认录音
    shared_ptr<int64_t> obRecord_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 座席权限；取值1或0，取值说明 1：班长席，0：普通座席，默认为0 普通座席
    shared_ptr<int64_t> power_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 所选的技能id；可选择多个，多个之间使用英文标点逗号间隔.例如:"1,2,3"；传入skillIds时，需要同时传入skillLevels
    shared_ptr<string> skillIds_ {};
    // 所选的技能的等级；值越小技能越高，多个间用英文标点逗号间隔。(与技能id相对应) 例如:"5,1,1"表示技能id为1的等级是5; 技能id为2的等级是1; 技能id为3的等级是1.
    shared_ptr<string> skillLevels_ {};
    // webrtc软电话返回地址；取值说明：0：企业默认 1：公网域名 2：专线域名 3：公网IP 4：专线IP
    shared_ptr<int64_t> webrtcUrlType_ {};
    // 整理时间；单位秒数，默认10秒
    shared_ptr<int64_t> wrapup_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
