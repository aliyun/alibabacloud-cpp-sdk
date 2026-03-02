// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPBCREVIEWSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPBCREVIEWSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListPbcReviewsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPbcReviewsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applicant, applicant_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(reviewer, reviewer_);
    };
    friend void from_json(const Darabonba::Json& j, ListPbcReviewsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicant, applicant_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(reviewer, reviewer_);
    };
    ListPbcReviewsRequest() = default ;
    ListPbcReviewsRequest(const ListPbcReviewsRequest &) = default ;
    ListPbcReviewsRequest(ListPbcReviewsRequest &&) = default ;
    ListPbcReviewsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPbcReviewsRequest() = default ;
    ListPbcReviewsRequest& operator=(const ListPbcReviewsRequest &) = default ;
    ListPbcReviewsRequest& operator=(ListPbcReviewsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicant_ == nullptr
        && this->marketId_ == nullptr && this->orderBy_ == nullptr && this->orderDirection_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->reviewer_ == nullptr; };
    // applicant Field Functions 
    bool hasApplicant() const { return this->applicant_ != nullptr;};
    void deleteApplicant() { this->applicant_ = nullptr;};
    inline string getApplicant() const { DARABONBA_PTR_GET_DEFAULT(applicant_, "") };
    inline ListPbcReviewsRequest& setApplicant(string applicant) { DARABONBA_PTR_SET_VALUE(applicant_, applicant) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline ListPbcReviewsRequest& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline int32_t getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, 0) };
    inline ListPbcReviewsRequest& setOrderBy(int32_t orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline int32_t getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, 0) };
    inline ListPbcReviewsRequest& setOrderDirection(int32_t orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListPbcReviewsRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListPbcReviewsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reviewer Field Functions 
    bool hasReviewer() const { return this->reviewer_ != nullptr;};
    void deleteReviewer() { this->reviewer_ = nullptr;};
    inline string getReviewer() const { DARABONBA_PTR_GET_DEFAULT(reviewer_, "") };
    inline ListPbcReviewsRequest& setReviewer(string reviewer) { DARABONBA_PTR_SET_VALUE(reviewer_, reviewer) };


  protected:
    shared_ptr<string> applicant_ {};
    // This parameter is required.
    shared_ptr<int64_t> marketId_ {};
    shared_ptr<int32_t> orderBy_ {};
    shared_ptr<int32_t> orderDirection_ {};
    shared_ptr<string> pageNumber_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> reviewer_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
