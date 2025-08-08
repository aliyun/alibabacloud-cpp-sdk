// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATESQLFROMNLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GENERATESQLFROMNLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GenerateSqlFromNLResponseBodyDataKnowledgeReferences.hpp>
#include <alibabacloud/models/GenerateSqlFromNLResponseBodyDataSimilarSql.hpp>
#include <alibabacloud/models/GenerateSqlFromNLResponseBodyDataTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GenerateSqlFromNLResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateSqlFromNLResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeReferences, knowledgeReferences_);
      DARABONBA_PTR_TO_JSON(Question, question_);
      DARABONBA_PTR_TO_JSON(SimilarSql, similarSql_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(Thought, thought_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateSqlFromNLResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeReferences, knowledgeReferences_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
      DARABONBA_PTR_FROM_JSON(SimilarSql, similarSql_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(Thought, thought_);
    };
    GenerateSqlFromNLResponseBodyData() = default ;
    GenerateSqlFromNLResponseBodyData(const GenerateSqlFromNLResponseBodyData &) = default ;
    GenerateSqlFromNLResponseBodyData(GenerateSqlFromNLResponseBodyData &&) = default ;
    GenerateSqlFromNLResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateSqlFromNLResponseBodyData() = default ;
    GenerateSqlFromNLResponseBodyData& operator=(const GenerateSqlFromNLResponseBodyData &) = default ;
    GenerateSqlFromNLResponseBodyData& operator=(GenerateSqlFromNLResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->knowledgeReferences_ != nullptr
        && this->question_ != nullptr && this->similarSql_ != nullptr && this->sql_ != nullptr && this->tables_ != nullptr && this->thought_ != nullptr; };
    // knowledgeReferences Field Functions 
    bool hasKnowledgeReferences() const { return this->knowledgeReferences_ != nullptr;};
    void deleteKnowledgeReferences() { this->knowledgeReferences_ = nullptr;};
    inline const vector<Models::GenerateSqlFromNLResponseBodyDataKnowledgeReferences> & knowledgeReferences() const { DARABONBA_PTR_GET_CONST(knowledgeReferences_, vector<Models::GenerateSqlFromNLResponseBodyDataKnowledgeReferences>) };
    inline vector<Models::GenerateSqlFromNLResponseBodyDataKnowledgeReferences> knowledgeReferences() { DARABONBA_PTR_GET(knowledgeReferences_, vector<Models::GenerateSqlFromNLResponseBodyDataKnowledgeReferences>) };
    inline GenerateSqlFromNLResponseBodyData& setKnowledgeReferences(const vector<Models::GenerateSqlFromNLResponseBodyDataKnowledgeReferences> & knowledgeReferences) { DARABONBA_PTR_SET_VALUE(knowledgeReferences_, knowledgeReferences) };
    inline GenerateSqlFromNLResponseBodyData& setKnowledgeReferences(vector<Models::GenerateSqlFromNLResponseBodyDataKnowledgeReferences> && knowledgeReferences) { DARABONBA_PTR_SET_RVALUE(knowledgeReferences_, knowledgeReferences) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string question() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline GenerateSqlFromNLResponseBodyData& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // similarSql Field Functions 
    bool hasSimilarSql() const { return this->similarSql_ != nullptr;};
    void deleteSimilarSql() { this->similarSql_ = nullptr;};
    inline const vector<Models::GenerateSqlFromNLResponseBodyDataSimilarSql> & similarSql() const { DARABONBA_PTR_GET_CONST(similarSql_, vector<Models::GenerateSqlFromNLResponseBodyDataSimilarSql>) };
    inline vector<Models::GenerateSqlFromNLResponseBodyDataSimilarSql> similarSql() { DARABONBA_PTR_GET(similarSql_, vector<Models::GenerateSqlFromNLResponseBodyDataSimilarSql>) };
    inline GenerateSqlFromNLResponseBodyData& setSimilarSql(const vector<Models::GenerateSqlFromNLResponseBodyDataSimilarSql> & similarSql) { DARABONBA_PTR_SET_VALUE(similarSql_, similarSql) };
    inline GenerateSqlFromNLResponseBodyData& setSimilarSql(vector<Models::GenerateSqlFromNLResponseBodyDataSimilarSql> && similarSql) { DARABONBA_PTR_SET_RVALUE(similarSql_, similarSql) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string sql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline GenerateSqlFromNLResponseBodyData& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<Models::GenerateSqlFromNLResponseBodyDataTables> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Models::GenerateSqlFromNLResponseBodyDataTables>) };
    inline vector<Models::GenerateSqlFromNLResponseBodyDataTables> tables() { DARABONBA_PTR_GET(tables_, vector<Models::GenerateSqlFromNLResponseBodyDataTables>) };
    inline GenerateSqlFromNLResponseBodyData& setTables(const vector<Models::GenerateSqlFromNLResponseBodyDataTables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline GenerateSqlFromNLResponseBodyData& setTables(vector<Models::GenerateSqlFromNLResponseBodyDataTables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // thought Field Functions 
    bool hasThought() const { return this->thought_ != nullptr;};
    void deleteThought() { this->thought_ = nullptr;};
    inline string thought() const { DARABONBA_PTR_GET_DEFAULT(thought_, "") };
    inline GenerateSqlFromNLResponseBodyData& setThought(string thought) { DARABONBA_PTR_SET_VALUE(thought_, thought) };


  protected:
    std::shared_ptr<vector<Models::GenerateSqlFromNLResponseBodyDataKnowledgeReferences>> knowledgeReferences_ = nullptr;
    std::shared_ptr<string> question_ = nullptr;
    std::shared_ptr<vector<Models::GenerateSqlFromNLResponseBodyDataSimilarSql>> similarSql_ = nullptr;
    std::shared_ptr<string> sql_ = nullptr;
    std::shared_ptr<vector<Models::GenerateSqlFromNLResponseBodyDataTables>> tables_ = nullptr;
    std::shared_ptr<string> thought_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
