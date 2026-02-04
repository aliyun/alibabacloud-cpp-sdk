// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(EndTimeBegin, endTimeBegin_);
      DARABONBA_PTR_TO_JSON(EndTimeEnd, endTimeEnd_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(StatusList, statusListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(EndTimeBegin, endTimeBegin_);
      DARABONBA_PTR_FROM_JSON(EndTimeEnd, endTimeEnd_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusListShrink_);
    };
    ListAppInstancesShrinkRequest() = default ;
    ListAppInstancesShrinkRequest(const ListAppInstancesShrinkRequest &) = default ;
    ListAppInstancesShrinkRequest(ListAppInstancesShrinkRequest &&) = default ;
    ListAppInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstancesShrinkRequest() = default ;
    ListAppInstancesShrinkRequest& operator=(const ListAppInstancesShrinkRequest &) = default ;
    ListAppInstancesShrinkRequest& operator=(ListAppInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->endTimeBegin_ == nullptr && this->endTimeEnd_ == nullptr && this->extend_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->orderColumn_ == nullptr && this->orderType_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->query_ == nullptr
        && this->statusListShrink_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline ListAppInstancesShrinkRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // endTimeBegin Field Functions 
    bool hasEndTimeBegin() const { return this->endTimeBegin_ != nullptr;};
    void deleteEndTimeBegin() { this->endTimeBegin_ = nullptr;};
    inline string getEndTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(endTimeBegin_, "") };
    inline ListAppInstancesShrinkRequest& setEndTimeBegin(string endTimeBegin) { DARABONBA_PTR_SET_VALUE(endTimeBegin_, endTimeBegin) };


    // endTimeEnd Field Functions 
    bool hasEndTimeEnd() const { return this->endTimeEnd_ != nullptr;};
    void deleteEndTimeEnd() { this->endTimeEnd_ = nullptr;};
    inline string getEndTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(endTimeEnd_, "") };
    inline ListAppInstancesShrinkRequest& setEndTimeEnd(string endTimeEnd) { DARABONBA_PTR_SET_VALUE(endTimeEnd_, endTimeEnd) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline ListAppInstancesShrinkRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAppInstancesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAppInstancesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderColumn Field Functions 
    bool hasOrderColumn() const { return this->orderColumn_ != nullptr;};
    void deleteOrderColumn() { this->orderColumn_ = nullptr;};
    inline string getOrderColumn() const { DARABONBA_PTR_GET_DEFAULT(orderColumn_, "") };
    inline ListAppInstancesShrinkRequest& setOrderColumn(string orderColumn) { DARABONBA_PTR_SET_VALUE(orderColumn_, orderColumn) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListAppInstancesShrinkRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListAppInstancesShrinkRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppInstancesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListAppInstancesShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // statusListShrink Field Functions 
    bool hasStatusListShrink() const { return this->statusListShrink_ != nullptr;};
    void deleteStatusListShrink() { this->statusListShrink_ = nullptr;};
    inline string getStatusListShrink() const { DARABONBA_PTR_GET_DEFAULT(statusListShrink_, "") };
    inline ListAppInstancesShrinkRequest& setStatusListShrink(string statusListShrink) { DARABONBA_PTR_SET_VALUE(statusListShrink_, statusListShrink) };


  protected:
    // Business ID
    shared_ptr<string> bizId_ {};
    // End time start
    shared_ptr<string> endTimeBegin_ {};
    // End time end
    shared_ptr<string> endTimeEnd_ {};
    // Extended information
    shared_ptr<string> extend_ {};
    // Number of results per query.
    // 
    // Range: 10~100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // Token for the next query. It will be empty if there is no next query.
    shared_ptr<string> nextToken_ {};
    // Order column
    shared_ptr<string> orderColumn_ {};
    // Order type ASC|DESC
    shared_ptr<string> orderType_ {};
    // Page number, default is 1
    shared_ptr<int32_t> pageNum_ {};
    // Page size, default is 10
    shared_ptr<int32_t> pageSize_ {};
    // Query parameter
    shared_ptr<string> query_ {};
    // Status range
    shared_ptr<string> statusListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
