// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFOREVIEWERS_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFOREVIEWERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers& obj) { 
      DARABONBA_PTR_TO_JSON(Reviewer, reviewer_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers& obj) { 
      DARABONBA_PTR_FROM_JSON(Reviewer, reviewer_);
    };
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers &&) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers& operator=(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers& operator=(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reviewer_ != nullptr; };
    // reviewer Field Functions 
    bool hasReviewer() const { return this->reviewer_ != nullptr;};
    void deleteReviewer() { this->reviewer_ = nullptr;};
    inline const vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer> & reviewer() const { DARABONBA_PTR_GET_CONST(reviewer_, vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer>) };
    inline vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer> reviewer() { DARABONBA_PTR_GET(reviewer_, vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer>) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers& setReviewer(const vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer> & reviewer) { DARABONBA_PTR_SET_VALUE(reviewer_, reviewer) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewers& setReviewer(vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer> && reviewer) { DARABONBA_PTR_SET_RVALUE(reviewer_, reviewer) };


  protected:
    std::shared_ptr<vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer>> reviewer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
