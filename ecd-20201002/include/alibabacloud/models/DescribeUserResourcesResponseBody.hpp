// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeUserResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(QueryFailedResourceTypes, queryFailedResourceTypes_);
      DARABONBA_PTR_TO_JSON(RankVersion, rankVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(QueryFailedResourceTypes, queryFailedResourceTypes_);
      DARABONBA_PTR_FROM_JSON(RankVersion, rankVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeUserResourcesResponseBody() = default ;
    DescribeUserResourcesResponseBody(const DescribeUserResourcesResponseBody &) = default ;
    DescribeUserResourcesResponseBody(DescribeUserResourcesResponseBody &&) = default ;
    DescribeUserResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserResourcesResponseBody() = default ;
    DescribeUserResourcesResponseBody& operator=(const DescribeUserResourcesResponseBody &) = default ;
    DescribeUserResourcesResponseBody& operator=(DescribeUserResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(AccessType, accessType_);
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AuthMode, authMode_);
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
        DARABONBA_PTR_TO_JSON(CdsName, cdsName_);
        DARABONBA_PTR_TO_JSON(CenterResourceId, centerResourceId_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(Clients, clients_);
        DARABONBA_PTR_TO_JSON(ConnectionProperties, connectionProperties_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DesktopDurationList, desktopDurationList_);
        DARABONBA_PTR_TO_JSON(DesktopTimers, desktopTimers_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(ExternalDomainId, externalDomainId_);
        DARABONBA_PTR_TO_JSON(ExternalUserId, externalUserId_);
        DARABONBA_PTR_TO_JSON(FotaUpdate, fotaUpdate_);
        DARABONBA_PTR_TO_JSON(GlobalStatus, globalStatus_);
        DARABONBA_PTR_TO_JSON(HasUpgrade, hasUpgrade_);
        DARABONBA_PTR_TO_JSON(HibernationBeta, hibernationBeta_);
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(LastStartTime, lastStartTime_);
        DARABONBA_PTR_TO_JSON(LocalName, localName_);
        DARABONBA_PTR_TO_JSON(ManagementStatuses, managementStatuses_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
        DARABONBA_PTR_TO_JSON(Os, os_);
        DARABONBA_PTR_TO_JSON(OsDescription, osDescription_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(OsUpdate, osUpdate_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(RealDesktopId, realDesktopId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RegionLocation, regionLocation_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceLevel, resourceLevel_);
        DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_TO_JSON(ResourceSessionStatus, resourceSessionStatus_);
        DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(SessionType, sessionType_);
        DARABONBA_PTR_TO_JSON(Sessions, sessions_);
        DARABONBA_PTR_TO_JSON(SubPayType, subPayType_);
        DARABONBA_PTR_TO_JSON(SupportHibernation, supportHibernation_);
        DARABONBA_PTR_TO_JSON(SupportedActions, supportedActions_);
        DARABONBA_PTR_TO_JSON(ThemeColor, themeColor_);
        DARABONBA_PTR_TO_JSON(UserCustomName, userCustomName_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AuthMode, authMode_);
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
        DARABONBA_PTR_FROM_JSON(CdsName, cdsName_);
        DARABONBA_PTR_FROM_JSON(CenterResourceId, centerResourceId_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(Clients, clients_);
        DARABONBA_PTR_FROM_JSON(ConnectionProperties, connectionProperties_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DesktopDurationList, desktopDurationList_);
        DARABONBA_PTR_FROM_JSON(DesktopTimers, desktopTimers_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(ExternalDomainId, externalDomainId_);
        DARABONBA_PTR_FROM_JSON(ExternalUserId, externalUserId_);
        DARABONBA_PTR_FROM_JSON(FotaUpdate, fotaUpdate_);
        DARABONBA_PTR_FROM_JSON(GlobalStatus, globalStatus_);
        DARABONBA_PTR_FROM_JSON(HasUpgrade, hasUpgrade_);
        DARABONBA_PTR_FROM_JSON(HibernationBeta, hibernationBeta_);
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(LastStartTime, lastStartTime_);
        DARABONBA_PTR_FROM_JSON(LocalName, localName_);
        DARABONBA_PTR_FROM_JSON(ManagementStatuses, managementStatuses_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
        DARABONBA_PTR_FROM_JSON(Os, os_);
        DARABONBA_PTR_FROM_JSON(OsDescription, osDescription_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(OsUpdate, osUpdate_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(RealDesktopId, realDesktopId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RegionLocation, regionLocation_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceLevel, resourceLevel_);
        DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_FROM_JSON(ResourceSessionStatus, resourceSessionStatus_);
        DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(SessionType, sessionType_);
        DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
        DARABONBA_PTR_FROM_JSON(SubPayType, subPayType_);
        DARABONBA_PTR_FROM_JSON(SupportHibernation, supportHibernation_);
        DARABONBA_PTR_FROM_JSON(SupportedActions, supportedActions_);
        DARABONBA_PTR_FROM_JSON(ThemeColor, themeColor_);
        DARABONBA_PTR_FROM_JSON(UserCustomName, userCustomName_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Sessions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sessions& obj) { 
          DARABONBA_PTR_TO_JSON(NickName, nickName_);
          DARABONBA_PTR_TO_JSON(ResourceSessionStartTime, resourceSessionStartTime_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
        };
        friend void from_json(const Darabonba::Json& j, Sessions& obj) { 
          DARABONBA_PTR_FROM_JSON(NickName, nickName_);
          DARABONBA_PTR_FROM_JSON(ResourceSessionStartTime, resourceSessionStartTime_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
        };
        Sessions() = default ;
        Sessions(const Sessions &) = default ;
        Sessions(Sessions &&) = default ;
        Sessions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sessions() = default ;
        Sessions& operator=(const Sessions &) = default ;
        Sessions& operator=(Sessions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->nickName_ == nullptr
        && this->resourceSessionStartTime_ == nullptr && this->userId_ == nullptr && this->userPrincipalName_ == nullptr; };
        // nickName Field Functions 
        bool hasNickName() const { return this->nickName_ != nullptr;};
        void deleteNickName() { this->nickName_ = nullptr;};
        inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
        inline Sessions& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


        // resourceSessionStartTime Field Functions 
        bool hasResourceSessionStartTime() const { return this->resourceSessionStartTime_ != nullptr;};
        void deleteResourceSessionStartTime() { this->resourceSessionStartTime_ = nullptr;};
        inline string getResourceSessionStartTime() const { DARABONBA_PTR_GET_DEFAULT(resourceSessionStartTime_, "") };
        inline Sessions& setResourceSessionStartTime(string resourceSessionStartTime) { DARABONBA_PTR_SET_VALUE(resourceSessionStartTime_, resourceSessionStartTime) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Sessions& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userPrincipalName Field Functions 
        bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
        void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
        inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
        inline Sessions& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


      protected:
        // 用户的昵称。
        shared_ptr<string> nickName_ {};
        // The timestamp when the resource session was established.
        shared_ptr<string> resourceSessionStartTime_ {};
        // The username used to log on to the resource.
        shared_ptr<string> userId_ {};
        // The User Principal Name (UPN) of the resource-bound user (if applicable). This parameter is returned only when you query the current user\\"s sessions.
        shared_ptr<string> userPrincipalName_ {};
      };

      class OsUpdate : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OsUpdate& obj) { 
          DARABONBA_PTR_TO_JSON(CheckId, checkId_);
          DARABONBA_PTR_TO_JSON(KbListString, kbListString_);
          DARABONBA_PTR_TO_JSON(PackageCount, packageCount_);
          DARABONBA_PTR_TO_JSON(Packages, packages_);
          DARABONBA_PTR_TO_JSON(UpdateCatalogUrl, updateCatalogUrl_);
        };
        friend void from_json(const Darabonba::Json& j, OsUpdate& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
          DARABONBA_PTR_FROM_JSON(KbListString, kbListString_);
          DARABONBA_PTR_FROM_JSON(PackageCount, packageCount_);
          DARABONBA_PTR_FROM_JSON(Packages, packages_);
          DARABONBA_PTR_FROM_JSON(UpdateCatalogUrl, updateCatalogUrl_);
        };
        OsUpdate() = default ;
        OsUpdate(const OsUpdate &) = default ;
        OsUpdate(OsUpdate &&) = default ;
        OsUpdate(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OsUpdate() = default ;
        OsUpdate& operator=(const OsUpdate &) = default ;
        OsUpdate& operator=(OsUpdate &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Packages : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Packages& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Kb, kb_);
            DARABONBA_PTR_TO_JSON(Title, title_);
          };
          friend void from_json(const Darabonba::Json& j, Packages& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Kb, kb_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
          };
          Packages() = default ;
          Packages(const Packages &) = default ;
          Packages(Packages &&) = default ;
          Packages(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Packages() = default ;
          Packages& operator=(const Packages &) = default ;
          Packages& operator=(Packages &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->kb_ == nullptr && this->title_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Packages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // kb Field Functions 
          bool hasKb() const { return this->kb_ != nullptr;};
          void deleteKb() { this->kb_ = nullptr;};
          inline string getKb() const { DARABONBA_PTR_GET_DEFAULT(kb_, "") };
          inline Packages& setKb(string kb) { DARABONBA_PTR_SET_VALUE(kb_, kb) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline Packages& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          // The patch description.
          shared_ptr<string> description_ {};
          // The patch number.
          shared_ptr<string> kb_ {};
          // The patch title.
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->checkId_ == nullptr
        && this->kbListString_ == nullptr && this->packageCount_ == nullptr && this->packages_ == nullptr && this->updateCatalogUrl_ == nullptr; };
        // checkId Field Functions 
        bool hasCheckId() const { return this->checkId_ != nullptr;};
        void deleteCheckId() { this->checkId_ = nullptr;};
        inline string getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
        inline OsUpdate& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


        // kbListString Field Functions 
        bool hasKbListString() const { return this->kbListString_ != nullptr;};
        void deleteKbListString() { this->kbListString_ = nullptr;};
        inline string getKbListString() const { DARABONBA_PTR_GET_DEFAULT(kbListString_, "") };
        inline OsUpdate& setKbListString(string kbListString) { DARABONBA_PTR_SET_VALUE(kbListString_, kbListString) };


        // packageCount Field Functions 
        bool hasPackageCount() const { return this->packageCount_ != nullptr;};
        void deletePackageCount() { this->packageCount_ = nullptr;};
        inline int32_t getPackageCount() const { DARABONBA_PTR_GET_DEFAULT(packageCount_, 0) };
        inline OsUpdate& setPackageCount(int32_t packageCount) { DARABONBA_PTR_SET_VALUE(packageCount_, packageCount) };


        // packages Field Functions 
        bool hasPackages() const { return this->packages_ != nullptr;};
        void deletePackages() { this->packages_ = nullptr;};
        inline const vector<OsUpdate::Packages> & getPackages() const { DARABONBA_PTR_GET_CONST(packages_, vector<OsUpdate::Packages>) };
        inline vector<OsUpdate::Packages> getPackages() { DARABONBA_PTR_GET(packages_, vector<OsUpdate::Packages>) };
        inline OsUpdate& setPackages(const vector<OsUpdate::Packages> & packages) { DARABONBA_PTR_SET_VALUE(packages_, packages) };
        inline OsUpdate& setPackages(vector<OsUpdate::Packages> && packages) { DARABONBA_PTR_SET_RVALUE(packages_, packages) };


        // updateCatalogUrl Field Functions 
        bool hasUpdateCatalogUrl() const { return this->updateCatalogUrl_ != nullptr;};
        void deleteUpdateCatalogUrl() { this->updateCatalogUrl_ = nullptr;};
        inline string getUpdateCatalogUrl() const { DARABONBA_PTR_GET_DEFAULT(updateCatalogUrl_, "") };
        inline OsUpdate& setUpdateCatalogUrl(string updateCatalogUrl) { DARABONBA_PTR_SET_VALUE(updateCatalogUrl_, updateCatalogUrl) };


      protected:
        // The ID of the check task.
        shared_ptr<string> checkId_ {};
        // The patch numbers.
        shared_ptr<string> kbListString_ {};
        // The number of packets.
        shared_ptr<int32_t> packageCount_ {};
        // The patch packages.
        shared_ptr<vector<OsUpdate::Packages>> packages_ {};
        // The update categorization URL.
        shared_ptr<string> updateCatalogUrl_ {};
      };

      class FotaUpdate : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FotaUpdate& obj) { 
          DARABONBA_PTR_TO_JSON(Channel, channel_);
          DARABONBA_PTR_TO_JSON(CurrentAppVersion, currentAppVersion_);
          DARABONBA_PTR_TO_JSON(Force, force_);
          DARABONBA_PTR_TO_JSON(NewAppVersion, newAppVersion_);
          DARABONBA_PTR_TO_JSON(NewDcdVersion, newDcdVersion_);
          DARABONBA_PTR_TO_JSON(Project, project_);
          DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
          DARABONBA_PTR_TO_JSON(ReleaseNoteEn, releaseNoteEn_);
          DARABONBA_PTR_TO_JSON(ReleaseNoteJp, releaseNoteJp_);
          DARABONBA_PTR_TO_JSON(Size, size_);
        };
        friend void from_json(const Darabonba::Json& j, FotaUpdate& obj) { 
          DARABONBA_PTR_FROM_JSON(Channel, channel_);
          DARABONBA_PTR_FROM_JSON(CurrentAppVersion, currentAppVersion_);
          DARABONBA_PTR_FROM_JSON(Force, force_);
          DARABONBA_PTR_FROM_JSON(NewAppVersion, newAppVersion_);
          DARABONBA_PTR_FROM_JSON(NewDcdVersion, newDcdVersion_);
          DARABONBA_PTR_FROM_JSON(Project, project_);
          DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
          DARABONBA_PTR_FROM_JSON(ReleaseNoteEn, releaseNoteEn_);
          DARABONBA_PTR_FROM_JSON(ReleaseNoteJp, releaseNoteJp_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
        };
        FotaUpdate() = default ;
        FotaUpdate(const FotaUpdate &) = default ;
        FotaUpdate(FotaUpdate &&) = default ;
        FotaUpdate(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FotaUpdate() = default ;
        FotaUpdate& operator=(const FotaUpdate &) = default ;
        FotaUpdate& operator=(FotaUpdate &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->channel_ == nullptr
        && this->currentAppVersion_ == nullptr && this->force_ == nullptr && this->newAppVersion_ == nullptr && this->newDcdVersion_ == nullptr && this->project_ == nullptr
        && this->releaseNote_ == nullptr && this->releaseNoteEn_ == nullptr && this->releaseNoteJp_ == nullptr && this->size_ == nullptr; };
        // channel Field Functions 
        bool hasChannel() const { return this->channel_ != nullptr;};
        void deleteChannel() { this->channel_ = nullptr;};
        inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
        inline FotaUpdate& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


        // currentAppVersion Field Functions 
        bool hasCurrentAppVersion() const { return this->currentAppVersion_ != nullptr;};
        void deleteCurrentAppVersion() { this->currentAppVersion_ = nullptr;};
        inline string getCurrentAppVersion() const { DARABONBA_PTR_GET_DEFAULT(currentAppVersion_, "") };
        inline FotaUpdate& setCurrentAppVersion(string currentAppVersion) { DARABONBA_PTR_SET_VALUE(currentAppVersion_, currentAppVersion) };


        // force Field Functions 
        bool hasForce() const { return this->force_ != nullptr;};
        void deleteForce() { this->force_ = nullptr;};
        inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
        inline FotaUpdate& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


        // newAppVersion Field Functions 
        bool hasNewAppVersion() const { return this->newAppVersion_ != nullptr;};
        void deleteNewAppVersion() { this->newAppVersion_ = nullptr;};
        inline string getNewAppVersion() const { DARABONBA_PTR_GET_DEFAULT(newAppVersion_, "") };
        inline FotaUpdate& setNewAppVersion(string newAppVersion) { DARABONBA_PTR_SET_VALUE(newAppVersion_, newAppVersion) };


        // newDcdVersion Field Functions 
        bool hasNewDcdVersion() const { return this->newDcdVersion_ != nullptr;};
        void deleteNewDcdVersion() { this->newDcdVersion_ = nullptr;};
        inline string getNewDcdVersion() const { DARABONBA_PTR_GET_DEFAULT(newDcdVersion_, "") };
        inline FotaUpdate& setNewDcdVersion(string newDcdVersion) { DARABONBA_PTR_SET_VALUE(newDcdVersion_, newDcdVersion) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline FotaUpdate& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        // releaseNote Field Functions 
        bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
        void deleteReleaseNote() { this->releaseNote_ = nullptr;};
        inline string getReleaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
        inline FotaUpdate& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


        // releaseNoteEn Field Functions 
        bool hasReleaseNoteEn() const { return this->releaseNoteEn_ != nullptr;};
        void deleteReleaseNoteEn() { this->releaseNoteEn_ = nullptr;};
        inline string getReleaseNoteEn() const { DARABONBA_PTR_GET_DEFAULT(releaseNoteEn_, "") };
        inline FotaUpdate& setReleaseNoteEn(string releaseNoteEn) { DARABONBA_PTR_SET_VALUE(releaseNoteEn_, releaseNoteEn) };


        // releaseNoteJp Field Functions 
        bool hasReleaseNoteJp() const { return this->releaseNoteJp_ != nullptr;};
        void deleteReleaseNoteJp() { this->releaseNoteJp_ = nullptr;};
        inline string getReleaseNoteJp() const { DARABONBA_PTR_GET_DEFAULT(releaseNoteJp_, "") };
        inline FotaUpdate& setReleaseNoteJp(string releaseNoteJp) { DARABONBA_PTR_SET_VALUE(releaseNoteJp_, releaseNoteJp) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
        inline FotaUpdate& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      protected:
        // The channel.
        shared_ptr<string> channel_ {};
        // The current version number of the cloud computer\\"s image.
        shared_ptr<string> currentAppVersion_ {};
        // Specifies whether to implement a forced update.
        shared_ptr<bool> force_ {};
        // The target version number of the cloud computer\\"s image.
        shared_ptr<string> newAppVersion_ {};
        // The latest version available for updating the component disk.
        shared_ptr<string> newDcdVersion_ {};
        // The project name.
        shared_ptr<string> project_ {};
        // The version description of the cloud computer\\"s image.
        shared_ptr<string> releaseNote_ {};
        // The English release note for the new image version.
        shared_ptr<string> releaseNoteEn_ {};
        // The Japanese release note for the new image version.
        shared_ptr<string> releaseNoteJp_ {};
        // The size of the update package for the cloud computer image. Unit: KB.
        shared_ptr<string> size_ {};
      };

      class DesktopTimers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DesktopTimers& obj) { 
          DARABONBA_PTR_TO_JSON(AllowClientSetting, allowClientSetting_);
          DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
          DARABONBA_PTR_TO_JSON(Enforce, enforce_);
          DARABONBA_PTR_TO_JSON(ExecutionTime, executionTime_);
          DARABONBA_PTR_TO_JSON(Interval, interval_);
          DARABONBA_PTR_TO_JSON(OperationType, operationType_);
          DARABONBA_PTR_TO_JSON(ResetType, resetType_);
          DARABONBA_PTR_TO_JSON(TimerType, timerType_);
        };
        friend void from_json(const Darabonba::Json& j, DesktopTimers& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowClientSetting, allowClientSetting_);
          DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
          DARABONBA_PTR_FROM_JSON(Enforce, enforce_);
          DARABONBA_PTR_FROM_JSON(ExecutionTime, executionTime_);
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
          DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
          DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
          DARABONBA_PTR_FROM_JSON(TimerType, timerType_);
        };
        DesktopTimers() = default ;
        DesktopTimers(const DesktopTimers &) = default ;
        DesktopTimers(DesktopTimers &&) = default ;
        DesktopTimers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DesktopTimers() = default ;
        DesktopTimers& operator=(const DesktopTimers &) = default ;
        DesktopTimers& operator=(DesktopTimers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allowClientSetting_ == nullptr
        && this->cronExpression_ == nullptr && this->enforce_ == nullptr && this->executionTime_ == nullptr && this->interval_ == nullptr && this->operationType_ == nullptr
        && this->resetType_ == nullptr && this->timerType_ == nullptr; };
        // allowClientSetting Field Functions 
        bool hasAllowClientSetting() const { return this->allowClientSetting_ != nullptr;};
        void deleteAllowClientSetting() { this->allowClientSetting_ = nullptr;};
        inline string getAllowClientSetting() const { DARABONBA_PTR_GET_DEFAULT(allowClientSetting_, "") };
        inline DesktopTimers& setAllowClientSetting(string allowClientSetting) { DARABONBA_PTR_SET_VALUE(allowClientSetting_, allowClientSetting) };


        // cronExpression Field Functions 
        bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
        void deleteCronExpression() { this->cronExpression_ = nullptr;};
        inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
        inline DesktopTimers& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


        // enforce Field Functions 
        bool hasEnforce() const { return this->enforce_ != nullptr;};
        void deleteEnforce() { this->enforce_ = nullptr;};
        inline bool getEnforce() const { DARABONBA_PTR_GET_DEFAULT(enforce_, false) };
        inline DesktopTimers& setEnforce(bool enforce) { DARABONBA_PTR_SET_VALUE(enforce_, enforce) };


        // executionTime Field Functions 
        bool hasExecutionTime() const { return this->executionTime_ != nullptr;};
        void deleteExecutionTime() { this->executionTime_ = nullptr;};
        inline string getExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(executionTime_, "") };
        inline DesktopTimers& setExecutionTime(string executionTime) { DARABONBA_PTR_SET_VALUE(executionTime_, executionTime) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
        inline DesktopTimers& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // operationType Field Functions 
        bool hasOperationType() const { return this->operationType_ != nullptr;};
        void deleteOperationType() { this->operationType_ = nullptr;};
        inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
        inline DesktopTimers& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


        // resetType Field Functions 
        bool hasResetType() const { return this->resetType_ != nullptr;};
        void deleteResetType() { this->resetType_ = nullptr;};
        inline string getResetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, "") };
        inline DesktopTimers& setResetType(string resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


        // timerType Field Functions 
        bool hasTimerType() const { return this->timerType_ != nullptr;};
        void deleteTimerType() { this->timerType_ = nullptr;};
        inline string getTimerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, "") };
        inline DesktopTimers& setTimerType(string timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


      protected:
        // Indicates whether to allow end users to configure scheduled tasks on clients.
        shared_ptr<string> allowClientSetting_ {};
        // The cron expression specified in the scheduled task.
        shared_ptr<string> cronExpression_ {};
        // Indicates whether to forcibly execute the scheduled task.
        shared_ptr<bool> enforce_ {};
        // The time when the scheduled task is executed.
        shared_ptr<string> executionTime_ {};
        // The interval at which the scheduled task is executed.
        shared_ptr<int32_t> interval_ {};
        // The type of the scheduled action.
        shared_ptr<string> operationType_ {};
        // The reset option.
        shared_ptr<string> resetType_ {};
        // The task type.
        shared_ptr<string> timerType_ {};
      };

      class DesktopDurationList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DesktopDurationList& obj) { 
          DARABONBA_PTR_TO_JSON(OrderInstanceId, orderInstanceId_);
          DARABONBA_PTR_TO_JSON(PackageCreationTime, packageCreationTime_);
          DARABONBA_PTR_TO_JSON(PackageExpiredTime, packageExpiredTime_);
          DARABONBA_PTR_TO_JSON(PackageId, packageId_);
          DARABONBA_PTR_TO_JSON(PackageStatus, packageStatus_);
          DARABONBA_PTR_TO_JSON(PackageType, packageType_);
          DARABONBA_PTR_TO_JSON(PackageUsedUpStrategy, packageUsedUpStrategy_);
          DARABONBA_PTR_TO_JSON(PeriodEndTime, periodEndTime_);
          DARABONBA_PTR_TO_JSON(PeriodStartTime, periodStartTime_);
          DARABONBA_PTR_TO_JSON(PostPaidLimitFee, postPaidLimitFee_);
          DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_TO_JSON(UsedDuration, usedDuration_);
        };
        friend void from_json(const Darabonba::Json& j, DesktopDurationList& obj) { 
          DARABONBA_PTR_FROM_JSON(OrderInstanceId, orderInstanceId_);
          DARABONBA_PTR_FROM_JSON(PackageCreationTime, packageCreationTime_);
          DARABONBA_PTR_FROM_JSON(PackageExpiredTime, packageExpiredTime_);
          DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
          DARABONBA_PTR_FROM_JSON(PackageStatus, packageStatus_);
          DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
          DARABONBA_PTR_FROM_JSON(PackageUsedUpStrategy, packageUsedUpStrategy_);
          DARABONBA_PTR_FROM_JSON(PeriodEndTime, periodEndTime_);
          DARABONBA_PTR_FROM_JSON(PeriodStartTime, periodStartTime_);
          DARABONBA_PTR_FROM_JSON(PostPaidLimitFee, postPaidLimitFee_);
          DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_FROM_JSON(UsedDuration, usedDuration_);
        };
        DesktopDurationList() = default ;
        DesktopDurationList(const DesktopDurationList &) = default ;
        DesktopDurationList(DesktopDurationList &&) = default ;
        DesktopDurationList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DesktopDurationList() = default ;
        DesktopDurationList& operator=(const DesktopDurationList &) = default ;
        DesktopDurationList& operator=(DesktopDurationList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->orderInstanceId_ == nullptr
        && this->packageCreationTime_ == nullptr && this->packageExpiredTime_ == nullptr && this->packageId_ == nullptr && this->packageStatus_ == nullptr && this->packageType_ == nullptr
        && this->packageUsedUpStrategy_ == nullptr && this->periodEndTime_ == nullptr && this->periodStartTime_ == nullptr && this->postPaidLimitFee_ == nullptr && this->totalDuration_ == nullptr
        && this->usedDuration_ == nullptr; };
        // orderInstanceId Field Functions 
        bool hasOrderInstanceId() const { return this->orderInstanceId_ != nullptr;};
        void deleteOrderInstanceId() { this->orderInstanceId_ = nullptr;};
        inline string getOrderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(orderInstanceId_, "") };
        inline DesktopDurationList& setOrderInstanceId(string orderInstanceId) { DARABONBA_PTR_SET_VALUE(orderInstanceId_, orderInstanceId) };


        // packageCreationTime Field Functions 
        bool hasPackageCreationTime() const { return this->packageCreationTime_ != nullptr;};
        void deletePackageCreationTime() { this->packageCreationTime_ = nullptr;};
        inline string getPackageCreationTime() const { DARABONBA_PTR_GET_DEFAULT(packageCreationTime_, "") };
        inline DesktopDurationList& setPackageCreationTime(string packageCreationTime) { DARABONBA_PTR_SET_VALUE(packageCreationTime_, packageCreationTime) };


        // packageExpiredTime Field Functions 
        bool hasPackageExpiredTime() const { return this->packageExpiredTime_ != nullptr;};
        void deletePackageExpiredTime() { this->packageExpiredTime_ = nullptr;};
        inline string getPackageExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(packageExpiredTime_, "") };
        inline DesktopDurationList& setPackageExpiredTime(string packageExpiredTime) { DARABONBA_PTR_SET_VALUE(packageExpiredTime_, packageExpiredTime) };


        // packageId Field Functions 
        bool hasPackageId() const { return this->packageId_ != nullptr;};
        void deletePackageId() { this->packageId_ = nullptr;};
        inline string getPackageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, "") };
        inline DesktopDurationList& setPackageId(string packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


        // packageStatus Field Functions 
        bool hasPackageStatus() const { return this->packageStatus_ != nullptr;};
        void deletePackageStatus() { this->packageStatus_ = nullptr;};
        inline string getPackageStatus() const { DARABONBA_PTR_GET_DEFAULT(packageStatus_, "") };
        inline DesktopDurationList& setPackageStatus(string packageStatus) { DARABONBA_PTR_SET_VALUE(packageStatus_, packageStatus) };


        // packageType Field Functions 
        bool hasPackageType() const { return this->packageType_ != nullptr;};
        void deletePackageType() { this->packageType_ = nullptr;};
        inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
        inline DesktopDurationList& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


        // packageUsedUpStrategy Field Functions 
        bool hasPackageUsedUpStrategy() const { return this->packageUsedUpStrategy_ != nullptr;};
        void deletePackageUsedUpStrategy() { this->packageUsedUpStrategy_ = nullptr;};
        inline string getPackageUsedUpStrategy() const { DARABONBA_PTR_GET_DEFAULT(packageUsedUpStrategy_, "") };
        inline DesktopDurationList& setPackageUsedUpStrategy(string packageUsedUpStrategy) { DARABONBA_PTR_SET_VALUE(packageUsedUpStrategy_, packageUsedUpStrategy) };


        // periodEndTime Field Functions 
        bool hasPeriodEndTime() const { return this->periodEndTime_ != nullptr;};
        void deletePeriodEndTime() { this->periodEndTime_ = nullptr;};
        inline string getPeriodEndTime() const { DARABONBA_PTR_GET_DEFAULT(periodEndTime_, "") };
        inline DesktopDurationList& setPeriodEndTime(string periodEndTime) { DARABONBA_PTR_SET_VALUE(periodEndTime_, periodEndTime) };


        // periodStartTime Field Functions 
        bool hasPeriodStartTime() const { return this->periodStartTime_ != nullptr;};
        void deletePeriodStartTime() { this->periodStartTime_ = nullptr;};
        inline string getPeriodStartTime() const { DARABONBA_PTR_GET_DEFAULT(periodStartTime_, "") };
        inline DesktopDurationList& setPeriodStartTime(string periodStartTime) { DARABONBA_PTR_SET_VALUE(periodStartTime_, periodStartTime) };


        // postPaidLimitFee Field Functions 
        bool hasPostPaidLimitFee() const { return this->postPaidLimitFee_ != nullptr;};
        void deletePostPaidLimitFee() { this->postPaidLimitFee_ = nullptr;};
        inline float getPostPaidLimitFee() const { DARABONBA_PTR_GET_DEFAULT(postPaidLimitFee_, 0.0) };
        inline DesktopDurationList& setPostPaidLimitFee(float postPaidLimitFee) { DARABONBA_PTR_SET_VALUE(postPaidLimitFee_, postPaidLimitFee) };


        // totalDuration Field Functions 
        bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
        void deleteTotalDuration() { this->totalDuration_ = nullptr;};
        inline int64_t getTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0L) };
        inline DesktopDurationList& setTotalDuration(int64_t totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


        // usedDuration Field Functions 
        bool hasUsedDuration() const { return this->usedDuration_ != nullptr;};
        void deleteUsedDuration() { this->usedDuration_ = nullptr;};
        inline int64_t getUsedDuration() const { DARABONBA_PTR_GET_DEFAULT(usedDuration_, 0L) };
        inline DesktopDurationList& setUsedDuration(int64_t usedDuration) { DARABONBA_PTR_SET_VALUE(usedDuration_, usedDuration) };


      protected:
        // The ID of the instance order.
        shared_ptr<string> orderInstanceId_ {};
        // The time when the package was created.
        shared_ptr<string> packageCreationTime_ {};
        // The expiration time of the package.
        shared_ptr<string> packageExpiredTime_ {};
        // The package ID.
        shared_ptr<string> packageId_ {};
        // The package status.
        shared_ptr<string> packageStatus_ {};
        // The package type.
        // 
        // Valid values:
        // 
        // *   FREE_PACKAGE: a free package.
        // *   NORMAL_PACKAGE: a paid package (120-hour computing plan).
        // *   POSTPAID_PACKAGE: a pay-as-you-go package (200-hour computing plan).
        // *   Duration: an hourly package.
        shared_ptr<string> packageType_ {};
        // The policy for the cloud computer status once the monthly package quota is exhausted.
        // 
        // Valid values:
        // 
        // *   Shutdown: The cloud computer enters the Stopped or Hibernated state.
        // *   PostPaid: The cloud computer continues providing services that are billed on the pay-as-you-go basis.
        shared_ptr<string> packageUsedUpStrategy_ {};
        // The package\\"s effective end time for the current month.
        shared_ptr<string> periodEndTime_ {};
        // The package\\"s effective start time for the current month.
        shared_ptr<string> periodStartTime_ {};
        // The maximum fee for the package in the second phase.
        // 
        // >  This parameter is returned if you set ResourceType to `POSTPAID_PACKAG` or `FREE_PACKAGE`.
        shared_ptr<float> postPaidLimitFee_ {};
        // The total duration.
        shared_ptr<int64_t> totalDuration_ {};
        // The subscription duration consumed.
        shared_ptr<int64_t> usedDuration_ {};
      };

      class Clients : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Clients& obj) { 
          DARABONBA_PTR_TO_JSON(ClientType, clientType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Clients& obj) { 
          DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Clients() = default ;
        Clients(const Clients &) = default ;
        Clients(Clients &&) = default ;
        Clients(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Clients() = default ;
        Clients& operator=(const Clients &) = default ;
        Clients& operator=(Clients &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clientType_ == nullptr
        && this->status_ == nullptr; };
        // clientType Field Functions 
        bool hasClientType() const { return this->clientType_ != nullptr;};
        void deleteClientType() { this->clientType_ = nullptr;};
        inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
        inline Clients& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Clients& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The client type.
        shared_ptr<string> clientType_ {};
        // The status.
        // 
        // Valid values:
        // 
        // *   OFF
        // *   ON
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->accessType_ == nullptr
        && this->aliUid_ == nullptr && this->appId_ == nullptr && this->authMode_ == nullptr && this->categoryId_ == nullptr && this->categoryType_ == nullptr
        && this->cdsName_ == nullptr && this->centerResourceId_ == nullptr && this->chargeType_ == nullptr && this->clients_ == nullptr && this->connectionProperties_ == nullptr
        && this->createTime_ == nullptr && this->desktopDurationList_ == nullptr && this->desktopTimers_ == nullptr && this->expiredTime_ == nullptr && this->externalDomainId_ == nullptr
        && this->externalUserId_ == nullptr && this->fotaUpdate_ == nullptr && this->globalStatus_ == nullptr && this->hasUpgrade_ == nullptr && this->hibernationBeta_ == nullptr
        && this->icon_ == nullptr && this->lastStartTime_ == nullptr && this->localName_ == nullptr && this->managementStatuses_ == nullptr && this->officeSiteId_ == nullptr
        && this->orderStatus_ == nullptr && this->os_ == nullptr && this->osDescription_ == nullptr && this->osType_ == nullptr && this->osUpdate_ == nullptr
        && this->productType_ == nullptr && this->protocolType_ == nullptr && this->realDesktopId_ == nullptr && this->regionId_ == nullptr && this->regionLocation_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceId_ == nullptr && this->resourceLevel_ == nullptr && this->resourceName_ == nullptr && this->resourceSessionStatus_ == nullptr
        && this->resourceStatus_ == nullptr && this->resourceType_ == nullptr && this->sessionType_ == nullptr && this->sessions_ == nullptr && this->subPayType_ == nullptr
        && this->supportHibernation_ == nullptr && this->supportedActions_ == nullptr && this->themeColor_ == nullptr && this->userCustomName_ == nullptr && this->version_ == nullptr; };
      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
      inline Resources& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Resources& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Resources& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // authMode Field Functions 
      bool hasAuthMode() const { return this->authMode_ != nullptr;};
      void deleteAuthMode() { this->authMode_ = nullptr;};
      inline string getAuthMode() const { DARABONBA_PTR_GET_DEFAULT(authMode_, "") };
      inline Resources& setAuthMode(string authMode) { DARABONBA_PTR_SET_VALUE(authMode_, authMode) };


      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline int32_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
      inline Resources& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // categoryType Field Functions 
      bool hasCategoryType() const { return this->categoryType_ != nullptr;};
      void deleteCategoryType() { this->categoryType_ = nullptr;};
      inline int32_t getCategoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, 0) };
      inline Resources& setCategoryType(int32_t categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


      // cdsName Field Functions 
      bool hasCdsName() const { return this->cdsName_ != nullptr;};
      void deleteCdsName() { this->cdsName_ = nullptr;};
      inline string getCdsName() const { DARABONBA_PTR_GET_DEFAULT(cdsName_, "") };
      inline Resources& setCdsName(string cdsName) { DARABONBA_PTR_SET_VALUE(cdsName_, cdsName) };


      // centerResourceId Field Functions 
      bool hasCenterResourceId() const { return this->centerResourceId_ != nullptr;};
      void deleteCenterResourceId() { this->centerResourceId_ = nullptr;};
      inline string getCenterResourceId() const { DARABONBA_PTR_GET_DEFAULT(centerResourceId_, "") };
      inline Resources& setCenterResourceId(string centerResourceId) { DARABONBA_PTR_SET_VALUE(centerResourceId_, centerResourceId) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Resources& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // clients Field Functions 
      bool hasClients() const { return this->clients_ != nullptr;};
      void deleteClients() { this->clients_ = nullptr;};
      inline const vector<Resources::Clients> & getClients() const { DARABONBA_PTR_GET_CONST(clients_, vector<Resources::Clients>) };
      inline vector<Resources::Clients> getClients() { DARABONBA_PTR_GET(clients_, vector<Resources::Clients>) };
      inline Resources& setClients(const vector<Resources::Clients> & clients) { DARABONBA_PTR_SET_VALUE(clients_, clients) };
      inline Resources& setClients(vector<Resources::Clients> && clients) { DARABONBA_PTR_SET_RVALUE(clients_, clients) };


      // connectionProperties Field Functions 
      bool hasConnectionProperties() const { return this->connectionProperties_ != nullptr;};
      void deleteConnectionProperties() { this->connectionProperties_ = nullptr;};
      inline string getConnectionProperties() const { DARABONBA_PTR_GET_DEFAULT(connectionProperties_, "") };
      inline Resources& setConnectionProperties(string connectionProperties) { DARABONBA_PTR_SET_VALUE(connectionProperties_, connectionProperties) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Resources& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // desktopDurationList Field Functions 
      bool hasDesktopDurationList() const { return this->desktopDurationList_ != nullptr;};
      void deleteDesktopDurationList() { this->desktopDurationList_ = nullptr;};
      inline const vector<Resources::DesktopDurationList> & getDesktopDurationList() const { DARABONBA_PTR_GET_CONST(desktopDurationList_, vector<Resources::DesktopDurationList>) };
      inline vector<Resources::DesktopDurationList> getDesktopDurationList() { DARABONBA_PTR_GET(desktopDurationList_, vector<Resources::DesktopDurationList>) };
      inline Resources& setDesktopDurationList(const vector<Resources::DesktopDurationList> & desktopDurationList) { DARABONBA_PTR_SET_VALUE(desktopDurationList_, desktopDurationList) };
      inline Resources& setDesktopDurationList(vector<Resources::DesktopDurationList> && desktopDurationList) { DARABONBA_PTR_SET_RVALUE(desktopDurationList_, desktopDurationList) };


      // desktopTimers Field Functions 
      bool hasDesktopTimers() const { return this->desktopTimers_ != nullptr;};
      void deleteDesktopTimers() { this->desktopTimers_ = nullptr;};
      inline const vector<Resources::DesktopTimers> & getDesktopTimers() const { DARABONBA_PTR_GET_CONST(desktopTimers_, vector<Resources::DesktopTimers>) };
      inline vector<Resources::DesktopTimers> getDesktopTimers() { DARABONBA_PTR_GET(desktopTimers_, vector<Resources::DesktopTimers>) };
      inline Resources& setDesktopTimers(const vector<Resources::DesktopTimers> & desktopTimers) { DARABONBA_PTR_SET_VALUE(desktopTimers_, desktopTimers) };
      inline Resources& setDesktopTimers(vector<Resources::DesktopTimers> && desktopTimers) { DARABONBA_PTR_SET_RVALUE(desktopTimers_, desktopTimers) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline Resources& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // externalDomainId Field Functions 
      bool hasExternalDomainId() const { return this->externalDomainId_ != nullptr;};
      void deleteExternalDomainId() { this->externalDomainId_ = nullptr;};
      inline string getExternalDomainId() const { DARABONBA_PTR_GET_DEFAULT(externalDomainId_, "") };
      inline Resources& setExternalDomainId(string externalDomainId) { DARABONBA_PTR_SET_VALUE(externalDomainId_, externalDomainId) };


      // externalUserId Field Functions 
      bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
      void deleteExternalUserId() { this->externalUserId_ = nullptr;};
      inline string getExternalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
      inline Resources& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


      // fotaUpdate Field Functions 
      bool hasFotaUpdate() const { return this->fotaUpdate_ != nullptr;};
      void deleteFotaUpdate() { this->fotaUpdate_ = nullptr;};
      inline const Resources::FotaUpdate & getFotaUpdate() const { DARABONBA_PTR_GET_CONST(fotaUpdate_, Resources::FotaUpdate) };
      inline Resources::FotaUpdate getFotaUpdate() { DARABONBA_PTR_GET(fotaUpdate_, Resources::FotaUpdate) };
      inline Resources& setFotaUpdate(const Resources::FotaUpdate & fotaUpdate) { DARABONBA_PTR_SET_VALUE(fotaUpdate_, fotaUpdate) };
      inline Resources& setFotaUpdate(Resources::FotaUpdate && fotaUpdate) { DARABONBA_PTR_SET_RVALUE(fotaUpdate_, fotaUpdate) };


      // globalStatus Field Functions 
      bool hasGlobalStatus() const { return this->globalStatus_ != nullptr;};
      void deleteGlobalStatus() { this->globalStatus_ = nullptr;};
      inline bool getGlobalStatus() const { DARABONBA_PTR_GET_DEFAULT(globalStatus_, false) };
      inline Resources& setGlobalStatus(bool globalStatus) { DARABONBA_PTR_SET_VALUE(globalStatus_, globalStatus) };


      // hasUpgrade Field Functions 
      bool hasHasUpgrade() const { return this->hasUpgrade_ != nullptr;};
      void deleteHasUpgrade() { this->hasUpgrade_ = nullptr;};
      inline bool getHasUpgrade() const { DARABONBA_PTR_GET_DEFAULT(hasUpgrade_, false) };
      inline Resources& setHasUpgrade(bool hasUpgrade) { DARABONBA_PTR_SET_VALUE(hasUpgrade_, hasUpgrade) };


      // hibernationBeta Field Functions 
      bool hasHibernationBeta() const { return this->hibernationBeta_ != nullptr;};
      void deleteHibernationBeta() { this->hibernationBeta_ = nullptr;};
      inline bool getHibernationBeta() const { DARABONBA_PTR_GET_DEFAULT(hibernationBeta_, false) };
      inline Resources& setHibernationBeta(bool hibernationBeta) { DARABONBA_PTR_SET_VALUE(hibernationBeta_, hibernationBeta) };


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline Resources& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // lastStartTime Field Functions 
      bool hasLastStartTime() const { return this->lastStartTime_ != nullptr;};
      void deleteLastStartTime() { this->lastStartTime_ = nullptr;};
      inline string getLastStartTime() const { DARABONBA_PTR_GET_DEFAULT(lastStartTime_, "") };
      inline Resources& setLastStartTime(string lastStartTime) { DARABONBA_PTR_SET_VALUE(lastStartTime_, lastStartTime) };


      // localName Field Functions 
      bool hasLocalName() const { return this->localName_ != nullptr;};
      void deleteLocalName() { this->localName_ = nullptr;};
      inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
      inline Resources& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


      // managementStatuses Field Functions 
      bool hasManagementStatuses() const { return this->managementStatuses_ != nullptr;};
      void deleteManagementStatuses() { this->managementStatuses_ = nullptr;};
      inline const vector<string> & getManagementStatuses() const { DARABONBA_PTR_GET_CONST(managementStatuses_, vector<string>) };
      inline vector<string> getManagementStatuses() { DARABONBA_PTR_GET(managementStatuses_, vector<string>) };
      inline Resources& setManagementStatuses(const vector<string> & managementStatuses) { DARABONBA_PTR_SET_VALUE(managementStatuses_, managementStatuses) };
      inline Resources& setManagementStatuses(vector<string> && managementStatuses) { DARABONBA_PTR_SET_RVALUE(managementStatuses_, managementStatuses) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline Resources& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // orderStatus Field Functions 
      bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
      void deleteOrderStatus() { this->orderStatus_ = nullptr;};
      inline string getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, "") };
      inline Resources& setOrderStatus(string orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline Resources& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // osDescription Field Functions 
      bool hasOsDescription() const { return this->osDescription_ != nullptr;};
      void deleteOsDescription() { this->osDescription_ = nullptr;};
      inline string getOsDescription() const { DARABONBA_PTR_GET_DEFAULT(osDescription_, "") };
      inline Resources& setOsDescription(string osDescription) { DARABONBA_PTR_SET_VALUE(osDescription_, osDescription) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Resources& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // osUpdate Field Functions 
      bool hasOsUpdate() const { return this->osUpdate_ != nullptr;};
      void deleteOsUpdate() { this->osUpdate_ = nullptr;};
      inline const Resources::OsUpdate & getOsUpdate() const { DARABONBA_PTR_GET_CONST(osUpdate_, Resources::OsUpdate) };
      inline Resources::OsUpdate getOsUpdate() { DARABONBA_PTR_GET(osUpdate_, Resources::OsUpdate) };
      inline Resources& setOsUpdate(const Resources::OsUpdate & osUpdate) { DARABONBA_PTR_SET_VALUE(osUpdate_, osUpdate) };
      inline Resources& setOsUpdate(Resources::OsUpdate && osUpdate) { DARABONBA_PTR_SET_RVALUE(osUpdate_, osUpdate) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline Resources& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline Resources& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // realDesktopId Field Functions 
      bool hasRealDesktopId() const { return this->realDesktopId_ != nullptr;};
      void deleteRealDesktopId() { this->realDesktopId_ = nullptr;};
      inline string getRealDesktopId() const { DARABONBA_PTR_GET_DEFAULT(realDesktopId_, "") };
      inline Resources& setRealDesktopId(string realDesktopId) { DARABONBA_PTR_SET_VALUE(realDesktopId_, realDesktopId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Resources& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // regionLocation Field Functions 
      bool hasRegionLocation() const { return this->regionLocation_ != nullptr;};
      void deleteRegionLocation() { this->regionLocation_ = nullptr;};
      inline string getRegionLocation() const { DARABONBA_PTR_GET_DEFAULT(regionLocation_, "") };
      inline Resources& setRegionLocation(string regionLocation) { DARABONBA_PTR_SET_VALUE(regionLocation_, regionLocation) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Resources& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Resources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceLevel Field Functions 
      bool hasResourceLevel() const { return this->resourceLevel_ != nullptr;};
      void deleteResourceLevel() { this->resourceLevel_ = nullptr;};
      inline string getResourceLevel() const { DARABONBA_PTR_GET_DEFAULT(resourceLevel_, "") };
      inline Resources& setResourceLevel(string resourceLevel) { DARABONBA_PTR_SET_VALUE(resourceLevel_, resourceLevel) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline Resources& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // resourceSessionStatus Field Functions 
      bool hasResourceSessionStatus() const { return this->resourceSessionStatus_ != nullptr;};
      void deleteResourceSessionStatus() { this->resourceSessionStatus_ = nullptr;};
      inline string getResourceSessionStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceSessionStatus_, "") };
      inline Resources& setResourceSessionStatus(string resourceSessionStatus) { DARABONBA_PTR_SET_VALUE(resourceSessionStatus_, resourceSessionStatus) };


      // resourceStatus Field Functions 
      bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
      void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
      inline string getResourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
      inline Resources& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // sessionType Field Functions 
      bool hasSessionType() const { return this->sessionType_ != nullptr;};
      void deleteSessionType() { this->sessionType_ = nullptr;};
      inline string getSessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
      inline Resources& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


      // sessions Field Functions 
      bool hasSessions() const { return this->sessions_ != nullptr;};
      void deleteSessions() { this->sessions_ = nullptr;};
      inline const vector<Resources::Sessions> & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<Resources::Sessions>) };
      inline vector<Resources::Sessions> getSessions() { DARABONBA_PTR_GET(sessions_, vector<Resources::Sessions>) };
      inline Resources& setSessions(const vector<Resources::Sessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
      inline Resources& setSessions(vector<Resources::Sessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


      // subPayType Field Functions 
      bool hasSubPayType() const { return this->subPayType_ != nullptr;};
      void deleteSubPayType() { this->subPayType_ = nullptr;};
      inline string getSubPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
      inline Resources& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


      // supportHibernation Field Functions 
      bool hasSupportHibernation() const { return this->supportHibernation_ != nullptr;};
      void deleteSupportHibernation() { this->supportHibernation_ = nullptr;};
      inline bool getSupportHibernation() const { DARABONBA_PTR_GET_DEFAULT(supportHibernation_, false) };
      inline Resources& setSupportHibernation(bool supportHibernation) { DARABONBA_PTR_SET_VALUE(supportHibernation_, supportHibernation) };


      // supportedActions Field Functions 
      bool hasSupportedActions() const { return this->supportedActions_ != nullptr;};
      void deleteSupportedActions() { this->supportedActions_ = nullptr;};
      inline const vector<string> & getSupportedActions() const { DARABONBA_PTR_GET_CONST(supportedActions_, vector<string>) };
      inline vector<string> getSupportedActions() { DARABONBA_PTR_GET(supportedActions_, vector<string>) };
      inline Resources& setSupportedActions(const vector<string> & supportedActions) { DARABONBA_PTR_SET_VALUE(supportedActions_, supportedActions) };
      inline Resources& setSupportedActions(vector<string> && supportedActions) { DARABONBA_PTR_SET_RVALUE(supportedActions_, supportedActions) };


      // themeColor Field Functions 
      bool hasThemeColor() const { return this->themeColor_ != nullptr;};
      void deleteThemeColor() { this->themeColor_ = nullptr;};
      inline string getThemeColor() const { DARABONBA_PTR_GET_DEFAULT(themeColor_, "") };
      inline Resources& setThemeColor(string themeColor) { DARABONBA_PTR_SET_VALUE(themeColor_, themeColor) };


      // userCustomName Field Functions 
      bool hasUserCustomName() const { return this->userCustomName_ != nullptr;};
      void deleteUserCustomName() { this->userCustomName_ = nullptr;};
      inline string getUserCustomName() const { DARABONBA_PTR_GET_DEFAULT(userCustomName_, "") };
      inline Resources& setUserCustomName(string userCustomName) { DARABONBA_PTR_SET_VALUE(userCustomName_, userCustomName) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Resources& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The access type.
      // 
      // Valid values:
      // 
      // *   INTERNET: access over the Internet.
      // *   VPC: access over an enterprise VPC.
      // *   ANY: access over the Internet or an enterprise VPC.
      shared_ptr<string> accessType_ {};
      // The ID of the Alibaba Cloud account.
      shared_ptr<int64_t> aliUid_ {};
      // The app ID. This parameter is for apps only.
      shared_ptr<string> appId_ {};
      // The authorization mode of the cloud app.
      // 
      // Valid values:
      // 
      // *   App: authorizes access to apps.
      // *   AppInstanceGroup: authorizes access to delivery groups.
      // *   Session: authorizes access to sessions.
      shared_ptr<string> authMode_ {};
      // The level-2 resource category. This parameter is for apps only.
      shared_ptr<int32_t> categoryId_ {};
      // The level-1 resource category. This parameter is for apps only.
      shared_ptr<int32_t> categoryType_ {};
      // The drive name. This parameter is for enterprise drives only.
      shared_ptr<string> cdsName_ {};
      // The ID of the centralized resource.
      shared_ptr<string> centerResourceId_ {};
      // The billing method.
      // 
      // Valid values:
      // 
      // *   Postpaid (default): pay-as-you-go.
      // *   PrePaid: subscription.
      shared_ptr<string> chargeType_ {};
      // The client types supported by resources.
      shared_ptr<vector<Resources::Clients>> clients_ {};
      // The connection attributes in JSON format. The client does not need to process the attributes; they are directly passed to the resource management center when the app resource is created.
      shared_ptr<string> connectionProperties_ {};
      // The time when the resource was created.
      shared_ptr<string> createTime_ {};
      // The cloud computer plans.
      shared_ptr<vector<Resources::DesktopDurationList>> desktopDurationList_ {};
      // The scheduled tasks for cloud computers.
      shared_ptr<vector<Resources::DesktopTimers>> desktopTimers_ {};
      // The expiration time of the subscription resource.
      shared_ptr<string> expiredTime_ {};
      // The ID of the external domain. This parameter is for enterprise drives only.
      shared_ptr<string> externalDomainId_ {};
      // The ID of the external user. This parameter is for enterprise drives only.
      shared_ptr<string> externalUserId_ {};
      // The update info of the cloud computer.
      shared_ptr<Resources::FotaUpdate> fotaUpdate_ {};
      // Indicates whether cross-region access is supported. This parameter is for enterprise drives only.
      shared_ptr<bool> globalStatus_ {};
      // Indicates whether an update exists.
      shared_ptr<bool> hasUpgrade_ {};
      // Indicates whether this is a beta version of the hibernation feature.
      // 
      // Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> hibernationBeta_ {};
      // The resource icon. This parameter is for apps only.
      shared_ptr<string> icon_ {};
      // The time when the resource was last started.
      shared_ptr<string> lastStartTime_ {};
      // The region name.
      shared_ptr<string> localName_ {};
      // The management status.
      shared_ptr<vector<string>> managementStatuses_ {};
      // The office network ID.
      shared_ptr<string> officeSiteId_ {};
      // The order status.
      // 
      // Valid values:
      // 
      // *   Ceased: Your account has an overdue payment.
      // *   Released: The order is closed.
      // *   Expired: The subscription resource has expired.
      // *   Normal: The order is normal.
      shared_ptr<string> orderStatus_ {};
      // The OS platform.
      shared_ptr<string> os_ {};
      // The description of the OS platform.
      shared_ptr<string> osDescription_ {};
      // The OS type.
      // 
      // Valid values:
      // 
      // *   Linux
      // *   Windows
      // *   Android
      shared_ptr<string> osType_ {};
      // The update info of the OS.
      shared_ptr<Resources::OsUpdate> osUpdate_ {};
      // The service type.
      // 
      // Valid values:
      // 
      // *   CloudDesktop: regular cloud computers or cloud computer shares.
      // *   CloudApp: App Streaming
      // *   CloudBrowser: Cloud Browser.
      // *   AndroidCloud: Cloud Phone.
      shared_ptr<string> productType_ {};
      // The protocol type.
      // 
      // Valid values:
      // 
      // *   HDX
      // *   ASP
      shared_ptr<string> protocolType_ {};
      // The real ID of the cloud computer (from a share). This parameter is returned only when the cloud computer share has ongoing sessions.
      shared_ptr<string> realDesktopId_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The geographical location.
      // 
      // Valid values:
      // 
      // *   Mainland: regions in the Chinese mainland.
      // *   Overseas: regions outside the Chinese mainland, including China (Hong Kong).
      shared_ptr<string> regionLocation_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The resource ID.
      shared_ptr<string> resourceId_ {};
      // The resource level.
      // 
      // Valid values:
      // 
      // *   Center: a centralized resource.
      // *   Region: a unit resource.
      shared_ptr<string> resourceLevel_ {};
      // The resource name.
      shared_ptr<string> resourceName_ {};
      // The session status.
      // 
      // Valid values:
      // 
      // *   Unknown
      // *   Connected
      // *   Disconnected
      shared_ptr<string> resourceSessionStatus_ {};
      // The resource status.
      // 
      // Valid values:
      // 
      // *   Unknown: The resource status is unknown.
      // *   Stopped: The resource is stopped.
      // *   Failed: The resource failed to be created.
      // *   Starting: The resource is being started.
      // *   Rebuilding: The resource is changing.
      // *   Running: The resource is running.
      // *   Stopping: The resource is being stopped.
      // *   FotaUpdating: The image is being updated.
      // *   Pending: The resource is still being prepared.
      // *   Deleting: The resource is being deleted.
      // *   Unavailable: The resource is unavailable.
      shared_ptr<string> resourceStatus_ {};
      // The resource type.
      // 
      // Valid values:
      // 
      // *   App: cloud apps including App Streaming, Cloud Phone, and Cloud Browser.
      // *   Desktop: cloud computers.
      // *   DesktopGroup: cloud computer shares.
      // *   CloudDrive: enterprise drives.
      shared_ptr<string> resourceType_ {};
      // The session type.
      // 
      // Valid values:
      // 
      // *   SINGLE_SESSION
      // *   MULTIPLE_SESSION
      shared_ptr<string> sessionType_ {};
      // The sessions established between users and resources.
      shared_ptr<vector<Resources::Sessions>> sessions_ {};
      // The sub-billing method.
      // 
      // Valid values:
      // 
      // *   monthPackage: monthly subscription.
      // *   PrePaid: hourly plans.
      shared_ptr<string> subPayType_ {};
      // Indicates whether hibernation is supported.
      // 
      // Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> supportHibernation_ {};
      // The supported actions. This parameter is returned only for cloud computers or phones.
      shared_ptr<vector<string>> supportedActions_ {};
      // The theme color of the resource. This parameter is for apps only.
      shared_ptr<string> themeColor_ {};
      // The custom name of the resource.
      shared_ptr<string> userCustomName_ {};
      // The resource version. This parameter is for apps only.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->queryFailedResourceTypes_ == nullptr && this->rankVersion_ == nullptr && this->requestId_ == nullptr && this->resources_ == nullptr
        && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeUserResourcesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeUserResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // queryFailedResourceTypes Field Functions 
    bool hasQueryFailedResourceTypes() const { return this->queryFailedResourceTypes_ != nullptr;};
    void deleteQueryFailedResourceTypes() { this->queryFailedResourceTypes_ = nullptr;};
    inline const vector<string> & getQueryFailedResourceTypes() const { DARABONBA_PTR_GET_CONST(queryFailedResourceTypes_, vector<string>) };
    inline vector<string> getQueryFailedResourceTypes() { DARABONBA_PTR_GET(queryFailedResourceTypes_, vector<string>) };
    inline DescribeUserResourcesResponseBody& setQueryFailedResourceTypes(const vector<string> & queryFailedResourceTypes) { DARABONBA_PTR_SET_VALUE(queryFailedResourceTypes_, queryFailedResourceTypes) };
    inline DescribeUserResourcesResponseBody& setQueryFailedResourceTypes(vector<string> && queryFailedResourceTypes) { DARABONBA_PTR_SET_RVALUE(queryFailedResourceTypes_, queryFailedResourceTypes) };


    // rankVersion Field Functions 
    bool hasRankVersion() const { return this->rankVersion_ != nullptr;};
    void deleteRankVersion() { this->rankVersion_ = nullptr;};
    inline int64_t getRankVersion() const { DARABONBA_PTR_GET_DEFAULT(rankVersion_, 0L) };
    inline DescribeUserResourcesResponseBody& setRankVersion(int64_t rankVersion) { DARABONBA_PTR_SET_VALUE(rankVersion_, rankVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<DescribeUserResourcesResponseBody::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<DescribeUserResourcesResponseBody::Resources>) };
    inline vector<DescribeUserResourcesResponseBody::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<DescribeUserResourcesResponseBody::Resources>) };
    inline DescribeUserResourcesResponseBody& setResources(const vector<DescribeUserResourcesResponseBody::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DescribeUserResourcesResponseBody& setResources(vector<DescribeUserResourcesResponseBody::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeUserResourcesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // 返回最大数量。
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The resource types that failed to be queried.
    shared_ptr<vector<string>> queryFailedResourceTypes_ {};
    // The version number of the ranking data.
    shared_ptr<int64_t> rankVersion_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resources.
    shared_ptr<vector<DescribeUserResourcesResponseBody::Resources>> resources_ {};
    // 总数。
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
