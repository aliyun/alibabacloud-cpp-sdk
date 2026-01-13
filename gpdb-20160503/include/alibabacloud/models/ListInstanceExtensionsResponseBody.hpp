// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEEXTENSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEEXTENSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListInstanceExtensionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceExtensionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceExtensionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListInstanceExtensionsResponseBody() = default ;
    ListInstanceExtensionsResponseBody(const ListInstanceExtensionsResponseBody &) = default ;
    ListInstanceExtensionsResponseBody(ListInstanceExtensionsResponseBody &&) = default ;
    ListInstanceExtensionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceExtensionsResponseBody() = default ;
    ListInstanceExtensionsResponseBody& operator=(const ListInstanceExtensionsResponseBody &) = default ;
    ListInstanceExtensionsResponseBody& operator=(ListInstanceExtensionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExtensionId, extensionId_);
        DARABONBA_PTR_TO_JSON(InstalledDatabases, installedDatabases_);
        DARABONBA_PTR_TO_JSON(IsInstallNeedRestart, isInstallNeedRestart_);
        DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExtensionId, extensionId_);
        DARABONBA_PTR_FROM_JSON(InstalledDatabases, installedDatabases_);
        DARABONBA_PTR_FROM_JSON(IsInstallNeedRestart, isInstallNeedRestart_);
        DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentVersion_ == nullptr
        && this->description_ == nullptr && this->extensionId_ == nullptr && this->installedDatabases_ == nullptr && this->isInstallNeedRestart_ == nullptr && this->latestVersion_ == nullptr
        && this->name_ == nullptr && this->status_ == nullptr; };
      // currentVersion Field Functions 
      bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
      void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
      inline string getCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
      inline Items& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // extensionId Field Functions 
      bool hasExtensionId() const { return this->extensionId_ != nullptr;};
      void deleteExtensionId() { this->extensionId_ = nullptr;};
      inline string getExtensionId() const { DARABONBA_PTR_GET_DEFAULT(extensionId_, "") };
      inline Items& setExtensionId(string extensionId) { DARABONBA_PTR_SET_VALUE(extensionId_, extensionId) };


      // installedDatabases Field Functions 
      bool hasInstalledDatabases() const { return this->installedDatabases_ != nullptr;};
      void deleteInstalledDatabases() { this->installedDatabases_ = nullptr;};
      inline string getInstalledDatabases() const { DARABONBA_PTR_GET_DEFAULT(installedDatabases_, "") };
      inline Items& setInstalledDatabases(string installedDatabases) { DARABONBA_PTR_SET_VALUE(installedDatabases_, installedDatabases) };


      // isInstallNeedRestart Field Functions 
      bool hasIsInstallNeedRestart() const { return this->isInstallNeedRestart_ != nullptr;};
      void deleteIsInstallNeedRestart() { this->isInstallNeedRestart_ = nullptr;};
      inline bool getIsInstallNeedRestart() const { DARABONBA_PTR_GET_DEFAULT(isInstallNeedRestart_, false) };
      inline Items& setIsInstallNeedRestart(bool isInstallNeedRestart) { DARABONBA_PTR_SET_VALUE(isInstallNeedRestart_, isInstallNeedRestart) };


      // latestVersion Field Functions 
      bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
      void deleteLatestVersion() { this->latestVersion_ = nullptr;};
      inline string getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
      inline Items& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The current version.
      shared_ptr<string> currentVersion_ {};
      // The description of the extension.
      shared_ptr<string> description_ {};
      // The extension ID.
      shared_ptr<string> extensionId_ {};
      // The names of the databases in which the extension is installed.
      shared_ptr<string> installedDatabases_ {};
      // Indicates whether an instance restart is required after you install the extension for the extension to take effect.
      shared_ptr<bool> isInstallNeedRestart_ {};
      // The latest version.
      shared_ptr<string> latestVersion_ {};
      // The name of the extension.
      shared_ptr<string> name_ {};
      // The status of the extension.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListInstanceExtensionsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListInstanceExtensionsResponseBody::Items>) };
    inline vector<ListInstanceExtensionsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListInstanceExtensionsResponseBody::Items>) };
    inline ListInstanceExtensionsResponseBody& setItems(const vector<ListInstanceExtensionsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListInstanceExtensionsResponseBody& setItems(vector<ListInstanceExtensionsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListInstanceExtensionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline ListInstanceExtensionsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceExtensionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline ListInstanceExtensionsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The queried extensions.
    shared_ptr<vector<ListInstanceExtensionsResponseBody::Items>> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
