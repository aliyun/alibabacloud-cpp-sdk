// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNLIBRARYCHATGENERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNLIBRARYCHATGENERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunLibraryChatGenerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunLibraryChatGenerationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(docIdList, docIdList_);
      DARABONBA_PTR_TO_JSON(enableFollowUp, enableFollowUp_);
      DARABONBA_PTR_TO_JSON(enableMultiQuery, enableMultiQuery_);
      DARABONBA_PTR_TO_JSON(enableOpenQa, enableOpenQa_);
      DARABONBA_PTR_TO_JSON(followUpLlm, followUpLlm_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_PTR_TO_JSON(llmType, llmType_);
      DARABONBA_PTR_TO_JSON(multiQueryLlm, multiQueryLlm_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(queryCriteria, queryCriteria_);
      DARABONBA_PTR_TO_JSON(rerankType, rerankType_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(subQueryList, subQueryList_);
      DARABONBA_PTR_TO_JSON(textSearchParameter, textSearchParameter_);
      DARABONBA_PTR_TO_JSON(topK, topK_);
      DARABONBA_PTR_TO_JSON(vectorSearchParameter, vectorSearchParameter_);
      DARABONBA_PTR_TO_JSON(withDocumentReference, withDocumentReference_);
    };
    friend void from_json(const Darabonba::Json& j, RunLibraryChatGenerationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(docIdList, docIdList_);
      DARABONBA_PTR_FROM_JSON(enableFollowUp, enableFollowUp_);
      DARABONBA_PTR_FROM_JSON(enableMultiQuery, enableMultiQuery_);
      DARABONBA_PTR_FROM_JSON(enableOpenQa, enableOpenQa_);
      DARABONBA_PTR_FROM_JSON(followUpLlm, followUpLlm_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_PTR_FROM_JSON(llmType, llmType_);
      DARABONBA_PTR_FROM_JSON(multiQueryLlm, multiQueryLlm_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(queryCriteria, queryCriteria_);
      DARABONBA_PTR_FROM_JSON(rerankType, rerankType_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(subQueryList, subQueryList_);
      DARABONBA_PTR_FROM_JSON(textSearchParameter, textSearchParameter_);
      DARABONBA_PTR_FROM_JSON(topK, topK_);
      DARABONBA_PTR_FROM_JSON(vectorSearchParameter, vectorSearchParameter_);
      DARABONBA_PTR_FROM_JSON(withDocumentReference, withDocumentReference_);
    };
    RunLibraryChatGenerationRequest() = default ;
    RunLibraryChatGenerationRequest(const RunLibraryChatGenerationRequest &) = default ;
    RunLibraryChatGenerationRequest(RunLibraryChatGenerationRequest &&) = default ;
    RunLibraryChatGenerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunLibraryChatGenerationRequest() = default ;
    RunLibraryChatGenerationRequest& operator=(const RunLibraryChatGenerationRequest &) = default ;
    RunLibraryChatGenerationRequest& operator=(RunLibraryChatGenerationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VectorSearchParameter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VectorSearchParameter& obj) { 
        DARABONBA_PTR_TO_JSON(limit, limit_);
      };
      friend void from_json(const Darabonba::Json& j, VectorSearchParameter& obj) { 
        DARABONBA_PTR_FROM_JSON(limit, limit_);
      };
      VectorSearchParameter() = default ;
      VectorSearchParameter(const VectorSearchParameter &) = default ;
      VectorSearchParameter(VectorSearchParameter &&) = default ;
      VectorSearchParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VectorSearchParameter() = default ;
      VectorSearchParameter& operator=(const VectorSearchParameter &) = default ;
      VectorSearchParameter& operator=(VectorSearchParameter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->limit_ == nullptr; };
      // limit Field Functions 
      bool hasLimit() const { return this->limit_ != nullptr;};
      void deleteLimit() { this->limit_ = nullptr;};
      inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
      inline VectorSearchParameter& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    protected:
      shared_ptr<int32_t> limit_ {};
    };

    class TextSearchParameter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TextSearchParameter& obj) { 
        DARABONBA_PTR_TO_JSON(limit, limit_);
        DARABONBA_PTR_TO_JSON(searchAnalyzerType, searchAnalyzerType_);
      };
      friend void from_json(const Darabonba::Json& j, TextSearchParameter& obj) { 
        DARABONBA_PTR_FROM_JSON(limit, limit_);
        DARABONBA_PTR_FROM_JSON(searchAnalyzerType, searchAnalyzerType_);
      };
      TextSearchParameter() = default ;
      TextSearchParameter(const TextSearchParameter &) = default ;
      TextSearchParameter(TextSearchParameter &&) = default ;
      TextSearchParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TextSearchParameter() = default ;
      TextSearchParameter& operator=(const TextSearchParameter &) = default ;
      TextSearchParameter& operator=(TextSearchParameter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->limit_ == nullptr
        && this->searchAnalyzerType_ == nullptr; };
      // limit Field Functions 
      bool hasLimit() const { return this->limit_ != nullptr;};
      void deleteLimit() { this->limit_ = nullptr;};
      inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
      inline TextSearchParameter& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


      // searchAnalyzerType Field Functions 
      bool hasSearchAnalyzerType() const { return this->searchAnalyzerType_ != nullptr;};
      void deleteSearchAnalyzerType() { this->searchAnalyzerType_ = nullptr;};
      inline string getSearchAnalyzerType() const { DARABONBA_PTR_GET_DEFAULT(searchAnalyzerType_, "") };
      inline TextSearchParameter& setSearchAnalyzerType(string searchAnalyzerType) { DARABONBA_PTR_SET_VALUE(searchAnalyzerType_, searchAnalyzerType) };


    protected:
      shared_ptr<int32_t> limit_ {};
      shared_ptr<string> searchAnalyzerType_ {};
    };

    class QueryCriteria : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryCriteria& obj) { 
        DARABONBA_PTR_TO_JSON(and, and_);
        DARABONBA_PTR_TO_JSON(or, or_);
      };
      friend void from_json(const Darabonba::Json& j, QueryCriteria& obj) { 
        DARABONBA_PTR_FROM_JSON(and, and_);
        DARABONBA_PTR_FROM_JSON(or, or_);
      };
      QueryCriteria() = default ;
      QueryCriteria(const QueryCriteria &) = default ;
      QueryCriteria(QueryCriteria &&) = default ;
      QueryCriteria(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryCriteria() = default ;
      QueryCriteria& operator=(const QueryCriteria &) = default ;
      QueryCriteria& operator=(QueryCriteria &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Or : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Or& obj) { 
          DARABONBA_PTR_TO_JSON(boost, boost_);
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(operator, operator_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Or& obj) { 
          DARABONBA_PTR_FROM_JSON(boost, boost_);
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(operator, operator_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        Or() = default ;
        Or(const Or &) = default ;
        Or(Or &&) = default ;
        Or(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Or() = default ;
        Or& operator=(const Or &) = default ;
        Or& operator=(Or &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->boost_ == nullptr
        && this->key_ == nullptr && this->operator_ == nullptr && this->value_ == nullptr; };
        // boost Field Functions 
        bool hasBoost() const { return this->boost_ != nullptr;};
        void deleteBoost() { this->boost_ = nullptr;};
        inline float getBoost() const { DARABONBA_PTR_GET_DEFAULT(boost_, 0.0) };
        inline Or& setBoost(float boost) { DARABONBA_PTR_SET_VALUE(boost_, boost) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Or& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline Or& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Or& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<float> boost_ {};
        shared_ptr<string> key_ {};
        shared_ptr<string> operator_ {};
        shared_ptr<string> value_ {};
      };

      class And : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const And& obj) { 
          DARABONBA_PTR_TO_JSON(boost, boost_);
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(operator, operator_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, And& obj) { 
          DARABONBA_PTR_FROM_JSON(boost, boost_);
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(operator, operator_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        And() = default ;
        And(const And &) = default ;
        And(And &&) = default ;
        And(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~And() = default ;
        And& operator=(const And &) = default ;
        And& operator=(And &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->boost_ == nullptr
        && this->key_ == nullptr && this->operator_ == nullptr && this->value_ == nullptr; };
        // boost Field Functions 
        bool hasBoost() const { return this->boost_ != nullptr;};
        void deleteBoost() { this->boost_ = nullptr;};
        inline float getBoost() const { DARABONBA_PTR_GET_DEFAULT(boost_, 0.0) };
        inline And& setBoost(float boost) { DARABONBA_PTR_SET_VALUE(boost_, boost) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline And& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline And& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline And& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<float> boost_ {};
        shared_ptr<string> key_ {};
        shared_ptr<string> operator_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->and_ == nullptr
        && this->or_ == nullptr; };
      // and Field Functions 
      bool hasAnd() const { return this->and_ != nullptr;};
      void deleteAnd() { this->and_ = nullptr;};
      inline const vector<QueryCriteria::And> & getAnd() const { DARABONBA_PTR_GET_CONST(and_, vector<QueryCriteria::And>) };
      inline vector<QueryCriteria::And> getAnd() { DARABONBA_PTR_GET(and_, vector<QueryCriteria::And>) };
      inline QueryCriteria& setAnd(const vector<QueryCriteria::And> & _and) { DARABONBA_PTR_SET_VALUE(and_, _and) };
      inline QueryCriteria& setAnd(vector<QueryCriteria::And> && _and) { DARABONBA_PTR_SET_RVALUE(and_, _and) };


      // or Field Functions 
      bool hasOr() const { return this->or_ != nullptr;};
      void deleteOr() { this->or_ = nullptr;};
      inline const vector<QueryCriteria::Or> & getOr() const { DARABONBA_PTR_GET_CONST(or_, vector<QueryCriteria::Or>) };
      inline vector<QueryCriteria::Or> getOr() { DARABONBA_PTR_GET(or_, vector<QueryCriteria::Or>) };
      inline QueryCriteria& setOr(const vector<QueryCriteria::Or> & _or) { DARABONBA_PTR_SET_VALUE(or_, _or) };
      inline QueryCriteria& setOr(vector<QueryCriteria::Or> && _or) { DARABONBA_PTR_SET_RVALUE(or_, _or) };


    protected:
      shared_ptr<vector<QueryCriteria::And>> and_ {};
      shared_ptr<vector<QueryCriteria::Or>> or_ {};
    };

    virtual bool empty() const override { return this->docIdList_ == nullptr
        && this->enableFollowUp_ == nullptr && this->enableMultiQuery_ == nullptr && this->enableOpenQa_ == nullptr && this->followUpLlm_ == nullptr && this->libraryId_ == nullptr
        && this->llmType_ == nullptr && this->multiQueryLlm_ == nullptr && this->query_ == nullptr && this->queryCriteria_ == nullptr && this->rerankType_ == nullptr
        && this->sessionId_ == nullptr && this->stream_ == nullptr && this->subQueryList_ == nullptr && this->textSearchParameter_ == nullptr && this->topK_ == nullptr
        && this->vectorSearchParameter_ == nullptr && this->withDocumentReference_ == nullptr; };
    // docIdList Field Functions 
    bool hasDocIdList() const { return this->docIdList_ != nullptr;};
    void deleteDocIdList() { this->docIdList_ = nullptr;};
    inline const vector<string> & getDocIdList() const { DARABONBA_PTR_GET_CONST(docIdList_, vector<string>) };
    inline vector<string> getDocIdList() { DARABONBA_PTR_GET(docIdList_, vector<string>) };
    inline RunLibraryChatGenerationRequest& setDocIdList(const vector<string> & docIdList) { DARABONBA_PTR_SET_VALUE(docIdList_, docIdList) };
    inline RunLibraryChatGenerationRequest& setDocIdList(vector<string> && docIdList) { DARABONBA_PTR_SET_RVALUE(docIdList_, docIdList) };


    // enableFollowUp Field Functions 
    bool hasEnableFollowUp() const { return this->enableFollowUp_ != nullptr;};
    void deleteEnableFollowUp() { this->enableFollowUp_ = nullptr;};
    inline bool getEnableFollowUp() const { DARABONBA_PTR_GET_DEFAULT(enableFollowUp_, false) };
    inline RunLibraryChatGenerationRequest& setEnableFollowUp(bool enableFollowUp) { DARABONBA_PTR_SET_VALUE(enableFollowUp_, enableFollowUp) };


    // enableMultiQuery Field Functions 
    bool hasEnableMultiQuery() const { return this->enableMultiQuery_ != nullptr;};
    void deleteEnableMultiQuery() { this->enableMultiQuery_ = nullptr;};
    inline bool getEnableMultiQuery() const { DARABONBA_PTR_GET_DEFAULT(enableMultiQuery_, false) };
    inline RunLibraryChatGenerationRequest& setEnableMultiQuery(bool enableMultiQuery) { DARABONBA_PTR_SET_VALUE(enableMultiQuery_, enableMultiQuery) };


    // enableOpenQa Field Functions 
    bool hasEnableOpenQa() const { return this->enableOpenQa_ != nullptr;};
    void deleteEnableOpenQa() { this->enableOpenQa_ = nullptr;};
    inline bool getEnableOpenQa() const { DARABONBA_PTR_GET_DEFAULT(enableOpenQa_, false) };
    inline RunLibraryChatGenerationRequest& setEnableOpenQa(bool enableOpenQa) { DARABONBA_PTR_SET_VALUE(enableOpenQa_, enableOpenQa) };


    // followUpLlm Field Functions 
    bool hasFollowUpLlm() const { return this->followUpLlm_ != nullptr;};
    void deleteFollowUpLlm() { this->followUpLlm_ = nullptr;};
    inline string getFollowUpLlm() const { DARABONBA_PTR_GET_DEFAULT(followUpLlm_, "") };
    inline RunLibraryChatGenerationRequest& setFollowUpLlm(string followUpLlm) { DARABONBA_PTR_SET_VALUE(followUpLlm_, followUpLlm) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline RunLibraryChatGenerationRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // llmType Field Functions 
    bool hasLlmType() const { return this->llmType_ != nullptr;};
    void deleteLlmType() { this->llmType_ = nullptr;};
    inline string getLlmType() const { DARABONBA_PTR_GET_DEFAULT(llmType_, "") };
    inline RunLibraryChatGenerationRequest& setLlmType(string llmType) { DARABONBA_PTR_SET_VALUE(llmType_, llmType) };


    // multiQueryLlm Field Functions 
    bool hasMultiQueryLlm() const { return this->multiQueryLlm_ != nullptr;};
    void deleteMultiQueryLlm() { this->multiQueryLlm_ = nullptr;};
    inline string getMultiQueryLlm() const { DARABONBA_PTR_GET_DEFAULT(multiQueryLlm_, "") };
    inline RunLibraryChatGenerationRequest& setMultiQueryLlm(string multiQueryLlm) { DARABONBA_PTR_SET_VALUE(multiQueryLlm_, multiQueryLlm) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RunLibraryChatGenerationRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // queryCriteria Field Functions 
    bool hasQueryCriteria() const { return this->queryCriteria_ != nullptr;};
    void deleteQueryCriteria() { this->queryCriteria_ = nullptr;};
    inline const RunLibraryChatGenerationRequest::QueryCriteria & getQueryCriteria() const { DARABONBA_PTR_GET_CONST(queryCriteria_, RunLibraryChatGenerationRequest::QueryCriteria) };
    inline RunLibraryChatGenerationRequest::QueryCriteria getQueryCriteria() { DARABONBA_PTR_GET(queryCriteria_, RunLibraryChatGenerationRequest::QueryCriteria) };
    inline RunLibraryChatGenerationRequest& setQueryCriteria(const RunLibraryChatGenerationRequest::QueryCriteria & queryCriteria) { DARABONBA_PTR_SET_VALUE(queryCriteria_, queryCriteria) };
    inline RunLibraryChatGenerationRequest& setQueryCriteria(RunLibraryChatGenerationRequest::QueryCriteria && queryCriteria) { DARABONBA_PTR_SET_RVALUE(queryCriteria_, queryCriteria) };


    // rerankType Field Functions 
    bool hasRerankType() const { return this->rerankType_ != nullptr;};
    void deleteRerankType() { this->rerankType_ = nullptr;};
    inline string getRerankType() const { DARABONBA_PTR_GET_DEFAULT(rerankType_, "") };
    inline RunLibraryChatGenerationRequest& setRerankType(string rerankType) { DARABONBA_PTR_SET_VALUE(rerankType_, rerankType) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunLibraryChatGenerationRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline RunLibraryChatGenerationRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // subQueryList Field Functions 
    bool hasSubQueryList() const { return this->subQueryList_ != nullptr;};
    void deleteSubQueryList() { this->subQueryList_ = nullptr;};
    inline const vector<string> & getSubQueryList() const { DARABONBA_PTR_GET_CONST(subQueryList_, vector<string>) };
    inline vector<string> getSubQueryList() { DARABONBA_PTR_GET(subQueryList_, vector<string>) };
    inline RunLibraryChatGenerationRequest& setSubQueryList(const vector<string> & subQueryList) { DARABONBA_PTR_SET_VALUE(subQueryList_, subQueryList) };
    inline RunLibraryChatGenerationRequest& setSubQueryList(vector<string> && subQueryList) { DARABONBA_PTR_SET_RVALUE(subQueryList_, subQueryList) };


    // textSearchParameter Field Functions 
    bool hasTextSearchParameter() const { return this->textSearchParameter_ != nullptr;};
    void deleteTextSearchParameter() { this->textSearchParameter_ = nullptr;};
    inline const RunLibraryChatGenerationRequest::TextSearchParameter & getTextSearchParameter() const { DARABONBA_PTR_GET_CONST(textSearchParameter_, RunLibraryChatGenerationRequest::TextSearchParameter) };
    inline RunLibraryChatGenerationRequest::TextSearchParameter getTextSearchParameter() { DARABONBA_PTR_GET(textSearchParameter_, RunLibraryChatGenerationRequest::TextSearchParameter) };
    inline RunLibraryChatGenerationRequest& setTextSearchParameter(const RunLibraryChatGenerationRequest::TextSearchParameter & textSearchParameter) { DARABONBA_PTR_SET_VALUE(textSearchParameter_, textSearchParameter) };
    inline RunLibraryChatGenerationRequest& setTextSearchParameter(RunLibraryChatGenerationRequest::TextSearchParameter && textSearchParameter) { DARABONBA_PTR_SET_RVALUE(textSearchParameter_, textSearchParameter) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline RunLibraryChatGenerationRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // vectorSearchParameter Field Functions 
    bool hasVectorSearchParameter() const { return this->vectorSearchParameter_ != nullptr;};
    void deleteVectorSearchParameter() { this->vectorSearchParameter_ = nullptr;};
    inline const RunLibraryChatGenerationRequest::VectorSearchParameter & getVectorSearchParameter() const { DARABONBA_PTR_GET_CONST(vectorSearchParameter_, RunLibraryChatGenerationRequest::VectorSearchParameter) };
    inline RunLibraryChatGenerationRequest::VectorSearchParameter getVectorSearchParameter() { DARABONBA_PTR_GET(vectorSearchParameter_, RunLibraryChatGenerationRequest::VectorSearchParameter) };
    inline RunLibraryChatGenerationRequest& setVectorSearchParameter(const RunLibraryChatGenerationRequest::VectorSearchParameter & vectorSearchParameter) { DARABONBA_PTR_SET_VALUE(vectorSearchParameter_, vectorSearchParameter) };
    inline RunLibraryChatGenerationRequest& setVectorSearchParameter(RunLibraryChatGenerationRequest::VectorSearchParameter && vectorSearchParameter) { DARABONBA_PTR_SET_RVALUE(vectorSearchParameter_, vectorSearchParameter) };


    // withDocumentReference Field Functions 
    bool hasWithDocumentReference() const { return this->withDocumentReference_ != nullptr;};
    void deleteWithDocumentReference() { this->withDocumentReference_ = nullptr;};
    inline bool getWithDocumentReference() const { DARABONBA_PTR_GET_DEFAULT(withDocumentReference_, false) };
    inline RunLibraryChatGenerationRequest& setWithDocumentReference(bool withDocumentReference) { DARABONBA_PTR_SET_VALUE(withDocumentReference_, withDocumentReference) };


  protected:
    shared_ptr<vector<string>> docIdList_ {};
    shared_ptr<bool> enableFollowUp_ {};
    shared_ptr<bool> enableMultiQuery_ {};
    shared_ptr<bool> enableOpenQa_ {};
    shared_ptr<string> followUpLlm_ {};
    // This parameter is required.
    shared_ptr<string> libraryId_ {};
    // This parameter is required.
    shared_ptr<string> llmType_ {};
    shared_ptr<string> multiQueryLlm_ {};
    // This parameter is required.
    shared_ptr<string> query_ {};
    shared_ptr<RunLibraryChatGenerationRequest::QueryCriteria> queryCriteria_ {};
    shared_ptr<string> rerankType_ {};
    // sessionId
    shared_ptr<string> sessionId_ {};
    shared_ptr<bool> stream_ {};
    shared_ptr<vector<string>> subQueryList_ {};
    shared_ptr<RunLibraryChatGenerationRequest::TextSearchParameter> textSearchParameter_ {};
    shared_ptr<int32_t> topK_ {};
    shared_ptr<RunLibraryChatGenerationRequest::VectorSearchParameter> vectorSearchParameter_ {};
    shared_ptr<bool> withDocumentReference_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
