// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASCRIPTSRESPONSEBODYASCRIPTS_HPP_
#define ALIBABACLOUD_MODELS_LISTASCRIPTSRESPONSEBODYASCRIPTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListAScriptsResponseBodyAScripts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAScriptsResponseBodyAScripts& obj) { 
      DARABONBA_PTR_TO_JSON(AScriptId, AScriptId_);
      DARABONBA_PTR_TO_JSON(AScriptName, AScriptName_);
      DARABONBA_PTR_TO_JSON(AScriptStatus, AScriptStatus_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(ScriptContent, scriptContent_);
    };
    friend void from_json(const Darabonba::Json& j, ListAScriptsResponseBodyAScripts& obj) { 
      DARABONBA_PTR_FROM_JSON(AScriptId, AScriptId_);
      DARABONBA_PTR_FROM_JSON(AScriptName, AScriptName_);
      DARABONBA_PTR_FROM_JSON(AScriptStatus, AScriptStatus_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(ScriptContent, scriptContent_);
    };
    ListAScriptsResponseBodyAScripts() = default ;
    ListAScriptsResponseBodyAScripts(const ListAScriptsResponseBodyAScripts &) = default ;
    ListAScriptsResponseBodyAScripts(ListAScriptsResponseBodyAScripts &&) = default ;
    ListAScriptsResponseBodyAScripts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAScriptsResponseBodyAScripts() = default ;
    ListAScriptsResponseBodyAScripts& operator=(const ListAScriptsResponseBodyAScripts &) = default ;
    ListAScriptsResponseBodyAScripts& operator=(ListAScriptsResponseBodyAScripts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AScriptId_ != nullptr
        && this->AScriptName_ != nullptr && this->AScriptStatus_ != nullptr && this->enabled_ != nullptr && this->listenerId_ != nullptr && this->loadBalancerId_ != nullptr
        && this->scriptContent_ != nullptr; };
    // AScriptId Field Functions 
    bool hasAScriptId() const { return this->AScriptId_ != nullptr;};
    void deleteAScriptId() { this->AScriptId_ = nullptr;};
    inline string AScriptId() const { DARABONBA_PTR_GET_DEFAULT(AScriptId_, "") };
    inline ListAScriptsResponseBodyAScripts& setAScriptId(string AScriptId) { DARABONBA_PTR_SET_VALUE(AScriptId_, AScriptId) };


    // AScriptName Field Functions 
    bool hasAScriptName() const { return this->AScriptName_ != nullptr;};
    void deleteAScriptName() { this->AScriptName_ = nullptr;};
    inline string AScriptName() const { DARABONBA_PTR_GET_DEFAULT(AScriptName_, "") };
    inline ListAScriptsResponseBodyAScripts& setAScriptName(string AScriptName) { DARABONBA_PTR_SET_VALUE(AScriptName_, AScriptName) };


    // AScriptStatus Field Functions 
    bool hasAScriptStatus() const { return this->AScriptStatus_ != nullptr;};
    void deleteAScriptStatus() { this->AScriptStatus_ = nullptr;};
    inline string AScriptStatus() const { DARABONBA_PTR_GET_DEFAULT(AScriptStatus_, "") };
    inline ListAScriptsResponseBodyAScripts& setAScriptStatus(string AScriptStatus) { DARABONBA_PTR_SET_VALUE(AScriptStatus_, AScriptStatus) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ListAScriptsResponseBodyAScripts& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string listenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline ListAScriptsResponseBodyAScripts& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline ListAScriptsResponseBodyAScripts& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // scriptContent Field Functions 
    bool hasScriptContent() const { return this->scriptContent_ != nullptr;};
    void deleteScriptContent() { this->scriptContent_ = nullptr;};
    inline string scriptContent() const { DARABONBA_PTR_GET_DEFAULT(scriptContent_, "") };
    inline ListAScriptsResponseBodyAScripts& setScriptContent(string scriptContent) { DARABONBA_PTR_SET_VALUE(scriptContent_, scriptContent) };


  protected:
    // The AScript rule ID.
    std::shared_ptr<string> AScriptId_ = nullptr;
    // The name of the AScript rule.
    std::shared_ptr<string> AScriptName_ = nullptr;
    // The status of the AScript rule. Valid values:
    // 
    // *   **Creating**
    // *   **Available**
    // *   **Configuring**
    // *   **Deleting**
    std::shared_ptr<string> AScriptStatus_ = nullptr;
    // Indicates whether the AScript rule is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enabled_ = nullptr;
    // The listener ID.
    std::shared_ptr<string> listenerId_ = nullptr;
    // The Application Load Balancer (ALB) instance ID.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The content of the AScript rule.
    std::shared_ptr<string> scriptContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
