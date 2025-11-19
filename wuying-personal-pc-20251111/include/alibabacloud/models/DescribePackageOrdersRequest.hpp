// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPACKAGEORDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPACKAGEORDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class DescribePackageOrdersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePackageOrdersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DesktopIdList, desktopIdList_);
      DARABONBA_PTR_TO_JSON(OrderIdList, orderIdList_);
      DARABONBA_PTR_TO_JSON(OrderStatusList, orderStatusList_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductTypeList, productTypeList_);
      DARABONBA_PTR_TO_JSON(ResourceIdList, resourceIdList_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePackageOrdersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DesktopIdList, desktopIdList_);
      DARABONBA_PTR_FROM_JSON(OrderIdList, orderIdList_);
      DARABONBA_PTR_FROM_JSON(OrderStatusList, orderStatusList_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductTypeList, productTypeList_);
      DARABONBA_PTR_FROM_JSON(ResourceIdList, resourceIdList_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    DescribePackageOrdersRequest() = default ;
    DescribePackageOrdersRequest(const DescribePackageOrdersRequest &) = default ;
    DescribePackageOrdersRequest(DescribePackageOrdersRequest &&) = default ;
    DescribePackageOrdersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePackageOrdersRequest() = default ;
    DescribePackageOrdersRequest& operator=(const DescribePackageOrdersRequest &) = default ;
    DescribePackageOrdersRequest& operator=(DescribePackageOrdersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && return this->currentPage_ == nullptr && return this->desktopIdList_ == nullptr && return this->orderIdList_ == nullptr && return this->orderStatusList_ == nullptr && return this->pageSize_ == nullptr
        && return this->productTypeList_ == nullptr && return this->resourceIdList_ == nullptr && return this->sessionId_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline DescribePackageOrdersRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline DescribePackageOrdersRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // desktopIdList Field Functions 
    bool hasDesktopIdList() const { return this->desktopIdList_ != nullptr;};
    void deleteDesktopIdList() { this->desktopIdList_ = nullptr;};
    inline const vector<string> & desktopIdList() const { DARABONBA_PTR_GET_CONST(desktopIdList_, vector<string>) };
    inline vector<string> desktopIdList() { DARABONBA_PTR_GET(desktopIdList_, vector<string>) };
    inline DescribePackageOrdersRequest& setDesktopIdList(const vector<string> & desktopIdList) { DARABONBA_PTR_SET_VALUE(desktopIdList_, desktopIdList) };
    inline DescribePackageOrdersRequest& setDesktopIdList(vector<string> && desktopIdList) { DARABONBA_PTR_SET_RVALUE(desktopIdList_, desktopIdList) };


    // orderIdList Field Functions 
    bool hasOrderIdList() const { return this->orderIdList_ != nullptr;};
    void deleteOrderIdList() { this->orderIdList_ = nullptr;};
    inline const vector<string> & orderIdList() const { DARABONBA_PTR_GET_CONST(orderIdList_, vector<string>) };
    inline vector<string> orderIdList() { DARABONBA_PTR_GET(orderIdList_, vector<string>) };
    inline DescribePackageOrdersRequest& setOrderIdList(const vector<string> & orderIdList) { DARABONBA_PTR_SET_VALUE(orderIdList_, orderIdList) };
    inline DescribePackageOrdersRequest& setOrderIdList(vector<string> && orderIdList) { DARABONBA_PTR_SET_RVALUE(orderIdList_, orderIdList) };


    // orderStatusList Field Functions 
    bool hasOrderStatusList() const { return this->orderStatusList_ != nullptr;};
    void deleteOrderStatusList() { this->orderStatusList_ = nullptr;};
    inline const vector<string> & orderStatusList() const { DARABONBA_PTR_GET_CONST(orderStatusList_, vector<string>) };
    inline vector<string> orderStatusList() { DARABONBA_PTR_GET(orderStatusList_, vector<string>) };
    inline DescribePackageOrdersRequest& setOrderStatusList(const vector<string> & orderStatusList) { DARABONBA_PTR_SET_VALUE(orderStatusList_, orderStatusList) };
    inline DescribePackageOrdersRequest& setOrderStatusList(vector<string> && orderStatusList) { DARABONBA_PTR_SET_RVALUE(orderStatusList_, orderStatusList) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribePackageOrdersRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productTypeList Field Functions 
    bool hasProductTypeList() const { return this->productTypeList_ != nullptr;};
    void deleteProductTypeList() { this->productTypeList_ = nullptr;};
    inline const vector<string> & productTypeList() const { DARABONBA_PTR_GET_CONST(productTypeList_, vector<string>) };
    inline vector<string> productTypeList() { DARABONBA_PTR_GET(productTypeList_, vector<string>) };
    inline DescribePackageOrdersRequest& setProductTypeList(const vector<string> & productTypeList) { DARABONBA_PTR_SET_VALUE(productTypeList_, productTypeList) };
    inline DescribePackageOrdersRequest& setProductTypeList(vector<string> && productTypeList) { DARABONBA_PTR_SET_RVALUE(productTypeList_, productTypeList) };


    // resourceIdList Field Functions 
    bool hasResourceIdList() const { return this->resourceIdList_ != nullptr;};
    void deleteResourceIdList() { this->resourceIdList_ = nullptr;};
    inline const vector<string> & resourceIdList() const { DARABONBA_PTR_GET_CONST(resourceIdList_, vector<string>) };
    inline vector<string> resourceIdList() { DARABONBA_PTR_GET(resourceIdList_, vector<string>) };
    inline DescribePackageOrdersRequest& setResourceIdList(const vector<string> & resourceIdList) { DARABONBA_PTR_SET_VALUE(resourceIdList_, resourceIdList) };
    inline DescribePackageOrdersRequest& setResourceIdList(vector<string> && resourceIdList) { DARABONBA_PTR_SET_RVALUE(resourceIdList_, resourceIdList) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribePackageOrdersRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    std::shared_ptr<vector<string>> desktopIdList_ = nullptr;
    std::shared_ptr<vector<string>> orderIdList_ = nullptr;
    std::shared_ptr<vector<string>> orderStatusList_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<vector<string>> productTypeList_ = nullptr;
    std::shared_ptr<vector<string>> resourceIdList_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
