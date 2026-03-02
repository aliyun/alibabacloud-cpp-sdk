// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPBCINVOKEREVIEWSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPBCINVOKEREVIEWSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListPbcInvokeReviewsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPbcInvokeReviewsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applicant, applicant_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(orderby, orderby_);
      DARABONBA_PTR_TO_JSON(reviewer, reviewer_);
    };
    friend void from_json(const Darabonba::Json& j, ListPbcInvokeReviewsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicant, applicant_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(orderby, orderby_);
      DARABONBA_PTR_FROM_JSON(reviewer, reviewer_);
    };
    ListPbcInvokeReviewsRequest() = default ;
    ListPbcInvokeReviewsRequest(const ListPbcInvokeReviewsRequest &) = default ;
    ListPbcInvokeReviewsRequest(ListPbcInvokeReviewsRequest &&) = default ;
    ListPbcInvokeReviewsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPbcInvokeReviewsRequest() = default ;
    ListPbcInvokeReviewsRequest& operator=(const ListPbcInvokeReviewsRequest &) = default ;
    ListPbcInvokeReviewsRequest& operator=(ListPbcInvokeReviewsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicant_ == nullptr
        && this->companyId_ == nullptr && this->marketId_ == nullptr && this->orderDirection_ == nullptr && this->orderby_ == nullptr && this->reviewer_ == nullptr; };
    // applicant Field Functions 
    bool hasApplicant() const { return this->applicant_ != nullptr;};
    void deleteApplicant() { this->applicant_ = nullptr;};
    inline string getApplicant() const { DARABONBA_PTR_GET_DEFAULT(applicant_, "") };
    inline ListPbcInvokeReviewsRequest& setApplicant(string applicant) { DARABONBA_PTR_SET_VALUE(applicant_, applicant) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline ListPbcInvokeReviewsRequest& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline ListPbcInvokeReviewsRequest& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline int32_t getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, 0) };
    inline ListPbcInvokeReviewsRequest& setOrderDirection(int32_t orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // orderby Field Functions 
    bool hasOrderby() const { return this->orderby_ != nullptr;};
    void deleteOrderby() { this->orderby_ = nullptr;};
    inline int32_t getOrderby() const { DARABONBA_PTR_GET_DEFAULT(orderby_, 0) };
    inline ListPbcInvokeReviewsRequest& setOrderby(int32_t orderby) { DARABONBA_PTR_SET_VALUE(orderby_, orderby) };


    // reviewer Field Functions 
    bool hasReviewer() const { return this->reviewer_ != nullptr;};
    void deleteReviewer() { this->reviewer_ = nullptr;};
    inline string getReviewer() const { DARABONBA_PTR_GET_DEFAULT(reviewer_, "") };
    inline ListPbcInvokeReviewsRequest& setReviewer(string reviewer) { DARABONBA_PTR_SET_VALUE(reviewer_, reviewer) };


  protected:
    shared_ptr<string> applicant_ {};
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<int64_t> marketId_ {};
    shared_ptr<int32_t> orderDirection_ {};
    shared_ptr<int32_t> orderby_ {};
    shared_ptr<string> reviewer_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
