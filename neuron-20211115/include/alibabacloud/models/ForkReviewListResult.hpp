// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FORKREVIEWLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_FORKREVIEWLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ForkReview.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ForkReviewListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ForkReviewListResult& obj) { 
      DARABONBA_PTR_TO_JSON(forkReviews, forkReviews_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ForkReviewListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(forkReviews, forkReviews_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ForkReviewListResult() = default ;
    ForkReviewListResult(const ForkReviewListResult &) = default ;
    ForkReviewListResult(ForkReviewListResult &&) = default ;
    ForkReviewListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ForkReviewListResult() = default ;
    ForkReviewListResult& operator=(const ForkReviewListResult &) = default ;
    ForkReviewListResult& operator=(ForkReviewListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forkReviews_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // forkReviews Field Functions 
    bool hasForkReviews() const { return this->forkReviews_ != nullptr;};
    void deleteForkReviews() { this->forkReviews_ = nullptr;};
    inline const vector<ForkReview> & getForkReviews() const { DARABONBA_PTR_GET_CONST(forkReviews_, vector<ForkReview>) };
    inline vector<ForkReview> getForkReviews() { DARABONBA_PTR_GET(forkReviews_, vector<ForkReview>) };
    inline ForkReviewListResult& setForkReviews(const vector<ForkReview> & forkReviews) { DARABONBA_PTR_SET_VALUE(forkReviews_, forkReviews) };
    inline ForkReviewListResult& setForkReviews(vector<ForkReview> && forkReviews) { DARABONBA_PTR_SET_RVALUE(forkReviews_, forkReviews) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ForkReviewListResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ForkReviewListResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<ForkReview>> forkReviews_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
