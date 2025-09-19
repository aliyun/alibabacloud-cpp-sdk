// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUUIDSBYAPPIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUUIDSBYAPPIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListUuidsByAppIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUuidsByAppIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppRegionId, appRegionId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryUid, resourceDirectoryUid_);
    };
    friend void from_json(const Darabonba::Json& j, ListUuidsByAppIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppRegionId, appRegionId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryUid, resourceDirectoryUid_);
    };
    ListUuidsByAppIdRequest() = default ;
    ListUuidsByAppIdRequest(const ListUuidsByAppIdRequest &) = default ;
    ListUuidsByAppIdRequest(ListUuidsByAppIdRequest &&) = default ;
    ListUuidsByAppIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUuidsByAppIdRequest() = default ;
    ListUuidsByAppIdRequest& operator=(const ListUuidsByAppIdRequest &) = default ;
    ListUuidsByAppIdRequest& operator=(ListUuidsByAppIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appRegionId_ != nullptr && this->currentPage_ != nullptr && this->lang_ != nullptr && this->pageSize_ != nullptr && this->resourceDirectoryUid_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListUuidsByAppIdRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appRegionId Field Functions 
    bool hasAppRegionId() const { return this->appRegionId_ != nullptr;};
    void deleteAppRegionId() { this->appRegionId_ = nullptr;};
    inline string appRegionId() const { DARABONBA_PTR_GET_DEFAULT(appRegionId_, "") };
    inline ListUuidsByAppIdRequest& setAppRegionId(string appRegionId) { DARABONBA_PTR_SET_VALUE(appRegionId_, appRegionId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListUuidsByAppIdRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListUuidsByAppIdRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUuidsByAppIdRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceDirectoryUid Field Functions 
    bool hasResourceDirectoryUid() const { return this->resourceDirectoryUid_ != nullptr;};
    void deleteResourceDirectoryUid() { this->resourceDirectoryUid_ = nullptr;};
    inline int64_t resourceDirectoryUid() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryUid_, 0L) };
    inline ListUuidsByAppIdRequest& setResourceDirectoryUid(int64_t resourceDirectoryUid) { DARABONBA_PTR_SET_VALUE(resourceDirectoryUid_, resourceDirectoryUid) };


  protected:
    // SAE application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // Region ID.
    std::shared_ptr<string> appRegionId_ = nullptr;
    // The page number to display in a paginated query.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The language type for request and response, default is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of items to display per page in a paginated query.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Resource associated directory UID.
    std::shared_ptr<int64_t> resourceDirectoryUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
