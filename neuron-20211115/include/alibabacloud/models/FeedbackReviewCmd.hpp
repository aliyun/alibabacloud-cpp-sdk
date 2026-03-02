// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FEEDBACKREVIEWCMD_HPP_
#define ALIBABACLOUD_MODELS_FEEDBACKREVIEWCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class FeedbackReviewCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FeedbackReviewCmd& obj) { 
      DARABONBA_PTR_TO_JSON(feedbackPbcAPI, feedbackPbcAPI_);
      DARABONBA_PTR_TO_JSON(feedbackPbcInstruction, feedbackPbcInstruction_);
      DARABONBA_PTR_TO_JSON(feedbackPbcSchema, feedbackPbcSchema_);
      DARABONBA_PTR_TO_JSON(feedbackSecurity, feedbackSecurity_);
      DARABONBA_PTR_TO_JSON(feedbackServiceAvailable, feedbackServiceAvailable_);
      DARABONBA_PTR_TO_JSON(reviewId, reviewId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, FeedbackReviewCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(feedbackPbcAPI, feedbackPbcAPI_);
      DARABONBA_PTR_FROM_JSON(feedbackPbcInstruction, feedbackPbcInstruction_);
      DARABONBA_PTR_FROM_JSON(feedbackPbcSchema, feedbackPbcSchema_);
      DARABONBA_PTR_FROM_JSON(feedbackSecurity, feedbackSecurity_);
      DARABONBA_PTR_FROM_JSON(feedbackServiceAvailable, feedbackServiceAvailable_);
      DARABONBA_PTR_FROM_JSON(reviewId, reviewId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    FeedbackReviewCmd() = default ;
    FeedbackReviewCmd(const FeedbackReviewCmd &) = default ;
    FeedbackReviewCmd(FeedbackReviewCmd &&) = default ;
    FeedbackReviewCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FeedbackReviewCmd() = default ;
    FeedbackReviewCmd& operator=(const FeedbackReviewCmd &) = default ;
    FeedbackReviewCmd& operator=(FeedbackReviewCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->feedbackPbcAPI_ == nullptr
        && this->feedbackPbcInstruction_ == nullptr && this->feedbackPbcSchema_ == nullptr && this->feedbackSecurity_ == nullptr && this->feedbackServiceAvailable_ == nullptr && this->reviewId_ == nullptr
        && this->status_ == nullptr; };
    // feedbackPbcAPI Field Functions 
    bool hasFeedbackPbcAPI() const { return this->feedbackPbcAPI_ != nullptr;};
    void deleteFeedbackPbcAPI() { this->feedbackPbcAPI_ = nullptr;};
    inline string getFeedbackPbcAPI() const { DARABONBA_PTR_GET_DEFAULT(feedbackPbcAPI_, "") };
    inline FeedbackReviewCmd& setFeedbackPbcAPI(string feedbackPbcAPI) { DARABONBA_PTR_SET_VALUE(feedbackPbcAPI_, feedbackPbcAPI) };


    // feedbackPbcInstruction Field Functions 
    bool hasFeedbackPbcInstruction() const { return this->feedbackPbcInstruction_ != nullptr;};
    void deleteFeedbackPbcInstruction() { this->feedbackPbcInstruction_ = nullptr;};
    inline string getFeedbackPbcInstruction() const { DARABONBA_PTR_GET_DEFAULT(feedbackPbcInstruction_, "") };
    inline FeedbackReviewCmd& setFeedbackPbcInstruction(string feedbackPbcInstruction) { DARABONBA_PTR_SET_VALUE(feedbackPbcInstruction_, feedbackPbcInstruction) };


    // feedbackPbcSchema Field Functions 
    bool hasFeedbackPbcSchema() const { return this->feedbackPbcSchema_ != nullptr;};
    void deleteFeedbackPbcSchema() { this->feedbackPbcSchema_ = nullptr;};
    inline string getFeedbackPbcSchema() const { DARABONBA_PTR_GET_DEFAULT(feedbackPbcSchema_, "") };
    inline FeedbackReviewCmd& setFeedbackPbcSchema(string feedbackPbcSchema) { DARABONBA_PTR_SET_VALUE(feedbackPbcSchema_, feedbackPbcSchema) };


    // feedbackSecurity Field Functions 
    bool hasFeedbackSecurity() const { return this->feedbackSecurity_ != nullptr;};
    void deleteFeedbackSecurity() { this->feedbackSecurity_ = nullptr;};
    inline string getFeedbackSecurity() const { DARABONBA_PTR_GET_DEFAULT(feedbackSecurity_, "") };
    inline FeedbackReviewCmd& setFeedbackSecurity(string feedbackSecurity) { DARABONBA_PTR_SET_VALUE(feedbackSecurity_, feedbackSecurity) };


    // feedbackServiceAvailable Field Functions 
    bool hasFeedbackServiceAvailable() const { return this->feedbackServiceAvailable_ != nullptr;};
    void deleteFeedbackServiceAvailable() { this->feedbackServiceAvailable_ = nullptr;};
    inline string getFeedbackServiceAvailable() const { DARABONBA_PTR_GET_DEFAULT(feedbackServiceAvailable_, "") };
    inline FeedbackReviewCmd& setFeedbackServiceAvailable(string feedbackServiceAvailable) { DARABONBA_PTR_SET_VALUE(feedbackServiceAvailable_, feedbackServiceAvailable) };


    // reviewId Field Functions 
    bool hasReviewId() const { return this->reviewId_ != nullptr;};
    void deleteReviewId() { this->reviewId_ = nullptr;};
    inline int64_t getReviewId() const { DARABONBA_PTR_GET_DEFAULT(reviewId_, 0L) };
    inline FeedbackReviewCmd& setReviewId(int64_t reviewId) { DARABONBA_PTR_SET_VALUE(reviewId_, reviewId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline FeedbackReviewCmd& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // This parameter is required.
    shared_ptr<string> feedbackPbcAPI_ {};
    // This parameter is required.
    shared_ptr<string> feedbackPbcInstruction_ {};
    // This parameter is required.
    shared_ptr<string> feedbackPbcSchema_ {};
    // This parameter is required.
    shared_ptr<string> feedbackSecurity_ {};
    // This parameter is required.
    shared_ptr<string> feedbackServiceAvailable_ {};
    // This parameter is required.
    shared_ptr<int64_t> reviewId_ {};
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
