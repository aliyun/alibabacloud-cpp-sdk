// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAREVIEWHISTORYLISTREVIEWHISTORYREVIEWRIGHTRULE_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAREVIEWHISTORYLISTREVIEWHISTORYREVIEWRIGHTRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule& obj) { 
      DARABONBA_PTR_TO_JSON(ReviewRightRule, reviewRightRule_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule& obj) { 
      DARABONBA_PTR_FROM_JSON(ReviewRightRule, reviewRightRule_);
    };
    GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule() = default ;
    GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule(const GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule &) = default ;
    GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule(GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule &&) = default ;
    GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule() = default ;
    GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule& operator=(const GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule &) = default ;
    GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule& operator=(GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reviewRightRule_ == nullptr; };
    // reviewRightRule Field Functions 
    bool hasReviewRightRule() const { return this->reviewRightRule_ != nullptr;};
    void deleteReviewRightRule() { this->reviewRightRule_ = nullptr;};
    inline const vector<Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule> & reviewRightRule() const { DARABONBA_PTR_GET_CONST(reviewRightRule_, vector<Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule>) };
    inline vector<Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule> reviewRightRule() { DARABONBA_PTR_GET(reviewRightRule_, vector<Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule>) };
    inline GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule& setReviewRightRule(const vector<Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule> & reviewRightRule) { DARABONBA_PTR_SET_VALUE(reviewRightRule_, reviewRightRule) };
    inline GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule& setReviewRightRule(vector<Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule> && reviewRightRule) { DARABONBA_PTR_SET_RVALUE(reviewRightRule_, reviewRightRule) };


  protected:
    std::shared_ptr<vector<Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule>> reviewRightRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
