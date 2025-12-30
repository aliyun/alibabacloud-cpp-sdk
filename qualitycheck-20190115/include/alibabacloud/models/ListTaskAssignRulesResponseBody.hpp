// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListTaskAssignRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskAssignRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskAssignRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListTaskAssignRulesResponseBody() = default ;
    ListTaskAssignRulesResponseBody(const ListTaskAssignRulesResponseBody &) = default ;
    ListTaskAssignRulesResponseBody(ListTaskAssignRulesResponseBody &&) = default ;
    ListTaskAssignRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskAssignRulesResponseBody() = default ;
    ListTaskAssignRulesResponseBody& operator=(const ListTaskAssignRulesResponseBody &) = default ;
    ListTaskAssignRulesResponseBody& operator=(ListTaskAssignRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TaskAssignRuleInfo, taskAssignRuleInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskAssignRuleInfo, taskAssignRuleInfo_);
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
      class TaskAssignRuleInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskAssignRuleInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Agents, agents_);
          DARABONBA_PTR_TO_JSON(AgentsStr, agentsStr_);
          DARABONBA_PTR_TO_JSON(AssignmentType, assignmentType_);
          DARABONBA_PTR_TO_JSON(CallTimeEnd, callTimeEnd_);
          DARABONBA_PTR_TO_JSON(CallTimeStart, callTimeStart_);
          DARABONBA_PTR_TO_JSON(CallType, callType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DurationMax, durationMax_);
          DARABONBA_PTR_TO_JSON(DurationMin, durationMin_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(Reviewers, reviewers_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Rules, rules_);
          DARABONBA_PTR_TO_JSON(SamplingMode, samplingMode_);
          DARABONBA_PTR_TO_JSON(SkillGroups, skillGroups_);
          DARABONBA_PTR_TO_JSON(SkillGroupsStr, skillGroupsStr_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, TaskAssignRuleInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Agents, agents_);
          DARABONBA_PTR_FROM_JSON(AgentsStr, agentsStr_);
          DARABONBA_PTR_FROM_JSON(AssignmentType, assignmentType_);
          DARABONBA_PTR_FROM_JSON(CallTimeEnd, callTimeEnd_);
          DARABONBA_PTR_FROM_JSON(CallTimeStart, callTimeStart_);
          DARABONBA_PTR_FROM_JSON(CallType, callType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DurationMax, durationMax_);
          DARABONBA_PTR_FROM_JSON(DurationMin, durationMin_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(Reviewers, reviewers_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Rules, rules_);
          DARABONBA_PTR_FROM_JSON(SamplingMode, samplingMode_);
          DARABONBA_PTR_FROM_JSON(SkillGroups, skillGroups_);
          DARABONBA_PTR_FROM_JSON(SkillGroupsStr, skillGroupsStr_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        TaskAssignRuleInfo() = default ;
        TaskAssignRuleInfo(const TaskAssignRuleInfo &) = default ;
        TaskAssignRuleInfo(TaskAssignRuleInfo &&) = default ;
        TaskAssignRuleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskAssignRuleInfo() = default ;
        TaskAssignRuleInfo& operator=(const TaskAssignRuleInfo &) = default ;
        TaskAssignRuleInfo& operator=(TaskAssignRuleInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SkillGroups : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SkillGroups& obj) { 
            DARABONBA_PTR_TO_JSON(SkillGroup, skillGroup_);
          };
          friend void from_json(const Darabonba::Json& j, SkillGroups& obj) { 
            DARABONBA_PTR_FROM_JSON(SkillGroup, skillGroup_);
          };
          SkillGroups() = default ;
          SkillGroups(const SkillGroups &) = default ;
          SkillGroups(SkillGroups &&) = default ;
          SkillGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SkillGroups() = default ;
          SkillGroups& operator=(const SkillGroups &) = default ;
          SkillGroups& operator=(SkillGroups &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SkillGroup : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SkillGroup& obj) { 
              DARABONBA_PTR_TO_JSON(SkillId, skillId_);
              DARABONBA_PTR_TO_JSON(SkillName, skillName_);
            };
            friend void from_json(const Darabonba::Json& j, SkillGroup& obj) { 
              DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
              DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
            };
            SkillGroup() = default ;
            SkillGroup(const SkillGroup &) = default ;
            SkillGroup(SkillGroup &&) = default ;
            SkillGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SkillGroup() = default ;
            SkillGroup& operator=(const SkillGroup &) = default ;
            SkillGroup& operator=(SkillGroup &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->skillId_ == nullptr
        && this->skillName_ == nullptr; };
            // skillId Field Functions 
            bool hasSkillId() const { return this->skillId_ != nullptr;};
            void deleteSkillId() { this->skillId_ = nullptr;};
            inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
            inline SkillGroup& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


            // skillName Field Functions 
            bool hasSkillName() const { return this->skillName_ != nullptr;};
            void deleteSkillName() { this->skillName_ = nullptr;};
            inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
            inline SkillGroup& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


          protected:
            shared_ptr<string> skillId_ {};
            shared_ptr<string> skillName_ {};
          };

          virtual bool empty() const override { return this->skillGroup_ == nullptr; };
          // skillGroup Field Functions 
          bool hasSkillGroup() const { return this->skillGroup_ != nullptr;};
          void deleteSkillGroup() { this->skillGroup_ = nullptr;};
          inline const vector<SkillGroups::SkillGroup> & getSkillGroup() const { DARABONBA_PTR_GET_CONST(skillGroup_, vector<SkillGroups::SkillGroup>) };
          inline vector<SkillGroups::SkillGroup> getSkillGroup() { DARABONBA_PTR_GET(skillGroup_, vector<SkillGroups::SkillGroup>) };
          inline SkillGroups& setSkillGroup(const vector<SkillGroups::SkillGroup> & skillGroup) { DARABONBA_PTR_SET_VALUE(skillGroup_, skillGroup) };
          inline SkillGroups& setSkillGroup(vector<SkillGroups::SkillGroup> && skillGroup) { DARABONBA_PTR_SET_RVALUE(skillGroup_, skillGroup) };


        protected:
          shared_ptr<vector<SkillGroups::SkillGroup>> skillGroup_ {};
        };

        class SamplingMode : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SamplingMode& obj) { 
            DARABONBA_PTR_TO_JSON(AnyNumberOfDraws, anyNumberOfDraws_);
            DARABONBA_PTR_TO_JSON(Designated, designated_);
            DARABONBA_PTR_TO_JSON(Dimension, dimension_);
            DARABONBA_PTR_TO_JSON(Limit, limit_);
            DARABONBA_PTR_TO_JSON(NumberOfDraws, numberOfDraws_);
            DARABONBA_PTR_TO_JSON(Proportion, proportion_);
            DARABONBA_PTR_TO_JSON(RandomInspectionNumber, randomInspectionNumber_);
            DARABONBA_PTR_TO_JSON(SamplingModeAgents, samplingModeAgents_);
          };
          friend void from_json(const Darabonba::Json& j, SamplingMode& obj) { 
            DARABONBA_PTR_FROM_JSON(AnyNumberOfDraws, anyNumberOfDraws_);
            DARABONBA_PTR_FROM_JSON(Designated, designated_);
            DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
            DARABONBA_PTR_FROM_JSON(Limit, limit_);
            DARABONBA_PTR_FROM_JSON(NumberOfDraws, numberOfDraws_);
            DARABONBA_PTR_FROM_JSON(Proportion, proportion_);
            DARABONBA_PTR_FROM_JSON(RandomInspectionNumber, randomInspectionNumber_);
            DARABONBA_PTR_FROM_JSON(SamplingModeAgents, samplingModeAgents_);
          };
          SamplingMode() = default ;
          SamplingMode(const SamplingMode &) = default ;
          SamplingMode(SamplingMode &&) = default ;
          SamplingMode(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SamplingMode() = default ;
          SamplingMode& operator=(const SamplingMode &) = default ;
          SamplingMode& operator=(SamplingMode &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SamplingModeAgents : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SamplingModeAgents& obj) { 
              DARABONBA_PTR_TO_JSON(SamplingModeAgent, samplingModeAgent_);
            };
            friend void from_json(const Darabonba::Json& j, SamplingModeAgents& obj) { 
              DARABONBA_PTR_FROM_JSON(SamplingModeAgent, samplingModeAgent_);
            };
            SamplingModeAgents() = default ;
            SamplingModeAgents(const SamplingModeAgents &) = default ;
            SamplingModeAgents(SamplingModeAgents &&) = default ;
            SamplingModeAgents(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SamplingModeAgents() = default ;
            SamplingModeAgents& operator=(const SamplingModeAgents &) = default ;
            SamplingModeAgents& operator=(SamplingModeAgents &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class SamplingModeAgent : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SamplingModeAgent& obj) { 
                DARABONBA_PTR_TO_JSON(AgentId, agentId_);
                DARABONBA_PTR_TO_JSON(AgentName, agentName_);
              };
              friend void from_json(const Darabonba::Json& j, SamplingModeAgent& obj) { 
                DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
                DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
              };
              SamplingModeAgent() = default ;
              SamplingModeAgent(const SamplingModeAgent &) = default ;
              SamplingModeAgent(SamplingModeAgent &&) = default ;
              SamplingModeAgent(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SamplingModeAgent() = default ;
              SamplingModeAgent& operator=(const SamplingModeAgent &) = default ;
              SamplingModeAgent& operator=(SamplingModeAgent &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr; };
              // agentId Field Functions 
              bool hasAgentId() const { return this->agentId_ != nullptr;};
              void deleteAgentId() { this->agentId_ = nullptr;};
              inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
              inline SamplingModeAgent& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


              // agentName Field Functions 
              bool hasAgentName() const { return this->agentName_ != nullptr;};
              void deleteAgentName() { this->agentName_ = nullptr;};
              inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
              inline SamplingModeAgent& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


            protected:
              shared_ptr<string> agentId_ {};
              shared_ptr<string> agentName_ {};
            };

            virtual bool empty() const override { return this->samplingModeAgent_ == nullptr; };
            // samplingModeAgent Field Functions 
            bool hasSamplingModeAgent() const { return this->samplingModeAgent_ != nullptr;};
            void deleteSamplingModeAgent() { this->samplingModeAgent_ = nullptr;};
            inline const vector<SamplingModeAgents::SamplingModeAgent> & getSamplingModeAgent() const { DARABONBA_PTR_GET_CONST(samplingModeAgent_, vector<SamplingModeAgents::SamplingModeAgent>) };
            inline vector<SamplingModeAgents::SamplingModeAgent> getSamplingModeAgent() { DARABONBA_PTR_GET(samplingModeAgent_, vector<SamplingModeAgents::SamplingModeAgent>) };
            inline SamplingModeAgents& setSamplingModeAgent(const vector<SamplingModeAgents::SamplingModeAgent> & samplingModeAgent) { DARABONBA_PTR_SET_VALUE(samplingModeAgent_, samplingModeAgent) };
            inline SamplingModeAgents& setSamplingModeAgent(vector<SamplingModeAgents::SamplingModeAgent> && samplingModeAgent) { DARABONBA_PTR_SET_RVALUE(samplingModeAgent_, samplingModeAgent) };


          protected:
            shared_ptr<vector<SamplingModeAgents::SamplingModeAgent>> samplingModeAgent_ {};
          };

          virtual bool empty() const override { return this->anyNumberOfDraws_ == nullptr
        && this->designated_ == nullptr && this->dimension_ == nullptr && this->limit_ == nullptr && this->numberOfDraws_ == nullptr && this->proportion_ == nullptr
        && this->randomInspectionNumber_ == nullptr && this->samplingModeAgents_ == nullptr; };
          // anyNumberOfDraws Field Functions 
          bool hasAnyNumberOfDraws() const { return this->anyNumberOfDraws_ != nullptr;};
          void deleteAnyNumberOfDraws() { this->anyNumberOfDraws_ = nullptr;};
          inline int32_t getAnyNumberOfDraws() const { DARABONBA_PTR_GET_DEFAULT(anyNumberOfDraws_, 0) };
          inline SamplingMode& setAnyNumberOfDraws(int32_t anyNumberOfDraws) { DARABONBA_PTR_SET_VALUE(anyNumberOfDraws_, anyNumberOfDraws) };


          // designated Field Functions 
          bool hasDesignated() const { return this->designated_ != nullptr;};
          void deleteDesignated() { this->designated_ = nullptr;};
          inline bool getDesignated() const { DARABONBA_PTR_GET_DEFAULT(designated_, false) };
          inline SamplingMode& setDesignated(bool designated) { DARABONBA_PTR_SET_VALUE(designated_, designated) };


          // dimension Field Functions 
          bool hasDimension() const { return this->dimension_ != nullptr;};
          void deleteDimension() { this->dimension_ = nullptr;};
          inline int32_t getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0) };
          inline SamplingMode& setDimension(int32_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


          // limit Field Functions 
          bool hasLimit() const { return this->limit_ != nullptr;};
          void deleteLimit() { this->limit_ = nullptr;};
          inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
          inline SamplingMode& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


          // numberOfDraws Field Functions 
          bool hasNumberOfDraws() const { return this->numberOfDraws_ != nullptr;};
          void deleteNumberOfDraws() { this->numberOfDraws_ = nullptr;};
          inline int32_t getNumberOfDraws() const { DARABONBA_PTR_GET_DEFAULT(numberOfDraws_, 0) };
          inline SamplingMode& setNumberOfDraws(int32_t numberOfDraws) { DARABONBA_PTR_SET_VALUE(numberOfDraws_, numberOfDraws) };


          // proportion Field Functions 
          bool hasProportion() const { return this->proportion_ != nullptr;};
          void deleteProportion() { this->proportion_ = nullptr;};
          inline float getProportion() const { DARABONBA_PTR_GET_DEFAULT(proportion_, 0.0) };
          inline SamplingMode& setProportion(float proportion) { DARABONBA_PTR_SET_VALUE(proportion_, proportion) };


          // randomInspectionNumber Field Functions 
          bool hasRandomInspectionNumber() const { return this->randomInspectionNumber_ != nullptr;};
          void deleteRandomInspectionNumber() { this->randomInspectionNumber_ = nullptr;};
          inline int32_t getRandomInspectionNumber() const { DARABONBA_PTR_GET_DEFAULT(randomInspectionNumber_, 0) };
          inline SamplingMode& setRandomInspectionNumber(int32_t randomInspectionNumber) { DARABONBA_PTR_SET_VALUE(randomInspectionNumber_, randomInspectionNumber) };


          // samplingModeAgents Field Functions 
          bool hasSamplingModeAgents() const { return this->samplingModeAgents_ != nullptr;};
          void deleteSamplingModeAgents() { this->samplingModeAgents_ = nullptr;};
          inline const SamplingMode::SamplingModeAgents & getSamplingModeAgents() const { DARABONBA_PTR_GET_CONST(samplingModeAgents_, SamplingMode::SamplingModeAgents) };
          inline SamplingMode::SamplingModeAgents getSamplingModeAgents() { DARABONBA_PTR_GET(samplingModeAgents_, SamplingMode::SamplingModeAgents) };
          inline SamplingMode& setSamplingModeAgents(const SamplingMode::SamplingModeAgents & samplingModeAgents) { DARABONBA_PTR_SET_VALUE(samplingModeAgents_, samplingModeAgents) };
          inline SamplingMode& setSamplingModeAgents(SamplingMode::SamplingModeAgents && samplingModeAgents) { DARABONBA_PTR_SET_RVALUE(samplingModeAgents_, samplingModeAgents) };


        protected:
          shared_ptr<int32_t> anyNumberOfDraws_ {};
          shared_ptr<bool> designated_ {};
          shared_ptr<int32_t> dimension_ {};
          shared_ptr<int32_t> limit_ {};
          shared_ptr<int32_t> numberOfDraws_ {};
          shared_ptr<float> proportion_ {};
          shared_ptr<int32_t> randomInspectionNumber_ {};
          shared_ptr<SamplingMode::SamplingModeAgents> samplingModeAgents_ {};
        };

        class Rules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rules& obj) { 
            DARABONBA_PTR_TO_JSON(RuleBasicInfo, ruleBasicInfo_);
          };
          friend void from_json(const Darabonba::Json& j, Rules& obj) { 
            DARABONBA_PTR_FROM_JSON(RuleBasicInfo, ruleBasicInfo_);
          };
          Rules() = default ;
          Rules(const Rules &) = default ;
          Rules(Rules &&) = default ;
          Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Rules() = default ;
          Rules& operator=(const Rules &) = default ;
          Rules& operator=(Rules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RuleBasicInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RuleBasicInfo& obj) { 
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Rid, rid_);
            };
            friend void from_json(const Darabonba::Json& j, RuleBasicInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Rid, rid_);
            };
            RuleBasicInfo() = default ;
            RuleBasicInfo(const RuleBasicInfo &) = default ;
            RuleBasicInfo(RuleBasicInfo &&) = default ;
            RuleBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RuleBasicInfo() = default ;
            RuleBasicInfo& operator=(const RuleBasicInfo &) = default ;
            RuleBasicInfo& operator=(RuleBasicInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr
        && this->rid_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline RuleBasicInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // rid Field Functions 
            bool hasRid() const { return this->rid_ != nullptr;};
            void deleteRid() { this->rid_ = nullptr;};
            inline string getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
            inline RuleBasicInfo& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


          protected:
            shared_ptr<string> name_ {};
            shared_ptr<string> rid_ {};
          };

          virtual bool empty() const override { return this->ruleBasicInfo_ == nullptr; };
          // ruleBasicInfo Field Functions 
          bool hasRuleBasicInfo() const { return this->ruleBasicInfo_ != nullptr;};
          void deleteRuleBasicInfo() { this->ruleBasicInfo_ = nullptr;};
          inline const vector<Rules::RuleBasicInfo> & getRuleBasicInfo() const { DARABONBA_PTR_GET_CONST(ruleBasicInfo_, vector<Rules::RuleBasicInfo>) };
          inline vector<Rules::RuleBasicInfo> getRuleBasicInfo() { DARABONBA_PTR_GET(ruleBasicInfo_, vector<Rules::RuleBasicInfo>) };
          inline Rules& setRuleBasicInfo(const vector<Rules::RuleBasicInfo> & ruleBasicInfo) { DARABONBA_PTR_SET_VALUE(ruleBasicInfo_, ruleBasicInfo) };
          inline Rules& setRuleBasicInfo(vector<Rules::RuleBasicInfo> && ruleBasicInfo) { DARABONBA_PTR_SET_RVALUE(ruleBasicInfo_, ruleBasicInfo) };


        protected:
          shared_ptr<vector<Rules::RuleBasicInfo>> ruleBasicInfo_ {};
        };

        class Reviewers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Reviewers& obj) { 
            DARABONBA_PTR_TO_JSON(Reviewer, reviewer_);
          };
          friend void from_json(const Darabonba::Json& j, Reviewers& obj) { 
            DARABONBA_PTR_FROM_JSON(Reviewer, reviewer_);
          };
          Reviewers() = default ;
          Reviewers(const Reviewers &) = default ;
          Reviewers(Reviewers &&) = default ;
          Reviewers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Reviewers() = default ;
          Reviewers& operator=(const Reviewers &) = default ;
          Reviewers& operator=(Reviewers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Reviewer : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Reviewer& obj) { 
              DARABONBA_PTR_TO_JSON(ReviewerId, reviewerId_);
              DARABONBA_PTR_TO_JSON(ReviewerName, reviewerName_);
            };
            friend void from_json(const Darabonba::Json& j, Reviewer& obj) { 
              DARABONBA_PTR_FROM_JSON(ReviewerId, reviewerId_);
              DARABONBA_PTR_FROM_JSON(ReviewerName, reviewerName_);
            };
            Reviewer() = default ;
            Reviewer(const Reviewer &) = default ;
            Reviewer(Reviewer &&) = default ;
            Reviewer(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Reviewer() = default ;
            Reviewer& operator=(const Reviewer &) = default ;
            Reviewer& operator=(Reviewer &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->reviewerId_ == nullptr
        && this->reviewerName_ == nullptr; };
            // reviewerId Field Functions 
            bool hasReviewerId() const { return this->reviewerId_ != nullptr;};
            void deleteReviewerId() { this->reviewerId_ = nullptr;};
            inline string getReviewerId() const { DARABONBA_PTR_GET_DEFAULT(reviewerId_, "") };
            inline Reviewer& setReviewerId(string reviewerId) { DARABONBA_PTR_SET_VALUE(reviewerId_, reviewerId) };


            // reviewerName Field Functions 
            bool hasReviewerName() const { return this->reviewerName_ != nullptr;};
            void deleteReviewerName() { this->reviewerName_ = nullptr;};
            inline string getReviewerName() const { DARABONBA_PTR_GET_DEFAULT(reviewerName_, "") };
            inline Reviewer& setReviewerName(string reviewerName) { DARABONBA_PTR_SET_VALUE(reviewerName_, reviewerName) };


          protected:
            shared_ptr<string> reviewerId_ {};
            shared_ptr<string> reviewerName_ {};
          };

          virtual bool empty() const override { return this->reviewer_ == nullptr; };
          // reviewer Field Functions 
          bool hasReviewer() const { return this->reviewer_ != nullptr;};
          void deleteReviewer() { this->reviewer_ = nullptr;};
          inline const vector<Reviewers::Reviewer> & getReviewer() const { DARABONBA_PTR_GET_CONST(reviewer_, vector<Reviewers::Reviewer>) };
          inline vector<Reviewers::Reviewer> getReviewer() { DARABONBA_PTR_GET(reviewer_, vector<Reviewers::Reviewer>) };
          inline Reviewers& setReviewer(const vector<Reviewers::Reviewer> & reviewer) { DARABONBA_PTR_SET_VALUE(reviewer_, reviewer) };
          inline Reviewers& setReviewer(vector<Reviewers::Reviewer> && reviewer) { DARABONBA_PTR_SET_RVALUE(reviewer_, reviewer) };


        protected:
          shared_ptr<vector<Reviewers::Reviewer>> reviewer_ {};
        };

        class Agents : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Agents& obj) { 
            DARABONBA_PTR_TO_JSON(Agent, agent_);
          };
          friend void from_json(const Darabonba::Json& j, Agents& obj) { 
            DARABONBA_PTR_FROM_JSON(Agent, agent_);
          };
          Agents() = default ;
          Agents(const Agents &) = default ;
          Agents(Agents &&) = default ;
          Agents(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Agents() = default ;
          Agents& operator=(const Agents &) = default ;
          Agents& operator=(Agents &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Agent : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Agent& obj) { 
              DARABONBA_PTR_TO_JSON(AgentId, agentId_);
              DARABONBA_PTR_TO_JSON(AgentName, agentName_);
            };
            friend void from_json(const Darabonba::Json& j, Agent& obj) { 
              DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
              DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
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
            virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr; };
            // agentId Field Functions 
            bool hasAgentId() const { return this->agentId_ != nullptr;};
            void deleteAgentId() { this->agentId_ = nullptr;};
            inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
            inline Agent& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


            // agentName Field Functions 
            bool hasAgentName() const { return this->agentName_ != nullptr;};
            void deleteAgentName() { this->agentName_ = nullptr;};
            inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
            inline Agent& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


          protected:
            shared_ptr<string> agentId_ {};
            shared_ptr<string> agentName_ {};
          };

          virtual bool empty() const override { return this->agent_ == nullptr; };
          // agent Field Functions 
          bool hasAgent() const { return this->agent_ != nullptr;};
          void deleteAgent() { this->agent_ = nullptr;};
          inline const vector<Agents::Agent> & getAgent() const { DARABONBA_PTR_GET_CONST(agent_, vector<Agents::Agent>) };
          inline vector<Agents::Agent> getAgent() { DARABONBA_PTR_GET(agent_, vector<Agents::Agent>) };
          inline Agents& setAgent(const vector<Agents::Agent> & agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };
          inline Agents& setAgent(vector<Agents::Agent> && agent) { DARABONBA_PTR_SET_RVALUE(agent_, agent) };


        protected:
          shared_ptr<vector<Agents::Agent>> agent_ {};
        };

        virtual bool empty() const override { return this->agents_ == nullptr
        && this->agentsStr_ == nullptr && this->assignmentType_ == nullptr && this->callTimeEnd_ == nullptr && this->callTimeStart_ == nullptr && this->callType_ == nullptr
        && this->createTime_ == nullptr && this->durationMax_ == nullptr && this->durationMin_ == nullptr && this->enabled_ == nullptr && this->priority_ == nullptr
        && this->reviewers_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->rules_ == nullptr && this->samplingMode_ == nullptr
        && this->skillGroups_ == nullptr && this->skillGroupsStr_ == nullptr && this->updateTime_ == nullptr; };
        // agents Field Functions 
        bool hasAgents() const { return this->agents_ != nullptr;};
        void deleteAgents() { this->agents_ = nullptr;};
        inline const TaskAssignRuleInfo::Agents & getAgents() const { DARABONBA_PTR_GET_CONST(agents_, TaskAssignRuleInfo::Agents) };
        inline TaskAssignRuleInfo::Agents getAgents() { DARABONBA_PTR_GET(agents_, TaskAssignRuleInfo::Agents) };
        inline TaskAssignRuleInfo& setAgents(const TaskAssignRuleInfo::Agents & agents) { DARABONBA_PTR_SET_VALUE(agents_, agents) };
        inline TaskAssignRuleInfo& setAgents(TaskAssignRuleInfo::Agents && agents) { DARABONBA_PTR_SET_RVALUE(agents_, agents) };


        // agentsStr Field Functions 
        bool hasAgentsStr() const { return this->agentsStr_ != nullptr;};
        void deleteAgentsStr() { this->agentsStr_ = nullptr;};
        inline string getAgentsStr() const { DARABONBA_PTR_GET_DEFAULT(agentsStr_, "") };
        inline TaskAssignRuleInfo& setAgentsStr(string agentsStr) { DARABONBA_PTR_SET_VALUE(agentsStr_, agentsStr) };


        // assignmentType Field Functions 
        bool hasAssignmentType() const { return this->assignmentType_ != nullptr;};
        void deleteAssignmentType() { this->assignmentType_ = nullptr;};
        inline int32_t getAssignmentType() const { DARABONBA_PTR_GET_DEFAULT(assignmentType_, 0) };
        inline TaskAssignRuleInfo& setAssignmentType(int32_t assignmentType) { DARABONBA_PTR_SET_VALUE(assignmentType_, assignmentType) };


        // callTimeEnd Field Functions 
        bool hasCallTimeEnd() const { return this->callTimeEnd_ != nullptr;};
        void deleteCallTimeEnd() { this->callTimeEnd_ = nullptr;};
        inline int64_t getCallTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(callTimeEnd_, 0L) };
        inline TaskAssignRuleInfo& setCallTimeEnd(int64_t callTimeEnd) { DARABONBA_PTR_SET_VALUE(callTimeEnd_, callTimeEnd) };


        // callTimeStart Field Functions 
        bool hasCallTimeStart() const { return this->callTimeStart_ != nullptr;};
        void deleteCallTimeStart() { this->callTimeStart_ = nullptr;};
        inline int64_t getCallTimeStart() const { DARABONBA_PTR_GET_DEFAULT(callTimeStart_, 0L) };
        inline TaskAssignRuleInfo& setCallTimeStart(int64_t callTimeStart) { DARABONBA_PTR_SET_VALUE(callTimeStart_, callTimeStart) };


        // callType Field Functions 
        bool hasCallType() const { return this->callType_ != nullptr;};
        void deleteCallType() { this->callType_ = nullptr;};
        inline int32_t getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0) };
        inline TaskAssignRuleInfo& setCallType(int32_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline TaskAssignRuleInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // durationMax Field Functions 
        bool hasDurationMax() const { return this->durationMax_ != nullptr;};
        void deleteDurationMax() { this->durationMax_ = nullptr;};
        inline int32_t getDurationMax() const { DARABONBA_PTR_GET_DEFAULT(durationMax_, 0) };
        inline TaskAssignRuleInfo& setDurationMax(int32_t durationMax) { DARABONBA_PTR_SET_VALUE(durationMax_, durationMax) };


        // durationMin Field Functions 
        bool hasDurationMin() const { return this->durationMin_ != nullptr;};
        void deleteDurationMin() { this->durationMin_ = nullptr;};
        inline int32_t getDurationMin() const { DARABONBA_PTR_GET_DEFAULT(durationMin_, 0) };
        inline TaskAssignRuleInfo& setDurationMin(int32_t durationMin) { DARABONBA_PTR_SET_VALUE(durationMin_, durationMin) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline int32_t getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, 0) };
        inline TaskAssignRuleInfo& setEnabled(int32_t enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline TaskAssignRuleInfo& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // reviewers Field Functions 
        bool hasReviewers() const { return this->reviewers_ != nullptr;};
        void deleteReviewers() { this->reviewers_ = nullptr;};
        inline const TaskAssignRuleInfo::Reviewers & getReviewers() const { DARABONBA_PTR_GET_CONST(reviewers_, TaskAssignRuleInfo::Reviewers) };
        inline TaskAssignRuleInfo::Reviewers getReviewers() { DARABONBA_PTR_GET(reviewers_, TaskAssignRuleInfo::Reviewers) };
        inline TaskAssignRuleInfo& setReviewers(const TaskAssignRuleInfo::Reviewers & reviewers) { DARABONBA_PTR_SET_VALUE(reviewers_, reviewers) };
        inline TaskAssignRuleInfo& setReviewers(TaskAssignRuleInfo::Reviewers && reviewers) { DARABONBA_PTR_SET_RVALUE(reviewers_, reviewers) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
        inline TaskAssignRuleInfo& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline TaskAssignRuleInfo& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // rules Field Functions 
        bool hasRules() const { return this->rules_ != nullptr;};
        void deleteRules() { this->rules_ = nullptr;};
        inline const TaskAssignRuleInfo::Rules & getRules() const { DARABONBA_PTR_GET_CONST(rules_, TaskAssignRuleInfo::Rules) };
        inline TaskAssignRuleInfo::Rules getRules() { DARABONBA_PTR_GET(rules_, TaskAssignRuleInfo::Rules) };
        inline TaskAssignRuleInfo& setRules(const TaskAssignRuleInfo::Rules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
        inline TaskAssignRuleInfo& setRules(TaskAssignRuleInfo::Rules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


        // samplingMode Field Functions 
        bool hasSamplingMode() const { return this->samplingMode_ != nullptr;};
        void deleteSamplingMode() { this->samplingMode_ = nullptr;};
        inline const TaskAssignRuleInfo::SamplingMode & getSamplingMode() const { DARABONBA_PTR_GET_CONST(samplingMode_, TaskAssignRuleInfo::SamplingMode) };
        inline TaskAssignRuleInfo::SamplingMode getSamplingMode() { DARABONBA_PTR_GET(samplingMode_, TaskAssignRuleInfo::SamplingMode) };
        inline TaskAssignRuleInfo& setSamplingMode(const TaskAssignRuleInfo::SamplingMode & samplingMode) { DARABONBA_PTR_SET_VALUE(samplingMode_, samplingMode) };
        inline TaskAssignRuleInfo& setSamplingMode(TaskAssignRuleInfo::SamplingMode && samplingMode) { DARABONBA_PTR_SET_RVALUE(samplingMode_, samplingMode) };


        // skillGroups Field Functions 
        bool hasSkillGroups() const { return this->skillGroups_ != nullptr;};
        void deleteSkillGroups() { this->skillGroups_ = nullptr;};
        inline const TaskAssignRuleInfo::SkillGroups & getSkillGroups() const { DARABONBA_PTR_GET_CONST(skillGroups_, TaskAssignRuleInfo::SkillGroups) };
        inline TaskAssignRuleInfo::SkillGroups getSkillGroups() { DARABONBA_PTR_GET(skillGroups_, TaskAssignRuleInfo::SkillGroups) };
        inline TaskAssignRuleInfo& setSkillGroups(const TaskAssignRuleInfo::SkillGroups & skillGroups) { DARABONBA_PTR_SET_VALUE(skillGroups_, skillGroups) };
        inline TaskAssignRuleInfo& setSkillGroups(TaskAssignRuleInfo::SkillGroups && skillGroups) { DARABONBA_PTR_SET_RVALUE(skillGroups_, skillGroups) };


        // skillGroupsStr Field Functions 
        bool hasSkillGroupsStr() const { return this->skillGroupsStr_ != nullptr;};
        void deleteSkillGroupsStr() { this->skillGroupsStr_ = nullptr;};
        inline string getSkillGroupsStr() const { DARABONBA_PTR_GET_DEFAULT(skillGroupsStr_, "") };
        inline TaskAssignRuleInfo& setSkillGroupsStr(string skillGroupsStr) { DARABONBA_PTR_SET_VALUE(skillGroupsStr_, skillGroupsStr) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline TaskAssignRuleInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<TaskAssignRuleInfo::Agents> agents_ {};
        shared_ptr<string> agentsStr_ {};
        shared_ptr<int32_t> assignmentType_ {};
        shared_ptr<int64_t> callTimeEnd_ {};
        shared_ptr<int64_t> callTimeStart_ {};
        shared_ptr<int32_t> callType_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<int32_t> durationMax_ {};
        shared_ptr<int32_t> durationMin_ {};
        shared_ptr<int32_t> enabled_ {};
        shared_ptr<int32_t> priority_ {};
        shared_ptr<TaskAssignRuleInfo::Reviewers> reviewers_ {};
        shared_ptr<int64_t> ruleId_ {};
        shared_ptr<string> ruleName_ {};
        shared_ptr<TaskAssignRuleInfo::Rules> rules_ {};
        shared_ptr<TaskAssignRuleInfo::SamplingMode> samplingMode_ {};
        shared_ptr<TaskAssignRuleInfo::SkillGroups> skillGroups_ {};
        shared_ptr<string> skillGroupsStr_ {};
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->taskAssignRuleInfo_ == nullptr; };
      // taskAssignRuleInfo Field Functions 
      bool hasTaskAssignRuleInfo() const { return this->taskAssignRuleInfo_ != nullptr;};
      void deleteTaskAssignRuleInfo() { this->taskAssignRuleInfo_ = nullptr;};
      inline const vector<Data::TaskAssignRuleInfo> & getTaskAssignRuleInfo() const { DARABONBA_PTR_GET_CONST(taskAssignRuleInfo_, vector<Data::TaskAssignRuleInfo>) };
      inline vector<Data::TaskAssignRuleInfo> getTaskAssignRuleInfo() { DARABONBA_PTR_GET(taskAssignRuleInfo_, vector<Data::TaskAssignRuleInfo>) };
      inline Data& setTaskAssignRuleInfo(const vector<Data::TaskAssignRuleInfo> & taskAssignRuleInfo) { DARABONBA_PTR_SET_VALUE(taskAssignRuleInfo_, taskAssignRuleInfo) };
      inline Data& setTaskAssignRuleInfo(vector<Data::TaskAssignRuleInfo> && taskAssignRuleInfo) { DARABONBA_PTR_SET_RVALUE(taskAssignRuleInfo_, taskAssignRuleInfo) };


    protected:
      shared_ptr<vector<Data::TaskAssignRuleInfo>> taskAssignRuleInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTaskAssignRulesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListTaskAssignRulesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListTaskAssignRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListTaskAssignRulesResponseBody::Data) };
    inline ListTaskAssignRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListTaskAssignRulesResponseBody::Data) };
    inline ListTaskAssignRulesResponseBody& setData(const ListTaskAssignRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTaskAssignRulesResponseBody& setData(ListTaskAssignRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTaskAssignRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTaskAssignRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTaskAssignRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskAssignRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTaskAssignRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> count_ {};
    shared_ptr<ListTaskAssignRulesResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
