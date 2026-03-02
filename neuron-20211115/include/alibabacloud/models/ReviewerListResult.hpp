// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVIEWERLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_REVIEWERLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Reviewer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ReviewerListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReviewerListResult& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(reviewers, reviewers_);
    };
    friend void from_json(const Darabonba::Json& j, ReviewerListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(reviewers, reviewers_);
    };
    ReviewerListResult() = default ;
    ReviewerListResult(const ReviewerListResult &) = default ;
    ReviewerListResult(ReviewerListResult &&) = default ;
    ReviewerListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReviewerListResult() = default ;
    ReviewerListResult& operator=(const ReviewerListResult &) = default ;
    ReviewerListResult& operator=(ReviewerListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->reviewers_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReviewerListResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reviewers Field Functions 
    bool hasReviewers() const { return this->reviewers_ != nullptr;};
    void deleteReviewers() { this->reviewers_ = nullptr;};
    inline const vector<Reviewer> & getReviewers() const { DARABONBA_PTR_GET_CONST(reviewers_, vector<Reviewer>) };
    inline vector<Reviewer> getReviewers() { DARABONBA_PTR_GET(reviewers_, vector<Reviewer>) };
    inline ReviewerListResult& setReviewers(const vector<Reviewer> & reviewers) { DARABONBA_PTR_SET_VALUE(reviewers_, reviewers) };
    inline ReviewerListResult& setReviewers(vector<Reviewer> && reviewers) { DARABONBA_PTR_SET_RVALUE(reviewers_, reviewers) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<Reviewer>> reviewers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
