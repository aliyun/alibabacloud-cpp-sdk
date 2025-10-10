// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEASCRIPTSREQUESTASCRIPTS_HPP_
#define ALIBABACLOUD_MODELS_CREATEASCRIPTSREQUESTASCRIPTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAScriptsRequestAScriptsExtAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateAScriptsRequestAScripts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAScriptsRequestAScripts& obj) { 
      DARABONBA_PTR_TO_JSON(AScriptName, AScriptName_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ExtAttributeEnabled, extAttributeEnabled_);
      DARABONBA_PTR_TO_JSON(ExtAttributes, extAttributes_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(ScriptContent, scriptContent_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAScriptsRequestAScripts& obj) { 
      DARABONBA_PTR_FROM_JSON(AScriptName, AScriptName_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ExtAttributeEnabled, extAttributeEnabled_);
      DARABONBA_PTR_FROM_JSON(ExtAttributes, extAttributes_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(ScriptContent, scriptContent_);
    };
    CreateAScriptsRequestAScripts() = default ;
    CreateAScriptsRequestAScripts(const CreateAScriptsRequestAScripts &) = default ;
    CreateAScriptsRequestAScripts(CreateAScriptsRequestAScripts &&) = default ;
    CreateAScriptsRequestAScripts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAScriptsRequestAScripts() = default ;
    CreateAScriptsRequestAScripts& operator=(const CreateAScriptsRequestAScripts &) = default ;
    CreateAScriptsRequestAScripts& operator=(CreateAScriptsRequestAScripts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AScriptName_ != nullptr
        && this->enabled_ != nullptr && this->extAttributeEnabled_ != nullptr && this->extAttributes_ != nullptr && this->position_ != nullptr && this->scriptContent_ != nullptr; };
    // AScriptName Field Functions 
    bool hasAScriptName() const { return this->AScriptName_ != nullptr;};
    void deleteAScriptName() { this->AScriptName_ = nullptr;};
    inline string AScriptName() const { DARABONBA_PTR_GET_DEFAULT(AScriptName_, "") };
    inline CreateAScriptsRequestAScripts& setAScriptName(string AScriptName) { DARABONBA_PTR_SET_VALUE(AScriptName_, AScriptName) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateAScriptsRequestAScripts& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // extAttributeEnabled Field Functions 
    bool hasExtAttributeEnabled() const { return this->extAttributeEnabled_ != nullptr;};
    void deleteExtAttributeEnabled() { this->extAttributeEnabled_ = nullptr;};
    inline bool extAttributeEnabled() const { DARABONBA_PTR_GET_DEFAULT(extAttributeEnabled_, false) };
    inline CreateAScriptsRequestAScripts& setExtAttributeEnabled(bool extAttributeEnabled) { DARABONBA_PTR_SET_VALUE(extAttributeEnabled_, extAttributeEnabled) };


    // extAttributes Field Functions 
    bool hasExtAttributes() const { return this->extAttributes_ != nullptr;};
    void deleteExtAttributes() { this->extAttributes_ = nullptr;};
    inline const vector<Models::CreateAScriptsRequestAScriptsExtAttributes> & extAttributes() const { DARABONBA_PTR_GET_CONST(extAttributes_, vector<Models::CreateAScriptsRequestAScriptsExtAttributes>) };
    inline vector<Models::CreateAScriptsRequestAScriptsExtAttributes> extAttributes() { DARABONBA_PTR_GET(extAttributes_, vector<Models::CreateAScriptsRequestAScriptsExtAttributes>) };
    inline CreateAScriptsRequestAScripts& setExtAttributes(const vector<Models::CreateAScriptsRequestAScriptsExtAttributes> & extAttributes) { DARABONBA_PTR_SET_VALUE(extAttributes_, extAttributes) };
    inline CreateAScriptsRequestAScripts& setExtAttributes(vector<Models::CreateAScriptsRequestAScriptsExtAttributes> && extAttributes) { DARABONBA_PTR_SET_RVALUE(extAttributes_, extAttributes) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string position() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline CreateAScriptsRequestAScripts& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // scriptContent Field Functions 
    bool hasScriptContent() const { return this->scriptContent_ != nullptr;};
    void deleteScriptContent() { this->scriptContent_ = nullptr;};
    inline string scriptContent() const { DARABONBA_PTR_GET_DEFAULT(scriptContent_, "") };
    inline CreateAScriptsRequestAScripts& setScriptContent(string scriptContent) { DARABONBA_PTR_SET_VALUE(scriptContent_, scriptContent) };


  protected:
    // The name of the AScript rule.
    // 
    // The length must be between 2 and 128 characters. This name must start with a letter and can contain letters, digits, periods (.), underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> AScriptName_ = nullptr;
    // Enables the AScript rule. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> enabled_ = nullptr;
    // Enables the extended attribute of the Ascript rule. Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> extAttributeEnabled_ = nullptr;
    // The extended attribute of the AScript rule.
    std::shared_ptr<vector<Models::CreateAScriptsRequestAScriptsExtAttributes>> extAttributes_ = nullptr;
    // The position where the Ascript rule is evaluated. Valid values are:
    // 
    // *   RequestHead (default): before inbound rules are evaluated
    // *   RequestFoot: after inbound rules are evaluated
    // *   ResponseHead: before outbound rules are evaluated
    std::shared_ptr<string> position_ = nullptr;
    // The content of the AScript rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> scriptContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
