// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEASCRIPTSREQUESTASCRIPTS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEASCRIPTSREQUESTASCRIPTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAScriptsRequestAScriptsExtAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateAScriptsRequestAScripts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAScriptsRequestAScripts& obj) { 
      DARABONBA_PTR_TO_JSON(AScriptId, AScriptId_);
      DARABONBA_PTR_TO_JSON(AScriptName, AScriptName_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ExtAttributeEnabled, extAttributeEnabled_);
      DARABONBA_PTR_TO_JSON(ExtAttributes, extAttributes_);
      DARABONBA_PTR_TO_JSON(ScriptContent, scriptContent_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAScriptsRequestAScripts& obj) { 
      DARABONBA_PTR_FROM_JSON(AScriptId, AScriptId_);
      DARABONBA_PTR_FROM_JSON(AScriptName, AScriptName_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ExtAttributeEnabled, extAttributeEnabled_);
      DARABONBA_PTR_FROM_JSON(ExtAttributes, extAttributes_);
      DARABONBA_PTR_FROM_JSON(ScriptContent, scriptContent_);
    };
    UpdateAScriptsRequestAScripts() = default ;
    UpdateAScriptsRequestAScripts(const UpdateAScriptsRequestAScripts &) = default ;
    UpdateAScriptsRequestAScripts(UpdateAScriptsRequestAScripts &&) = default ;
    UpdateAScriptsRequestAScripts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAScriptsRequestAScripts() = default ;
    UpdateAScriptsRequestAScripts& operator=(const UpdateAScriptsRequestAScripts &) = default ;
    UpdateAScriptsRequestAScripts& operator=(UpdateAScriptsRequestAScripts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AScriptId_ != nullptr
        && this->AScriptName_ != nullptr && this->enabled_ != nullptr && this->extAttributeEnabled_ != nullptr && this->extAttributes_ != nullptr && this->scriptContent_ != nullptr; };
    // AScriptId Field Functions 
    bool hasAScriptId() const { return this->AScriptId_ != nullptr;};
    void deleteAScriptId() { this->AScriptId_ = nullptr;};
    inline string AScriptId() const { DARABONBA_PTR_GET_DEFAULT(AScriptId_, "") };
    inline UpdateAScriptsRequestAScripts& setAScriptId(string AScriptId) { DARABONBA_PTR_SET_VALUE(AScriptId_, AScriptId) };


    // AScriptName Field Functions 
    bool hasAScriptName() const { return this->AScriptName_ != nullptr;};
    void deleteAScriptName() { this->AScriptName_ = nullptr;};
    inline string AScriptName() const { DARABONBA_PTR_GET_DEFAULT(AScriptName_, "") };
    inline UpdateAScriptsRequestAScripts& setAScriptName(string AScriptName) { DARABONBA_PTR_SET_VALUE(AScriptName_, AScriptName) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateAScriptsRequestAScripts& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // extAttributeEnabled Field Functions 
    bool hasExtAttributeEnabled() const { return this->extAttributeEnabled_ != nullptr;};
    void deleteExtAttributeEnabled() { this->extAttributeEnabled_ = nullptr;};
    inline bool extAttributeEnabled() const { DARABONBA_PTR_GET_DEFAULT(extAttributeEnabled_, false) };
    inline UpdateAScriptsRequestAScripts& setExtAttributeEnabled(bool extAttributeEnabled) { DARABONBA_PTR_SET_VALUE(extAttributeEnabled_, extAttributeEnabled) };


    // extAttributes Field Functions 
    bool hasExtAttributes() const { return this->extAttributes_ != nullptr;};
    void deleteExtAttributes() { this->extAttributes_ = nullptr;};
    inline const vector<Models::UpdateAScriptsRequestAScriptsExtAttributes> & extAttributes() const { DARABONBA_PTR_GET_CONST(extAttributes_, vector<Models::UpdateAScriptsRequestAScriptsExtAttributes>) };
    inline vector<Models::UpdateAScriptsRequestAScriptsExtAttributes> extAttributes() { DARABONBA_PTR_GET(extAttributes_, vector<Models::UpdateAScriptsRequestAScriptsExtAttributes>) };
    inline UpdateAScriptsRequestAScripts& setExtAttributes(const vector<Models::UpdateAScriptsRequestAScriptsExtAttributes> & extAttributes) { DARABONBA_PTR_SET_VALUE(extAttributes_, extAttributes) };
    inline UpdateAScriptsRequestAScripts& setExtAttributes(vector<Models::UpdateAScriptsRequestAScriptsExtAttributes> && extAttributes) { DARABONBA_PTR_SET_RVALUE(extAttributes_, extAttributes) };


    // scriptContent Field Functions 
    bool hasScriptContent() const { return this->scriptContent_ != nullptr;};
    void deleteScriptContent() { this->scriptContent_ = nullptr;};
    inline string scriptContent() const { DARABONBA_PTR_GET_DEFAULT(scriptContent_, "") };
    inline UpdateAScriptsRequestAScripts& setScriptContent(string scriptContent) { DARABONBA_PTR_SET_VALUE(scriptContent_, scriptContent) };


  protected:
    // The rule ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> AScriptId_ = nullptr;
    // The name of the AScript rule.
    // 
    // The name must be 2 to 128 character in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It must start with a letter.
    std::shared_ptr<string> AScriptName_ = nullptr;
    // Specifies whether to enable the AScript rule. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> enabled_ = nullptr;
    // Specifies whether to enable the extended attributes of the Ascript rule. Valid values:
    // 
    // *   true
    // *   false (false)
    std::shared_ptr<bool> extAttributeEnabled_ = nullptr;
    // The extended attribute.
    std::shared_ptr<vector<Models::UpdateAScriptsRequestAScriptsExtAttributes>> extAttributes_ = nullptr;
    // The content of the AScript rule.
    std::shared_ptr<string> scriptContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
