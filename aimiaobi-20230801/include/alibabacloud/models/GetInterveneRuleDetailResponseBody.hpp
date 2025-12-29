// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERVENERULEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINTERVENERULEDETAILRESPONSEBODY_HPP_
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
  class GetInterveneRuleDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterveneRuleDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterveneRuleDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetInterveneRuleDetailResponseBody() = default ;
    GetInterveneRuleDetailResponseBody(const GetInterveneRuleDetailResponseBody &) = default ;
    GetInterveneRuleDetailResponseBody(GetInterveneRuleDetailResponseBody &&) = default ;
    GetInterveneRuleDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterveneRuleDetailResponseBody() = default ;
    GetInterveneRuleDetailResponseBody& operator=(const GetInterveneRuleDetailResponseBody &) = default ;
    GetInterveneRuleDetailResponseBody& operator=(GetInterveneRuleDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(InterveneRuleDetail, interveneRuleDetail_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(InterveneRuleDetail, interveneRuleDetail_);
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
      class InterveneRuleDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InterveneRuleDetail& obj) { 
          DARABONBA_PTR_TO_JSON(AnswerConfig, answerConfig_);
          DARABONBA_PTR_TO_JSON(EffectConfig, effectConfig_);
          DARABONBA_PTR_TO_JSON(InterveneType, interveneType_);
          DARABONBA_PTR_TO_JSON(NamespaceList, namespaceList_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        };
        friend void from_json(const Darabonba::Json& j, InterveneRuleDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(AnswerConfig, answerConfig_);
          DARABONBA_PTR_FROM_JSON(EffectConfig, effectConfig_);
          DARABONBA_PTR_FROM_JSON(InterveneType, interveneType_);
          DARABONBA_PTR_FROM_JSON(NamespaceList, namespaceList_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        };
        InterveneRuleDetail() = default ;
        InterveneRuleDetail(const InterveneRuleDetail &) = default ;
        InterveneRuleDetail(InterveneRuleDetail &&) = default ;
        InterveneRuleDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InterveneRuleDetail() = default ;
        InterveneRuleDetail& operator=(const InterveneRuleDetail &) = default ;
        InterveneRuleDetail& operator=(InterveneRuleDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        && this->effectConfig_ == nullptr && this->interveneType_ == nullptr && this->namespaceList_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr; };
        // answerConfig Field Functions 
        bool hasAnswerConfig() const { return this->answerConfig_ != nullptr;};
        void deleteAnswerConfig() { this->answerConfig_ = nullptr;};
        inline const vector<InterveneRuleDetail::AnswerConfig> & getAnswerConfig() const { DARABONBA_PTR_GET_CONST(answerConfig_, vector<InterveneRuleDetail::AnswerConfig>) };
        inline vector<InterveneRuleDetail::AnswerConfig> getAnswerConfig() { DARABONBA_PTR_GET(answerConfig_, vector<InterveneRuleDetail::AnswerConfig>) };
        inline InterveneRuleDetail& setAnswerConfig(const vector<InterveneRuleDetail::AnswerConfig> & answerConfig) { DARABONBA_PTR_SET_VALUE(answerConfig_, answerConfig) };
        inline InterveneRuleDetail& setAnswerConfig(vector<InterveneRuleDetail::AnswerConfig> && answerConfig) { DARABONBA_PTR_SET_RVALUE(answerConfig_, answerConfig) };


        // effectConfig Field Functions 
        bool hasEffectConfig() const { return this->effectConfig_ != nullptr;};
        void deleteEffectConfig() { this->effectConfig_ = nullptr;};
        inline const InterveneRuleDetail::EffectConfig & getEffectConfig() const { DARABONBA_PTR_GET_CONST(effectConfig_, InterveneRuleDetail::EffectConfig) };
        inline InterveneRuleDetail::EffectConfig getEffectConfig() { DARABONBA_PTR_GET(effectConfig_, InterveneRuleDetail::EffectConfig) };
        inline InterveneRuleDetail& setEffectConfig(const InterveneRuleDetail::EffectConfig & effectConfig) { DARABONBA_PTR_SET_VALUE(effectConfig_, effectConfig) };
        inline InterveneRuleDetail& setEffectConfig(InterveneRuleDetail::EffectConfig && effectConfig) { DARABONBA_PTR_SET_RVALUE(effectConfig_, effectConfig) };


        // interveneType Field Functions 
        bool hasInterveneType() const { return this->interveneType_ != nullptr;};
        void deleteInterveneType() { this->interveneType_ = nullptr;};
        inline int32_t getInterveneType() const { DARABONBA_PTR_GET_DEFAULT(interveneType_, 0) };
        inline InterveneRuleDetail& setInterveneType(int32_t interveneType) { DARABONBA_PTR_SET_VALUE(interveneType_, interveneType) };


        // namespaceList Field Functions 
        bool hasNamespaceList() const { return this->namespaceList_ != nullptr;};
        void deleteNamespaceList() { this->namespaceList_ = nullptr;};
        inline const vector<string> & getNamespaceList() const { DARABONBA_PTR_GET_CONST(namespaceList_, vector<string>) };
        inline vector<string> getNamespaceList() { DARABONBA_PTR_GET(namespaceList_, vector<string>) };
        inline InterveneRuleDetail& setNamespaceList(const vector<string> & namespaceList) { DARABONBA_PTR_SET_VALUE(namespaceList_, namespaceList) };
        inline InterveneRuleDetail& setNamespaceList(vector<string> && namespaceList) { DARABONBA_PTR_SET_RVALUE(namespaceList_, namespaceList) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
        inline InterveneRuleDetail& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline InterveneRuleDetail& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      protected:
        shared_ptr<vector<InterveneRuleDetail::AnswerConfig>> answerConfig_ {};
        shared_ptr<InterveneRuleDetail::EffectConfig> effectConfig_ {};
        shared_ptr<int32_t> interveneType_ {};
        shared_ptr<vector<string>> namespaceList_ {};
        shared_ptr<int64_t> ruleId_ {};
        shared_ptr<string> ruleName_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->interveneRuleDetail_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
      inline Data& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // interveneRuleDetail Field Functions 
      bool hasInterveneRuleDetail() const { return this->interveneRuleDetail_ != nullptr;};
      void deleteInterveneRuleDetail() { this->interveneRuleDetail_ = nullptr;};
      inline const Data::InterveneRuleDetail & getInterveneRuleDetail() const { DARABONBA_PTR_GET_CONST(interveneRuleDetail_, Data::InterveneRuleDetail) };
      inline Data::InterveneRuleDetail getInterveneRuleDetail() { DARABONBA_PTR_GET(interveneRuleDetail_, Data::InterveneRuleDetail) };
      inline Data& setInterveneRuleDetail(const Data::InterveneRuleDetail & interveneRuleDetail) { DARABONBA_PTR_SET_VALUE(interveneRuleDetail_, interveneRuleDetail) };
      inline Data& setInterveneRuleDetail(Data::InterveneRuleDetail && interveneRuleDetail) { DARABONBA_PTR_SET_RVALUE(interveneRuleDetail_, interveneRuleDetail) };


    protected:
      shared_ptr<int32_t> code_ {};
      shared_ptr<Data::InterveneRuleDetail> interveneRuleDetail_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInterveneRuleDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetInterveneRuleDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetInterveneRuleDetailResponseBody::Data) };
    inline GetInterveneRuleDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetInterveneRuleDetailResponseBody::Data) };
    inline GetInterveneRuleDetailResponseBody& setData(const GetInterveneRuleDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInterveneRuleDetailResponseBody& setData(GetInterveneRuleDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetInterveneRuleDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInterveneRuleDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInterveneRuleDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetInterveneRuleDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetInterveneRuleDetailResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
