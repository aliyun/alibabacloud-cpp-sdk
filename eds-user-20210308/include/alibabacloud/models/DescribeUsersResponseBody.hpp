// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    DescribeUsersResponseBody() = default ;
    DescribeUsersResponseBody(const DescribeUsersResponseBody &) = default ;
    DescribeUsersResponseBody(DescribeUsersResponseBody &&) = default ;
    DescribeUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsersResponseBody() = default ;
    DescribeUsersResponseBody& operator=(const DescribeUsersResponseBody &) = default ;
    DescribeUsersResponseBody& operator=(DescribeUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
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
        DARABONBA_PTR_TO_JSON(PasswordExpireDays, passwordExpireDays_);
        DARABONBA_PTR_TO_JSON(PasswordExpireRestDays, passwordExpireRestDays_);
        DARABONBA_PTR_TO_JSON(Phone, phone_);
        DARABONBA_PTR_TO_JSON(Properties, properties_);
        DARABONBA_PTR_TO_JSON(RealNickName, realNickName_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(WyId, wyId_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
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
        DARABONBA_PTR_FROM_JSON(PasswordExpireDays, passwordExpireDays_);
        DARABONBA_PTR_FROM_JSON(PasswordExpireRestDays, passwordExpireRestDays_);
        DARABONBA_PTR_FROM_JSON(Phone, phone_);
        DARABONBA_PTR_FROM_JSON(Properties, properties_);
        DARABONBA_PTR_FROM_JSON(RealNickName, realNickName_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(WyId, wyId_);
      };
      Users() = default ;
      Users(const Users &) = default ;
      Users(Users &&) = default ;
      Users(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Users() = default ;
      Users& operator=(const Users &) = default ;
      Users& operator=(Users &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Properties : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Properties& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Properties& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Properties() = default ;
        Properties(const Properties &) = default ;
        Properties(Properties &&) = default ;
        Properties(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Properties() = default ;
        Properties& operator=(const Properties &) = default ;
        Properties& operator=(Properties &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Properties& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Properties& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      class Orgs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Orgs& obj) { 
          DARABONBA_PTR_TO_JSON(OrgId, orgId_);
          DARABONBA_PTR_TO_JSON(OrgName, orgName_);
          DARABONBA_PTR_TO_JSON(OrgNamePath, orgNamePath_);
        };
        friend void from_json(const Darabonba::Json& j, Orgs& obj) { 
          DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
          DARABONBA_PTR_FROM_JSON(OrgName, orgName_);
          DARABONBA_PTR_FROM_JSON(OrgNamePath, orgNamePath_);
        };
        Orgs() = default ;
        Orgs(const Orgs &) = default ;
        Orgs(Orgs &&) = default ;
        Orgs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Orgs() = default ;
        Orgs& operator=(const Orgs &) = default ;
        Orgs& operator=(Orgs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->orgId_ == nullptr
        && this->orgName_ == nullptr && this->orgNamePath_ == nullptr; };
        // orgId Field Functions 
        bool hasOrgId() const { return this->orgId_ != nullptr;};
        void deleteOrgId() { this->orgId_ = nullptr;};
        inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
        inline Orgs& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


        // orgName Field Functions 
        bool hasOrgName() const { return this->orgName_ != nullptr;};
        void deleteOrgName() { this->orgName_ = nullptr;};
        inline string getOrgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
        inline Orgs& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


        // orgNamePath Field Functions 
        bool hasOrgNamePath() const { return this->orgNamePath_ != nullptr;};
        void deleteOrgNamePath() { this->orgNamePath_ = nullptr;};
        inline string getOrgNamePath() const { DARABONBA_PTR_GET_DEFAULT(orgNamePath_, "") };
        inline Orgs& setOrgNamePath(string orgNamePath) { DARABONBA_PTR_SET_VALUE(orgNamePath_, orgNamePath) };


      protected:
        // The organization ID.
        shared_ptr<string> orgId_ {};
        // The organization name.
        shared_ptr<string> orgName_ {};
        shared_ptr<string> orgNamePath_ {};
      };

      class Groups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Groups& obj) { 
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        };
        friend void from_json(const Darabonba::Json& j, Groups& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        };
        Groups() = default ;
        Groups(const Groups &) = default ;
        Groups(Groups &&) = default ;
        Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Groups() = default ;
        Groups& operator=(const Groups &) = default ;
        Groups& operator=(Groups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->groupId_ == nullptr
        && this->groupName_ == nullptr; };
        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline Groups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline Groups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      protected:
        // The ID of the user group.
        shared_ptr<string> groupId_ {};
        // The name of the user group.
        shared_ptr<string> groupName_ {};
      };

      class Extras : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Extras& obj) { 
          DARABONBA_ANY_TO_JSON(AssignedResourceCount, assignedResourceCount_);
        };
        friend void from_json(const Darabonba::Json& j, Extras& obj) { 
          DARABONBA_ANY_FROM_JSON(AssignedResourceCount, assignedResourceCount_);
        };
        Extras() = default ;
        Extras(const Extras &) = default ;
        Extras(Extras &&) = default ;
        Extras(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Extras() = default ;
        Extras& operator=(const Extras &) = default ;
        Extras& operator=(Extras &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assignedResourceCount_ == nullptr; };
        // assignedResourceCount Field Functions 
        bool hasAssignedResourceCount() const { return this->assignedResourceCount_ != nullptr;};
        void deleteAssignedResourceCount() { this->assignedResourceCount_ = nullptr;};
        inline         const Darabonba::Json & getAssignedResourceCount() const { DARABONBA_GET(assignedResourceCount_) };
        Darabonba::Json & getAssignedResourceCount() { DARABONBA_GET(assignedResourceCount_) };
        inline Extras& setAssignedResourceCount(const Darabonba::Json & assignedResourceCount) { DARABONBA_SET_VALUE(assignedResourceCount_, assignedResourceCount) };
        inline Extras& setAssignedResourceCount(Darabonba::Json && assignedResourceCount) { DARABONBA_SET_RVALUE(assignedResourceCount_, assignedResourceCount) };


      protected:
        Darabonba::Json assignedResourceCount_ {};
      };

      virtual bool empty() const override { return this->address_ == nullptr
        && this->avatar_ == nullptr && this->email_ == nullptr && this->enableAdminAccess_ == nullptr && this->endUserId_ == nullptr && this->externalName_ == nullptr
        && this->extras_ == nullptr && this->groups_ == nullptr && this->id_ == nullptr && this->isTenantManager_ == nullptr && this->jobNumber_ == nullptr
        && this->nickName_ == nullptr && this->orgId_ == nullptr && this->orgs_ == nullptr && this->ownerType_ == nullptr && this->passwordExpireDays_ == nullptr
        && this->passwordExpireRestDays_ == nullptr && this->phone_ == nullptr && this->properties_ == nullptr && this->realNickName_ == nullptr && this->remark_ == nullptr
        && this->status_ == nullptr && this->wyId_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline Users& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // avatar Field Functions 
      bool hasAvatar() const { return this->avatar_ != nullptr;};
      void deleteAvatar() { this->avatar_ = nullptr;};
      inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
      inline Users& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Users& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // enableAdminAccess Field Functions 
      bool hasEnableAdminAccess() const { return this->enableAdminAccess_ != nullptr;};
      void deleteEnableAdminAccess() { this->enableAdminAccess_ = nullptr;};
      inline bool getEnableAdminAccess() const { DARABONBA_PTR_GET_DEFAULT(enableAdminAccess_, false) };
      inline Users& setEnableAdminAccess(bool enableAdminAccess) { DARABONBA_PTR_SET_VALUE(enableAdminAccess_, enableAdminAccess) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline Users& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // externalName Field Functions 
      bool hasExternalName() const { return this->externalName_ != nullptr;};
      void deleteExternalName() { this->externalName_ = nullptr;};
      inline string getExternalName() const { DARABONBA_PTR_GET_DEFAULT(externalName_, "") };
      inline Users& setExternalName(string externalName) { DARABONBA_PTR_SET_VALUE(externalName_, externalName) };


      // extras Field Functions 
      bool hasExtras() const { return this->extras_ != nullptr;};
      void deleteExtras() { this->extras_ = nullptr;};
      inline const Users::Extras & getExtras() const { DARABONBA_PTR_GET_CONST(extras_, Users::Extras) };
      inline Users::Extras getExtras() { DARABONBA_PTR_GET(extras_, Users::Extras) };
      inline Users& setExtras(const Users::Extras & extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };
      inline Users& setExtras(Users::Extras && extras) { DARABONBA_PTR_SET_RVALUE(extras_, extras) };


      // groups Field Functions 
      bool hasGroups() const { return this->groups_ != nullptr;};
      void deleteGroups() { this->groups_ = nullptr;};
      inline const vector<Users::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<Users::Groups>) };
      inline vector<Users::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<Users::Groups>) };
      inline Users& setGroups(const vector<Users::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
      inline Users& setGroups(vector<Users::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Users& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isTenantManager Field Functions 
      bool hasIsTenantManager() const { return this->isTenantManager_ != nullptr;};
      void deleteIsTenantManager() { this->isTenantManager_ = nullptr;};
      inline bool getIsTenantManager() const { DARABONBA_PTR_GET_DEFAULT(isTenantManager_, false) };
      inline Users& setIsTenantManager(bool isTenantManager) { DARABONBA_PTR_SET_VALUE(isTenantManager_, isTenantManager) };


      // jobNumber Field Functions 
      bool hasJobNumber() const { return this->jobNumber_ != nullptr;};
      void deleteJobNumber() { this->jobNumber_ = nullptr;};
      inline string getJobNumber() const { DARABONBA_PTR_GET_DEFAULT(jobNumber_, "") };
      inline Users& setJobNumber(string jobNumber) { DARABONBA_PTR_SET_VALUE(jobNumber_, jobNumber) };


      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline Users& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      // orgId Field Functions 
      bool hasOrgId() const { return this->orgId_ != nullptr;};
      void deleteOrgId() { this->orgId_ = nullptr;};
      inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
      inline Users& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


      // orgs Field Functions 
      bool hasOrgs() const { return this->orgs_ != nullptr;};
      void deleteOrgs() { this->orgs_ = nullptr;};
      inline const vector<Users::Orgs> & getOrgs() const { DARABONBA_PTR_GET_CONST(orgs_, vector<Users::Orgs>) };
      inline vector<Users::Orgs> getOrgs() { DARABONBA_PTR_GET(orgs_, vector<Users::Orgs>) };
      inline Users& setOrgs(const vector<Users::Orgs> & orgs) { DARABONBA_PTR_SET_VALUE(orgs_, orgs) };
      inline Users& setOrgs(vector<Users::Orgs> && orgs) { DARABONBA_PTR_SET_RVALUE(orgs_, orgs) };


      // ownerType Field Functions 
      bool hasOwnerType() const { return this->ownerType_ != nullptr;};
      void deleteOwnerType() { this->ownerType_ = nullptr;};
      inline string getOwnerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
      inline Users& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


      // passwordExpireDays Field Functions 
      bool hasPasswordExpireDays() const { return this->passwordExpireDays_ != nullptr;};
      void deletePasswordExpireDays() { this->passwordExpireDays_ = nullptr;};
      inline int32_t getPasswordExpireDays() const { DARABONBA_PTR_GET_DEFAULT(passwordExpireDays_, 0) };
      inline Users& setPasswordExpireDays(int32_t passwordExpireDays) { DARABONBA_PTR_SET_VALUE(passwordExpireDays_, passwordExpireDays) };


      // passwordExpireRestDays Field Functions 
      bool hasPasswordExpireRestDays() const { return this->passwordExpireRestDays_ != nullptr;};
      void deletePasswordExpireRestDays() { this->passwordExpireRestDays_ = nullptr;};
      inline int32_t getPasswordExpireRestDays() const { DARABONBA_PTR_GET_DEFAULT(passwordExpireRestDays_, 0) };
      inline Users& setPasswordExpireRestDays(int32_t passwordExpireRestDays) { DARABONBA_PTR_SET_VALUE(passwordExpireRestDays_, passwordExpireRestDays) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline Users& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline const vector<Users::Properties> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, vector<Users::Properties>) };
      inline vector<Users::Properties> getProperties() { DARABONBA_PTR_GET(properties_, vector<Users::Properties>) };
      inline Users& setProperties(const vector<Users::Properties> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
      inline Users& setProperties(vector<Users::Properties> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


      // realNickName Field Functions 
      bool hasRealNickName() const { return this->realNickName_ != nullptr;};
      void deleteRealNickName() { this->realNickName_ = nullptr;};
      inline string getRealNickName() const { DARABONBA_PTR_GET_DEFAULT(realNickName_, "") };
      inline Users& setRealNickName(string realNickName) { DARABONBA_PTR_SET_VALUE(realNickName_, realNickName) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Users& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
      inline Users& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // wyId Field Functions 
      bool hasWyId() const { return this->wyId_ != nullptr;};
      void deleteWyId() { this->wyId_ = nullptr;};
      inline string getWyId() const { DARABONBA_PTR_GET_DEFAULT(wyId_, "") };
      inline Users& setWyId(string wyId) { DARABONBA_PTR_SET_VALUE(wyId_, wyId) };


    protected:
      // The work address of the convenience user.
      shared_ptr<string> address_ {};
      // The profile picture of the convenience user.
      shared_ptr<string> avatar_ {};
      // The email address of the convenience user.
      shared_ptr<string> email_ {};
      // Enables the administrator permissions.
      shared_ptr<bool> enableAdminAccess_ {};
      // The username of the convenience user.
      shared_ptr<string> endUserId_ {};
      shared_ptr<string> externalName_ {};
      shared_ptr<Users::Extras> extras_ {};
      // The user groups to which the convenience user belongs.
      shared_ptr<vector<Users::Groups>> groups_ {};
      // The ID of the convenience user.
      shared_ptr<int64_t> id_ {};
      // Indicates whether the convenience user is an administrator. If the convenience user is of the administrator-activated type, you must specify a user administrator. Notifications such as password reset on a client are sent to the email address or mobile number of the user administrator. For more information, see [Create a convenience user](https://help.aliyun.com/document_detail/214472.html).
      shared_ptr<bool> isTenantManager_ {};
      // The employee number of the convenience user.
      shared_ptr<string> jobNumber_ {};
      // The nickname of the convenience user.
      shared_ptr<string> nickName_ {};
      // The ID of the organization to which the convenience user belongs.
      // 
      // >  This parameter will be deprecated in the future.
      shared_ptr<string> orgId_ {};
      // The organizations to which the convenience user belongs.
      shared_ptr<vector<Users::Orgs>> orgs_ {};
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
      shared_ptr<string> ownerType_ {};
      shared_ptr<int32_t> passwordExpireDays_ {};
      shared_ptr<int32_t> passwordExpireRestDays_ {};
      // The mobile number of the convenience user. If you leave this parameter empty, the value of this parameter is not returned.
      shared_ptr<string> phone_ {};
      shared_ptr<vector<Users::Properties>> properties_ {};
      shared_ptr<string> realNickName_ {};
      // The remarks on the convenience user.
      shared_ptr<string> remark_ {};
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
      shared_ptr<int64_t> status_ {};
      // The globally unique ID of the convenience user.
      shared_ptr<string> wyId_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->users_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeUsersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<DescribeUsersResponseBody::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<DescribeUsersResponseBody::Users>) };
    inline vector<DescribeUsersResponseBody::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<DescribeUsersResponseBody::Users>) };
    inline DescribeUsersResponseBody& setUsers(const vector<DescribeUsersResponseBody::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline DescribeUsersResponseBody& setUsers(vector<DescribeUsersResponseBody::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The token that determines the start point of the next query. If this parameter is left empty, all results are returned.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the convenience accounts.
    shared_ptr<vector<DescribeUsersResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
