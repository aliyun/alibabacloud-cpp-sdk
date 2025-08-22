// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCESRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCESRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserResourcesResponseBodyResourcesClients.hpp>
#include <alibabacloud/models/DescribeUserResourcesResponseBodyResourcesDesktopDurationList.hpp>
#include <alibabacloud/models/DescribeUserResourcesResponseBodyResourcesDesktopTimers.hpp>
#include <alibabacloud/models/DescribeUserResourcesResponseBodyResourcesFotaUpdate.hpp>
#include <alibabacloud/models/DescribeUserResourcesResponseBodyResourcesOsUpdate.hpp>
#include <alibabacloud/models/DescribeUserResourcesResponseBodyResourcesSessions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeUserResourcesResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserResourcesResponseBodyResources& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeUserResourcesResponseBodyResources& obj) { 
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
    DescribeUserResourcesResponseBodyResources() = default ;
    DescribeUserResourcesResponseBodyResources(const DescribeUserResourcesResponseBodyResources &) = default ;
    DescribeUserResourcesResponseBodyResources(DescribeUserResourcesResponseBodyResources &&) = default ;
    DescribeUserResourcesResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserResourcesResponseBodyResources() = default ;
    DescribeUserResourcesResponseBodyResources& operator=(const DescribeUserResourcesResponseBodyResources &) = default ;
    DescribeUserResourcesResponseBodyResources& operator=(DescribeUserResourcesResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessType_ != nullptr
        && this->aliUid_ != nullptr && this->appId_ != nullptr && this->authMode_ != nullptr && this->categoryId_ != nullptr && this->categoryType_ != nullptr
        && this->cdsName_ != nullptr && this->centerResourceId_ != nullptr && this->chargeType_ != nullptr && this->clients_ != nullptr && this->connectionProperties_ != nullptr
        && this->createTime_ != nullptr && this->desktopDurationList_ != nullptr && this->desktopTimers_ != nullptr && this->expiredTime_ != nullptr && this->externalDomainId_ != nullptr
        && this->externalUserId_ != nullptr && this->fotaUpdate_ != nullptr && this->globalStatus_ != nullptr && this->hasUpgrade_ != nullptr && this->hibernationBeta_ != nullptr
        && this->icon_ != nullptr && this->lastStartTime_ != nullptr && this->localName_ != nullptr && this->managementStatuses_ != nullptr && this->officeSiteId_ != nullptr
        && this->orderStatus_ != nullptr && this->os_ != nullptr && this->osDescription_ != nullptr && this->osType_ != nullptr && this->osUpdate_ != nullptr
        && this->productType_ != nullptr && this->protocolType_ != nullptr && this->realDesktopId_ != nullptr && this->regionId_ != nullptr && this->regionLocation_ != nullptr
        && this->resourceGroupId_ != nullptr && this->resourceId_ != nullptr && this->resourceLevel_ != nullptr && this->resourceName_ != nullptr && this->resourceSessionStatus_ != nullptr
        && this->resourceStatus_ != nullptr && this->resourceType_ != nullptr && this->sessionType_ != nullptr && this->sessions_ != nullptr && this->subPayType_ != nullptr
        && this->supportHibernation_ != nullptr && this->supportedActions_ != nullptr && this->themeColor_ != nullptr && this->userCustomName_ != nullptr && this->version_ != nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline DescribeUserResourcesResponseBodyResources& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeUserResourcesResponseBodyResources& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeUserResourcesResponseBodyResources& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // authMode Field Functions 
    bool hasAuthMode() const { return this->authMode_ != nullptr;};
    void deleteAuthMode() { this->authMode_ = nullptr;};
    inline string authMode() const { DARABONBA_PTR_GET_DEFAULT(authMode_, "") };
    inline DescribeUserResourcesResponseBodyResources& setAuthMode(string authMode) { DARABONBA_PTR_SET_VALUE(authMode_, authMode) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int32_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
    inline DescribeUserResourcesResponseBodyResources& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline int32_t categoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, 0) };
    inline DescribeUserResourcesResponseBodyResources& setCategoryType(int32_t categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // cdsName Field Functions 
    bool hasCdsName() const { return this->cdsName_ != nullptr;};
    void deleteCdsName() { this->cdsName_ = nullptr;};
    inline string cdsName() const { DARABONBA_PTR_GET_DEFAULT(cdsName_, "") };
    inline DescribeUserResourcesResponseBodyResources& setCdsName(string cdsName) { DARABONBA_PTR_SET_VALUE(cdsName_, cdsName) };


    // centerResourceId Field Functions 
    bool hasCenterResourceId() const { return this->centerResourceId_ != nullptr;};
    void deleteCenterResourceId() { this->centerResourceId_ = nullptr;};
    inline string centerResourceId() const { DARABONBA_PTR_GET_DEFAULT(centerResourceId_, "") };
    inline DescribeUserResourcesResponseBodyResources& setCenterResourceId(string centerResourceId) { DARABONBA_PTR_SET_VALUE(centerResourceId_, centerResourceId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeUserResourcesResponseBodyResources& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clients Field Functions 
    bool hasClients() const { return this->clients_ != nullptr;};
    void deleteClients() { this->clients_ = nullptr;};
    inline const vector<Models::DescribeUserResourcesResponseBodyResourcesClients> & clients() const { DARABONBA_PTR_GET_CONST(clients_, vector<Models::DescribeUserResourcesResponseBodyResourcesClients>) };
    inline vector<Models::DescribeUserResourcesResponseBodyResourcesClients> clients() { DARABONBA_PTR_GET(clients_, vector<Models::DescribeUserResourcesResponseBodyResourcesClients>) };
    inline DescribeUserResourcesResponseBodyResources& setClients(const vector<Models::DescribeUserResourcesResponseBodyResourcesClients> & clients) { DARABONBA_PTR_SET_VALUE(clients_, clients) };
    inline DescribeUserResourcesResponseBodyResources& setClients(vector<Models::DescribeUserResourcesResponseBodyResourcesClients> && clients) { DARABONBA_PTR_SET_RVALUE(clients_, clients) };


    // connectionProperties Field Functions 
    bool hasConnectionProperties() const { return this->connectionProperties_ != nullptr;};
    void deleteConnectionProperties() { this->connectionProperties_ = nullptr;};
    inline string connectionProperties() const { DARABONBA_PTR_GET_DEFAULT(connectionProperties_, "") };
    inline DescribeUserResourcesResponseBodyResources& setConnectionProperties(string connectionProperties) { DARABONBA_PTR_SET_VALUE(connectionProperties_, connectionProperties) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeUserResourcesResponseBodyResources& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // desktopDurationList Field Functions 
    bool hasDesktopDurationList() const { return this->desktopDurationList_ != nullptr;};
    void deleteDesktopDurationList() { this->desktopDurationList_ = nullptr;};
    inline const vector<Models::DescribeUserResourcesResponseBodyResourcesDesktopDurationList> & desktopDurationList() const { DARABONBA_PTR_GET_CONST(desktopDurationList_, vector<Models::DescribeUserResourcesResponseBodyResourcesDesktopDurationList>) };
    inline vector<Models::DescribeUserResourcesResponseBodyResourcesDesktopDurationList> desktopDurationList() { DARABONBA_PTR_GET(desktopDurationList_, vector<Models::DescribeUserResourcesResponseBodyResourcesDesktopDurationList>) };
    inline DescribeUserResourcesResponseBodyResources& setDesktopDurationList(const vector<Models::DescribeUserResourcesResponseBodyResourcesDesktopDurationList> & desktopDurationList) { DARABONBA_PTR_SET_VALUE(desktopDurationList_, desktopDurationList) };
    inline DescribeUserResourcesResponseBodyResources& setDesktopDurationList(vector<Models::DescribeUserResourcesResponseBodyResourcesDesktopDurationList> && desktopDurationList) { DARABONBA_PTR_SET_RVALUE(desktopDurationList_, desktopDurationList) };


    // desktopTimers Field Functions 
    bool hasDesktopTimers() const { return this->desktopTimers_ != nullptr;};
    void deleteDesktopTimers() { this->desktopTimers_ = nullptr;};
    inline const vector<Models::DescribeUserResourcesResponseBodyResourcesDesktopTimers> & desktopTimers() const { DARABONBA_PTR_GET_CONST(desktopTimers_, vector<Models::DescribeUserResourcesResponseBodyResourcesDesktopTimers>) };
    inline vector<Models::DescribeUserResourcesResponseBodyResourcesDesktopTimers> desktopTimers() { DARABONBA_PTR_GET(desktopTimers_, vector<Models::DescribeUserResourcesResponseBodyResourcesDesktopTimers>) };
    inline DescribeUserResourcesResponseBodyResources& setDesktopTimers(const vector<Models::DescribeUserResourcesResponseBodyResourcesDesktopTimers> & desktopTimers) { DARABONBA_PTR_SET_VALUE(desktopTimers_, desktopTimers) };
    inline DescribeUserResourcesResponseBodyResources& setDesktopTimers(vector<Models::DescribeUserResourcesResponseBodyResourcesDesktopTimers> && desktopTimers) { DARABONBA_PTR_SET_RVALUE(desktopTimers_, desktopTimers) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeUserResourcesResponseBodyResources& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // externalDomainId Field Functions 
    bool hasExternalDomainId() const { return this->externalDomainId_ != nullptr;};
    void deleteExternalDomainId() { this->externalDomainId_ = nullptr;};
    inline string externalDomainId() const { DARABONBA_PTR_GET_DEFAULT(externalDomainId_, "") };
    inline DescribeUserResourcesResponseBodyResources& setExternalDomainId(string externalDomainId) { DARABONBA_PTR_SET_VALUE(externalDomainId_, externalDomainId) };


    // externalUserId Field Functions 
    bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
    void deleteExternalUserId() { this->externalUserId_ = nullptr;};
    inline string externalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
    inline DescribeUserResourcesResponseBodyResources& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


    // fotaUpdate Field Functions 
    bool hasFotaUpdate() const { return this->fotaUpdate_ != nullptr;};
    void deleteFotaUpdate() { this->fotaUpdate_ = nullptr;};
    inline const Models::DescribeUserResourcesResponseBodyResourcesFotaUpdate & fotaUpdate() const { DARABONBA_PTR_GET_CONST(fotaUpdate_, Models::DescribeUserResourcesResponseBodyResourcesFotaUpdate) };
    inline Models::DescribeUserResourcesResponseBodyResourcesFotaUpdate fotaUpdate() { DARABONBA_PTR_GET(fotaUpdate_, Models::DescribeUserResourcesResponseBodyResourcesFotaUpdate) };
    inline DescribeUserResourcesResponseBodyResources& setFotaUpdate(const Models::DescribeUserResourcesResponseBodyResourcesFotaUpdate & fotaUpdate) { DARABONBA_PTR_SET_VALUE(fotaUpdate_, fotaUpdate) };
    inline DescribeUserResourcesResponseBodyResources& setFotaUpdate(Models::DescribeUserResourcesResponseBodyResourcesFotaUpdate && fotaUpdate) { DARABONBA_PTR_SET_RVALUE(fotaUpdate_, fotaUpdate) };


    // globalStatus Field Functions 
    bool hasGlobalStatus() const { return this->globalStatus_ != nullptr;};
    void deleteGlobalStatus() { this->globalStatus_ = nullptr;};
    inline bool globalStatus() const { DARABONBA_PTR_GET_DEFAULT(globalStatus_, false) };
    inline DescribeUserResourcesResponseBodyResources& setGlobalStatus(bool globalStatus) { DARABONBA_PTR_SET_VALUE(globalStatus_, globalStatus) };


    // hasUpgrade Field Functions 
    bool hasHasUpgrade() const { return this->hasUpgrade_ != nullptr;};
    void deleteHasUpgrade() { this->hasUpgrade_ = nullptr;};
    inline bool hasUpgrade() const { DARABONBA_PTR_GET_DEFAULT(hasUpgrade_, false) };
    inline DescribeUserResourcesResponseBodyResources& setHasUpgrade(bool hasUpgrade) { DARABONBA_PTR_SET_VALUE(hasUpgrade_, hasUpgrade) };


    // hibernationBeta Field Functions 
    bool hasHibernationBeta() const { return this->hibernationBeta_ != nullptr;};
    void deleteHibernationBeta() { this->hibernationBeta_ = nullptr;};
    inline bool hibernationBeta() const { DARABONBA_PTR_GET_DEFAULT(hibernationBeta_, false) };
    inline DescribeUserResourcesResponseBodyResources& setHibernationBeta(bool hibernationBeta) { DARABONBA_PTR_SET_VALUE(hibernationBeta_, hibernationBeta) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline DescribeUserResourcesResponseBodyResources& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // lastStartTime Field Functions 
    bool hasLastStartTime() const { return this->lastStartTime_ != nullptr;};
    void deleteLastStartTime() { this->lastStartTime_ = nullptr;};
    inline string lastStartTime() const { DARABONBA_PTR_GET_DEFAULT(lastStartTime_, "") };
    inline DescribeUserResourcesResponseBodyResources& setLastStartTime(string lastStartTime) { DARABONBA_PTR_SET_VALUE(lastStartTime_, lastStartTime) };


    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline DescribeUserResourcesResponseBodyResources& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // managementStatuses Field Functions 
    bool hasManagementStatuses() const { return this->managementStatuses_ != nullptr;};
    void deleteManagementStatuses() { this->managementStatuses_ = nullptr;};
    inline const vector<string> & managementStatuses() const { DARABONBA_PTR_GET_CONST(managementStatuses_, vector<string>) };
    inline vector<string> managementStatuses() { DARABONBA_PTR_GET(managementStatuses_, vector<string>) };
    inline DescribeUserResourcesResponseBodyResources& setManagementStatuses(const vector<string> & managementStatuses) { DARABONBA_PTR_SET_VALUE(managementStatuses_, managementStatuses) };
    inline DescribeUserResourcesResponseBodyResources& setManagementStatuses(vector<string> && managementStatuses) { DARABONBA_PTR_SET_RVALUE(managementStatuses_, managementStatuses) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeUserResourcesResponseBodyResources& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline string orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, "") };
    inline DescribeUserResourcesResponseBodyResources& setOrderStatus(string orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeUserResourcesResponseBodyResources& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // osDescription Field Functions 
    bool hasOsDescription() const { return this->osDescription_ != nullptr;};
    void deleteOsDescription() { this->osDescription_ = nullptr;};
    inline string osDescription() const { DARABONBA_PTR_GET_DEFAULT(osDescription_, "") };
    inline DescribeUserResourcesResponseBodyResources& setOsDescription(string osDescription) { DARABONBA_PTR_SET_VALUE(osDescription_, osDescription) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeUserResourcesResponseBodyResources& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // osUpdate Field Functions 
    bool hasOsUpdate() const { return this->osUpdate_ != nullptr;};
    void deleteOsUpdate() { this->osUpdate_ = nullptr;};
    inline const Models::DescribeUserResourcesResponseBodyResourcesOsUpdate & osUpdate() const { DARABONBA_PTR_GET_CONST(osUpdate_, Models::DescribeUserResourcesResponseBodyResourcesOsUpdate) };
    inline Models::DescribeUserResourcesResponseBodyResourcesOsUpdate osUpdate() { DARABONBA_PTR_GET(osUpdate_, Models::DescribeUserResourcesResponseBodyResourcesOsUpdate) };
    inline DescribeUserResourcesResponseBodyResources& setOsUpdate(const Models::DescribeUserResourcesResponseBodyResourcesOsUpdate & osUpdate) { DARABONBA_PTR_SET_VALUE(osUpdate_, osUpdate) };
    inline DescribeUserResourcesResponseBodyResources& setOsUpdate(Models::DescribeUserResourcesResponseBodyResourcesOsUpdate && osUpdate) { DARABONBA_PTR_SET_RVALUE(osUpdate_, osUpdate) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeUserResourcesResponseBodyResources& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeUserResourcesResponseBodyResources& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // realDesktopId Field Functions 
    bool hasRealDesktopId() const { return this->realDesktopId_ != nullptr;};
    void deleteRealDesktopId() { this->realDesktopId_ = nullptr;};
    inline string realDesktopId() const { DARABONBA_PTR_GET_DEFAULT(realDesktopId_, "") };
    inline DescribeUserResourcesResponseBodyResources& setRealDesktopId(string realDesktopId) { DARABONBA_PTR_SET_VALUE(realDesktopId_, realDesktopId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeUserResourcesResponseBodyResources& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionLocation Field Functions 
    bool hasRegionLocation() const { return this->regionLocation_ != nullptr;};
    void deleteRegionLocation() { this->regionLocation_ = nullptr;};
    inline string regionLocation() const { DARABONBA_PTR_GET_DEFAULT(regionLocation_, "") };
    inline DescribeUserResourcesResponseBodyResources& setRegionLocation(string regionLocation) { DARABONBA_PTR_SET_VALUE(regionLocation_, regionLocation) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeUserResourcesResponseBodyResources& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeUserResourcesResponseBodyResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceLevel Field Functions 
    bool hasResourceLevel() const { return this->resourceLevel_ != nullptr;};
    void deleteResourceLevel() { this->resourceLevel_ = nullptr;};
    inline string resourceLevel() const { DARABONBA_PTR_GET_DEFAULT(resourceLevel_, "") };
    inline DescribeUserResourcesResponseBodyResources& setResourceLevel(string resourceLevel) { DARABONBA_PTR_SET_VALUE(resourceLevel_, resourceLevel) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribeUserResourcesResponseBodyResources& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceSessionStatus Field Functions 
    bool hasResourceSessionStatus() const { return this->resourceSessionStatus_ != nullptr;};
    void deleteResourceSessionStatus() { this->resourceSessionStatus_ = nullptr;};
    inline string resourceSessionStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceSessionStatus_, "") };
    inline DescribeUserResourcesResponseBodyResources& setResourceSessionStatus(string resourceSessionStatus) { DARABONBA_PTR_SET_VALUE(resourceSessionStatus_, resourceSessionStatus) };


    // resourceStatus Field Functions 
    bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
    void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
    inline string resourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
    inline DescribeUserResourcesResponseBodyResources& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeUserResourcesResponseBodyResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // sessionType Field Functions 
    bool hasSessionType() const { return this->sessionType_ != nullptr;};
    void deleteSessionType() { this->sessionType_ = nullptr;};
    inline string sessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
    inline DescribeUserResourcesResponseBodyResources& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<Models::DescribeUserResourcesResponseBodyResourcesSessions> & sessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<Models::DescribeUserResourcesResponseBodyResourcesSessions>) };
    inline vector<Models::DescribeUserResourcesResponseBodyResourcesSessions> sessions() { DARABONBA_PTR_GET(sessions_, vector<Models::DescribeUserResourcesResponseBodyResourcesSessions>) };
    inline DescribeUserResourcesResponseBodyResources& setSessions(const vector<Models::DescribeUserResourcesResponseBodyResourcesSessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline DescribeUserResourcesResponseBodyResources& setSessions(vector<Models::DescribeUserResourcesResponseBodyResourcesSessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


    // subPayType Field Functions 
    bool hasSubPayType() const { return this->subPayType_ != nullptr;};
    void deleteSubPayType() { this->subPayType_ = nullptr;};
    inline string subPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
    inline DescribeUserResourcesResponseBodyResources& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


    // supportHibernation Field Functions 
    bool hasSupportHibernation() const { return this->supportHibernation_ != nullptr;};
    void deleteSupportHibernation() { this->supportHibernation_ = nullptr;};
    inline bool supportHibernation() const { DARABONBA_PTR_GET_DEFAULT(supportHibernation_, false) };
    inline DescribeUserResourcesResponseBodyResources& setSupportHibernation(bool supportHibernation) { DARABONBA_PTR_SET_VALUE(supportHibernation_, supportHibernation) };


    // supportedActions Field Functions 
    bool hasSupportedActions() const { return this->supportedActions_ != nullptr;};
    void deleteSupportedActions() { this->supportedActions_ = nullptr;};
    inline const vector<string> & supportedActions() const { DARABONBA_PTR_GET_CONST(supportedActions_, vector<string>) };
    inline vector<string> supportedActions() { DARABONBA_PTR_GET(supportedActions_, vector<string>) };
    inline DescribeUserResourcesResponseBodyResources& setSupportedActions(const vector<string> & supportedActions) { DARABONBA_PTR_SET_VALUE(supportedActions_, supportedActions) };
    inline DescribeUserResourcesResponseBodyResources& setSupportedActions(vector<string> && supportedActions) { DARABONBA_PTR_SET_RVALUE(supportedActions_, supportedActions) };


    // themeColor Field Functions 
    bool hasThemeColor() const { return this->themeColor_ != nullptr;};
    void deleteThemeColor() { this->themeColor_ = nullptr;};
    inline string themeColor() const { DARABONBA_PTR_GET_DEFAULT(themeColor_, "") };
    inline DescribeUserResourcesResponseBodyResources& setThemeColor(string themeColor) { DARABONBA_PTR_SET_VALUE(themeColor_, themeColor) };


    // userCustomName Field Functions 
    bool hasUserCustomName() const { return this->userCustomName_ != nullptr;};
    void deleteUserCustomName() { this->userCustomName_ = nullptr;};
    inline string userCustomName() const { DARABONBA_PTR_GET_DEFAULT(userCustomName_, "") };
    inline DescribeUserResourcesResponseBodyResources& setUserCustomName(string userCustomName) { DARABONBA_PTR_SET_VALUE(userCustomName_, userCustomName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeUserResourcesResponseBodyResources& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> accessType_ = nullptr;
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> authMode_ = nullptr;
    std::shared_ptr<int32_t> categoryId_ = nullptr;
    std::shared_ptr<int32_t> categoryType_ = nullptr;
    std::shared_ptr<string> cdsName_ = nullptr;
    std::shared_ptr<string> centerResourceId_ = nullptr;
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<vector<Models::DescribeUserResourcesResponseBodyResourcesClients>> clients_ = nullptr;
    std::shared_ptr<string> connectionProperties_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<vector<Models::DescribeUserResourcesResponseBodyResourcesDesktopDurationList>> desktopDurationList_ = nullptr;
    std::shared_ptr<vector<Models::DescribeUserResourcesResponseBodyResourcesDesktopTimers>> desktopTimers_ = nullptr;
    std::shared_ptr<string> expiredTime_ = nullptr;
    std::shared_ptr<string> externalDomainId_ = nullptr;
    std::shared_ptr<string> externalUserId_ = nullptr;
    std::shared_ptr<Models::DescribeUserResourcesResponseBodyResourcesFotaUpdate> fotaUpdate_ = nullptr;
    std::shared_ptr<bool> globalStatus_ = nullptr;
    std::shared_ptr<bool> hasUpgrade_ = nullptr;
    std::shared_ptr<bool> hibernationBeta_ = nullptr;
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<string> lastStartTime_ = nullptr;
    std::shared_ptr<string> localName_ = nullptr;
    std::shared_ptr<vector<string>> managementStatuses_ = nullptr;
    std::shared_ptr<string> officeSiteId_ = nullptr;
    std::shared_ptr<string> orderStatus_ = nullptr;
    std::shared_ptr<string> os_ = nullptr;
    std::shared_ptr<string> osDescription_ = nullptr;
    std::shared_ptr<string> osType_ = nullptr;
    std::shared_ptr<Models::DescribeUserResourcesResponseBodyResourcesOsUpdate> osUpdate_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<string> protocolType_ = nullptr;
    std::shared_ptr<string> realDesktopId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> regionLocation_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceLevel_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<string> resourceSessionStatus_ = nullptr;
    std::shared_ptr<string> resourceStatus_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> sessionType_ = nullptr;
    std::shared_ptr<vector<Models::DescribeUserResourcesResponseBodyResourcesSessions>> sessions_ = nullptr;
    std::shared_ptr<string> subPayType_ = nullptr;
    std::shared_ptr<bool> supportHibernation_ = nullptr;
    std::shared_ptr<vector<string>> supportedActions_ = nullptr;
    std::shared_ptr<string> themeColor_ = nullptr;
    std::shared_ptr<string> userCustomName_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
