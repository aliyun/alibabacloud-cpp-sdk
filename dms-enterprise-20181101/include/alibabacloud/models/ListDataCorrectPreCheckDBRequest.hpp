// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACORRECTPRECHECKDBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACORRECTPRECHECKDBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDataCorrectPreCheckDBRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCorrectPreCheckDBRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCorrectPreCheckDBRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListDataCorrectPreCheckDBRequest() = default ;
    ListDataCorrectPreCheckDBRequest(const ListDataCorrectPreCheckDBRequest &) = default ;
    ListDataCorrectPreCheckDBRequest(ListDataCorrectPreCheckDBRequest &&) = default ;
    ListDataCorrectPreCheckDBRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCorrectPreCheckDBRequest() = default ;
    ListDataCorrectPreCheckDBRequest& operator=(const ListDataCorrectPreCheckDBRequest &) = default ;
    ListDataCorrectPreCheckDBRequest& operator=(ListDataCorrectPreCheckDBRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->tid_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ListDataCorrectPreCheckDBRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListDataCorrectPreCheckDBRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListDataCorrectPreCheckDBRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListDataCorrectPreCheckDBRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the ticket for the data change.
    // 
    // This parameter is required.
    shared_ptr<int64_t> orderId_ {};
    // The number of the page to return.
    // 
    // Valid values: an integer that is greater than 0.
    // 
    // Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries to return on each page.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the ID of the tenant.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
