// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEEXTENSIONSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEEXTENSIONSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListInstanceExtensionsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceExtensionsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExtensionId, extensionId_);
      DARABONBA_PTR_TO_JSON(InstalledDatabases, installedDatabases_);
      DARABONBA_PTR_TO_JSON(IsInstallNeedRestart, isInstallNeedRestart_);
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceExtensionsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExtensionId, extensionId_);
      DARABONBA_PTR_FROM_JSON(InstalledDatabases, installedDatabases_);
      DARABONBA_PTR_FROM_JSON(IsInstallNeedRestart, isInstallNeedRestart_);
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListInstanceExtensionsResponseBodyItems() = default ;
    ListInstanceExtensionsResponseBodyItems(const ListInstanceExtensionsResponseBodyItems &) = default ;
    ListInstanceExtensionsResponseBodyItems(ListInstanceExtensionsResponseBodyItems &&) = default ;
    ListInstanceExtensionsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceExtensionsResponseBodyItems() = default ;
    ListInstanceExtensionsResponseBodyItems& operator=(const ListInstanceExtensionsResponseBodyItems &) = default ;
    ListInstanceExtensionsResponseBodyItems& operator=(ListInstanceExtensionsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentVersion_ == nullptr
        && return this->description_ == nullptr && return this->extensionId_ == nullptr && return this->installedDatabases_ == nullptr && return this->isInstallNeedRestart_ == nullptr && return this->latestVersion_ == nullptr
        && return this->name_ == nullptr && return this->status_ == nullptr; };
    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline string currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
    inline ListInstanceExtensionsResponseBodyItems& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListInstanceExtensionsResponseBodyItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extensionId Field Functions 
    bool hasExtensionId() const { return this->extensionId_ != nullptr;};
    void deleteExtensionId() { this->extensionId_ = nullptr;};
    inline string extensionId() const { DARABONBA_PTR_GET_DEFAULT(extensionId_, "") };
    inline ListInstanceExtensionsResponseBodyItems& setExtensionId(string extensionId) { DARABONBA_PTR_SET_VALUE(extensionId_, extensionId) };


    // installedDatabases Field Functions 
    bool hasInstalledDatabases() const { return this->installedDatabases_ != nullptr;};
    void deleteInstalledDatabases() { this->installedDatabases_ = nullptr;};
    inline string installedDatabases() const { DARABONBA_PTR_GET_DEFAULT(installedDatabases_, "") };
    inline ListInstanceExtensionsResponseBodyItems& setInstalledDatabases(string installedDatabases) { DARABONBA_PTR_SET_VALUE(installedDatabases_, installedDatabases) };


    // isInstallNeedRestart Field Functions 
    bool hasIsInstallNeedRestart() const { return this->isInstallNeedRestart_ != nullptr;};
    void deleteIsInstallNeedRestart() { this->isInstallNeedRestart_ = nullptr;};
    inline bool isInstallNeedRestart() const { DARABONBA_PTR_GET_DEFAULT(isInstallNeedRestart_, false) };
    inline ListInstanceExtensionsResponseBodyItems& setIsInstallNeedRestart(bool isInstallNeedRestart) { DARABONBA_PTR_SET_VALUE(isInstallNeedRestart_, isInstallNeedRestart) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline string latestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
    inline ListInstanceExtensionsResponseBodyItems& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListInstanceExtensionsResponseBodyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstanceExtensionsResponseBodyItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The current version.
    std::shared_ptr<string> currentVersion_ = nullptr;
    // The description of the extension.
    std::shared_ptr<string> description_ = nullptr;
    // The extension ID.
    std::shared_ptr<string> extensionId_ = nullptr;
    // The names of the databases in which the extension is installed.
    std::shared_ptr<string> installedDatabases_ = nullptr;
    // Indicates whether an instance restart is required after you install the extension for the extension to take effect.
    std::shared_ptr<bool> isInstallNeedRestart_ = nullptr;
    // The latest version.
    std::shared_ptr<string> latestVersion_ = nullptr;
    // The name of the extension.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the extension.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
