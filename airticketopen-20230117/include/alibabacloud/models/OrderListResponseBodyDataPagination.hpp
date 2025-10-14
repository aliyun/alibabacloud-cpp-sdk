// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERLISTRESPONSEBODYDATAPAGINATION_HPP_
#define ALIBABACLOUD_MODELS_ORDERLISTRESPONSEBODYDATAPAGINATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class OrderListResponseBodyDataPagination : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderListResponseBodyDataPagination& obj) { 
      DARABONBA_PTR_TO_JSON(current_page, currentPage_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(total_count, totalCount_);
      DARABONBA_PTR_TO_JSON(total_page, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, OrderListResponseBodyDataPagination& obj) { 
      DARABONBA_PTR_FROM_JSON(current_page, currentPage_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(total_count, totalCount_);
      DARABONBA_PTR_FROM_JSON(total_page, totalPage_);
    };
    OrderListResponseBodyDataPagination() = default ;
    OrderListResponseBodyDataPagination(const OrderListResponseBodyDataPagination &) = default ;
    OrderListResponseBodyDataPagination(OrderListResponseBodyDataPagination &&) = default ;
    OrderListResponseBodyDataPagination(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderListResponseBodyDataPagination() = default ;
    OrderListResponseBodyDataPagination& operator=(const OrderListResponseBodyDataPagination &) = default ;
    OrderListResponseBodyDataPagination& operator=(OrderListResponseBodyDataPagination &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr && return this->totalPage_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline OrderListResponseBodyDataPagination& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline OrderListResponseBodyDataPagination& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline OrderListResponseBodyDataPagination& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline OrderListResponseBodyDataPagination& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // current page index
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // page size
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // the number of total orders
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // the number of total pages
    std::shared_ptr<int32_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
