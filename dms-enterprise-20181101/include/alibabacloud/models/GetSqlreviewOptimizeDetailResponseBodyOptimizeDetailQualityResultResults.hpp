// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLREVIEWOPTIMIZEDETAILRESPONSEBODYOPTIMIZEDETAILQUALITYRESULTRESULTS_HPP_
#define ALIBABACLOUD_MODELS_GETSQLREVIEWOPTIMIZEDETAILRESPONSEBODYOPTIMIZEDETAILQUALITYRESULTRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults& obj) { 
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(Feedback, feedback_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Scripts, scripts_);
    };
    friend void from_json(const Darabonba::Json& j, GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Scripts, scripts_);
    };
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults() = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults(const GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults &) = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults(GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults &&) = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults() = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults& operator=(const GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults &) = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults& operator=(GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comments_ != nullptr
        && this->feedback_ != nullptr && this->messages_ != nullptr && this->ruleName_ != nullptr && this->ruleType_ != nullptr && this->scripts_ != nullptr; };
    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string comments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // feedback Field Functions 
    bool hasFeedback() const { return this->feedback_ != nullptr;};
    void deleteFeedback() { this->feedback_ = nullptr;};
    inline string feedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, "") };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults& setFeedback(string feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<string> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<string>) };
    inline vector<string> messages() { DARABONBA_PTR_GET(messages_, vector<string>) };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults& setMessages(const vector<string> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults& setMessages(vector<string> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // scripts Field Functions 
    bool hasScripts() const { return this->scripts_ != nullptr;};
    void deleteScripts() { this->scripts_ = nullptr;};
    inline const vector<Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts> & scripts() const { DARABONBA_PTR_GET_CONST(scripts_, vector<Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts>) };
    inline vector<Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts> scripts() { DARABONBA_PTR_GET(scripts_, vector<Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts>) };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults& setScripts(const vector<Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts> & scripts) { DARABONBA_PTR_SET_VALUE(scripts_, scripts) };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults& setScripts(vector<Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts> && scripts) { DARABONBA_PTR_SET_RVALUE(scripts_, scripts) };


  protected:
    // The comment that is specified when you create the SQL review rule. For more information, see [SQL review optimization](https://help.aliyun.com/document_detail/194114.html).
    std::shared_ptr<string> comments_ = nullptr;
    // The optimization suggestion for the SQL statement. Valid values:
    // 
    // *   **MUST_IMPROVE**: The SQL statement must be improved.
    // *   **POTENTIAL_ISSUE**: The SQL statement contains potential issues.
    // *   **SUGGEST_IMPROVE**: We recommend that you improve the SQL statement.
    // *   **USEDMSTOOLKIT**: We recommend that you change schemas without locking tables.
    // *   **USEDMSDML_UNLOCK**: We recommend that you change data without locking tables.
    // *   **TABLEINDEXSUGGEST**: We recommend that you use SQL statements that use indexes.
    std::shared_ptr<string> feedback_ = nullptr;
    // The review results.
    std::shared_ptr<vector<string>> messages_ = nullptr;
    // The name of the rule. For more information, see [SQL review optimization](https://help.aliyun.com/document_detail/194114.html).
    std::shared_ptr<string> ruleName_ = nullptr;
    // The type of the SQL review rule. Valid values:
    // 
    // *   **REVIEW**: a rule that is used to review SQL statements based on standards.
    // *   **OPTIMIZE**: a rule that is used to provide optimization suggestions.
    std::shared_ptr<string> ruleType_ = nullptr;
    // The SQL script for data changes.
    std::shared_ptr<vector<Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResultsScripts>> scripts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
