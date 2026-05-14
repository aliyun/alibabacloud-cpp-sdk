// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKCREATECLIENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLINKCREATECLIENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkCreateClientShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkCreateClientShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
      DARABONBA_PTR_TO_JSON(AssignType, assignType_);
      DARABONBA_PTR_TO_JSON(Clid, clidShrink_);
      DARABONBA_PTR_TO_JSON(ClidArea, clidAreaShrink_);
      DARABONBA_PTR_TO_JSON(ClidDefault, clidDefaultShrink_);
      DARABONBA_PTR_TO_JSON(ClidRule, clidRule_);
      DARABONBA_PTR_TO_JSON(ClidType, clidType_);
      DARABONBA_PTR_TO_JSON(CloudNumberEnabled, cloudNumberEnabled_);
      DARABONBA_PTR_TO_JSON(CloudNumberModes, cloudNumberModesShrink_);
      DARABONBA_PTR_TO_JSON(Cno, cno_);
      DARABONBA_PTR_TO_JSON(CrmId, crmId_);
      DARABONBA_PTR_TO_JSON(DynamicTelGroupIdDefault, dynamicTelGroupIdDefault_);
      DARABONBA_PTR_TO_JSON(DynamicTelGroupName, dynamicTelGroupName_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(HiddenTel, hiddenTel_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ObClidDefaultType, obClidDefaultType_);
      DARABONBA_PTR_TO_JSON(ObHangupSms, obHangupSms_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PauseLogin, pauseLogin_);
      DARABONBA_PTR_TO_JSON(Permission, permissionShrink_);
      DARABONBA_PTR_TO_JSON(Qnos, qnosShrink_);
      DARABONBA_PTR_TO_JSON(RecurrentselectionType, recurrentselectionType_);
      DARABONBA_PTR_TO_JSON(RecurrentselectionValue, recurrentselectionValue_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(ServeArea, serveAreaShrink_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WechatMiniProgramRtc, wechatMiniProgramRtc_);
      DARABONBA_PTR_TO_JSON(WrapupTime, wrapupTime_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkCreateClientShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
      DARABONBA_PTR_FROM_JSON(AssignType, assignType_);
      DARABONBA_PTR_FROM_JSON(Clid, clidShrink_);
      DARABONBA_PTR_FROM_JSON(ClidArea, clidAreaShrink_);
      DARABONBA_PTR_FROM_JSON(ClidDefault, clidDefaultShrink_);
      DARABONBA_PTR_FROM_JSON(ClidRule, clidRule_);
      DARABONBA_PTR_FROM_JSON(ClidType, clidType_);
      DARABONBA_PTR_FROM_JSON(CloudNumberEnabled, cloudNumberEnabled_);
      DARABONBA_PTR_FROM_JSON(CloudNumberModes, cloudNumberModesShrink_);
      DARABONBA_PTR_FROM_JSON(Cno, cno_);
      DARABONBA_PTR_FROM_JSON(CrmId, crmId_);
      DARABONBA_PTR_FROM_JSON(DynamicTelGroupIdDefault, dynamicTelGroupIdDefault_);
      DARABONBA_PTR_FROM_JSON(DynamicTelGroupName, dynamicTelGroupName_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(HiddenTel, hiddenTel_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ObClidDefaultType, obClidDefaultType_);
      DARABONBA_PTR_FROM_JSON(ObHangupSms, obHangupSms_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PauseLogin, pauseLogin_);
      DARABONBA_PTR_FROM_JSON(Permission, permissionShrink_);
      DARABONBA_PTR_FROM_JSON(Qnos, qnosShrink_);
      DARABONBA_PTR_FROM_JSON(RecurrentselectionType, recurrentselectionType_);
      DARABONBA_PTR_FROM_JSON(RecurrentselectionValue, recurrentselectionValue_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(ServeArea, serveAreaShrink_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WechatMiniProgramRtc, wechatMiniProgramRtc_);
      DARABONBA_PTR_FROM_JSON(WrapupTime, wrapupTime_);
    };
    ClinkCreateClientShrinkRequest() = default ;
    ClinkCreateClientShrinkRequest(const ClinkCreateClientShrinkRequest &) = default ;
    ClinkCreateClientShrinkRequest(ClinkCreateClientShrinkRequest &&) = default ;
    ClinkCreateClientShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkCreateClientShrinkRequest() = default ;
    ClinkCreateClientShrinkRequest& operator=(const ClinkCreateClientShrinkRequest &) = default ;
    ClinkCreateClientShrinkRequest& operator=(ClinkCreateClientShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && this->areaCode_ == nullptr && this->assignType_ == nullptr && this->clidShrink_ == nullptr && this->clidAreaShrink_ == nullptr && this->clidDefaultShrink_ == nullptr
        && this->clidRule_ == nullptr && this->clidType_ == nullptr && this->cloudNumberEnabled_ == nullptr && this->cloudNumberModesShrink_ == nullptr && this->cno_ == nullptr
        && this->crmId_ == nullptr && this->dynamicTelGroupIdDefault_ == nullptr && this->dynamicTelGroupName_ == nullptr && this->enterpriseId_ == nullptr && this->hiddenTel_ == nullptr
        && this->name_ == nullptr && this->obClidDefaultType_ == nullptr && this->obHangupSms_ == nullptr && this->ownerId_ == nullptr && this->password_ == nullptr
        && this->pauseLogin_ == nullptr && this->permissionShrink_ == nullptr && this->qnosShrink_ == nullptr && this->recurrentselectionType_ == nullptr && this->recurrentselectionValue_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->role_ == nullptr && this->serveAreaShrink_ == nullptr && this->type_ == nullptr
        && this->wechatMiniProgramRtc_ == nullptr && this->wrapupTime_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline int64_t getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, 0L) };
    inline ClinkCreateClientShrinkRequest& setActive(int64_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // areaCode Field Functions 
    bool hasAreaCode() const { return this->areaCode_ != nullptr;};
    void deleteAreaCode() { this->areaCode_ = nullptr;};
    inline string getAreaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
    inline ClinkCreateClientShrinkRequest& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


    // assignType Field Functions 
    bool hasAssignType() const { return this->assignType_ != nullptr;};
    void deleteAssignType() { this->assignType_ = nullptr;};
    inline int64_t getAssignType() const { DARABONBA_PTR_GET_DEFAULT(assignType_, 0L) };
    inline ClinkCreateClientShrinkRequest& setAssignType(int64_t assignType) { DARABONBA_PTR_SET_VALUE(assignType_, assignType) };


    // clidShrink Field Functions 
    bool hasClidShrink() const { return this->clidShrink_ != nullptr;};
    void deleteClidShrink() { this->clidShrink_ = nullptr;};
    inline string getClidShrink() const { DARABONBA_PTR_GET_DEFAULT(clidShrink_, "") };
    inline ClinkCreateClientShrinkRequest& setClidShrink(string clidShrink) { DARABONBA_PTR_SET_VALUE(clidShrink_, clidShrink) };


    // clidAreaShrink Field Functions 
    bool hasClidAreaShrink() const { return this->clidAreaShrink_ != nullptr;};
    void deleteClidAreaShrink() { this->clidAreaShrink_ = nullptr;};
    inline string getClidAreaShrink() const { DARABONBA_PTR_GET_DEFAULT(clidAreaShrink_, "") };
    inline ClinkCreateClientShrinkRequest& setClidAreaShrink(string clidAreaShrink) { DARABONBA_PTR_SET_VALUE(clidAreaShrink_, clidAreaShrink) };


    // clidDefaultShrink Field Functions 
    bool hasClidDefaultShrink() const { return this->clidDefaultShrink_ != nullptr;};
    void deleteClidDefaultShrink() { this->clidDefaultShrink_ = nullptr;};
    inline string getClidDefaultShrink() const { DARABONBA_PTR_GET_DEFAULT(clidDefaultShrink_, "") };
    inline ClinkCreateClientShrinkRequest& setClidDefaultShrink(string clidDefaultShrink) { DARABONBA_PTR_SET_VALUE(clidDefaultShrink_, clidDefaultShrink) };


    // clidRule Field Functions 
    bool hasClidRule() const { return this->clidRule_ != nullptr;};
    void deleteClidRule() { this->clidRule_ = nullptr;};
    inline int64_t getClidRule() const { DARABONBA_PTR_GET_DEFAULT(clidRule_, 0L) };
    inline ClinkCreateClientShrinkRequest& setClidRule(int64_t clidRule) { DARABONBA_PTR_SET_VALUE(clidRule_, clidRule) };


    // clidType Field Functions 
    bool hasClidType() const { return this->clidType_ != nullptr;};
    void deleteClidType() { this->clidType_ = nullptr;};
    inline int64_t getClidType() const { DARABONBA_PTR_GET_DEFAULT(clidType_, 0L) };
    inline ClinkCreateClientShrinkRequest& setClidType(int64_t clidType) { DARABONBA_PTR_SET_VALUE(clidType_, clidType) };


    // cloudNumberEnabled Field Functions 
    bool hasCloudNumberEnabled() const { return this->cloudNumberEnabled_ != nullptr;};
    void deleteCloudNumberEnabled() { this->cloudNumberEnabled_ = nullptr;};
    inline int64_t getCloudNumberEnabled() const { DARABONBA_PTR_GET_DEFAULT(cloudNumberEnabled_, 0L) };
    inline ClinkCreateClientShrinkRequest& setCloudNumberEnabled(int64_t cloudNumberEnabled) { DARABONBA_PTR_SET_VALUE(cloudNumberEnabled_, cloudNumberEnabled) };


    // cloudNumberModesShrink Field Functions 
    bool hasCloudNumberModesShrink() const { return this->cloudNumberModesShrink_ != nullptr;};
    void deleteCloudNumberModesShrink() { this->cloudNumberModesShrink_ = nullptr;};
    inline string getCloudNumberModesShrink() const { DARABONBA_PTR_GET_DEFAULT(cloudNumberModesShrink_, "") };
    inline ClinkCreateClientShrinkRequest& setCloudNumberModesShrink(string cloudNumberModesShrink) { DARABONBA_PTR_SET_VALUE(cloudNumberModesShrink_, cloudNumberModesShrink) };


    // cno Field Functions 
    bool hasCno() const { return this->cno_ != nullptr;};
    void deleteCno() { this->cno_ = nullptr;};
    inline int64_t getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, 0L) };
    inline ClinkCreateClientShrinkRequest& setCno(int64_t cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


    // crmId Field Functions 
    bool hasCrmId() const { return this->crmId_ != nullptr;};
    void deleteCrmId() { this->crmId_ = nullptr;};
    inline int64_t getCrmId() const { DARABONBA_PTR_GET_DEFAULT(crmId_, 0L) };
    inline ClinkCreateClientShrinkRequest& setCrmId(int64_t crmId) { DARABONBA_PTR_SET_VALUE(crmId_, crmId) };


    // dynamicTelGroupIdDefault Field Functions 
    bool hasDynamicTelGroupIdDefault() const { return this->dynamicTelGroupIdDefault_ != nullptr;};
    void deleteDynamicTelGroupIdDefault() { this->dynamicTelGroupIdDefault_ = nullptr;};
    inline int64_t getDynamicTelGroupIdDefault() const { DARABONBA_PTR_GET_DEFAULT(dynamicTelGroupIdDefault_, 0L) };
    inline ClinkCreateClientShrinkRequest& setDynamicTelGroupIdDefault(int64_t dynamicTelGroupIdDefault) { DARABONBA_PTR_SET_VALUE(dynamicTelGroupIdDefault_, dynamicTelGroupIdDefault) };


    // dynamicTelGroupName Field Functions 
    bool hasDynamicTelGroupName() const { return this->dynamicTelGroupName_ != nullptr;};
    void deleteDynamicTelGroupName() { this->dynamicTelGroupName_ = nullptr;};
    inline string getDynamicTelGroupName() const { DARABONBA_PTR_GET_DEFAULT(dynamicTelGroupName_, "") };
    inline ClinkCreateClientShrinkRequest& setDynamicTelGroupName(string dynamicTelGroupName) { DARABONBA_PTR_SET_VALUE(dynamicTelGroupName_, dynamicTelGroupName) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline ClinkCreateClientShrinkRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // hiddenTel Field Functions 
    bool hasHiddenTel() const { return this->hiddenTel_ != nullptr;};
    void deleteHiddenTel() { this->hiddenTel_ = nullptr;};
    inline int64_t getHiddenTel() const { DARABONBA_PTR_GET_DEFAULT(hiddenTel_, 0L) };
    inline ClinkCreateClientShrinkRequest& setHiddenTel(int64_t hiddenTel) { DARABONBA_PTR_SET_VALUE(hiddenTel_, hiddenTel) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ClinkCreateClientShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // obClidDefaultType Field Functions 
    bool hasObClidDefaultType() const { return this->obClidDefaultType_ != nullptr;};
    void deleteObClidDefaultType() { this->obClidDefaultType_ = nullptr;};
    inline int64_t getObClidDefaultType() const { DARABONBA_PTR_GET_DEFAULT(obClidDefaultType_, 0L) };
    inline ClinkCreateClientShrinkRequest& setObClidDefaultType(int64_t obClidDefaultType) { DARABONBA_PTR_SET_VALUE(obClidDefaultType_, obClidDefaultType) };


    // obHangupSms Field Functions 
    bool hasObHangupSms() const { return this->obHangupSms_ != nullptr;};
    void deleteObHangupSms() { this->obHangupSms_ = nullptr;};
    inline int64_t getObHangupSms() const { DARABONBA_PTR_GET_DEFAULT(obHangupSms_, 0L) };
    inline ClinkCreateClientShrinkRequest& setObHangupSms(int64_t obHangupSms) { DARABONBA_PTR_SET_VALUE(obHangupSms_, obHangupSms) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ClinkCreateClientShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ClinkCreateClientShrinkRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // pauseLogin Field Functions 
    bool hasPauseLogin() const { return this->pauseLogin_ != nullptr;};
    void deletePauseLogin() { this->pauseLogin_ = nullptr;};
    inline int64_t getPauseLogin() const { DARABONBA_PTR_GET_DEFAULT(pauseLogin_, 0L) };
    inline ClinkCreateClientShrinkRequest& setPauseLogin(int64_t pauseLogin) { DARABONBA_PTR_SET_VALUE(pauseLogin_, pauseLogin) };


    // permissionShrink Field Functions 
    bool hasPermissionShrink() const { return this->permissionShrink_ != nullptr;};
    void deletePermissionShrink() { this->permissionShrink_ = nullptr;};
    inline string getPermissionShrink() const { DARABONBA_PTR_GET_DEFAULT(permissionShrink_, "") };
    inline ClinkCreateClientShrinkRequest& setPermissionShrink(string permissionShrink) { DARABONBA_PTR_SET_VALUE(permissionShrink_, permissionShrink) };


    // qnosShrink Field Functions 
    bool hasQnosShrink() const { return this->qnosShrink_ != nullptr;};
    void deleteQnosShrink() { this->qnosShrink_ = nullptr;};
    inline string getQnosShrink() const { DARABONBA_PTR_GET_DEFAULT(qnosShrink_, "") };
    inline ClinkCreateClientShrinkRequest& setQnosShrink(string qnosShrink) { DARABONBA_PTR_SET_VALUE(qnosShrink_, qnosShrink) };


    // recurrentselectionType Field Functions 
    bool hasRecurrentselectionType() const { return this->recurrentselectionType_ != nullptr;};
    void deleteRecurrentselectionType() { this->recurrentselectionType_ = nullptr;};
    inline int64_t getRecurrentselectionType() const { DARABONBA_PTR_GET_DEFAULT(recurrentselectionType_, 0L) };
    inline ClinkCreateClientShrinkRequest& setRecurrentselectionType(int64_t recurrentselectionType) { DARABONBA_PTR_SET_VALUE(recurrentselectionType_, recurrentselectionType) };


    // recurrentselectionValue Field Functions 
    bool hasRecurrentselectionValue() const { return this->recurrentselectionValue_ != nullptr;};
    void deleteRecurrentselectionValue() { this->recurrentselectionValue_ = nullptr;};
    inline int64_t getRecurrentselectionValue() const { DARABONBA_PTR_GET_DEFAULT(recurrentselectionValue_, 0L) };
    inline ClinkCreateClientShrinkRequest& setRecurrentselectionValue(int64_t recurrentselectionValue) { DARABONBA_PTR_SET_VALUE(recurrentselectionValue_, recurrentselectionValue) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ClinkCreateClientShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ClinkCreateClientShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline int64_t getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, 0L) };
    inline ClinkCreateClientShrinkRequest& setRole(int64_t role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // serveAreaShrink Field Functions 
    bool hasServeAreaShrink() const { return this->serveAreaShrink_ != nullptr;};
    void deleteServeAreaShrink() { this->serveAreaShrink_ = nullptr;};
    inline string getServeAreaShrink() const { DARABONBA_PTR_GET_DEFAULT(serveAreaShrink_, "") };
    inline ClinkCreateClientShrinkRequest& setServeAreaShrink(string serveAreaShrink) { DARABONBA_PTR_SET_VALUE(serveAreaShrink_, serveAreaShrink) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline ClinkCreateClientShrinkRequest& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // wechatMiniProgramRtc Field Functions 
    bool hasWechatMiniProgramRtc() const { return this->wechatMiniProgramRtc_ != nullptr;};
    void deleteWechatMiniProgramRtc() { this->wechatMiniProgramRtc_ = nullptr;};
    inline int64_t getWechatMiniProgramRtc() const { DARABONBA_PTR_GET_DEFAULT(wechatMiniProgramRtc_, 0L) };
    inline ClinkCreateClientShrinkRequest& setWechatMiniProgramRtc(int64_t wechatMiniProgramRtc) { DARABONBA_PTR_SET_VALUE(wechatMiniProgramRtc_, wechatMiniProgramRtc) };


    // wrapupTime Field Functions 
    bool hasWrapupTime() const { return this->wrapupTime_ != nullptr;};
    void deleteWrapupTime() { this->wrapupTime_ = nullptr;};
    inline int64_t getWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(wrapupTime_, 0L) };
    inline ClinkCreateClientShrinkRequest& setWrapupTime(int64_t wrapupTime) { DARABONBA_PTR_SET_VALUE(wrapupTime_, wrapupTime) };


  protected:
    // 启用状态，0: 停用；1: 启用，默认值为 1
    shared_ptr<int64_t> active_ {};
    // 所属区号
    // 
    // This parameter is required.
    shared_ptr<string> areaCode_ {};
    // 号码类型，默认值为0，0: 号码；1: 动态号码组
    shared_ptr<int64_t> assignType_ {};
    // 可外显号码集合，当clidType（外显号码类型）值为非0时为必填项
    shared_ptr<string> clidShrink_ {};
    // 按地区外显配置，当clidType（外显号码类型）值为3且clidRule（外显规则）值为2（自定义）时有意义，具体配置项见 clidArea 对象
    shared_ptr<string> clidAreaShrink_ {};
    // 缺省外显号码集合，当clidType（外显号码类型）值为3且clidRule（外显规则）值为1（动态）时，支持配置缺省外显
    shared_ptr<string> clidDefaultShrink_ {};
    // 外显规则，默认值为 1 当clidType（外显号码类型）值为0（全部）时，1:随机；2: 轮选。 当clidType（外显号码类型）值为3（智能外显）时，1:动态；2: 自定义。
    shared_ptr<int64_t> clidRule_ {};
    // 外显号码类型，0: 全部；2: 座席指定；3: 智能外显；默认值为 0
    shared_ptr<int64_t> clidType_ {};
    // 云号码外呼开关，0-关，1-开
    shared_ptr<int64_t> cloudNumberEnabled_ {};
    // 云号码四种呼叫模式；数组长度 为 4，依次对应云号码外呼的四种模式（实体卡、工作卡、两端呼、RTC)的开启状态； 例如：[0,0,0,1] 表示 座席只可使用 RTC 外呼模式。 注意：仅当企业开启了云手机外呼功能，才能为座席设置该属性，否则，座席将创建失败
    shared_ptr<string> cloudNumberModesShrink_ {};
    // 座席工号，长度为4-11个字符，必须全部为数字，要求唯一
    // 
    // This parameter is required.
    shared_ptr<int64_t> cno_ {};
    // CRM 编号，与第三方 CRM 系统对接时，可作为唯一标识
    shared_ptr<int64_t> crmId_ {};
    // 缺省动态外呼组id，当obClidDefaultType值为1时为必填项
    shared_ptr<int64_t> dynamicTelGroupIdDefault_ {};
    // 动态号码组名称，当assignType（号码类型）值为1（动态号码组）时为必填项
    shared_ptr<string> dynamicTelGroupName_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 号码隐藏类型，0: 不隐藏；1: 隐藏规则与全局设置保持一致，默认值为 0
    shared_ptr<int64_t> hiddenTel_ {};
    // 座席名称，只允许输入中文、字母、数字、下划线，长度不超过 20 个字符
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // 缺省号码类型 0：号码 1：动态号码组 默认0
    shared_ptr<int64_t> obClidDefaultType_ {};
    // 外呼挂机短信开关 0：关闭， 1：开启。开启后，当座席发起外呼时，系统会依据【短信中心 - 短信设置 - 外呼双方接听通知 / 外呼客户未接听通知】中的配置条件发送短信。
    shared_ptr<int64_t> obHangupSms_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 座席密码，采用 AES加密 ，默认长度为 8 位。如果企业开启了密码安全设置，则需要按照设置的规则设置
    // 
    // This parameter is required.
    shared_ptr<string> password_ {};
    // 是否可置忙登录，关闭后，座席不允许置忙登录，0：关闭，1：开启，默认1。
    shared_ptr<int64_t> pauseLogin_ {};
    // permission
    // 
    // This parameter is required.
    shared_ptr<string> permissionShrink_ {};
    // 所属队列号集合
    shared_ptr<string> qnosShrink_ {};
    // 轮选方式，1: 按天轮选；2: 按次轮选，当外显号码类型为全部、外显规则为轮选时配置才生效
    shared_ptr<int64_t> recurrentselectionType_ {};
    // 轮选值设置，当外显号码类型为全部、外显规则为轮选时配置才生效 1: 按天轮选，每 n 天外呼更换一次外显号码，可设置 1-30 天 2: 按次轮选，每 n 次外呼更换一次外显号码，可设置 1-30 次
    shared_ptr<int64_t> recurrentselectionValue_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 座席角色，0: 普通座席；1: 班长座席，默认值为 0
    shared_ptr<int64_t> role_ {};
    // 座席服务地区，区号数组 配置座席服务的地区，可用于外呼任务中“按服务地区分配”的策略。
    shared_ptr<string> serveAreaShrink_ {};
    // 座席类型，1：全渠道、2：呼叫中心、3：在线客服；默认值为 2
    shared_ptr<int64_t> type_ {};
    // 微信小程序RTC开关 1：开启 0：关闭 默认关闭
    shared_ptr<int64_t> wechatMiniProgramRtc_ {};
    // 整理时长，座席进行外呼操作后的整理时间。取值范围 0-300 秒，默认值为 30
    shared_ptr<int64_t> wrapupTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
