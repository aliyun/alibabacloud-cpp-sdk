// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDCREATEAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDCREATEAGENTRESPONSEBODY_HPP_
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
  class CloudCreateAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudCreateAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudCreateAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudCreateAgentResponseBody() = default ;
    CloudCreateAgentResponseBody(const CloudCreateAgentResponseBody &) = default ;
    CloudCreateAgentResponseBody(CloudCreateAgentResponseBody &&) = default ;
    CloudCreateAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudCreateAgentResponseBody() = default ;
    CloudCreateAgentResponseBody& operator=(const CloudCreateAgentResponseBody &) = default ;
    CloudCreateAgentResponseBody& operator=(CloudCreateAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Agent, agent_);
        DARABONBA_PTR_TO_JSON(AgentSkills, agentSkills_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Agent, agent_);
        DARABONBA_PTR_FROM_JSON(AgentSkills, agentSkills_);
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
      class AgentSkills : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentSkills& obj) { 
          DARABONBA_PTR_TO_JSON(AgentId, agentId_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(SkillId, skillId_);
          DARABONBA_PTR_TO_JSON(SkillLevel, skillLevel_);
        };
        friend void from_json(const Darabonba::Json& j, AgentSkills& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
          DARABONBA_PTR_FROM_JSON(SkillLevel, skillLevel_);
        };
        AgentSkills() = default ;
        AgentSkills(const AgentSkills &) = default ;
        AgentSkills(AgentSkills &&) = default ;
        AgentSkills(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentSkills() = default ;
        AgentSkills& operator=(const AgentSkills &) = default ;
        AgentSkills& operator=(AgentSkills &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->cno_ == nullptr && this->createTime_ == nullptr && this->enterpriseId_ == nullptr && this->id_ == nullptr && this->skillId_ == nullptr
        && this->skillLevel_ == nullptr; };
        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline AgentSkills& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline AgentSkills& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline AgentSkills& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // enterpriseId Field Functions 
        bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
        void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
        inline string getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, "") };
        inline AgentSkills& setEnterpriseId(string enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline AgentSkills& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // skillId Field Functions 
        bool hasSkillId() const { return this->skillId_ != nullptr;};
        void deleteSkillId() { this->skillId_ = nullptr;};
        inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
        inline AgentSkills& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


        // skillLevel Field Functions 
        bool hasSkillLevel() const { return this->skillLevel_ != nullptr;};
        void deleteSkillLevel() { this->skillLevel_ = nullptr;};
        inline string getSkillLevel() const { DARABONBA_PTR_GET_DEFAULT(skillLevel_, "") };
        inline AgentSkills& setSkillLevel(string skillLevel) { DARABONBA_PTR_SET_VALUE(skillLevel_, skillLevel) };


      protected:
        // 座席id
        shared_ptr<string> agentId_ {};
        shared_ptr<string> cno_ {};
        // 创建时间，格式: yyyy-MM-dd HH:mm:ss
        shared_ptr<string> createTime_ {};
        // 企业编号
        shared_ptr<string> enterpriseId_ {};
        // queueSkill关系表中id
        shared_ptr<string> id_ {};
        // skill的id
        shared_ptr<string> skillId_ {};
        // 技能值
        shared_ptr<string> skillLevel_ {};
      };

      class Agent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Agent& obj) { 
          DARABONBA_PTR_TO_JSON(Active, active_);
          DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
          DARABONBA_PTR_TO_JSON(BindTel, bindTel_);
          DARABONBA_PTR_TO_JSON(BindTelType, bindTelType_);
          DARABONBA_PTR_TO_JSON(CallPower, callPower_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_TO_JSON(IbRecord, ibRecord_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsAsr, isAsr_);
          DARABONBA_PTR_TO_JSON(IsOb, isOb_);
          DARABONBA_PTR_TO_JSON(IsQualityCheck, isQualityCheck_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ObClid, obClid_);
          DARABONBA_PTR_TO_JSON(ObClidProperty, obClidProperty_);
          DARABONBA_PTR_TO_JSON(ObClidType, obClidType_);
          DARABONBA_PTR_TO_JSON(ObRecord, obRecord_);
          DARABONBA_PTR_TO_JSON(Power, power_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(WebrtcUrlType, webrtcUrlType_);
          DARABONBA_PTR_TO_JSON(Wrapup, wrapup_);
        };
        friend void from_json(const Darabonba::Json& j, Agent& obj) { 
          DARABONBA_PTR_FROM_JSON(Active, active_);
          DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
          DARABONBA_PTR_FROM_JSON(BindTel, bindTel_);
          DARABONBA_PTR_FROM_JSON(BindTelType, bindTelType_);
          DARABONBA_PTR_FROM_JSON(CallPower, callPower_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_FROM_JSON(IbRecord, ibRecord_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsAsr, isAsr_);
          DARABONBA_PTR_FROM_JSON(IsOb, isOb_);
          DARABONBA_PTR_FROM_JSON(IsQualityCheck, isQualityCheck_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ObClid, obClid_);
          DARABONBA_PTR_FROM_JSON(ObClidProperty, obClidProperty_);
          DARABONBA_PTR_FROM_JSON(ObClidType, obClidType_);
          DARABONBA_PTR_FROM_JSON(ObRecord, obRecord_);
          DARABONBA_PTR_FROM_JSON(Power, power_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
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
        && this->areaCode_ == nullptr && this->bindTel_ == nullptr && this->bindTelType_ == nullptr && this->callPower_ == nullptr && this->cno_ == nullptr
        && this->createTime_ == nullptr && this->enterpriseId_ == nullptr && this->ibRecord_ == nullptr && this->id_ == nullptr && this->isAsr_ == nullptr
        && this->isOb_ == nullptr && this->isQualityCheck_ == nullptr && this->name_ == nullptr && this->obClid_ == nullptr && this->obClidProperty_ == nullptr
        && this->obClidType_ == nullptr && this->obRecord_ == nullptr && this->power_ == nullptr && this->status_ == nullptr && this->webrtcUrlType_ == nullptr
        && this->wrapup_ == nullptr; };
        // active Field Functions 
        bool hasActive() const { return this->active_ != nullptr;};
        void deleteActive() { this->active_ = nullptr;};
        inline string getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, "") };
        inline Agent& setActive(string active) { DARABONBA_PTR_SET_VALUE(active_, active) };


        // areaCode Field Functions 
        bool hasAreaCode() const { return this->areaCode_ != nullptr;};
        void deleteAreaCode() { this->areaCode_ = nullptr;};
        inline string getAreaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
        inline Agent& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


        // bindTel Field Functions 
        bool hasBindTel() const { return this->bindTel_ != nullptr;};
        void deleteBindTel() { this->bindTel_ = nullptr;};
        inline string getBindTel() const { DARABONBA_PTR_GET_DEFAULT(bindTel_, "") };
        inline Agent& setBindTel(string bindTel) { DARABONBA_PTR_SET_VALUE(bindTel_, bindTel) };


        // bindTelType Field Functions 
        bool hasBindTelType() const { return this->bindTelType_ != nullptr;};
        void deleteBindTelType() { this->bindTelType_ = nullptr;};
        inline string getBindTelType() const { DARABONBA_PTR_GET_DEFAULT(bindTelType_, "") };
        inline Agent& setBindTelType(string bindTelType) { DARABONBA_PTR_SET_VALUE(bindTelType_, bindTelType) };


        // callPower Field Functions 
        bool hasCallPower() const { return this->callPower_ != nullptr;};
        void deleteCallPower() { this->callPower_ = nullptr;};
        inline string getCallPower() const { DARABONBA_PTR_GET_DEFAULT(callPower_, "") };
        inline Agent& setCallPower(string callPower) { DARABONBA_PTR_SET_VALUE(callPower_, callPower) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline Agent& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Agent& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // enterpriseId Field Functions 
        bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
        void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
        inline string getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, "") };
        inline Agent& setEnterpriseId(string enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


        // ibRecord Field Functions 
        bool hasIbRecord() const { return this->ibRecord_ != nullptr;};
        void deleteIbRecord() { this->ibRecord_ = nullptr;};
        inline string getIbRecord() const { DARABONBA_PTR_GET_DEFAULT(ibRecord_, "") };
        inline Agent& setIbRecord(string ibRecord) { DARABONBA_PTR_SET_VALUE(ibRecord_, ibRecord) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Agent& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isAsr Field Functions 
        bool hasIsAsr() const { return this->isAsr_ != nullptr;};
        void deleteIsAsr() { this->isAsr_ = nullptr;};
        inline string getIsAsr() const { DARABONBA_PTR_GET_DEFAULT(isAsr_, "") };
        inline Agent& setIsAsr(string isAsr) { DARABONBA_PTR_SET_VALUE(isAsr_, isAsr) };


        // isOb Field Functions 
        bool hasIsOb() const { return this->isOb_ != nullptr;};
        void deleteIsOb() { this->isOb_ = nullptr;};
        inline string getIsOb() const { DARABONBA_PTR_GET_DEFAULT(isOb_, "") };
        inline Agent& setIsOb(string isOb) { DARABONBA_PTR_SET_VALUE(isOb_, isOb) };


        // isQualityCheck Field Functions 
        bool hasIsQualityCheck() const { return this->isQualityCheck_ != nullptr;};
        void deleteIsQualityCheck() { this->isQualityCheck_ = nullptr;};
        inline string getIsQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(isQualityCheck_, "") };
        inline Agent& setIsQualityCheck(string isQualityCheck) { DARABONBA_PTR_SET_VALUE(isQualityCheck_, isQualityCheck) };


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
        inline string getObClidType() const { DARABONBA_PTR_GET_DEFAULT(obClidType_, "") };
        inline Agent& setObClidType(string obClidType) { DARABONBA_PTR_SET_VALUE(obClidType_, obClidType) };


        // obRecord Field Functions 
        bool hasObRecord() const { return this->obRecord_ != nullptr;};
        void deleteObRecord() { this->obRecord_ = nullptr;};
        inline string getObRecord() const { DARABONBA_PTR_GET_DEFAULT(obRecord_, "") };
        inline Agent& setObRecord(string obRecord) { DARABONBA_PTR_SET_VALUE(obRecord_, obRecord) };


        // power Field Functions 
        bool hasPower() const { return this->power_ != nullptr;};
        void deletePower() { this->power_ = nullptr;};
        inline string getPower() const { DARABONBA_PTR_GET_DEFAULT(power_, "") };
        inline Agent& setPower(string power) { DARABONBA_PTR_SET_VALUE(power_, power) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Agent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // webrtcUrlType Field Functions 
        bool hasWebrtcUrlType() const { return this->webrtcUrlType_ != nullptr;};
        void deleteWebrtcUrlType() { this->webrtcUrlType_ = nullptr;};
        inline string getWebrtcUrlType() const { DARABONBA_PTR_GET_DEFAULT(webrtcUrlType_, "") };
        inline Agent& setWebrtcUrlType(string webrtcUrlType) { DARABONBA_PTR_SET_VALUE(webrtcUrlType_, webrtcUrlType) };


        // wrapup Field Functions 
        bool hasWrapup() const { return this->wrapup_ != nullptr;};
        void deleteWrapup() { this->wrapup_ = nullptr;};
        inline string getWrapup() const { DARABONBA_PTR_GET_DEFAULT(wrapup_, "") };
        inline Agent& setWrapup(string wrapup) { DARABONBA_PTR_SET_VALUE(wrapup_, wrapup) };


      protected:
        // 是否启用，0：停用，1：启用，默认启用
        shared_ptr<string> active_ {};
        // 区号格式
        shared_ptr<string> areaCode_ {};
        // 座席绑定电话
        shared_ptr<string> bindTel_ {};
        // 电话类型，1:固话 2:手机 3:分机 4:软电话
        shared_ptr<string> bindTelType_ {};
        // 呼叫权限，0：无限制，1：国内长途，2：国内本市，3：内部呼叫，默认无限制
        shared_ptr<string> callPower_ {};
        // 座席工号
        shared_ptr<string> cno_ {};
        // 创建时间，格式: yyyy-MM-dd HH:mm:ss
        shared_ptr<string> createTime_ {};
        // 企业编号
        shared_ptr<string> enterpriseId_ {};
        // 呼入是否录音，0：不录用，1：录音，默认录音
        shared_ptr<string> ibRecord_ {};
        // 座席id
        shared_ptr<string> id_ {};
        // 是否开启ASR转写：0：不开启，1：开启，默认不开启
        shared_ptr<string> isAsr_ {};
        // 是否允许外呼，0：不允许，1：可以，默认允许
        shared_ptr<string> isOb_ {};
        shared_ptr<string> isQualityCheck_ {};
        // 座席姓名
        shared_ptr<string> name_ {};
        // 外显号码
        shared_ptr<string> obClid_ {};
        // 外显规则属性，JSON格式
        shared_ptr<string> obClidProperty_ {};
        // 外显规则 1：企业默认 2：随机 3：按区号 4：动态外显
        shared_ptr<string> obClidType_ {};
        // 外呼是否录音，0：不录音，1：录音，默认录音
        shared_ptr<string> obRecord_ {};
        // 1：班长席，0：普通座席，默认普通座席
        shared_ptr<string> power_ {};
        // 座席状态，0:离线，1：在线
        shared_ptr<string> status_ {};
        // webrtc软电话返回地址，0：企业默认 1：公网域名 2：专线域名 3：公网IP 4：专线IP
        shared_ptr<string> webrtcUrlType_ {};
        // 整理时间，秒数，默认10秒
        shared_ptr<string> wrapup_ {};
      };

      virtual bool empty() const override { return this->agent_ == nullptr
        && this->agentSkills_ == nullptr; };
      // agent Field Functions 
      bool hasAgent() const { return this->agent_ != nullptr;};
      void deleteAgent() { this->agent_ = nullptr;};
      inline const Data::Agent & getAgent() const { DARABONBA_PTR_GET_CONST(agent_, Data::Agent) };
      inline Data::Agent getAgent() { DARABONBA_PTR_GET(agent_, Data::Agent) };
      inline Data& setAgent(const Data::Agent & agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };
      inline Data& setAgent(Data::Agent && agent) { DARABONBA_PTR_SET_RVALUE(agent_, agent) };


      // agentSkills Field Functions 
      bool hasAgentSkills() const { return this->agentSkills_ != nullptr;};
      void deleteAgentSkills() { this->agentSkills_ = nullptr;};
      inline const vector<Data::AgentSkills> & getAgentSkills() const { DARABONBA_PTR_GET_CONST(agentSkills_, vector<Data::AgentSkills>) };
      inline vector<Data::AgentSkills> getAgentSkills() { DARABONBA_PTR_GET(agentSkills_, vector<Data::AgentSkills>) };
      inline Data& setAgentSkills(const vector<Data::AgentSkills> & agentSkills) { DARABONBA_PTR_SET_VALUE(agentSkills_, agentSkills) };
      inline Data& setAgentSkills(vector<Data::AgentSkills> && agentSkills) { DARABONBA_PTR_SET_RVALUE(agentSkills_, agentSkills) };


    protected:
      // 座席配置信息
      shared_ptr<Data::Agent> agent_ {};
      // 座席所需技能数组
      shared_ptr<vector<Data::AgentSkills>> agentSkills_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudCreateAgentResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudCreateAgentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudCreateAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudCreateAgentResponseBody::Data) };
    inline CloudCreateAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudCreateAgentResponseBody::Data) };
    inline CloudCreateAgentResponseBody& setData(const CloudCreateAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudCreateAgentResponseBody& setData(CloudCreateAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudCreateAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudCreateAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudCreateAgentResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
