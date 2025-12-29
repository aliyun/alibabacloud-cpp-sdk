// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTINTERVENERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTINTERVENERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class InsertInterveneRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertInterveneRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InterveneRuleConfig, interveneRuleConfig_);
    };
    friend void from_json(const Darabonba::Json& j, InsertInterveneRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InterveneRuleConfig, interveneRuleConfig_);
    };
    InsertInterveneRuleRequest() = default ;
    InsertInterveneRuleRequest(const InsertInterveneRuleRequest &) = default ;
    InsertInterveneRuleRequest(InsertInterveneRuleRequest &&) = default ;
    InsertInterveneRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertInterveneRuleRequest() = default ;
    InsertInterveneRuleRequest& operator=(const InsertInterveneRuleRequest &) = default ;
    InsertInterveneRuleRequest& operator=(InsertInterveneRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InterveneRuleConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InterveneRuleConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AnswerConfig, answerConfig_);
        DARABONBA_PTR_TO_JSON(EffectConfig, effectConfig_);
        DARABONBA_PTR_TO_JSON(InterveneConfigList, interveneConfigList_);
        DARABONBA_PTR_TO_JSON(InterveneType, interveneType_);
        DARABONBA_PTR_TO_JSON(NamespaceList, namespaceList_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      };
      friend void from_json(const Darabonba::Json& j, InterveneRuleConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AnswerConfig, answerConfig_);
        DARABONBA_PTR_FROM_JSON(EffectConfig, effectConfig_);
        DARABONBA_PTR_FROM_JSON(InterveneConfigList, interveneConfigList_);
        DARABONBA_PTR_FROM_JSON(InterveneType, interveneType_);
        DARABONBA_PTR_FROM_JSON(NamespaceList, namespaceList_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      };
      InterveneRuleConfig() = default ;
      InterveneRuleConfig(const InterveneRuleConfig &) = default ;
      InterveneRuleConfig(InterveneRuleConfig &&) = default ;
      InterveneRuleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InterveneRuleConfig() = default ;
      InterveneRuleConfig& operator=(const InterveneRuleConfig &) = default ;
      InterveneRuleConfig& operator=(InterveneRuleConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InterveneConfigList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InterveneConfigList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(OperationType, operationType_);
          DARABONBA_PTR_TO_JSON(Query, query_);
        };
        friend void from_json(const Darabonba::Json& j, InterveneConfigList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
          DARABONBA_PTR_FROM_JSON(Query, query_);
        };
        InterveneConfigList() = default ;
        InterveneConfigList(const InterveneConfigList &) = default ;
        InterveneConfigList(InterveneConfigList &&) = default ;
        InterveneConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InterveneConfigList() = default ;
        InterveneConfigList& operator=(const InterveneConfigList &) = default ;
        InterveneConfigList& operator=(InterveneConfigList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->operationType_ == nullptr && this->query_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline InterveneConfigList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // operationType Field Functions 
        bool hasOperationType() const { return this->operationType_ != nullptr;};
        void deleteOperationType() { this->operationType_ = nullptr;};
        inline int32_t getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, 0) };
        inline InterveneConfigList& setOperationType(int32_t operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


        // query Field Functions 
        bool hasQuery() const { return this->query_ != nullptr;};
        void deleteQuery() { this->query_ = nullptr;};
        inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
        inline InterveneConfigList& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


      protected:
        // id
        shared_ptr<string> id_ {};
        shared_ptr<int32_t> operationType_ {};
        shared_ptr<string> query_ {};
      };

      class EffectConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EffectConfig& obj) { 
          DARABONBA_PTR_TO_JSON(EffectType, effectType_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, EffectConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(EffectType, effectType_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        EffectConfig() = default ;
        EffectConfig(const EffectConfig &) = default ;
        EffectConfig(EffectConfig &&) = default ;
        EffectConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EffectConfig() = default ;
        EffectConfig& operator=(const EffectConfig &) = default ;
        EffectConfig& operator=(EffectConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->effectType_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
        // effectType Field Functions 
        bool hasEffectType() const { return this->effectType_ != nullptr;};
        void deleteEffectType() { this->effectType_ = nullptr;};
        inline int32_t getEffectType() const { DARABONBA_PTR_GET_DEFAULT(effectType_, 0) };
        inline EffectConfig& setEffectType(int32_t effectType) { DARABONBA_PTR_SET_VALUE(effectType_, effectType) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline EffectConfig& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline EffectConfig& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<int32_t> effectType_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> startTime_ {};
      };

      class AnswerConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AnswerConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AnswerType, answerType_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        };
        friend void from_json(const Darabonba::Json& j, AnswerConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AnswerType, answerType_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        };
        AnswerConfig() = default ;
        AnswerConfig(const AnswerConfig &) = default ;
        AnswerConfig(AnswerConfig &&) = default ;
        AnswerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AnswerConfig() = default ;
        AnswerConfig& operator=(const AnswerConfig &) = default ;
        AnswerConfig& operator=(AnswerConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->answerType_ == nullptr
        && this->message_ == nullptr && this->namespace_ == nullptr; };
        // answerType Field Functions 
        bool hasAnswerType() const { return this->answerType_ != nullptr;};
        void deleteAnswerType() { this->answerType_ = nullptr;};
        inline int32_t getAnswerType() const { DARABONBA_PTR_GET_DEFAULT(answerType_, 0) };
        inline AnswerConfig& setAnswerType(int32_t answerType) { DARABONBA_PTR_SET_VALUE(answerType_, answerType) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline AnswerConfig& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline AnswerConfig& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      protected:
        shared_ptr<int32_t> answerType_ {};
        shared_ptr<string> message_ {};
        shared_ptr<string> namespace_ {};
      };

      virtual bool empty() const override { return this->answerConfig_ == nullptr
        && this->effectConfig_ == nullptr && this->interveneConfigList_ == nullptr && this->interveneType_ == nullptr && this->namespaceList_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr; };
      // answerConfig Field Functions 
      bool hasAnswerConfig() const { return this->answerConfig_ != nullptr;};
      void deleteAnswerConfig() { this->answerConfig_ = nullptr;};
      inline const vector<InterveneRuleConfig::AnswerConfig> & getAnswerConfig() const { DARABONBA_PTR_GET_CONST(answerConfig_, vector<InterveneRuleConfig::AnswerConfig>) };
      inline vector<InterveneRuleConfig::AnswerConfig> getAnswerConfig() { DARABONBA_PTR_GET(answerConfig_, vector<InterveneRuleConfig::AnswerConfig>) };
      inline InterveneRuleConfig& setAnswerConfig(const vector<InterveneRuleConfig::AnswerConfig> & answerConfig) { DARABONBA_PTR_SET_VALUE(answerConfig_, answerConfig) };
      inline InterveneRuleConfig& setAnswerConfig(vector<InterveneRuleConfig::AnswerConfig> && answerConfig) { DARABONBA_PTR_SET_RVALUE(answerConfig_, answerConfig) };


      // effectConfig Field Functions 
      bool hasEffectConfig() const { return this->effectConfig_ != nullptr;};
      void deleteEffectConfig() { this->effectConfig_ = nullptr;};
      inline const InterveneRuleConfig::EffectConfig & getEffectConfig() const { DARABONBA_PTR_GET_CONST(effectConfig_, InterveneRuleConfig::EffectConfig) };
      inline InterveneRuleConfig::EffectConfig getEffectConfig() { DARABONBA_PTR_GET(effectConfig_, InterveneRuleConfig::EffectConfig) };
      inline InterveneRuleConfig& setEffectConfig(const InterveneRuleConfig::EffectConfig & effectConfig) { DARABONBA_PTR_SET_VALUE(effectConfig_, effectConfig) };
      inline InterveneRuleConfig& setEffectConfig(InterveneRuleConfig::EffectConfig && effectConfig) { DARABONBA_PTR_SET_RVALUE(effectConfig_, effectConfig) };


      // interveneConfigList Field Functions 
      bool hasInterveneConfigList() const { return this->interveneConfigList_ != nullptr;};
      void deleteInterveneConfigList() { this->interveneConfigList_ = nullptr;};
      inline const vector<InterveneRuleConfig::InterveneConfigList> & getInterveneConfigList() const { DARABONBA_PTR_GET_CONST(interveneConfigList_, vector<InterveneRuleConfig::InterveneConfigList>) };
      inline vector<InterveneRuleConfig::InterveneConfigList> getInterveneConfigList() { DARABONBA_PTR_GET(interveneConfigList_, vector<InterveneRuleConfig::InterveneConfigList>) };
      inline InterveneRuleConfig& setInterveneConfigList(const vector<InterveneRuleConfig::InterveneConfigList> & interveneConfigList) { DARABONBA_PTR_SET_VALUE(interveneConfigList_, interveneConfigList) };
      inline InterveneRuleConfig& setInterveneConfigList(vector<InterveneRuleConfig::InterveneConfigList> && interveneConfigList) { DARABONBA_PTR_SET_RVALUE(interveneConfigList_, interveneConfigList) };


      // interveneType Field Functions 
      bool hasInterveneType() const { return this->interveneType_ != nullptr;};
      void deleteInterveneType() { this->interveneType_ = nullptr;};
      inline int32_t getInterveneType() const { DARABONBA_PTR_GET_DEFAULT(interveneType_, 0) };
      inline InterveneRuleConfig& setInterveneType(int32_t interveneType) { DARABONBA_PTR_SET_VALUE(interveneType_, interveneType) };


      // namespaceList Field Functions 
      bool hasNamespaceList() const { return this->namespaceList_ != nullptr;};
      void deleteNamespaceList() { this->namespaceList_ = nullptr;};
      inline const vector<string> & getNamespaceList() const { DARABONBA_PTR_GET_CONST(namespaceList_, vector<string>) };
      inline vector<string> getNamespaceList() { DARABONBA_PTR_GET(namespaceList_, vector<string>) };
      inline InterveneRuleConfig& setNamespaceList(const vector<string> & namespaceList) { DARABONBA_PTR_SET_VALUE(namespaceList_, namespaceList) };
      inline InterveneRuleConfig& setNamespaceList(vector<string> && namespaceList) { DARABONBA_PTR_SET_RVALUE(namespaceList_, namespaceList) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline InterveneRuleConfig& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline InterveneRuleConfig& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    protected:
      shared_ptr<vector<InterveneRuleConfig::AnswerConfig>> answerConfig_ {};
      shared_ptr<InterveneRuleConfig::EffectConfig> effectConfig_ {};
      shared_ptr<vector<InterveneRuleConfig::InterveneConfigList>> interveneConfigList_ {};
      shared_ptr<int32_t> interveneType_ {};
      shared_ptr<vector<string>> namespaceList_ {};
      shared_ptr<int64_t> ruleId_ {};
      shared_ptr<string> ruleName_ {};
    };

    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->interveneRuleConfig_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline InsertInterveneRuleRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // interveneRuleConfig Field Functions 
    bool hasInterveneRuleConfig() const { return this->interveneRuleConfig_ != nullptr;};
    void deleteInterveneRuleConfig() { this->interveneRuleConfig_ = nullptr;};
    inline const InsertInterveneRuleRequest::InterveneRuleConfig & getInterveneRuleConfig() const { DARABONBA_PTR_GET_CONST(interveneRuleConfig_, InsertInterveneRuleRequest::InterveneRuleConfig) };
    inline InsertInterveneRuleRequest::InterveneRuleConfig getInterveneRuleConfig() { DARABONBA_PTR_GET(interveneRuleConfig_, InsertInterveneRuleRequest::InterveneRuleConfig) };
    inline InsertInterveneRuleRequest& setInterveneRuleConfig(const InsertInterveneRuleRequest::InterveneRuleConfig & interveneRuleConfig) { DARABONBA_PTR_SET_VALUE(interveneRuleConfig_, interveneRuleConfig) };
    inline InsertInterveneRuleRequest& setInterveneRuleConfig(InsertInterveneRuleRequest::InterveneRuleConfig && interveneRuleConfig) { DARABONBA_PTR_SET_RVALUE(interveneRuleConfig_, interveneRuleConfig) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    shared_ptr<InsertInterveneRuleRequest::InterveneRuleConfig> interveneRuleConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
