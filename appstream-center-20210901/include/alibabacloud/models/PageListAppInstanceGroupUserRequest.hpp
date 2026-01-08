// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAGELISTAPPINSTANCEGROUPUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PAGELISTAPPINSTANCEGROUPUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class PageListAppInstanceGroupUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PageListAppInstanceGroupUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, PageListAppInstanceGroupUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    PageListAppInstanceGroupUserRequest() = default ;
    PageListAppInstanceGroupUserRequest(const PageListAppInstanceGroupUserRequest &) = default ;
    PageListAppInstanceGroupUserRequest(PageListAppInstanceGroupUserRequest &&) = default ;
    PageListAppInstanceGroupUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PageListAppInstanceGroupUserRequest() = default ;
    PageListAppInstanceGroupUserRequest& operator=(const PageListAppInstanceGroupUserRequest &) = default ;
    PageListAppInstanceGroupUserRequest& operator=(PageListAppInstanceGroupUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->productType_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline PageListAppInstanceGroupUserRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline PageListAppInstanceGroupUserRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline PageListAppInstanceGroupUserRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline PageListAppInstanceGroupUserRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The ID of the delivery group.
    // 
    // This parameter is required.
    shared_ptr<string> appInstanceGroupId_ {};
    // The number of the page to return. We recommend that you configure this parameter.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to be return on each page. The value cannot be greater than `100`. We recommend that you configure this parameter.
    shared_ptr<int32_t> pageSize_ {};
    // The product type.
    // 
    // Valid value:
    // 
    // *   CloudApp: App Streaming
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
