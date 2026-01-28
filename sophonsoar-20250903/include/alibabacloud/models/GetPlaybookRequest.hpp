// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLAYBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPLAYBOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class GetPlaybookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPlaybookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(PlaybookVersion, playbookVersion_);
      DARABONBA_PTR_TO_JSON(PlaybookVersionType, playbookVersionType_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, GetPlaybookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(PlaybookVersion, playbookVersion_);
      DARABONBA_PTR_FROM_JSON(PlaybookVersionType, playbookVersionType_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    GetPlaybookRequest() = default ;
    GetPlaybookRequest(const GetPlaybookRequest &) = default ;
    GetPlaybookRequest(GetPlaybookRequest &&) = default ;
    GetPlaybookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPlaybookRequest() = default ;
    GetPlaybookRequest& operator=(const GetPlaybookRequest &) = default ;
    GetPlaybookRequest& operator=(GetPlaybookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->playbookUuid_ == nullptr && this->playbookVersion_ == nullptr && this->playbookVersionType_ == nullptr && this->roleFor_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetPlaybookRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline GetPlaybookRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // playbookVersion Field Functions 
    bool hasPlaybookVersion() const { return this->playbookVersion_ != nullptr;};
    void deletePlaybookVersion() { this->playbookVersion_ = nullptr;};
    inline string getPlaybookVersion() const { DARABONBA_PTR_GET_DEFAULT(playbookVersion_, "") };
    inline GetPlaybookRequest& setPlaybookVersion(string playbookVersion) { DARABONBA_PTR_SET_VALUE(playbookVersion_, playbookVersion) };


    // playbookVersionType Field Functions 
    bool hasPlaybookVersionType() const { return this->playbookVersionType_ != nullptr;};
    void deletePlaybookVersionType() { this->playbookVersionType_ = nullptr;};
    inline string getPlaybookVersionType() const { DARABONBA_PTR_GET_DEFAULT(playbookVersionType_, "") };
    inline GetPlaybookRequest& setPlaybookVersionType(string playbookVersionType) { DARABONBA_PTR_SET_VALUE(playbookVersionType_, playbookVersionType) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline GetPlaybookRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // The language type for requests and received messages.
    // - **zh** (default): Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The UUID of the playbook.
    // 
    // This parameter is required.
    shared_ptr<string> playbookUuid_ {};
    // The version ID of the playbook, which is only effective when **PlaybookVersionType** is **History**.
    shared_ptr<string> playbookVersion_ {};
    // The version type of the playbook, with the following values:
    // 
    // - **Draft**: Editing state.
    // - **Online**: Online version.
    // - **History**: Historical version.
    shared_ptr<string> playbookVersionType_ {};
    // The user ID for the administrator to switch to another member\\"s perspective.
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
