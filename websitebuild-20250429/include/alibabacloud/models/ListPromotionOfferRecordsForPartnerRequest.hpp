// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMOTIONOFFERRECORDSFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMOTIONOFFERRECORDSFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListPromotionOfferRecordsForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPromotionOfferRecordsForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityCode, activityCode_);
      DARABONBA_PTR_TO_JSON(BelongId, belongId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListPromotionOfferRecordsForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityCode, activityCode_);
      DARABONBA_PTR_FROM_JSON(BelongId, belongId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListPromotionOfferRecordsForPartnerRequest() = default ;
    ListPromotionOfferRecordsForPartnerRequest(const ListPromotionOfferRecordsForPartnerRequest &) = default ;
    ListPromotionOfferRecordsForPartnerRequest(ListPromotionOfferRecordsForPartnerRequest &&) = default ;
    ListPromotionOfferRecordsForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPromotionOfferRecordsForPartnerRequest() = default ;
    ListPromotionOfferRecordsForPartnerRequest& operator=(const ListPromotionOfferRecordsForPartnerRequest &) = default ;
    ListPromotionOfferRecordsForPartnerRequest& operator=(ListPromotionOfferRecordsForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityCode_ == nullptr
        && this->belongId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->orderColumn_ == nullptr && this->orderType_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr; };
    // activityCode Field Functions 
    bool hasActivityCode() const { return this->activityCode_ != nullptr;};
    void deleteActivityCode() { this->activityCode_ = nullptr;};
    inline string getActivityCode() const { DARABONBA_PTR_GET_DEFAULT(activityCode_, "") };
    inline ListPromotionOfferRecordsForPartnerRequest& setActivityCode(string activityCode) { DARABONBA_PTR_SET_VALUE(activityCode_, activityCode) };


    // belongId Field Functions 
    bool hasBelongId() const { return this->belongId_ != nullptr;};
    void deleteBelongId() { this->belongId_ = nullptr;};
    inline string getBelongId() const { DARABONBA_PTR_GET_DEFAULT(belongId_, "") };
    inline ListPromotionOfferRecordsForPartnerRequest& setBelongId(string belongId) { DARABONBA_PTR_SET_VALUE(belongId_, belongId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPromotionOfferRecordsForPartnerRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPromotionOfferRecordsForPartnerRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderColumn Field Functions 
    bool hasOrderColumn() const { return this->orderColumn_ != nullptr;};
    void deleteOrderColumn() { this->orderColumn_ = nullptr;};
    inline string getOrderColumn() const { DARABONBA_PTR_GET_DEFAULT(orderColumn_, "") };
    inline ListPromotionOfferRecordsForPartnerRequest& setOrderColumn(string orderColumn) { DARABONBA_PTR_SET_VALUE(orderColumn_, orderColumn) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListPromotionOfferRecordsForPartnerRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListPromotionOfferRecordsForPartnerRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPromotionOfferRecordsForPartnerRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The activity code.
    shared_ptr<string> activityCode_ {};
    // The belonging ID.
    shared_ptr<string> belongId_ {};
    // The number of entries per query.
    // 
    // Valid values: 10 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. This parameter is empty if no more results exist.
    shared_ptr<string> nextToken_ {};
    // The field used for sorting.
    shared_ptr<string> orderColumn_ {};
    // The sort type. Valid values: ASC and DESC.
    shared_ptr<string> orderType_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
