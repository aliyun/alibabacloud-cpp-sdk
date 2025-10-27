// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMACHINEAPPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMACHINEAPPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListMachineAppsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMachineAppsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppRegionId, appRegionId_);
      DARABONBA_PTR_TO_JSON(AuthVersion, authVersion_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryUid, resourceDirectoryUid_);
    };
    friend void from_json(const Darabonba::Json& j, ListMachineAppsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppRegionId, appRegionId_);
      DARABONBA_PTR_FROM_JSON(AuthVersion, authVersion_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryUid, resourceDirectoryUid_);
    };
    ListMachineAppsRequest() = default ;
    ListMachineAppsRequest(const ListMachineAppsRequest &) = default ;
    ListMachineAppsRequest(ListMachineAppsRequest &&) = default ;
    ListMachineAppsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMachineAppsRequest() = default ;
    ListMachineAppsRequest& operator=(const ListMachineAppsRequest &) = default ;
    ListMachineAppsRequest& operator=(ListMachineAppsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->appRegionId_ == nullptr && return this->authVersion_ == nullptr && return this->currentPage_ == nullptr && return this->lang_ == nullptr
        && return this->pageSize_ == nullptr && return this->resourceDirectoryUid_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListMachineAppsRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListMachineAppsRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appRegionId Field Functions 
    bool hasAppRegionId() const { return this->appRegionId_ != nullptr;};
    void deleteAppRegionId() { this->appRegionId_ = nullptr;};
    inline string appRegionId() const { DARABONBA_PTR_GET_DEFAULT(appRegionId_, "") };
    inline ListMachineAppsRequest& setAppRegionId(string appRegionId) { DARABONBA_PTR_SET_VALUE(appRegionId_, appRegionId) };


    // authVersion Field Functions 
    bool hasAuthVersion() const { return this->authVersion_ != nullptr;};
    void deleteAuthVersion() { this->authVersion_ = nullptr;};
    inline string authVersion() const { DARABONBA_PTR_GET_DEFAULT(authVersion_, "") };
    inline ListMachineAppsRequest& setAuthVersion(string authVersion) { DARABONBA_PTR_SET_VALUE(authVersion_, authVersion) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListMachineAppsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListMachineAppsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMachineAppsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceDirectoryUid Field Functions 
    bool hasResourceDirectoryUid() const { return this->resourceDirectoryUid_ != nullptr;};
    void deleteResourceDirectoryUid() { this->resourceDirectoryUid_ = nullptr;};
    inline int64_t resourceDirectoryUid() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryUid_, 0L) };
    inline ListMachineAppsRequest& setResourceDirectoryUid(int64_t resourceDirectoryUid) { DARABONBA_PTR_SET_VALUE(resourceDirectoryUid_, resourceDirectoryUid) };


  protected:
    // SAE application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // SAE application name.
    std::shared_ptr<string> appName_ = nullptr;
    // Region ID.
    std::shared_ptr<string> appRegionId_ = nullptr;
    // The authorization version of the asset. Values:
    // - **6**: Anti-virus edition
    // - **5**: Advanced edition
    // - **3**: Enterprise edition
    // - **7**: Ultimate edition
    // - **10**: Value-added Service Edition
    std::shared_ptr<string> authVersion_ = nullptr;
    // The page number to display in a paginated query.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The language type for request and response, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The maximum number of items to display per page in a paginated query.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The UID of the resource directory.
    std::shared_ptr<int64_t> resourceDirectoryUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
