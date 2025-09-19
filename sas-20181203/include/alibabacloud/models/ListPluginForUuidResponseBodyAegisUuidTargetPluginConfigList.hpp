// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINFORUUIDRESPONSEBODYAEGISUUIDTARGETPLUGINCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINFORUUIDRESPONSEBODYAEGISUUIDTARGETPLUGINCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(AegisSuspiciousConfigList, aegisSuspiciousConfigList_);
      DARABONBA_PTR_TO_JSON(PluginInstallCode, pluginInstallCode_);
      DARABONBA_PTR_TO_JSON(PluginName, pluginName_);
      DARABONBA_PTR_TO_JSON(PluginOnlineInstalled, pluginOnlineInstalled_);
      DARABONBA_PTR_TO_JSON(PluginOnlineStatus, pluginOnlineStatus_);
      DARABONBA_PTR_TO_JSON(PluginVersion, pluginVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(AegisSuspiciousConfigList, aegisSuspiciousConfigList_);
      DARABONBA_PTR_FROM_JSON(PluginInstallCode, pluginInstallCode_);
      DARABONBA_PTR_FROM_JSON(PluginName, pluginName_);
      DARABONBA_PTR_FROM_JSON(PluginOnlineInstalled, pluginOnlineInstalled_);
      DARABONBA_PTR_FROM_JSON(PluginOnlineStatus, pluginOnlineStatus_);
      DARABONBA_PTR_FROM_JSON(PluginVersion, pluginVersion_);
    };
    ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList() = default ;
    ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList(const ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList &) = default ;
    ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList(ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList &&) = default ;
    ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList() = default ;
    ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList& operator=(const ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList &) = default ;
    ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList& operator=(ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aegisSuspiciousConfigList_ != nullptr
        && this->pluginInstallCode_ != nullptr && this->pluginName_ != nullptr && this->pluginOnlineInstalled_ != nullptr && this->pluginOnlineStatus_ != nullptr && this->pluginVersion_ != nullptr; };
    // aegisSuspiciousConfigList Field Functions 
    bool hasAegisSuspiciousConfigList() const { return this->aegisSuspiciousConfigList_ != nullptr;};
    void deleteAegisSuspiciousConfigList() { this->aegisSuspiciousConfigList_ = nullptr;};
    inline const vector<Models::ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList> & aegisSuspiciousConfigList() const { DARABONBA_PTR_GET_CONST(aegisSuspiciousConfigList_, vector<Models::ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList>) };
    inline vector<Models::ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList> aegisSuspiciousConfigList() { DARABONBA_PTR_GET(aegisSuspiciousConfigList_, vector<Models::ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList>) };
    inline ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList& setAegisSuspiciousConfigList(const vector<Models::ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList> & aegisSuspiciousConfigList) { DARABONBA_PTR_SET_VALUE(aegisSuspiciousConfigList_, aegisSuspiciousConfigList) };
    inline ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList& setAegisSuspiciousConfigList(vector<Models::ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList> && aegisSuspiciousConfigList) { DARABONBA_PTR_SET_RVALUE(aegisSuspiciousConfigList_, aegisSuspiciousConfigList) };


    // pluginInstallCode Field Functions 
    bool hasPluginInstallCode() const { return this->pluginInstallCode_ != nullptr;};
    void deletePluginInstallCode() { this->pluginInstallCode_ = nullptr;};
    inline string pluginInstallCode() const { DARABONBA_PTR_GET_DEFAULT(pluginInstallCode_, "") };
    inline ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList& setPluginInstallCode(string pluginInstallCode) { DARABONBA_PTR_SET_VALUE(pluginInstallCode_, pluginInstallCode) };


    // pluginName Field Functions 
    bool hasPluginName() const { return this->pluginName_ != nullptr;};
    void deletePluginName() { this->pluginName_ = nullptr;};
    inline string pluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
    inline ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


    // pluginOnlineInstalled Field Functions 
    bool hasPluginOnlineInstalled() const { return this->pluginOnlineInstalled_ != nullptr;};
    void deletePluginOnlineInstalled() { this->pluginOnlineInstalled_ = nullptr;};
    inline bool pluginOnlineInstalled() const { DARABONBA_PTR_GET_DEFAULT(pluginOnlineInstalled_, false) };
    inline ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList& setPluginOnlineInstalled(bool pluginOnlineInstalled) { DARABONBA_PTR_SET_VALUE(pluginOnlineInstalled_, pluginOnlineInstalled) };


    // pluginOnlineStatus Field Functions 
    bool hasPluginOnlineStatus() const { return this->pluginOnlineStatus_ != nullptr;};
    void deletePluginOnlineStatus() { this->pluginOnlineStatus_ = nullptr;};
    inline bool pluginOnlineStatus() const { DARABONBA_PTR_GET_DEFAULT(pluginOnlineStatus_, false) };
    inline ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList& setPluginOnlineStatus(bool pluginOnlineStatus) { DARABONBA_PTR_SET_VALUE(pluginOnlineStatus_, pluginOnlineStatus) };


    // pluginVersion Field Functions 
    bool hasPluginVersion() const { return this->pluginVersion_ != nullptr;};
    void deletePluginVersion() { this->pluginVersion_ = nullptr;};
    inline string pluginVersion() const { DARABONBA_PTR_GET_DEFAULT(pluginVersion_, "") };
    inline ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigList& setPluginVersion(string pluginVersion) { DARABONBA_PTR_SET_VALUE(pluginVersion_, pluginVersion) };


  protected:
    // An array that consists of the configurations of plug-ins.
    std::shared_ptr<vector<Models::ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList>> aegisSuspiciousConfigList_ = nullptr;
    // The installation code of the plug-in.
    std::shared_ptr<string> pluginInstallCode_ = nullptr;
    // The name of the plug-in. Valid values:
    // 
    // *   **alihips**: trojan-specific prevention
    // *   **alisecguard**: attack-specific prevention
    // *   **alinet**: defense against attacks on servers
    std::shared_ptr<string> pluginName_ = nullptr;
    // Indicates whether the plug-in is installed. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> pluginOnlineInstalled_ = nullptr;
    // Indicates whether the plug-in is online. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> pluginOnlineStatus_ = nullptr;
    // The version of the plug-in.
    std::shared_ptr<string> pluginVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
