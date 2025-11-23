// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATESQLFROMNLRESPONSEBODYDATASIMILARSQL_HPP_
#define ALIBABACLOUD_MODELS_GENERATESQLFROMNLRESPONSEBODYDATASIMILARSQL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GenerateSqlFromNLResponseBodyDataSimilarSql : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateSqlFromNLResponseBodyDataSimilarSql& obj) { 
      DARABONBA_PTR_TO_JSON(Question, question_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
      DARABONBA_PTR_TO_JSON(Thought, thought_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateSqlFromNLResponseBodyDataSimilarSql& obj) { 
      DARABONBA_PTR_FROM_JSON(Question, question_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
      DARABONBA_PTR_FROM_JSON(Thought, thought_);
    };
    GenerateSqlFromNLResponseBodyDataSimilarSql() = default ;
    GenerateSqlFromNLResponseBodyDataSimilarSql(const GenerateSqlFromNLResponseBodyDataSimilarSql &) = default ;
    GenerateSqlFromNLResponseBodyDataSimilarSql(GenerateSqlFromNLResponseBodyDataSimilarSql &&) = default ;
    GenerateSqlFromNLResponseBodyDataSimilarSql(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateSqlFromNLResponseBodyDataSimilarSql() = default ;
    GenerateSqlFromNLResponseBodyDataSimilarSql& operator=(const GenerateSqlFromNLResponseBodyDataSimilarSql &) = default ;
    GenerateSqlFromNLResponseBodyDataSimilarSql& operator=(GenerateSqlFromNLResponseBodyDataSimilarSql &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->question_ == nullptr
        && return this->score_ == nullptr && return this->sql_ == nullptr && return this->thought_ == nullptr; };
    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string question() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline GenerateSqlFromNLResponseBodyDataSimilarSql& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline string score() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
    inline GenerateSqlFromNLResponseBodyDataSimilarSql& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string sql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline GenerateSqlFromNLResponseBodyDataSimilarSql& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // thought Field Functions 
    bool hasThought() const { return this->thought_ != nullptr;};
    void deleteThought() { this->thought_ = nullptr;};
    inline string thought() const { DARABONBA_PTR_GET_DEFAULT(thought_, "") };
    inline GenerateSqlFromNLResponseBodyDataSimilarSql& setThought(string thought) { DARABONBA_PTR_SET_VALUE(thought_, thought) };


  protected:
    std::shared_ptr<string> question_ = nullptr;
    std::shared_ptr<string> score_ = nullptr;
    std::shared_ptr<string> sql_ = nullptr;
    std::shared_ptr<string> thought_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
