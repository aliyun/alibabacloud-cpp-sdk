// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCALINGRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCALINGRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetScalingRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScalingRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetScalingRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetScalingRulesResponseBody() = default ;
    GetScalingRulesResponseBody(const GetScalingRulesResponseBody &) = default ;
    GetScalingRulesResponseBody(GetScalingRulesResponseBody &&) = default ;
    GetScalingRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScalingRulesResponseBody() = default ;
    GetScalingRulesResponseBody& operator=(const GetScalingRulesResponseBody &) = default ;
    GetScalingRulesResponseBody& operator=(GetScalingRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_TO_JSON(OversoldFactor, oversoldFactor_);
        DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_FROM_JSON(OversoldFactor, oversoldFactor_);
        DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
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
      class RuleList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleList& obj) { 
          DARABONBA_PTR_TO_JSON(Rule, rule_);
        };
        friend void from_json(const Darabonba::Json& j, RuleList& obj) { 
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
        };
        RuleList() = default ;
        RuleList(const RuleList &) = default ;
        RuleList(RuleList &&) = default ;
        RuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleList() = default ;
        RuleList& operator=(const RuleList &) = default ;
        RuleList& operator=(RuleList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Rule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rule& obj) { 
            DARABONBA_PTR_TO_JSON(AppId, appId_);
            DARABONBA_PTR_TO_JSON(Cond, cond_);
            DARABONBA_PTR_TO_JSON(Cpu, cpu_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(Enable, enable_);
            DARABONBA_PTR_TO_JSON(GroupId, groupId_);
            DARABONBA_PTR_TO_JSON(InstNum, instNum_);
            DARABONBA_PTR_TO_JSON(LoadNum, loadNum_);
            DARABONBA_PTR_TO_JSON(MetricType, metricType_);
            DARABONBA_PTR_TO_JSON(Mode, mode_);
            DARABONBA_PTR_TO_JSON(MultiAzPolicy, multiAzPolicy_);
            DARABONBA_PTR_TO_JSON(ResourceFrom, resourceFrom_);
            DARABONBA_PTR_TO_JSON(Rt, rt_);
            DARABONBA_PTR_TO_JSON(SpecId, specId_);
            DARABONBA_PTR_TO_JSON(Step, step_);
            DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
            DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
            DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
            DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
            DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          };
          friend void from_json(const Darabonba::Json& j, Rule& obj) { 
            DARABONBA_PTR_FROM_JSON(AppId, appId_);
            DARABONBA_PTR_FROM_JSON(Cond, cond_);
            DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(Enable, enable_);
            DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
            DARABONBA_PTR_FROM_JSON(InstNum, instNum_);
            DARABONBA_PTR_FROM_JSON(LoadNum, loadNum_);
            DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
            DARABONBA_PTR_FROM_JSON(Mode, mode_);
            DARABONBA_PTR_FROM_JSON(MultiAzPolicy, multiAzPolicy_);
            DARABONBA_PTR_FROM_JSON(ResourceFrom, resourceFrom_);
            DARABONBA_PTR_FROM_JSON(Rt, rt_);
            DARABONBA_PTR_FROM_JSON(SpecId, specId_);
            DARABONBA_PTR_FROM_JSON(Step, step_);
            DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
            DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
            DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
            DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
            DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          };
          Rule() = default ;
          Rule(const Rule &) = default ;
          Rule(Rule &&) = default ;
          Rule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Rule() = default ;
          Rule& operator=(const Rule &) = default ;
          Rule& operator=(Rule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appId_ == nullptr
        && this->cond_ == nullptr && this->cpu_ == nullptr && this->createTime_ == nullptr && this->duration_ == nullptr && this->enable_ == nullptr
        && this->groupId_ == nullptr && this->instNum_ == nullptr && this->loadNum_ == nullptr && this->metricType_ == nullptr && this->mode_ == nullptr
        && this->multiAzPolicy_ == nullptr && this->resourceFrom_ == nullptr && this->rt_ == nullptr && this->specId_ == nullptr && this->step_ == nullptr
        && this->templateId_ == nullptr && this->templateVersion_ == nullptr && this->updateTime_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
          // appId Field Functions 
          bool hasAppId() const { return this->appId_ != nullptr;};
          void deleteAppId() { this->appId_ = nullptr;};
          inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
          inline Rule& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


          // cond Field Functions 
          bool hasCond() const { return this->cond_ != nullptr;};
          void deleteCond() { this->cond_ = nullptr;};
          inline string getCond() const { DARABONBA_PTR_GET_DEFAULT(cond_, "") };
          inline Rule& setCond(string cond) { DARABONBA_PTR_SET_VALUE(cond_, cond) };


          // cpu Field Functions 
          bool hasCpu() const { return this->cpu_ != nullptr;};
          void deleteCpu() { this->cpu_ = nullptr;};
          inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
          inline Rule& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline Rule& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
          inline Rule& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // enable Field Functions 
          bool hasEnable() const { return this->enable_ != nullptr;};
          void deleteEnable() { this->enable_ = nullptr;};
          inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
          inline Rule& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


          // groupId Field Functions 
          bool hasGroupId() const { return this->groupId_ != nullptr;};
          void deleteGroupId() { this->groupId_ = nullptr;};
          inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
          inline Rule& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


          // instNum Field Functions 
          bool hasInstNum() const { return this->instNum_ != nullptr;};
          void deleteInstNum() { this->instNum_ = nullptr;};
          inline int32_t getInstNum() const { DARABONBA_PTR_GET_DEFAULT(instNum_, 0) };
          inline Rule& setInstNum(int32_t instNum) { DARABONBA_PTR_SET_VALUE(instNum_, instNum) };


          // loadNum Field Functions 
          bool hasLoadNum() const { return this->loadNum_ != nullptr;};
          void deleteLoadNum() { this->loadNum_ = nullptr;};
          inline int32_t getLoadNum() const { DARABONBA_PTR_GET_DEFAULT(loadNum_, 0) };
          inline Rule& setLoadNum(int32_t loadNum) { DARABONBA_PTR_SET_VALUE(loadNum_, loadNum) };


          // metricType Field Functions 
          bool hasMetricType() const { return this->metricType_ != nullptr;};
          void deleteMetricType() { this->metricType_ = nullptr;};
          inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
          inline Rule& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


          // mode Field Functions 
          bool hasMode() const { return this->mode_ != nullptr;};
          void deleteMode() { this->mode_ = nullptr;};
          inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
          inline Rule& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


          // multiAzPolicy Field Functions 
          bool hasMultiAzPolicy() const { return this->multiAzPolicy_ != nullptr;};
          void deleteMultiAzPolicy() { this->multiAzPolicy_ = nullptr;};
          inline string getMultiAzPolicy() const { DARABONBA_PTR_GET_DEFAULT(multiAzPolicy_, "") };
          inline Rule& setMultiAzPolicy(string multiAzPolicy) { DARABONBA_PTR_SET_VALUE(multiAzPolicy_, multiAzPolicy) };


          // resourceFrom Field Functions 
          bool hasResourceFrom() const { return this->resourceFrom_ != nullptr;};
          void deleteResourceFrom() { this->resourceFrom_ = nullptr;};
          inline string getResourceFrom() const { DARABONBA_PTR_GET_DEFAULT(resourceFrom_, "") };
          inline Rule& setResourceFrom(string resourceFrom) { DARABONBA_PTR_SET_VALUE(resourceFrom_, resourceFrom) };


          // rt Field Functions 
          bool hasRt() const { return this->rt_ != nullptr;};
          void deleteRt() { this->rt_ = nullptr;};
          inline int32_t getRt() const { DARABONBA_PTR_GET_DEFAULT(rt_, 0) };
          inline Rule& setRt(int32_t rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };


          // specId Field Functions 
          bool hasSpecId() const { return this->specId_ != nullptr;};
          void deleteSpecId() { this->specId_ = nullptr;};
          inline string getSpecId() const { DARABONBA_PTR_GET_DEFAULT(specId_, "") };
          inline Rule& setSpecId(string specId) { DARABONBA_PTR_SET_VALUE(specId_, specId) };


          // step Field Functions 
          bool hasStep() const { return this->step_ != nullptr;};
          void deleteStep() { this->step_ = nullptr;};
          inline int32_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
          inline Rule& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


          // templateId Field Functions 
          bool hasTemplateId() const { return this->templateId_ != nullptr;};
          void deleteTemplateId() { this->templateId_ = nullptr;};
          inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
          inline Rule& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


          // templateVersion Field Functions 
          bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
          void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
          inline int32_t getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, 0) };
          inline Rule& setTemplateVersion(int32_t templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


          // updateTime Field Functions 
          bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
          void deleteUpdateTime() { this->updateTime_ = nullptr;};
          inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
          inline Rule& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


          // vSwitchIds Field Functions 
          bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
          void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
          inline string getVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
          inline Rule& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline Rule& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        protected:
          shared_ptr<string> appId_ {};
          shared_ptr<string> cond_ {};
          shared_ptr<int32_t> cpu_ {};
          shared_ptr<int64_t> createTime_ {};
          shared_ptr<int32_t> duration_ {};
          shared_ptr<bool> enable_ {};
          shared_ptr<string> groupId_ {};
          shared_ptr<int32_t> instNum_ {};
          shared_ptr<int32_t> loadNum_ {};
          shared_ptr<string> metricType_ {};
          shared_ptr<string> mode_ {};
          shared_ptr<string> multiAzPolicy_ {};
          shared_ptr<string> resourceFrom_ {};
          shared_ptr<int32_t> rt_ {};
          shared_ptr<string> specId_ {};
          shared_ptr<int32_t> step_ {};
          shared_ptr<string> templateId_ {};
          shared_ptr<int32_t> templateVersion_ {};
          shared_ptr<int64_t> updateTime_ {};
          shared_ptr<string> vSwitchIds_ {};
          shared_ptr<string> vpcId_ {};
        };

        virtual bool empty() const override { return this->rule_ == nullptr; };
        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline const vector<RuleList::Rule> & getRule() const { DARABONBA_PTR_GET_CONST(rule_, vector<RuleList::Rule>) };
        inline vector<RuleList::Rule> getRule() { DARABONBA_PTR_GET(rule_, vector<RuleList::Rule>) };
        inline RuleList& setRule(const vector<RuleList::Rule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
        inline RuleList& setRule(vector<RuleList::Rule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


      protected:
        shared_ptr<vector<RuleList::Rule>> rule_ {};
      };

      virtual bool empty() const override { return this->clusterType_ == nullptr
        && this->oversoldFactor_ == nullptr && this->ruleList_ == nullptr && this->updateTime_ == nullptr && this->vpcId_ == nullptr; };
      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline int32_t getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, 0) };
      inline Data& setClusterType(int32_t clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // oversoldFactor Field Functions 
      bool hasOversoldFactor() const { return this->oversoldFactor_ != nullptr;};
      void deleteOversoldFactor() { this->oversoldFactor_ = nullptr;};
      inline int32_t getOversoldFactor() const { DARABONBA_PTR_GET_DEFAULT(oversoldFactor_, 0) };
      inline Data& setOversoldFactor(int32_t oversoldFactor) { DARABONBA_PTR_SET_VALUE(oversoldFactor_, oversoldFactor) };


      // ruleList Field Functions 
      bool hasRuleList() const { return this->ruleList_ != nullptr;};
      void deleteRuleList() { this->ruleList_ = nullptr;};
      inline const Data::RuleList & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, Data::RuleList) };
      inline Data::RuleList getRuleList() { DARABONBA_PTR_GET(ruleList_, Data::RuleList) };
      inline Data& setRuleList(const Data::RuleList & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
      inline Data& setRuleList(Data::RuleList && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Data& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The type of the cluster. Valid values:
      // 
      // - 0: regular Docker cluster
      // 
      // - 1: Swarm cluster (deprecated)
      // 
      // - 2: Elastic Compute Service (ECS) cluster
      // 
      // - 3: self-managed Kubernetes cluster in EDAS
      // 
      // - 4: cluster in which Pandora automatically registers applications
      // 
      // - 5: Container Service for Kubernetes (ACK) clusters
      shared_ptr<int32_t> clusterType_ {};
      // The overcommit ratio supported by a Docker cluster. Valid values:
      // 
      // - 1: 1:1, which means that resources are not overcommitted.
      // 
      // - 2: 1:2, which means that resources are overcommitted by 1:2.
      // 
      // - 4: 1:4, which means that resources are overcommitted by 1:4.
      // 
      // - 8: 1:8, which means that resources are overcommitted by 1:8.
      shared_ptr<int32_t> oversoldFactor_ {};
      shared_ptr<Data::RuleList> ruleList_ {};
      // The time when the scaling rule was last updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> updateTime_ {};
      // The ID of the virtual private cloud (VPC).
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->updateTime_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetScalingRulesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetScalingRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetScalingRulesResponseBody::Data) };
    inline GetScalingRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetScalingRulesResponseBody::Data) };
    inline GetScalingRulesResponseBody& setData(const GetScalingRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetScalingRulesResponseBody& setData(GetScalingRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetScalingRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScalingRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetScalingRulesResponseBody& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The data that is returned.
    shared_ptr<GetScalingRulesResponseBody::Data> data_ {};
    // The message that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The time when the scaling rule was last updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
