// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCINVOKEREVIEWLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_PBCINVOKEREVIEWLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PbcInvokeReview.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcInvokeReviewListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcInvokeReviewListResult& obj) { 
      DARABONBA_PTR_TO_JSON(pbcInvokeReviews, pbcInvokeReviews_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PbcInvokeReviewListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(pbcInvokeReviews, pbcInvokeReviews_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    PbcInvokeReviewListResult() = default ;
    PbcInvokeReviewListResult(const PbcInvokeReviewListResult &) = default ;
    PbcInvokeReviewListResult(PbcInvokeReviewListResult &&) = default ;
    PbcInvokeReviewListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcInvokeReviewListResult() = default ;
    PbcInvokeReviewListResult& operator=(const PbcInvokeReviewListResult &) = default ;
    PbcInvokeReviewListResult& operator=(PbcInvokeReviewListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pbcInvokeReviews_ == nullptr
        && this->requestId_ == nullptr; };
    // pbcInvokeReviews Field Functions 
    bool hasPbcInvokeReviews() const { return this->pbcInvokeReviews_ != nullptr;};
    void deletePbcInvokeReviews() { this->pbcInvokeReviews_ = nullptr;};
    inline const vector<PbcInvokeReview> & getPbcInvokeReviews() const { DARABONBA_PTR_GET_CONST(pbcInvokeReviews_, vector<PbcInvokeReview>) };
    inline vector<PbcInvokeReview> getPbcInvokeReviews() { DARABONBA_PTR_GET(pbcInvokeReviews_, vector<PbcInvokeReview>) };
    inline PbcInvokeReviewListResult& setPbcInvokeReviews(const vector<PbcInvokeReview> & pbcInvokeReviews) { DARABONBA_PTR_SET_VALUE(pbcInvokeReviews_, pbcInvokeReviews) };
    inline PbcInvokeReviewListResult& setPbcInvokeReviews(vector<PbcInvokeReview> && pbcInvokeReviews) { DARABONBA_PTR_SET_RVALUE(pbcInvokeReviews_, pbcInvokeReviews) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PbcInvokeReviewListResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<PbcInvokeReview>> pbcInvokeReviews_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
