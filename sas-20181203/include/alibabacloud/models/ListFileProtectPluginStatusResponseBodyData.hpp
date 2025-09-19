// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEPROTECTPLUGINSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEPROTECTPLUGINSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListFileProtectPluginStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileProtectPluginStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(InstallCode, installCode_);
      DARABONBA_PTR_TO_JSON(InstallMessage, installMessage_);
      DARABONBA_PTR_TO_JSON(Installed, installed_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Online, online_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(SupportFile, supportFile_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileProtectPluginStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(InstallCode, installCode_);
      DARABONBA_PTR_FROM_JSON(InstallMessage, installMessage_);
      DARABONBA_PTR_FROM_JSON(Installed, installed_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(SupportFile, supportFile_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListFileProtectPluginStatusResponseBodyData() = default ;
    ListFileProtectPluginStatusResponseBodyData(const ListFileProtectPluginStatusResponseBodyData &) = default ;
    ListFileProtectPluginStatusResponseBodyData(ListFileProtectPluginStatusResponseBodyData &&) = default ;
    ListFileProtectPluginStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileProtectPluginStatusResponseBodyData() = default ;
    ListFileProtectPluginStatusResponseBodyData& operator=(const ListFileProtectPluginStatusResponseBodyData &) = default ;
    ListFileProtectPluginStatusResponseBodyData& operator=(ListFileProtectPluginStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientVersion_ != nullptr
        && this->installCode_ != nullptr && this->installMessage_ != nullptr && this->installed_ != nullptr && this->instanceName_ != nullptr && this->internetIp_ != nullptr
        && this->intranetIp_ != nullptr && this->online_ != nullptr && this->platform_ != nullptr && this->supportFile_ != nullptr && this->uuid_ != nullptr; };
    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string clientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline ListFileProtectPluginStatusResponseBodyData& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // installCode Field Functions 
    bool hasInstallCode() const { return this->installCode_ != nullptr;};
    void deleteInstallCode() { this->installCode_ = nullptr;};
    inline string installCode() const { DARABONBA_PTR_GET_DEFAULT(installCode_, "") };
    inline ListFileProtectPluginStatusResponseBodyData& setInstallCode(string installCode) { DARABONBA_PTR_SET_VALUE(installCode_, installCode) };


    // installMessage Field Functions 
    bool hasInstallMessage() const { return this->installMessage_ != nullptr;};
    void deleteInstallMessage() { this->installMessage_ = nullptr;};
    inline string installMessage() const { DARABONBA_PTR_GET_DEFAULT(installMessage_, "") };
    inline ListFileProtectPluginStatusResponseBodyData& setInstallMessage(string installMessage) { DARABONBA_PTR_SET_VALUE(installMessage_, installMessage) };


    // installed Field Functions 
    bool hasInstalled() const { return this->installed_ != nullptr;};
    void deleteInstalled() { this->installed_ = nullptr;};
    inline bool installed() const { DARABONBA_PTR_GET_DEFAULT(installed_, false) };
    inline ListFileProtectPluginStatusResponseBodyData& setInstalled(bool installed) { DARABONBA_PTR_SET_VALUE(installed_, installed) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListFileProtectPluginStatusResponseBodyData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListFileProtectPluginStatusResponseBodyData& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline ListFileProtectPluginStatusResponseBodyData& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool online() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline ListFileProtectPluginStatusResponseBodyData& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ListFileProtectPluginStatusResponseBodyData& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // supportFile Field Functions 
    bool hasSupportFile() const { return this->supportFile_ != nullptr;};
    void deleteSupportFile() { this->supportFile_ = nullptr;};
    inline bool supportFile() const { DARABONBA_PTR_GET_DEFAULT(supportFile_, false) };
    inline ListFileProtectPluginStatusResponseBodyData& setSupportFile(bool supportFile) { DARABONBA_PTR_SET_VALUE(supportFile_, supportFile) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListFileProtectPluginStatusResponseBodyData& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The version of the Security Center agent.
    std::shared_ptr<string> clientVersion_ = nullptr;
    // The returned code after you install the Security Center agent. Valid values:
    // 
    // 1.  0: The installation is successful.
    // 2.  \\-2: The kernel does not support the installation.
    std::shared_ptr<string> installCode_ = nullptr;
    // The returned message after you install the Security Center agent.
    std::shared_ptr<string> installMessage_ = nullptr;
    // Indicates whether the Security Center agent is installed.
    std::shared_ptr<bool> installed_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address that is associated with the instance.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address that is associated with the instance.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // Indicates whether the Security Center agent is online. Valid value:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> online_ = nullptr;
    // The type of the operating system. Valid values:
    // 
    // *   **windows**: Windows
    // *   **linux**: Linux
    std::shared_ptr<string> platform_ = nullptr;
    // Indicates whether the core file monitoring file is supported.
    std::shared_ptr<bool> supportFile_ = nullptr;
    // The UUID of the asset.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
