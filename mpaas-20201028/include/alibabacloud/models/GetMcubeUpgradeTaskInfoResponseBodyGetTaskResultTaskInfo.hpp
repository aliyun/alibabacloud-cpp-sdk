// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCUBEUPGRADETASKINFORESPONSEBODYGETTASKRESULTTASKINFO_HPP_
#define ALIBABACLOUD_MODELS_GETMCUBEUPGRADETASKINFORESPONSEBODYGETTASKRESULTTASKINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoRuleJsonList.hpp>
#include <alibabacloud/models/GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppstoreUrl, appstoreUrl_);
      DARABONBA_PTR_TO_JSON(Creater, creater_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(GreyConfigInfo, greyConfigInfo_);
      DARABONBA_PTR_TO_JSON(GreyEndtimeData, greyEndtimeData_);
      DARABONBA_PTR_TO_JSON(GreyNum, greyNum_);
      DARABONBA_PTR_TO_JSON(HistoryForce, historyForce_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsEnterprise, isEnterprise_);
      DARABONBA_PTR_TO_JSON(IsOfficial, isOfficial_);
      DARABONBA_PTR_TO_JSON(IsRc, isRc_);
      DARABONBA_PTR_TO_JSON(IsRelease, isRelease_);
      DARABONBA_PTR_TO_JSON(Memo, memo_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(OsVersion, osVersion_);
      DARABONBA_PTR_TO_JSON(PackageInfoId, packageInfoId_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(PublishMode, publishMode_);
      DARABONBA_PTR_TO_JSON(PublishType, publishType_);
      DARABONBA_PTR_TO_JSON(PushContent, pushContent_);
      DARABONBA_PTR_TO_JSON(QrcodeUrl, qrcodeUrl_);
      DARABONBA_PTR_TO_JSON(RuleJsonList, ruleJsonList_);
      DARABONBA_PTR_TO_JSON(SilentType, silentType_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(UpgradeContent, upgradeContent_);
      DARABONBA_PTR_TO_JSON(UpgradeType, upgradeType_);
      DARABONBA_PTR_TO_JSON(UpgradeValidTime, upgradeValidTime_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
      DARABONBA_PTR_TO_JSON(WhitelistIds, whitelistIds_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppstoreUrl, appstoreUrl_);
      DARABONBA_PTR_FROM_JSON(Creater, creater_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(GreyConfigInfo, greyConfigInfo_);
      DARABONBA_PTR_FROM_JSON(GreyEndtimeData, greyEndtimeData_);
      DARABONBA_PTR_FROM_JSON(GreyNum, greyNum_);
      DARABONBA_PTR_FROM_JSON(HistoryForce, historyForce_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsEnterprise, isEnterprise_);
      DARABONBA_PTR_FROM_JSON(IsOfficial, isOfficial_);
      DARABONBA_PTR_FROM_JSON(IsRc, isRc_);
      DARABONBA_PTR_FROM_JSON(IsRelease, isRelease_);
      DARABONBA_PTR_FROM_JSON(Memo, memo_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(OsVersion, osVersion_);
      DARABONBA_PTR_FROM_JSON(PackageInfoId, packageInfoId_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(PublishMode, publishMode_);
      DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
      DARABONBA_PTR_FROM_JSON(PushContent, pushContent_);
      DARABONBA_PTR_FROM_JSON(QrcodeUrl, qrcodeUrl_);
      DARABONBA_PTR_FROM_JSON(RuleJsonList, ruleJsonList_);
      DARABONBA_PTR_FROM_JSON(SilentType, silentType_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(UpgradeContent, upgradeContent_);
      DARABONBA_PTR_FROM_JSON(UpgradeType, upgradeType_);
      DARABONBA_PTR_FROM_JSON(UpgradeValidTime, upgradeValidTime_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
      DARABONBA_PTR_FROM_JSON(WhitelistIds, whitelistIds_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo() = default ;
    GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo(const GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo &) = default ;
    GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo(GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo &&) = default ;
    GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo() = default ;
    GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& operator=(const GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo &) = default ;
    GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& operator=(GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appCode_ != nullptr
        && this->appId_ != nullptr && this->appstoreUrl_ != nullptr && this->creater_ != nullptr && this->creator_ != nullptr && this->downloadUrl_ != nullptr
        && this->greyConfigInfo_ != nullptr && this->greyEndtimeData_ != nullptr && this->greyNum_ != nullptr && this->historyForce_ != nullptr && this->id_ != nullptr
        && this->isEnterprise_ != nullptr && this->isOfficial_ != nullptr && this->isRc_ != nullptr && this->isRelease_ != nullptr && this->memo_ != nullptr
        && this->modifier_ != nullptr && this->netType_ != nullptr && this->osVersion_ != nullptr && this->packageInfoId_ != nullptr && this->packageType_ != nullptr
        && this->platform_ != nullptr && this->productId_ != nullptr && this->publishMode_ != nullptr && this->publishType_ != nullptr && this->pushContent_ != nullptr
        && this->qrcodeUrl_ != nullptr && this->ruleJsonList_ != nullptr && this->silentType_ != nullptr && this->taskStatus_ != nullptr && this->upgradeContent_ != nullptr
        && this->upgradeType_ != nullptr && this->upgradeValidTime_ != nullptr && this->whitelist_ != nullptr && this->whitelistIds_ != nullptr && this->workspaceId_ != nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appstoreUrl Field Functions 
    bool hasAppstoreUrl() const { return this->appstoreUrl_ != nullptr;};
    void deleteAppstoreUrl() { this->appstoreUrl_ = nullptr;};
    inline string appstoreUrl() const { DARABONBA_PTR_GET_DEFAULT(appstoreUrl_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setAppstoreUrl(string appstoreUrl) { DARABONBA_PTR_SET_VALUE(appstoreUrl_, appstoreUrl) };


    // creater Field Functions 
    bool hasCreater() const { return this->creater_ != nullptr;};
    void deleteCreater() { this->creater_ = nullptr;};
    inline string creater() const { DARABONBA_PTR_GET_DEFAULT(creater_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setCreater(string creater) { DARABONBA_PTR_SET_VALUE(creater_, creater) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // greyConfigInfo Field Functions 
    bool hasGreyConfigInfo() const { return this->greyConfigInfo_ != nullptr;};
    void deleteGreyConfigInfo() { this->greyConfigInfo_ = nullptr;};
    inline string greyConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(greyConfigInfo_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setGreyConfigInfo(string greyConfigInfo) { DARABONBA_PTR_SET_VALUE(greyConfigInfo_, greyConfigInfo) };


    // greyEndtimeData Field Functions 
    bool hasGreyEndtimeData() const { return this->greyEndtimeData_ != nullptr;};
    void deleteGreyEndtimeData() { this->greyEndtimeData_ = nullptr;};
    inline string greyEndtimeData() const { DARABONBA_PTR_GET_DEFAULT(greyEndtimeData_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setGreyEndtimeData(string greyEndtimeData) { DARABONBA_PTR_SET_VALUE(greyEndtimeData_, greyEndtimeData) };


    // greyNum Field Functions 
    bool hasGreyNum() const { return this->greyNum_ != nullptr;};
    void deleteGreyNum() { this->greyNum_ = nullptr;};
    inline int32_t greyNum() const { DARABONBA_PTR_GET_DEFAULT(greyNum_, 0) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setGreyNum(int32_t greyNum) { DARABONBA_PTR_SET_VALUE(greyNum_, greyNum) };


    // historyForce Field Functions 
    bool hasHistoryForce() const { return this->historyForce_ != nullptr;};
    void deleteHistoryForce() { this->historyForce_ = nullptr;};
    inline int32_t historyForce() const { DARABONBA_PTR_GET_DEFAULT(historyForce_, 0) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setHistoryForce(int32_t historyForce) { DARABONBA_PTR_SET_VALUE(historyForce_, historyForce) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isEnterprise Field Functions 
    bool hasIsEnterprise() const { return this->isEnterprise_ != nullptr;};
    void deleteIsEnterprise() { this->isEnterprise_ = nullptr;};
    inline int32_t isEnterprise() const { DARABONBA_PTR_GET_DEFAULT(isEnterprise_, 0) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setIsEnterprise(int32_t isEnterprise) { DARABONBA_PTR_SET_VALUE(isEnterprise_, isEnterprise) };


    // isOfficial Field Functions 
    bool hasIsOfficial() const { return this->isOfficial_ != nullptr;};
    void deleteIsOfficial() { this->isOfficial_ = nullptr;};
    inline int32_t isOfficial() const { DARABONBA_PTR_GET_DEFAULT(isOfficial_, 0) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setIsOfficial(int32_t isOfficial) { DARABONBA_PTR_SET_VALUE(isOfficial_, isOfficial) };


    // isRc Field Functions 
    bool hasIsRc() const { return this->isRc_ != nullptr;};
    void deleteIsRc() { this->isRc_ = nullptr;};
    inline int32_t isRc() const { DARABONBA_PTR_GET_DEFAULT(isRc_, 0) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setIsRc(int32_t isRc) { DARABONBA_PTR_SET_VALUE(isRc_, isRc) };


    // isRelease Field Functions 
    bool hasIsRelease() const { return this->isRelease_ != nullptr;};
    void deleteIsRelease() { this->isRelease_ = nullptr;};
    inline int32_t isRelease() const { DARABONBA_PTR_GET_DEFAULT(isRelease_, 0) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setIsRelease(int32_t isRelease) { DARABONBA_PTR_SET_VALUE(isRelease_, isRelease) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // osVersion Field Functions 
    bool hasOsVersion() const { return this->osVersion_ != nullptr;};
    void deleteOsVersion() { this->osVersion_ = nullptr;};
    inline string osVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


    // packageInfoId Field Functions 
    bool hasPackageInfoId() const { return this->packageInfoId_ != nullptr;};
    void deletePackageInfoId() { this->packageInfoId_ = nullptr;};
    inline int64_t packageInfoId() const { DARABONBA_PTR_GET_DEFAULT(packageInfoId_, 0L) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setPackageInfoId(int64_t packageInfoId) { DARABONBA_PTR_SET_VALUE(packageInfoId_, packageInfoId) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // publishMode Field Functions 
    bool hasPublishMode() const { return this->publishMode_ != nullptr;};
    void deletePublishMode() { this->publishMode_ = nullptr;};
    inline int32_t publishMode() const { DARABONBA_PTR_GET_DEFAULT(publishMode_, 0) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setPublishMode(int32_t publishMode) { DARABONBA_PTR_SET_VALUE(publishMode_, publishMode) };


    // publishType Field Functions 
    bool hasPublishType() const { return this->publishType_ != nullptr;};
    void deletePublishType() { this->publishType_ = nullptr;};
    inline int32_t publishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, 0) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setPublishType(int32_t publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


    // pushContent Field Functions 
    bool hasPushContent() const { return this->pushContent_ != nullptr;};
    void deletePushContent() { this->pushContent_ = nullptr;};
    inline string pushContent() const { DARABONBA_PTR_GET_DEFAULT(pushContent_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setPushContent(string pushContent) { DARABONBA_PTR_SET_VALUE(pushContent_, pushContent) };


    // qrcodeUrl Field Functions 
    bool hasQrcodeUrl() const { return this->qrcodeUrl_ != nullptr;};
    void deleteQrcodeUrl() { this->qrcodeUrl_ = nullptr;};
    inline string qrcodeUrl() const { DARABONBA_PTR_GET_DEFAULT(qrcodeUrl_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setQrcodeUrl(string qrcodeUrl) { DARABONBA_PTR_SET_VALUE(qrcodeUrl_, qrcodeUrl) };


    // ruleJsonList Field Functions 
    bool hasRuleJsonList() const { return this->ruleJsonList_ != nullptr;};
    void deleteRuleJsonList() { this->ruleJsonList_ = nullptr;};
    inline const vector<Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoRuleJsonList> & ruleJsonList() const { DARABONBA_PTR_GET_CONST(ruleJsonList_, vector<Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoRuleJsonList>) };
    inline vector<Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoRuleJsonList> ruleJsonList() { DARABONBA_PTR_GET(ruleJsonList_, vector<Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoRuleJsonList>) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setRuleJsonList(const vector<Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoRuleJsonList> & ruleJsonList) { DARABONBA_PTR_SET_VALUE(ruleJsonList_, ruleJsonList) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setRuleJsonList(vector<Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoRuleJsonList> && ruleJsonList) { DARABONBA_PTR_SET_RVALUE(ruleJsonList_, ruleJsonList) };


    // silentType Field Functions 
    bool hasSilentType() const { return this->silentType_ != nullptr;};
    void deleteSilentType() { this->silentType_ = nullptr;};
    inline int32_t silentType() const { DARABONBA_PTR_GET_DEFAULT(silentType_, 0) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setSilentType(int32_t silentType) { DARABONBA_PTR_SET_VALUE(silentType_, silentType) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // upgradeContent Field Functions 
    bool hasUpgradeContent() const { return this->upgradeContent_ != nullptr;};
    void deleteUpgradeContent() { this->upgradeContent_ = nullptr;};
    inline string upgradeContent() const { DARABONBA_PTR_GET_DEFAULT(upgradeContent_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setUpgradeContent(string upgradeContent) { DARABONBA_PTR_SET_VALUE(upgradeContent_, upgradeContent) };


    // upgradeType Field Functions 
    bool hasUpgradeType() const { return this->upgradeType_ != nullptr;};
    void deleteUpgradeType() { this->upgradeType_ = nullptr;};
    inline int32_t upgradeType() const { DARABONBA_PTR_GET_DEFAULT(upgradeType_, 0) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setUpgradeType(int32_t upgradeType) { DARABONBA_PTR_SET_VALUE(upgradeType_, upgradeType) };


    // upgradeValidTime Field Functions 
    bool hasUpgradeValidTime() const { return this->upgradeValidTime_ != nullptr;};
    void deleteUpgradeValidTime() { this->upgradeValidTime_ = nullptr;};
    inline int32_t upgradeValidTime() const { DARABONBA_PTR_GET_DEFAULT(upgradeValidTime_, 0) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setUpgradeValidTime(int32_t upgradeValidTime) { DARABONBA_PTR_SET_VALUE(upgradeValidTime_, upgradeValidTime) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const vector<Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist> & whitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist>) };
    inline vector<Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist> whitelist() { DARABONBA_PTR_GET(whitelist_, vector<Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist>) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setWhitelist(const vector<Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setWhitelist(vector<Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


    // whitelistIds Field Functions 
    bool hasWhitelistIds() const { return this->whitelistIds_ != nullptr;};
    void deleteWhitelistIds() { this->whitelistIds_ = nullptr;};
    inline string whitelistIds() const { DARABONBA_PTR_GET_DEFAULT(whitelistIds_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setWhitelistIds(string whitelistIds) { DARABONBA_PTR_SET_VALUE(whitelistIds_, whitelistIds) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appstoreUrl_ = nullptr;
    std::shared_ptr<string> creater_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> downloadUrl_ = nullptr;
    std::shared_ptr<string> greyConfigInfo_ = nullptr;
    std::shared_ptr<string> greyEndtimeData_ = nullptr;
    std::shared_ptr<int32_t> greyNum_ = nullptr;
    std::shared_ptr<int32_t> historyForce_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int32_t> isEnterprise_ = nullptr;
    std::shared_ptr<int32_t> isOfficial_ = nullptr;
    std::shared_ptr<int32_t> isRc_ = nullptr;
    std::shared_ptr<int32_t> isRelease_ = nullptr;
    std::shared_ptr<string> memo_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> netType_ = nullptr;
    std::shared_ptr<string> osVersion_ = nullptr;
    std::shared_ptr<int64_t> packageInfoId_ = nullptr;
    std::shared_ptr<string> packageType_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<int32_t> publishMode_ = nullptr;
    std::shared_ptr<int32_t> publishType_ = nullptr;
    std::shared_ptr<string> pushContent_ = nullptr;
    std::shared_ptr<string> qrcodeUrl_ = nullptr;
    std::shared_ptr<vector<Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoRuleJsonList>> ruleJsonList_ = nullptr;
    std::shared_ptr<int32_t> silentType_ = nullptr;
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    std::shared_ptr<string> upgradeContent_ = nullptr;
    std::shared_ptr<int32_t> upgradeType_ = nullptr;
    std::shared_ptr<int32_t> upgradeValidTime_ = nullptr;
    std::shared_ptr<vector<Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist>> whitelist_ = nullptr;
    std::shared_ptr<string> whitelistIds_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
