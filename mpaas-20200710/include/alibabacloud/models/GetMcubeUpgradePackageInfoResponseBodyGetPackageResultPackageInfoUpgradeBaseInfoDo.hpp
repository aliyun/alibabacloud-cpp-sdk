// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCUBEUPGRADEPACKAGEINFORESPONSEBODYGETPACKAGERESULTPACKAGEINFOUPGRADEBASEINFODO_HPP_
#define ALIBABACLOUD_MODELS_GETMCUBEUPGRADEPACKAGEINFORESPONSEBODYGETPACKAGERESULTPACKAGEINFOUPGRADEBASEINFODO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
namespace Models
{
  class GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& obj) { 
      DARABONBA_PTR_TO_JSON(AllowCreateTask, allowCreateTask_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppstoreUrl, appstoreUrl_);
      DARABONBA_PTR_TO_JSON(ChangeLog, changeLog_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsEnterprise, isEnterprise_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(NeedCheck, needCheck_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_TO_JSON(PublishPeriod, publishPeriod_);
      DARABONBA_PTR_TO_JSON(VerificationCode, verificationCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowCreateTask, allowCreateTask_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppstoreUrl, appstoreUrl_);
      DARABONBA_PTR_FROM_JSON(ChangeLog, changeLog_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsEnterprise, isEnterprise_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(NeedCheck, needCheck_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_FROM_JSON(PublishPeriod, publishPeriod_);
      DARABONBA_PTR_FROM_JSON(VerificationCode, verificationCode_);
    };
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO() = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO(const GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO &) = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO(GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO &&) = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO() = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& operator=(const GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO &) = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& operator=(GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowCreateTask_ != nullptr
        && this->appCode_ != nullptr && this->appstoreUrl_ != nullptr && this->changeLog_ != nullptr && this->creator_ != nullptr && this->downloadUrl_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->isEnterprise_ != nullptr && this->modifier_ != nullptr
        && this->needCheck_ != nullptr && this->packageType_ != nullptr && this->platform_ != nullptr && this->productId_ != nullptr && this->productName_ != nullptr
        && this->productVersion_ != nullptr && this->publishPeriod_ != nullptr && this->verificationCode_ != nullptr; };
    // allowCreateTask Field Functions 
    bool hasAllowCreateTask() const { return this->allowCreateTask_ != nullptr;};
    void deleteAllowCreateTask() { this->allowCreateTask_ = nullptr;};
    inline bool allowCreateTask() const { DARABONBA_PTR_GET_DEFAULT(allowCreateTask_, false) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setAllowCreateTask(bool allowCreateTask) { DARABONBA_PTR_SET_VALUE(allowCreateTask_, allowCreateTask) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appstoreUrl Field Functions 
    bool hasAppstoreUrl() const { return this->appstoreUrl_ != nullptr;};
    void deleteAppstoreUrl() { this->appstoreUrl_ = nullptr;};
    inline string appstoreUrl() const { DARABONBA_PTR_GET_DEFAULT(appstoreUrl_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setAppstoreUrl(string appstoreUrl) { DARABONBA_PTR_SET_VALUE(appstoreUrl_, appstoreUrl) };


    // changeLog Field Functions 
    bool hasChangeLog() const { return this->changeLog_ != nullptr;};
    void deleteChangeLog() { this->changeLog_ = nullptr;};
    inline string changeLog() const { DARABONBA_PTR_GET_DEFAULT(changeLog_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setChangeLog(string changeLog) { DARABONBA_PTR_SET_VALUE(changeLog_, changeLog) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isEnterprise Field Functions 
    bool hasIsEnterprise() const { return this->isEnterprise_ != nullptr;};
    void deleteIsEnterprise() { this->isEnterprise_ = nullptr;};
    inline int32_t isEnterprise() const { DARABONBA_PTR_GET_DEFAULT(isEnterprise_, 0) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setIsEnterprise(int32_t isEnterprise) { DARABONBA_PTR_SET_VALUE(isEnterprise_, isEnterprise) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // needCheck Field Functions 
    bool hasNeedCheck() const { return this->needCheck_ != nullptr;};
    void deleteNeedCheck() { this->needCheck_ = nullptr;};
    inline int32_t needCheck() const { DARABONBA_PTR_GET_DEFAULT(needCheck_, 0) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setNeedCheck(int32_t needCheck) { DARABONBA_PTR_SET_VALUE(needCheck_, needCheck) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productVersion Field Functions 
    bool hasProductVersion() const { return this->productVersion_ != nullptr;};
    void deleteProductVersion() { this->productVersion_ = nullptr;};
    inline string productVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


    // publishPeriod Field Functions 
    bool hasPublishPeriod() const { return this->publishPeriod_ != nullptr;};
    void deletePublishPeriod() { this->publishPeriod_ = nullptr;};
    inline int32_t publishPeriod() const { DARABONBA_PTR_GET_DEFAULT(publishPeriod_, 0) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setPublishPeriod(int32_t publishPeriod) { DARABONBA_PTR_SET_VALUE(publishPeriod_, publishPeriod) };


    // verificationCode Field Functions 
    bool hasVerificationCode() const { return this->verificationCode_ != nullptr;};
    void deleteVerificationCode() { this->verificationCode_ = nullptr;};
    inline string verificationCode() const { DARABONBA_PTR_GET_DEFAULT(verificationCode_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setVerificationCode(string verificationCode) { DARABONBA_PTR_SET_VALUE(verificationCode_, verificationCode) };


  protected:
    std::shared_ptr<bool> allowCreateTask_ = nullptr;
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<string> appstoreUrl_ = nullptr;
    std::shared_ptr<string> changeLog_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> downloadUrl_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int32_t> isEnterprise_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<int32_t> needCheck_ = nullptr;
    std::shared_ptr<string> packageType_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> productVersion_ = nullptr;
    std::shared_ptr<int32_t> publishPeriod_ = nullptr;
    std::shared_ptr<string> verificationCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif
