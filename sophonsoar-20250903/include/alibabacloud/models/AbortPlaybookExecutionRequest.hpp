// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ABORTPLAYBOOKEXECUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ABORTPLAYBOOKEXECUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class AbortPlaybookExecutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AbortPlaybookExecutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PlaybookExecutionUuid, playbookExecutionUuid_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, AbortPlaybookExecutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PlaybookExecutionUuid, playbookExecutionUuid_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    AbortPlaybookExecutionRequest() = default ;
    AbortPlaybookExecutionRequest(const AbortPlaybookExecutionRequest &) = default ;
    AbortPlaybookExecutionRequest(AbortPlaybookExecutionRequest &&) = default ;
    AbortPlaybookExecutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AbortPlaybookExecutionRequest() = default ;
    AbortPlaybookExecutionRequest& operator=(const AbortPlaybookExecutionRequest &) = default ;
    AbortPlaybookExecutionRequest& operator=(AbortPlaybookExecutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->playbookExecutionUuid_ == nullptr && this->playbookUuid_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AbortPlaybookExecutionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // playbookExecutionUuid Field Functions 
    bool hasPlaybookExecutionUuid() const { return this->playbookExecutionUuid_ != nullptr;};
    void deletePlaybookExecutionUuid() { this->playbookExecutionUuid_ = nullptr;};
    inline string getPlaybookExecutionUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookExecutionUuid_, "") };
    inline AbortPlaybookExecutionRequest& setPlaybookExecutionUuid(string playbookExecutionUuid) { DARABONBA_PTR_SET_VALUE(playbookExecutionUuid_, playbookExecutionUuid) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline AbortPlaybookExecutionRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline AbortPlaybookExecutionRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline AbortPlaybookExecutionRequest& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    shared_ptr<string> lang_ {};
    // This parameter is required.
    shared_ptr<string> playbookExecutionUuid_ {};
    // This parameter is required.
    shared_ptr<string> playbookUuid_ {};
    shared_ptr<int64_t> roleFor_ {};
    shared_ptr<string> roleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
