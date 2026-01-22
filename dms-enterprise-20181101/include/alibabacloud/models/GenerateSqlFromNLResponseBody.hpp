// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATESQLFROMNLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATESQLFROMNLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GenerateSqlFromNLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateSqlFromNLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateSqlFromNLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GenerateSqlFromNLResponseBody() = default ;
    GenerateSqlFromNLResponseBody(const GenerateSqlFromNLResponseBody &) = default ;
    GenerateSqlFromNLResponseBody(GenerateSqlFromNLResponseBody &&) = default ;
    GenerateSqlFromNLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateSqlFromNLResponseBody() = default ;
    GenerateSqlFromNLResponseBody& operator=(const GenerateSqlFromNLResponseBody &) = default ;
    GenerateSqlFromNLResponseBody& operator=(GenerateSqlFromNLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(KnowledgeReferences, knowledgeReferences_);
        DARABONBA_PTR_TO_JSON(Question, question_);
        DARABONBA_PTR_TO_JSON(SimilarSql, similarSql_);
        DARABONBA_PTR_TO_JSON(Sql, sql_);
        DARABONBA_PTR_TO_JSON(Tables, tables_);
        DARABONBA_PTR_TO_JSON(Thought, thought_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(KnowledgeReferences, knowledgeReferences_);
        DARABONBA_PTR_FROM_JSON(Question, question_);
        DARABONBA_PTR_FROM_JSON(SimilarSql, similarSql_);
        DARABONBA_PTR_FROM_JSON(Sql, sql_);
        DARABONBA_PTR_FROM_JSON(Tables, tables_);
        DARABONBA_PTR_FROM_JSON(Thought, thought_);
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
      class Tables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tables& obj) { 
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
        };
        friend void from_json(const Darabonba::Json& j, Tables& obj) { 
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        };
        Tables() = default ;
        Tables(const Tables &) = default ;
        Tables(Tables &&) = default ;
        Tables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tables() = default ;
        Tables& operator=(const Tables &) = default ;
        Tables& operator=(Tables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tableName_ == nullptr; };
        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline Tables& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      protected:
        shared_ptr<string> tableName_ {};
      };

      class SimilarSql : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SimilarSql& obj) { 
          DARABONBA_PTR_TO_JSON(Question, question_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(Sql, sql_);
          DARABONBA_PTR_TO_JSON(Thought, thought_);
        };
        friend void from_json(const Darabonba::Json& j, SimilarSql& obj) { 
          DARABONBA_PTR_FROM_JSON(Question, question_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(Sql, sql_);
          DARABONBA_PTR_FROM_JSON(Thought, thought_);
        };
        SimilarSql() = default ;
        SimilarSql(const SimilarSql &) = default ;
        SimilarSql(SimilarSql &&) = default ;
        SimilarSql(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SimilarSql() = default ;
        SimilarSql& operator=(const SimilarSql &) = default ;
        SimilarSql& operator=(SimilarSql &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->question_ == nullptr
        && this->score_ == nullptr && this->sql_ == nullptr && this->thought_ == nullptr; };
        // question Field Functions 
        bool hasQuestion() const { return this->question_ != nullptr;};
        void deleteQuestion() { this->question_ = nullptr;};
        inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
        inline SimilarSql& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
        inline SimilarSql& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // sql Field Functions 
        bool hasSql() const { return this->sql_ != nullptr;};
        void deleteSql() { this->sql_ = nullptr;};
        inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
        inline SimilarSql& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


        // thought Field Functions 
        bool hasThought() const { return this->thought_ != nullptr;};
        void deleteThought() { this->thought_ = nullptr;};
        inline string getThought() const { DARABONBA_PTR_GET_DEFAULT(thought_, "") };
        inline SimilarSql& setThought(string thought) { DARABONBA_PTR_SET_VALUE(thought_, thought) };


      protected:
        shared_ptr<string> question_ {};
        shared_ptr<string> score_ {};
        shared_ptr<string> sql_ {};
        shared_ptr<string> thought_ {};
      };

      class KnowledgeReferences : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KnowledgeReferences& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, KnowledgeReferences& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        KnowledgeReferences() = default ;
        KnowledgeReferences(const KnowledgeReferences &) = default ;
        KnowledgeReferences(KnowledgeReferences &&) = default ;
        KnowledgeReferences(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KnowledgeReferences() = default ;
        KnowledgeReferences& operator=(const KnowledgeReferences &) = default ;
        KnowledgeReferences& operator=(KnowledgeReferences &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->level_ == nullptr && this->name_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline KnowledgeReferences& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline KnowledgeReferences& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline KnowledgeReferences& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> level_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->knowledgeReferences_ == nullptr
        && this->question_ == nullptr && this->similarSql_ == nullptr && this->sql_ == nullptr && this->tables_ == nullptr && this->thought_ == nullptr; };
      // knowledgeReferences Field Functions 
      bool hasKnowledgeReferences() const { return this->knowledgeReferences_ != nullptr;};
      void deleteKnowledgeReferences() { this->knowledgeReferences_ = nullptr;};
      inline const vector<Data::KnowledgeReferences> & getKnowledgeReferences() const { DARABONBA_PTR_GET_CONST(knowledgeReferences_, vector<Data::KnowledgeReferences>) };
      inline vector<Data::KnowledgeReferences> getKnowledgeReferences() { DARABONBA_PTR_GET(knowledgeReferences_, vector<Data::KnowledgeReferences>) };
      inline Data& setKnowledgeReferences(const vector<Data::KnowledgeReferences> & knowledgeReferences) { DARABONBA_PTR_SET_VALUE(knowledgeReferences_, knowledgeReferences) };
      inline Data& setKnowledgeReferences(vector<Data::KnowledgeReferences> && knowledgeReferences) { DARABONBA_PTR_SET_RVALUE(knowledgeReferences_, knowledgeReferences) };


      // question Field Functions 
      bool hasQuestion() const { return this->question_ != nullptr;};
      void deleteQuestion() { this->question_ = nullptr;};
      inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
      inline Data& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


      // similarSql Field Functions 
      bool hasSimilarSql() const { return this->similarSql_ != nullptr;};
      void deleteSimilarSql() { this->similarSql_ = nullptr;};
      inline const vector<Data::SimilarSql> & getSimilarSql() const { DARABONBA_PTR_GET_CONST(similarSql_, vector<Data::SimilarSql>) };
      inline vector<Data::SimilarSql> getSimilarSql() { DARABONBA_PTR_GET(similarSql_, vector<Data::SimilarSql>) };
      inline Data& setSimilarSql(const vector<Data::SimilarSql> & similarSql) { DARABONBA_PTR_SET_VALUE(similarSql_, similarSql) };
      inline Data& setSimilarSql(vector<Data::SimilarSql> && similarSql) { DARABONBA_PTR_SET_RVALUE(similarSql_, similarSql) };


      // sql Field Functions 
      bool hasSql() const { return this->sql_ != nullptr;};
      void deleteSql() { this->sql_ = nullptr;};
      inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
      inline Data& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


      // tables Field Functions 
      bool hasTables() const { return this->tables_ != nullptr;};
      void deleteTables() { this->tables_ = nullptr;};
      inline const vector<Data::Tables> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Data::Tables>) };
      inline vector<Data::Tables> getTables() { DARABONBA_PTR_GET(tables_, vector<Data::Tables>) };
      inline Data& setTables(const vector<Data::Tables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
      inline Data& setTables(vector<Data::Tables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


      // thought Field Functions 
      bool hasThought() const { return this->thought_ != nullptr;};
      void deleteThought() { this->thought_ = nullptr;};
      inline string getThought() const { DARABONBA_PTR_GET_DEFAULT(thought_, "") };
      inline Data& setThought(string thought) { DARABONBA_PTR_SET_VALUE(thought_, thought) };


    protected:
      shared_ptr<vector<Data::KnowledgeReferences>> knowledgeReferences_ {};
      shared_ptr<string> question_ {};
      shared_ptr<vector<Data::SimilarSql>> similarSql_ {};
      shared_ptr<string> sql_ {};
      shared_ptr<vector<Data::Tables>> tables_ {};
      shared_ptr<string> thought_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GenerateSqlFromNLResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GenerateSqlFromNLResponseBody::Data) };
    inline GenerateSqlFromNLResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GenerateSqlFromNLResponseBody::Data) };
    inline GenerateSqlFromNLResponseBody& setData(const GenerateSqlFromNLResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GenerateSqlFromNLResponseBody& setData(GenerateSqlFromNLResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GenerateSqlFromNLResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GenerateSqlFromNLResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateSqlFromNLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GenerateSqlFromNLResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<GenerateSqlFromNLResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
