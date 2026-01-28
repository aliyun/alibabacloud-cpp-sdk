// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINTLFIXEDPRICEORDERLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYINTLFIXEDPRICEORDERLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryIntlFixedPriceOrderListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryIntlFixedPriceOrderListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QueryIntlFixedPriceOrderListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QueryIntlFixedPriceOrderListRequest() = default ;
    QueryIntlFixedPriceOrderListRequest(const QueryIntlFixedPriceOrderListRequest &) = default ;
    QueryIntlFixedPriceOrderListRequest(QueryIntlFixedPriceOrderListRequest &&) = default ;
    QueryIntlFixedPriceOrderListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryIntlFixedPriceOrderListRequest() = default ;
    QueryIntlFixedPriceOrderListRequest& operator=(const QueryIntlFixedPriceOrderListRequest &) = default ;
    QueryIntlFixedPriceOrderListRequest& operator=(QueryIntlFixedPriceOrderListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline QueryIntlFixedPriceOrderListRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline QueryIntlFixedPriceOrderListRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryIntlFixedPriceOrderListRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline QueryIntlFixedPriceOrderListRequest& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<int64_t> currentPage_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<int64_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
