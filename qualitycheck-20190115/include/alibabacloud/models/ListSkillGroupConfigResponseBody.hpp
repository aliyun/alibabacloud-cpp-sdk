// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLGROUPCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLGROUPCONFIGRESPONSEBODY_HPP_
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
  class ListSkillGroupConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillGroupConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillGroupConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSkillGroupConfigResponseBody() = default ;
    ListSkillGroupConfigResponseBody(const ListSkillGroupConfigResponseBody &) = default ;
    ListSkillGroupConfigResponseBody(ListSkillGroupConfigResponseBody &&) = default ;
    ListSkillGroupConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillGroupConfigResponseBody() = default ;
    ListSkillGroupConfigResponseBody& operator=(const ListSkillGroupConfigResponseBody &) = default ;
    ListSkillGroupConfigResponseBody& operator=(ListSkillGroupConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SkillGroupConfig, skillGroupConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SkillGroupConfig, skillGroupConfig_);
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
      class SkillGroupConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SkillGroupConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AllContentQualityCheck, allContentQualityCheck_);
          DARABONBA_PTR_TO_JSON(AllRids, allRids_);
          DARABONBA_PTR_TO_JSON(AllRuleList, allRuleList_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(ModelId, modelId_);
          DARABONBA_PTR_TO_JSON(ModelName, modelName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(QualityCheckType, qualityCheckType_);
          DARABONBA_PTR_TO_JSON(Rid, rid_);
          DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
          DARABONBA_PTR_TO_JSON(ScreenSwitch, screenSwitch_);
          DARABONBA_PTR_TO_JSON(SkillGroupFrom, skillGroupFrom_);
          DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
          DARABONBA_PTR_TO_JSON(SkillGroupName, skillGroupName_);
          DARABONBA_PTR_TO_JSON(SkillGroupScreens, skillGroupScreens_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(VocabId, vocabId_);
          DARABONBA_PTR_TO_JSON(VocabName, vocabName_);
        };
        friend void from_json(const Darabonba::Json& j, SkillGroupConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AllContentQualityCheck, allContentQualityCheck_);
          DARABONBA_PTR_FROM_JSON(AllRids, allRids_);
          DARABONBA_PTR_FROM_JSON(AllRuleList, allRuleList_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
          DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(QualityCheckType, qualityCheckType_);
          DARABONBA_PTR_FROM_JSON(Rid, rid_);
          DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
          DARABONBA_PTR_FROM_JSON(ScreenSwitch, screenSwitch_);
          DARABONBA_PTR_FROM_JSON(SkillGroupFrom, skillGroupFrom_);
          DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
          DARABONBA_PTR_FROM_JSON(SkillGroupName, skillGroupName_);
          DARABONBA_PTR_FROM_JSON(SkillGroupScreens, skillGroupScreens_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(VocabId, vocabId_);
          DARABONBA_PTR_FROM_JSON(VocabName, vocabName_);
        };
        SkillGroupConfig() = default ;
        SkillGroupConfig(const SkillGroupConfig &) = default ;
        SkillGroupConfig(SkillGroupConfig &&) = default ;
        SkillGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SkillGroupConfig() = default ;
        SkillGroupConfig& operator=(const SkillGroupConfig &) = default ;
        SkillGroupConfig& operator=(SkillGroupConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SkillGroupScreens : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SkillGroupScreens& obj) { 
            DARABONBA_PTR_TO_JSON(SkillGroupScreen, skillGroupScreen_);
          };
          friend void from_json(const Darabonba::Json& j, SkillGroupScreens& obj) { 
            DARABONBA_PTR_FROM_JSON(SkillGroupScreen, skillGroupScreen_);
          };
          SkillGroupScreens() = default ;
          SkillGroupScreens(const SkillGroupScreens &) = default ;
          SkillGroupScreens(SkillGroupScreens &&) = default ;
          SkillGroupScreens(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SkillGroupScreens() = default ;
          SkillGroupScreens& operator=(const SkillGroupScreens &) = default ;
          SkillGroupScreens& operator=(SkillGroupScreens &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SkillGroupScreen : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SkillGroupScreen& obj) { 
              DARABONBA_PTR_TO_JSON(DataType, dataType_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Symbol, symbol_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, SkillGroupScreen& obj) { 
              DARABONBA_PTR_FROM_JSON(DataType, dataType_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Symbol, symbol_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            SkillGroupScreen() = default ;
            SkillGroupScreen(const SkillGroupScreen &) = default ;
            SkillGroupScreen(SkillGroupScreen &&) = default ;
            SkillGroupScreen(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SkillGroupScreen() = default ;
            SkillGroupScreen& operator=(const SkillGroupScreen &) = default ;
            SkillGroupScreen& operator=(SkillGroupScreen &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->dataType_ == nullptr
        && this->name_ == nullptr && this->symbol_ == nullptr && this->value_ == nullptr; };
            // dataType Field Functions 
            bool hasDataType() const { return this->dataType_ != nullptr;};
            void deleteDataType() { this->dataType_ = nullptr;};
            inline int32_t getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, 0) };
            inline SkillGroupScreen& setDataType(int32_t dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline SkillGroupScreen& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // symbol Field Functions 
            bool hasSymbol() const { return this->symbol_ != nullptr;};
            void deleteSymbol() { this->symbol_ = nullptr;};
            inline int32_t getSymbol() const { DARABONBA_PTR_GET_DEFAULT(symbol_, 0) };
            inline SkillGroupScreen& setSymbol(int32_t symbol) { DARABONBA_PTR_SET_VALUE(symbol_, symbol) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline SkillGroupScreen& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<int32_t> dataType_ {};
            shared_ptr<string> name_ {};
            shared_ptr<int32_t> symbol_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->skillGroupScreen_ == nullptr; };
          // skillGroupScreen Field Functions 
          bool hasSkillGroupScreen() const { return this->skillGroupScreen_ != nullptr;};
          void deleteSkillGroupScreen() { this->skillGroupScreen_ = nullptr;};
          inline const vector<SkillGroupScreens::SkillGroupScreen> & getSkillGroupScreen() const { DARABONBA_PTR_GET_CONST(skillGroupScreen_, vector<SkillGroupScreens::SkillGroupScreen>) };
          inline vector<SkillGroupScreens::SkillGroupScreen> getSkillGroupScreen() { DARABONBA_PTR_GET(skillGroupScreen_, vector<SkillGroupScreens::SkillGroupScreen>) };
          inline SkillGroupScreens& setSkillGroupScreen(const vector<SkillGroupScreens::SkillGroupScreen> & skillGroupScreen) { DARABONBA_PTR_SET_VALUE(skillGroupScreen_, skillGroupScreen) };
          inline SkillGroupScreens& setSkillGroupScreen(vector<SkillGroupScreens::SkillGroupScreen> && skillGroupScreen) { DARABONBA_PTR_SET_RVALUE(skillGroupScreen_, skillGroupScreen) };


        protected:
          shared_ptr<vector<SkillGroupScreens::SkillGroupScreen>> skillGroupScreen_ {};
        };

        class RuleList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuleList& obj) { 
            DARABONBA_PTR_TO_JSON(RuleNameInfo, ruleNameInfo_);
          };
          friend void from_json(const Darabonba::Json& j, RuleList& obj) { 
            DARABONBA_PTR_FROM_JSON(RuleNameInfo, ruleNameInfo_);
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
          class RuleNameInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RuleNameInfo& obj) { 
              DARABONBA_PTR_TO_JSON(Rid, rid_);
              DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
            };
            friend void from_json(const Darabonba::Json& j, RuleNameInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(Rid, rid_);
              DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
            };
            RuleNameInfo() = default ;
            RuleNameInfo(const RuleNameInfo &) = default ;
            RuleNameInfo(RuleNameInfo &&) = default ;
            RuleNameInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RuleNameInfo() = default ;
            RuleNameInfo& operator=(const RuleNameInfo &) = default ;
            RuleNameInfo& operator=(RuleNameInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->rid_ == nullptr
        && this->ruleName_ == nullptr; };
            // rid Field Functions 
            bool hasRid() const { return this->rid_ != nullptr;};
            void deleteRid() { this->rid_ = nullptr;};
            inline int64_t getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
            inline RuleNameInfo& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


            // ruleName Field Functions 
            bool hasRuleName() const { return this->ruleName_ != nullptr;};
            void deleteRuleName() { this->ruleName_ = nullptr;};
            inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
            inline RuleNameInfo& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


          protected:
            shared_ptr<int64_t> rid_ {};
            shared_ptr<string> ruleName_ {};
          };

          virtual bool empty() const override { return this->ruleNameInfo_ == nullptr; };
          // ruleNameInfo Field Functions 
          bool hasRuleNameInfo() const { return this->ruleNameInfo_ != nullptr;};
          void deleteRuleNameInfo() { this->ruleNameInfo_ = nullptr;};
          inline const vector<RuleList::RuleNameInfo> & getRuleNameInfo() const { DARABONBA_PTR_GET_CONST(ruleNameInfo_, vector<RuleList::RuleNameInfo>) };
          inline vector<RuleList::RuleNameInfo> getRuleNameInfo() { DARABONBA_PTR_GET(ruleNameInfo_, vector<RuleList::RuleNameInfo>) };
          inline RuleList& setRuleNameInfo(const vector<RuleList::RuleNameInfo> & ruleNameInfo) { DARABONBA_PTR_SET_VALUE(ruleNameInfo_, ruleNameInfo) };
          inline RuleList& setRuleNameInfo(vector<RuleList::RuleNameInfo> && ruleNameInfo) { DARABONBA_PTR_SET_RVALUE(ruleNameInfo_, ruleNameInfo) };


        protected:
          shared_ptr<vector<RuleList::RuleNameInfo>> ruleNameInfo_ {};
        };

        class AllRuleList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AllRuleList& obj) { 
            DARABONBA_PTR_TO_JSON(RuleNameInfo, ruleNameInfo_);
          };
          friend void from_json(const Darabonba::Json& j, AllRuleList& obj) { 
            DARABONBA_PTR_FROM_JSON(RuleNameInfo, ruleNameInfo_);
          };
          AllRuleList() = default ;
          AllRuleList(const AllRuleList &) = default ;
          AllRuleList(AllRuleList &&) = default ;
          AllRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AllRuleList() = default ;
          AllRuleList& operator=(const AllRuleList &) = default ;
          AllRuleList& operator=(AllRuleList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RuleNameInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RuleNameInfo& obj) { 
              DARABONBA_PTR_TO_JSON(Rid, rid_);
              DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
            };
            friend void from_json(const Darabonba::Json& j, RuleNameInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(Rid, rid_);
              DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
            };
            RuleNameInfo() = default ;
            RuleNameInfo(const RuleNameInfo &) = default ;
            RuleNameInfo(RuleNameInfo &&) = default ;
            RuleNameInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RuleNameInfo() = default ;
            RuleNameInfo& operator=(const RuleNameInfo &) = default ;
            RuleNameInfo& operator=(RuleNameInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->rid_ == nullptr
        && this->ruleName_ == nullptr; };
            // rid Field Functions 
            bool hasRid() const { return this->rid_ != nullptr;};
            void deleteRid() { this->rid_ = nullptr;};
            inline int64_t getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
            inline RuleNameInfo& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


            // ruleName Field Functions 
            bool hasRuleName() const { return this->ruleName_ != nullptr;};
            void deleteRuleName() { this->ruleName_ = nullptr;};
            inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
            inline RuleNameInfo& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


          protected:
            shared_ptr<int64_t> rid_ {};
            shared_ptr<string> ruleName_ {};
          };

          virtual bool empty() const override { return this->ruleNameInfo_ == nullptr; };
          // ruleNameInfo Field Functions 
          bool hasRuleNameInfo() const { return this->ruleNameInfo_ != nullptr;};
          void deleteRuleNameInfo() { this->ruleNameInfo_ = nullptr;};
          inline const vector<AllRuleList::RuleNameInfo> & getRuleNameInfo() const { DARABONBA_PTR_GET_CONST(ruleNameInfo_, vector<AllRuleList::RuleNameInfo>) };
          inline vector<AllRuleList::RuleNameInfo> getRuleNameInfo() { DARABONBA_PTR_GET(ruleNameInfo_, vector<AllRuleList::RuleNameInfo>) };
          inline AllRuleList& setRuleNameInfo(const vector<AllRuleList::RuleNameInfo> & ruleNameInfo) { DARABONBA_PTR_SET_VALUE(ruleNameInfo_, ruleNameInfo) };
          inline AllRuleList& setRuleNameInfo(vector<AllRuleList::RuleNameInfo> && ruleNameInfo) { DARABONBA_PTR_SET_RVALUE(ruleNameInfo_, ruleNameInfo) };


        protected:
          shared_ptr<vector<AllRuleList::RuleNameInfo>> ruleNameInfo_ {};
        };

        virtual bool empty() const override { return this->allContentQualityCheck_ == nullptr
        && this->allRids_ == nullptr && this->allRuleList_ == nullptr && this->createTime_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr
        && this->modelId_ == nullptr && this->modelName_ == nullptr && this->name_ == nullptr && this->qualityCheckType_ == nullptr && this->rid_ == nullptr
        && this->ruleList_ == nullptr && this->screenSwitch_ == nullptr && this->skillGroupFrom_ == nullptr && this->skillGroupId_ == nullptr && this->skillGroupName_ == nullptr
        && this->skillGroupScreens_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr && this->vocabId_ == nullptr
        && this->vocabName_ == nullptr; };
        // allContentQualityCheck Field Functions 
        bool hasAllContentQualityCheck() const { return this->allContentQualityCheck_ != nullptr;};
        void deleteAllContentQualityCheck() { this->allContentQualityCheck_ = nullptr;};
        inline int32_t getAllContentQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(allContentQualityCheck_, 0) };
        inline SkillGroupConfig& setAllContentQualityCheck(int32_t allContentQualityCheck) { DARABONBA_PTR_SET_VALUE(allContentQualityCheck_, allContentQualityCheck) };


        // allRids Field Functions 
        bool hasAllRids() const { return this->allRids_ != nullptr;};
        void deleteAllRids() { this->allRids_ = nullptr;};
        inline string getAllRids() const { DARABONBA_PTR_GET_DEFAULT(allRids_, "") };
        inline SkillGroupConfig& setAllRids(string allRids) { DARABONBA_PTR_SET_VALUE(allRids_, allRids) };


        // allRuleList Field Functions 
        bool hasAllRuleList() const { return this->allRuleList_ != nullptr;};
        void deleteAllRuleList() { this->allRuleList_ = nullptr;};
        inline const SkillGroupConfig::AllRuleList & getAllRuleList() const { DARABONBA_PTR_GET_CONST(allRuleList_, SkillGroupConfig::AllRuleList) };
        inline SkillGroupConfig::AllRuleList getAllRuleList() { DARABONBA_PTR_GET(allRuleList_, SkillGroupConfig::AllRuleList) };
        inline SkillGroupConfig& setAllRuleList(const SkillGroupConfig::AllRuleList & allRuleList) { DARABONBA_PTR_SET_VALUE(allRuleList_, allRuleList) };
        inline SkillGroupConfig& setAllRuleList(SkillGroupConfig::AllRuleList && allRuleList) { DARABONBA_PTR_SET_RVALUE(allRuleList_, allRuleList) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline SkillGroupConfig& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline SkillGroupConfig& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline SkillGroupConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // modelId Field Functions 
        bool hasModelId() const { return this->modelId_ != nullptr;};
        void deleteModelId() { this->modelId_ = nullptr;};
        inline int64_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
        inline SkillGroupConfig& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


        // modelName Field Functions 
        bool hasModelName() const { return this->modelName_ != nullptr;};
        void deleteModelName() { this->modelName_ = nullptr;};
        inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
        inline SkillGroupConfig& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SkillGroupConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // qualityCheckType Field Functions 
        bool hasQualityCheckType() const { return this->qualityCheckType_ != nullptr;};
        void deleteQualityCheckType() { this->qualityCheckType_ = nullptr;};
        inline int32_t getQualityCheckType() const { DARABONBA_PTR_GET_DEFAULT(qualityCheckType_, 0) };
        inline SkillGroupConfig& setQualityCheckType(int32_t qualityCheckType) { DARABONBA_PTR_SET_VALUE(qualityCheckType_, qualityCheckType) };


        // rid Field Functions 
        bool hasRid() const { return this->rid_ != nullptr;};
        void deleteRid() { this->rid_ = nullptr;};
        inline string getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
        inline SkillGroupConfig& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


        // ruleList Field Functions 
        bool hasRuleList() const { return this->ruleList_ != nullptr;};
        void deleteRuleList() { this->ruleList_ = nullptr;};
        inline const SkillGroupConfig::RuleList & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, SkillGroupConfig::RuleList) };
        inline SkillGroupConfig::RuleList getRuleList() { DARABONBA_PTR_GET(ruleList_, SkillGroupConfig::RuleList) };
        inline SkillGroupConfig& setRuleList(const SkillGroupConfig::RuleList & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
        inline SkillGroupConfig& setRuleList(SkillGroupConfig::RuleList && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


        // screenSwitch Field Functions 
        bool hasScreenSwitch() const { return this->screenSwitch_ != nullptr;};
        void deleteScreenSwitch() { this->screenSwitch_ = nullptr;};
        inline bool getScreenSwitch() const { DARABONBA_PTR_GET_DEFAULT(screenSwitch_, false) };
        inline SkillGroupConfig& setScreenSwitch(bool screenSwitch) { DARABONBA_PTR_SET_VALUE(screenSwitch_, screenSwitch) };


        // skillGroupFrom Field Functions 
        bool hasSkillGroupFrom() const { return this->skillGroupFrom_ != nullptr;};
        void deleteSkillGroupFrom() { this->skillGroupFrom_ = nullptr;};
        inline int32_t getSkillGroupFrom() const { DARABONBA_PTR_GET_DEFAULT(skillGroupFrom_, 0) };
        inline SkillGroupConfig& setSkillGroupFrom(int32_t skillGroupFrom) { DARABONBA_PTR_SET_VALUE(skillGroupFrom_, skillGroupFrom) };


        // skillGroupId Field Functions 
        bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
        void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
        inline string getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
        inline SkillGroupConfig& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


        // skillGroupName Field Functions 
        bool hasSkillGroupName() const { return this->skillGroupName_ != nullptr;};
        void deleteSkillGroupName() { this->skillGroupName_ = nullptr;};
        inline string getSkillGroupName() const { DARABONBA_PTR_GET_DEFAULT(skillGroupName_, "") };
        inline SkillGroupConfig& setSkillGroupName(string skillGroupName) { DARABONBA_PTR_SET_VALUE(skillGroupName_, skillGroupName) };


        // skillGroupScreens Field Functions 
        bool hasSkillGroupScreens() const { return this->skillGroupScreens_ != nullptr;};
        void deleteSkillGroupScreens() { this->skillGroupScreens_ = nullptr;};
        inline const SkillGroupConfig::SkillGroupScreens & getSkillGroupScreens() const { DARABONBA_PTR_GET_CONST(skillGroupScreens_, SkillGroupConfig::SkillGroupScreens) };
        inline SkillGroupConfig::SkillGroupScreens getSkillGroupScreens() { DARABONBA_PTR_GET(skillGroupScreens_, SkillGroupConfig::SkillGroupScreens) };
        inline SkillGroupConfig& setSkillGroupScreens(const SkillGroupConfig::SkillGroupScreens & skillGroupScreens) { DARABONBA_PTR_SET_VALUE(skillGroupScreens_, skillGroupScreens) };
        inline SkillGroupConfig& setSkillGroupScreens(SkillGroupConfig::SkillGroupScreens && skillGroupScreens) { DARABONBA_PTR_SET_RVALUE(skillGroupScreens_, skillGroupScreens) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline SkillGroupConfig& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline SkillGroupConfig& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline SkillGroupConfig& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // vocabId Field Functions 
        bool hasVocabId() const { return this->vocabId_ != nullptr;};
        void deleteVocabId() { this->vocabId_ = nullptr;};
        inline int64_t getVocabId() const { DARABONBA_PTR_GET_DEFAULT(vocabId_, 0L) };
        inline SkillGroupConfig& setVocabId(int64_t vocabId) { DARABONBA_PTR_SET_VALUE(vocabId_, vocabId) };


        // vocabName Field Functions 
        bool hasVocabName() const { return this->vocabName_ != nullptr;};
        void deleteVocabName() { this->vocabName_ = nullptr;};
        inline string getVocabName() const { DARABONBA_PTR_GET_DEFAULT(vocabName_, "") };
        inline SkillGroupConfig& setVocabName(string vocabName) { DARABONBA_PTR_SET_VALUE(vocabName_, vocabName) };


      protected:
        shared_ptr<int32_t> allContentQualityCheck_ {};
        shared_ptr<string> allRids_ {};
        shared_ptr<SkillGroupConfig::AllRuleList> allRuleList_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<int64_t> modelId_ {};
        shared_ptr<string> modelName_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int32_t> qualityCheckType_ {};
        shared_ptr<string> rid_ {};
        shared_ptr<SkillGroupConfig::RuleList> ruleList_ {};
        shared_ptr<bool> screenSwitch_ {};
        shared_ptr<int32_t> skillGroupFrom_ {};
        shared_ptr<string> skillGroupId_ {};
        shared_ptr<string> skillGroupName_ {};
        shared_ptr<SkillGroupConfig::SkillGroupScreens> skillGroupScreens_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<int32_t> type_ {};
        shared_ptr<string> updateTime_ {};
        shared_ptr<int64_t> vocabId_ {};
        shared_ptr<string> vocabName_ {};
      };

      virtual bool empty() const override { return this->skillGroupConfig_ == nullptr; };
      // skillGroupConfig Field Functions 
      bool hasSkillGroupConfig() const { return this->skillGroupConfig_ != nullptr;};
      void deleteSkillGroupConfig() { this->skillGroupConfig_ = nullptr;};
      inline const vector<Data::SkillGroupConfig> & getSkillGroupConfig() const { DARABONBA_PTR_GET_CONST(skillGroupConfig_, vector<Data::SkillGroupConfig>) };
      inline vector<Data::SkillGroupConfig> getSkillGroupConfig() { DARABONBA_PTR_GET(skillGroupConfig_, vector<Data::SkillGroupConfig>) };
      inline Data& setSkillGroupConfig(const vector<Data::SkillGroupConfig> & skillGroupConfig) { DARABONBA_PTR_SET_VALUE(skillGroupConfig_, skillGroupConfig) };
      inline Data& setSkillGroupConfig(vector<Data::SkillGroupConfig> && skillGroupConfig) { DARABONBA_PTR_SET_RVALUE(skillGroupConfig_, skillGroupConfig) };


    protected:
      shared_ptr<vector<Data::SkillGroupConfig>> skillGroupConfig_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSkillGroupConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSkillGroupConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSkillGroupConfigResponseBody::Data) };
    inline ListSkillGroupConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSkillGroupConfigResponseBody::Data) };
    inline ListSkillGroupConfigResponseBody& setData(const ListSkillGroupConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSkillGroupConfigResponseBody& setData(ListSkillGroupConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSkillGroupConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSkillGroupConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSkillGroupConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListSkillGroupConfigResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
