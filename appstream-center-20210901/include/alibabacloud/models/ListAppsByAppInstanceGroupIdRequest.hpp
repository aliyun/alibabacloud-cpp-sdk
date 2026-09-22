// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPSBYAPPINSTANCEGROUPIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPSBYAPPINSTANCEGROUPIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAppsByAppInstanceGroupIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppsByAppInstanceGroupIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppsByAppInstanceGroupIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    ListAppsByAppInstanceGroupIdRequest() = default ;
    ListAppsByAppInstanceGroupIdRequest(const ListAppsByAppInstanceGroupIdRequest &) = default ;
    ListAppsByAppInstanceGroupIdRequest(ListAppsByAppInstanceGroupIdRequest &&) = default ;
    ListAppsByAppInstanceGroupIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppsByAppInstanceGroupIdRequest() = default ;
    ListAppsByAppInstanceGroupIdRequest& operator=(const ListAppsByAppInstanceGroupIdRequest &) = default ;
    ListAppsByAppInstanceGroupIdRequest& operator=(ListAppsByAppInstanceGroupIdRequest &&) = default ;
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
    inline ListAppsByAppInstanceGroupIdRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAppsByAppInstanceGroupIdRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppsByAppInstanceGroupIdRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListAppsByAppInstanceGroupIdRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The delivery group ID.
    // 
    // - WUYING Cloud Application delivery group: call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the ID.
    // - Cloud Browser group: specify the Cloud Browser group ID. Call the [ListBrowserInstanceGroup](~~ListBrowserInstanceGroup~~) operation to obtain the ID.
    // 
    // > This parameter is **required**. If it is not specified, the error code `InvalidParameter.AppInstanceGroupId` is returned.
    shared_ptr<string> appInstanceGroupId_ {};
    // The page number. Pages start from page 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of applications to return per page. Valid values: 1 to 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The product type. The value must match the product type of the delivery group specified by AppInstanceGroupId. Otherwise, the error code `InvalidAppInstanceGroup.NotFound` is returned.
    // 
    // Valid values:
    // 
    // - CloudApp: WUYING Cloud Application.
    // - CloudBrowser: Cloud Browser.
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
