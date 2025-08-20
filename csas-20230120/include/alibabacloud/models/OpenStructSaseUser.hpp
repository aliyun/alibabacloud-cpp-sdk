// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSTRUCTSASEUSER_HPP_
#define ALIBABACLOUD_MODELS_OPENSTRUCTSASEUSER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IdpCustomField.hpp>
#include <alibabacloud/models/OpenStructSaseDepartment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class OpenStructSaseUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenStructSaseUser& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimeUnix, createTimeUnix_);
      DARABONBA_PTR_TO_JSON(CustomFields, customFields_);
      DARABONBA_PTR_TO_JSON(Departments, departments_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_TO_JSON(LeaveTimeUnix, leaveTimeUnix_);
      DARABONBA_PTR_TO_JSON(LoginTimeUnix, loginTimeUnix_);
      DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_TO_JSON(SaseUserStatus, saseUserStatus_);
      DARABONBA_PTR_TO_JSON(SyncTimeUnix, syncTimeUnix_);
      DARABONBA_PTR_TO_JSON(Telephone, telephone_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UpdateTimeUnix, updateTimeUnix_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(WorkStatus, workStatus_);
    };
    friend void from_json(const Darabonba::Json& j, OpenStructSaseUser& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimeUnix, createTimeUnix_);
      DARABONBA_PTR_FROM_JSON(CustomFields, customFields_);
      DARABONBA_PTR_FROM_JSON(Departments, departments_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_FROM_JSON(LeaveTimeUnix, leaveTimeUnix_);
      DARABONBA_PTR_FROM_JSON(LoginTimeUnix, loginTimeUnix_);
      DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_FROM_JSON(SaseUserStatus, saseUserStatus_);
      DARABONBA_PTR_FROM_JSON(SyncTimeUnix, syncTimeUnix_);
      DARABONBA_PTR_FROM_JSON(Telephone, telephone_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UpdateTimeUnix, updateTimeUnix_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(WorkStatus, workStatus_);
    };
    OpenStructSaseUser() = default ;
    OpenStructSaseUser(const OpenStructSaseUser &) = default ;
    OpenStructSaseUser(OpenStructSaseUser &&) = default ;
    OpenStructSaseUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenStructSaseUser() = default ;
    OpenStructSaseUser& operator=(const OpenStructSaseUser &) = default ;
    OpenStructSaseUser& operator=(OpenStructSaseUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTimeUnix_ != nullptr
        && this->customFields_ != nullptr && this->departments_ != nullptr && this->email_ != nullptr && this->idpConfigId_ != nullptr && this->leaveTimeUnix_ != nullptr
        && this->loginTimeUnix_ != nullptr && this->saseUserId_ != nullptr && this->saseUserStatus_ != nullptr && this->syncTimeUnix_ != nullptr && this->telephone_ != nullptr
        && this->title_ != nullptr && this->updateTimeUnix_ != nullptr && this->username_ != nullptr && this->workStatus_ != nullptr; };
    // createTimeUnix Field Functions 
    bool hasCreateTimeUnix() const { return this->createTimeUnix_ != nullptr;};
    void deleteCreateTimeUnix() { this->createTimeUnix_ = nullptr;};
    inline int64_t createTimeUnix() const { DARABONBA_PTR_GET_DEFAULT(createTimeUnix_, 0L) };
    inline OpenStructSaseUser& setCreateTimeUnix(int64_t createTimeUnix) { DARABONBA_PTR_SET_VALUE(createTimeUnix_, createTimeUnix) };


    // customFields Field Functions 
    bool hasCustomFields() const { return this->customFields_ != nullptr;};
    void deleteCustomFields() { this->customFields_ = nullptr;};
    inline const vector<IdpCustomField> & customFields() const { DARABONBA_PTR_GET_CONST(customFields_, vector<IdpCustomField>) };
    inline vector<IdpCustomField> customFields() { DARABONBA_PTR_GET(customFields_, vector<IdpCustomField>) };
    inline OpenStructSaseUser& setCustomFields(const vector<IdpCustomField> & customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };
    inline OpenStructSaseUser& setCustomFields(vector<IdpCustomField> && customFields) { DARABONBA_PTR_SET_RVALUE(customFields_, customFields) };


    // departments Field Functions 
    bool hasDepartments() const { return this->departments_ != nullptr;};
    void deleteDepartments() { this->departments_ = nullptr;};
    inline const vector<OpenStructSaseDepartment> & departments() const { DARABONBA_PTR_GET_CONST(departments_, vector<OpenStructSaseDepartment>) };
    inline vector<OpenStructSaseDepartment> departments() { DARABONBA_PTR_GET(departments_, vector<OpenStructSaseDepartment>) };
    inline OpenStructSaseUser& setDepartments(const vector<OpenStructSaseDepartment> & departments) { DARABONBA_PTR_SET_VALUE(departments_, departments) };
    inline OpenStructSaseUser& setDepartments(vector<OpenStructSaseDepartment> && departments) { DARABONBA_PTR_SET_RVALUE(departments_, departments) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline OpenStructSaseUser& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // idpConfigId Field Functions 
    bool hasIdpConfigId() const { return this->idpConfigId_ != nullptr;};
    void deleteIdpConfigId() { this->idpConfigId_ = nullptr;};
    inline string idpConfigId() const { DARABONBA_PTR_GET_DEFAULT(idpConfigId_, "") };
    inline OpenStructSaseUser& setIdpConfigId(string idpConfigId) { DARABONBA_PTR_SET_VALUE(idpConfigId_, idpConfigId) };


    // leaveTimeUnix Field Functions 
    bool hasLeaveTimeUnix() const { return this->leaveTimeUnix_ != nullptr;};
    void deleteLeaveTimeUnix() { this->leaveTimeUnix_ = nullptr;};
    inline int64_t leaveTimeUnix() const { DARABONBA_PTR_GET_DEFAULT(leaveTimeUnix_, 0L) };
    inline OpenStructSaseUser& setLeaveTimeUnix(int64_t leaveTimeUnix) { DARABONBA_PTR_SET_VALUE(leaveTimeUnix_, leaveTimeUnix) };


    // loginTimeUnix Field Functions 
    bool hasLoginTimeUnix() const { return this->loginTimeUnix_ != nullptr;};
    void deleteLoginTimeUnix() { this->loginTimeUnix_ = nullptr;};
    inline int64_t loginTimeUnix() const { DARABONBA_PTR_GET_DEFAULT(loginTimeUnix_, 0L) };
    inline OpenStructSaseUser& setLoginTimeUnix(int64_t loginTimeUnix) { DARABONBA_PTR_SET_VALUE(loginTimeUnix_, loginTimeUnix) };


    // saseUserId Field Functions 
    bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
    void deleteSaseUserId() { this->saseUserId_ = nullptr;};
    inline string saseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
    inline OpenStructSaseUser& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


    // saseUserStatus Field Functions 
    bool hasSaseUserStatus() const { return this->saseUserStatus_ != nullptr;};
    void deleteSaseUserStatus() { this->saseUserStatus_ = nullptr;};
    inline string saseUserStatus() const { DARABONBA_PTR_GET_DEFAULT(saseUserStatus_, "") };
    inline OpenStructSaseUser& setSaseUserStatus(string saseUserStatus) { DARABONBA_PTR_SET_VALUE(saseUserStatus_, saseUserStatus) };


    // syncTimeUnix Field Functions 
    bool hasSyncTimeUnix() const { return this->syncTimeUnix_ != nullptr;};
    void deleteSyncTimeUnix() { this->syncTimeUnix_ = nullptr;};
    inline int64_t syncTimeUnix() const { DARABONBA_PTR_GET_DEFAULT(syncTimeUnix_, 0L) };
    inline OpenStructSaseUser& setSyncTimeUnix(int64_t syncTimeUnix) { DARABONBA_PTR_SET_VALUE(syncTimeUnix_, syncTimeUnix) };


    // telephone Field Functions 
    bool hasTelephone() const { return this->telephone_ != nullptr;};
    void deleteTelephone() { this->telephone_ = nullptr;};
    inline string telephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
    inline OpenStructSaseUser& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline OpenStructSaseUser& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updateTimeUnix Field Functions 
    bool hasUpdateTimeUnix() const { return this->updateTimeUnix_ != nullptr;};
    void deleteUpdateTimeUnix() { this->updateTimeUnix_ = nullptr;};
    inline int64_t updateTimeUnix() const { DARABONBA_PTR_GET_DEFAULT(updateTimeUnix_, 0L) };
    inline OpenStructSaseUser& setUpdateTimeUnix(int64_t updateTimeUnix) { DARABONBA_PTR_SET_VALUE(updateTimeUnix_, updateTimeUnix) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline OpenStructSaseUser& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // workStatus Field Functions 
    bool hasWorkStatus() const { return this->workStatus_ != nullptr;};
    void deleteWorkStatus() { this->workStatus_ = nullptr;};
    inline string workStatus() const { DARABONBA_PTR_GET_DEFAULT(workStatus_, "") };
    inline OpenStructSaseUser& setWorkStatus(string workStatus) { DARABONBA_PTR_SET_VALUE(workStatus_, workStatus) };


  protected:
    std::shared_ptr<int64_t> createTimeUnix_ = nullptr;
    std::shared_ptr<vector<IdpCustomField>> customFields_ = nullptr;
    std::shared_ptr<vector<OpenStructSaseDepartment>> departments_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> idpConfigId_ = nullptr;
    std::shared_ptr<int64_t> leaveTimeUnix_ = nullptr;
    std::shared_ptr<int64_t> loginTimeUnix_ = nullptr;
    std::shared_ptr<string> saseUserId_ = nullptr;
    std::shared_ptr<string> saseUserStatus_ = nullptr;
    std::shared_ptr<int64_t> syncTimeUnix_ = nullptr;
    std::shared_ptr<string> telephone_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<int64_t> updateTimeUnix_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
    std::shared_ptr<string> workStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
