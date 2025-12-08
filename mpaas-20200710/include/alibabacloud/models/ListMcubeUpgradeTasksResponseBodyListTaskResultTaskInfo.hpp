// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEUPGRADETASKSRESPONSEBODYLISTTASKRESULTTASKINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEUPGRADETASKSRESPONSEBODYLISTTASKRESULTTASKINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
namespace Models
{
  class ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GreyConfigInfo, greyConfigInfo_);
      DARABONBA_PTR_TO_JSON(GreyEndtime, greyEndtime_);
      DARABONBA_PTR_TO_JSON(GreyNum, greyNum_);
      DARABONBA_PTR_TO_JSON(HistoryForce, historyForce_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsEnterprise, isEnterprise_);
      DARABONBA_PTR_TO_JSON(Memo, memo_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(PackageInfoId, packageInfoId_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_TO_JSON(PublishMode, publishMode_);
      DARABONBA_PTR_TO_JSON(PublishType, publishType_);
      DARABONBA_PTR_TO_JSON(PushContent, pushContent_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(UpgradeContent, upgradeContent_);
      DARABONBA_PTR_TO_JSON(UpgradeType, upgradeType_);
      DARABONBA_PTR_TO_JSON(WhitelistIds, whitelistIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GreyConfigInfo, greyConfigInfo_);
      DARABONBA_PTR_FROM_JSON(GreyEndtime, greyEndtime_);
      DARABONBA_PTR_FROM_JSON(GreyNum, greyNum_);
      DARABONBA_PTR_FROM_JSON(HistoryForce, historyForce_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsEnterprise, isEnterprise_);
      DARABONBA_PTR_FROM_JSON(Memo, memo_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(PackageInfoId, packageInfoId_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_FROM_JSON(PublishMode, publishMode_);
      DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
      DARABONBA_PTR_FROM_JSON(PushContent, pushContent_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(UpgradeContent, upgradeContent_);
      DARABONBA_PTR_FROM_JSON(UpgradeType, upgradeType_);
      DARABONBA_PTR_FROM_JSON(WhitelistIds, whitelistIds_);
    };
    ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo() = default ;
    ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo(const ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo &) = default ;
    ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo(ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo &&) = default ;
    ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo() = default ;
    ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& operator=(const ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo &) = default ;
    ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& operator=(ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && return this->creator_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->greyConfigInfo_ == nullptr && return this->greyEndtime_ == nullptr
        && return this->greyNum_ == nullptr && return this->historyForce_ == nullptr && return this->id_ == nullptr && return this->isEnterprise_ == nullptr && return this->memo_ == nullptr
        && return this->modifier_ == nullptr && return this->packageInfoId_ == nullptr && return this->platform_ == nullptr && return this->productId_ == nullptr && return this->productVersion_ == nullptr
        && return this->publishMode_ == nullptr && return this->publishType_ == nullptr && return this->pushContent_ == nullptr && return this->taskStatus_ == nullptr && return this->upgradeContent_ == nullptr
        && return this->upgradeType_ == nullptr && return this->whitelistIds_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // greyConfigInfo Field Functions 
    bool hasGreyConfigInfo() const { return this->greyConfigInfo_ != nullptr;};
    void deleteGreyConfigInfo() { this->greyConfigInfo_ = nullptr;};
    inline string greyConfigInfo() const { DARABONBA_PTR_GET_DEFAULT(greyConfigInfo_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setGreyConfigInfo(string greyConfigInfo) { DARABONBA_PTR_SET_VALUE(greyConfigInfo_, greyConfigInfo) };


    // greyEndtime Field Functions 
    bool hasGreyEndtime() const { return this->greyEndtime_ != nullptr;};
    void deleteGreyEndtime() { this->greyEndtime_ = nullptr;};
    inline string greyEndtime() const { DARABONBA_PTR_GET_DEFAULT(greyEndtime_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setGreyEndtime(string greyEndtime) { DARABONBA_PTR_SET_VALUE(greyEndtime_, greyEndtime) };


    // greyNum Field Functions 
    bool hasGreyNum() const { return this->greyNum_ != nullptr;};
    void deleteGreyNum() { this->greyNum_ = nullptr;};
    inline int32_t greyNum() const { DARABONBA_PTR_GET_DEFAULT(greyNum_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setGreyNum(int32_t greyNum) { DARABONBA_PTR_SET_VALUE(greyNum_, greyNum) };


    // historyForce Field Functions 
    bool hasHistoryForce() const { return this->historyForce_ != nullptr;};
    void deleteHistoryForce() { this->historyForce_ = nullptr;};
    inline int32_t historyForce() const { DARABONBA_PTR_GET_DEFAULT(historyForce_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setHistoryForce(int32_t historyForce) { DARABONBA_PTR_SET_VALUE(historyForce_, historyForce) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isEnterprise Field Functions 
    bool hasIsEnterprise() const { return this->isEnterprise_ != nullptr;};
    void deleteIsEnterprise() { this->isEnterprise_ = nullptr;};
    inline int32_t isEnterprise() const { DARABONBA_PTR_GET_DEFAULT(isEnterprise_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setIsEnterprise(int32_t isEnterprise) { DARABONBA_PTR_SET_VALUE(isEnterprise_, isEnterprise) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // packageInfoId Field Functions 
    bool hasPackageInfoId() const { return this->packageInfoId_ != nullptr;};
    void deletePackageInfoId() { this->packageInfoId_ = nullptr;};
    inline int64_t packageInfoId() const { DARABONBA_PTR_GET_DEFAULT(packageInfoId_, 0L) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setPackageInfoId(int64_t packageInfoId) { DARABONBA_PTR_SET_VALUE(packageInfoId_, packageInfoId) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productVersion Field Functions 
    bool hasProductVersion() const { return this->productVersion_ != nullptr;};
    void deleteProductVersion() { this->productVersion_ = nullptr;};
    inline string productVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


    // publishMode Field Functions 
    bool hasPublishMode() const { return this->publishMode_ != nullptr;};
    void deletePublishMode() { this->publishMode_ = nullptr;};
    inline int32_t publishMode() const { DARABONBA_PTR_GET_DEFAULT(publishMode_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setPublishMode(int32_t publishMode) { DARABONBA_PTR_SET_VALUE(publishMode_, publishMode) };


    // publishType Field Functions 
    bool hasPublishType() const { return this->publishType_ != nullptr;};
    void deletePublishType() { this->publishType_ = nullptr;};
    inline int32_t publishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setPublishType(int32_t publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


    // pushContent Field Functions 
    bool hasPushContent() const { return this->pushContent_ != nullptr;};
    void deletePushContent() { this->pushContent_ = nullptr;};
    inline string pushContent() const { DARABONBA_PTR_GET_DEFAULT(pushContent_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setPushContent(string pushContent) { DARABONBA_PTR_SET_VALUE(pushContent_, pushContent) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // upgradeContent Field Functions 
    bool hasUpgradeContent() const { return this->upgradeContent_ != nullptr;};
    void deleteUpgradeContent() { this->upgradeContent_ = nullptr;};
    inline string upgradeContent() const { DARABONBA_PTR_GET_DEFAULT(upgradeContent_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setUpgradeContent(string upgradeContent) { DARABONBA_PTR_SET_VALUE(upgradeContent_, upgradeContent) };


    // upgradeType Field Functions 
    bool hasUpgradeType() const { return this->upgradeType_ != nullptr;};
    void deleteUpgradeType() { this->upgradeType_ = nullptr;};
    inline int32_t upgradeType() const { DARABONBA_PTR_GET_DEFAULT(upgradeType_, 0) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setUpgradeType(int32_t upgradeType) { DARABONBA_PTR_SET_VALUE(upgradeType_, upgradeType) };


    // whitelistIds Field Functions 
    bool hasWhitelistIds() const { return this->whitelistIds_ != nullptr;};
    void deleteWhitelistIds() { this->whitelistIds_ = nullptr;};
    inline string whitelistIds() const { DARABONBA_PTR_GET_DEFAULT(whitelistIds_, "") };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResultTaskInfo& setWhitelistIds(string whitelistIds) { DARABONBA_PTR_SET_VALUE(whitelistIds_, whitelistIds) };


  protected:
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> greyConfigInfo_ = nullptr;
    std::shared_ptr<string> greyEndtime_ = nullptr;
    std::shared_ptr<int32_t> greyNum_ = nullptr;
    std::shared_ptr<int32_t> historyForce_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int32_t> isEnterprise_ = nullptr;
    std::shared_ptr<string> memo_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<int64_t> packageInfoId_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> productVersion_ = nullptr;
    std::shared_ptr<int32_t> publishMode_ = nullptr;
    std::shared_ptr<int32_t> publishType_ = nullptr;
    std::shared_ptr<string> pushContent_ = nullptr;
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    std::shared_ptr<string> upgradeContent_ = nullptr;
    std::shared_ptr<int32_t> upgradeType_ = nullptr;
    std::shared_ptr<string> whitelistIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif
