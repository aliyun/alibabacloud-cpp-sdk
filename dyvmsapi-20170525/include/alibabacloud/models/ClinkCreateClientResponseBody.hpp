// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKCREATECLIENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKCREATECLIENTRESPONSEBODY_HPP_
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
  class ClinkCreateClientResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkCreateClientResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkCreateClientResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkCreateClientResponseBody() = default ;
    ClinkCreateClientResponseBody(const ClinkCreateClientResponseBody &) = default ;
    ClinkCreateClientResponseBody(ClinkCreateClientResponseBody &&) = default ;
    ClinkCreateClientResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkCreateClientResponseBody() = default ;
    ClinkCreateClientResponseBody& operator=(const ClinkCreateClientResponseBody &) = default ;
    ClinkCreateClientResponseBody& operator=(ClinkCreateClientResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Client, client_);
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Client, client_);
        DARABONBA_PTR_FROM_JSON(ClinkRequestId, clinkRequestId_);
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
      class Client : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Client& obj) { 
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
          DARABONBA_PTR_TO_JSON(DynamicTelGroupName, dynamicTelGroupName_);
          DARABONBA_PTR_TO_JSON(HiddenTel, hiddenTel_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Password, password_);
          DARABONBA_PTR_TO_JSON(Permission, permission_);
          DARABONBA_PTR_TO_JSON(Qnos, qnos_);
          DARABONBA_PTR_TO_JSON(RecurrentselectionType, recurrentselectionType_);
          DARABONBA_PTR_TO_JSON(RecurrentselectionValue, recurrentselectionValue_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(WrapupTime, wrapupTime_);
        };
        friend void from_json(const Darabonba::Json& j, Client& obj) { 
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
          DARABONBA_PTR_FROM_JSON(DynamicTelGroupName, dynamicTelGroupName_);
          DARABONBA_PTR_FROM_JSON(HiddenTel, hiddenTel_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Password, password_);
          DARABONBA_PTR_FROM_JSON(Permission, permission_);
          DARABONBA_PTR_FROM_JSON(Qnos, qnos_);
          DARABONBA_PTR_FROM_JSON(RecurrentselectionType, recurrentselectionType_);
          DARABONBA_PTR_FROM_JSON(RecurrentselectionValue, recurrentselectionValue_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(WrapupTime, wrapupTime_);
        };
        Client() = default ;
        Client(const Client &) = default ;
        Client(Client &&) = default ;
        Client(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Client() = default ;
        Client& operator=(const Client &) = default ;
        Client& operator=(Client &&) = default ;
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
          // 外呼权限，0: 关闭；1: 无限制；2: 国内长途；3: 国内本地，默认值为 1
          shared_ptr<int64_t> call_ {};
          // 通话记录查看权限，1: 全部；2: 所属队列；3:本座席，默认值为 1
          shared_ptr<int64_t> cdr_ {};
          // 在线客服查看会话记录权限 ，0：全部、1：所属队列、2：本座席； 默认值为 0
          shared_ptr<int64_t> chat_ {};
          // 其他数据查看权限：1：全部 2：所属员工组 3：自己 4:指定员工组 ,默认所属员工组
          shared_ptr<int64_t> otherData_ {};
          // 通话录音权限，0: 关闭；1: 呼入；2: 外呼；3: 全部，默认值为 3
          shared_ptr<int64_t> record_ {};
          // 录音试听下载权限，0: 关闭；1: 试听下载；2：试听，默认值 1
          shared_ptr<int64_t> recordDownload_ {};
          // 短信发送权限，0: 关闭；1: 开启，默认值为 0
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
        && this->crmId_ == nullptr && this->dynamicTelGroupName_ == nullptr && this->hiddenTel_ == nullptr && this->name_ == nullptr && this->password_ == nullptr
        && this->permission_ == nullptr && this->qnos_ == nullptr && this->recurrentselectionType_ == nullptr && this->recurrentselectionValue_ == nullptr && this->role_ == nullptr
        && this->type_ == nullptr && this->wrapupTime_ == nullptr; };
        // active Field Functions 
        bool hasActive() const { return this->active_ != nullptr;};
        void deleteActive() { this->active_ = nullptr;};
        inline int64_t getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, 0L) };
        inline Client& setActive(int64_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


        // areaCode Field Functions 
        bool hasAreaCode() const { return this->areaCode_ != nullptr;};
        void deleteAreaCode() { this->areaCode_ = nullptr;};
        inline string getAreaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
        inline Client& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


        // assignType Field Functions 
        bool hasAssignType() const { return this->assignType_ != nullptr;};
        void deleteAssignType() { this->assignType_ = nullptr;};
        inline int64_t getAssignType() const { DARABONBA_PTR_GET_DEFAULT(assignType_, 0L) };
        inline Client& setAssignType(int64_t assignType) { DARABONBA_PTR_SET_VALUE(assignType_, assignType) };


        // clid Field Functions 
        bool hasClid() const { return this->clid_ != nullptr;};
        void deleteClid() { this->clid_ = nullptr;};
        inline const vector<string> & getClid() const { DARABONBA_PTR_GET_CONST(clid_, vector<string>) };
        inline vector<string> getClid() { DARABONBA_PTR_GET(clid_, vector<string>) };
        inline Client& setClid(const vector<string> & clid) { DARABONBA_PTR_SET_VALUE(clid_, clid) };
        inline Client& setClid(vector<string> && clid) { DARABONBA_PTR_SET_RVALUE(clid_, clid) };


        // clidArea Field Functions 
        bool hasClidArea() const { return this->clidArea_ != nullptr;};
        void deleteClidArea() { this->clidArea_ = nullptr;};
        inline const vector<Client::ClidArea> & getClidArea() const { DARABONBA_PTR_GET_CONST(clidArea_, vector<Client::ClidArea>) };
        inline vector<Client::ClidArea> getClidArea() { DARABONBA_PTR_GET(clidArea_, vector<Client::ClidArea>) };
        inline Client& setClidArea(const vector<Client::ClidArea> & clidArea) { DARABONBA_PTR_SET_VALUE(clidArea_, clidArea) };
        inline Client& setClidArea(vector<Client::ClidArea> && clidArea) { DARABONBA_PTR_SET_RVALUE(clidArea_, clidArea) };


        // clidDefault Field Functions 
        bool hasClidDefault() const { return this->clidDefault_ != nullptr;};
        void deleteClidDefault() { this->clidDefault_ = nullptr;};
        inline const vector<string> & getClidDefault() const { DARABONBA_PTR_GET_CONST(clidDefault_, vector<string>) };
        inline vector<string> getClidDefault() { DARABONBA_PTR_GET(clidDefault_, vector<string>) };
        inline Client& setClidDefault(const vector<string> & clidDefault) { DARABONBA_PTR_SET_VALUE(clidDefault_, clidDefault) };
        inline Client& setClidDefault(vector<string> && clidDefault) { DARABONBA_PTR_SET_RVALUE(clidDefault_, clidDefault) };


        // clidRule Field Functions 
        bool hasClidRule() const { return this->clidRule_ != nullptr;};
        void deleteClidRule() { this->clidRule_ = nullptr;};
        inline int64_t getClidRule() const { DARABONBA_PTR_GET_DEFAULT(clidRule_, 0L) };
        inline Client& setClidRule(int64_t clidRule) { DARABONBA_PTR_SET_VALUE(clidRule_, clidRule) };


        // clidType Field Functions 
        bool hasClidType() const { return this->clidType_ != nullptr;};
        void deleteClidType() { this->clidType_ = nullptr;};
        inline int64_t getClidType() const { DARABONBA_PTR_GET_DEFAULT(clidType_, 0L) };
        inline Client& setClidType(int64_t clidType) { DARABONBA_PTR_SET_VALUE(clidType_, clidType) };


        // cloudNumberEnabled Field Functions 
        bool hasCloudNumberEnabled() const { return this->cloudNumberEnabled_ != nullptr;};
        void deleteCloudNumberEnabled() { this->cloudNumberEnabled_ = nullptr;};
        inline int64_t getCloudNumberEnabled() const { DARABONBA_PTR_GET_DEFAULT(cloudNumberEnabled_, 0L) };
        inline Client& setCloudNumberEnabled(int64_t cloudNumberEnabled) { DARABONBA_PTR_SET_VALUE(cloudNumberEnabled_, cloudNumberEnabled) };


        // cloudNumberModes Field Functions 
        bool hasCloudNumberModes() const { return this->cloudNumberModes_ != nullptr;};
        void deleteCloudNumberModes() { this->cloudNumberModes_ = nullptr;};
        inline const vector<int64_t> & getCloudNumberModes() const { DARABONBA_PTR_GET_CONST(cloudNumberModes_, vector<int64_t>) };
        inline vector<int64_t> getCloudNumberModes() { DARABONBA_PTR_GET(cloudNumberModes_, vector<int64_t>) };
        inline Client& setCloudNumberModes(const vector<int64_t> & cloudNumberModes) { DARABONBA_PTR_SET_VALUE(cloudNumberModes_, cloudNumberModes) };
        inline Client& setCloudNumberModes(vector<int64_t> && cloudNumberModes) { DARABONBA_PTR_SET_RVALUE(cloudNumberModes_, cloudNumberModes) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline int64_t getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, 0L) };
        inline Client& setCno(int64_t cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // crmId Field Functions 
        bool hasCrmId() const { return this->crmId_ != nullptr;};
        void deleteCrmId() { this->crmId_ = nullptr;};
        inline int64_t getCrmId() const { DARABONBA_PTR_GET_DEFAULT(crmId_, 0L) };
        inline Client& setCrmId(int64_t crmId) { DARABONBA_PTR_SET_VALUE(crmId_, crmId) };


        // dynamicTelGroupName Field Functions 
        bool hasDynamicTelGroupName() const { return this->dynamicTelGroupName_ != nullptr;};
        void deleteDynamicTelGroupName() { this->dynamicTelGroupName_ = nullptr;};
        inline string getDynamicTelGroupName() const { DARABONBA_PTR_GET_DEFAULT(dynamicTelGroupName_, "") };
        inline Client& setDynamicTelGroupName(string dynamicTelGroupName) { DARABONBA_PTR_SET_VALUE(dynamicTelGroupName_, dynamicTelGroupName) };


        // hiddenTel Field Functions 
        bool hasHiddenTel() const { return this->hiddenTel_ != nullptr;};
        void deleteHiddenTel() { this->hiddenTel_ = nullptr;};
        inline int64_t getHiddenTel() const { DARABONBA_PTR_GET_DEFAULT(hiddenTel_, 0L) };
        inline Client& setHiddenTel(int64_t hiddenTel) { DARABONBA_PTR_SET_VALUE(hiddenTel_, hiddenTel) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Client& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // password Field Functions 
        bool hasPassword() const { return this->password_ != nullptr;};
        void deletePassword() { this->password_ = nullptr;};
        inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
        inline Client& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


        // permission Field Functions 
        bool hasPermission() const { return this->permission_ != nullptr;};
        void deletePermission() { this->permission_ = nullptr;};
        inline const Client::Permission & getPermission() const { DARABONBA_PTR_GET_CONST(permission_, Client::Permission) };
        inline Client::Permission getPermission() { DARABONBA_PTR_GET(permission_, Client::Permission) };
        inline Client& setPermission(const Client::Permission & permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };
        inline Client& setPermission(Client::Permission && permission) { DARABONBA_PTR_SET_RVALUE(permission_, permission) };


        // qnos Field Functions 
        bool hasQnos() const { return this->qnos_ != nullptr;};
        void deleteQnos() { this->qnos_ = nullptr;};
        inline const vector<string> & getQnos() const { DARABONBA_PTR_GET_CONST(qnos_, vector<string>) };
        inline vector<string> getQnos() { DARABONBA_PTR_GET(qnos_, vector<string>) };
        inline Client& setQnos(const vector<string> & qnos) { DARABONBA_PTR_SET_VALUE(qnos_, qnos) };
        inline Client& setQnos(vector<string> && qnos) { DARABONBA_PTR_SET_RVALUE(qnos_, qnos) };


        // recurrentselectionType Field Functions 
        bool hasRecurrentselectionType() const { return this->recurrentselectionType_ != nullptr;};
        void deleteRecurrentselectionType() { this->recurrentselectionType_ = nullptr;};
        inline int64_t getRecurrentselectionType() const { DARABONBA_PTR_GET_DEFAULT(recurrentselectionType_, 0L) };
        inline Client& setRecurrentselectionType(int64_t recurrentselectionType) { DARABONBA_PTR_SET_VALUE(recurrentselectionType_, recurrentselectionType) };


        // recurrentselectionValue Field Functions 
        bool hasRecurrentselectionValue() const { return this->recurrentselectionValue_ != nullptr;};
        void deleteRecurrentselectionValue() { this->recurrentselectionValue_ = nullptr;};
        inline int64_t getRecurrentselectionValue() const { DARABONBA_PTR_GET_DEFAULT(recurrentselectionValue_, 0L) };
        inline Client& setRecurrentselectionValue(int64_t recurrentselectionValue) { DARABONBA_PTR_SET_VALUE(recurrentselectionValue_, recurrentselectionValue) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline int64_t getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, 0L) };
        inline Client& setRole(int64_t role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
        inline Client& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // wrapupTime Field Functions 
        bool hasWrapupTime() const { return this->wrapupTime_ != nullptr;};
        void deleteWrapupTime() { this->wrapupTime_ = nullptr;};
        inline int64_t getWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(wrapupTime_, 0L) };
        inline Client& setWrapupTime(int64_t wrapupTime) { DARABONBA_PTR_SET_VALUE(wrapupTime_, wrapupTime) };


      protected:
        // 启用状态，0: 停用；1: 启用
        shared_ptr<int64_t> active_ {};
        // 所属区号
        shared_ptr<string> areaCode_ {};
        // 号码类型，默认值为0，0: 号码；1: 动态号码组
        shared_ptr<int64_t> assignType_ {};
        // 可外显号码集合
        shared_ptr<vector<string>> clid_ {};
        // 给地区指定可外显号码
        shared_ptr<vector<Client::ClidArea>> clidArea_ {};
        // 缺省外显号码集合，当clidType（外显号码类型）值为3且clidRule（外显规则）值为1时，支持配置缺省外显
        shared_ptr<vector<string>> clidDefault_ {};
        // 外显规则，根据外显号码类型值来定义，1: 随机；2: 轮选 或 1: 动态；2: 自定义
        shared_ptr<int64_t> clidRule_ {};
        // 外显号码类型，0: 全部；2: 座席指定；3: 智能外显
        shared_ptr<int64_t> clidType_ {};
        // 云号码外呼开关，0-关，1-开
        shared_ptr<int64_t> cloudNumberEnabled_ {};
        // 云号码四种呼叫模式；数组长度 为 4，依次对应云号码外呼的四种模式（实体卡、工作卡、两端呼、RTC)的开启状态；
        shared_ptr<vector<int64_t>> cloudNumberModes_ {};
        // 座席工号
        shared_ptr<int64_t> cno_ {};
        // CRM 编号，与第三方 CRM 系统对接时，可作为唯一标识
        shared_ptr<int64_t> crmId_ {};
        // 动态号码组名称，当assignType（号码类型）值为1（动态号码组）时为必填项
        shared_ptr<string> dynamicTelGroupName_ {};
        // 号码隐藏类型，0: 不隐藏；1: 隐藏规则与全局设置保持一致
        shared_ptr<int64_t> hiddenTel_ {};
        // 座席名称
        shared_ptr<string> name_ {};
        // 座席密码
        shared_ptr<string> password_ {};
        // permission
        shared_ptr<Client::Permission> permission_ {};
        // 所属队列号集合
        shared_ptr<vector<string>> qnos_ {};
        // 轮选方式，1: 按天轮选；2: 按次轮选
        shared_ptr<int64_t> recurrentselectionType_ {};
        // 轮选值设置 1: 按天轮选，每 n 天外呼更换一次外显号码，可设置 1-30 天 2: 按次轮选，每 n 次外呼更换一次外显号码，可设置 1-30 次
        shared_ptr<int64_t> recurrentselectionValue_ {};
        // 座席角色，0: 普通座席；1: 班长座席
        shared_ptr<int64_t> role_ {};
        // 座席类型，1：全渠道、2：呼叫中心、3：在线客服
        shared_ptr<int64_t> type_ {};
        // 整理时长，座席进行外呼操作后的整理时间
        shared_ptr<int64_t> wrapupTime_ {};
      };

      virtual bool empty() const override { return this->client_ == nullptr
        && this->clinkRequestId_ == nullptr; };
      // client Field Functions 
      bool hasClient() const { return this->client_ != nullptr;};
      void deleteClient() { this->client_ = nullptr;};
      inline const Data::Client & getClient() const { DARABONBA_PTR_GET_CONST(client_, Data::Client) };
      inline Data::Client getClient() { DARABONBA_PTR_GET(client_, Data::Client) };
      inline Data& setClient(const Data::Client & client) { DARABONBA_PTR_SET_VALUE(client_, client) };
      inline Data& setClient(Data::Client && client) { DARABONBA_PTR_SET_RVALUE(client_, client) };


      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


    protected:
      shared_ptr<Data::Client> client_ {};
      // 请求 id
      shared_ptr<string> clinkRequestId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkCreateClientResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkCreateClientResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkCreateClientResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkCreateClientResponseBody::Data) };
    inline ClinkCreateClientResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkCreateClientResponseBody::Data) };
    inline ClinkCreateClientResponseBody& setData(const ClinkCreateClientResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkCreateClientResponseBody& setData(ClinkCreateClientResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkCreateClientResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkCreateClientResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkCreateClientResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
