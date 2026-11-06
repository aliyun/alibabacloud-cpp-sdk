// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAppShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(BizTypeList, bizTypeListShrink_);
      DARABONBA_PTR_TO_JSON(OriginAppType, originAppType_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ProductTypeList, productTypeListShrink_);
      DARABONBA_PTR_TO_JSON(SubAppType, subAppType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(BizTypeList, bizTypeListShrink_);
      DARABONBA_PTR_FROM_JSON(OriginAppType, originAppType_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ProductTypeList, productTypeListShrink_);
      DARABONBA_PTR_FROM_JSON(SubAppType, subAppType_);
    };
    ListAppShrinkRequest() = default ;
    ListAppShrinkRequest(const ListAppShrinkRequest &) = default ;
    ListAppShrinkRequest(ListAppShrinkRequest &&) = default ;
    ListAppShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppShrinkRequest() = default ;
    ListAppShrinkRequest& operator=(const ListAppShrinkRequest &) = default ;
    ListAppShrinkRequest& operator=(ListAppShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->appType_ == nullptr && this->bizType_ == nullptr && this->bizTypeListShrink_ == nullptr && this->originAppType_ == nullptr
        && this->osType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->productType_ == nullptr && this->productTypeListShrink_ == nullptr
        && this->subAppType_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListAppShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAppShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline ListAppShrinkRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline ListAppShrinkRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // bizTypeListShrink Field Functions 
    bool hasBizTypeListShrink() const { return this->bizTypeListShrink_ != nullptr;};
    void deleteBizTypeListShrink() { this->bizTypeListShrink_ = nullptr;};
    inline string getBizTypeListShrink() const { DARABONBA_PTR_GET_DEFAULT(bizTypeListShrink_, "") };
    inline ListAppShrinkRequest& setBizTypeListShrink(string bizTypeListShrink) { DARABONBA_PTR_SET_VALUE(bizTypeListShrink_, bizTypeListShrink) };


    // originAppType Field Functions 
    bool hasOriginAppType() const { return this->originAppType_ != nullptr;};
    void deleteOriginAppType() { this->originAppType_ = nullptr;};
    inline string getOriginAppType() const { DARABONBA_PTR_GET_DEFAULT(originAppType_, "") };
    inline ListAppShrinkRequest& setOriginAppType(string originAppType) { DARABONBA_PTR_SET_VALUE(originAppType_, originAppType) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline ListAppShrinkRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAppShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListAppShrinkRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // productTypeListShrink Field Functions 
    bool hasProductTypeListShrink() const { return this->productTypeListShrink_ != nullptr;};
    void deleteProductTypeListShrink() { this->productTypeListShrink_ = nullptr;};
    inline string getProductTypeListShrink() const { DARABONBA_PTR_GET_DEFAULT(productTypeListShrink_, "") };
    inline ListAppShrinkRequest& setProductTypeListShrink(string productTypeListShrink) { DARABONBA_PTR_SET_VALUE(productTypeListShrink_, productTypeListShrink) };


    // subAppType Field Functions 
    bool hasSubAppType() const { return this->subAppType_ != nullptr;};
    void deleteSubAppType() { this->subAppType_ = nullptr;};
    inline string getSubAppType() const { DARABONBA_PTR_GET_DEFAULT(subAppType_, "") };
    inline ListAppShrinkRequest& setSubAppType(string subAppType) { DARABONBA_PTR_SET_VALUE(subAppType_, subAppType) };


  protected:
    // The application ID for exact query. If this parameter is omitted, applications are not filtered by application ID.
    shared_ptr<string> appId_ {};
    // The application name filter. Contains matching is supported.
    shared_ptr<string> appName_ {};
    // The source type of the application. Valid values:
    // 
    // - **USER_APP**: User-created applications.
    // - **SYS_APP**: System-provided applications.
    // - **VIRTUAL_APP**: Virtual applications.
    shared_ptr<string> appType_ {};
    // Filters by a single business type. If specified together with BizTypeList, the intersection is used. Valid values:
    // 
    // - **1**: Basic products.
    // - **2**: Personal cloud.
    // - **3**: Cloud office.
    // - **4**: Cloud Flow.
    // - **10**: Personal Edition.
    // - **20**: Business Edition.
    // - **60**: Linggou Team Edition.
    shared_ptr<int32_t> bizType_ {};
    // The list of business types for filtering. A match with any business type in the list is considered a match. If specified together with BizType, the single-value condition must still be met.
    shared_ptr<string> bizTypeListShrink_ {};
    // The form of the application. Valid values:
    // 
    // - **CLIENT_BASE**: Client applications.
    // - **WEB_BASE**: Browser applications.
    // - **CLOUD_NATIVE_BASE**: Cloud-native applications.
    // - **PORT_SERVICE_BASE**: Port service applications.
    // - **AGENT_SERVICE_BASE**: Agent applications.
    shared_ptr<string> originAppType_ {};
    // The type of operating system used by the application. Valid values:
    // 
    // - **Unknown**: The operating system is unknown.
    // - **Windows**: Windows operating system.
    // - **Linux**: Linux operating system.
    // - **Android**: Android operating system.
    shared_ptr<string> osType_ {};
    // The page number for the query. Start from 1. If this parameter is omitted, set to 0, or set to 1, the first page is queried.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records to return on each page. If this parameter is omitted or set to a value less than 1, the value 10 is used.
    shared_ptr<int32_t> pageSize_ {};
    // Filters by a single associated product. If specified together with ProductTypeList, the intersection is used. Valid values:
    // 
    // - **CloudGame**: Cloud game.
    // - **CloudApp**: Wuying cloud application.
    // - **CloudBrowser**: Secure browser.
    // - **CloudDesktop**: Wuying cloud desktop.
    // - **ImageBuilder**: Image builder resources.
    // - **ImageValidate**: Image validation resources.
    // - **AndroidCloud**: Android cloud.
    // - **GpuRender**: GPU rendering.
    // - **AndroidGpuRender**: Android cloud GPU rendering.
    // - **WuyingServer**: Enterprise Edition workstation.
    // - **GpuProxy**: GPU remote rendering proxy.
    // - **GpuCache**: GPU remote rendering cache.
    // - **AIAgent**: AI Agent service.
    // - **HostedDesktop**: Hosted desktop.
    // - **WuyingWorkstation**: Personal Edition container workstation.
    // - **WuyingWorkstationBusiness**: Business Edition container workstation.
    // - **WuyingWorkstationTeam**: Linggou Team Edition container workstation.
    shared_ptr<string> productType_ {};
    // The list of associated products for filtering. A match with any product in the list is considered a match. If specified together with ProductType, the single-value condition must still be met.
    shared_ptr<string> productTypeListShrink_ {};
    // The subtype of the application. Valid values:
    // 
    // - **PWA**: Progressive web applications.
    // - **SAAS**: Software as a Service (SaaS) applications.
    // - **SANDBOX**: Sandbox applications.
    // - **CONTAINER**: Container applications.
    shared_ptr<string> subAppType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
