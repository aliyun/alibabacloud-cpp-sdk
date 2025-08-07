// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOREVIEWHISTORYLISTREVIEWHISTORYREVIEWRIGHTRULE_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOREVIEWHISTORYLISTREVIEWHISTORYREVIEWRIGHTRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRule& obj) { 
      DARABONBA_PTR_TO_JSON(ReviewRightRule, reviewRightRule_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRule& obj) { 
      DARABONBA_PTR_FROM_JSON(ReviewRightRule, reviewRightRule_);
    };
    GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRule() = default ;
    GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRule(const GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRule &) = default ;
    GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRule(GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRule &&) = default ;
    GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRule() = default ;
    GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRule& operator=(const GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRule &) = default ;
    GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRule& operator=(GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reviewRightRule_ != nullptr; };
    // reviewRightRule Field Functions 
    bool hasReviewRightRule() const { return this->reviewRightRule_ != nullptr;};
    void deleteReviewRightRule() { this->reviewRightRule_ = nullptr;};
    inline const vector<Models::GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule> & reviewRightRule() const { DARABONBA_PTR_GET_CONST(reviewRightRule_, vector<Models::GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule>) };
    inline vector<Models::GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule> reviewRightRule() { DARABONBA_PTR_GET(reviewRightRule_, vector<Models::GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule>) };
    inline GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRule& setReviewRightRule(const vector<Models::GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule> & reviewRightRule) { DARABONBA_PTR_SET_VALUE(reviewRightRule_, reviewRightRule) };
    inline GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRule& setReviewRightRule(vector<Models::GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule> && reviewRightRule) { DARABONBA_PTR_SET_RVALUE(reviewRightRule_, reviewRightRule) };


  protected:
    std::shared_ptr<vector<Models::GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule>> reviewRightRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
