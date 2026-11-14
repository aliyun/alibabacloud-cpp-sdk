// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(BizTypeList, bizTypeList_);
      DARABONBA_PTR_TO_JSON(OriginAppType, originAppType_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ProductTypeList, productTypeList_);
      DARABONBA_PTR_TO_JSON(SubAppType, subAppType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(BizTypeList, bizTypeList_);
      DARABONBA_PTR_FROM_JSON(OriginAppType, originAppType_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ProductTypeList, productTypeList_);
      DARABONBA_PTR_FROM_JSON(SubAppType, subAppType_);
    };
    ListAppRequest() = default ;
    ListAppRequest(const ListAppRequest &) = default ;
    ListAppRequest(ListAppRequest &&) = default ;
    ListAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppRequest() = default ;
    ListAppRequest& operator=(const ListAppRequest &) = default ;
    ListAppRequest& operator=(ListAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->appType_ == nullptr && this->bizType_ == nullptr && this->bizTypeList_ == nullptr && this->originAppType_ == nullptr
        && this->osType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->productType_ == nullptr && this->productTypeList_ == nullptr
        && this->subAppType_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListAppRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline ListAppRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline ListAppRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // bizTypeList Field Functions 
    bool hasBizTypeList() const { return this->bizTypeList_ != nullptr;};
    void deleteBizTypeList() { this->bizTypeList_ = nullptr;};
    inline const vector<int32_t> & getBizTypeList() const { DARABONBA_PTR_GET_CONST(bizTypeList_, vector<int32_t>) };
    inline vector<int32_t> getBizTypeList() { DARABONBA_PTR_GET(bizTypeList_, vector<int32_t>) };
    inline ListAppRequest& setBizTypeList(const vector<int32_t> & bizTypeList) { DARABONBA_PTR_SET_VALUE(bizTypeList_, bizTypeList) };
    inline ListAppRequest& setBizTypeList(vector<int32_t> && bizTypeList) { DARABONBA_PTR_SET_RVALUE(bizTypeList_, bizTypeList) };


    // originAppType Field Functions 
    bool hasOriginAppType() const { return this->originAppType_ != nullptr;};
    void deleteOriginAppType() { this->originAppType_ = nullptr;};
    inline string getOriginAppType() const { DARABONBA_PTR_GET_DEFAULT(originAppType_, "") };
    inline ListAppRequest& setOriginAppType(string originAppType) { DARABONBA_PTR_SET_VALUE(originAppType_, originAppType) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline ListAppRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAppRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListAppRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // productTypeList Field Functions 
    bool hasProductTypeList() const { return this->productTypeList_ != nullptr;};
    void deleteProductTypeList() { this->productTypeList_ = nullptr;};
    inline const vector<string> & getProductTypeList() const { DARABONBA_PTR_GET_CONST(productTypeList_, vector<string>) };
    inline vector<string> getProductTypeList() { DARABONBA_PTR_GET(productTypeList_, vector<string>) };
    inline ListAppRequest& setProductTypeList(const vector<string> & productTypeList) { DARABONBA_PTR_SET_VALUE(productTypeList_, productTypeList) };
    inline ListAppRequest& setProductTypeList(vector<string> && productTypeList) { DARABONBA_PTR_SET_RVALUE(productTypeList_, productTypeList) };


    // subAppType Field Functions 
    bool hasSubAppType() const { return this->subAppType_ != nullptr;};
    void deleteSubAppType() { this->subAppType_ = nullptr;};
    inline string getSubAppType() const { DARABONBA_PTR_GET_DEFAULT(subAppType_, "") };
    inline ListAppRequest& setSubAppType(string subAppType) { DARABONBA_PTR_SET_VALUE(subAppType_, subAppType) };


  protected:
    // The application ID used for exact match. If omitted, applications are not filtered by application ID.
    shared_ptr<string> appId_ {};
    // The application name used for filtering. Contains matching is supported.
    shared_ptr<string> appName_ {};
    // The source type of the application. Valid values:
    // 
    // - **USER_APP**: user-created applications
    // - **SYS_APP**: system-provided applications
    // - **VIRTUAL_APP**: virtual applications
    shared_ptr<string> appType_ {};
    // Filters by a single business type. If specified together with BizTypeList, the intersection is used. Valid values:
    // 
    // - **1**: basic products
    // - **2**: personal cloud
    // - **3**: cloud office
    // - **4**: Cloud Flow
    // - **10**: Personal Edition
    // - **20**: Business Edition
    // - **60**: Linggou Team Edition
    shared_ptr<int32_t> bizType_ {};
    // The list of business types for filtering. An application is matched if it belongs to any business type in the list. If specified together with BizType, the single-value condition must still be met.
    shared_ptr<vector<int32_t>> bizTypeList_ {};
    // The form of the application. Valid values:
    // 
    // - **CLIENT_BASE**: client applications
    // - **WEB_BASE**: browser applications
    // - **CLOUD_NATIVE_BASE**: cloud-native applications
    // - **PORT_SERVICE_BASE**: port service applications
    // - **AGENT_SERVICE_BASE**: agent applications
    shared_ptr<string> originAppType_ {};
    // The type of operating system used by the application. Valid values:
    // 
    // - **Unknown**: unknown operating system
    // - **Windows**: Windows operating system
    // - **Linux**: Linux operating system
    // - **Android**: Android operating system
    shared_ptr<string> osType_ {};
    // The page number. We recommend that you start from 1. If this parameter is omitted, set to 0, or set to 1, the first page is queried.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. If this parameter is omitted or set to a value less than 1, the value 10 is used.
    shared_ptr<int32_t> pageSize_ {};
    // Filters by a single associated product. If specified together with ProductTypeList, the intersection is used. Valid values:
    // 
    // - **CloudGame**: cloud gaming
    // - **CloudApp**: Wuying Cloud Application
    // - **CloudBrowser**: secure browser
    // - **CloudDesktop**: Wuying Cloud Computer
    // - **ImageBuilder**: image builder resources
    // - **ImageValidate**: image validation resources
    // - **AndroidCloud**: Android cloud
    // - **GpuRender**: GPU rendering
    // - **AndroidGpuRender**: Android cloud GPU rendering
    // - **WuyingServer**: Enterprise Edition workstation
    // - **GpuProxy**: GPU remote rendering proxy
    // - **GpuCache**: GPU remote rendering cache
    // - **AIAgent**: AI agent service
    // - **HostedDesktop**: hosted computer
    // - **WuyingWorkstation**: Personal Edition container workstation
    // - **WuyingWorkstationBusiness**: Business Edition container workstation
    // - **WuyingWorkstationTeam**: Linggou Team Edition container workstation
    shared_ptr<string> productType_ {};
    // The list of associated products for filtering. An application is matched if it belongs to any product in the list. If specified together with ProductType, the single-value condition must still be met.
    shared_ptr<vector<string>> productTypeList_ {};
    // The subtype of the application. Valid values:
    // 
    // - **PWA**: progressive web applications
    // - **SAAS**: SaaS applications
    // - **SANDBOX**: sandbox applications
    // - **CONTAINER**: container applications
    shared_ptr<string> subAppType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
