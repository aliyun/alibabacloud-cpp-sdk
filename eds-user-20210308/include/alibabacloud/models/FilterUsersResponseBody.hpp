// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FILTERUSERSRESPONSEBODY_HPP_
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
  class FilterUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FilterUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, FilterUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    FilterUsersResponseBody() = default ;
    FilterUsersResponseBody(const FilterUsersResponseBody &) = default ;
    FilterUsersResponseBody(FilterUsersResponseBody &&) = default ;
    FilterUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FilterUsersResponseBody() = default ;
    FilterUsersResponseBody& operator=(const FilterUsersResponseBody &) = default ;
    FilterUsersResponseBody& operator=(FilterUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(AutoLockTime, autoLockTime_);
        DARABONBA_PTR_TO_JSON(DesktopCount, desktopCount_);
        DARABONBA_PTR_TO_JSON(DesktopGroupCount, desktopGroupCount_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(EnableAdminAccess, enableAdminAccess_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(ExternalInfo, externalInfo_);
        DARABONBA_PTR_TO_JSON(Groups, groups_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsTenantManager, isTenantManager_);
        DARABONBA_PTR_TO_JSON(OrgList, orgList_);
        DARABONBA_PTR_TO_JSON(OwnerType, ownerType_);
        DARABONBA_PTR_TO_JSON(PasswordExpireDays, passwordExpireDays_);
        DARABONBA_PTR_TO_JSON(PasswordExpireRestDays, passwordExpireRestDays_);
        DARABONBA_PTR_TO_JSON(Phone, phone_);
        DARABONBA_PTR_TO_JSON(RealNickName, realNickName_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(ResourcePolicyList, resourcePolicyList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SupportLoginIdps, supportLoginIdps_);
        DARABONBA_PTR_TO_JSON(UserSetPropertiesModels, userSetPropertiesModels_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoLockTime, autoLockTime_);
        DARABONBA_PTR_FROM_JSON(DesktopCount, desktopCount_);
        DARABONBA_PTR_FROM_JSON(DesktopGroupCount, desktopGroupCount_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(EnableAdminAccess, enableAdminAccess_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(ExternalInfo, externalInfo_);
        DARABONBA_PTR_FROM_JSON(Groups, groups_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsTenantManager, isTenantManager_);
        DARABONBA_PTR_FROM_JSON(OrgList, orgList_);
        DARABONBA_PTR_FROM_JSON(OwnerType, ownerType_);
        DARABONBA_PTR_FROM_JSON(PasswordExpireDays, passwordExpireDays_);
        DARABONBA_PTR_FROM_JSON(PasswordExpireRestDays, passwordExpireRestDays_);
        DARABONBA_PTR_FROM_JSON(Phone, phone_);
        DARABONBA_PTR_FROM_JSON(RealNickName, realNickName_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(ResourcePolicyList, resourcePolicyList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SupportLoginIdps, supportLoginIdps_);
        DARABONBA_PTR_FROM_JSON(UserSetPropertiesModels, userSetPropertiesModels_);
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
      class UserSetPropertiesModels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserSetPropertiesModels& obj) { 
          DARABONBA_PTR_TO_JSON(PropertyId, propertyId_);
          DARABONBA_PTR_TO_JSON(PropertyKey, propertyKey_);
          DARABONBA_PTR_TO_JSON(PropertyType, propertyType_);
          DARABONBA_PTR_TO_JSON(PropertyValues, propertyValues_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, UserSetPropertiesModels& obj) { 
          DARABONBA_PTR_FROM_JSON(PropertyId, propertyId_);
          DARABONBA_PTR_FROM_JSON(PropertyKey, propertyKey_);
          DARABONBA_PTR_FROM_JSON(PropertyType, propertyType_);
          DARABONBA_PTR_FROM_JSON(PropertyValues, propertyValues_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        UserSetPropertiesModels() = default ;
        UserSetPropertiesModels(const UserSetPropertiesModels &) = default ;
        UserSetPropertiesModels(UserSetPropertiesModels &&) = default ;
        UserSetPropertiesModels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserSetPropertiesModels() = default ;
        UserSetPropertiesModels& operator=(const UserSetPropertiesModels &) = default ;
        UserSetPropertiesModels& operator=(UserSetPropertiesModels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PropertyValues : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PropertyValues& obj) { 
            DARABONBA_PTR_TO_JSON(PropertyValue, propertyValue_);
            DARABONBA_PTR_TO_JSON(PropertyValueId, propertyValueId_);
          };
          friend void from_json(const Darabonba::Json& j, PropertyValues& obj) { 
            DARABONBA_PTR_FROM_JSON(PropertyValue, propertyValue_);
            DARABONBA_PTR_FROM_JSON(PropertyValueId, propertyValueId_);
          };
          PropertyValues() = default ;
          PropertyValues(const PropertyValues &) = default ;
          PropertyValues(PropertyValues &&) = default ;
          PropertyValues(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PropertyValues() = default ;
          PropertyValues& operator=(const PropertyValues &) = default ;
          PropertyValues& operator=(PropertyValues &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->propertyValue_ == nullptr
        && this->propertyValueId_ == nullptr; };
          // propertyValue Field Functions 
          bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
          void deletePropertyValue() { this->propertyValue_ = nullptr;};
          inline string getPropertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
          inline PropertyValues& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


          // propertyValueId Field Functions 
          bool hasPropertyValueId() const { return this->propertyValueId_ != nullptr;};
          void deletePropertyValueId() { this->propertyValueId_ = nullptr;};
          inline int64_t getPropertyValueId() const { DARABONBA_PTR_GET_DEFAULT(propertyValueId_, 0L) };
          inline PropertyValues& setPropertyValueId(int64_t propertyValueId) { DARABONBA_PTR_SET_VALUE(propertyValueId_, propertyValueId) };


        protected:
          // The property value.
          shared_ptr<string> propertyValue_ {};
          // The ID of the property value.
          shared_ptr<int64_t> propertyValueId_ {};
        };

        virtual bool empty() const override { return this->propertyId_ == nullptr
        && this->propertyKey_ == nullptr && this->propertyType_ == nullptr && this->propertyValues_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
        // propertyId Field Functions 
        bool hasPropertyId() const { return this->propertyId_ != nullptr;};
        void deletePropertyId() { this->propertyId_ = nullptr;};
        inline int64_t getPropertyId() const { DARABONBA_PTR_GET_DEFAULT(propertyId_, 0L) };
        inline UserSetPropertiesModels& setPropertyId(int64_t propertyId) { DARABONBA_PTR_SET_VALUE(propertyId_, propertyId) };


        // propertyKey Field Functions 
        bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
        void deletePropertyKey() { this->propertyKey_ = nullptr;};
        inline string getPropertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
        inline UserSetPropertiesModels& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


        // propertyType Field Functions 
        bool hasPropertyType() const { return this->propertyType_ != nullptr;};
        void deletePropertyType() { this->propertyType_ = nullptr;};
        inline int32_t getPropertyType() const { DARABONBA_PTR_GET_DEFAULT(propertyType_, 0) };
        inline UserSetPropertiesModels& setPropertyType(int32_t propertyType) { DARABONBA_PTR_SET_VALUE(propertyType_, propertyType) };


        // propertyValues Field Functions 
        bool hasPropertyValues() const { return this->propertyValues_ != nullptr;};
        void deletePropertyValues() { this->propertyValues_ = nullptr;};
        inline const vector<UserSetPropertiesModels::PropertyValues> & getPropertyValues() const { DARABONBA_PTR_GET_CONST(propertyValues_, vector<UserSetPropertiesModels::PropertyValues>) };
        inline vector<UserSetPropertiesModels::PropertyValues> getPropertyValues() { DARABONBA_PTR_GET(propertyValues_, vector<UserSetPropertiesModels::PropertyValues>) };
        inline UserSetPropertiesModels& setPropertyValues(const vector<UserSetPropertiesModels::PropertyValues> & propertyValues) { DARABONBA_PTR_SET_VALUE(propertyValues_, propertyValues) };
        inline UserSetPropertiesModels& setPropertyValues(vector<UserSetPropertiesModels::PropertyValues> && propertyValues) { DARABONBA_PTR_SET_RVALUE(propertyValues_, propertyValues) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
        inline UserSetPropertiesModels& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline UserSetPropertiesModels& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The property ID.
        shared_ptr<int64_t> propertyId_ {};
        // The property name.
        shared_ptr<string> propertyKey_ {};
        // The property type.
        shared_ptr<int32_t> propertyType_ {};
        // The property values.
        shared_ptr<vector<UserSetPropertiesModels::PropertyValues>> propertyValues_ {};
        // The ID of the convenience user that is bound to the property.
        shared_ptr<int64_t> userId_ {};
        // The username of the convenience user that is bound to the property.
        shared_ptr<string> userName_ {};
      };

      class SupportLoginIdps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportLoginIdps& obj) { 
          DARABONBA_PTR_TO_JSON(IdpId, idpId_);
          DARABONBA_PTR_TO_JSON(IdpName, idpName_);
        };
        friend void from_json(const Darabonba::Json& j, SupportLoginIdps& obj) { 
          DARABONBA_PTR_FROM_JSON(IdpId, idpId_);
          DARABONBA_PTR_FROM_JSON(IdpName, idpName_);
        };
        SupportLoginIdps() = default ;
        SupportLoginIdps(const SupportLoginIdps &) = default ;
        SupportLoginIdps(SupportLoginIdps &&) = default ;
        SupportLoginIdps(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SupportLoginIdps() = default ;
        SupportLoginIdps& operator=(const SupportLoginIdps &) = default ;
        SupportLoginIdps& operator=(SupportLoginIdps &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->idpId_ == nullptr
        && this->idpName_ == nullptr; };
        // idpId Field Functions 
        bool hasIdpId() const { return this->idpId_ != nullptr;};
        void deleteIdpId() { this->idpId_ = nullptr;};
        inline string getIdpId() const { DARABONBA_PTR_GET_DEFAULT(idpId_, "") };
        inline SupportLoginIdps& setIdpId(string idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


        // idpName Field Functions 
        bool hasIdpName() const { return this->idpName_ != nullptr;};
        void deleteIdpName() { this->idpName_ = nullptr;};
        inline string getIdpName() const { DARABONBA_PTR_GET_DEFAULT(idpName_, "") };
        inline SupportLoginIdps& setIdpName(string idpName) { DARABONBA_PTR_SET_VALUE(idpName_, idpName) };


      protected:
        // The enterprise identity provider ID.
        shared_ptr<string> idpId_ {};
        // The enterprise identity provider name.
        shared_ptr<string> idpName_ {};
      };

      class ResourcePolicyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourcePolicyList& obj) { 
          DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
          DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        };
        friend void from_json(const Darabonba::Json& j, ResourcePolicyList& obj) { 
          DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
          DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        };
        ResourcePolicyList() = default ;
        ResourcePolicyList(const ResourcePolicyList &) = default ;
        ResourcePolicyList(ResourcePolicyList &&) = default ;
        ResourcePolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourcePolicyList() = default ;
        ResourcePolicyList& operator=(const ResourcePolicyList &) = default ;
        ResourcePolicyList& operator=(ResourcePolicyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->policyId_ == nullptr
        && this->policyName_ == nullptr; };
        // policyId Field Functions 
        bool hasPolicyId() const { return this->policyId_ != nullptr;};
        void deletePolicyId() { this->policyId_ = nullptr;};
        inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
        inline ResourcePolicyList& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


        // policyName Field Functions 
        bool hasPolicyName() const { return this->policyName_ != nullptr;};
        void deletePolicyName() { this->policyName_ = nullptr;};
        inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
        inline ResourcePolicyList& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      protected:
        shared_ptr<string> policyId_ {};
        shared_ptr<string> policyName_ {};
      };

      class OrgList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OrgList& obj) { 
          DARABONBA_PTR_TO_JSON(OrgId, orgId_);
          DARABONBA_PTR_TO_JSON(OrgName, orgName_);
          DARABONBA_PTR_TO_JSON(OrgNamePath, orgNamePath_);
        };
        friend void from_json(const Darabonba::Json& j, OrgList& obj) { 
          DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
          DARABONBA_PTR_FROM_JSON(OrgName, orgName_);
          DARABONBA_PTR_FROM_JSON(OrgNamePath, orgNamePath_);
        };
        OrgList() = default ;
        OrgList(const OrgList &) = default ;
        OrgList(OrgList &&) = default ;
        OrgList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OrgList() = default ;
        OrgList& operator=(const OrgList &) = default ;
        OrgList& operator=(OrgList &&) = default ;
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
        inline OrgList& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


        // orgName Field Functions 
        bool hasOrgName() const { return this->orgName_ != nullptr;};
        void deleteOrgName() { this->orgName_ = nullptr;};
        inline string getOrgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
        inline OrgList& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


        // orgNamePath Field Functions 
        bool hasOrgNamePath() const { return this->orgNamePath_ != nullptr;};
        void deleteOrgNamePath() { this->orgNamePath_ = nullptr;};
        inline string getOrgNamePath() const { DARABONBA_PTR_GET_DEFAULT(orgNamePath_, "") };
        inline OrgList& setOrgNamePath(string orgNamePath) { DARABONBA_PTR_SET_VALUE(orgNamePath_, orgNamePath) };


      protected:
        // The organization ID.
        shared_ptr<string> orgId_ {};
        // The organization name.
        shared_ptr<string> orgName_ {};
        // The organization name path.
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
        shared_ptr<string> groupId_ {};
        shared_ptr<string> groupName_ {};
      };

      class ExternalInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExternalInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalName, externalName_);
          DARABONBA_PTR_TO_JSON(JobNumber, jobNumber_);
        };
        friend void from_json(const Darabonba::Json& j, ExternalInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalName, externalName_);
          DARABONBA_PTR_FROM_JSON(JobNumber, jobNumber_);
        };
        ExternalInfo() = default ;
        ExternalInfo(const ExternalInfo &) = default ;
        ExternalInfo(ExternalInfo &&) = default ;
        ExternalInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExternalInfo() = default ;
        ExternalInfo& operator=(const ExternalInfo &) = default ;
        ExternalInfo& operator=(ExternalInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->externalName_ == nullptr
        && this->jobNumber_ == nullptr; };
        // externalName Field Functions 
        bool hasExternalName() const { return this->externalName_ != nullptr;};
        void deleteExternalName() { this->externalName_ = nullptr;};
        inline string getExternalName() const { DARABONBA_PTR_GET_DEFAULT(externalName_, "") };
        inline ExternalInfo& setExternalName(string externalName) { DARABONBA_PTR_SET_VALUE(externalName_, externalName) };


        // jobNumber Field Functions 
        bool hasJobNumber() const { return this->jobNumber_ != nullptr;};
        void deleteJobNumber() { this->jobNumber_ = nullptr;};
        inline string getJobNumber() const { DARABONBA_PTR_GET_DEFAULT(jobNumber_, "") };
        inline ExternalInfo& setJobNumber(string jobNumber) { DARABONBA_PTR_SET_VALUE(jobNumber_, jobNumber) };


      protected:
        // The account that is associated with the convenience user.
        shared_ptr<string> externalName_ {};
        // The account, student ID, or employee ID that is associated with the convenience user.
        shared_ptr<string> jobNumber_ {};
      };

      virtual bool empty() const override { return this->autoLockTime_ == nullptr
        && this->desktopCount_ == nullptr && this->desktopGroupCount_ == nullptr && this->email_ == nullptr && this->enableAdminAccess_ == nullptr && this->endUserId_ == nullptr
        && this->externalInfo_ == nullptr && this->groups_ == nullptr && this->id_ == nullptr && this->isTenantManager_ == nullptr && this->orgList_ == nullptr
        && this->ownerType_ == nullptr && this->passwordExpireDays_ == nullptr && this->passwordExpireRestDays_ == nullptr && this->phone_ == nullptr && this->realNickName_ == nullptr
        && this->remark_ == nullptr && this->resourcePolicyList_ == nullptr && this->status_ == nullptr && this->supportLoginIdps_ == nullptr && this->userSetPropertiesModels_ == nullptr; };
      // autoLockTime Field Functions 
      bool hasAutoLockTime() const { return this->autoLockTime_ != nullptr;};
      void deleteAutoLockTime() { this->autoLockTime_ = nullptr;};
      inline string getAutoLockTime() const { DARABONBA_PTR_GET_DEFAULT(autoLockTime_, "") };
      inline Users& setAutoLockTime(string autoLockTime) { DARABONBA_PTR_SET_VALUE(autoLockTime_, autoLockTime) };


      // desktopCount Field Functions 
      bool hasDesktopCount() const { return this->desktopCount_ != nullptr;};
      void deleteDesktopCount() { this->desktopCount_ = nullptr;};
      inline int64_t getDesktopCount() const { DARABONBA_PTR_GET_DEFAULT(desktopCount_, 0L) };
      inline Users& setDesktopCount(int64_t desktopCount) { DARABONBA_PTR_SET_VALUE(desktopCount_, desktopCount) };


      // desktopGroupCount Field Functions 
      bool hasDesktopGroupCount() const { return this->desktopGroupCount_ != nullptr;};
      void deleteDesktopGroupCount() { this->desktopGroupCount_ = nullptr;};
      inline int64_t getDesktopGroupCount() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupCount_, 0L) };
      inline Users& setDesktopGroupCount(int64_t desktopGroupCount) { DARABONBA_PTR_SET_VALUE(desktopGroupCount_, desktopGroupCount) };


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


      // externalInfo Field Functions 
      bool hasExternalInfo() const { return this->externalInfo_ != nullptr;};
      void deleteExternalInfo() { this->externalInfo_ = nullptr;};
      inline const Users::ExternalInfo & getExternalInfo() const { DARABONBA_PTR_GET_CONST(externalInfo_, Users::ExternalInfo) };
      inline Users::ExternalInfo getExternalInfo() { DARABONBA_PTR_GET(externalInfo_, Users::ExternalInfo) };
      inline Users& setExternalInfo(const Users::ExternalInfo & externalInfo) { DARABONBA_PTR_SET_VALUE(externalInfo_, externalInfo) };
      inline Users& setExternalInfo(Users::ExternalInfo && externalInfo) { DARABONBA_PTR_SET_RVALUE(externalInfo_, externalInfo) };


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


      // orgList Field Functions 
      bool hasOrgList() const { return this->orgList_ != nullptr;};
      void deleteOrgList() { this->orgList_ = nullptr;};
      inline const vector<Users::OrgList> & getOrgList() const { DARABONBA_PTR_GET_CONST(orgList_, vector<Users::OrgList>) };
      inline vector<Users::OrgList> getOrgList() { DARABONBA_PTR_GET(orgList_, vector<Users::OrgList>) };
      inline Users& setOrgList(const vector<Users::OrgList> & orgList) { DARABONBA_PTR_SET_VALUE(orgList_, orgList) };
      inline Users& setOrgList(vector<Users::OrgList> && orgList) { DARABONBA_PTR_SET_RVALUE(orgList_, orgList) };


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


      // resourcePolicyList Field Functions 
      bool hasResourcePolicyList() const { return this->resourcePolicyList_ != nullptr;};
      void deleteResourcePolicyList() { this->resourcePolicyList_ = nullptr;};
      inline const vector<Users::ResourcePolicyList> & getResourcePolicyList() const { DARABONBA_PTR_GET_CONST(resourcePolicyList_, vector<Users::ResourcePolicyList>) };
      inline vector<Users::ResourcePolicyList> getResourcePolicyList() { DARABONBA_PTR_GET(resourcePolicyList_, vector<Users::ResourcePolicyList>) };
      inline Users& setResourcePolicyList(const vector<Users::ResourcePolicyList> & resourcePolicyList) { DARABONBA_PTR_SET_VALUE(resourcePolicyList_, resourcePolicyList) };
      inline Users& setResourcePolicyList(vector<Users::ResourcePolicyList> && resourcePolicyList) { DARABONBA_PTR_SET_RVALUE(resourcePolicyList_, resourcePolicyList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
      inline Users& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supportLoginIdps Field Functions 
      bool hasSupportLoginIdps() const { return this->supportLoginIdps_ != nullptr;};
      void deleteSupportLoginIdps() { this->supportLoginIdps_ = nullptr;};
      inline const vector<Users::SupportLoginIdps> & getSupportLoginIdps() const { DARABONBA_PTR_GET_CONST(supportLoginIdps_, vector<Users::SupportLoginIdps>) };
      inline vector<Users::SupportLoginIdps> getSupportLoginIdps() { DARABONBA_PTR_GET(supportLoginIdps_, vector<Users::SupportLoginIdps>) };
      inline Users& setSupportLoginIdps(const vector<Users::SupportLoginIdps> & supportLoginIdps) { DARABONBA_PTR_SET_VALUE(supportLoginIdps_, supportLoginIdps) };
      inline Users& setSupportLoginIdps(vector<Users::SupportLoginIdps> && supportLoginIdps) { DARABONBA_PTR_SET_RVALUE(supportLoginIdps_, supportLoginIdps) };


      // userSetPropertiesModels Field Functions 
      bool hasUserSetPropertiesModels() const { return this->userSetPropertiesModels_ != nullptr;};
      void deleteUserSetPropertiesModels() { this->userSetPropertiesModels_ = nullptr;};
      inline const vector<Users::UserSetPropertiesModels> & getUserSetPropertiesModels() const { DARABONBA_PTR_GET_CONST(userSetPropertiesModels_, vector<Users::UserSetPropertiesModels>) };
      inline vector<Users::UserSetPropertiesModels> getUserSetPropertiesModels() { DARABONBA_PTR_GET(userSetPropertiesModels_, vector<Users::UserSetPropertiesModels>) };
      inline Users& setUserSetPropertiesModels(const vector<Users::UserSetPropertiesModels> & userSetPropertiesModels) { DARABONBA_PTR_SET_VALUE(userSetPropertiesModels_, userSetPropertiesModels) };
      inline Users& setUserSetPropertiesModels(vector<Users::UserSetPropertiesModels> && userSetPropertiesModels) { DARABONBA_PTR_SET_RVALUE(userSetPropertiesModels_, userSetPropertiesModels) };


    protected:
      // The date when a convenience account is automatically locked.
      shared_ptr<string> autoLockTime_ {};
      // The number of cloud desktops that are assigned to the convenience user.
      shared_ptr<int64_t> desktopCount_ {};
      // The number of cloud desktop pools that are assigned to the convenience user. This value is returned if you set `IncludeDesktopGroupCount` to `true`.
      shared_ptr<int64_t> desktopGroupCount_ {};
      // The email address of the convenience user.
      shared_ptr<string> email_ {};
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
      shared_ptr<bool> enableAdminAccess_ {};
      // The username of the convenience user.
      shared_ptr<string> endUserId_ {};
      // The additional information about the convenience user.
      shared_ptr<Users::ExternalInfo> externalInfo_ {};
      shared_ptr<vector<Users::Groups>> groups_ {};
      // The ID of the convenience user.
      shared_ptr<int64_t> id_ {};
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
      shared_ptr<bool> isTenantManager_ {};
      // The organizations to which the user belongs.
      shared_ptr<vector<Users::OrgList>> orgList_ {};
      // The type of the account ownership.
      // 
      // Valid values:
      // 
      // *   CreateFromManager: administrator-activated
      // *   Normal: user-activated
      shared_ptr<string> ownerType_ {};
      // By default, user account passwords do not expire. However, you can set a validity period between 30 and 365 days. Once the period expires, end users must change their password before they can log on to terminals.
      // 
      // >  The feature is in invitational preview. If you want to use this feature, submit a ticket.
      shared_ptr<int32_t> passwordExpireDays_ {};
      // The number of days remaining until the account password expires.
      shared_ptr<int32_t> passwordExpireRestDays_ {};
      // The mobile number of the convenience user.
      shared_ptr<string> phone_ {};
      // The nickname of the convenience user.
      shared_ptr<string> realNickName_ {};
      // The remarks on the convenience user.
      shared_ptr<string> remark_ {};
      shared_ptr<vector<Users::ResourcePolicyList>> resourcePolicyList_ {};
      // The remarks on the convenience account.
      // 
      // Valid values:
      // 
      // *   0: The convenience account is normal.
      // *   9: The convenience account is locked.
      shared_ptr<int64_t> status_ {};
      // The supported identity provider logon methods.
      shared_ptr<vector<Users::SupportLoginIdps>> supportLoginIdps_ {};
      // The information about the properties.
      shared_ptr<vector<Users::UserSetPropertiesModels>> userSetPropertiesModels_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->users_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline FilterUsersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FilterUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<FilterUsersResponseBody::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<FilterUsersResponseBody::Users>) };
    inline vector<FilterUsersResponseBody::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<FilterUsersResponseBody::Users>) };
    inline FilterUsersResponseBody& setUsers(const vector<FilterUsersResponseBody::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline FilterUsersResponseBody& setUsers(vector<FilterUsersResponseBody::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The pagination token that is used in the next request to retrieve a new page of results. If not all results are returned in a query, a value is returned for the NextToken parameter. In this case, you can use the returned NextToken value to start the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the convenience accounts.
    shared_ptr<vector<FilterUsersResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
