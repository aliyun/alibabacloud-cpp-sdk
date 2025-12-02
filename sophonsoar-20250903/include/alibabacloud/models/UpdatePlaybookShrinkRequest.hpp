// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPLAYBOOKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPLAYBOOKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class UpdatePlaybookShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePlaybookShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PlaybookDescription, playbookDescription_);
      DARABONBA_PTR_TO_JSON(PlaybookInputConfigs, playbookInputConfigsShrink_);
      DARABONBA_PTR_TO_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_TO_JSON(PlaybookOutputConfigs, playbookOutputConfigsShrink_);
      DARABONBA_PTR_TO_JSON(PlaybookParamType, playbookParamType_);
      DARABONBA_PTR_TO_JSON(PlaybookTaskFlow, playbookTaskFlow_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePlaybookShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PlaybookDescription, playbookDescription_);
      DARABONBA_PTR_FROM_JSON(PlaybookInputConfigs, playbookInputConfigsShrink_);
      DARABONBA_PTR_FROM_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_FROM_JSON(PlaybookOutputConfigs, playbookOutputConfigsShrink_);
      DARABONBA_PTR_FROM_JSON(PlaybookParamType, playbookParamType_);
      DARABONBA_PTR_FROM_JSON(PlaybookTaskFlow, playbookTaskFlow_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    UpdatePlaybookShrinkRequest() = default ;
    UpdatePlaybookShrinkRequest(const UpdatePlaybookShrinkRequest &) = default ;
    UpdatePlaybookShrinkRequest(UpdatePlaybookShrinkRequest &&) = default ;
    UpdatePlaybookShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePlaybookShrinkRequest() = default ;
    UpdatePlaybookShrinkRequest& operator=(const UpdatePlaybookShrinkRequest &) = default ;
    UpdatePlaybookShrinkRequest& operator=(UpdatePlaybookShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->playbookDescription_ == nullptr && return this->playbookInputConfigsShrink_ == nullptr && return this->playbookName_ == nullptr && return this->playbookOutputConfigsShrink_ == nullptr && return this->playbookParamType_ == nullptr
        && return this->playbookTaskFlow_ == nullptr && return this->playbookUuid_ == nullptr && return this->roleFor_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdatePlaybookShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // playbookDescription Field Functions 
    bool hasPlaybookDescription() const { return this->playbookDescription_ != nullptr;};
    void deletePlaybookDescription() { this->playbookDescription_ = nullptr;};
    inline string playbookDescription() const { DARABONBA_PTR_GET_DEFAULT(playbookDescription_, "") };
    inline UpdatePlaybookShrinkRequest& setPlaybookDescription(string playbookDescription) { DARABONBA_PTR_SET_VALUE(playbookDescription_, playbookDescription) };


    // playbookInputConfigsShrink Field Functions 
    bool hasPlaybookInputConfigsShrink() const { return this->playbookInputConfigsShrink_ != nullptr;};
    void deletePlaybookInputConfigsShrink() { this->playbookInputConfigsShrink_ = nullptr;};
    inline string playbookInputConfigsShrink() const { DARABONBA_PTR_GET_DEFAULT(playbookInputConfigsShrink_, "") };
    inline UpdatePlaybookShrinkRequest& setPlaybookInputConfigsShrink(string playbookInputConfigsShrink) { DARABONBA_PTR_SET_VALUE(playbookInputConfigsShrink_, playbookInputConfigsShrink) };


    // playbookName Field Functions 
    bool hasPlaybookName() const { return this->playbookName_ != nullptr;};
    void deletePlaybookName() { this->playbookName_ = nullptr;};
    inline string playbookName() const { DARABONBA_PTR_GET_DEFAULT(playbookName_, "") };
    inline UpdatePlaybookShrinkRequest& setPlaybookName(string playbookName) { DARABONBA_PTR_SET_VALUE(playbookName_, playbookName) };


    // playbookOutputConfigsShrink Field Functions 
    bool hasPlaybookOutputConfigsShrink() const { return this->playbookOutputConfigsShrink_ != nullptr;};
    void deletePlaybookOutputConfigsShrink() { this->playbookOutputConfigsShrink_ = nullptr;};
    inline string playbookOutputConfigsShrink() const { DARABONBA_PTR_GET_DEFAULT(playbookOutputConfigsShrink_, "") };
    inline UpdatePlaybookShrinkRequest& setPlaybookOutputConfigsShrink(string playbookOutputConfigsShrink) { DARABONBA_PTR_SET_VALUE(playbookOutputConfigsShrink_, playbookOutputConfigsShrink) };


    // playbookParamType Field Functions 
    bool hasPlaybookParamType() const { return this->playbookParamType_ != nullptr;};
    void deletePlaybookParamType() { this->playbookParamType_ = nullptr;};
    inline string playbookParamType() const { DARABONBA_PTR_GET_DEFAULT(playbookParamType_, "") };
    inline UpdatePlaybookShrinkRequest& setPlaybookParamType(string playbookParamType) { DARABONBA_PTR_SET_VALUE(playbookParamType_, playbookParamType) };


    // playbookTaskFlow Field Functions 
    bool hasPlaybookTaskFlow() const { return this->playbookTaskFlow_ != nullptr;};
    void deletePlaybookTaskFlow() { this->playbookTaskFlow_ = nullptr;};
    inline string playbookTaskFlow() const { DARABONBA_PTR_GET_DEFAULT(playbookTaskFlow_, "") };
    inline UpdatePlaybookShrinkRequest& setPlaybookTaskFlow(string playbookTaskFlow) { DARABONBA_PTR_SET_VALUE(playbookTaskFlow_, playbookTaskFlow) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline UpdatePlaybookShrinkRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdatePlaybookShrinkRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // The language type for requests and received messages. Values:
    // 
    // - **zh** (default): Chinese.
    // - **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // Description of the playbook.
    std::shared_ptr<string> playbookDescription_ = nullptr;
    // List of input parameter configurations for the playbook.
    std::shared_ptr<string> playbookInputConfigsShrink_ = nullptr;
    // The name of the playbook.
    std::shared_ptr<string> playbookName_ = nullptr;
    // List of output parameter configurations for the playbook.
    std::shared_ptr<string> playbookOutputConfigsShrink_ = nullptr;
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
    // Content of the playbook.
    std::shared_ptr<string> playbookTaskFlow_ = nullptr;
    // UUID of the playbook.
    // 
    // This parameter is required.
    std::shared_ptr<string> playbookUuid_ = nullptr;
    // The user ID for the administrator to switch to another member\\"s perspective.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
