// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSRESPONSEBODYDATAVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSRESPONSEBODYDATAVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListAgentsResponseBodyDataVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentsResponseBodyDataVersions& obj) { 
      DARABONBA_PTR_TO_JSON(created_at, createdAt_);
      DARABONBA_PTR_TO_JSON(install_script, installScript_);
      DARABONBA_PTR_TO_JSON(uninstall_script, uninstallScript_);
      DARABONBA_PTR_TO_JSON(updated_at, updatedAt_);
      DARABONBA_PTR_TO_JSON(upgrade_script, upgradeScript_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentsResponseBodyDataVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(created_at, createdAt_);
      DARABONBA_PTR_FROM_JSON(install_script, installScript_);
      DARABONBA_PTR_FROM_JSON(uninstall_script, uninstallScript_);
      DARABONBA_PTR_FROM_JSON(updated_at, updatedAt_);
      DARABONBA_PTR_FROM_JSON(upgrade_script, upgradeScript_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListAgentsResponseBodyDataVersions() = default ;
    ListAgentsResponseBodyDataVersions(const ListAgentsResponseBodyDataVersions &) = default ;
    ListAgentsResponseBodyDataVersions(ListAgentsResponseBodyDataVersions &&) = default ;
    ListAgentsResponseBodyDataVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentsResponseBodyDataVersions() = default ;
    ListAgentsResponseBodyDataVersions& operator=(const ListAgentsResponseBodyDataVersions &) = default ;
    ListAgentsResponseBodyDataVersions& operator=(ListAgentsResponseBodyDataVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdAt_ != nullptr
        && this->installScript_ != nullptr && this->uninstallScript_ != nullptr && this->updatedAt_ != nullptr && this->upgradeScript_ != nullptr && this->version_ != nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ListAgentsResponseBodyDataVersions& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // installScript Field Functions 
    bool hasInstallScript() const { return this->installScript_ != nullptr;};
    void deleteInstallScript() { this->installScript_ = nullptr;};
    inline string installScript() const { DARABONBA_PTR_GET_DEFAULT(installScript_, "") };
    inline ListAgentsResponseBodyDataVersions& setInstallScript(string installScript) { DARABONBA_PTR_SET_VALUE(installScript_, installScript) };


    // uninstallScript Field Functions 
    bool hasUninstallScript() const { return this->uninstallScript_ != nullptr;};
    void deleteUninstallScript() { this->uninstallScript_ = nullptr;};
    inline string uninstallScript() const { DARABONBA_PTR_GET_DEFAULT(uninstallScript_, "") };
    inline ListAgentsResponseBodyDataVersions& setUninstallScript(string uninstallScript) { DARABONBA_PTR_SET_VALUE(uninstallScript_, uninstallScript) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline ListAgentsResponseBodyDataVersions& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // upgradeScript Field Functions 
    bool hasUpgradeScript() const { return this->upgradeScript_ != nullptr;};
    void deleteUpgradeScript() { this->upgradeScript_ = nullptr;};
    inline string upgradeScript() const { DARABONBA_PTR_GET_DEFAULT(upgradeScript_, "") };
    inline ListAgentsResponseBodyDataVersions& setUpgradeScript(string upgradeScript) { DARABONBA_PTR_SET_VALUE(upgradeScript_, upgradeScript) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListAgentsResponseBodyDataVersions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> installScript_ = nullptr;
    std::shared_ptr<string> uninstallScript_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
    std::shared_ptr<string> upgradeScript_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
