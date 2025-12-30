// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTRULEV4RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TESTRULEV4RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ConditionBasicInfo.hpp>
#include <alibabacloud/models/TaskGraphFlow.hpp>
#include <alibabacloud/models/NextNodeSituations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class TestRuleV4ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestRuleV4ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, TestRuleV4ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    TestRuleV4ResponseBody() = default ;
    TestRuleV4ResponseBody(const TestRuleV4ResponseBody &) = default ;
    TestRuleV4ResponseBody(TestRuleV4ResponseBody &&) = default ;
    TestRuleV4ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestRuleV4ResponseBody() = default ;
    TestRuleV4ResponseBody& operator=(const TestRuleV4ResponseBody &) = default ;
    TestRuleV4ResponseBody& operator=(TestRuleV4ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(HitRuleReviewInfoList, hitRuleReviewInfoList_);
        DARABONBA_PTR_TO_JSON(HitTaskFlowList, hitTaskFlowList_);
        DARABONBA_PTR_TO_JSON(UnhitRuleReviewInfoList, unhitRuleReviewInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(HitRuleReviewInfoList, hitRuleReviewInfoList_);
        DARABONBA_PTR_FROM_JSON(HitTaskFlowList, hitTaskFlowList_);
        DARABONBA_PTR_FROM_JSON(UnhitRuleReviewInfoList, unhitRuleReviewInfoList_);
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
      class UnhitRuleReviewInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UnhitRuleReviewInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(ConditionInfoList, conditionInfoList_);
          DARABONBA_PTR_TO_JSON(Matched, matched_);
          DARABONBA_PTR_TO_JSON(Rid, rid_);
          DARABONBA_PTR_TO_JSON(TaskFlowType, taskFlowType_);
        };
        friend void from_json(const Darabonba::Json& j, UnhitRuleReviewInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(ConditionInfoList, conditionInfoList_);
          DARABONBA_PTR_FROM_JSON(Matched, matched_);
          DARABONBA_PTR_FROM_JSON(Rid, rid_);
          DARABONBA_PTR_FROM_JSON(TaskFlowType, taskFlowType_);
        };
        UnhitRuleReviewInfoList() = default ;
        UnhitRuleReviewInfoList(const UnhitRuleReviewInfoList &) = default ;
        UnhitRuleReviewInfoList(UnhitRuleReviewInfoList &&) = default ;
        UnhitRuleReviewInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UnhitRuleReviewInfoList() = default ;
        UnhitRuleReviewInfoList& operator=(const UnhitRuleReviewInfoList &) = default ;
        UnhitRuleReviewInfoList& operator=(UnhitRuleReviewInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->conditionInfoList_ == nullptr
        && this->matched_ == nullptr && this->rid_ == nullptr && this->taskFlowType_ == nullptr; };
        // conditionInfoList Field Functions 
        bool hasConditionInfoList() const { return this->conditionInfoList_ != nullptr;};
        void deleteConditionInfoList() { this->conditionInfoList_ = nullptr;};
        inline const vector<ConditionBasicInfo> & getConditionInfoList() const { DARABONBA_PTR_GET_CONST(conditionInfoList_, vector<ConditionBasicInfo>) };
        inline vector<ConditionBasicInfo> getConditionInfoList() { DARABONBA_PTR_GET(conditionInfoList_, vector<ConditionBasicInfo>) };
        inline UnhitRuleReviewInfoList& setConditionInfoList(const vector<ConditionBasicInfo> & conditionInfoList) { DARABONBA_PTR_SET_VALUE(conditionInfoList_, conditionInfoList) };
        inline UnhitRuleReviewInfoList& setConditionInfoList(vector<ConditionBasicInfo> && conditionInfoList) { DARABONBA_PTR_SET_RVALUE(conditionInfoList_, conditionInfoList) };


        // matched Field Functions 
        bool hasMatched() const { return this->matched_ != nullptr;};
        void deleteMatched() { this->matched_ = nullptr;};
        inline bool getMatched() const { DARABONBA_PTR_GET_DEFAULT(matched_, false) };
        inline UnhitRuleReviewInfoList& setMatched(bool matched) { DARABONBA_PTR_SET_VALUE(matched_, matched) };


        // rid Field Functions 
        bool hasRid() const { return this->rid_ != nullptr;};
        void deleteRid() { this->rid_ = nullptr;};
        inline int64_t getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
        inline UnhitRuleReviewInfoList& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


        // taskFlowType Field Functions 
        bool hasTaskFlowType() const { return this->taskFlowType_ != nullptr;};
        void deleteTaskFlowType() { this->taskFlowType_ = nullptr;};
        inline int32_t getTaskFlowType() const { DARABONBA_PTR_GET_DEFAULT(taskFlowType_, 0) };
        inline UnhitRuleReviewInfoList& setTaskFlowType(int32_t taskFlowType) { DARABONBA_PTR_SET_VALUE(taskFlowType_, taskFlowType) };


      protected:
        shared_ptr<vector<ConditionBasicInfo>> conditionInfoList_ {};
        shared_ptr<bool> matched_ {};
        shared_ptr<int64_t> rid_ {};
        shared_ptr<int32_t> taskFlowType_ {};
      };

      class HitTaskFlowList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HitTaskFlowList& obj) { 
          DARABONBA_PTR_TO_JSON(GraphFlow, graphFlow_);
          DARABONBA_PTR_TO_JSON(Rid, rid_);
          DARABONBA_PTR_TO_JSON(TaskFlowType, taskFlowType_);
        };
        friend void from_json(const Darabonba::Json& j, HitTaskFlowList& obj) { 
          DARABONBA_PTR_FROM_JSON(GraphFlow, graphFlow_);
          DARABONBA_PTR_FROM_JSON(Rid, rid_);
          DARABONBA_PTR_FROM_JSON(TaskFlowType, taskFlowType_);
        };
        HitTaskFlowList() = default ;
        HitTaskFlowList(const HitTaskFlowList &) = default ;
        HitTaskFlowList(HitTaskFlowList &&) = default ;
        HitTaskFlowList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HitTaskFlowList() = default ;
        HitTaskFlowList& operator=(const HitTaskFlowList &) = default ;
        HitTaskFlowList& operator=(HitTaskFlowList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->graphFlow_ == nullptr
        && this->rid_ == nullptr && this->taskFlowType_ == nullptr; };
        // graphFlow Field Functions 
        bool hasGraphFlow() const { return this->graphFlow_ != nullptr;};
        void deleteGraphFlow() { this->graphFlow_ = nullptr;};
        inline const TaskGraphFlow & getGraphFlow() const { DARABONBA_PTR_GET_CONST(graphFlow_, TaskGraphFlow) };
        inline TaskGraphFlow getGraphFlow() { DARABONBA_PTR_GET(graphFlow_, TaskGraphFlow) };
        inline HitTaskFlowList& setGraphFlow(const TaskGraphFlow & graphFlow) { DARABONBA_PTR_SET_VALUE(graphFlow_, graphFlow) };
        inline HitTaskFlowList& setGraphFlow(TaskGraphFlow && graphFlow) { DARABONBA_PTR_SET_RVALUE(graphFlow_, graphFlow) };


        // rid Field Functions 
        bool hasRid() const { return this->rid_ != nullptr;};
        void deleteRid() { this->rid_ = nullptr;};
        inline int64_t getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
        inline HitTaskFlowList& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


        // taskFlowType Field Functions 
        bool hasTaskFlowType() const { return this->taskFlowType_ != nullptr;};
        void deleteTaskFlowType() { this->taskFlowType_ = nullptr;};
        inline int32_t getTaskFlowType() const { DARABONBA_PTR_GET_DEFAULT(taskFlowType_, 0) };
        inline HitTaskFlowList& setTaskFlowType(int32_t taskFlowType) { DARABONBA_PTR_SET_VALUE(taskFlowType_, taskFlowType) };


      protected:
        shared_ptr<TaskGraphFlow> graphFlow_ {};
        shared_ptr<int64_t> rid_ {};
        shared_ptr<int32_t> taskFlowType_ {};
      };

      class HitRuleReviewInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HitRuleReviewInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(BranchHitId, branchHitId_);
          DARABONBA_PTR_TO_JSON(BranchInfoList, branchInfoList_);
          DARABONBA_PTR_TO_JSON(ConditionHitInfoList, conditionHitInfoList_);
          DARABONBA_PTR_TO_JSON(ConditionInfoList, conditionInfoList_);
          DARABONBA_PTR_TO_JSON(JudgeNodeName, judgeNodeName_);
          DARABONBA_PTR_TO_JSON(Lambda, lambda_);
          DARABONBA_PTR_TO_JSON(Matched, matched_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(Rid, rid_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(RuleScoreType, ruleScoreType_);
          DARABONBA_PTR_TO_JSON(ScoreNumType, scoreNumType_);
          DARABONBA_PTR_TO_JSON(TaskFlowId, taskFlowId_);
        };
        friend void from_json(const Darabonba::Json& j, HitRuleReviewInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(BranchHitId, branchHitId_);
          DARABONBA_PTR_FROM_JSON(BranchInfoList, branchInfoList_);
          DARABONBA_PTR_FROM_JSON(ConditionHitInfoList, conditionHitInfoList_);
          DARABONBA_PTR_FROM_JSON(ConditionInfoList, conditionInfoList_);
          DARABONBA_PTR_FROM_JSON(JudgeNodeName, judgeNodeName_);
          DARABONBA_PTR_FROM_JSON(Lambda, lambda_);
          DARABONBA_PTR_FROM_JSON(Matched, matched_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(Rid, rid_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(RuleScoreType, ruleScoreType_);
          DARABONBA_PTR_FROM_JSON(ScoreNumType, scoreNumType_);
          DARABONBA_PTR_FROM_JSON(TaskFlowId, taskFlowId_);
        };
        HitRuleReviewInfoList() = default ;
        HitRuleReviewInfoList(const HitRuleReviewInfoList &) = default ;
        HitRuleReviewInfoList(HitRuleReviewInfoList &&) = default ;
        HitRuleReviewInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HitRuleReviewInfoList() = default ;
        HitRuleReviewInfoList& operator=(const HitRuleReviewInfoList &) = default ;
        HitRuleReviewInfoList& operator=(HitRuleReviewInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ConditionHitInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConditionHitInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(Cid, cid_);
            DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
            DARABONBA_PTR_TO_JSON(Phrase, phrase_);
          };
          friend void from_json(const Darabonba::Json& j, ConditionHitInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(Cid, cid_);
            DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
            DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
          };
          ConditionHitInfoList() = default ;
          ConditionHitInfoList(const ConditionHitInfoList &) = default ;
          ConditionHitInfoList(ConditionHitInfoList &&) = default ;
          ConditionHitInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConditionHitInfoList() = default ;
          ConditionHitInfoList& operator=(const ConditionHitInfoList &) = default ;
          ConditionHitInfoList& operator=(ConditionHitInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Phrase : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Phrase& obj) { 
              DARABONBA_PTR_TO_JSON(Begin, begin_);
              DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
              DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
              DARABONBA_PTR_TO_JSON(EmotionFineGrainedValue, emotionFineGrainedValue_);
              DARABONBA_PTR_TO_JSON(EmotionValue, emotionValue_);
              DARABONBA_PTR_TO_JSON(End, end_);
              DARABONBA_PTR_TO_JSON(HitStatus, hitStatus_);
              DARABONBA_PTR_TO_JSON(HourMinSec, hourMinSec_);
              DARABONBA_PTR_TO_JSON(Identity, identity_);
              DARABONBA_PTR_TO_JSON(Pid, pid_);
              DARABONBA_PTR_TO_JSON(RenterId, renterId_);
              DARABONBA_PTR_TO_JSON(Role, role_);
              DARABONBA_PTR_TO_JSON(Sid, sid_);
              DARABONBA_PTR_TO_JSON(SilenceDuration, silenceDuration_);
              DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
              DARABONBA_PTR_TO_JSON(Uuid, uuid_);
              DARABONBA_PTR_TO_JSON(Words, words_);
            };
            friend void from_json(const Darabonba::Json& j, Phrase& obj) { 
              DARABONBA_PTR_FROM_JSON(Begin, begin_);
              DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
              DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
              DARABONBA_PTR_FROM_JSON(EmotionFineGrainedValue, emotionFineGrainedValue_);
              DARABONBA_PTR_FROM_JSON(EmotionValue, emotionValue_);
              DARABONBA_PTR_FROM_JSON(End, end_);
              DARABONBA_PTR_FROM_JSON(HitStatus, hitStatus_);
              DARABONBA_PTR_FROM_JSON(HourMinSec, hourMinSec_);
              DARABONBA_PTR_FROM_JSON(Identity, identity_);
              DARABONBA_PTR_FROM_JSON(Pid, pid_);
              DARABONBA_PTR_FROM_JSON(RenterId, renterId_);
              DARABONBA_PTR_FROM_JSON(Role, role_);
              DARABONBA_PTR_FROM_JSON(Sid, sid_);
              DARABONBA_PTR_FROM_JSON(SilenceDuration, silenceDuration_);
              DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
              DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
              DARABONBA_PTR_FROM_JSON(Words, words_);
            };
            Phrase() = default ;
            Phrase(const Phrase &) = default ;
            Phrase(Phrase &&) = default ;
            Phrase(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Phrase() = default ;
            Phrase& operator=(const Phrase &) = default ;
            Phrase& operator=(Phrase &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->begin_ == nullptr
        && this->beginTime_ == nullptr && this->channelId_ == nullptr && this->emotionFineGrainedValue_ == nullptr && this->emotionValue_ == nullptr && this->end_ == nullptr
        && this->hitStatus_ == nullptr && this->hourMinSec_ == nullptr && this->identity_ == nullptr && this->pid_ == nullptr && this->renterId_ == nullptr
        && this->role_ == nullptr && this->sid_ == nullptr && this->silenceDuration_ == nullptr && this->speechRate_ == nullptr && this->uuid_ == nullptr
        && this->words_ == nullptr; };
            // begin Field Functions 
            bool hasBegin() const { return this->begin_ != nullptr;};
            void deleteBegin() { this->begin_ = nullptr;};
            inline int64_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0L) };
            inline Phrase& setBegin(int64_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


            // beginTime Field Functions 
            bool hasBeginTime() const { return this->beginTime_ != nullptr;};
            void deleteBeginTime() { this->beginTime_ = nullptr;};
            inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
            inline Phrase& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


            // channelId Field Functions 
            bool hasChannelId() const { return this->channelId_ != nullptr;};
            void deleteChannelId() { this->channelId_ = nullptr;};
            inline int32_t getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, 0) };
            inline Phrase& setChannelId(int32_t channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


            // emotionFineGrainedValue Field Functions 
            bool hasEmotionFineGrainedValue() const { return this->emotionFineGrainedValue_ != nullptr;};
            void deleteEmotionFineGrainedValue() { this->emotionFineGrainedValue_ = nullptr;};
            inline int32_t getEmotionFineGrainedValue() const { DARABONBA_PTR_GET_DEFAULT(emotionFineGrainedValue_, 0) };
            inline Phrase& setEmotionFineGrainedValue(int32_t emotionFineGrainedValue) { DARABONBA_PTR_SET_VALUE(emotionFineGrainedValue_, emotionFineGrainedValue) };


            // emotionValue Field Functions 
            bool hasEmotionValue() const { return this->emotionValue_ != nullptr;};
            void deleteEmotionValue() { this->emotionValue_ = nullptr;};
            inline int32_t getEmotionValue() const { DARABONBA_PTR_GET_DEFAULT(emotionValue_, 0) };
            inline Phrase& setEmotionValue(int32_t emotionValue) { DARABONBA_PTR_SET_VALUE(emotionValue_, emotionValue) };


            // end Field Functions 
            bool hasEnd() const { return this->end_ != nullptr;};
            void deleteEnd() { this->end_ = nullptr;};
            inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
            inline Phrase& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


            // hitStatus Field Functions 
            bool hasHitStatus() const { return this->hitStatus_ != nullptr;};
            void deleteHitStatus() { this->hitStatus_ = nullptr;};
            inline int32_t getHitStatus() const { DARABONBA_PTR_GET_DEFAULT(hitStatus_, 0) };
            inline Phrase& setHitStatus(int32_t hitStatus) { DARABONBA_PTR_SET_VALUE(hitStatus_, hitStatus) };


            // hourMinSec Field Functions 
            bool hasHourMinSec() const { return this->hourMinSec_ != nullptr;};
            void deleteHourMinSec() { this->hourMinSec_ = nullptr;};
            inline string getHourMinSec() const { DARABONBA_PTR_GET_DEFAULT(hourMinSec_, "") };
            inline Phrase& setHourMinSec(string hourMinSec) { DARABONBA_PTR_SET_VALUE(hourMinSec_, hourMinSec) };


            // identity Field Functions 
            bool hasIdentity() const { return this->identity_ != nullptr;};
            void deleteIdentity() { this->identity_ = nullptr;};
            inline string getIdentity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
            inline Phrase& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


            // pid Field Functions 
            bool hasPid() const { return this->pid_ != nullptr;};
            void deletePid() { this->pid_ = nullptr;};
            inline int32_t getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0) };
            inline Phrase& setPid(int32_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


            // renterId Field Functions 
            bool hasRenterId() const { return this->renterId_ != nullptr;};
            void deleteRenterId() { this->renterId_ = nullptr;};
            inline int64_t getRenterId() const { DARABONBA_PTR_GET_DEFAULT(renterId_, 0L) };
            inline Phrase& setRenterId(int64_t renterId) { DARABONBA_PTR_SET_VALUE(renterId_, renterId) };


            // role Field Functions 
            bool hasRole() const { return this->role_ != nullptr;};
            void deleteRole() { this->role_ = nullptr;};
            inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
            inline Phrase& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


            // sid Field Functions 
            bool hasSid() const { return this->sid_ != nullptr;};
            void deleteSid() { this->sid_ = nullptr;};
            inline int64_t getSid() const { DARABONBA_PTR_GET_DEFAULT(sid_, 0L) };
            inline Phrase& setSid(int64_t sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


            // silenceDuration Field Functions 
            bool hasSilenceDuration() const { return this->silenceDuration_ != nullptr;};
            void deleteSilenceDuration() { this->silenceDuration_ = nullptr;};
            inline int32_t getSilenceDuration() const { DARABONBA_PTR_GET_DEFAULT(silenceDuration_, 0) };
            inline Phrase& setSilenceDuration(int32_t silenceDuration) { DARABONBA_PTR_SET_VALUE(silenceDuration_, silenceDuration) };


            // speechRate Field Functions 
            bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
            void deleteSpeechRate() { this->speechRate_ = nullptr;};
            inline int32_t getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0) };
            inline Phrase& setSpeechRate(int32_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


            // uuid Field Functions 
            bool hasUuid() const { return this->uuid_ != nullptr;};
            void deleteUuid() { this->uuid_ = nullptr;};
            inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
            inline Phrase& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


            // words Field Functions 
            bool hasWords() const { return this->words_ != nullptr;};
            void deleteWords() { this->words_ = nullptr;};
            inline string getWords() const { DARABONBA_PTR_GET_DEFAULT(words_, "") };
            inline Phrase& setWords(string words) { DARABONBA_PTR_SET_VALUE(words_, words) };


          protected:
            shared_ptr<int64_t> begin_ {};
            shared_ptr<string> beginTime_ {};
            shared_ptr<int32_t> channelId_ {};
            shared_ptr<int32_t> emotionFineGrainedValue_ {};
            shared_ptr<int32_t> emotionValue_ {};
            shared_ptr<int64_t> end_ {};
            shared_ptr<int32_t> hitStatus_ {};
            shared_ptr<string> hourMinSec_ {};
            shared_ptr<string> identity_ {};
            shared_ptr<int32_t> pid_ {};
            shared_ptr<int64_t> renterId_ {};
            shared_ptr<string> role_ {};
            shared_ptr<int64_t> sid_ {};
            shared_ptr<int32_t> silenceDuration_ {};
            shared_ptr<int32_t> speechRate_ {};
            shared_ptr<string> uuid_ {};
            shared_ptr<string> words_ {};
          };

          class KeyWords : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const KeyWords& obj) { 
              DARABONBA_PTR_TO_JSON(Cid, cid_);
              DARABONBA_PTR_TO_JSON(CustomizeCode, customizeCode_);
              DARABONBA_PTR_TO_JSON(From, from_);
              DARABONBA_PTR_TO_JSON(Oid, oid_);
              DARABONBA_PTR_TO_JSON(OperatorKey, operatorKey_);
              DARABONBA_PTR_TO_JSON(Pid, pid_);
              DARABONBA_PTR_TO_JSON(SimilarPhrase, similarPhrase_);
              DARABONBA_PTR_TO_JSON(Tid, tid_);
              DARABONBA_PTR_TO_JSON(To, to_);
              DARABONBA_PTR_TO_JSON(Uuid, uuid_);
              DARABONBA_PTR_TO_JSON(Val, val_);
            };
            friend void from_json(const Darabonba::Json& j, KeyWords& obj) { 
              DARABONBA_PTR_FROM_JSON(Cid, cid_);
              DARABONBA_PTR_FROM_JSON(CustomizeCode, customizeCode_);
              DARABONBA_PTR_FROM_JSON(From, from_);
              DARABONBA_PTR_FROM_JSON(Oid, oid_);
              DARABONBA_PTR_FROM_JSON(OperatorKey, operatorKey_);
              DARABONBA_PTR_FROM_JSON(Pid, pid_);
              DARABONBA_PTR_FROM_JSON(SimilarPhrase, similarPhrase_);
              DARABONBA_PTR_FROM_JSON(Tid, tid_);
              DARABONBA_PTR_FROM_JSON(To, to_);
              DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
              DARABONBA_PTR_FROM_JSON(Val, val_);
            };
            KeyWords() = default ;
            KeyWords(const KeyWords &) = default ;
            KeyWords(KeyWords &&) = default ;
            KeyWords(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~KeyWords() = default ;
            KeyWords& operator=(const KeyWords &) = default ;
            KeyWords& operator=(KeyWords &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->cid_ == nullptr
        && this->customizeCode_ == nullptr && this->from_ == nullptr && this->oid_ == nullptr && this->operatorKey_ == nullptr && this->pid_ == nullptr
        && this->similarPhrase_ == nullptr && this->tid_ == nullptr && this->to_ == nullptr && this->uuid_ == nullptr && this->val_ == nullptr; };
            // cid Field Functions 
            bool hasCid() const { return this->cid_ != nullptr;};
            void deleteCid() { this->cid_ = nullptr;};
            inline string getCid() const { DARABONBA_PTR_GET_DEFAULT(cid_, "") };
            inline KeyWords& setCid(string cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


            // customizeCode Field Functions 
            bool hasCustomizeCode() const { return this->customizeCode_ != nullptr;};
            void deleteCustomizeCode() { this->customizeCode_ = nullptr;};
            inline string getCustomizeCode() const { DARABONBA_PTR_GET_DEFAULT(customizeCode_, "") };
            inline KeyWords& setCustomizeCode(string customizeCode) { DARABONBA_PTR_SET_VALUE(customizeCode_, customizeCode) };


            // from Field Functions 
            bool hasFrom() const { return this->from_ != nullptr;};
            void deleteFrom() { this->from_ = nullptr;};
            inline int32_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
            inline KeyWords& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


            // oid Field Functions 
            bool hasOid() const { return this->oid_ != nullptr;};
            void deleteOid() { this->oid_ = nullptr;};
            inline string getOid() const { DARABONBA_PTR_GET_DEFAULT(oid_, "") };
            inline KeyWords& setOid(string oid) { DARABONBA_PTR_SET_VALUE(oid_, oid) };


            // operatorKey Field Functions 
            bool hasOperatorKey() const { return this->operatorKey_ != nullptr;};
            void deleteOperatorKey() { this->operatorKey_ = nullptr;};
            inline string getOperatorKey() const { DARABONBA_PTR_GET_DEFAULT(operatorKey_, "") };
            inline KeyWords& setOperatorKey(string operatorKey) { DARABONBA_PTR_SET_VALUE(operatorKey_, operatorKey) };


            // pid Field Functions 
            bool hasPid() const { return this->pid_ != nullptr;};
            void deletePid() { this->pid_ = nullptr;};
            inline int32_t getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0) };
            inline KeyWords& setPid(int32_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


            // similarPhrase Field Functions 
            bool hasSimilarPhrase() const { return this->similarPhrase_ != nullptr;};
            void deleteSimilarPhrase() { this->similarPhrase_ = nullptr;};
            inline string getSimilarPhrase() const { DARABONBA_PTR_GET_DEFAULT(similarPhrase_, "") };
            inline KeyWords& setSimilarPhrase(string similarPhrase) { DARABONBA_PTR_SET_VALUE(similarPhrase_, similarPhrase) };


            // tid Field Functions 
            bool hasTid() const { return this->tid_ != nullptr;};
            void deleteTid() { this->tid_ = nullptr;};
            inline string getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, "") };
            inline KeyWords& setTid(string tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


            // to Field Functions 
            bool hasTo() const { return this->to_ != nullptr;};
            void deleteTo() { this->to_ = nullptr;};
            inline int32_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
            inline KeyWords& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


            // uuid Field Functions 
            bool hasUuid() const { return this->uuid_ != nullptr;};
            void deleteUuid() { this->uuid_ = nullptr;};
            inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
            inline KeyWords& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


            // val Field Functions 
            bool hasVal() const { return this->val_ != nullptr;};
            void deleteVal() { this->val_ = nullptr;};
            inline string getVal() const { DARABONBA_PTR_GET_DEFAULT(val_, "") };
            inline KeyWords& setVal(string val) { DARABONBA_PTR_SET_VALUE(val_, val) };


          protected:
            shared_ptr<string> cid_ {};
            shared_ptr<string> customizeCode_ {};
            shared_ptr<int32_t> from_ {};
            shared_ptr<string> oid_ {};
            shared_ptr<string> operatorKey_ {};
            shared_ptr<int32_t> pid_ {};
            shared_ptr<string> similarPhrase_ {};
            shared_ptr<string> tid_ {};
            shared_ptr<int32_t> to_ {};
            shared_ptr<string> uuid_ {};
            shared_ptr<string> val_ {};
          };

          virtual bool empty() const override { return this->cid_ == nullptr
        && this->keyWords_ == nullptr && this->phrase_ == nullptr; };
          // cid Field Functions 
          bool hasCid() const { return this->cid_ != nullptr;};
          void deleteCid() { this->cid_ = nullptr;};
          inline const vector<string> & getCid() const { DARABONBA_PTR_GET_CONST(cid_, vector<string>) };
          inline vector<string> getCid() { DARABONBA_PTR_GET(cid_, vector<string>) };
          inline ConditionHitInfoList& setCid(const vector<string> & cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };
          inline ConditionHitInfoList& setCid(vector<string> && cid) { DARABONBA_PTR_SET_RVALUE(cid_, cid) };


          // keyWords Field Functions 
          bool hasKeyWords() const { return this->keyWords_ != nullptr;};
          void deleteKeyWords() { this->keyWords_ = nullptr;};
          inline const vector<ConditionHitInfoList::KeyWords> & getKeyWords() const { DARABONBA_PTR_GET_CONST(keyWords_, vector<ConditionHitInfoList::KeyWords>) };
          inline vector<ConditionHitInfoList::KeyWords> getKeyWords() { DARABONBA_PTR_GET(keyWords_, vector<ConditionHitInfoList::KeyWords>) };
          inline ConditionHitInfoList& setKeyWords(const vector<ConditionHitInfoList::KeyWords> & keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };
          inline ConditionHitInfoList& setKeyWords(vector<ConditionHitInfoList::KeyWords> && keyWords) { DARABONBA_PTR_SET_RVALUE(keyWords_, keyWords) };


          // phrase Field Functions 
          bool hasPhrase() const { return this->phrase_ != nullptr;};
          void deletePhrase() { this->phrase_ = nullptr;};
          inline const ConditionHitInfoList::Phrase & getPhrase() const { DARABONBA_PTR_GET_CONST(phrase_, ConditionHitInfoList::Phrase) };
          inline ConditionHitInfoList::Phrase getPhrase() { DARABONBA_PTR_GET(phrase_, ConditionHitInfoList::Phrase) };
          inline ConditionHitInfoList& setPhrase(const ConditionHitInfoList::Phrase & phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };
          inline ConditionHitInfoList& setPhrase(ConditionHitInfoList::Phrase && phrase) { DARABONBA_PTR_SET_RVALUE(phrase_, phrase) };


        protected:
          shared_ptr<vector<string>> cid_ {};
          shared_ptr<vector<ConditionHitInfoList::KeyWords>> keyWords_ {};
          shared_ptr<ConditionHitInfoList::Phrase> phrase_ {};
        };

        class BranchInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BranchInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(CheckType, checkType_);
            DARABONBA_PTR_TO_JSON(Index, index_);
            DARABONBA_PTR_TO_JSON(Lambda, lambda_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(NextNodeId, nextNodeId_);
            DARABONBA_PTR_TO_JSON(Situation, situation_);
            DARABONBA_PTR_TO_JSON(Triggers, triggers_);
          };
          friend void from_json(const Darabonba::Json& j, BranchInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
            DARABONBA_PTR_FROM_JSON(Index, index_);
            DARABONBA_PTR_FROM_JSON(Lambda, lambda_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(NextNodeId, nextNodeId_);
            DARABONBA_PTR_FROM_JSON(Situation, situation_);
            DARABONBA_PTR_FROM_JSON(Triggers, triggers_);
          };
          BranchInfoList() = default ;
          BranchInfoList(const BranchInfoList &) = default ;
          BranchInfoList(BranchInfoList &&) = default ;
          BranchInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BranchInfoList() = default ;
          BranchInfoList& operator=(const BranchInfoList &) = default ;
          BranchInfoList& operator=(BranchInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->checkType_ == nullptr
        && this->index_ == nullptr && this->lambda_ == nullptr && this->name_ == nullptr && this->nextNodeId_ == nullptr && this->situation_ == nullptr
        && this->triggers_ == nullptr; };
          // checkType Field Functions 
          bool hasCheckType() const { return this->checkType_ != nullptr;};
          void deleteCheckType() { this->checkType_ = nullptr;};
          inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
          inline BranchInfoList& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


          // index Field Functions 
          bool hasIndex() const { return this->index_ != nullptr;};
          void deleteIndex() { this->index_ = nullptr;};
          inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
          inline BranchInfoList& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


          // lambda Field Functions 
          bool hasLambda() const { return this->lambda_ != nullptr;};
          void deleteLambda() { this->lambda_ = nullptr;};
          inline string getLambda() const { DARABONBA_PTR_GET_DEFAULT(lambda_, "") };
          inline BranchInfoList& setLambda(string lambda) { DARABONBA_PTR_SET_VALUE(lambda_, lambda) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline BranchInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // nextNodeId Field Functions 
          bool hasNextNodeId() const { return this->nextNodeId_ != nullptr;};
          void deleteNextNodeId() { this->nextNodeId_ = nullptr;};
          inline int64_t getNextNodeId() const { DARABONBA_PTR_GET_DEFAULT(nextNodeId_, 0L) };
          inline BranchInfoList& setNextNodeId(int64_t nextNodeId) { DARABONBA_PTR_SET_VALUE(nextNodeId_, nextNodeId) };


          // situation Field Functions 
          bool hasSituation() const { return this->situation_ != nullptr;};
          void deleteSituation() { this->situation_ = nullptr;};
          inline const NextNodeSituations & getSituation() const { DARABONBA_PTR_GET_CONST(situation_, NextNodeSituations) };
          inline NextNodeSituations getSituation() { DARABONBA_PTR_GET(situation_, NextNodeSituations) };
          inline BranchInfoList& setSituation(const NextNodeSituations & situation) { DARABONBA_PTR_SET_VALUE(situation_, situation) };
          inline BranchInfoList& setSituation(NextNodeSituations && situation) { DARABONBA_PTR_SET_RVALUE(situation_, situation) };


          // triggers Field Functions 
          bool hasTriggers() const { return this->triggers_ != nullptr;};
          void deleteTriggers() { this->triggers_ = nullptr;};
          inline const vector<string> & getTriggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<string>) };
          inline vector<string> getTriggers() { DARABONBA_PTR_GET(triggers_, vector<string>) };
          inline BranchInfoList& setTriggers(const vector<string> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
          inline BranchInfoList& setTriggers(vector<string> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


        protected:
          shared_ptr<int32_t> checkType_ {};
          shared_ptr<int32_t> index_ {};
          shared_ptr<string> lambda_ {};
          shared_ptr<string> name_ {};
          shared_ptr<int64_t> nextNodeId_ {};
          shared_ptr<NextNodeSituations> situation_ {};
          shared_ptr<vector<string>> triggers_ {};
        };

        virtual bool empty() const override { return this->branchHitId_ == nullptr
        && this->branchInfoList_ == nullptr && this->conditionHitInfoList_ == nullptr && this->conditionInfoList_ == nullptr && this->judgeNodeName_ == nullptr && this->lambda_ == nullptr
        && this->matched_ == nullptr && this->nodeType_ == nullptr && this->rid_ == nullptr && this->ruleName_ == nullptr && this->ruleScoreType_ == nullptr
        && this->scoreNumType_ == nullptr && this->taskFlowId_ == nullptr; };
        // branchHitId Field Functions 
        bool hasBranchHitId() const { return this->branchHitId_ != nullptr;};
        void deleteBranchHitId() { this->branchHitId_ = nullptr;};
        inline int64_t getBranchHitId() const { DARABONBA_PTR_GET_DEFAULT(branchHitId_, 0L) };
        inline HitRuleReviewInfoList& setBranchHitId(int64_t branchHitId) { DARABONBA_PTR_SET_VALUE(branchHitId_, branchHitId) };


        // branchInfoList Field Functions 
        bool hasBranchInfoList() const { return this->branchInfoList_ != nullptr;};
        void deleteBranchInfoList() { this->branchInfoList_ = nullptr;};
        inline const vector<HitRuleReviewInfoList::BranchInfoList> & getBranchInfoList() const { DARABONBA_PTR_GET_CONST(branchInfoList_, vector<HitRuleReviewInfoList::BranchInfoList>) };
        inline vector<HitRuleReviewInfoList::BranchInfoList> getBranchInfoList() { DARABONBA_PTR_GET(branchInfoList_, vector<HitRuleReviewInfoList::BranchInfoList>) };
        inline HitRuleReviewInfoList& setBranchInfoList(const vector<HitRuleReviewInfoList::BranchInfoList> & branchInfoList) { DARABONBA_PTR_SET_VALUE(branchInfoList_, branchInfoList) };
        inline HitRuleReviewInfoList& setBranchInfoList(vector<HitRuleReviewInfoList::BranchInfoList> && branchInfoList) { DARABONBA_PTR_SET_RVALUE(branchInfoList_, branchInfoList) };


        // conditionHitInfoList Field Functions 
        bool hasConditionHitInfoList() const { return this->conditionHitInfoList_ != nullptr;};
        void deleteConditionHitInfoList() { this->conditionHitInfoList_ = nullptr;};
        inline const vector<HitRuleReviewInfoList::ConditionHitInfoList> & getConditionHitInfoList() const { DARABONBA_PTR_GET_CONST(conditionHitInfoList_, vector<HitRuleReviewInfoList::ConditionHitInfoList>) };
        inline vector<HitRuleReviewInfoList::ConditionHitInfoList> getConditionHitInfoList() { DARABONBA_PTR_GET(conditionHitInfoList_, vector<HitRuleReviewInfoList::ConditionHitInfoList>) };
        inline HitRuleReviewInfoList& setConditionHitInfoList(const vector<HitRuleReviewInfoList::ConditionHitInfoList> & conditionHitInfoList) { DARABONBA_PTR_SET_VALUE(conditionHitInfoList_, conditionHitInfoList) };
        inline HitRuleReviewInfoList& setConditionHitInfoList(vector<HitRuleReviewInfoList::ConditionHitInfoList> && conditionHitInfoList) { DARABONBA_PTR_SET_RVALUE(conditionHitInfoList_, conditionHitInfoList) };


        // conditionInfoList Field Functions 
        bool hasConditionInfoList() const { return this->conditionInfoList_ != nullptr;};
        void deleteConditionInfoList() { this->conditionInfoList_ = nullptr;};
        inline const vector<ConditionBasicInfo> & getConditionInfoList() const { DARABONBA_PTR_GET_CONST(conditionInfoList_, vector<ConditionBasicInfo>) };
        inline vector<ConditionBasicInfo> getConditionInfoList() { DARABONBA_PTR_GET(conditionInfoList_, vector<ConditionBasicInfo>) };
        inline HitRuleReviewInfoList& setConditionInfoList(const vector<ConditionBasicInfo> & conditionInfoList) { DARABONBA_PTR_SET_VALUE(conditionInfoList_, conditionInfoList) };
        inline HitRuleReviewInfoList& setConditionInfoList(vector<ConditionBasicInfo> && conditionInfoList) { DARABONBA_PTR_SET_RVALUE(conditionInfoList_, conditionInfoList) };


        // judgeNodeName Field Functions 
        bool hasJudgeNodeName() const { return this->judgeNodeName_ != nullptr;};
        void deleteJudgeNodeName() { this->judgeNodeName_ = nullptr;};
        inline string getJudgeNodeName() const { DARABONBA_PTR_GET_DEFAULT(judgeNodeName_, "") };
        inline HitRuleReviewInfoList& setJudgeNodeName(string judgeNodeName) { DARABONBA_PTR_SET_VALUE(judgeNodeName_, judgeNodeName) };


        // lambda Field Functions 
        bool hasLambda() const { return this->lambda_ != nullptr;};
        void deleteLambda() { this->lambda_ = nullptr;};
        inline string getLambda() const { DARABONBA_PTR_GET_DEFAULT(lambda_, "") };
        inline HitRuleReviewInfoList& setLambda(string lambda) { DARABONBA_PTR_SET_VALUE(lambda_, lambda) };


        // matched Field Functions 
        bool hasMatched() const { return this->matched_ != nullptr;};
        void deleteMatched() { this->matched_ = nullptr;};
        inline bool getMatched() const { DARABONBA_PTR_GET_DEFAULT(matched_, false) };
        inline HitRuleReviewInfoList& setMatched(bool matched) { DARABONBA_PTR_SET_VALUE(matched_, matched) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline HitRuleReviewInfoList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // rid Field Functions 
        bool hasRid() const { return this->rid_ != nullptr;};
        void deleteRid() { this->rid_ = nullptr;};
        inline int64_t getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
        inline HitRuleReviewInfoList& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline HitRuleReviewInfoList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // ruleScoreType Field Functions 
        bool hasRuleScoreType() const { return this->ruleScoreType_ != nullptr;};
        void deleteRuleScoreType() { this->ruleScoreType_ = nullptr;};
        inline int32_t getRuleScoreType() const { DARABONBA_PTR_GET_DEFAULT(ruleScoreType_, 0) };
        inline HitRuleReviewInfoList& setRuleScoreType(int32_t ruleScoreType) { DARABONBA_PTR_SET_VALUE(ruleScoreType_, ruleScoreType) };


        // scoreNumType Field Functions 
        bool hasScoreNumType() const { return this->scoreNumType_ != nullptr;};
        void deleteScoreNumType() { this->scoreNumType_ = nullptr;};
        inline int32_t getScoreNumType() const { DARABONBA_PTR_GET_DEFAULT(scoreNumType_, 0) };
        inline HitRuleReviewInfoList& setScoreNumType(int32_t scoreNumType) { DARABONBA_PTR_SET_VALUE(scoreNumType_, scoreNumType) };


        // taskFlowId Field Functions 
        bool hasTaskFlowId() const { return this->taskFlowId_ != nullptr;};
        void deleteTaskFlowId() { this->taskFlowId_ = nullptr;};
        inline int64_t getTaskFlowId() const { DARABONBA_PTR_GET_DEFAULT(taskFlowId_, 0L) };
        inline HitRuleReviewInfoList& setTaskFlowId(int64_t taskFlowId) { DARABONBA_PTR_SET_VALUE(taskFlowId_, taskFlowId) };


      protected:
        shared_ptr<int64_t> branchHitId_ {};
        shared_ptr<vector<HitRuleReviewInfoList::BranchInfoList>> branchInfoList_ {};
        shared_ptr<vector<HitRuleReviewInfoList::ConditionHitInfoList>> conditionHitInfoList_ {};
        shared_ptr<vector<ConditionBasicInfo>> conditionInfoList_ {};
        shared_ptr<string> judgeNodeName_ {};
        shared_ptr<string> lambda_ {};
        shared_ptr<bool> matched_ {};
        shared_ptr<string> nodeType_ {};
        shared_ptr<int64_t> rid_ {};
        shared_ptr<string> ruleName_ {};
        shared_ptr<int32_t> ruleScoreType_ {};
        shared_ptr<int32_t> scoreNumType_ {};
        shared_ptr<int64_t> taskFlowId_ {};
      };

      virtual bool empty() const override { return this->hitRuleReviewInfoList_ == nullptr
        && this->hitTaskFlowList_ == nullptr && this->unhitRuleReviewInfoList_ == nullptr; };
      // hitRuleReviewInfoList Field Functions 
      bool hasHitRuleReviewInfoList() const { return this->hitRuleReviewInfoList_ != nullptr;};
      void deleteHitRuleReviewInfoList() { this->hitRuleReviewInfoList_ = nullptr;};
      inline const vector<Data::HitRuleReviewInfoList> & getHitRuleReviewInfoList() const { DARABONBA_PTR_GET_CONST(hitRuleReviewInfoList_, vector<Data::HitRuleReviewInfoList>) };
      inline vector<Data::HitRuleReviewInfoList> getHitRuleReviewInfoList() { DARABONBA_PTR_GET(hitRuleReviewInfoList_, vector<Data::HitRuleReviewInfoList>) };
      inline Data& setHitRuleReviewInfoList(const vector<Data::HitRuleReviewInfoList> & hitRuleReviewInfoList) { DARABONBA_PTR_SET_VALUE(hitRuleReviewInfoList_, hitRuleReviewInfoList) };
      inline Data& setHitRuleReviewInfoList(vector<Data::HitRuleReviewInfoList> && hitRuleReviewInfoList) { DARABONBA_PTR_SET_RVALUE(hitRuleReviewInfoList_, hitRuleReviewInfoList) };


      // hitTaskFlowList Field Functions 
      bool hasHitTaskFlowList() const { return this->hitTaskFlowList_ != nullptr;};
      void deleteHitTaskFlowList() { this->hitTaskFlowList_ = nullptr;};
      inline const vector<Data::HitTaskFlowList> & getHitTaskFlowList() const { DARABONBA_PTR_GET_CONST(hitTaskFlowList_, vector<Data::HitTaskFlowList>) };
      inline vector<Data::HitTaskFlowList> getHitTaskFlowList() { DARABONBA_PTR_GET(hitTaskFlowList_, vector<Data::HitTaskFlowList>) };
      inline Data& setHitTaskFlowList(const vector<Data::HitTaskFlowList> & hitTaskFlowList) { DARABONBA_PTR_SET_VALUE(hitTaskFlowList_, hitTaskFlowList) };
      inline Data& setHitTaskFlowList(vector<Data::HitTaskFlowList> && hitTaskFlowList) { DARABONBA_PTR_SET_RVALUE(hitTaskFlowList_, hitTaskFlowList) };


      // unhitRuleReviewInfoList Field Functions 
      bool hasUnhitRuleReviewInfoList() const { return this->unhitRuleReviewInfoList_ != nullptr;};
      void deleteUnhitRuleReviewInfoList() { this->unhitRuleReviewInfoList_ = nullptr;};
      inline const vector<Data::UnhitRuleReviewInfoList> & getUnhitRuleReviewInfoList() const { DARABONBA_PTR_GET_CONST(unhitRuleReviewInfoList_, vector<Data::UnhitRuleReviewInfoList>) };
      inline vector<Data::UnhitRuleReviewInfoList> getUnhitRuleReviewInfoList() { DARABONBA_PTR_GET(unhitRuleReviewInfoList_, vector<Data::UnhitRuleReviewInfoList>) };
      inline Data& setUnhitRuleReviewInfoList(const vector<Data::UnhitRuleReviewInfoList> & unhitRuleReviewInfoList) { DARABONBA_PTR_SET_VALUE(unhitRuleReviewInfoList_, unhitRuleReviewInfoList) };
      inline Data& setUnhitRuleReviewInfoList(vector<Data::UnhitRuleReviewInfoList> && unhitRuleReviewInfoList) { DARABONBA_PTR_SET_RVALUE(unhitRuleReviewInfoList_, unhitRuleReviewInfoList) };


    protected:
      shared_ptr<vector<Data::HitRuleReviewInfoList>> hitRuleReviewInfoList_ {};
      shared_ptr<vector<Data::HitTaskFlowList>> hitTaskFlowList_ {};
      shared_ptr<vector<Data::UnhitRuleReviewInfoList>> unhitRuleReviewInfoList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TestRuleV4ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TestRuleV4ResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TestRuleV4ResponseBody::Data) };
    inline TestRuleV4ResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TestRuleV4ResponseBody::Data) };
    inline TestRuleV4ResponseBody& setData(const TestRuleV4ResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TestRuleV4ResponseBody& setData(TestRuleV4ResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline TestRuleV4ResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TestRuleV4ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TestRuleV4ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TestRuleV4ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<TestRuleV4ResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
