// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERUSERSRESPONSEBODYUSERS_HPP_
#define ALIBABACLOUD_MODELS_FILTERUSERSRESPONSEBODYUSERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FilterUsersResponseBodyUsersExternalInfo.hpp>
#include <vector>
#include <alibabacloud/models/FilterUsersResponseBodyUsersOrgList.hpp>
#include <alibabacloud/models/FilterUsersResponseBodyUsersSupportLoginIdps.hpp>
#include <alibabacloud/models/FilterUsersResponseBodyUsersUserSetPropertiesModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class FilterUsersResponseBodyUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FilterUsersResponseBodyUsers& obj) { 
      DARABONBA_PTR_TO_JSON(AutoLockTime, autoLockTime_);
      DARABONBA_PTR_TO_JSON(DesktopCount, desktopCount_);
      DARABONBA_PTR_TO_JSON(DesktopGroupCount, desktopGroupCount_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EnableAdminAccess, enableAdminAccess_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(ExternalInfo, externalInfo_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsTenantManager, isTenantManager_);
      DARABONBA_PTR_TO_JSON(OrgList, orgList_);
      DARABONBA_PTR_TO_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_TO_JSON(PasswordExpireDays, passwordExpireDays_);
      DARABONBA_PTR_TO_JSON(PasswordExpireRestDays, passwordExpireRestDays_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(RealNickName, realNickName_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupportLoginIdps, supportLoginIdps_);
      DARABONBA_PTR_TO_JSON(UserSetPropertiesModels, userSetPropertiesModels_);
    };
    friend void from_json(const Darabonba::Json& j, FilterUsersResponseBodyUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoLockTime, autoLockTime_);
      DARABONBA_PTR_FROM_JSON(DesktopCount, desktopCount_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupCount, desktopGroupCount_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EnableAdminAccess, enableAdminAccess_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(ExternalInfo, externalInfo_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsTenantManager, isTenantManager_);
      DARABONBA_PTR_FROM_JSON(OrgList, orgList_);
      DARABONBA_PTR_FROM_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_FROM_JSON(PasswordExpireDays, passwordExpireDays_);
      DARABONBA_PTR_FROM_JSON(PasswordExpireRestDays, passwordExpireRestDays_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(RealNickName, realNickName_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupportLoginIdps, supportLoginIdps_);
      DARABONBA_PTR_FROM_JSON(UserSetPropertiesModels, userSetPropertiesModels_);
    };
    FilterUsersResponseBodyUsers() = default ;
    FilterUsersResponseBodyUsers(const FilterUsersResponseBodyUsers &) = default ;
    FilterUsersResponseBodyUsers(FilterUsersResponseBodyUsers &&) = default ;
    FilterUsersResponseBodyUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FilterUsersResponseBodyUsers() = default ;
    FilterUsersResponseBodyUsers& operator=(const FilterUsersResponseBodyUsers &) = default ;
    FilterUsersResponseBodyUsers& operator=(FilterUsersResponseBodyUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoLockTime_ != nullptr
        && this->desktopCount_ != nullptr && this->desktopGroupCount_ != nullptr && this->email_ != nullptr && this->enableAdminAccess_ != nullptr && this->endUserId_ != nullptr
        && this->externalInfo_ != nullptr && this->id_ != nullptr && this->isTenantManager_ != nullptr && this->orgList_ != nullptr && this->ownerType_ != nullptr
        && this->passwordExpireDays_ != nullptr && this->passwordExpireRestDays_ != nullptr && this->phone_ != nullptr && this->realNickName_ != nullptr && this->remark_ != nullptr
        && this->status_ != nullptr && this->supportLoginIdps_ != nullptr && this->userSetPropertiesModels_ != nullptr; };
    // autoLockTime Field Functions 
    bool hasAutoLockTime() const { return this->autoLockTime_ != nullptr;};
    void deleteAutoLockTime() { this->autoLockTime_ = nullptr;};
    inline string autoLockTime() const { DARABONBA_PTR_GET_DEFAULT(autoLockTime_, "") };
    inline FilterUsersResponseBodyUsers& setAutoLockTime(string autoLockTime) { DARABONBA_PTR_SET_VALUE(autoLockTime_, autoLockTime) };


    // desktopCount Field Functions 
    bool hasDesktopCount() const { return this->desktopCount_ != nullptr;};
    void deleteDesktopCount() { this->desktopCount_ = nullptr;};
    inline int64_t desktopCount() const { DARABONBA_PTR_GET_DEFAULT(desktopCount_, 0L) };
    inline FilterUsersResponseBodyUsers& setDesktopCount(int64_t desktopCount) { DARABONBA_PTR_SET_VALUE(desktopCount_, desktopCount) };


    // desktopGroupCount Field Functions 
    bool hasDesktopGroupCount() const { return this->desktopGroupCount_ != nullptr;};
    void deleteDesktopGroupCount() { this->desktopGroupCount_ = nullptr;};
    inline int64_t desktopGroupCount() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupCount_, 0L) };
    inline FilterUsersResponseBodyUsers& setDesktopGroupCount(int64_t desktopGroupCount) { DARABONBA_PTR_SET_VALUE(desktopGroupCount_, desktopGroupCount) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline FilterUsersResponseBodyUsers& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // enableAdminAccess Field Functions 
    bool hasEnableAdminAccess() const { return this->enableAdminAccess_ != nullptr;};
    void deleteEnableAdminAccess() { this->enableAdminAccess_ = nullptr;};
    inline bool enableAdminAccess() const { DARABONBA_PTR_GET_DEFAULT(enableAdminAccess_, false) };
    inline FilterUsersResponseBodyUsers& setEnableAdminAccess(bool enableAdminAccess) { DARABONBA_PTR_SET_VALUE(enableAdminAccess_, enableAdminAccess) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline FilterUsersResponseBodyUsers& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // externalInfo Field Functions 
    bool hasExternalInfo() const { return this->externalInfo_ != nullptr;};
    void deleteExternalInfo() { this->externalInfo_ = nullptr;};
    inline const Models::FilterUsersResponseBodyUsersExternalInfo & externalInfo() const { DARABONBA_PTR_GET_CONST(externalInfo_, Models::FilterUsersResponseBodyUsersExternalInfo) };
    inline Models::FilterUsersResponseBodyUsersExternalInfo externalInfo() { DARABONBA_PTR_GET(externalInfo_, Models::FilterUsersResponseBodyUsersExternalInfo) };
    inline FilterUsersResponseBodyUsers& setExternalInfo(const Models::FilterUsersResponseBodyUsersExternalInfo & externalInfo) { DARABONBA_PTR_SET_VALUE(externalInfo_, externalInfo) };
    inline FilterUsersResponseBodyUsers& setExternalInfo(Models::FilterUsersResponseBodyUsersExternalInfo && externalInfo) { DARABONBA_PTR_SET_RVALUE(externalInfo_, externalInfo) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline FilterUsersResponseBodyUsers& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isTenantManager Field Functions 
    bool hasIsTenantManager() const { return this->isTenantManager_ != nullptr;};
    void deleteIsTenantManager() { this->isTenantManager_ = nullptr;};
    inline bool isTenantManager() const { DARABONBA_PTR_GET_DEFAULT(isTenantManager_, false) };
    inline FilterUsersResponseBodyUsers& setIsTenantManager(bool isTenantManager) { DARABONBA_PTR_SET_VALUE(isTenantManager_, isTenantManager) };


    // orgList Field Functions 
    bool hasOrgList() const { return this->orgList_ != nullptr;};
    void deleteOrgList() { this->orgList_ = nullptr;};
    inline const vector<Models::FilterUsersResponseBodyUsersOrgList> & orgList() const { DARABONBA_PTR_GET_CONST(orgList_, vector<Models::FilterUsersResponseBodyUsersOrgList>) };
    inline vector<Models::FilterUsersResponseBodyUsersOrgList> orgList() { DARABONBA_PTR_GET(orgList_, vector<Models::FilterUsersResponseBodyUsersOrgList>) };
    inline FilterUsersResponseBodyUsers& setOrgList(const vector<Models::FilterUsersResponseBodyUsersOrgList> & orgList) { DARABONBA_PTR_SET_VALUE(orgList_, orgList) };
    inline FilterUsersResponseBodyUsers& setOrgList(vector<Models::FilterUsersResponseBodyUsersOrgList> && orgList) { DARABONBA_PTR_SET_RVALUE(orgList_, orgList) };


    // ownerType Field Functions 
    bool hasOwnerType() const { return this->ownerType_ != nullptr;};
    void deleteOwnerType() { this->ownerType_ = nullptr;};
    inline string ownerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
    inline FilterUsersResponseBodyUsers& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


    // passwordExpireDays Field Functions 
    bool hasPasswordExpireDays() const { return this->passwordExpireDays_ != nullptr;};
    void deletePasswordExpireDays() { this->passwordExpireDays_ = nullptr;};
    inline int32_t passwordExpireDays() const { DARABONBA_PTR_GET_DEFAULT(passwordExpireDays_, 0) };
    inline FilterUsersResponseBodyUsers& setPasswordExpireDays(int32_t passwordExpireDays) { DARABONBA_PTR_SET_VALUE(passwordExpireDays_, passwordExpireDays) };


    // passwordExpireRestDays Field Functions 
    bool hasPasswordExpireRestDays() const { return this->passwordExpireRestDays_ != nullptr;};
    void deletePasswordExpireRestDays() { this->passwordExpireRestDays_ = nullptr;};
    inline int32_t passwordExpireRestDays() const { DARABONBA_PTR_GET_DEFAULT(passwordExpireRestDays_, 0) };
    inline FilterUsersResponseBodyUsers& setPasswordExpireRestDays(int32_t passwordExpireRestDays) { DARABONBA_PTR_SET_VALUE(passwordExpireRestDays_, passwordExpireRestDays) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline FilterUsersResponseBodyUsers& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // realNickName Field Functions 
    bool hasRealNickName() const { return this->realNickName_ != nullptr;};
    void deleteRealNickName() { this->realNickName_ = nullptr;};
    inline string realNickName() const { DARABONBA_PTR_GET_DEFAULT(realNickName_, "") };
    inline FilterUsersResponseBodyUsers& setRealNickName(string realNickName) { DARABONBA_PTR_SET_VALUE(realNickName_, realNickName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline FilterUsersResponseBodyUsers& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline FilterUsersResponseBodyUsers& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportLoginIdps Field Functions 
    bool hasSupportLoginIdps() const { return this->supportLoginIdps_ != nullptr;};
    void deleteSupportLoginIdps() { this->supportLoginIdps_ = nullptr;};
    inline const vector<Models::FilterUsersResponseBodyUsersSupportLoginIdps> & supportLoginIdps() const { DARABONBA_PTR_GET_CONST(supportLoginIdps_, vector<Models::FilterUsersResponseBodyUsersSupportLoginIdps>) };
    inline vector<Models::FilterUsersResponseBodyUsersSupportLoginIdps> supportLoginIdps() { DARABONBA_PTR_GET(supportLoginIdps_, vector<Models::FilterUsersResponseBodyUsersSupportLoginIdps>) };
    inline FilterUsersResponseBodyUsers& setSupportLoginIdps(const vector<Models::FilterUsersResponseBodyUsersSupportLoginIdps> & supportLoginIdps) { DARABONBA_PTR_SET_VALUE(supportLoginIdps_, supportLoginIdps) };
    inline FilterUsersResponseBodyUsers& setSupportLoginIdps(vector<Models::FilterUsersResponseBodyUsersSupportLoginIdps> && supportLoginIdps) { DARABONBA_PTR_SET_RVALUE(supportLoginIdps_, supportLoginIdps) };


    // userSetPropertiesModels Field Functions 
    bool hasUserSetPropertiesModels() const { return this->userSetPropertiesModels_ != nullptr;};
    void deleteUserSetPropertiesModels() { this->userSetPropertiesModels_ = nullptr;};
    inline const vector<Models::FilterUsersResponseBodyUsersUserSetPropertiesModels> & userSetPropertiesModels() const { DARABONBA_PTR_GET_CONST(userSetPropertiesModels_, vector<Models::FilterUsersResponseBodyUsersUserSetPropertiesModels>) };
    inline vector<Models::FilterUsersResponseBodyUsersUserSetPropertiesModels> userSetPropertiesModels() { DARABONBA_PTR_GET(userSetPropertiesModels_, vector<Models::FilterUsersResponseBodyUsersUserSetPropertiesModels>) };
    inline FilterUsersResponseBodyUsers& setUserSetPropertiesModels(const vector<Models::FilterUsersResponseBodyUsersUserSetPropertiesModels> & userSetPropertiesModels) { DARABONBA_PTR_SET_VALUE(userSetPropertiesModels_, userSetPropertiesModels) };
    inline FilterUsersResponseBodyUsers& setUserSetPropertiesModels(vector<Models::FilterUsersResponseBodyUsersUserSetPropertiesModels> && userSetPropertiesModels) { DARABONBA_PTR_SET_RVALUE(userSetPropertiesModels_, userSetPropertiesModels) };


  protected:
    // The date when a convenience account is automatically locked.
    std::shared_ptr<string> autoLockTime_ = nullptr;
    // The number of cloud desktops that are assigned to the convenience user.
    std::shared_ptr<int64_t> desktopCount_ = nullptr;
    // The number of cloud desktop pools that are assigned to the convenience user. This value is returned if you set `IncludeDesktopGroupCount` to `true`.
    std::shared_ptr<int64_t> desktopGroupCount_ = nullptr;
    // The email address of the convenience user.
    std::shared_ptr<string> email_ = nullptr;
    // Indicates whether the convenience user is a local administrator.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<bool> enableAdminAccess_ = nullptr;
    // The username of the convenience user.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The additional information about the convenience user.
    std::shared_ptr<Models::FilterUsersResponseBodyUsersExternalInfo> externalInfo_ = nullptr;
    // The ID of the convenience user.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Indicates whether the convenience user is a tenant administrator.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<bool> isTenantManager_ = nullptr;
    std::shared_ptr<vector<Models::FilterUsersResponseBodyUsersOrgList>> orgList_ = nullptr;
    // The type of the account ownership.
    // 
    // Valid values:
    // 
    // *   CreateFromManager: administrator-activated
    // *   Normal: user-activated
    std::shared_ptr<string> ownerType_ = nullptr;
    // By default, user account passwords do not expire. However, you can set a validity period between 30 and 365 days. Once the period expires, end users must change their password before they can log on to terminals.
    // 
    // >  The feature is in invitational preview. If you want to use this feature, submit a ticket.
    std::shared_ptr<int32_t> passwordExpireDays_ = nullptr;
    // The number of days remaining until the account password expires.
    std::shared_ptr<int32_t> passwordExpireRestDays_ = nullptr;
    // The mobile number of the convenience user.
    std::shared_ptr<string> phone_ = nullptr;
    // The nickname of the convenience user.
    std::shared_ptr<string> realNickName_ = nullptr;
    // The remarks on the convenience user.
    std::shared_ptr<string> remark_ = nullptr;
    // The remarks on the convenience account.
    // 
    // Valid values:
    // 
    // *   0: The convenience account is normal.
    // *   9: The convenience account is locked.
    std::shared_ptr<int64_t> status_ = nullptr;
    std::shared_ptr<vector<Models::FilterUsersResponseBodyUsersSupportLoginIdps>> supportLoginIdps_ = nullptr;
    // The information about the properties.
    std::shared_ptr<vector<Models::FilterUsersResponseBodyUsersUserSetPropertiesModels>> userSetPropertiesModels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
