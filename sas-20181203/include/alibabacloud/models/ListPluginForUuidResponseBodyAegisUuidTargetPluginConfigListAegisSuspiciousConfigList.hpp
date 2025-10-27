// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINFORUUIDRESPONSEBODYAEGISUUIDTARGETPLUGINCONFIGLISTAEGISSUSPICIOUSCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINFORUUIDRESPONSEBODYAEGISUUIDTARGETPLUGINCONFIGLISTAEGISSUSPICIOUSCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(OverallConfig, overallConfig_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(OverallConfig, overallConfig_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList() = default ;
    ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList(const ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList &) = default ;
    ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList(ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList &&) = default ;
    ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList() = default ;
    ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList& operator=(const ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList &) = default ;
    ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList& operator=(ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->msg_ == nullptr && return this->overallConfig_ == nullptr && return this->type_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline bool config() const { DARABONBA_PTR_GET_DEFAULT(config_, false) };
    inline ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList& setConfig(bool config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // overallConfig Field Functions 
    bool hasOverallConfig() const { return this->overallConfig_ != nullptr;};
    void deleteOverallConfig() { this->overallConfig_ = nullptr;};
    inline bool overallConfig() const { DARABONBA_PTR_GET_DEFAULT(overallConfig_, false) };
    inline ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList& setOverallConfig(bool overallConfig) { DARABONBA_PTR_SET_VALUE(overallConfig_, overallConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListPluginForUuidResponseBodyAegisUuidTargetPluginConfigListAegisSuspiciousConfigList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Indicates whether the plug-in is enabled. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> config_ = nullptr;
    // The message that indicates whether you are authorized to install the plug-in on your server or whether the plug-in is installed on your server. Valid values:
    // 
    // *   **authorized**: authorized
    // *   **unauthorized**: unauthorized
    // *   **unbind**: not installed
    // *   **nonsupport**: not supported
    std::shared_ptr<string> msg_ = nullptr;
    // Indicates whether the plug-in is globally configured. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> overallConfig_ = nullptr;
    // The name of the plug-in. Valid values:
    // 
    // *   **alihips**: trojan-specific prevention
    // *   **alisecguard**: attack-specific prevention
    // *   **alinet**: defense against attacks on servers
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
