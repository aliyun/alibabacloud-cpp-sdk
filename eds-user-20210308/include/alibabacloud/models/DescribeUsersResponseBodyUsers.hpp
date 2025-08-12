// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSRESPONSEBODYUSERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSRESPONSEBODYUSERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUsersResponseBodyUsersExtras.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUsersResponseBodyUsersGroups.hpp>
#include <alibabacloud/models/DescribeUsersResponseBodyUsersOrgs.hpp>
#include <alibabacloud/models/DescribeUsersResponseBodyUsersProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeUsersResponseBodyUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsersResponseBodyUsers& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Avatar, avatar_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EnableAdminAccess, enableAdminAccess_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(ExternalName, externalName_);
      DARABONBA_PTR_TO_JSON(Extras, extras_);
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsTenantManager, isTenantManager_);
      DARABONBA_PTR_TO_JSON(JobNumber, jobNumber_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(Orgs, orgs_);
      DARABONBA_PTR_TO_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(RealNickName, realNickName_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WyId, wyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsersResponseBodyUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EnableAdminAccess, enableAdminAccess_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(ExternalName, externalName_);
      DARABONBA_PTR_FROM_JSON(Extras, extras_);
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsTenantManager, isTenantManager_);
      DARABONBA_PTR_FROM_JSON(JobNumber, jobNumber_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(Orgs, orgs_);
      DARABONBA_PTR_FROM_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(RealNickName, realNickName_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WyId, wyId_);
    };
    DescribeUsersResponseBodyUsers() = default ;
    DescribeUsersResponseBodyUsers(const DescribeUsersResponseBodyUsers &) = default ;
    DescribeUsersResponseBodyUsers(DescribeUsersResponseBodyUsers &&) = default ;
    DescribeUsersResponseBodyUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsersResponseBodyUsers() = default ;
    DescribeUsersResponseBodyUsers& operator=(const DescribeUsersResponseBodyUsers &) = default ;
    DescribeUsersResponseBodyUsers& operator=(DescribeUsersResponseBodyUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->avatar_ != nullptr && this->email_ != nullptr && this->enableAdminAccess_ != nullptr && this->endUserId_ != nullptr && this->externalName_ != nullptr
        && this->extras_ != nullptr && this->groups_ != nullptr && this->id_ != nullptr && this->isTenantManager_ != nullptr && this->jobNumber_ != nullptr
        && this->nickName_ != nullptr && this->orgId_ != nullptr && this->orgs_ != nullptr && this->ownerType_ != nullptr && this->phone_ != nullptr
        && this->properties_ != nullptr && this->realNickName_ != nullptr && this->remark_ != nullptr && this->status_ != nullptr && this->wyId_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeUsersResponseBodyUsers& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string avatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline DescribeUsersResponseBodyUsers& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline DescribeUsersResponseBodyUsers& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // enableAdminAccess Field Functions 
    bool hasEnableAdminAccess() const { return this->enableAdminAccess_ != nullptr;};
    void deleteEnableAdminAccess() { this->enableAdminAccess_ = nullptr;};
    inline bool enableAdminAccess() const { DARABONBA_PTR_GET_DEFAULT(enableAdminAccess_, false) };
    inline DescribeUsersResponseBodyUsers& setEnableAdminAccess(bool enableAdminAccess) { DARABONBA_PTR_SET_VALUE(enableAdminAccess_, enableAdminAccess) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeUsersResponseBodyUsers& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // externalName Field Functions 
    bool hasExternalName() const { return this->externalName_ != nullptr;};
    void deleteExternalName() { this->externalName_ = nullptr;};
    inline string externalName() const { DARABONBA_PTR_GET_DEFAULT(externalName_, "") };
    inline DescribeUsersResponseBodyUsers& setExternalName(string externalName) { DARABONBA_PTR_SET_VALUE(externalName_, externalName) };


    // extras Field Functions 
    bool hasExtras() const { return this->extras_ != nullptr;};
    void deleteExtras() { this->extras_ = nullptr;};
    inline const Models::DescribeUsersResponseBodyUsersExtras & extras() const { DARABONBA_PTR_GET_CONST(extras_, Models::DescribeUsersResponseBodyUsersExtras) };
    inline Models::DescribeUsersResponseBodyUsersExtras extras() { DARABONBA_PTR_GET(extras_, Models::DescribeUsersResponseBodyUsersExtras) };
    inline DescribeUsersResponseBodyUsers& setExtras(const Models::DescribeUsersResponseBodyUsersExtras & extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };
    inline DescribeUsersResponseBodyUsers& setExtras(Models::DescribeUsersResponseBodyUsersExtras && extras) { DARABONBA_PTR_SET_RVALUE(extras_, extras) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<Models::DescribeUsersResponseBodyUsersGroups> & groups() const { DARABONBA_PTR_GET_CONST(groups_, vector<Models::DescribeUsersResponseBodyUsersGroups>) };
    inline vector<Models::DescribeUsersResponseBodyUsersGroups> groups() { DARABONBA_PTR_GET(groups_, vector<Models::DescribeUsersResponseBodyUsersGroups>) };
    inline DescribeUsersResponseBodyUsers& setGroups(const vector<Models::DescribeUsersResponseBodyUsersGroups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline DescribeUsersResponseBodyUsers& setGroups(vector<Models::DescribeUsersResponseBodyUsersGroups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeUsersResponseBodyUsers& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isTenantManager Field Functions 
    bool hasIsTenantManager() const { return this->isTenantManager_ != nullptr;};
    void deleteIsTenantManager() { this->isTenantManager_ = nullptr;};
    inline bool isTenantManager() const { DARABONBA_PTR_GET_DEFAULT(isTenantManager_, false) };
    inline DescribeUsersResponseBodyUsers& setIsTenantManager(bool isTenantManager) { DARABONBA_PTR_SET_VALUE(isTenantManager_, isTenantManager) };


    // jobNumber Field Functions 
    bool hasJobNumber() const { return this->jobNumber_ != nullptr;};
    void deleteJobNumber() { this->jobNumber_ = nullptr;};
    inline string jobNumber() const { DARABONBA_PTR_GET_DEFAULT(jobNumber_, "") };
    inline DescribeUsersResponseBodyUsers& setJobNumber(string jobNumber) { DARABONBA_PTR_SET_VALUE(jobNumber_, jobNumber) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline DescribeUsersResponseBodyUsers& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline DescribeUsersResponseBodyUsers& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // orgs Field Functions 
    bool hasOrgs() const { return this->orgs_ != nullptr;};
    void deleteOrgs() { this->orgs_ = nullptr;};
    inline const vector<Models::DescribeUsersResponseBodyUsersOrgs> & orgs() const { DARABONBA_PTR_GET_CONST(orgs_, vector<Models::DescribeUsersResponseBodyUsersOrgs>) };
    inline vector<Models::DescribeUsersResponseBodyUsersOrgs> orgs() { DARABONBA_PTR_GET(orgs_, vector<Models::DescribeUsersResponseBodyUsersOrgs>) };
    inline DescribeUsersResponseBodyUsers& setOrgs(const vector<Models::DescribeUsersResponseBodyUsersOrgs> & orgs) { DARABONBA_PTR_SET_VALUE(orgs_, orgs) };
    inline DescribeUsersResponseBodyUsers& setOrgs(vector<Models::DescribeUsersResponseBodyUsersOrgs> && orgs) { DARABONBA_PTR_SET_RVALUE(orgs_, orgs) };


    // ownerType Field Functions 
    bool hasOwnerType() const { return this->ownerType_ != nullptr;};
    void deleteOwnerType() { this->ownerType_ = nullptr;};
    inline string ownerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
    inline DescribeUsersResponseBodyUsers& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline DescribeUsersResponseBodyUsers& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const vector<Models::DescribeUsersResponseBodyUsersProperties> & properties() const { DARABONBA_PTR_GET_CONST(properties_, vector<Models::DescribeUsersResponseBodyUsersProperties>) };
    inline vector<Models::DescribeUsersResponseBodyUsersProperties> properties() { DARABONBA_PTR_GET(properties_, vector<Models::DescribeUsersResponseBodyUsersProperties>) };
    inline DescribeUsersResponseBodyUsers& setProperties(const vector<Models::DescribeUsersResponseBodyUsersProperties> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline DescribeUsersResponseBodyUsers& setProperties(vector<Models::DescribeUsersResponseBodyUsersProperties> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // realNickName Field Functions 
    bool hasRealNickName() const { return this->realNickName_ != nullptr;};
    void deleteRealNickName() { this->realNickName_ = nullptr;};
    inline string realNickName() const { DARABONBA_PTR_GET_DEFAULT(realNickName_, "") };
    inline DescribeUsersResponseBodyUsers& setRealNickName(string realNickName) { DARABONBA_PTR_SET_VALUE(realNickName_, realNickName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeUsersResponseBodyUsers& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline DescribeUsersResponseBodyUsers& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // wyId Field Functions 
    bool hasWyId() const { return this->wyId_ != nullptr;};
    void deleteWyId() { this->wyId_ = nullptr;};
    inline string wyId() const { DARABONBA_PTR_GET_DEFAULT(wyId_, "") };
    inline DescribeUsersResponseBodyUsers& setWyId(string wyId) { DARABONBA_PTR_SET_VALUE(wyId_, wyId) };


  protected:
    // The work address of the convenience user.
    std::shared_ptr<string> address_ = nullptr;
    // The profile picture of the convenience user.
    std::shared_ptr<string> avatar_ = nullptr;
    // The email address of the convenience user.
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<bool> enableAdminAccess_ = nullptr;
    // The username of the convenience user.
    std::shared_ptr<string> endUserId_ = nullptr;
    std::shared_ptr<string> externalName_ = nullptr;
    std::shared_ptr<Models::DescribeUsersResponseBodyUsersExtras> extras_ = nullptr;
    // The user groups to which the convenience user belongs.
    std::shared_ptr<vector<Models::DescribeUsersResponseBodyUsersGroups>> groups_ = nullptr;
    // The ID of the convenience user.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Indicates whether the convenience user is an administrator. If the convenience user is of the administrator-activated type, you must specify a user administrator. Notifications such as password reset on a client are sent to the email address or mobile number of the user administrator. For more information, see [Create a convenience user](https://help.aliyun.com/document_detail/214472.html).
    std::shared_ptr<bool> isTenantManager_ = nullptr;
    // The employee number of the convenience user.
    std::shared_ptr<string> jobNumber_ = nullptr;
    // The nickname of the convenience user.
    std::shared_ptr<string> nickName_ = nullptr;
    // The ID of the organization to which the convenience user belongs.
    // 
    // >  This parameter will be deprecated in the future.
    std::shared_ptr<string> orgId_ = nullptr;
    // The organizations to which the convenience user belongs.
    std::shared_ptr<vector<Models::DescribeUsersResponseBodyUsersOrgs>> orgs_ = nullptr;
    // The type of the convenience account.
    // 
    // *   Administrator-activated type: The administrator specifies the username and password of the convenience account. User notifications such as password reset notifications are sent to the email address or mobile number of the administrator.
    // *   User-activated type: The administrator specifies the username and the email address or mobile number of a convenience user. Notifications such as activation notifications that contain the default password are sent to the email address or mobile number of the convenience user.
    // 
    // Valid values:
    // 
    // *   CreateFromManager
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     administrator-activated
    // 
    //     <!-- -->
    // 
    // *   Normal
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     user-activated
    // 
    //     <!-- -->
    std::shared_ptr<string> ownerType_ = nullptr;
    // The mobile number of the convenience user. If you leave this parameter empty, the value of this parameter is not returned.
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<vector<Models::DescribeUsersResponseBodyUsersProperties>> properties_ = nullptr;
    std::shared_ptr<string> realNickName_ = nullptr;
    // The remarks on the convenience user.
    std::shared_ptr<string> remark_ = nullptr;
    // The status of the convenience user.
    // 
    // Valid values:
    // 
    // *   0: The convenience user is normal.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   9: The convenience user is locked.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<int64_t> status_ = nullptr;
    // The globally unique ID of the convenience user.
    std::shared_ptr<string> wyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
