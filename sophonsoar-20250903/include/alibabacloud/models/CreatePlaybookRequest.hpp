// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLAYBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLAYBOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FieldInputConfig.hpp>
#include <alibabacloud/models/FieldOutputConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class CreatePlaybookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePlaybookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PlaybookDescription, playbookDescription_);
      DARABONBA_PTR_TO_JSON(PlaybookInputConfigs, playbookInputConfigs_);
      DARABONBA_PTR_TO_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_TO_JSON(PlaybookOutputConfigs, playbookOutputConfigs_);
      DARABONBA_PTR_TO_JSON(PlaybookParamType, playbookParamType_);
      DARABONBA_PTR_TO_JSON(PlaybookTaskFlow, playbookTaskFlow_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(SrcPlaybookUuid, srcPlaybookUuid_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePlaybookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PlaybookDescription, playbookDescription_);
      DARABONBA_PTR_FROM_JSON(PlaybookInputConfigs, playbookInputConfigs_);
      DARABONBA_PTR_FROM_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_FROM_JSON(PlaybookOutputConfigs, playbookOutputConfigs_);
      DARABONBA_PTR_FROM_JSON(PlaybookParamType, playbookParamType_);
      DARABONBA_PTR_FROM_JSON(PlaybookTaskFlow, playbookTaskFlow_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(SrcPlaybookUuid, srcPlaybookUuid_);
    };
    CreatePlaybookRequest() = default ;
    CreatePlaybookRequest(const CreatePlaybookRequest &) = default ;
    CreatePlaybookRequest(CreatePlaybookRequest &&) = default ;
    CreatePlaybookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePlaybookRequest() = default ;
    CreatePlaybookRequest& operator=(const CreatePlaybookRequest &) = default ;
    CreatePlaybookRequest& operator=(CreatePlaybookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->playbookDescription_ == nullptr && return this->playbookInputConfigs_ == nullptr && return this->playbookName_ == nullptr && return this->playbookOutputConfigs_ == nullptr && return this->playbookParamType_ == nullptr
        && return this->playbookTaskFlow_ == nullptr && return this->roleFor_ == nullptr && return this->srcPlaybookUuid_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreatePlaybookRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // playbookDescription Field Functions 
    bool hasPlaybookDescription() const { return this->playbookDescription_ != nullptr;};
    void deletePlaybookDescription() { this->playbookDescription_ = nullptr;};
    inline string playbookDescription() const { DARABONBA_PTR_GET_DEFAULT(playbookDescription_, "") };
    inline CreatePlaybookRequest& setPlaybookDescription(string playbookDescription) { DARABONBA_PTR_SET_VALUE(playbookDescription_, playbookDescription) };


    // playbookInputConfigs Field Functions 
    bool hasPlaybookInputConfigs() const { return this->playbookInputConfigs_ != nullptr;};
    void deletePlaybookInputConfigs() { this->playbookInputConfigs_ = nullptr;};
    inline const vector<FieldInputConfig> & playbookInputConfigs() const { DARABONBA_PTR_GET_CONST(playbookInputConfigs_, vector<FieldInputConfig>) };
    inline vector<FieldInputConfig> playbookInputConfigs() { DARABONBA_PTR_GET(playbookInputConfigs_, vector<FieldInputConfig>) };
    inline CreatePlaybookRequest& setPlaybookInputConfigs(const vector<FieldInputConfig> & playbookInputConfigs) { DARABONBA_PTR_SET_VALUE(playbookInputConfigs_, playbookInputConfigs) };
    inline CreatePlaybookRequest& setPlaybookInputConfigs(vector<FieldInputConfig> && playbookInputConfigs) { DARABONBA_PTR_SET_RVALUE(playbookInputConfigs_, playbookInputConfigs) };


    // playbookName Field Functions 
    bool hasPlaybookName() const { return this->playbookName_ != nullptr;};
    void deletePlaybookName() { this->playbookName_ = nullptr;};
    inline string playbookName() const { DARABONBA_PTR_GET_DEFAULT(playbookName_, "") };
    inline CreatePlaybookRequest& setPlaybookName(string playbookName) { DARABONBA_PTR_SET_VALUE(playbookName_, playbookName) };


    // playbookOutputConfigs Field Functions 
    bool hasPlaybookOutputConfigs() const { return this->playbookOutputConfigs_ != nullptr;};
    void deletePlaybookOutputConfigs() { this->playbookOutputConfigs_ = nullptr;};
    inline const vector<FieldOutputConfig> & playbookOutputConfigs() const { DARABONBA_PTR_GET_CONST(playbookOutputConfigs_, vector<FieldOutputConfig>) };
    inline vector<FieldOutputConfig> playbookOutputConfigs() { DARABONBA_PTR_GET(playbookOutputConfigs_, vector<FieldOutputConfig>) };
    inline CreatePlaybookRequest& setPlaybookOutputConfigs(const vector<FieldOutputConfig> & playbookOutputConfigs) { DARABONBA_PTR_SET_VALUE(playbookOutputConfigs_, playbookOutputConfigs) };
    inline CreatePlaybookRequest& setPlaybookOutputConfigs(vector<FieldOutputConfig> && playbookOutputConfigs) { DARABONBA_PTR_SET_RVALUE(playbookOutputConfigs_, playbookOutputConfigs) };


    // playbookParamType Field Functions 
    bool hasPlaybookParamType() const { return this->playbookParamType_ != nullptr;};
    void deletePlaybookParamType() { this->playbookParamType_ = nullptr;};
    inline string playbookParamType() const { DARABONBA_PTR_GET_DEFAULT(playbookParamType_, "") };
    inline CreatePlaybookRequest& setPlaybookParamType(string playbookParamType) { DARABONBA_PTR_SET_VALUE(playbookParamType_, playbookParamType) };


    // playbookTaskFlow Field Functions 
    bool hasPlaybookTaskFlow() const { return this->playbookTaskFlow_ != nullptr;};
    void deletePlaybookTaskFlow() { this->playbookTaskFlow_ = nullptr;};
    inline string playbookTaskFlow() const { DARABONBA_PTR_GET_DEFAULT(playbookTaskFlow_, "") };
    inline CreatePlaybookRequest& setPlaybookTaskFlow(string playbookTaskFlow) { DARABONBA_PTR_SET_VALUE(playbookTaskFlow_, playbookTaskFlow) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline CreatePlaybookRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // srcPlaybookUuid Field Functions 
    bool hasSrcPlaybookUuid() const { return this->srcPlaybookUuid_ != nullptr;};
    void deleteSrcPlaybookUuid() { this->srcPlaybookUuid_ = nullptr;};
    inline string srcPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(srcPlaybookUuid_, "") };
    inline CreatePlaybookRequest& setSrcPlaybookUuid(string srcPlaybookUuid) { DARABONBA_PTR_SET_VALUE(srcPlaybookUuid_, srcPlaybookUuid) };


  protected:
    // Language type for receiving messages. Values:
    // 
    // - **zh** (default): Chinese.
    // - **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // Description of the playbook.
    std::shared_ptr<string> playbookDescription_ = nullptr;
    // Input parameter configuration of the playbook.
    std::shared_ptr<vector<FieldInputConfig>> playbookInputConfigs_ = nullptr;
    // Name of the playbook, without special characters.
    // 
    // This parameter is required.
    std::shared_ptr<string> playbookName_ = nullptr;
    // Output parameter configuration of the playbook.
    std::shared_ptr<vector<FieldOutputConfig>> playbookOutputConfigs_ = nullptr;
    // Type of input parameters for the playbook.
    // 
    // - **template-ip**: IP entity.
    // - **template-file**: File entity.
    // - **template-process**: Process entity.
    // - **template-host**: Host entity.
    // - **template-domain**: Domain entity.
    // - **template-container**: Container entity.
    // - **template-incident**: Security incident.
    // - **template-alert**: Security alert.
    // - **custom**: Custom.
    std::shared_ptr<string> playbookParamType_ = nullptr;
    // Workflow of the playbook.
    std::shared_ptr<string> playbookTaskFlow_ = nullptr;
    // Resource directory member account ID.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    // In a copy scenario, the UUID of the source playbook needs to be filled in. When this parameter has a value, all other parameters except the playbook name and description are invalid.
    std::shared_ptr<string> srcPlaybookUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
