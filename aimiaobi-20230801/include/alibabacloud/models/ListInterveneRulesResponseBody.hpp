// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENERULESRESPONSEBODY_HPP_
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
  class ListInterveneRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterveneRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterveneRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListInterveneRulesResponseBody() = default ;
    ListInterveneRulesResponseBody(const ListInterveneRulesResponseBody &) = default ;
    ListInterveneRulesResponseBody(ListInterveneRulesResponseBody &&) = default ;
    ListInterveneRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterveneRulesResponseBody() = default ;
    ListInterveneRulesResponseBody& operator=(const ListInterveneRulesResponseBody &) = default ;
    ListInterveneRulesResponseBody& operator=(ListInterveneRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(InterveneRuleList, interveneRuleList_);
        DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(InterveneRuleList, interveneRuleList_);
        DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
      class InterveneRuleList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InterveneRuleList& obj) { 
          DARABONBA_PTR_TO_JSON(AnswerConfig, answerConfig_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(EffectTime, effectTime_);
          DARABONBA_PTR_TO_JSON(InterveneType, interveneType_);
          DARABONBA_PTR_TO_JSON(NamespaceList, namespaceList_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        };
        friend void from_json(const Darabonba::Json& j, InterveneRuleList& obj) { 
          DARABONBA_PTR_FROM_JSON(AnswerConfig, answerConfig_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(EffectTime, effectTime_);
          DARABONBA_PTR_FROM_JSON(InterveneType, interveneType_);
          DARABONBA_PTR_FROM_JSON(NamespaceList, namespaceList_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        };
        InterveneRuleList() = default ;
        InterveneRuleList(const InterveneRuleList &) = default ;
        InterveneRuleList(InterveneRuleList &&) = default ;
        InterveneRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InterveneRuleList() = default ;
        InterveneRuleList& operator=(const InterveneRuleList &) = default ;
        InterveneRuleList& operator=(InterveneRuleList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        && this->createTime_ == nullptr && this->effectTime_ == nullptr && this->interveneType_ == nullptr && this->namespaceList_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr; };
        // answerConfig Field Functions 
        bool hasAnswerConfig() const { return this->answerConfig_ != nullptr;};
        void deleteAnswerConfig() { this->answerConfig_ = nullptr;};
        inline const vector<InterveneRuleList::AnswerConfig> & getAnswerConfig() const { DARABONBA_PTR_GET_CONST(answerConfig_, vector<InterveneRuleList::AnswerConfig>) };
        inline vector<InterveneRuleList::AnswerConfig> getAnswerConfig() { DARABONBA_PTR_GET(answerConfig_, vector<InterveneRuleList::AnswerConfig>) };
        inline InterveneRuleList& setAnswerConfig(const vector<InterveneRuleList::AnswerConfig> & answerConfig) { DARABONBA_PTR_SET_VALUE(answerConfig_, answerConfig) };
        inline InterveneRuleList& setAnswerConfig(vector<InterveneRuleList::AnswerConfig> && answerConfig) { DARABONBA_PTR_SET_RVALUE(answerConfig_, answerConfig) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline InterveneRuleList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // effectTime Field Functions 
        bool hasEffectTime() const { return this->effectTime_ != nullptr;};
        void deleteEffectTime() { this->effectTime_ = nullptr;};
        inline string getEffectTime() const { DARABONBA_PTR_GET_DEFAULT(effectTime_, "") };
        inline InterveneRuleList& setEffectTime(string effectTime) { DARABONBA_PTR_SET_VALUE(effectTime_, effectTime) };


        // interveneType Field Functions 
        bool hasInterveneType() const { return this->interveneType_ != nullptr;};
        void deleteInterveneType() { this->interveneType_ = nullptr;};
        inline int32_t getInterveneType() const { DARABONBA_PTR_GET_DEFAULT(interveneType_, 0) };
        inline InterveneRuleList& setInterveneType(int32_t interveneType) { DARABONBA_PTR_SET_VALUE(interveneType_, interveneType) };


        // namespaceList Field Functions 
        bool hasNamespaceList() const { return this->namespaceList_ != nullptr;};
        void deleteNamespaceList() { this->namespaceList_ = nullptr;};
        inline const vector<string> & getNamespaceList() const { DARABONBA_PTR_GET_CONST(namespaceList_, vector<string>) };
        inline vector<string> getNamespaceList() { DARABONBA_PTR_GET(namespaceList_, vector<string>) };
        inline InterveneRuleList& setNamespaceList(const vector<string> & namespaceList) { DARABONBA_PTR_SET_VALUE(namespaceList_, namespaceList) };
        inline InterveneRuleList& setNamespaceList(vector<string> && namespaceList) { DARABONBA_PTR_SET_RVALUE(namespaceList_, namespaceList) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
        inline InterveneRuleList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline InterveneRuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      protected:
        shared_ptr<vector<InterveneRuleList::AnswerConfig>> answerConfig_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> effectTime_ {};
        shared_ptr<int32_t> interveneType_ {};
        shared_ptr<vector<string>> namespaceList_ {};
        shared_ptr<int64_t> ruleId_ {};
        shared_ptr<string> ruleName_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->interveneRuleList_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
      inline Data& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline Data& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // interveneRuleList Field Functions 
      bool hasInterveneRuleList() const { return this->interveneRuleList_ != nullptr;};
      void deleteInterveneRuleList() { this->interveneRuleList_ = nullptr;};
      inline const vector<Data::InterveneRuleList> & getInterveneRuleList() const { DARABONBA_PTR_GET_CONST(interveneRuleList_, vector<Data::InterveneRuleList>) };
      inline vector<Data::InterveneRuleList> getInterveneRuleList() { DARABONBA_PTR_GET(interveneRuleList_, vector<Data::InterveneRuleList>) };
      inline Data& setInterveneRuleList(const vector<Data::InterveneRuleList> & interveneRuleList) { DARABONBA_PTR_SET_VALUE(interveneRuleList_, interveneRuleList) };
      inline Data& setInterveneRuleList(vector<Data::InterveneRuleList> && interveneRuleList) { DARABONBA_PTR_SET_RVALUE(interveneRuleList_, interveneRuleList) };


      // pageIndex Field Functions 
      bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
      void deletePageIndex() { this->pageIndex_ = nullptr;};
      inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
      inline Data& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    protected:
      shared_ptr<int32_t> code_ {};
      shared_ptr<int64_t> count_ {};
      shared_ptr<vector<Data::InterveneRuleList>> interveneRuleList_ {};
      shared_ptr<int32_t> pageIndex_ {};
      shared_ptr<int32_t> pageSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListInterveneRulesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListInterveneRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListInterveneRulesResponseBody::Data) };
    inline ListInterveneRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListInterveneRulesResponseBody::Data) };
    inline ListInterveneRulesResponseBody& setData(const ListInterveneRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListInterveneRulesResponseBody& setData(ListInterveneRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListInterveneRulesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListInterveneRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInterveneRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListInterveneRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListInterveneRulesResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
