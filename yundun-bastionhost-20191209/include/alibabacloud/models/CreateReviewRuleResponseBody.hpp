// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREVIEWRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEREVIEWRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class CreateReviewRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReviewRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReviewRuleId, reviewRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReviewRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReviewRuleId, reviewRuleId_);
    };
    CreateReviewRuleResponseBody() = default ;
    CreateReviewRuleResponseBody(const CreateReviewRuleResponseBody &) = default ;
    CreateReviewRuleResponseBody(CreateReviewRuleResponseBody &&) = default ;
    CreateReviewRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReviewRuleResponseBody() = default ;
    CreateReviewRuleResponseBody& operator=(const CreateReviewRuleResponseBody &) = default ;
    CreateReviewRuleResponseBody& operator=(CreateReviewRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->reviewRuleId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateReviewRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reviewRuleId Field Functions 
    bool hasReviewRuleId() const { return this->reviewRuleId_ != nullptr;};
    void deleteReviewRuleId() { this->reviewRuleId_ = nullptr;};
    inline string getReviewRuleId() const { DARABONBA_PTR_GET_DEFAULT(reviewRuleId_, "") };
    inline CreateReviewRuleResponseBody& setReviewRuleId(string reviewRuleId) { DARABONBA_PTR_SET_VALUE(reviewRuleId_, reviewRuleId) };


  protected:
    // The unique identifier that Alibaba Cloud generated for the request.
    shared_ptr<string> requestId_ {};
    // The ID of the audit policy.
    shared_ptr<string> reviewRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
