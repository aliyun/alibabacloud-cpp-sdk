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
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->keyword_ != nullptr && this->orderType_ != nullptr && this->resourceGroupId_ != nullptr && this->showSize_ != nullptr && this->status_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListUserCertificateOrderRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListUserCertificateOrderRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListUserCertificateOrderRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListUserCertificateOrderRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int64_t showSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0L) };
    inline ListUserCertificateOrderRequest& setShowSize(int64_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListUserCertificateOrderRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of the page to return.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // The domain name that is bound or the ID of the resource. Fuzzy match is supported.
    std::shared_ptr<string> keyword_ = nullptr;
    // The type of the order. Default value: **CPACK**. Valid values:
    // 
    // *   **CPACK**: virtual resource order. If you set OrderType to CPACK, only the information about orders that are generated to consume the certificate quota is returned.
    // *   **BUY**: purchase order. If you set OrderType to BUY, only the information about purchase orders is returned. In most cases, this type of order can be ignored.
    // *   **UPLOAD**: uploaded certificate. If you set OrderType to UPLOAD, only uploaded certificates are returned.
    // *   **CERT**: certificate. If you set OrderType to CERT, both issued certificates and uploaded certificates are returned.
    std::shared_ptr<string> orderType_ = nullptr;
    // The ID of the resource group. You can call the [ListResources](https://help.aliyun.com/document_detail/2716559.html) operation to obtain the ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The number of entries to return on each page. Default value: 50.
    std::shared_ptr<int64_t> showSize_ = nullptr;
    // The certificate status of the order. Valid values:
    // 
    // *   **PAYED**: pending application. You can set Status to PAYED only if you set OrderType to CPACK or BUY.
    // *   **CHECKING**: validating. You can set Status to CHECKING only if you set OrderType to CPACK or BUY.
    // *   **CHECKED_FAIL**: validation failed. You can set Status to CHECKED_FAIL only if you set OrderType to CPACK or BUY.
    // *   **ISSUED**: issued.
    // *   **WILLEXPIRED**: about to expire.
    // *   **EXPIRED**: expired.
    // *   **NOTACTIVATED**: not activated. You can set Status to NOTACTIVATED only if you set OrderType to CPACK or BUY.
    // *   **REVOKED**: revoked. You can set Status to REVOKED only if you set OrderType to CPACK or BUY.
    // 
    // If you set OrderType to CERT or UPLOAD and Status is left empty, valid certificates are returned by default, including issued certificates and certificates that are about to expire. If you set OrderType to CPACK or BUY and Status is left empty, all orders are returned by default.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
