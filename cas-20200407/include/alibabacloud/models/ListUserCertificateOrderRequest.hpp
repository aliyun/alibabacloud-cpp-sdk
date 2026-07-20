// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERCERTIFICATEORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERCERTIFICATEORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListUserCertificateOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserCertificateOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserCertificateOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListUserCertificateOrderRequest() = default ;
    ListUserCertificateOrderRequest(const ListUserCertificateOrderRequest &) = default ;
    ListUserCertificateOrderRequest(ListUserCertificateOrderRequest &&) = default ;
    ListUserCertificateOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserCertificateOrderRequest() = default ;
    ListUserCertificateOrderRequest& operator=(const ListUserCertificateOrderRequest &) = default ;
    ListUserCertificateOrderRequest& operator=(ListUserCertificateOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->keyword_ == nullptr && this->orderType_ == nullptr && this->resourceGroupId_ == nullptr && this->showSize_ == nullptr && this->status_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListUserCertificateOrderRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListUserCertificateOrderRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListUserCertificateOrderRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListUserCertificateOrderRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int64_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0L) };
    inline ListUserCertificateOrderRequest& setShowSize(int64_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListUserCertificateOrderRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The page number of the current page in a paginated query.
    shared_ptr<int64_t> currentPage_ {};
    // The keyword for fuzzy search. Matches the domain name or the corresponding resource ID.
    shared_ptr<string> keyword_ {};
    // The resource type. Default value: **CPACK**. Valid values:
    // 
    // - **CPACK**: resource virtual order. Only orders generated from quotas are returned.
    // - **BUY**: purchase order. Only orders generated from purchases are returned. You can ignore this type in most cases.
    // - **UPLOAD**: uploaded certificate. Only uploaded certificates are returned.
    // - **CERT**: certificate. Both issued certificates and uploaded certificates are returned.
    shared_ptr<string> orderType_ {};
    // The resource group ID. You can obtain this ID by calling the [ListResources](https://help.aliyun.com/document_detail/2716559.html) operation.
    shared_ptr<string> resourceGroupId_ {};
    // The number of entries per page in a paginated query. Default value: 50.
    shared_ptr<int64_t> showSize_ {};
    // The order status. Valid values:
    // 
    // - **PAYED**: Pending application. Valid when OrderType is set to CPACK or BUY.
    // - **CHECKING**: Under review. Valid when OrderType is set to CPACK or BUY.
    // - **CHECKED_FAIL**: Review failed. Valid when OrderType is set to CPACK or BUY.
    // - **ISSUED**: Issued.
    // - **WILLEXPIRED**: About to expire.
    // - **EXPIRED**: Expired.
    // - **NOTACTIVATED**: Not activated. Valid when OrderType is set to CPACK or BUY.
    // - **REVOKED**: Revoked. Valid when OrderType is set to CPACK or BUY.
    // 
    // If OrderType is set to CERT or UPLOAD and Status is empty, valid certificates are returned by default, including issued and about-to-expire certificates. If OrderType is set to CPACK or BUY and Status is empty, all orders are returned by default.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
