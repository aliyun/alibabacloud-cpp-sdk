// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FEEDBACKPBCREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FEEDBACKPBCREVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FeedbackReviewCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class FeedbackPbcReviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FeedbackPbcReviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, FeedbackPbcReviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    FeedbackPbcReviewRequest() = default ;
    FeedbackPbcReviewRequest(const FeedbackPbcReviewRequest &) = default ;
    FeedbackPbcReviewRequest(FeedbackPbcReviewRequest &&) = default ;
    FeedbackPbcReviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FeedbackPbcReviewRequest() = default ;
    FeedbackPbcReviewRequest& operator=(const FeedbackPbcReviewRequest &) = default ;
    FeedbackPbcReviewRequest& operator=(FeedbackPbcReviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const FeedbackReviewCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, FeedbackReviewCmd) };
    inline FeedbackReviewCmd getBody() { DARABONBA_PTR_GET(body_, FeedbackReviewCmd) };
    inline FeedbackPbcReviewRequest& setBody(const FeedbackReviewCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline FeedbackPbcReviewRequest& setBody(FeedbackReviewCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<FeedbackReviewCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
