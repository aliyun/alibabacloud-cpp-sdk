// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDGETAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDGETAGENTRESPONSEBODY_HPP_
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
  class CloudGetAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudGetAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudGetAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudGetAgentResponseBody() = default ;
    CloudGetAgentResponseBody(const CloudGetAgentResponseBody &) = default ;
    CloudGetAgentResponseBody(CloudGetAgentResponseBody &&) = default ;
    CloudGetAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudGetAgentResponseBody() = default ;
    CloudGetAgentResponseBody& operator=(const CloudGetAgentResponseBody &) = default ;
    CloudGetAgentResponseBody& operator=(CloudGetAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Agent, agent_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Agent, agent_);
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
      class Agent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Agent& obj) { 
          DARABONBA_PTR_TO_JSON(Active, active_);
          DARABONBA_PTR_TO_JSON(AgentType, agentType_);
          DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
          DARABONBA_PTR_TO_JSON(AsrCallType, asrCallType_);
          DARABONBA_PTR_TO_JSON(BindTel, bindTel_);
          DARABONBA_PTR_TO_JSON(BindTelType, bindTelType_);
          DARABONBA_PTR_TO_JSON(CallPower, callPower_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_TO_JSON(IbRecord, ibRecord_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsAsr, isAsr_);
          DARABONBA_PTR_TO_JSON(IsAxbCall, isAxbCall_);
          DARABONBA_PTR_TO_JSON(IsOb, isOb_);
          DARABONBA_PTR_TO_JSON(IsObRemember, isObRemember_);
          DARABONBA_PTR_TO_JSON(LoginTime, loginTime_);
          DARABONBA_PTR_TO_JSON(MrcpProperty, mrcpProperty_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ObClid, obClid_);
          DARABONBA_PTR_TO_JSON(ObClidProperty, obClidProperty_);
          DARABONBA_PTR_TO_JSON(ObClidType, obClidType_);
          DARABONBA_PTR_TO_JSON(ObRecord, obRecord_);
          DARABONBA_PTR_TO_JSON(PermitObPreviewTime, permitObPreviewTime_);
          DARABONBA_PTR_TO_JSON(Power, power_);
          DARABONBA_PTR_TO_JSON(Property, property_);
          DARABONBA_PTR_TO_JSON(QueueList, queueList_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(WebrtcUrlType, webrtcUrlType_);
          DARABONBA_PTR_TO_JSON(Wrapup, wrapup_);
        };
        friend void from_json(const Darabonba::Json& j, Agent& obj) { 
          DARABONBA_PTR_FROM_JSON(Active, active_);
          DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
          DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
          DARABONBA_PTR_FROM_JSON(AsrCallType, asrCallType_);
          DARABONBA_PTR_FROM_JSON(BindTel, bindTel_);
          DARABONBA_PTR_FROM_JSON(BindTelType, bindTelType_);
          DARABONBA_PTR_FROM_JSON(CallPower, callPower_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_FROM_JSON(IbRecord, ibRecord_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsAsr, isAsr_);
          DARABONBA_PTR_FROM_JSON(IsAxbCall, isAxbCall_);
          DARABONBA_PTR_FROM_JSON(IsOb, isOb_);
          DARABONBA_PTR_FROM_JSON(IsObRemember, isObRemember_);
          DARABONBA_PTR_FROM_JSON(LoginTime, loginTime_);
          DARABONBA_PTR_FROM_JSON(MrcpProperty, mrcpProperty_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ObClid, obClid_);
          DARABONBA_PTR_FROM_JSON(ObClidProperty, obClidProperty_);
          DARABONBA_PTR_FROM_JSON(ObClidType, obClidType_);
          DARABONBA_PTR_FROM_JSON(ObRecord, obRecord_);
          DARABONBA_PTR_FROM_JSON(PermitObPreviewTime, permitObPreviewTime_);
          DARABONBA_PTR_FROM_JSON(Power, power_);
          DARABONBA_PTR_FROM_JSON(Property, property_);
          DARABONBA_PTR_FROM_JSON(QueueList, queueList_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(WebrtcUrlType, webrtcUrlType_);
          DARABONBA_PTR_FROM_JSON(Wrapup, wrapup_);
        };
        Agent() = default ;
        Agent(const Agent &) = default ;
        Agent(Agent &&) = default ;
        Agent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Agent() = default ;
        Agent& operator=(const Agent &) = default ;
        Agent& operator=(Agent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->active_ == nullptr
        && this->agentType_ == nullptr && this->areaCode_ == nullptr && this->asrCallType_ == nullptr && this->bindTel_ == nullptr && this->bindTelType_ == nullptr
        && this->callPower_ == nullptr && this->cno_ == nullptr && this->comment_ == nullptr && this->createTime_ == nullptr && this->enterpriseId_ == nullptr
        && this->ibRecord_ == nullptr && this->id_ == nullptr && this->isAsr_ == nullptr && this->isAxbCall_ == nullptr && this->isOb_ == nullptr
        && this->isObRemember_ == nullptr && this->loginTime_ == nullptr && this->mrcpProperty_ == nullptr && this->name_ == nullptr && this->obClid_ == nullptr
        && this->obClidProperty_ == nullptr && this->obClidType_ == nullptr && this->obRecord_ == nullptr && this->permitObPreviewTime_ == nullptr && this->power_ == nullptr
        && this->property_ == nullptr && this->queueList_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr && this->webrtcUrlType_ == nullptr
        && this->wrapup_ == nullptr; };
        // active Field Functions 
        bool hasActive() const { return this->active_ != nullptr;};
        void deleteActive() { this->active_ = nullptr;};
        inline int64_t getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, 0L) };
        inline Agent& setActive(int64_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


        // agentType Field Functions 
        bool hasAgentType() const { return this->agentType_ != nullptr;};
        void deleteAgentType() { this->agentType_ = nullptr;};
        inline int64_t getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, 0L) };
        inline Agent& setAgentType(int64_t agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


        // areaCode Field Functions 
        bool hasAreaCode() const { return this->areaCode_ != nullptr;};
        void deleteAreaCode() { this->areaCode_ = nullptr;};
        inline string getAreaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
        inline Agent& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


        // asrCallType Field Functions 
        bool hasAsrCallType() const { return this->asrCallType_ != nullptr;};
        void deleteAsrCallType() { this->asrCallType_ = nullptr;};
        inline string getAsrCallType() const { DARABONBA_PTR_GET_DEFAULT(asrCallType_, "") };
        inline Agent& setAsrCallType(string asrCallType) { DARABONBA_PTR_SET_VALUE(asrCallType_, asrCallType) };


        // bindTel Field Functions 
        bool hasBindTel() const { return this->bindTel_ != nullptr;};
        void deleteBindTel() { this->bindTel_ = nullptr;};
        inline string getBindTel() const { DARABONBA_PTR_GET_DEFAULT(bindTel_, "") };
        inline Agent& setBindTel(string bindTel) { DARABONBA_PTR_SET_VALUE(bindTel_, bindTel) };


        // bindTelType Field Functions 
        bool hasBindTelType() const { return this->bindTelType_ != nullptr;};
        void deleteBindTelType() { this->bindTelType_ = nullptr;};
        inline int64_t getBindTelType() const { DARABONBA_PTR_GET_DEFAULT(bindTelType_, 0L) };
        inline Agent& setBindTelType(int64_t bindTelType) { DARABONBA_PTR_SET_VALUE(bindTelType_, bindTelType) };


        // callPower Field Functions 
        bool hasCallPower() const { return this->callPower_ != nullptr;};
        void deleteCallPower() { this->callPower_ = nullptr;};
        inline int64_t getCallPower() const { DARABONBA_PTR_GET_DEFAULT(callPower_, 0L) };
        inline Agent& setCallPower(int64_t callPower) { DARABONBA_PTR_SET_VALUE(callPower_, callPower) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline Agent& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline Agent& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Agent& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // enterpriseId Field Functions 
        bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
        void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
        inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
        inline Agent& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


        // ibRecord Field Functions 
        bool hasIbRecord() const { return this->ibRecord_ != nullptr;};
        void deleteIbRecord() { this->ibRecord_ = nullptr;};
        inline int64_t getIbRecord() const { DARABONBA_PTR_GET_DEFAULT(ibRecord_, 0L) };
        inline Agent& setIbRecord(int64_t ibRecord) { DARABONBA_PTR_SET_VALUE(ibRecord_, ibRecord) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Agent& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isAsr Field Functions 
        bool hasIsAsr() const { return this->isAsr_ != nullptr;};
        void deleteIsAsr() { this->isAsr_ = nullptr;};
        inline int64_t getIsAsr() const { DARABONBA_PTR_GET_DEFAULT(isAsr_, 0L) };
        inline Agent& setIsAsr(int64_t isAsr) { DARABONBA_PTR_SET_VALUE(isAsr_, isAsr) };


        // isAxbCall Field Functions 
        bool hasIsAxbCall() const { return this->isAxbCall_ != nullptr;};
        void deleteIsAxbCall() { this->isAxbCall_ = nullptr;};
        inline string getIsAxbCall() const { DARABONBA_PTR_GET_DEFAULT(isAxbCall_, "") };
        inline Agent& setIsAxbCall(string isAxbCall) { DARABONBA_PTR_SET_VALUE(isAxbCall_, isAxbCall) };


        // isOb Field Functions 
        bool hasIsOb() const { return this->isOb_ != nullptr;};
        void deleteIsOb() { this->isOb_ = nullptr;};
        inline int64_t getIsOb() const { DARABONBA_PTR_GET_DEFAULT(isOb_, 0L) };
        inline Agent& setIsOb(int64_t isOb) { DARABONBA_PTR_SET_VALUE(isOb_, isOb) };


        // isObRemember Field Functions 
        bool hasIsObRemember() const { return this->isObRemember_ != nullptr;};
        void deleteIsObRemember() { this->isObRemember_ = nullptr;};
        inline string getIsObRemember() const { DARABONBA_PTR_GET_DEFAULT(isObRemember_, "") };
        inline Agent& setIsObRemember(string isObRemember) { DARABONBA_PTR_SET_VALUE(isObRemember_, isObRemember) };


        // loginTime Field Functions 
        bool hasLoginTime() const { return this->loginTime_ != nullptr;};
        void deleteLoginTime() { this->loginTime_ = nullptr;};
        inline string getLoginTime() const { DARABONBA_PTR_GET_DEFAULT(loginTime_, "") };
        inline Agent& setLoginTime(string loginTime) { DARABONBA_PTR_SET_VALUE(loginTime_, loginTime) };


        // mrcpProperty Field Functions 
        bool hasMrcpProperty() const { return this->mrcpProperty_ != nullptr;};
        void deleteMrcpProperty() { this->mrcpProperty_ = nullptr;};
        inline string getMrcpProperty() const { DARABONBA_PTR_GET_DEFAULT(mrcpProperty_, "") };
        inline Agent& setMrcpProperty(string mrcpProperty) { DARABONBA_PTR_SET_VALUE(mrcpProperty_, mrcpProperty) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Agent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // obClid Field Functions 
        bool hasObClid() const { return this->obClid_ != nullptr;};
        void deleteObClid() { this->obClid_ = nullptr;};
        inline string getObClid() const { DARABONBA_PTR_GET_DEFAULT(obClid_, "") };
        inline Agent& setObClid(string obClid) { DARABONBA_PTR_SET_VALUE(obClid_, obClid) };


        // obClidProperty Field Functions 
        bool hasObClidProperty() const { return this->obClidProperty_ != nullptr;};
        void deleteObClidProperty() { this->obClidProperty_ = nullptr;};
        inline string getObClidProperty() const { DARABONBA_PTR_GET_DEFAULT(obClidProperty_, "") };
        inline Agent& setObClidProperty(string obClidProperty) { DARABONBA_PTR_SET_VALUE(obClidProperty_, obClidProperty) };


        // obClidType Field Functions 
        bool hasObClidType() const { return this->obClidType_ != nullptr;};
        void deleteObClidType() { this->obClidType_ = nullptr;};
        inline int64_t getObClidType() const { DARABONBA_PTR_GET_DEFAULT(obClidType_, 0L) };
        inline Agent& setObClidType(int64_t obClidType) { DARABONBA_PTR_SET_VALUE(obClidType_, obClidType) };


        // obRecord Field Functions 
        bool hasObRecord() const { return this->obRecord_ != nullptr;};
        void deleteObRecord() { this->obRecord_ = nullptr;};
        inline int64_t getObRecord() const { DARABONBA_PTR_GET_DEFAULT(obRecord_, 0L) };
        inline Agent& setObRecord(int64_t obRecord) { DARABONBA_PTR_SET_VALUE(obRecord_, obRecord) };


        // permitObPreviewTime Field Functions 
        bool hasPermitObPreviewTime() const { return this->permitObPreviewTime_ != nullptr;};
        void deletePermitObPreviewTime() { this->permitObPreviewTime_ = nullptr;};
        inline string getPermitObPreviewTime() const { DARABONBA_PTR_GET_DEFAULT(permitObPreviewTime_, "") };
        inline Agent& setPermitObPreviewTime(string permitObPreviewTime) { DARABONBA_PTR_SET_VALUE(permitObPreviewTime_, permitObPreviewTime) };


        // power Field Functions 
        bool hasPower() const { return this->power_ != nullptr;};
        void deletePower() { this->power_ = nullptr;};
        inline int64_t getPower() const { DARABONBA_PTR_GET_DEFAULT(power_, 0L) };
        inline Agent& setPower(int64_t power) { DARABONBA_PTR_SET_VALUE(power_, power) };


        // property Field Functions 
        bool hasProperty() const { return this->property_ != nullptr;};
        void deleteProperty() { this->property_ = nullptr;};
        inline string getProperty() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
        inline Agent& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


        // queueList Field Functions 
        bool hasQueueList() const { return this->queueList_ != nullptr;};
        void deleteQueueList() { this->queueList_ = nullptr;};
        inline const vector<string> & getQueueList() const { DARABONBA_PTR_GET_CONST(queueList_, vector<string>) };
        inline vector<string> getQueueList() { DARABONBA_PTR_GET(queueList_, vector<string>) };
        inline Agent& setQueueList(const vector<string> & queueList) { DARABONBA_PTR_SET_VALUE(queueList_, queueList) };
        inline Agent& setQueueList(vector<string> && queueList) { DARABONBA_PTR_SET_RVALUE(queueList_, queueList) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline Agent& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Agent& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // webrtcUrlType Field Functions 
        bool hasWebrtcUrlType() const { return this->webrtcUrlType_ != nullptr;};
        void deleteWebrtcUrlType() { this->webrtcUrlType_ = nullptr;};
        inline string getWebrtcUrlType() const { DARABONBA_PTR_GET_DEFAULT(webrtcUrlType_, "") };
        inline Agent& setWebrtcUrlType(string webrtcUrlType) { DARABONBA_PTR_SET_VALUE(webrtcUrlType_, webrtcUrlType) };


        // wrapup Field Functions 
        bool hasWrapup() const { return this->wrapup_ != nullptr;};
        void deleteWrapup() { this->wrapup_ = nullptr;};
        inline int64_t getWrapup() const { DARABONBA_PTR_GET_DEFAULT(wrapup_, 0L) };
        inline Agent& setWrapup(int64_t wrapup) { DARABONBA_PTR_SET_VALUE(wrapup_, wrapup) };


      protected:
        // 是否启用，0：停用，1：启用，默认启用
        shared_ptr<int64_t> active_ {};
        // 座席类型，1：电话座席，2：电脑座席，默认电话座席
        shared_ptr<int64_t> agentType_ {};
        // 区号格式
        shared_ptr<string> areaCode_ {};
        // 允许语音识别的通话类型，1:呼入 4：预览外呼 9：主叫外呼 5：预测外呼 2：webcall
        shared_ptr<string> asrCallType_ {};
        // 座席绑定电话
        shared_ptr<string> bindTel_ {};
        // 电话类型，1:固话 2:手机 3:分机 4:软电话
        shared_ptr<int64_t> bindTelType_ {};
        // 呼叫权限，0：无限制，1：国内长途，2：国内本市，3：内部呼叫，默认无限制
        shared_ptr<int64_t> callPower_ {};
        // 座席工号
        shared_ptr<string> cno_ {};
        // 备注
        shared_ptr<string> comment_ {};
        // 创建时间，格式: yyyy-MM-dd HH:mm:ss
        shared_ptr<string> createTime_ {};
        // 企业编号
        shared_ptr<int64_t> enterpriseId_ {};
        // 呼入是否录音，0：不录用，1：录音，默认录音
        shared_ptr<int64_t> ibRecord_ {};
        // 座席id
        shared_ptr<int64_t> id_ {};
        // 是否开启ASR转写：0：不开启，1：开启，默认不开启
        shared_ptr<int64_t> isAsr_ {};
        // 是否允许axb外呼，默认1开启 0关闭
        shared_ptr<string> isAxbCall_ {};
        // 是否允许外呼，0：不允许，1：可以，默认允许
        shared_ptr<int64_t> isOb_ {};
        // 外呼主叫记忆 1：开启 0：关闭
        shared_ptr<string> isObRemember_ {};
        // 坐席最后一次登陆的时间
        shared_ptr<string> loginTime_ {};
        // 座席axb外呼是否使用mrcp方式推送语音流配置JSON Str格式数据
        shared_ptr<string> mrcpProperty_ {};
        // 座席姓名
        shared_ptr<string> name_ {};
        // 外显号码
        shared_ptr<string> obClid_ {};
        // 外显规则属性，JSON格式
        shared_ptr<string> obClidProperty_ {};
        // 外显规则 1：企业默认 2：随机 3：按区号 4：动态外显
        shared_ptr<int64_t> obClidType_ {};
        // 外呼是否录音，0：不录音，1：录音，默认录音
        shared_ptr<int64_t> obRecord_ {};
        // 可外呼时间段用,号分割
        shared_ptr<string> permitObPreviewTime_ {};
        // 1：班长席，0：普通座席，默认普通座席
        shared_ptr<int64_t> power_ {};
        // 座席主动挂机配置Json Str 格式数据 unLink 是否允许主动挂断, 0:关, 1:开，prohibitDuration禁止时长
        shared_ptr<string> property_ {};
        // 坐席所属队列
        shared_ptr<vector<string>> queueList_ {};
        // 座席状态，0:离线，1：在线
        shared_ptr<int64_t> status_ {};
        // 更新时间，格式: yyyy-MM-dd HH:mm:ss
        shared_ptr<string> updateTime_ {};
        // webrtc软电话返回地址，0：企业默认 1：公网域名 2：专线域名 3：公网IP 4：专线IP
        shared_ptr<string> webrtcUrlType_ {};
        // 整理时间，秒数，默认10秒
        shared_ptr<int64_t> wrapup_ {};
      };

      virtual bool empty() const override { return this->agent_ == nullptr; };
      // agent Field Functions 
      bool hasAgent() const { return this->agent_ != nullptr;};
      void deleteAgent() { this->agent_ = nullptr;};
      inline const vector<Data::Agent> & getAgent() const { DARABONBA_PTR_GET_CONST(agent_, vector<Data::Agent>) };
      inline vector<Data::Agent> getAgent() { DARABONBA_PTR_GET(agent_, vector<Data::Agent>) };
      inline Data& setAgent(const vector<Data::Agent> & agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };
      inline Data& setAgent(vector<Data::Agent> && agent) { DARABONBA_PTR_SET_RVALUE(agent_, agent) };


    protected:
      // 座席列表数组
      shared_ptr<vector<Data::Agent>> agent_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudGetAgentResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudGetAgentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudGetAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudGetAgentResponseBody::Data) };
    inline CloudGetAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudGetAgentResponseBody::Data) };
    inline CloudGetAgentResponseBody& setData(const CloudGetAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudGetAgentResponseBody& setData(CloudGetAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudGetAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudGetAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudGetAgentResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
