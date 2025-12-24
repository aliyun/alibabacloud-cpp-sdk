// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYPLAYBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYPLAYBOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class CopyPlaybookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyPlaybookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(SourcePlaybookUuid, sourcePlaybookUuid_);
    };
    friend void from_json(const Darabonba::Json& j, CopyPlaybookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(SourcePlaybookUuid, sourcePlaybookUuid_);
    };
    CopyPlaybookRequest() = default ;
    CopyPlaybookRequest(const CopyPlaybookRequest &) = default ;
    CopyPlaybookRequest(CopyPlaybookRequest &&) = default ;
    CopyPlaybookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyPlaybookRequest() = default ;
    CopyPlaybookRequest& operator=(const CopyPlaybookRequest &) = default ;
    CopyPlaybookRequest& operator=(CopyPlaybookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->displayName_ == nullptr && return this->lang_ == nullptr && return this->releaseVersion_ == nullptr && return this->roleFor_ == nullptr && return this->roleType_ == nullptr
        && return this->sourcePlaybookUuid_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CopyPlaybookRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CopyPlaybookRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CopyPlaybookRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string releaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline CopyPlaybookRequest& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline CopyPlaybookRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline CopyPlaybookRequest& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // sourcePlaybookUuid Field Functions 
    bool hasSourcePlaybookUuid() const { return this->sourcePlaybookUuid_ != nullptr;};
    void deleteSourcePlaybookUuid() { this->sourcePlaybookUuid_ = nullptr;};
    inline string sourcePlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(sourcePlaybookUuid_, "") };
    inline CopyPlaybookRequest& setSourcePlaybookUuid(string sourcePlaybookUuid) { DARABONBA_PTR_SET_VALUE(sourcePlaybookUuid_, sourcePlaybookUuid) };


  protected:
    // The description of the playbook.
    std::shared_ptr<string> description_ = nullptr;
    // The display name of the playbook.
    // 
    // This parameter is required.
    std::shared_ptr<string> displayName_ = nullptr;
    // The language of the content within the request and the response. Valid values:
    // 
    // *   **zh**: Chinese (default).
    // *   **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // The release version of the playbook that you want to copy. Default value: 0. Valid values:
    // 
    // *   \\-1: The version that is being edited.
    // *   0: The latest online version of the current playbook.
    std::shared_ptr<string> releaseVersion_ = nullptr;
    // The ID of the user who switches from the current view to the destination view by using the management account.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    // The type of the view. Valid values:
    // 
    // *   **0** (default): the view of the current account.
    // *   **1**: the view of the global account.
    std::shared_ptr<string> roleType_ = nullptr;
    // The UUID of the playbook that you want to copy.
    // 
    // >  You can call the [DescribePlaybooks](~~DescribePlaybooks~~) operation to query the UUIDs of playbooks.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourcePlaybookUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
