// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPLAYBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPLAYBOOKREQUEST_HPP_
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
  class UpdatePlaybookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePlaybookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PlaybookDescription, playbookDescription_);
      DARABONBA_PTR_TO_JSON(PlaybookInputConfigs, playbookInputConfigs_);
      DARABONBA_PTR_TO_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_TO_JSON(PlaybookOutputConfigs, playbookOutputConfigs_);
      DARABONBA_PTR_TO_JSON(PlaybookParamType, playbookParamType_);
      DARABONBA_PTR_TO_JSON(PlaybookTaskFlow, playbookTaskFlow_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePlaybookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PlaybookDescription, playbookDescription_);
      DARABONBA_PTR_FROM_JSON(PlaybookInputConfigs, playbookInputConfigs_);
      DARABONBA_PTR_FROM_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_FROM_JSON(PlaybookOutputConfigs, playbookOutputConfigs_);
      DARABONBA_PTR_FROM_JSON(PlaybookParamType, playbookParamType_);
      DARABONBA_PTR_FROM_JSON(PlaybookTaskFlow, playbookTaskFlow_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    UpdatePlaybookRequest() = default ;
    UpdatePlaybookRequest(const UpdatePlaybookRequest &) = default ;
    UpdatePlaybookRequest(UpdatePlaybookRequest &&) = default ;
    UpdatePlaybookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePlaybookRequest() = default ;
    UpdatePlaybookRequest& operator=(const UpdatePlaybookRequest &) = default ;
    UpdatePlaybookRequest& operator=(UpdatePlaybookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->playbookDescription_ == nullptr && this->playbookInputConfigs_ == nullptr && this->playbookName_ == nullptr && this->playbookOutputConfigs_ == nullptr && this->playbookParamType_ == nullptr
        && this->playbookTaskFlow_ == nullptr && this->playbookUuid_ == nullptr && this->roleFor_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdatePlaybookRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // playbookDescription Field Functions 
    bool hasPlaybookDescription() const { return this->playbookDescription_ != nullptr;};
    void deletePlaybookDescription() { this->playbookDescription_ = nullptr;};
    inline string getPlaybookDescription() const { DARABONBA_PTR_GET_DEFAULT(playbookDescription_, "") };
    inline UpdatePlaybookRequest& setPlaybookDescription(string playbookDescription) { DARABONBA_PTR_SET_VALUE(playbookDescription_, playbookDescription) };


    // playbookInputConfigs Field Functions 
    bool hasPlaybookInputConfigs() const { return this->playbookInputConfigs_ != nullptr;};
    void deletePlaybookInputConfigs() { this->playbookInputConfigs_ = nullptr;};
    inline const vector<FieldInputConfig> & getPlaybookInputConfigs() const { DARABONBA_PTR_GET_CONST(playbookInputConfigs_, vector<FieldInputConfig>) };
    inline vector<FieldInputConfig> getPlaybookInputConfigs() { DARABONBA_PTR_GET(playbookInputConfigs_, vector<FieldInputConfig>) };
    inline UpdatePlaybookRequest& setPlaybookInputConfigs(const vector<FieldInputConfig> & playbookInputConfigs) { DARABONBA_PTR_SET_VALUE(playbookInputConfigs_, playbookInputConfigs) };
    inline UpdatePlaybookRequest& setPlaybookInputConfigs(vector<FieldInputConfig> && playbookInputConfigs) { DARABONBA_PTR_SET_RVALUE(playbookInputConfigs_, playbookInputConfigs) };


    // playbookName Field Functions 
    bool hasPlaybookName() const { return this->playbookName_ != nullptr;};
    void deletePlaybookName() { this->playbookName_ = nullptr;};
    inline string getPlaybookName() const { DARABONBA_PTR_GET_DEFAULT(playbookName_, "") };
    inline UpdatePlaybookRequest& setPlaybookName(string playbookName) { DARABONBA_PTR_SET_VALUE(playbookName_, playbookName) };


    // playbookOutputConfigs Field Functions 
    bool hasPlaybookOutputConfigs() const { return this->playbookOutputConfigs_ != nullptr;};
    void deletePlaybookOutputConfigs() { this->playbookOutputConfigs_ = nullptr;};
    inline const vector<FieldOutputConfig> & getPlaybookOutputConfigs() const { DARABONBA_PTR_GET_CONST(playbookOutputConfigs_, vector<FieldOutputConfig>) };
    inline vector<FieldOutputConfig> getPlaybookOutputConfigs() { DARABONBA_PTR_GET(playbookOutputConfigs_, vector<FieldOutputConfig>) };
    inline UpdatePlaybookRequest& setPlaybookOutputConfigs(const vector<FieldOutputConfig> & playbookOutputConfigs) { DARABONBA_PTR_SET_VALUE(playbookOutputConfigs_, playbookOutputConfigs) };
    inline UpdatePlaybookRequest& setPlaybookOutputConfigs(vector<FieldOutputConfig> && playbookOutputConfigs) { DARABONBA_PTR_SET_RVALUE(playbookOutputConfigs_, playbookOutputConfigs) };


    // playbookParamType Field Functions 
    bool hasPlaybookParamType() const { return this->playbookParamType_ != nullptr;};
    void deletePlaybookParamType() { this->playbookParamType_ = nullptr;};
    inline string getPlaybookParamType() const { DARABONBA_PTR_GET_DEFAULT(playbookParamType_, "") };
    inline UpdatePlaybookRequest& setPlaybookParamType(string playbookParamType) { DARABONBA_PTR_SET_VALUE(playbookParamType_, playbookParamType) };


    // playbookTaskFlow Field Functions 
    bool hasPlaybookTaskFlow() const { return this->playbookTaskFlow_ != nullptr;};
    void deletePlaybookTaskFlow() { this->playbookTaskFlow_ = nullptr;};
    inline string getPlaybookTaskFlow() const { DARABONBA_PTR_GET_DEFAULT(playbookTaskFlow_, "") };
    inline UpdatePlaybookRequest& setPlaybookTaskFlow(string playbookTaskFlow) { DARABONBA_PTR_SET_VALUE(playbookTaskFlow_, playbookTaskFlow) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline UpdatePlaybookRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdatePlaybookRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // The language type for requests and received messages. Values:
    // 
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // Description of the playbook.
    shared_ptr<string> playbookDescription_ {};
    // List of input parameter configurations for the playbook.
    shared_ptr<vector<FieldInputConfig>> playbookInputConfigs_ {};
    // The name of the playbook.
    shared_ptr<string> playbookName_ {};
    // List of output parameter configurations for the playbook.
    shared_ptr<vector<FieldOutputConfig>> playbookOutputConfigs_ {};
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
    shared_ptr<string> playbookParamType_ {};
    // Content of the playbook.
    shared_ptr<string> playbookTaskFlow_ {};
    // UUID of the playbook.
    // 
    // This parameter is required.
    shared_ptr<string> playbookUuid_ {};
    // The user ID for the administrator to switch to another member\\"s perspective.
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
