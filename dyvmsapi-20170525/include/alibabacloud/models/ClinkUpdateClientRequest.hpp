// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKUPDATECLIENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLINKUPDATECLIENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkUpdateClientRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkUpdateClientRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
      DARABONBA_PTR_TO_JSON(AssignType, assignType_);
      DARABONBA_PTR_TO_JSON(Clid, clid_);
      DARABONBA_PTR_TO_JSON(ClidArea, clidArea_);
      DARABONBA_PTR_TO_JSON(ClidDefault, clidDefault_);
      DARABONBA_PTR_TO_JSON(ClidRule, clidRule_);
      DARABONBA_PTR_TO_JSON(ClidType, clidType_);
      DARABONBA_PTR_TO_JSON(CloudNumberEnabled, cloudNumberEnabled_);
      DARABONBA_PTR_TO_JSON(CloudNumberModes, cloudNumberModes_);
      DARABONBA_PTR_TO_JSON(Cno, cno_);
      DARABONBA_PTR_TO_JSON(CrmId, crmId_);
      DARABONBA_PTR_TO_JSON(DynamicTelGroupIdDefault, dynamicTelGroupIdDefault_);
      DARABONBA_PTR_TO_JSON(DynamicTelGroupName, dynamicTelGroupName_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(HiddenTel, hiddenTel_);
      DARABONBA_PTR_TO_JSON(IbWrapupTime, ibWrapupTime_);
      DARABONBA_PTR_TO_JSON(IbWrapupType, ibWrapupType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ObClidDefaultType, obClidDefaultType_);
      DARABONBA_PTR_TO_JSON(ObHangupSms, obHangupSms_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PauseLogin, pauseLogin_);
      DARABONBA_PTR_TO_JSON(Permission, permission_);
      DARABONBA_PTR_TO_JSON(Qnos, qnos_);
      DARABONBA_PTR_TO_JSON(RecurrentselectionType, recurrentselectionType_);
      DARABONBA_PTR_TO_JSON(RecurrentselectionValue, recurrentselectionValue_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(ServeArea, serveArea_);
      DARABONBA_PTR_TO_JSON(WechatMiniProgramRtc, wechatMiniProgramRtc_);
      DARABONBA_PTR_TO_JSON(WrapupTime, wrapupTime_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkUpdateClientRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
      DARABONBA_PTR_FROM_JSON(AssignType, assignType_);
      DARABONBA_PTR_FROM_JSON(Clid, clid_);
      DARABONBA_PTR_FROM_JSON(ClidArea, clidArea_);
      DARABONBA_PTR_FROM_JSON(ClidDefault, clidDefault_);
      DARABONBA_PTR_FROM_JSON(ClidRule, clidRule_);
      DARABONBA_PTR_FROM_JSON(ClidType, clidType_);
      DARABONBA_PTR_FROM_JSON(CloudNumberEnabled, cloudNumberEnabled_);
      DARABONBA_PTR_FROM_JSON(CloudNumberModes, cloudNumberModes_);
      DARABONBA_PTR_FROM_JSON(Cno, cno_);
      DARABONBA_PTR_FROM_JSON(CrmId, crmId_);
      DARABONBA_PTR_FROM_JSON(DynamicTelGroupIdDefault, dynamicTelGroupIdDefault_);
      DARABONBA_PTR_FROM_JSON(DynamicTelGroupName, dynamicTelGroupName_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(HiddenTel, hiddenTel_);
      DARABONBA_PTR_FROM_JSON(IbWrapupTime, ibWrapupTime_);
      DARABONBA_PTR_FROM_JSON(IbWrapupType, ibWrapupType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ObClidDefaultType, obClidDefaultType_);
      DARABONBA_PTR_FROM_JSON(ObHangupSms, obHangupSms_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PauseLogin, pauseLogin_);
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
      DARABONBA_PTR_FROM_JSON(Qnos, qnos_);
      DARABONBA_PTR_FROM_JSON(RecurrentselectionType, recurrentselectionType_);
      DARABONBA_PTR_FROM_JSON(RecurrentselectionValue, recurrentselectionValue_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(ServeArea, serveArea_);
      DARABONBA_PTR_FROM_JSON(WechatMiniProgramRtc, wechatMiniProgramRtc_);
      DARABONBA_PTR_FROM_JSON(WrapupTime, wrapupTime_);
    };
    ClinkUpdateClientRequest() = default ;
    ClinkUpdateClientRequest(const ClinkUpdateClientRequest &) = default ;
    ClinkUpdateClientRequest(ClinkUpdateClientRequest &&) = default ;
    ClinkUpdateClientRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkUpdateClientRequest() = default ;
    ClinkUpdateClientRequest& operator=(const ClinkUpdateClientRequest &) = default ;
    ClinkUpdateClientRequest& operator=(ClinkUpdateClientRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Permission : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Permission& obj) { 
        DARABONBA_PTR_TO_JSON(Asr, asr_);
        DARABONBA_PTR_TO_JSON(Call, call_);
        DARABONBA_PTR_TO_JSON(Cdr, cdr_);
        DARABONBA_PTR_TO_JSON(Chat, chat_);
        DARABONBA_PTR_TO_JSON(OtherData, otherData_);
        DARABONBA_PTR_TO_JSON(Record, record_);
        DARABONBA_PTR_TO_JSON(RecordDownload, recordDownload_);
        DARABONBA_PTR_TO_JSON(Sms, sms_);
        DARABONBA_PTR_TO_JSON(TaskInventory, taskInventory_);
        DARABONBA_PTR_TO_JSON(Transfer, transfer_);
      };
      friend void from_json(const Darabonba::Json& j, Permission& obj) { 
        DARABONBA_PTR_FROM_JSON(Asr, asr_);
        DARABONBA_PTR_FROM_JSON(Call, call_);
        DARABONBA_PTR_FROM_JSON(Cdr, cdr_);
        DARABONBA_PTR_FROM_JSON(Chat, chat_);
        DARABONBA_PTR_FROM_JSON(OtherData, otherData_);
        DARABONBA_PTR_FROM_JSON(Record, record_);
        DARABONBA_PTR_FROM_JSON(RecordDownload, recordDownload_);
        DARABONBA_PTR_FROM_JSON(Sms, sms_);
        DARABONBA_PTR_FROM_JSON(TaskInventory, taskInventory_);
        DARABONBA_PTR_FROM_JSON(Transfer, transfer_);
      };
      Permission() = default ;
      Permission(const Permission &) = default ;
      Permission(Permission &&) = default ;
      Permission(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Permission() = default ;
      Permission& operator=(const Permission &) = default ;
      Permission& operator=(Permission &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->asr_ == nullptr
        && this->call_ == nullptr && this->cdr_ == nullptr && this->chat_ == nullptr && this->otherData_ == nullptr && this->record_ == nullptr
        && this->recordDownload_ == nullptr && this->sms_ == nullptr && this->taskInventory_ == nullptr && this->transfer_ == nullptr; };
      // asr Field Functions 
      bool hasAsr() const { return this->asr_ != nullptr;};
      void deleteAsr() { this->asr_ = nullptr;};
      inline int64_t getAsr() const { DARABONBA_PTR_GET_DEFAULT(asr_, 0L) };
      inline Permission& setAsr(int64_t asr) { DARABONBA_PTR_SET_VALUE(asr_, asr) };


      // call Field Functions 
      bool hasCall() const { return this->call_ != nullptr;};
      void deleteCall() { this->call_ = nullptr;};
      inline int64_t getCall() const { DARABONBA_PTR_GET_DEFAULT(call_, 0L) };
      inline Permission& setCall(int64_t call) { DARABONBA_PTR_SET_VALUE(call_, call) };


      // cdr Field Functions 
      bool hasCdr() const { return this->cdr_ != nullptr;};
      void deleteCdr() { this->cdr_ = nullptr;};
      inline int64_t getCdr() const { DARABONBA_PTR_GET_DEFAULT(cdr_, 0L) };
      inline Permission& setCdr(int64_t cdr) { DARABONBA_PTR_SET_VALUE(cdr_, cdr) };


      // chat Field Functions 
      bool hasChat() const { return this->chat_ != nullptr;};
      void deleteChat() { this->chat_ = nullptr;};
      inline int64_t getChat() const { DARABONBA_PTR_GET_DEFAULT(chat_, 0L) };
      inline Permission& setChat(int64_t chat) { DARABONBA_PTR_SET_VALUE(chat_, chat) };


      // otherData Field Functions 
      bool hasOtherData() const { return this->otherData_ != nullptr;};
      void deleteOtherData() { this->otherData_ = nullptr;};
      inline int64_t getOtherData() const { DARABONBA_PTR_GET_DEFAULT(otherData_, 0L) };
      inline Permission& setOtherData(int64_t otherData) { DARABONBA_PTR_SET_VALUE(otherData_, otherData) };


      // record Field Functions 
      bool hasRecord() const { return this->record_ != nullptr;};
      void deleteRecord() { this->record_ = nullptr;};
      inline int64_t getRecord() const { DARABONBA_PTR_GET_DEFAULT(record_, 0L) };
      inline Permission& setRecord(int64_t record) { DARABONBA_PTR_SET_VALUE(record_, record) };


      // recordDownload Field Functions 
      bool hasRecordDownload() const { return this->recordDownload_ != nullptr;};
      void deleteRecordDownload() { this->recordDownload_ = nullptr;};
      inline int64_t getRecordDownload() const { DARABONBA_PTR_GET_DEFAULT(recordDownload_, 0L) };
      inline Permission& setRecordDownload(int64_t recordDownload) { DARABONBA_PTR_SET_VALUE(recordDownload_, recordDownload) };


      // sms Field Functions 
      bool hasSms() const { return this->sms_ != nullptr;};
      void deleteSms() { this->sms_ = nullptr;};
      inline int64_t getSms() const { DARABONBA_PTR_GET_DEFAULT(sms_, 0L) };
      inline Permission& setSms(int64_t sms) { DARABONBA_PTR_SET_VALUE(sms_, sms) };


      // taskInventory Field Functions 
      bool hasTaskInventory() const { return this->taskInventory_ != nullptr;};
      void deleteTaskInventory() { this->taskInventory_ = nullptr;};
      inline int64_t getTaskInventory() const { DARABONBA_PTR_GET_DEFAULT(taskInventory_, 0L) };
      inline Permission& setTaskInventory(int64_t taskInventory) { DARABONBA_PTR_SET_VALUE(taskInventory_, taskInventory) };


      // transfer Field Functions 
      bool hasTransfer() const { return this->transfer_ != nullptr;};
      void deleteTransfer() { this->transfer_ = nullptr;};
      inline int64_t getTransfer() const { DARABONBA_PTR_GET_DEFAULT(transfer_, 0L) };
      inline Permission& setTransfer(int64_t transfer) { DARABONBA_PTR_SET_VALUE(transfer_, transfer) };


    protected:
      // 语音转写，0: 关闭；1: 呼入开启；2 外呼开启；3 全部开启；默认值为 0
      shared_ptr<int64_t> asr_ {};
      // 外呼权限，0:关闭；1: 无限制；2: 国内长途；3: 国内本地
      shared_ptr<int64_t> call_ {};
      // 通话记录查看权限，1: 全部；2: 所属队列；3: 本座席
      shared_ptr<int64_t> cdr_ {};
      // 在线客服查看会话记录权限 ，0：全部、1：所属队列、2：本座席； 默认值为 0
      shared_ptr<int64_t> chat_ {};
      // 其他数据查看权限：1：全部 2：所属员工组 3：自己 4:指定员工组 ,默认所属员工组
      shared_ptr<int64_t> otherData_ {};
      // 通话录音权限，0: 关闭；1: 呼入；2: 外呼；3: 全部
      shared_ptr<int64_t> record_ {};
      // 录音试听下载权限， 0: 关闭；1: 试听；2: 试听下载
      shared_ptr<int64_t> recordDownload_ {};
      // 短信发送权限，0: 关闭；1: 开启。默认值为 0
      shared_ptr<int64_t> sms_ {};
      // 外呼任务查看权限，1：全部 3：自己，默认全部
      shared_ptr<int64_t> taskInventory_ {};
      // 通话转移/咨询权限，可选范围，0：全部，1：所属员工组, 默认所属员工组
      shared_ptr<int64_t> transfer_ {};
    };

    class ClidArea : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClidArea& obj) { 
        DARABONBA_PTR_TO_JSON(AreaGroupName, areaGroupName_);
        DARABONBA_PTR_TO_JSON(AssignType, assignType_);
        DARABONBA_PTR_TO_JSON(DynamicTelGroupName, dynamicTelGroupName_);
        DARABONBA_PTR_TO_JSON(ObClids, obClids_);
      };
      friend void from_json(const Darabonba::Json& j, ClidArea& obj) { 
        DARABONBA_PTR_FROM_JSON(AreaGroupName, areaGroupName_);
        DARABONBA_PTR_FROM_JSON(AssignType, assignType_);
        DARABONBA_PTR_FROM_JSON(DynamicTelGroupName, dynamicTelGroupName_);
        DARABONBA_PTR_FROM_JSON(ObClids, obClids_);
      };
      ClidArea() = default ;
      ClidArea(const ClidArea &) = default ;
      ClidArea(ClidArea &&) = default ;
      ClidArea(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClidArea() = default ;
      ClidArea& operator=(const ClidArea &) = default ;
      ClidArea& operator=(ClidArea &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->areaGroupName_ == nullptr
        && this->assignType_ == nullptr && this->dynamicTelGroupName_ == nullptr && this->obClids_ == nullptr; };
      // areaGroupName Field Functions 
      bool hasAreaGroupName() const { return this->areaGroupName_ != nullptr;};
      void deleteAreaGroupName() { this->areaGroupName_ = nullptr;};
      inline string getAreaGroupName() const { DARABONBA_PTR_GET_DEFAULT(areaGroupName_, "") };
      inline ClidArea& setAreaGroupName(string areaGroupName) { DARABONBA_PTR_SET_VALUE(areaGroupName_, areaGroupName) };


      // assignType Field Functions 
      bool hasAssignType() const { return this->assignType_ != nullptr;};
      void deleteAssignType() { this->assignType_ = nullptr;};
      inline int64_t getAssignType() const { DARABONBA_PTR_GET_DEFAULT(assignType_, 0L) };
      inline ClidArea& setAssignType(int64_t assignType) { DARABONBA_PTR_SET_VALUE(assignType_, assignType) };


      // dynamicTelGroupName Field Functions 
      bool hasDynamicTelGroupName() const { return this->dynamicTelGroupName_ != nullptr;};
      void deleteDynamicTelGroupName() { this->dynamicTelGroupName_ = nullptr;};
      inline string getDynamicTelGroupName() const { DARABONBA_PTR_GET_DEFAULT(dynamicTelGroupName_, "") };
      inline ClidArea& setDynamicTelGroupName(string dynamicTelGroupName) { DARABONBA_PTR_SET_VALUE(dynamicTelGroupName_, dynamicTelGroupName) };


      // obClids Field Functions 
      bool hasObClids() const { return this->obClids_ != nullptr;};
      void deleteObClids() { this->obClids_ = nullptr;};
      inline const vector<string> & getObClids() const { DARABONBA_PTR_GET_CONST(obClids_, vector<string>) };
      inline vector<string> getObClids() { DARABONBA_PTR_GET(obClids_, vector<string>) };
      inline ClidArea& setObClids(const vector<string> & obClids) { DARABONBA_PTR_SET_VALUE(obClids_, obClids) };
      inline ClidArea& setObClids(vector<string> && obClids) { DARABONBA_PTR_SET_RVALUE(obClids_, obClids) };


    protected:
      // 地区组名称
      shared_ptr<string> areaGroupName_ {};
      // 号码类型，默认值为0，0: 号码；1: 动态号码组
      shared_ptr<int64_t> assignType_ {};
      // 动态号码组名称，当assignType（号码类型）值为1（动态号码组）时为必填项
      shared_ptr<string> dynamicTelGroupName_ {};
      // 外显号码
      shared_ptr<vector<string>> obClids_ {};
    };

    virtual bool empty() const override { return this->active_ == nullptr
        && this->areaCode_ == nullptr && this->assignType_ == nullptr && this->clid_ == nullptr && this->clidArea_ == nullptr && this->clidDefault_ == nullptr
        && this->clidRule_ == nullptr && this->clidType_ == nullptr && this->cloudNumberEnabled_ == nullptr && this->cloudNumberModes_ == nullptr && this->cno_ == nullptr
        && this->crmId_ == nullptr && this->dynamicTelGroupIdDefault_ == nullptr && this->dynamicTelGroupName_ == nullptr && this->enterpriseId_ == nullptr && this->hiddenTel_ == nullptr
        && this->ibWrapupTime_ == nullptr && this->ibWrapupType_ == nullptr && this->name_ == nullptr && this->obClidDefaultType_ == nullptr && this->obHangupSms_ == nullptr
        && this->ownerId_ == nullptr && this->password_ == nullptr && this->pauseLogin_ == nullptr && this->permission_ == nullptr && this->qnos_ == nullptr
        && this->recurrentselectionType_ == nullptr && this->recurrentselectionValue_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->role_ == nullptr
        && this->serveArea_ == nullptr && this->wechatMiniProgramRtc_ == nullptr && this->wrapupTime_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline int64_t getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, 0L) };
    inline ClinkUpdateClientRequest& setActive(int64_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // areaCode Field Functions 
    bool hasAreaCode() const { return this->areaCode_ != nullptr;};
    void deleteAreaCode() { this->areaCode_ = nullptr;};
    inline string getAreaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
    inline ClinkUpdateClientRequest& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


    // assignType Field Functions 
    bool hasAssignType() const { return this->assignType_ != nullptr;};
    void deleteAssignType() { this->assignType_ = nullptr;};
    inline int64_t getAssignType() const { DARABONBA_PTR_GET_DEFAULT(assignType_, 0L) };
    inline ClinkUpdateClientRequest& setAssignType(int64_t assignType) { DARABONBA_PTR_SET_VALUE(assignType_, assignType) };


    // clid Field Functions 
    bool hasClid() const { return this->clid_ != nullptr;};
    void deleteClid() { this->clid_ = nullptr;};
    inline const vector<string> & getClid() const { DARABONBA_PTR_GET_CONST(clid_, vector<string>) };
    inline vector<string> getClid() { DARABONBA_PTR_GET(clid_, vector<string>) };
    inline ClinkUpdateClientRequest& setClid(const vector<string> & clid) { DARABONBA_PTR_SET_VALUE(clid_, clid) };
    inline ClinkUpdateClientRequest& setClid(vector<string> && clid) { DARABONBA_PTR_SET_RVALUE(clid_, clid) };


    // clidArea Field Functions 
    bool hasClidArea() const { return this->clidArea_ != nullptr;};
    void deleteClidArea() { this->clidArea_ = nullptr;};
    inline const vector<ClinkUpdateClientRequest::ClidArea> & getClidArea() const { DARABONBA_PTR_GET_CONST(clidArea_, vector<ClinkUpdateClientRequest::ClidArea>) };
    inline vector<ClinkUpdateClientRequest::ClidArea> getClidArea() { DARABONBA_PTR_GET(clidArea_, vector<ClinkUpdateClientRequest::ClidArea>) };
    inline ClinkUpdateClientRequest& setClidArea(const vector<ClinkUpdateClientRequest::ClidArea> & clidArea) { DARABONBA_PTR_SET_VALUE(clidArea_, clidArea) };
    inline ClinkUpdateClientRequest& setClidArea(vector<ClinkUpdateClientRequest::ClidArea> && clidArea) { DARABONBA_PTR_SET_RVALUE(clidArea_, clidArea) };


    // clidDefault Field Functions 
    bool hasClidDefault() const { return this->clidDefault_ != nullptr;};
    void deleteClidDefault() { this->clidDefault_ = nullptr;};
    inline const vector<string> & getClidDefault() const { DARABONBA_PTR_GET_CONST(clidDefault_, vector<string>) };
    inline vector<string> getClidDefault() { DARABONBA_PTR_GET(clidDefault_, vector<string>) };
    inline ClinkUpdateClientRequest& setClidDefault(const vector<string> & clidDefault) { DARABONBA_PTR_SET_VALUE(clidDefault_, clidDefault) };
    inline ClinkUpdateClientRequest& setClidDefault(vector<string> && clidDefault) { DARABONBA_PTR_SET_RVALUE(clidDefault_, clidDefault) };


    // clidRule Field Functions 
    bool hasClidRule() const { return this->clidRule_ != nullptr;};
    void deleteClidRule() { this->clidRule_ = nullptr;};
    inline int64_t getClidRule() const { DARABONBA_PTR_GET_DEFAULT(clidRule_, 0L) };
    inline ClinkUpdateClientRequest& setClidRule(int64_t clidRule) { DARABONBA_PTR_SET_VALUE(clidRule_, clidRule) };


    // clidType Field Functions 
    bool hasClidType() const { return this->clidType_ != nullptr;};
    void deleteClidType() { this->clidType_ = nullptr;};
    inline int64_t getClidType() const { DARABONBA_PTR_GET_DEFAULT(clidType_, 0L) };
    inline ClinkUpdateClientRequest& setClidType(int64_t clidType) { DARABONBA_PTR_SET_VALUE(clidType_, clidType) };


    // cloudNumberEnabled Field Functions 
    bool hasCloudNumberEnabled() const { return this->cloudNumberEnabled_ != nullptr;};
    void deleteCloudNumberEnabled() { this->cloudNumberEnabled_ = nullptr;};
    inline int64_t getCloudNumberEnabled() const { DARABONBA_PTR_GET_DEFAULT(cloudNumberEnabled_, 0L) };
    inline ClinkUpdateClientRequest& setCloudNumberEnabled(int64_t cloudNumberEnabled) { DARABONBA_PTR_SET_VALUE(cloudNumberEnabled_, cloudNumberEnabled) };


    // cloudNumberModes Field Functions 
    bool hasCloudNumberModes() const { return this->cloudNumberModes_ != nullptr;};
    void deleteCloudNumberModes() { this->cloudNumberModes_ = nullptr;};
    inline const vector<int64_t> & getCloudNumberModes() const { DARABONBA_PTR_GET_CONST(cloudNumberModes_, vector<int64_t>) };
    inline vector<int64_t> getCloudNumberModes() { DARABONBA_PTR_GET(cloudNumberModes_, vector<int64_t>) };
    inline ClinkUpdateClientRequest& setCloudNumberModes(const vector<int64_t> & cloudNumberModes) { DARABONBA_PTR_SET_VALUE(cloudNumberModes_, cloudNumberModes) };
    inline ClinkUpdateClientRequest& setCloudNumberModes(vector<int64_t> && cloudNumberModes) { DARABONBA_PTR_SET_RVALUE(cloudNumberModes_, cloudNumberModes) };


    // cno Field Functions 
    bool hasCno() const { return this->cno_ != nullptr;};
    void deleteCno() { this->cno_ = nullptr;};
    inline int64_t getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, 0L) };
    inline ClinkUpdateClientRequest& setCno(int64_t cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


    // crmId Field Functions 
    bool hasCrmId() const { return this->crmId_ != nullptr;};
    void deleteCrmId() { this->crmId_ = nullptr;};
    inline int64_t getCrmId() const { DARABONBA_PTR_GET_DEFAULT(crmId_, 0L) };
    inline ClinkUpdateClientRequest& setCrmId(int64_t crmId) { DARABONBA_PTR_SET_VALUE(crmId_, crmId) };


    // dynamicTelGroupIdDefault Field Functions 
    bool hasDynamicTelGroupIdDefault() const { return this->dynamicTelGroupIdDefault_ != nullptr;};
    void deleteDynamicTelGroupIdDefault() { this->dynamicTelGroupIdDefault_ = nullptr;};
    inline int64_t getDynamicTelGroupIdDefault() const { DARABONBA_PTR_GET_DEFAULT(dynamicTelGroupIdDefault_, 0L) };
    inline ClinkUpdateClientRequest& setDynamicTelGroupIdDefault(int64_t dynamicTelGroupIdDefault) { DARABONBA_PTR_SET_VALUE(dynamicTelGroupIdDefault_, dynamicTelGroupIdDefault) };


    // dynamicTelGroupName Field Functions 
    bool hasDynamicTelGroupName() const { return this->dynamicTelGroupName_ != nullptr;};
    void deleteDynamicTelGroupName() { this->dynamicTelGroupName_ = nullptr;};
    inline string getDynamicTelGroupName() const { DARABONBA_PTR_GET_DEFAULT(dynamicTelGroupName_, "") };
    inline ClinkUpdateClientRequest& setDynamicTelGroupName(string dynamicTelGroupName) { DARABONBA_PTR_SET_VALUE(dynamicTelGroupName_, dynamicTelGroupName) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline ClinkUpdateClientRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // hiddenTel Field Functions 
    bool hasHiddenTel() const { return this->hiddenTel_ != nullptr;};
    void deleteHiddenTel() { this->hiddenTel_ = nullptr;};
    inline int64_t getHiddenTel() const { DARABONBA_PTR_GET_DEFAULT(hiddenTel_, 0L) };
    inline ClinkUpdateClientRequest& setHiddenTel(int64_t hiddenTel) { DARABONBA_PTR_SET_VALUE(hiddenTel_, hiddenTel) };


    // ibWrapupTime Field Functions 
    bool hasIbWrapupTime() const { return this->ibWrapupTime_ != nullptr;};
    void deleteIbWrapupTime() { this->ibWrapupTime_ = nullptr;};
    inline int64_t getIbWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(ibWrapupTime_, 0L) };
    inline ClinkUpdateClientRequest& setIbWrapupTime(int64_t ibWrapupTime) { DARABONBA_PTR_SET_VALUE(ibWrapupTime_, ibWrapupTime) };


    // ibWrapupType Field Functions 
    bool hasIbWrapupType() const { return this->ibWrapupType_ != nullptr;};
    void deleteIbWrapupType() { this->ibWrapupType_ = nullptr;};
    inline int64_t getIbWrapupType() const { DARABONBA_PTR_GET_DEFAULT(ibWrapupType_, 0L) };
    inline ClinkUpdateClientRequest& setIbWrapupType(int64_t ibWrapupType) { DARABONBA_PTR_SET_VALUE(ibWrapupType_, ibWrapupType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ClinkUpdateClientRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // obClidDefaultType Field Functions 
    bool hasObClidDefaultType() const { return this->obClidDefaultType_ != nullptr;};
    void deleteObClidDefaultType() { this->obClidDefaultType_ = nullptr;};
    inline int64_t getObClidDefaultType() const { DARABONBA_PTR_GET_DEFAULT(obClidDefaultType_, 0L) };
    inline ClinkUpdateClientRequest& setObClidDefaultType(int64_t obClidDefaultType) { DARABONBA_PTR_SET_VALUE(obClidDefaultType_, obClidDefaultType) };


    // obHangupSms Field Functions 
    bool hasObHangupSms() const { return this->obHangupSms_ != nullptr;};
    void deleteObHangupSms() { this->obHangupSms_ = nullptr;};
    inline int64_t getObHangupSms() const { DARABONBA_PTR_GET_DEFAULT(obHangupSms_, 0L) };
    inline ClinkUpdateClientRequest& setObHangupSms(int64_t obHangupSms) { DARABONBA_PTR_SET_VALUE(obHangupSms_, obHangupSms) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ClinkUpdateClientRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ClinkUpdateClientRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // pauseLogin Field Functions 
    bool hasPauseLogin() const { return this->pauseLogin_ != nullptr;};
    void deletePauseLogin() { this->pauseLogin_ = nullptr;};
    inline int64_t getPauseLogin() const { DARABONBA_PTR_GET_DEFAULT(pauseLogin_, 0L) };
    inline ClinkUpdateClientRequest& setPauseLogin(int64_t pauseLogin) { DARABONBA_PTR_SET_VALUE(pauseLogin_, pauseLogin) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline const ClinkUpdateClientRequest::Permission & getPermission() const { DARABONBA_PTR_GET_CONST(permission_, ClinkUpdateClientRequest::Permission) };
    inline ClinkUpdateClientRequest::Permission getPermission() { DARABONBA_PTR_GET(permission_, ClinkUpdateClientRequest::Permission) };
    inline ClinkUpdateClientRequest& setPermission(const ClinkUpdateClientRequest::Permission & permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };
    inline ClinkUpdateClientRequest& setPermission(ClinkUpdateClientRequest::Permission && permission) { DARABONBA_PTR_SET_RVALUE(permission_, permission) };


    // qnos Field Functions 
    bool hasQnos() const { return this->qnos_ != nullptr;};
    void deleteQnos() { this->qnos_ = nullptr;};
    inline const vector<string> & getQnos() const { DARABONBA_PTR_GET_CONST(qnos_, vector<string>) };
    inline vector<string> getQnos() { DARABONBA_PTR_GET(qnos_, vector<string>) };
    inline ClinkUpdateClientRequest& setQnos(const vector<string> & qnos) { DARABONBA_PTR_SET_VALUE(qnos_, qnos) };
    inline ClinkUpdateClientRequest& setQnos(vector<string> && qnos) { DARABONBA_PTR_SET_RVALUE(qnos_, qnos) };


    // recurrentselectionType Field Functions 
    bool hasRecurrentselectionType() const { return this->recurrentselectionType_ != nullptr;};
    void deleteRecurrentselectionType() { this->recurrentselectionType_ = nullptr;};
    inline int64_t getRecurrentselectionType() const { DARABONBA_PTR_GET_DEFAULT(recurrentselectionType_, 0L) };
    inline ClinkUpdateClientRequest& setRecurrentselectionType(int64_t recurrentselectionType) { DARABONBA_PTR_SET_VALUE(recurrentselectionType_, recurrentselectionType) };


    // recurrentselectionValue Field Functions 
    bool hasRecurrentselectionValue() const { return this->recurrentselectionValue_ != nullptr;};
    void deleteRecurrentselectionValue() { this->recurrentselectionValue_ = nullptr;};
    inline int64_t getRecurrentselectionValue() const { DARABONBA_PTR_GET_DEFAULT(recurrentselectionValue_, 0L) };
    inline ClinkUpdateClientRequest& setRecurrentselectionValue(int64_t recurrentselectionValue) { DARABONBA_PTR_SET_VALUE(recurrentselectionValue_, recurrentselectionValue) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ClinkUpdateClientRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ClinkUpdateClientRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline int64_t getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, 0L) };
    inline ClinkUpdateClientRequest& setRole(int64_t role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // serveArea Field Functions 
    bool hasServeArea() const { return this->serveArea_ != nullptr;};
    void deleteServeArea() { this->serveArea_ = nullptr;};
    inline const vector<string> & getServeArea() const { DARABONBA_PTR_GET_CONST(serveArea_, vector<string>) };
    inline vector<string> getServeArea() { DARABONBA_PTR_GET(serveArea_, vector<string>) };
    inline ClinkUpdateClientRequest& setServeArea(const vector<string> & serveArea) { DARABONBA_PTR_SET_VALUE(serveArea_, serveArea) };
    inline ClinkUpdateClientRequest& setServeArea(vector<string> && serveArea) { DARABONBA_PTR_SET_RVALUE(serveArea_, serveArea) };


    // wechatMiniProgramRtc Field Functions 
    bool hasWechatMiniProgramRtc() const { return this->wechatMiniProgramRtc_ != nullptr;};
    void deleteWechatMiniProgramRtc() { this->wechatMiniProgramRtc_ = nullptr;};
    inline int64_t getWechatMiniProgramRtc() const { DARABONBA_PTR_GET_DEFAULT(wechatMiniProgramRtc_, 0L) };
    inline ClinkUpdateClientRequest& setWechatMiniProgramRtc(int64_t wechatMiniProgramRtc) { DARABONBA_PTR_SET_VALUE(wechatMiniProgramRtc_, wechatMiniProgramRtc) };


    // wrapupTime Field Functions 
    bool hasWrapupTime() const { return this->wrapupTime_ != nullptr;};
    void deleteWrapupTime() { this->wrapupTime_ = nullptr;};
    inline int64_t getWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(wrapupTime_, 0L) };
    inline ClinkUpdateClientRequest& setWrapupTime(int64_t wrapupTime) { DARABONBA_PTR_SET_VALUE(wrapupTime_, wrapupTime) };


  protected:
    // 启用状态， 0: 停用；1: 启用。
    shared_ptr<int64_t> active_ {};
    // 所属区号
    shared_ptr<string> areaCode_ {};
    // 号码类型，默认值为0，0: 号码；1: 动态号码组
    shared_ptr<int64_t> assignType_ {};
    // 可外显号码集合，当外显类型非全部时需指定此参数值。
    shared_ptr<vector<string>> clid_ {};
    // 按地区外显配置，当clidType（外显号码类型）值为3且clidRule（外显规则）值为2（自定义）时有意义，具体配置项见 clidArea 对象
    shared_ptr<vector<ClinkUpdateClientRequest::ClidArea>> clidArea_ {};
    // 缺省外显号码集合，当clidType（外显号码类型）值为3且clidRule（外显规则）值为1（动态）时，支持配置缺省外显
    shared_ptr<vector<string>> clidDefault_ {};
    // 外显规则， 当clidType（外显号码类型）值为0（全部）时，1:随机；2: 轮选。 当clidType（外显号码类型）值为3（智能外显）时，1:动态；2: 自定义。
    shared_ptr<int64_t> clidRule_ {};
    // 外显号码类型，0: 全部；2: 座席指定；3: 智能外显
    shared_ptr<int64_t> clidType_ {};
    // 云号码外呼开关，0-关，1-开
    shared_ptr<int64_t> cloudNumberEnabled_ {};
    // 云号码四种呼叫模式；数组长度 为 4，依次对应云号码外呼的四种模式（实体卡、工作卡、两端呼、RTC)的开启状态； 例如：[0,0,0,1] 表示 座席只可使用 RTC 外呼模式。 注意：仅当企业开启了云手机外呼功能，才能为座席设置该属性，否则，座席将创建失败
    shared_ptr<vector<int64_t>> cloudNumberModes_ {};
    // 座席工号，4-11位数字，要求唯一
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
    // 号码隐藏类型，0: 不隐藏；1: 隐藏规则与全局设置保持一致。
    shared_ptr<int64_t> hiddenTel_ {};
    // 呼入整理时长，客户来电座席接听，双方通话结束后座席的话后处理时长，此期间座席不接收新的客户来电。取值范围：0～3600秒。
    shared_ptr<int64_t> ibWrapupTime_ {};
    // 呼入整理类型，1：队列；2：座席。
    shared_ptr<int64_t> ibWrapupType_ {};
    // 座席名称，只允许输入中文，字母，数字，下划线，长度不超过 20 个字符
    shared_ptr<string> name_ {};
    // 缺省号码类型 0：号码 1：动态号码组 默认0
    shared_ptr<int64_t> obClidDefaultType_ {};
    // 外呼挂机短信开关 0：关闭， 1：开启。开启后，当座席发起外呼时，系统会依据【短信中心 - 短信设置 - 外呼双方接听通知 / 外呼客户未接听通知】中的配置条件发送短信。
    shared_ptr<int64_t> obHangupSms_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 座席密码，采用 AES加密 ，默认长度为 8 位。如果企业开启了密码安全设置，则需要按照设置的规则设置
    shared_ptr<string> password_ {};
    // 是否可置忙登录，关闭后，座席不允许置忙登录，0：关闭，1：开启。
    shared_ptr<int64_t> pauseLogin_ {};
    // permission
    // 
    // This parameter is required.
    shared_ptr<ClinkUpdateClientRequest::Permission> permission_ {};
    // 所属队列号集合
    shared_ptr<vector<string>> qnos_ {};
    // 轮选方式，1: 按天轮选；2: 按次轮选，当外显号码类型为全部、外显规则为轮选时配置才生效
    shared_ptr<int64_t> recurrentselectionType_ {};
    // 轮选值设置，当外显号码类型为全部、外显规则为轮选时配置才生效 1: 按天轮选，每 n 天外呼更换一次外显号码，可设置 1-30 天 2: 按次轮选，每 n 次外呼更换一次外显号码，可设置 1-30 次
    shared_ptr<int64_t> recurrentselectionValue_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 座席角色，0: 普通座席；1: 班长座席。
    shared_ptr<int64_t> role_ {};
    // 座席服务地区，区号数组 配置座席服务的地区，可用于外呼任务中“按服务地区分配”的策略。
    shared_ptr<vector<string>> serveArea_ {};
    // 微信小程序RTC开关 1：开启 0：关闭 默认关闭
    shared_ptr<int64_t> wechatMiniProgramRtc_ {};
    // 整理时长，座席进行外呼操作后的整理时间，取值范围 0-300 秒。
    shared_ptr<int64_t> wrapupTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
