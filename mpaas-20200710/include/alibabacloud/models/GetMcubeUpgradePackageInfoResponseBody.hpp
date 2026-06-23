// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCUBEUPGRADEPACKAGEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMCUBEUPGRADEPACKAGEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
namespace Models
{
  class GetMcubeUpgradePackageInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcubeUpgradePackageInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GetPackageResult, getPackageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcubeUpgradePackageInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GetPackageResult, getPackageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    GetMcubeUpgradePackageInfoResponseBody() = default ;
    GetMcubeUpgradePackageInfoResponseBody(const GetMcubeUpgradePackageInfoResponseBody &) = default ;
    GetMcubeUpgradePackageInfoResponseBody(GetMcubeUpgradePackageInfoResponseBody &&) = default ;
    GetMcubeUpgradePackageInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcubeUpgradePackageInfoResponseBody() = default ;
    GetMcubeUpgradePackageInfoResponseBody& operator=(const GetMcubeUpgradePackageInfoResponseBody &) = default ;
    GetMcubeUpgradePackageInfoResponseBody& operator=(GetMcubeUpgradePackageInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GetPackageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GetPackageResult& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(PackageInfo, packageInfo_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, GetPackageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(PackageInfo, packageInfo_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      GetPackageResult() = default ;
      GetPackageResult(const GetPackageResult &) = default ;
      GetPackageResult(GetPackageResult &&) = default ;
      GetPackageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GetPackageResult() = default ;
      GetPackageResult& operator=(const GetPackageResult &) = default ;
      GetPackageResult& operator=(GetPackageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PackageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PackageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(MobileTestFlightConfigDO, mobileTestFlightConfigDO_);
          DARABONBA_PTR_TO_JSON(UpgradeBaseInfoDO, upgradeBaseInfoDO_);
        };
        friend void from_json(const Darabonba::Json& j, PackageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(MobileTestFlightConfigDO, mobileTestFlightConfigDO_);
          DARABONBA_PTR_FROM_JSON(UpgradeBaseInfoDO, upgradeBaseInfoDO_);
        };
        PackageInfo() = default ;
        PackageInfo(const PackageInfo &) = default ;
        PackageInfo(PackageInfo &&) = default ;
        PackageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PackageInfo() = default ;
        PackageInfo& operator=(const PackageInfo &) = default ;
        PackageInfo& operator=(PackageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class UpgradeBaseInfoDO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UpgradeBaseInfoDO& obj) { 
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
          friend void from_json(const Darabonba::Json& j, UpgradeBaseInfoDO& obj) { 
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
          UpgradeBaseInfoDO() = default ;
          UpgradeBaseInfoDO(const UpgradeBaseInfoDO &) = default ;
          UpgradeBaseInfoDO(UpgradeBaseInfoDO &&) = default ;
          UpgradeBaseInfoDO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UpgradeBaseInfoDO() = default ;
          UpgradeBaseInfoDO& operator=(const UpgradeBaseInfoDO &) = default ;
          UpgradeBaseInfoDO& operator=(UpgradeBaseInfoDO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->allowCreateTask_ == nullptr
        && this->appCode_ == nullptr && this->appstoreUrl_ == nullptr && this->changeLog_ == nullptr && this->creator_ == nullptr && this->downloadUrl_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->isEnterprise_ == nullptr && this->modifier_ == nullptr
        && this->needCheck_ == nullptr && this->packageType_ == nullptr && this->platform_ == nullptr && this->productId_ == nullptr && this->productName_ == nullptr
        && this->productVersion_ == nullptr && this->publishPeriod_ == nullptr && this->verificationCode_ == nullptr; };
          // allowCreateTask Field Functions 
          bool hasAllowCreateTask() const { return this->allowCreateTask_ != nullptr;};
          void deleteAllowCreateTask() { this->allowCreateTask_ = nullptr;};
          inline bool getAllowCreateTask() const { DARABONBA_PTR_GET_DEFAULT(allowCreateTask_, false) };
          inline UpgradeBaseInfoDO& setAllowCreateTask(bool allowCreateTask) { DARABONBA_PTR_SET_VALUE(allowCreateTask_, allowCreateTask) };


          // appCode Field Functions 
          bool hasAppCode() const { return this->appCode_ != nullptr;};
          void deleteAppCode() { this->appCode_ = nullptr;};
          inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
          inline UpgradeBaseInfoDO& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


          // appstoreUrl Field Functions 
          bool hasAppstoreUrl() const { return this->appstoreUrl_ != nullptr;};
          void deleteAppstoreUrl() { this->appstoreUrl_ = nullptr;};
          inline string getAppstoreUrl() const { DARABONBA_PTR_GET_DEFAULT(appstoreUrl_, "") };
          inline UpgradeBaseInfoDO& setAppstoreUrl(string appstoreUrl) { DARABONBA_PTR_SET_VALUE(appstoreUrl_, appstoreUrl) };


          // changeLog Field Functions 
          bool hasChangeLog() const { return this->changeLog_ != nullptr;};
          void deleteChangeLog() { this->changeLog_ = nullptr;};
          inline string getChangeLog() const { DARABONBA_PTR_GET_DEFAULT(changeLog_, "") };
          inline UpgradeBaseInfoDO& setChangeLog(string changeLog) { DARABONBA_PTR_SET_VALUE(changeLog_, changeLog) };


          // creator Field Functions 
          bool hasCreator() const { return this->creator_ != nullptr;};
          void deleteCreator() { this->creator_ = nullptr;};
          inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
          inline UpgradeBaseInfoDO& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


          // downloadUrl Field Functions 
          bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
          void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
          inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
          inline UpgradeBaseInfoDO& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline UpgradeBaseInfoDO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline UpgradeBaseInfoDO& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline UpgradeBaseInfoDO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // isEnterprise Field Functions 
          bool hasIsEnterprise() const { return this->isEnterprise_ != nullptr;};
          void deleteIsEnterprise() { this->isEnterprise_ = nullptr;};
          inline int32_t getIsEnterprise() const { DARABONBA_PTR_GET_DEFAULT(isEnterprise_, 0) };
          inline UpgradeBaseInfoDO& setIsEnterprise(int32_t isEnterprise) { DARABONBA_PTR_SET_VALUE(isEnterprise_, isEnterprise) };


          // modifier Field Functions 
          bool hasModifier() const { return this->modifier_ != nullptr;};
          void deleteModifier() { this->modifier_ = nullptr;};
          inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
          inline UpgradeBaseInfoDO& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


          // needCheck Field Functions 
          bool hasNeedCheck() const { return this->needCheck_ != nullptr;};
          void deleteNeedCheck() { this->needCheck_ = nullptr;};
          inline int32_t getNeedCheck() const { DARABONBA_PTR_GET_DEFAULT(needCheck_, 0) };
          inline UpgradeBaseInfoDO& setNeedCheck(int32_t needCheck) { DARABONBA_PTR_SET_VALUE(needCheck_, needCheck) };


          // packageType Field Functions 
          bool hasPackageType() const { return this->packageType_ != nullptr;};
          void deletePackageType() { this->packageType_ = nullptr;};
          inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
          inline UpgradeBaseInfoDO& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


          // platform Field Functions 
          bool hasPlatform() const { return this->platform_ != nullptr;};
          void deletePlatform() { this->platform_ = nullptr;};
          inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
          inline UpgradeBaseInfoDO& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


          // productId Field Functions 
          bool hasProductId() const { return this->productId_ != nullptr;};
          void deleteProductId() { this->productId_ = nullptr;};
          inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
          inline UpgradeBaseInfoDO& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


          // productName Field Functions 
          bool hasProductName() const { return this->productName_ != nullptr;};
          void deleteProductName() { this->productName_ = nullptr;};
          inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
          inline UpgradeBaseInfoDO& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


          // productVersion Field Functions 
          bool hasProductVersion() const { return this->productVersion_ != nullptr;};
          void deleteProductVersion() { this->productVersion_ = nullptr;};
          inline string getProductVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
          inline UpgradeBaseInfoDO& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


          // publishPeriod Field Functions 
          bool hasPublishPeriod() const { return this->publishPeriod_ != nullptr;};
          void deletePublishPeriod() { this->publishPeriod_ = nullptr;};
          inline int32_t getPublishPeriod() const { DARABONBA_PTR_GET_DEFAULT(publishPeriod_, 0) };
          inline UpgradeBaseInfoDO& setPublishPeriod(int32_t publishPeriod) { DARABONBA_PTR_SET_VALUE(publishPeriod_, publishPeriod) };


          // verificationCode Field Functions 
          bool hasVerificationCode() const { return this->verificationCode_ != nullptr;};
          void deleteVerificationCode() { this->verificationCode_ = nullptr;};
          inline string getVerificationCode() const { DARABONBA_PTR_GET_DEFAULT(verificationCode_, "") };
          inline UpgradeBaseInfoDO& setVerificationCode(string verificationCode) { DARABONBA_PTR_SET_VALUE(verificationCode_, verificationCode) };


        protected:
          shared_ptr<bool> allowCreateTask_ {};
          shared_ptr<string> appCode_ {};
          shared_ptr<string> appstoreUrl_ {};
          shared_ptr<string> changeLog_ {};
          shared_ptr<string> creator_ {};
          shared_ptr<string> downloadUrl_ {};
          shared_ptr<string> gmtCreate_ {};
          shared_ptr<string> gmtModified_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<int32_t> isEnterprise_ {};
          shared_ptr<string> modifier_ {};
          shared_ptr<int32_t> needCheck_ {};
          shared_ptr<string> packageType_ {};
          shared_ptr<string> platform_ {};
          shared_ptr<string> productId_ {};
          shared_ptr<string> productName_ {};
          shared_ptr<string> productVersion_ {};
          shared_ptr<int32_t> publishPeriod_ {};
          shared_ptr<string> verificationCode_ {};
        };

        class MobileTestFlightConfigDO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MobileTestFlightConfigDO& obj) { 
            DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(InstallAmount, installAmount_);
            DARABONBA_PTR_TO_JSON(InvalidTime, invalidTime_);
            DARABONBA_PTR_TO_JSON(UpgradeId, upgradeId_);
          };
          friend void from_json(const Darabonba::Json& j, MobileTestFlightConfigDO& obj) { 
            DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(InstallAmount, installAmount_);
            DARABONBA_PTR_FROM_JSON(InvalidTime, invalidTime_);
            DARABONBA_PTR_FROM_JSON(UpgradeId, upgradeId_);
          };
          MobileTestFlightConfigDO() = default ;
          MobileTestFlightConfigDO(const MobileTestFlightConfigDO &) = default ;
          MobileTestFlightConfigDO(MobileTestFlightConfigDO &&) = default ;
          MobileTestFlightConfigDO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MobileTestFlightConfigDO() = default ;
          MobileTestFlightConfigDO& operator=(const MobileTestFlightConfigDO &) = default ;
          MobileTestFlightConfigDO& operator=(MobileTestFlightConfigDO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->installAmount_ == nullptr && this->invalidTime_ == nullptr && this->upgradeId_ == nullptr; };
          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline MobileTestFlightConfigDO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline MobileTestFlightConfigDO& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline MobileTestFlightConfigDO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // installAmount Field Functions 
          bool hasInstallAmount() const { return this->installAmount_ != nullptr;};
          void deleteInstallAmount() { this->installAmount_ = nullptr;};
          inline int32_t getInstallAmount() const { DARABONBA_PTR_GET_DEFAULT(installAmount_, 0) };
          inline MobileTestFlightConfigDO& setInstallAmount(int32_t installAmount) { DARABONBA_PTR_SET_VALUE(installAmount_, installAmount) };


          // invalidTime Field Functions 
          bool hasInvalidTime() const { return this->invalidTime_ != nullptr;};
          void deleteInvalidTime() { this->invalidTime_ = nullptr;};
          inline string getInvalidTime() const { DARABONBA_PTR_GET_DEFAULT(invalidTime_, "") };
          inline MobileTestFlightConfigDO& setInvalidTime(string invalidTime) { DARABONBA_PTR_SET_VALUE(invalidTime_, invalidTime) };


          // upgradeId Field Functions 
          bool hasUpgradeId() const { return this->upgradeId_ != nullptr;};
          void deleteUpgradeId() { this->upgradeId_ = nullptr;};
          inline int64_t getUpgradeId() const { DARABONBA_PTR_GET_DEFAULT(upgradeId_, 0L) };
          inline MobileTestFlightConfigDO& setUpgradeId(int64_t upgradeId) { DARABONBA_PTR_SET_VALUE(upgradeId_, upgradeId) };


        protected:
          shared_ptr<string> gmtCreate_ {};
          shared_ptr<string> gmtModified_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<int32_t> installAmount_ {};
          shared_ptr<string> invalidTime_ {};
          shared_ptr<int64_t> upgradeId_ {};
        };

        virtual bool empty() const override { return this->mobileTestFlightConfigDO_ == nullptr
        && this->upgradeBaseInfoDO_ == nullptr; };
        // mobileTestFlightConfigDO Field Functions 
        bool hasMobileTestFlightConfigDO() const { return this->mobileTestFlightConfigDO_ != nullptr;};
        void deleteMobileTestFlightConfigDO() { this->mobileTestFlightConfigDO_ = nullptr;};
        inline const PackageInfo::MobileTestFlightConfigDO & getMobileTestFlightConfigDO() const { DARABONBA_PTR_GET_CONST(mobileTestFlightConfigDO_, PackageInfo::MobileTestFlightConfigDO) };
        inline PackageInfo::MobileTestFlightConfigDO getMobileTestFlightConfigDO() { DARABONBA_PTR_GET(mobileTestFlightConfigDO_, PackageInfo::MobileTestFlightConfigDO) };
        inline PackageInfo& setMobileTestFlightConfigDO(const PackageInfo::MobileTestFlightConfigDO & mobileTestFlightConfigDO) { DARABONBA_PTR_SET_VALUE(mobileTestFlightConfigDO_, mobileTestFlightConfigDO) };
        inline PackageInfo& setMobileTestFlightConfigDO(PackageInfo::MobileTestFlightConfigDO && mobileTestFlightConfigDO) { DARABONBA_PTR_SET_RVALUE(mobileTestFlightConfigDO_, mobileTestFlightConfigDO) };


        // upgradeBaseInfoDO Field Functions 
        bool hasUpgradeBaseInfoDO() const { return this->upgradeBaseInfoDO_ != nullptr;};
        void deleteUpgradeBaseInfoDO() { this->upgradeBaseInfoDO_ = nullptr;};
        inline const PackageInfo::UpgradeBaseInfoDO & getUpgradeBaseInfoDO() const { DARABONBA_PTR_GET_CONST(upgradeBaseInfoDO_, PackageInfo::UpgradeBaseInfoDO) };
        inline PackageInfo::UpgradeBaseInfoDO getUpgradeBaseInfoDO() { DARABONBA_PTR_GET(upgradeBaseInfoDO_, PackageInfo::UpgradeBaseInfoDO) };
        inline PackageInfo& setUpgradeBaseInfoDO(const PackageInfo::UpgradeBaseInfoDO & upgradeBaseInfoDO) { DARABONBA_PTR_SET_VALUE(upgradeBaseInfoDO_, upgradeBaseInfoDO) };
        inline PackageInfo& setUpgradeBaseInfoDO(PackageInfo::UpgradeBaseInfoDO && upgradeBaseInfoDO) { DARABONBA_PTR_SET_RVALUE(upgradeBaseInfoDO_, upgradeBaseInfoDO) };


      protected:
        shared_ptr<PackageInfo::MobileTestFlightConfigDO> mobileTestFlightConfigDO_ {};
        shared_ptr<PackageInfo::UpgradeBaseInfoDO> upgradeBaseInfoDO_ {};
      };

      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->packageInfo_ == nullptr && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline GetPackageResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // packageInfo Field Functions 
      bool hasPackageInfo() const { return this->packageInfo_ != nullptr;};
      void deletePackageInfo() { this->packageInfo_ = nullptr;};
      inline const GetPackageResult::PackageInfo & getPackageInfo() const { DARABONBA_PTR_GET_CONST(packageInfo_, GetPackageResult::PackageInfo) };
      inline GetPackageResult::PackageInfo getPackageInfo() { DARABONBA_PTR_GET(packageInfo_, GetPackageResult::PackageInfo) };
      inline GetPackageResult& setPackageInfo(const GetPackageResult::PackageInfo & packageInfo) { DARABONBA_PTR_SET_VALUE(packageInfo_, packageInfo) };
      inline GetPackageResult& setPackageInfo(GetPackageResult::PackageInfo && packageInfo) { DARABONBA_PTR_SET_RVALUE(packageInfo_, packageInfo) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline GetPackageResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline GetPackageResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline GetPackageResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<GetPackageResult::PackageInfo> packageInfo_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->getPackageResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // getPackageResult Field Functions 
    bool hasGetPackageResult() const { return this->getPackageResult_ != nullptr;};
    void deleteGetPackageResult() { this->getPackageResult_ = nullptr;};
    inline const GetMcubeUpgradePackageInfoResponseBody::GetPackageResult & getGetPackageResult() const { DARABONBA_PTR_GET_CONST(getPackageResult_, GetMcubeUpgradePackageInfoResponseBody::GetPackageResult) };
    inline GetMcubeUpgradePackageInfoResponseBody::GetPackageResult getGetPackageResult() { DARABONBA_PTR_GET(getPackageResult_, GetMcubeUpgradePackageInfoResponseBody::GetPackageResult) };
    inline GetMcubeUpgradePackageInfoResponseBody& setGetPackageResult(const GetMcubeUpgradePackageInfoResponseBody::GetPackageResult & getPackageResult) { DARABONBA_PTR_SET_VALUE(getPackageResult_, getPackageResult) };
    inline GetMcubeUpgradePackageInfoResponseBody& setGetPackageResult(GetMcubeUpgradePackageInfoResponseBody::GetPackageResult && getPackageResult) { DARABONBA_PTR_SET_RVALUE(getPackageResult_, getPackageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMcubeUpgradePackageInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline GetMcubeUpgradePackageInfoResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline GetMcubeUpgradePackageInfoResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<GetMcubeUpgradePackageInfoResponseBody::GetPackageResult> getPackageResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif
