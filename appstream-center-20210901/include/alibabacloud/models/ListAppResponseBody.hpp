// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPRESPONSEBODY_HPP_
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
  class ListAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNmuber, pageNmuber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNmuber, pageNmuber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAppResponseBody() = default ;
    ListAppResponseBody(const ListAppResponseBody &) = default ;
    ListAppResponseBody(ListAppResponseBody &&) = default ;
    ListAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppResponseBody() = default ;
    ListAppResponseBody& operator=(const ListAppResponseBody &) = default ;
    ListAppResponseBody& operator=(ListAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(AppIconUrl, appIconUrl_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(AppThemeColor, appThemeColor_);
        DARABONBA_PTR_TO_JSON(AppType, appType_);
        DARABONBA_PTR_TO_JSON(BizType, bizType_);
        DARABONBA_PTR_TO_JSON(Deletable, deletable_);
        DARABONBA_PTR_TO_JSON(ExecuteFileAddress, executeFileAddress_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(OriginAppType, originAppType_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(SilenceParam, silenceParam_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubAppType, subAppType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(AppIconUrl, appIconUrl_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(AppThemeColor, appThemeColor_);
        DARABONBA_PTR_FROM_JSON(AppType, appType_);
        DARABONBA_PTR_FROM_JSON(BizType, bizType_);
        DARABONBA_PTR_FROM_JSON(Deletable, deletable_);
        DARABONBA_PTR_FROM_JSON(ExecuteFileAddress, executeFileAddress_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(OriginAppType, originAppType_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(SilenceParam, silenceParam_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubAppType, subAppType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->appIconUrl_ == nullptr && this->appId_ == nullptr && this->appName_ == nullptr && this->appThemeColor_ == nullptr && this->appType_ == nullptr
        && this->bizType_ == nullptr && this->deletable_ == nullptr && this->executeFileAddress_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->originAppType_ == nullptr && this->osType_ == nullptr && this->productType_ == nullptr && this->silenceParam_ == nullptr && this->status_ == nullptr
        && this->subAppType_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Data& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // appIconUrl Field Functions 
      bool hasAppIconUrl() const { return this->appIconUrl_ != nullptr;};
      void deleteAppIconUrl() { this->appIconUrl_ = nullptr;};
      inline string getAppIconUrl() const { DARABONBA_PTR_GET_DEFAULT(appIconUrl_, "") };
      inline Data& setAppIconUrl(string appIconUrl) { DARABONBA_PTR_SET_VALUE(appIconUrl_, appIconUrl) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // appThemeColor Field Functions 
      bool hasAppThemeColor() const { return this->appThemeColor_ != nullptr;};
      void deleteAppThemeColor() { this->appThemeColor_ = nullptr;};
      inline string getAppThemeColor() const { DARABONBA_PTR_GET_DEFAULT(appThemeColor_, "") };
      inline Data& setAppThemeColor(string appThemeColor) { DARABONBA_PTR_SET_VALUE(appThemeColor_, appThemeColor) };


      // appType Field Functions 
      bool hasAppType() const { return this->appType_ != nullptr;};
      void deleteAppType() { this->appType_ = nullptr;};
      inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
      inline Data& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


      // bizType Field Functions 
      bool hasBizType() const { return this->bizType_ != nullptr;};
      void deleteBizType() { this->bizType_ = nullptr;};
      inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
      inline Data& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


      // deletable Field Functions 
      bool hasDeletable() const { return this->deletable_ != nullptr;};
      void deleteDeletable() { this->deletable_ = nullptr;};
      inline bool getDeletable() const { DARABONBA_PTR_GET_DEFAULT(deletable_, false) };
      inline Data& setDeletable(bool deletable) { DARABONBA_PTR_SET_VALUE(deletable_, deletable) };


      // executeFileAddress Field Functions 
      bool hasExecuteFileAddress() const { return this->executeFileAddress_ != nullptr;};
      void deleteExecuteFileAddress() { this->executeFileAddress_ = nullptr;};
      inline string getExecuteFileAddress() const { DARABONBA_PTR_GET_DEFAULT(executeFileAddress_, "") };
      inline Data& setExecuteFileAddress(string executeFileAddress) { DARABONBA_PTR_SET_VALUE(executeFileAddress_, executeFileAddress) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // originAppType Field Functions 
      bool hasOriginAppType() const { return this->originAppType_ != nullptr;};
      void deleteOriginAppType() { this->originAppType_ = nullptr;};
      inline string getOriginAppType() const { DARABONBA_PTR_GET_DEFAULT(originAppType_, "") };
      inline Data& setOriginAppType(string originAppType) { DARABONBA_PTR_SET_VALUE(originAppType_, originAppType) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Data& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline Data& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // silenceParam Field Functions 
      bool hasSilenceParam() const { return this->silenceParam_ != nullptr;};
      void deleteSilenceParam() { this->silenceParam_ = nullptr;};
      inline string getSilenceParam() const { DARABONBA_PTR_GET_DEFAULT(silenceParam_, "") };
      inline Data& setSilenceParam(string silenceParam) { DARABONBA_PTR_SET_VALUE(silenceParam_, silenceParam) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subAppType Field Functions 
      bool hasSubAppType() const { return this->subAppType_ != nullptr;};
      void deleteSubAppType() { this->subAppType_ = nullptr;};
      inline string getSubAppType() const { DARABONBA_PTR_GET_DEFAULT(subAppType_, "") };
      inline Data& setSubAppType(string subAppType) { DARABONBA_PTR_SET_VALUE(subAppType_, subAppType) };


    protected:
      // The ID of the Alibaba Cloud account to which the resource belongs.
      shared_ptr<int64_t> aliUid_ {};
      // The URL used to access the application icon.
      shared_ptr<string> appIconUrl_ {};
      // The application ID, which is used to query the application or unbind an image later.
      shared_ptr<string> appId_ {};
      // The display name of the application.
      shared_ptr<string> appName_ {};
      // The theme color saved for the application. If no theme color is specified when the application is created, #FFFFFF (white) is saved by default. The saved value is returned during a query. This field may not be configured for legacy applications.
      shared_ptr<string> appThemeColor_ {};
      // The source type of the application. Valid values:
      // 
      // - **USER_APP**: User-created applications.
      // - **SYS_APP**: System-provided applications.
      // - **VIRTUAL_APP**: Virtual applications.
      shared_ptr<string> appType_ {};
      // The business type to which the application belongs. Valid values:
      // 
      // - **1**: Basic products.
      // - **2**: Personal cloud.
      // - **3**: Cloud office.
      // - **4**: Cloud Flow.
      // - **10**: Personal Edition.
      // - **20**: Business Edition.
      // - **60**: Linggou Team Edition.
      shared_ptr<int32_t> bizType_ {};
      // Indicates whether the current application is not referenced by any image. A value of true indicates that no image references the application. A value of false indicates that the application is still referenced by an image. You must remove the reference before deleting the application.
      shared_ptr<bool> deletable_ {};
      // The path of the executable file saved when the application is created or modified. This field is returned only if the path is configured for the application. An example is the installation path of a Windows business application.
      shared_ptr<string> executeFileAddress_ {};
      // The time when the application was created. The time is in ISO 8601 format, accurate to milliseconds, and the time zone offset is +00:00.
      shared_ptr<string> gmtCreate_ {};
      // The time when the application was last modified. The time is in ISO 8601 format, accurate to milliseconds, and the time zone offset is +00:00.
      shared_ptr<string> gmtModified_ {};
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
      // The product to which the resource belongs. Valid values:
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
      // The command-line parameters used when the application is started.
      shared_ptr<string> silenceParam_ {};
      // The status of the application record. The current list queries only valid and undeleted applications.
      shared_ptr<string> status_ {};
      // The subtype of the application. Valid values:
      // 
      // - **PWA**: Progressive web applications.
      // - **SAAS**: Software as a Service (SaaS) applications.
      // - **SANDBOX**: Sandbox applications.
      // - **CONTAINER**: Container applications.
      shared_ptr<string> subAppType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->pageNmuber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAppResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListAppResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAppResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAppResponseBody::Data>) };
    inline vector<ListAppResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAppResponseBody::Data>) };
    inline ListAppResponseBody& setData(const vector<ListAppResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAppResponseBody& setData(vector<ListAppResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAppResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNmuber Field Functions 
    bool hasPageNmuber() const { return this->pageNmuber_ != nullptr;};
    void deletePageNmuber() { this->pageNmuber_ = nullptr;};
    inline int32_t getPageNmuber() const { DARABONBA_PTR_GET_DEFAULT(pageNmuber_, 0) };
    inline ListAppResponseBody& setPageNmuber(int32_t pageNmuber) { DARABONBA_PTR_SET_VALUE(pageNmuber_, pageNmuber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAppResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code. This field is returned when the request fails. A successful response may not contain this field.
    shared_ptr<string> code_ {};
    // The total number of application records that meet the query conditions.
    shared_ptr<int32_t> count_ {};
    // The application records on the current page.
    shared_ptr<vector<ListAppResponseBody::Data>> data_ {};
    // The error or result message. This field describes the cause when a request fails. A successful response may not contain this field.
    shared_ptr<string> message_ {};
    // The page number of this query. The name of this response field is PageNmuber.
    shared_ptr<int32_t> pageNmuber_ {};
    // The number of records per page in this paged query.
    shared_ptr<int32_t> pageSize_ {};
    // The unique identifier of the request. You can provide this value for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was processed successfully. A value of true indicates that the request was processed successfully. To check whether an asynchronous task is completed, query the task status separately.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
