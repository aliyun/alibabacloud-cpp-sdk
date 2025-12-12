// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFOREVIEWERSREVIEWER_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFOREVIEWERSREVIEWER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer& obj) { 
      DARABONBA_PTR_TO_JSON(ReviewerId, reviewerId_);
      DARABONBA_PTR_TO_JSON(ReviewerName, reviewerName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer& obj) { 
      DARABONBA_PTR_FROM_JSON(ReviewerId, reviewerId_);
      DARABONBA_PTR_FROM_JSON(ReviewerName, reviewerName_);
    };
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer &&) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer& operator=(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer& operator=(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reviewerId_ == nullptr
        && return this->reviewerName_ == nullptr; };
    // reviewerId Field Functions 
    bool hasReviewerId() const { return this->reviewerId_ != nullptr;};
    void deleteReviewerId() { this->reviewerId_ = nullptr;};
    inline string reviewerId() const { DARABONBA_PTR_GET_DEFAULT(reviewerId_, "") };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer& setReviewerId(string reviewerId) { DARABONBA_PTR_SET_VALUE(reviewerId_, reviewerId) };


    // reviewerName Field Functions 
    bool hasReviewerName() const { return this->reviewerName_ != nullptr;};
    void deleteReviewerName() { this->reviewerName_ = nullptr;};
    inline string reviewerName() const { DARABONBA_PTR_GET_DEFAULT(reviewerName_, "") };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoReviewersReviewer& setReviewerName(string reviewerName) { DARABONBA_PTR_SET_VALUE(reviewerName_, reviewerName) };


  protected:
    std::shared_ptr<string> reviewerId_ = nullptr;
    std::shared_ptr<string> reviewerName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
