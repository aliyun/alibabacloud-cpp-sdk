// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FEEDBACKLIBRARYREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FEEDBACKLIBRARYREVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class FeedbackLibraryReviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FeedbackLibraryReviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(approve, approve_);
      DARABONBA_PTR_TO_JSON(feedback, feedback_);
      DARABONBA_PTR_TO_JSON(reviewId, reviewId_);
    };
    friend void from_json(const Darabonba::Json& j, FeedbackLibraryReviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(approve, approve_);
      DARABONBA_PTR_FROM_JSON(feedback, feedback_);
      DARABONBA_PTR_FROM_JSON(reviewId, reviewId_);
    };
    FeedbackLibraryReviewRequest() = default ;
    FeedbackLibraryReviewRequest(const FeedbackLibraryReviewRequest &) = default ;
    FeedbackLibraryReviewRequest(FeedbackLibraryReviewRequest &&) = default ;
    FeedbackLibraryReviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FeedbackLibraryReviewRequest() = default ;
    FeedbackLibraryReviewRequest& operator=(const FeedbackLibraryReviewRequest &) = default ;
    FeedbackLibraryReviewRequest& operator=(FeedbackLibraryReviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approve_ == nullptr
        && this->feedback_ == nullptr && this->reviewId_ == nullptr; };
    // approve Field Functions 
    bool hasApprove() const { return this->approve_ != nullptr;};
    void deleteApprove() { this->approve_ = nullptr;};
    inline string getApprove() const { DARABONBA_PTR_GET_DEFAULT(approve_, "") };
    inline FeedbackLibraryReviewRequest& setApprove(string approve) { DARABONBA_PTR_SET_VALUE(approve_, approve) };


    // feedback Field Functions 
    bool hasFeedback() const { return this->feedback_ != nullptr;};
    void deleteFeedback() { this->feedback_ = nullptr;};
    inline string getFeedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, "") };
    inline FeedbackLibraryReviewRequest& setFeedback(string feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


    // reviewId Field Functions 
    bool hasReviewId() const { return this->reviewId_ != nullptr;};
    void deleteReviewId() { this->reviewId_ = nullptr;};
    inline int64_t getReviewId() const { DARABONBA_PTR_GET_DEFAULT(reviewId_, 0L) };
    inline FeedbackLibraryReviewRequest& setReviewId(int64_t reviewId) { DARABONBA_PTR_SET_VALUE(reviewId_, reviewId) };


  protected:
    shared_ptr<string> approve_ {};
    shared_ptr<string> feedback_ {};
    shared_ptr<int64_t> reviewId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
