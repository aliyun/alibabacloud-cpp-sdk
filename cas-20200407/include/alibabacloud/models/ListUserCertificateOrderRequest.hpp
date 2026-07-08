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
    // The page number. Default value: 1.
    shared_ptr<int64_t> currentPage_ {};
    // Performs a fuzzy query. The keyword can be a domain name or a resource ID.
    shared_ptr<string> keyword_ {};
    // The resource type. Default value: **CPACK**. Valid values:
    // 
    // - **CPACK**: An order for a resource plan. Only orders created from a resource plan are returned.
    // 
    // - **BUY**: A direct purchase. Only orders created from direct purchases are returned. You can ignore this type in most cases.
    // 
    // - **UPLOAD**: An uploaded certificate. Only uploaded certificates are returned.
    // 
    // - **CERT**: A certificate. Both issued and uploaded certificates are returned.
    shared_ptr<string> orderType_ {};
    // The ID of the resource group. For more information, see [ListResources](https://help.aliyun.com/document_detail/2716559.html).
    shared_ptr<string> resourceGroupId_ {};
    // The number of entries to return on each page. Default value: 50.
    shared_ptr<int64_t> showSize_ {};
    // The status of the order. Valid values:
    // 
    // - **PAYED**: The certificate is pending application. This value is valid only when OrderType is set to CPACK or BUY.
    // 
    // - **CHECKING**: The certificate is under review. This value is valid only when OrderType is set to CPACK or BUY.
    // 
    // - **CHECKED_FAIL**: The review failed. This value is valid only when OrderType is set to CPACK or BUY.
    // 
    // - **ISSUED**: The certificate is issued.
    // 
    // - **WILLEXPIRED**: The certificate is about to expire.
    // 
    // - **EXPIRED**: The certificate has expired.
    // 
    // - **NOTACTIVATED**: The certificate is not activated. This value is valid only when OrderType is set to CPACK or BUY.
    // 
    // - **REVOKED**: The certificate is revoked. This value is valid only when OrderType is set to CPACK or BUY.
    // 
    // If OrderType is CERT or UPLOAD and you leave this parameter empty, active certificates are returned by default. Active certificates are those in the ISSUED or WILLEXPIRED state. If OrderType is CPACK or BUY and you leave this parameter empty, all orders are returned by default.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
