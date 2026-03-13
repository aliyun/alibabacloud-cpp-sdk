// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTPLAYBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONVERTPLAYBOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class ConvertPlaybookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertPlaybookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(Taskflow, taskflow_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertPlaybookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(Taskflow, taskflow_);
    };
    ConvertPlaybookRequest() = default ;
    ConvertPlaybookRequest(const ConvertPlaybookRequest &) = default ;
    ConvertPlaybookRequest(ConvertPlaybookRequest &&) = default ;
    ConvertPlaybookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertPlaybookRequest() = default ;
    ConvertPlaybookRequest& operator=(const ConvertPlaybookRequest &) = default ;
    ConvertPlaybookRequest& operator=(ConvertPlaybookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->roleFor_ == nullptr && this->roleType_ == nullptr && this->taskflow_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ConvertPlaybookRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ConvertPlaybookRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline ConvertPlaybookRequest& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // taskflow Field Functions 
    bool hasTaskflow() const { return this->taskflow_ != nullptr;};
    void deleteTaskflow() { this->taskflow_ = nullptr;};
    inline string getTaskflow() const { DARABONBA_PTR_GET_DEFAULT(taskflow_, "") };
    inline ConvertPlaybookRequest& setTaskflow(string taskflow) { DARABONBA_PTR_SET_VALUE(taskflow_, taskflow) };


  protected:
    // Language type for request and response messages. Values:
    // 
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // User ID for the administrator to switch to another member\\"s perspective.
    shared_ptr<int64_t> roleFor_ {};
    // View type. Values:
    // 
    // - 0: Current Alibaba Cloud account view.
    // - 1: View for all accounts under the enterprise.
    shared_ptr<string> roleType_ {};
    // XML configuration information for playbook orchestration.
    // 
    // This parameter is required.
    shared_ptr<string> taskflow_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
