// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPLAYBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPLAYBOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class ModifyPlaybookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPlaybookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(Taskflow, taskflow_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPlaybookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(Taskflow, taskflow_);
    };
    ModifyPlaybookRequest() = default ;
    ModifyPlaybookRequest(const ModifyPlaybookRequest &) = default ;
    ModifyPlaybookRequest(ModifyPlaybookRequest &&) = default ;
    ModifyPlaybookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPlaybookRequest() = default ;
    ModifyPlaybookRequest& operator=(const ModifyPlaybookRequest &) = default ;
    ModifyPlaybookRequest& operator=(ModifyPlaybookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->displayName_ == nullptr && return this->lang_ == nullptr && return this->playbookUuid_ == nullptr && return this->taskflow_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyPlaybookRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ModifyPlaybookRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyPlaybookRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline ModifyPlaybookRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // taskflow Field Functions 
    bool hasTaskflow() const { return this->taskflow_ != nullptr;};
    void deleteTaskflow() { this->taskflow_ = nullptr;};
    inline string taskflow() const { DARABONBA_PTR_GET_DEFAULT(taskflow_, "") };
    inline ModifyPlaybookRequest& setTaskflow(string taskflow) { DARABONBA_PTR_SET_VALUE(taskflow_, taskflow) };


  protected:
    // The description of the playbook.
    std::shared_ptr<string> description_ = nullptr;
    // The display name of the playbook.
    // 
    // This parameter is required.
    std::shared_ptr<string> displayName_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The UUID of the playbook.
    // 
    // >  You can call the [DescribePlaybooks](~~DescribePlaybooks~~)operation to query the UUIDs of playbooks.
    // 
    // This parameter is required.
    std::shared_ptr<string> playbookUuid_ = nullptr;
    // The XML configuration of the playbook.
    std::shared_ptr<string> taskflow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
