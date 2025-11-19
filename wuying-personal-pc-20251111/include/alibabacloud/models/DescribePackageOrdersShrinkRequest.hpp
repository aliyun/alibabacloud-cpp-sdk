// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPACKAGEORDERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPACKAGEORDERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class DescribePackageOrdersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePackageOrdersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DesktopIdList, desktopIdListShrink_);
      DARABONBA_PTR_TO_JSON(OrderIdList, orderIdListShrink_);
      DARABONBA_PTR_TO_JSON(OrderStatusList, orderStatusListShrink_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductTypeList, productTypeListShrink_);
      DARABONBA_PTR_TO_JSON(ResourceIdList, resourceIdListShrink_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePackageOrdersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DesktopIdList, desktopIdListShrink_);
      DARABONBA_PTR_FROM_JSON(OrderIdList, orderIdListShrink_);
      DARABONBA_PTR_FROM_JSON(OrderStatusList, orderStatusListShrink_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductTypeList, productTypeListShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceIdList, resourceIdListShrink_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    DescribePackageOrdersShrinkRequest() = default ;
    DescribePackageOrdersShrinkRequest(const DescribePackageOrdersShrinkRequest &) = default ;
    DescribePackageOrdersShrinkRequest(DescribePackageOrdersShrinkRequest &&) = default ;
    DescribePackageOrdersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePackageOrdersShrinkRequest() = default ;
    DescribePackageOrdersShrinkRequest& operator=(const DescribePackageOrdersShrinkRequest &) = default ;
    DescribePackageOrdersShrinkRequest& operator=(DescribePackageOrdersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && return this->currentPage_ == nullptr && return this->desktopIdListShrink_ == nullptr && return this->orderIdListShrink_ == nullptr && return this->orderStatusListShrink_ == nullptr && return this->pageSize_ == nullptr
        && return this->productTypeListShrink_ == nullptr && return this->resourceIdListShrink_ == nullptr && return this->sessionId_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline DescribePackageOrdersShrinkRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline DescribePackageOrdersShrinkRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // desktopIdListShrink Field Functions 
    bool hasDesktopIdListShrink() const { return this->desktopIdListShrink_ != nullptr;};
    void deleteDesktopIdListShrink() { this->desktopIdListShrink_ = nullptr;};
    inline string desktopIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(desktopIdListShrink_, "") };
    inline DescribePackageOrdersShrinkRequest& setDesktopIdListShrink(string desktopIdListShrink) { DARABONBA_PTR_SET_VALUE(desktopIdListShrink_, desktopIdListShrink) };


    // orderIdListShrink Field Functions 
    bool hasOrderIdListShrink() const { return this->orderIdListShrink_ != nullptr;};
    void deleteOrderIdListShrink() { this->orderIdListShrink_ = nullptr;};
    inline string orderIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(orderIdListShrink_, "") };
    inline DescribePackageOrdersShrinkRequest& setOrderIdListShrink(string orderIdListShrink) { DARABONBA_PTR_SET_VALUE(orderIdListShrink_, orderIdListShrink) };


    // orderStatusListShrink Field Functions 
    bool hasOrderStatusListShrink() const { return this->orderStatusListShrink_ != nullptr;};
    void deleteOrderStatusListShrink() { this->orderStatusListShrink_ = nullptr;};
    inline string orderStatusListShrink() const { DARABONBA_PTR_GET_DEFAULT(orderStatusListShrink_, "") };
    inline DescribePackageOrdersShrinkRequest& setOrderStatusListShrink(string orderStatusListShrink) { DARABONBA_PTR_SET_VALUE(orderStatusListShrink_, orderStatusListShrink) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribePackageOrdersShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productTypeListShrink Field Functions 
    bool hasProductTypeListShrink() const { return this->productTypeListShrink_ != nullptr;};
    void deleteProductTypeListShrink() { this->productTypeListShrink_ = nullptr;};
    inline string productTypeListShrink() const { DARABONBA_PTR_GET_DEFAULT(productTypeListShrink_, "") };
    inline DescribePackageOrdersShrinkRequest& setProductTypeListShrink(string productTypeListShrink) { DARABONBA_PTR_SET_VALUE(productTypeListShrink_, productTypeListShrink) };


    // resourceIdListShrink Field Functions 
    bool hasResourceIdListShrink() const { return this->resourceIdListShrink_ != nullptr;};
    void deleteResourceIdListShrink() { this->resourceIdListShrink_ = nullptr;};
    inline string resourceIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceIdListShrink_, "") };
    inline DescribePackageOrdersShrinkRequest& setResourceIdListShrink(string resourceIdListShrink) { DARABONBA_PTR_SET_VALUE(resourceIdListShrink_, resourceIdListShrink) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribePackageOrdersShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    std::shared_ptr<string> desktopIdListShrink_ = nullptr;
    std::shared_ptr<string> orderIdListShrink_ = nullptr;
    std::shared_ptr<string> orderStatusListShrink_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> productTypeListShrink_ = nullptr;
    std::shared_ptr<string> resourceIdListShrink_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
