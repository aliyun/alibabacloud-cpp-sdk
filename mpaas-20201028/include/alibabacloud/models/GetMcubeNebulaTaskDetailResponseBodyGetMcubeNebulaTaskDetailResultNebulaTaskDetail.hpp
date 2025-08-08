// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCUBENEBULATASKDETAILRESPONSEBODYGETMCUBENEBULATASKDETAILRESULTNEBULATASKDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETMCUBENEBULATASKDETAILRESPONSEBODYGETMCUBENEBULATASKDETAILRESULTNEBULATASKDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetailRuleJsonList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Atomic, atomic_);
      DARABONBA_PTR_TO_JSON(BaseInfoId, baseInfoId_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Cronexpress, cronexpress_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(ExtraData, extraData_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(FullRepair, fullRepair_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GmtModifiedStr, gmtModifiedStr_);
      DARABONBA_PTR_TO_JSON(GreyConfigInfo, greyConfigInfo_);
      DARABONBA_PTR_TO_JSON(GreyEndtime, greyEndtime_);
      DARABONBA_PTR_TO_JSON(GreyEndtimeData, greyEndtimeData_);
      DARABONBA_PTR_TO_JSON(GreyEndtimeStr, greyEndtimeStr_);
      DARABONBA_PTR_TO_JSON(GreyNum, greyNum_);
      DARABONBA_PTR_TO_JSON(GreyUrl, greyUrl_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IssueDesc, issueDesc_);
      DARABONBA_PTR_TO_JSON(Memo, memo_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(OssPath, ossPath_);
      DARABONBA_PTR_TO_JSON(PackageId, packageId_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_TO_JSON(PublishMode, publishMode_);
      DARABONBA_PTR_TO_JSON(PublishPeriod, publishPeriod_);
      DARABONBA_PTR_TO_JSON(PublishType, publishType_);
      DARABONBA_PTR_TO_JSON(QuickRollback, quickRollback_);
      DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(RuleJsonList, ruleJsonList_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SyncResult, syncResult_);
      DARABONBA_PTR_TO_JSON(SyncType, syncType_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TaskVersion, taskVersion_);
      DARABONBA_PTR_TO_JSON(UpgradeNoticeNum, upgradeNoticeNum_);
      DARABONBA_PTR_TO_JSON(UpgradeProgress, upgradeProgress_);
      DARABONBA_PTR_TO_JSON(WhitelistIds, whitelistIds_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Atomic, atomic_);
      DARABONBA_PTR_FROM_JSON(BaseInfoId, baseInfoId_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Cronexpress, cronexpress_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(ExtraData, extraData_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(FullRepair, fullRepair_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedStr, gmtModifiedStr_);
      DARABONBA_PTR_FROM_JSON(GreyConfigInfo, greyConfigInfo_);
      DARABONBA_PTR_FROM_JSON(GreyEndtime, greyEndtime_);
      DARABONBA_PTR_FROM_JSON(GreyEndtimeData, greyEndtimeData_);
      DARABONBA_PTR_FROM_JSON(GreyEndtimeStr, greyEndtimeStr_);
      DARABONBA_PTR_FROM_JSON(GreyNum, greyNum_);
      DARABONBA_PTR_FROM_JSON(GreyUrl, greyUrl_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IssueDesc, issueDesc_);
      DARABONBA_PTR_FROM_JSON(Memo, memo_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(OssPath, ossPath_);
      DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_FROM_JSON(PublishMode, publishMode_);
      DARABONBA_PTR_FROM_JSON(PublishPeriod, publishPeriod_);
      DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
      DARABONBA_PTR_FROM_JSON(QuickRollback, quickRollback_);
      DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(RuleJsonList, ruleJsonList_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SyncResult, syncResult_);
      DARABONBA_PTR_FROM_JSON(SyncType, syncType_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TaskVersion, taskVersion_);
      DARABONBA_PTR_FROM_JSON(UpgradeNoticeNum, upgradeNoticeNum_);
      DARABONBA_PTR_FROM_JSON(UpgradeProgress, upgradeProgress_);
      DARABONBA_PTR_FROM_JSON(WhitelistIds, whitelistIds_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail() = default ;
    GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail(const GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail &) = default ;
    GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail(GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail &&) = default ;
    GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail() = default ;
    GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& operator=(const GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail &) = default ;
    GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& operator=(GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appCode_ != nullptr
        && this->appId_ != nullptr && this->atomic_ != nullptr && this->baseInfoId_ != nullptr && this->bizType_ != nullptr && this->creator_ != nullptr
        && this->cronexpress_ != nullptr && this->downloadUrl_ != nullptr && this->extraData_ != nullptr && this->fileSize_ != nullptr && this->fullRepair_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->gmtModifiedStr_ != nullptr && this->greyConfigInfo_ != nullptr && this->greyEndtime_ != nullptr
        && this->greyEndtimeData_ != nullptr && this->greyEndtimeStr_ != nullptr && this->greyNum_ != nullptr && this->greyUrl_ != nullptr && this->id_ != nullptr
        && this->issueDesc_ != nullptr && this->memo_ != nullptr && this->modifier_ != nullptr && this->ossPath_ != nullptr && this->packageId_ != nullptr
        && this->percent_ != nullptr && this->platform_ != nullptr && this->productId_ != nullptr && this->productVersion_ != nullptr && this->publishMode_ != nullptr
        && this->publishPeriod_ != nullptr && this->publishType_ != nullptr && this->quickRollback_ != nullptr && this->releaseVersion_ != nullptr && this->ruleJsonList_ != nullptr
        && this->sourceId_ != nullptr && this->sourceName_ != nullptr && this->sourceType_ != nullptr && this->status_ != nullptr && this->syncResult_ != nullptr
        && this->syncType_ != nullptr && this->taskName_ != nullptr && this->taskStatus_ != nullptr && this->taskType_ != nullptr && this->taskVersion_ != nullptr
        && this->upgradeNoticeNum_ != nullptr && this->upgradeProgress_ != nullptr && this->whitelistIds_ != nullptr && this->workspaceId_ != nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // atomic Field Functions 
    bool hasAtomic() const { return this->atomic_ != nullptr;};
    void deleteAtomic() { this->atomic_ = nullptr;};
    inline int32_t atomic() const { DARABONBA_PTR_GET_DEFAULT(atomic_, 0) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setAtomic(int32_t atomic) { DARABONBA_PTR_SET_VALUE(atomic_, atomic) };


    // baseInfoId Field Functions 
    bool hasBaseInfoId() const { return this->baseInfoId_ != nullptr;};
    void deleteBaseInfoId() { this->baseInfoId_ = nullptr;};
    inline int64_t baseInfoId() const { DARABONBA_PTR_GET_DEFAULT(baseInfoId_, 0L) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setBaseInfoId(int64_t baseInfoId) { DARABONBA_PTR_SET_VALUE(baseInfoId_, baseInfoId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // cronexpress Field Functions 
    bool hasCronexpress() const { return this->cronexpress_ != nullptr;};
    void deleteCronexpress() { this->cronexpress_ = nullptr;};
    inline int32_t cronexpress() const { DARABONBA_PTR_GET_DEFAULT(cronexpress_, 0) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setCronexpress(int32_t cronexpress) { DARABONBA_PTR_SET_VALUE(cronexpress_, cronexpress) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // extraData Field Functions 
    bool hasExtraData() const { return this->extraData_ != nullptr;};
    void deleteExtraData() { this->extraData_ = nullptr;};
    inline string extraData() const { DARABONBA_PTR_GET_DEFAULT(extraData_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setExtraData(string extraData) { DARABONBA_PTR_SET_VALUE(extraData_, extraData) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline string fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // fullRepair Field Functions 
    bool hasFullRepair() const { return this->fullRepair_ != nullptr;};
    void deleteFullRepair() { this->fullRepair_ = nullptr;};
    inline int32_t fullRepair() const { DARABONBA_PTR_GET_DEFAULT(fullRepair_, 0) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setFullRepair(int32_t fullRepair) { DARABONBA_PTR_SET_VALUE(fullRepair_, fullRepair) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // gmtModifiedStr Field Functions 
    bool hasGmtModifiedStr() const { return this->gmtModifiedStr_ != nullptr;};
    void deleteGmtModifiedStr() { this->gmtModifiedStr_ = nullptr;};
    inline string gmtModifiedStr() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedStr_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setGmtModifiedStr(string gmtModifiedStr) { DARABONBA_PTR_SET_VALUE(gmtModifiedStr_, gmtModifiedStr) };


    // greyConfigInfo Field Functions 
    bool hasGreyConfigInfo() const { return this->greyConfigInfo_ != nullptr;};
    void deleteGreyConfigInfo() { this->greyConfigInfo_ = nullptr;};
    inline string greyConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(greyConfigInfo_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setGreyConfigInfo(string greyConfigInfo) { DARABONBA_PTR_SET_VALUE(greyConfigInfo_, greyConfigInfo) };


    // greyEndtime Field Functions 
    bool hasGreyEndtime() const { return this->greyEndtime_ != nullptr;};
    void deleteGreyEndtime() { this->greyEndtime_ = nullptr;};
    inline string greyEndtime() const { DARABONBA_PTR_GET_DEFAULT(greyEndtime_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setGreyEndtime(string greyEndtime) { DARABONBA_PTR_SET_VALUE(greyEndtime_, greyEndtime) };


    // greyEndtimeData Field Functions 
    bool hasGreyEndtimeData() const { return this->greyEndtimeData_ != nullptr;};
    void deleteGreyEndtimeData() { this->greyEndtimeData_ = nullptr;};
    inline string greyEndtimeData() const { DARABONBA_PTR_GET_DEFAULT(greyEndtimeData_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setGreyEndtimeData(string greyEndtimeData) { DARABONBA_PTR_SET_VALUE(greyEndtimeData_, greyEndtimeData) };


    // greyEndtimeStr Field Functions 
    bool hasGreyEndtimeStr() const { return this->greyEndtimeStr_ != nullptr;};
    void deleteGreyEndtimeStr() { this->greyEndtimeStr_ = nullptr;};
    inline string greyEndtimeStr() const { DARABONBA_PTR_GET_DEFAULT(greyEndtimeStr_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setGreyEndtimeStr(string greyEndtimeStr) { DARABONBA_PTR_SET_VALUE(greyEndtimeStr_, greyEndtimeStr) };


    // greyNum Field Functions 
    bool hasGreyNum() const { return this->greyNum_ != nullptr;};
    void deleteGreyNum() { this->greyNum_ = nullptr;};
    inline int32_t greyNum() const { DARABONBA_PTR_GET_DEFAULT(greyNum_, 0) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setGreyNum(int32_t greyNum) { DARABONBA_PTR_SET_VALUE(greyNum_, greyNum) };


    // greyUrl Field Functions 
    bool hasGreyUrl() const { return this->greyUrl_ != nullptr;};
    void deleteGreyUrl() { this->greyUrl_ = nullptr;};
    inline string greyUrl() const { DARABONBA_PTR_GET_DEFAULT(greyUrl_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setGreyUrl(string greyUrl) { DARABONBA_PTR_SET_VALUE(greyUrl_, greyUrl) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // issueDesc Field Functions 
    bool hasIssueDesc() const { return this->issueDesc_ != nullptr;};
    void deleteIssueDesc() { this->issueDesc_ = nullptr;};
    inline string issueDesc() const { DARABONBA_PTR_GET_DEFAULT(issueDesc_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setIssueDesc(string issueDesc) { DARABONBA_PTR_SET_VALUE(issueDesc_, issueDesc) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string ossPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // packageId Field Functions 
    bool hasPackageId() const { return this->packageId_ != nullptr;};
    void deletePackageId() { this->packageId_ = nullptr;};
    inline int64_t packageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, 0L) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setPackageId(int64_t packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline int32_t percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productVersion Field Functions 
    bool hasProductVersion() const { return this->productVersion_ != nullptr;};
    void deleteProductVersion() { this->productVersion_ = nullptr;};
    inline string productVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


    // publishMode Field Functions 
    bool hasPublishMode() const { return this->publishMode_ != nullptr;};
    void deletePublishMode() { this->publishMode_ = nullptr;};
    inline int32_t publishMode() const { DARABONBA_PTR_GET_DEFAULT(publishMode_, 0) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setPublishMode(int32_t publishMode) { DARABONBA_PTR_SET_VALUE(publishMode_, publishMode) };


    // publishPeriod Field Functions 
    bool hasPublishPeriod() const { return this->publishPeriod_ != nullptr;};
    void deletePublishPeriod() { this->publishPeriod_ = nullptr;};
    inline int32_t publishPeriod() const { DARABONBA_PTR_GET_DEFAULT(publishPeriod_, 0) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setPublishPeriod(int32_t publishPeriod) { DARABONBA_PTR_SET_VALUE(publishPeriod_, publishPeriod) };


    // publishType Field Functions 
    bool hasPublishType() const { return this->publishType_ != nullptr;};
    void deletePublishType() { this->publishType_ = nullptr;};
    inline int32_t publishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, 0) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setPublishType(int32_t publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


    // quickRollback Field Functions 
    bool hasQuickRollback() const { return this->quickRollback_ != nullptr;};
    void deleteQuickRollback() { this->quickRollback_ = nullptr;};
    inline int32_t quickRollback() const { DARABONBA_PTR_GET_DEFAULT(quickRollback_, 0) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setQuickRollback(int32_t quickRollback) { DARABONBA_PTR_SET_VALUE(quickRollback_, quickRollback) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string releaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // ruleJsonList Field Functions 
    bool hasRuleJsonList() const { return this->ruleJsonList_ != nullptr;};
    void deleteRuleJsonList() { this->ruleJsonList_ = nullptr;};
    inline const vector<Models::GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetailRuleJsonList> & ruleJsonList() const { DARABONBA_PTR_GET_CONST(ruleJsonList_, vector<Models::GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetailRuleJsonList>) };
    inline vector<Models::GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetailRuleJsonList> ruleJsonList() { DARABONBA_PTR_GET(ruleJsonList_, vector<Models::GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetailRuleJsonList>) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setRuleJsonList(const vector<Models::GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetailRuleJsonList> & ruleJsonList) { DARABONBA_PTR_SET_VALUE(ruleJsonList_, ruleJsonList) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setRuleJsonList(vector<Models::GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetailRuleJsonList> && ruleJsonList) { DARABONBA_PTR_SET_RVALUE(ruleJsonList_, ruleJsonList) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string sourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // syncResult Field Functions 
    bool hasSyncResult() const { return this->syncResult_ != nullptr;};
    void deleteSyncResult() { this->syncResult_ = nullptr;};
    inline string syncResult() const { DARABONBA_PTR_GET_DEFAULT(syncResult_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setSyncResult(string syncResult) { DARABONBA_PTR_SET_VALUE(syncResult_, syncResult) };


    // syncType Field Functions 
    bool hasSyncType() const { return this->syncType_ != nullptr;};
    void deleteSyncType() { this->syncType_ = nullptr;};
    inline int32_t syncType() const { DARABONBA_PTR_GET_DEFAULT(syncType_, 0) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setSyncType(int32_t syncType) { DARABONBA_PTR_SET_VALUE(syncType_, syncType) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // taskVersion Field Functions 
    bool hasTaskVersion() const { return this->taskVersion_ != nullptr;};
    void deleteTaskVersion() { this->taskVersion_ = nullptr;};
    inline int64_t taskVersion() const { DARABONBA_PTR_GET_DEFAULT(taskVersion_, 0L) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setTaskVersion(int64_t taskVersion) { DARABONBA_PTR_SET_VALUE(taskVersion_, taskVersion) };


    // upgradeNoticeNum Field Functions 
    bool hasUpgradeNoticeNum() const { return this->upgradeNoticeNum_ != nullptr;};
    void deleteUpgradeNoticeNum() { this->upgradeNoticeNum_ = nullptr;};
    inline int64_t upgradeNoticeNum() const { DARABONBA_PTR_GET_DEFAULT(upgradeNoticeNum_, 0L) };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setUpgradeNoticeNum(int64_t upgradeNoticeNum) { DARABONBA_PTR_SET_VALUE(upgradeNoticeNum_, upgradeNoticeNum) };


    // upgradeProgress Field Functions 
    bool hasUpgradeProgress() const { return this->upgradeProgress_ != nullptr;};
    void deleteUpgradeProgress() { this->upgradeProgress_ = nullptr;};
    inline string upgradeProgress() const { DARABONBA_PTR_GET_DEFAULT(upgradeProgress_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setUpgradeProgress(string upgradeProgress) { DARABONBA_PTR_SET_VALUE(upgradeProgress_, upgradeProgress) };


    // whitelistIds Field Functions 
    bool hasWhitelistIds() const { return this->whitelistIds_ != nullptr;};
    void deleteWhitelistIds() { this->whitelistIds_ = nullptr;};
    inline string whitelistIds() const { DARABONBA_PTR_GET_DEFAULT(whitelistIds_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setWhitelistIds(string whitelistIds) { DARABONBA_PTR_SET_VALUE(whitelistIds_, whitelistIds) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetail& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<int32_t> atomic_ = nullptr;
    std::shared_ptr<int64_t> baseInfoId_ = nullptr;
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<int32_t> cronexpress_ = nullptr;
    std::shared_ptr<string> downloadUrl_ = nullptr;
    std::shared_ptr<string> extraData_ = nullptr;
    std::shared_ptr<string> fileSize_ = nullptr;
    std::shared_ptr<int32_t> fullRepair_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> gmtModifiedStr_ = nullptr;
    std::shared_ptr<string> greyConfigInfo_ = nullptr;
    std::shared_ptr<string> greyEndtime_ = nullptr;
    std::shared_ptr<string> greyEndtimeData_ = nullptr;
    std::shared_ptr<string> greyEndtimeStr_ = nullptr;
    std::shared_ptr<int32_t> greyNum_ = nullptr;
    std::shared_ptr<string> greyUrl_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> issueDesc_ = nullptr;
    std::shared_ptr<string> memo_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> ossPath_ = nullptr;
    std::shared_ptr<int64_t> packageId_ = nullptr;
    std::shared_ptr<int32_t> percent_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> productVersion_ = nullptr;
    std::shared_ptr<int32_t> publishMode_ = nullptr;
    std::shared_ptr<int32_t> publishPeriod_ = nullptr;
    std::shared_ptr<int32_t> publishType_ = nullptr;
    std::shared_ptr<int32_t> quickRollback_ = nullptr;
    std::shared_ptr<string> releaseVersion_ = nullptr;
    std::shared_ptr<vector<Models::GetMcubeNebulaTaskDetailResponseBodyGetMcubeNebulaTaskDetailResultNebulaTaskDetailRuleJsonList>> ruleJsonList_ = nullptr;
    std::shared_ptr<string> sourceId_ = nullptr;
    std::shared_ptr<string> sourceName_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> syncResult_ = nullptr;
    std::shared_ptr<int32_t> syncType_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    std::shared_ptr<int32_t> taskType_ = nullptr;
    std::shared_ptr<int64_t> taskVersion_ = nullptr;
    std::shared_ptr<int64_t> upgradeNoticeNum_ = nullptr;
    std::shared_ptr<string> upgradeProgress_ = nullptr;
    std::shared_ptr<string> whitelistIds_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
