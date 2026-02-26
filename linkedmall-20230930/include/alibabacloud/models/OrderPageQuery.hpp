// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERPAGEQUERY_HPP_
#define ALIBABACLOUD_MODELS_ORDERPAGEQUERY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class OrderPageQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderPageQuery& obj) { 
      DARABONBA_PTR_TO_JSON(orderIdList, orderIdList_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(purchaseOrderId, purchaseOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, OrderPageQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(orderIdList, orderIdList_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(purchaseOrderId, purchaseOrderId_);
    };
    OrderPageQuery() = default ;
    OrderPageQuery(const OrderPageQuery &) = default ;
    OrderPageQuery(OrderPageQuery &&) = default ;
    OrderPageQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderPageQuery() = default ;
    OrderPageQuery& operator=(const OrderPageQuery &) = default ;
    OrderPageQuery& operator=(OrderPageQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderIdList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->purchaseOrderId_ == nullptr; };
    // orderIdList Field Functions 
    bool hasOrderIdList() const { return this->orderIdList_ != nullptr;};
    void deleteOrderIdList() { this->orderIdList_ = nullptr;};
    inline const vector<string> & getOrderIdList() const { DARABONBA_PTR_GET_CONST(orderIdList_, vector<string>) };
    inline vector<string> getOrderIdList() { DARABONBA_PTR_GET(orderIdList_, vector<string>) };
    inline OrderPageQuery& setOrderIdList(const vector<string> & orderIdList) { DARABONBA_PTR_SET_VALUE(orderIdList_, orderIdList) };
    inline OrderPageQuery& setOrderIdList(vector<string> && orderIdList) { DARABONBA_PTR_SET_RVALUE(orderIdList_, orderIdList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline OrderPageQuery& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline OrderPageQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // purchaseOrderId Field Functions 
    bool hasPurchaseOrderId() const { return this->purchaseOrderId_ != nullptr;};
    void deletePurchaseOrderId() { this->purchaseOrderId_ = nullptr;};
    inline string getPurchaseOrderId() const { DARABONBA_PTR_GET_DEFAULT(purchaseOrderId_, "") };
    inline OrderPageQuery& setPurchaseOrderId(string purchaseOrderId) { DARABONBA_PTR_SET_VALUE(purchaseOrderId_, purchaseOrderId) };


  protected:
    shared_ptr<vector<string>> orderIdList_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> purchaseOrderId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
