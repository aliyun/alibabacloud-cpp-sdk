// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTENANTAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTENANTAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20210602
{
namespace Models
{
  class ListTenantAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTenantAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTenantAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTenantAppResponseBody() = default ;
    ListTenantAppResponseBody(const ListTenantAppResponseBody &) = default ;
    ListTenantAppResponseBody(ListTenantAppResponseBody &&) = default ;
    ListTenantAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTenantAppResponseBody() = default ;
    ListTenantAppResponseBody& operator=(const ListTenantAppResponseBody &) = default ;
    ListTenantAppResponseBody& operator=(ListTenantAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AdminTag, adminTag_);
        DARABONBA_PTR_TO_JSON(AppAdminTag, appAdminTag_);
        DARABONBA_PTR_TO_JSON(AppRegInfo, appRegInfo_);
        DARABONBA_PTR_TO_JSON(AppTag, appTag_);
        DARABONBA_PTR_TO_JSON(AppUid, appUid_);
        DARABONBA_PTR_TO_JSON(AuthType, authType_);
        DARABONBA_PTR_TO_JSON(AutoDeleteFlag, autoDeleteFlag_);
        DARABONBA_PTR_TO_JSON(AutoInstallFlag, autoInstallFlag_);
        DARABONBA_PTR_TO_JSON(AutoInstallType, autoInstallType_);
        DARABONBA_PTR_TO_JSON(AutoInstallmentType, autoInstallmentType_);
        DARABONBA_PTR_TO_JSON(CateId, cateId_);
        DARABONBA_PTR_TO_JSON(CateName, cateName_);
        DARABONBA_PTR_TO_JSON(ClusterUid, clusterUid_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Developer, developer_);
        DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
        DARABONBA_PTR_TO_JSON(DistributeType, distributeType_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Extend, extend_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(FileRealName, fileRealName_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(HasCert, hasCert_);
        DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
        DARABONBA_PTR_TO_JSON(IconUrlInternal, iconUrlInternal_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Install, install_);
        DARABONBA_PTR_TO_JSON(InstallMode, installMode_);
        DARABONBA_PTR_TO_JSON(IsAdmin, isAdmin_);
        DARABONBA_PTR_TO_JSON(IsFree, isFree_);
        DARABONBA_PTR_TO_JSON(IsGame, isGame_);
        DARABONBA_PTR_TO_JSON(IsWhiteList, isWhiteList_);
        DARABONBA_PTR_TO_JSON(ItemCode, itemCode_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(LicenseType, licenseType_);
        DARABONBA_PTR_TO_JSON(ManageCateEnName, manageCateEnName_);
        DARABONBA_PTR_TO_JSON(ManageCateId, manageCateId_);
        DARABONBA_PTR_TO_JSON(ManageCateName, manageCateName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OriginAppType, originAppType_);
        DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(OwnerOs, ownerOs_);
        DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(PublishDate, publishDate_);
        DARABONBA_PTR_TO_JSON(PublishType, publishType_);
        DARABONBA_PTR_TO_JSON(SandboxMode, sandboxMode_);
        DARABONBA_PTR_TO_JSON(SearchTag, searchTag_);
        DARABONBA_PTR_TO_JSON(SilenceDeleteFlag, silenceDeleteFlag_);
        DARABONBA_PTR_TO_JSON(SilenceDeleteParam, silenceDeleteParam_);
        DARABONBA_PTR_TO_JSON(SilenceFlag, silenceFlag_);
        DARABONBA_PTR_TO_JSON(SilenceParam, silenceParam_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubAppType, subAppType_);
        DARABONBA_PTR_TO_JSON(SubSourceType, subSourceType_);
        DARABONBA_PTR_TO_JSON(SubscribeCount, subscribeCount_);
        DARABONBA_PTR_TO_JSON(SupplierId, supplierId_);
        DARABONBA_PTR_TO_JSON(UserTag, userTag_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(VersionName, versionName_);
        DARABONBA_PTR_TO_JSON(WamFileName, wamFileName_);
        DARABONBA_PTR_TO_JSON(WamFilePath, wamFilePath_);
        DARABONBA_PTR_TO_JSON(WamFileRealName, wamFileRealName_);
        DARABONBA_PTR_TO_JSON(WamFileSize, wamFileSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AdminTag, adminTag_);
        DARABONBA_PTR_FROM_JSON(AppAdminTag, appAdminTag_);
        DARABONBA_PTR_FROM_JSON(AppRegInfo, appRegInfo_);
        DARABONBA_PTR_FROM_JSON(AppTag, appTag_);
        DARABONBA_PTR_FROM_JSON(AppUid, appUid_);
        DARABONBA_PTR_FROM_JSON(AuthType, authType_);
        DARABONBA_PTR_FROM_JSON(AutoDeleteFlag, autoDeleteFlag_);
        DARABONBA_PTR_FROM_JSON(AutoInstallFlag, autoInstallFlag_);
        DARABONBA_PTR_FROM_JSON(AutoInstallType, autoInstallType_);
        DARABONBA_PTR_FROM_JSON(AutoInstallmentType, autoInstallmentType_);
        DARABONBA_PTR_FROM_JSON(CateId, cateId_);
        DARABONBA_PTR_FROM_JSON(CateName, cateName_);
        DARABONBA_PTR_FROM_JSON(ClusterUid, clusterUid_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Developer, developer_);
        DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
        DARABONBA_PTR_FROM_JSON(DistributeType, distributeType_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Extend, extend_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(FileRealName, fileRealName_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(HasCert, hasCert_);
        DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
        DARABONBA_PTR_FROM_JSON(IconUrlInternal, iconUrlInternal_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Install, install_);
        DARABONBA_PTR_FROM_JSON(InstallMode, installMode_);
        DARABONBA_PTR_FROM_JSON(IsAdmin, isAdmin_);
        DARABONBA_PTR_FROM_JSON(IsFree, isFree_);
        DARABONBA_PTR_FROM_JSON(IsGame, isGame_);
        DARABONBA_PTR_FROM_JSON(IsWhiteList, isWhiteList_);
        DARABONBA_PTR_FROM_JSON(ItemCode, itemCode_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(LicenseType, licenseType_);
        DARABONBA_PTR_FROM_JSON(ManageCateEnName, manageCateEnName_);
        DARABONBA_PTR_FROM_JSON(ManageCateId, manageCateId_);
        DARABONBA_PTR_FROM_JSON(ManageCateName, manageCateName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OriginAppType, originAppType_);
        DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(OwnerOs, ownerOs_);
        DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(PublishDate, publishDate_);
        DARABONBA_PTR_FROM_JSON(PublishType, publishType_);
        DARABONBA_PTR_FROM_JSON(SandboxMode, sandboxMode_);
        DARABONBA_PTR_FROM_JSON(SearchTag, searchTag_);
        DARABONBA_PTR_FROM_JSON(SilenceDeleteFlag, silenceDeleteFlag_);
        DARABONBA_PTR_FROM_JSON(SilenceDeleteParam, silenceDeleteParam_);
        DARABONBA_PTR_FROM_JSON(SilenceFlag, silenceFlag_);
        DARABONBA_PTR_FROM_JSON(SilenceParam, silenceParam_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubAppType, subAppType_);
        DARABONBA_PTR_FROM_JSON(SubSourceType, subSourceType_);
        DARABONBA_PTR_FROM_JSON(SubscribeCount, subscribeCount_);
        DARABONBA_PTR_FROM_JSON(SupplierId, supplierId_);
        DARABONBA_PTR_FROM_JSON(UserTag, userTag_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
        DARABONBA_PTR_FROM_JSON(WamFileName, wamFileName_);
        DARABONBA_PTR_FROM_JSON(WamFilePath, wamFilePath_);
        DARABONBA_PTR_FROM_JSON(WamFileRealName, wamFileRealName_);
        DARABONBA_PTR_FROM_JSON(WamFileSize, wamFileSize_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->adminTag_ == nullptr
        && this->appAdminTag_ == nullptr && this->appRegInfo_ == nullptr && this->appTag_ == nullptr && this->appUid_ == nullptr && this->authType_ == nullptr
        && this->autoDeleteFlag_ == nullptr && this->autoInstallFlag_ == nullptr && this->autoInstallType_ == nullptr && this->autoInstallmentType_ == nullptr && this->cateId_ == nullptr
        && this->cateName_ == nullptr && this->clusterUid_ == nullptr && this->description_ == nullptr && this->developer_ == nullptr && this->discountPrice_ == nullptr
        && this->distributeType_ == nullptr && this->expireTime_ == nullptr && this->extend_ == nullptr && this->fileName_ == nullptr && this->filePath_ == nullptr
        && this->fileRealName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->hasCert_ == nullptr && this->iconUrl_ == nullptr
        && this->iconUrlInternal_ == nullptr && this->id_ == nullptr && this->install_ == nullptr && this->installMode_ == nullptr && this->isAdmin_ == nullptr
        && this->isFree_ == nullptr && this->isGame_ == nullptr && this->isWhiteList_ == nullptr && this->itemCode_ == nullptr && this->labels_ == nullptr
        && this->licenseType_ == nullptr && this->manageCateEnName_ == nullptr && this->manageCateId_ == nullptr && this->manageCateName_ == nullptr && this->name_ == nullptr
        && this->originAppType_ == nullptr && this->originalPrice_ == nullptr && this->osType_ == nullptr && this->ownerOs_ == nullptr && this->paymentType_ == nullptr
        && this->price_ == nullptr && this->priority_ == nullptr && this->publishDate_ == nullptr && this->publishType_ == nullptr && this->sandboxMode_ == nullptr
        && this->searchTag_ == nullptr && this->silenceDeleteFlag_ == nullptr && this->silenceDeleteParam_ == nullptr && this->silenceFlag_ == nullptr && this->silenceParam_ == nullptr
        && this->size_ == nullptr && this->sourceType_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->subAppType_ == nullptr
        && this->subSourceType_ == nullptr && this->subscribeCount_ == nullptr && this->supplierId_ == nullptr && this->userTag_ == nullptr && this->version_ == nullptr
        && this->versionName_ == nullptr && this->wamFileName_ == nullptr && this->wamFilePath_ == nullptr && this->wamFileRealName_ == nullptr && this->wamFileSize_ == nullptr; };
      // adminTag Field Functions 
      bool hasAdminTag() const { return this->adminTag_ != nullptr;};
      void deleteAdminTag() { this->adminTag_ = nullptr;};
      inline const vector<string> & getAdminTag() const { DARABONBA_PTR_GET_CONST(adminTag_, vector<string>) };
      inline vector<string> getAdminTag() { DARABONBA_PTR_GET(adminTag_, vector<string>) };
      inline Data& setAdminTag(const vector<string> & adminTag) { DARABONBA_PTR_SET_VALUE(adminTag_, adminTag) };
      inline Data& setAdminTag(vector<string> && adminTag) { DARABONBA_PTR_SET_RVALUE(adminTag_, adminTag) };


      // appAdminTag Field Functions 
      bool hasAppAdminTag() const { return this->appAdminTag_ != nullptr;};
      void deleteAppAdminTag() { this->appAdminTag_ = nullptr;};
      inline string getAppAdminTag() const { DARABONBA_PTR_GET_DEFAULT(appAdminTag_, "") };
      inline Data& setAppAdminTag(string appAdminTag) { DARABONBA_PTR_SET_VALUE(appAdminTag_, appAdminTag) };


      // appRegInfo Field Functions 
      bool hasAppRegInfo() const { return this->appRegInfo_ != nullptr;};
      void deleteAppRegInfo() { this->appRegInfo_ = nullptr;};
      inline string getAppRegInfo() const { DARABONBA_PTR_GET_DEFAULT(appRegInfo_, "") };
      inline Data& setAppRegInfo(string appRegInfo) { DARABONBA_PTR_SET_VALUE(appRegInfo_, appRegInfo) };


      // appTag Field Functions 
      bool hasAppTag() const { return this->appTag_ != nullptr;};
      void deleteAppTag() { this->appTag_ = nullptr;};
      inline const vector<string> & getAppTag() const { DARABONBA_PTR_GET_CONST(appTag_, vector<string>) };
      inline vector<string> getAppTag() { DARABONBA_PTR_GET(appTag_, vector<string>) };
      inline Data& setAppTag(const vector<string> & appTag) { DARABONBA_PTR_SET_VALUE(appTag_, appTag) };
      inline Data& setAppTag(vector<string> && appTag) { DARABONBA_PTR_SET_RVALUE(appTag_, appTag) };


      // appUid Field Functions 
      bool hasAppUid() const { return this->appUid_ != nullptr;};
      void deleteAppUid() { this->appUid_ = nullptr;};
      inline string getAppUid() const { DARABONBA_PTR_GET_DEFAULT(appUid_, "") };
      inline Data& setAppUid(string appUid) { DARABONBA_PTR_SET_VALUE(appUid_, appUid) };


      // authType Field Functions 
      bool hasAuthType() const { return this->authType_ != nullptr;};
      void deleteAuthType() { this->authType_ = nullptr;};
      inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
      inline Data& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


      // autoDeleteFlag Field Functions 
      bool hasAutoDeleteFlag() const { return this->autoDeleteFlag_ != nullptr;};
      void deleteAutoDeleteFlag() { this->autoDeleteFlag_ = nullptr;};
      inline bool getAutoDeleteFlag() const { DARABONBA_PTR_GET_DEFAULT(autoDeleteFlag_, false) };
      inline Data& setAutoDeleteFlag(bool autoDeleteFlag) { DARABONBA_PTR_SET_VALUE(autoDeleteFlag_, autoDeleteFlag) };


      // autoInstallFlag Field Functions 
      bool hasAutoInstallFlag() const { return this->autoInstallFlag_ != nullptr;};
      void deleteAutoInstallFlag() { this->autoInstallFlag_ = nullptr;};
      inline bool getAutoInstallFlag() const { DARABONBA_PTR_GET_DEFAULT(autoInstallFlag_, false) };
      inline Data& setAutoInstallFlag(bool autoInstallFlag) { DARABONBA_PTR_SET_VALUE(autoInstallFlag_, autoInstallFlag) };


      // autoInstallType Field Functions 
      bool hasAutoInstallType() const { return this->autoInstallType_ != nullptr;};
      void deleteAutoInstallType() { this->autoInstallType_ = nullptr;};
      inline string getAutoInstallType() const { DARABONBA_PTR_GET_DEFAULT(autoInstallType_, "") };
      inline Data& setAutoInstallType(string autoInstallType) { DARABONBA_PTR_SET_VALUE(autoInstallType_, autoInstallType) };


      // autoInstallmentType Field Functions 
      bool hasAutoInstallmentType() const { return this->autoInstallmentType_ != nullptr;};
      void deleteAutoInstallmentType() { this->autoInstallmentType_ = nullptr;};
      inline int32_t getAutoInstallmentType() const { DARABONBA_PTR_GET_DEFAULT(autoInstallmentType_, 0) };
      inline Data& setAutoInstallmentType(int32_t autoInstallmentType) { DARABONBA_PTR_SET_VALUE(autoInstallmentType_, autoInstallmentType) };


      // cateId Field Functions 
      bool hasCateId() const { return this->cateId_ != nullptr;};
      void deleteCateId() { this->cateId_ = nullptr;};
      inline int32_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0) };
      inline Data& setCateId(int32_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


      // cateName Field Functions 
      bool hasCateName() const { return this->cateName_ != nullptr;};
      void deleteCateName() { this->cateName_ = nullptr;};
      inline string getCateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
      inline Data& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


      // clusterUid Field Functions 
      bool hasClusterUid() const { return this->clusterUid_ != nullptr;};
      void deleteClusterUid() { this->clusterUid_ = nullptr;};
      inline string getClusterUid() const { DARABONBA_PTR_GET_DEFAULT(clusterUid_, "") };
      inline Data& setClusterUid(string clusterUid) { DARABONBA_PTR_SET_VALUE(clusterUid_, clusterUid) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // developer Field Functions 
      bool hasDeveloper() const { return this->developer_ != nullptr;};
      void deleteDeveloper() { this->developer_ = nullptr;};
      inline string getDeveloper() const { DARABONBA_PTR_GET_DEFAULT(developer_, "") };
      inline Data& setDeveloper(string developer) { DARABONBA_PTR_SET_VALUE(developer_, developer) };


      // discountPrice Field Functions 
      bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
      void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
      inline double getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
      inline Data& setDiscountPrice(double discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


      // distributeType Field Functions 
      bool hasDistributeType() const { return this->distributeType_ != nullptr;};
      void deleteDistributeType() { this->distributeType_ = nullptr;};
      inline string getDistributeType() const { DARABONBA_PTR_GET_DEFAULT(distributeType_, "") };
      inline Data& setDistributeType(string distributeType) { DARABONBA_PTR_SET_VALUE(distributeType_, distributeType) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Data& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // extend Field Functions 
      bool hasExtend() const { return this->extend_ != nullptr;};
      void deleteExtend() { this->extend_ = nullptr;};
      inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
      inline Data& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Data& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline Data& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // fileRealName Field Functions 
      bool hasFileRealName() const { return this->fileRealName_ != nullptr;};
      void deleteFileRealName() { this->fileRealName_ = nullptr;};
      inline string getFileRealName() const { DARABONBA_PTR_GET_DEFAULT(fileRealName_, "") };
      inline Data& setFileRealName(string fileRealName) { DARABONBA_PTR_SET_VALUE(fileRealName_, fileRealName) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // hasCert Field Functions 
      bool hasHasCert() const { return this->hasCert_ != nullptr;};
      void deleteHasCert() { this->hasCert_ = nullptr;};
      inline bool getHasCert() const { DARABONBA_PTR_GET_DEFAULT(hasCert_, false) };
      inline Data& setHasCert(bool hasCert) { DARABONBA_PTR_SET_VALUE(hasCert_, hasCert) };


      // iconUrl Field Functions 
      bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
      void deleteIconUrl() { this->iconUrl_ = nullptr;};
      inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
      inline Data& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


      // iconUrlInternal Field Functions 
      bool hasIconUrlInternal() const { return this->iconUrlInternal_ != nullptr;};
      void deleteIconUrlInternal() { this->iconUrlInternal_ = nullptr;};
      inline string getIconUrlInternal() const { DARABONBA_PTR_GET_DEFAULT(iconUrlInternal_, "") };
      inline Data& setIconUrlInternal(string iconUrlInternal) { DARABONBA_PTR_SET_VALUE(iconUrlInternal_, iconUrlInternal) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline Data& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // install Field Functions 
      bool hasInstall() const { return this->install_ != nullptr;};
      void deleteInstall() { this->install_ = nullptr;};
      inline bool getInstall() const { DARABONBA_PTR_GET_DEFAULT(install_, false) };
      inline Data& setInstall(bool install) { DARABONBA_PTR_SET_VALUE(install_, install) };


      // installMode Field Functions 
      bool hasInstallMode() const { return this->installMode_ != nullptr;};
      void deleteInstallMode() { this->installMode_ = nullptr;};
      inline int32_t getInstallMode() const { DARABONBA_PTR_GET_DEFAULT(installMode_, 0) };
      inline Data& setInstallMode(int32_t installMode) { DARABONBA_PTR_SET_VALUE(installMode_, installMode) };


      // isAdmin Field Functions 
      bool hasIsAdmin() const { return this->isAdmin_ != nullptr;};
      void deleteIsAdmin() { this->isAdmin_ = nullptr;};
      inline bool getIsAdmin() const { DARABONBA_PTR_GET_DEFAULT(isAdmin_, false) };
      inline Data& setIsAdmin(bool isAdmin) { DARABONBA_PTR_SET_VALUE(isAdmin_, isAdmin) };


      // isFree Field Functions 
      bool hasIsFree() const { return this->isFree_ != nullptr;};
      void deleteIsFree() { this->isFree_ = nullptr;};
      inline string getIsFree() const { DARABONBA_PTR_GET_DEFAULT(isFree_, "") };
      inline Data& setIsFree(string isFree) { DARABONBA_PTR_SET_VALUE(isFree_, isFree) };


      // isGame Field Functions 
      bool hasIsGame() const { return this->isGame_ != nullptr;};
      void deleteIsGame() { this->isGame_ = nullptr;};
      inline bool getIsGame() const { DARABONBA_PTR_GET_DEFAULT(isGame_, false) };
      inline Data& setIsGame(bool isGame) { DARABONBA_PTR_SET_VALUE(isGame_, isGame) };


      // isWhiteList Field Functions 
      bool hasIsWhiteList() const { return this->isWhiteList_ != nullptr;};
      void deleteIsWhiteList() { this->isWhiteList_ = nullptr;};
      inline int32_t getIsWhiteList() const { DARABONBA_PTR_GET_DEFAULT(isWhiteList_, 0) };
      inline Data& setIsWhiteList(int32_t isWhiteList) { DARABONBA_PTR_SET_VALUE(isWhiteList_, isWhiteList) };


      // itemCode Field Functions 
      bool hasItemCode() const { return this->itemCode_ != nullptr;};
      void deleteItemCode() { this->itemCode_ = nullptr;};
      inline string getItemCode() const { DARABONBA_PTR_GET_DEFAULT(itemCode_, "") };
      inline Data& setItemCode(string itemCode) { DARABONBA_PTR_SET_VALUE(itemCode_, itemCode) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
      inline Data& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


      // licenseType Field Functions 
      bool hasLicenseType() const { return this->licenseType_ != nullptr;};
      void deleteLicenseType() { this->licenseType_ = nullptr;};
      inline string getLicenseType() const { DARABONBA_PTR_GET_DEFAULT(licenseType_, "") };
      inline Data& setLicenseType(string licenseType) { DARABONBA_PTR_SET_VALUE(licenseType_, licenseType) };


      // manageCateEnName Field Functions 
      bool hasManageCateEnName() const { return this->manageCateEnName_ != nullptr;};
      void deleteManageCateEnName() { this->manageCateEnName_ = nullptr;};
      inline string getManageCateEnName() const { DARABONBA_PTR_GET_DEFAULT(manageCateEnName_, "") };
      inline Data& setManageCateEnName(string manageCateEnName) { DARABONBA_PTR_SET_VALUE(manageCateEnName_, manageCateEnName) };


      // manageCateId Field Functions 
      bool hasManageCateId() const { return this->manageCateId_ != nullptr;};
      void deleteManageCateId() { this->manageCateId_ = nullptr;};
      inline int32_t getManageCateId() const { DARABONBA_PTR_GET_DEFAULT(manageCateId_, 0) };
      inline Data& setManageCateId(int32_t manageCateId) { DARABONBA_PTR_SET_VALUE(manageCateId_, manageCateId) };


      // manageCateName Field Functions 
      bool hasManageCateName() const { return this->manageCateName_ != nullptr;};
      void deleteManageCateName() { this->manageCateName_ = nullptr;};
      inline string getManageCateName() const { DARABONBA_PTR_GET_DEFAULT(manageCateName_, "") };
      inline Data& setManageCateName(string manageCateName) { DARABONBA_PTR_SET_VALUE(manageCateName_, manageCateName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // originAppType Field Functions 
      bool hasOriginAppType() const { return this->originAppType_ != nullptr;};
      void deleteOriginAppType() { this->originAppType_ = nullptr;};
      inline string getOriginAppType() const { DARABONBA_PTR_GET_DEFAULT(originAppType_, "") };
      inline Data& setOriginAppType(string originAppType) { DARABONBA_PTR_SET_VALUE(originAppType_, originAppType) };


      // originalPrice Field Functions 
      bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
      void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
      inline double getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
      inline Data& setOriginalPrice(double originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Data& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // ownerOs Field Functions 
      bool hasOwnerOs() const { return this->ownerOs_ != nullptr;};
      void deleteOwnerOs() { this->ownerOs_ = nullptr;};
      inline string getOwnerOs() const { DARABONBA_PTR_GET_DEFAULT(ownerOs_, "") };
      inline Data& setOwnerOs(string ownerOs) { DARABONBA_PTR_SET_VALUE(ownerOs_, ownerOs) };


      // paymentType Field Functions 
      bool hasPaymentType() const { return this->paymentType_ != nullptr;};
      void deletePaymentType() { this->paymentType_ = nullptr;};
      inline int32_t getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, 0) };
      inline Data& setPaymentType(int32_t paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline string getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
      inline Data& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline Data& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // publishDate Field Functions 
      bool hasPublishDate() const { return this->publishDate_ != nullptr;};
      void deletePublishDate() { this->publishDate_ = nullptr;};
      inline string getPublishDate() const { DARABONBA_PTR_GET_DEFAULT(publishDate_, "") };
      inline Data& setPublishDate(string publishDate) { DARABONBA_PTR_SET_VALUE(publishDate_, publishDate) };


      // publishType Field Functions 
      bool hasPublishType() const { return this->publishType_ != nullptr;};
      void deletePublishType() { this->publishType_ = nullptr;};
      inline string getPublishType() const { DARABONBA_PTR_GET_DEFAULT(publishType_, "") };
      inline Data& setPublishType(string publishType) { DARABONBA_PTR_SET_VALUE(publishType_, publishType) };


      // sandboxMode Field Functions 
      bool hasSandboxMode() const { return this->sandboxMode_ != nullptr;};
      void deleteSandboxMode() { this->sandboxMode_ = nullptr;};
      inline int32_t getSandboxMode() const { DARABONBA_PTR_GET_DEFAULT(sandboxMode_, 0) };
      inline Data& setSandboxMode(int32_t sandboxMode) { DARABONBA_PTR_SET_VALUE(sandboxMode_, sandboxMode) };


      // searchTag Field Functions 
      bool hasSearchTag() const { return this->searchTag_ != nullptr;};
      void deleteSearchTag() { this->searchTag_ = nullptr;};
      inline string getSearchTag() const { DARABONBA_PTR_GET_DEFAULT(searchTag_, "") };
      inline Data& setSearchTag(string searchTag) { DARABONBA_PTR_SET_VALUE(searchTag_, searchTag) };


      // silenceDeleteFlag Field Functions 
      bool hasSilenceDeleteFlag() const { return this->silenceDeleteFlag_ != nullptr;};
      void deleteSilenceDeleteFlag() { this->silenceDeleteFlag_ = nullptr;};
      inline int32_t getSilenceDeleteFlag() const { DARABONBA_PTR_GET_DEFAULT(silenceDeleteFlag_, 0) };
      inline Data& setSilenceDeleteFlag(int32_t silenceDeleteFlag) { DARABONBA_PTR_SET_VALUE(silenceDeleteFlag_, silenceDeleteFlag) };


      // silenceDeleteParam Field Functions 
      bool hasSilenceDeleteParam() const { return this->silenceDeleteParam_ != nullptr;};
      void deleteSilenceDeleteParam() { this->silenceDeleteParam_ = nullptr;};
      inline string getSilenceDeleteParam() const { DARABONBA_PTR_GET_DEFAULT(silenceDeleteParam_, "") };
      inline Data& setSilenceDeleteParam(string silenceDeleteParam) { DARABONBA_PTR_SET_VALUE(silenceDeleteParam_, silenceDeleteParam) };


      // silenceFlag Field Functions 
      bool hasSilenceFlag() const { return this->silenceFlag_ != nullptr;};
      void deleteSilenceFlag() { this->silenceFlag_ = nullptr;};
      inline int32_t getSilenceFlag() const { DARABONBA_PTR_GET_DEFAULT(silenceFlag_, 0) };
      inline Data& setSilenceFlag(int32_t silenceFlag) { DARABONBA_PTR_SET_VALUE(silenceFlag_, silenceFlag) };


      // silenceParam Field Functions 
      bool hasSilenceParam() const { return this->silenceParam_ != nullptr;};
      void deleteSilenceParam() { this->silenceParam_ = nullptr;};
      inline string getSilenceParam() const { DARABONBA_PTR_GET_DEFAULT(silenceParam_, "") };
      inline Data& setSilenceParam(string silenceParam) { DARABONBA_PTR_SET_VALUE(silenceParam_, silenceParam) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Data& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Data& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subAppType Field Functions 
      bool hasSubAppType() const { return this->subAppType_ != nullptr;};
      void deleteSubAppType() { this->subAppType_ = nullptr;};
      inline string getSubAppType() const { DARABONBA_PTR_GET_DEFAULT(subAppType_, "") };
      inline Data& setSubAppType(string subAppType) { DARABONBA_PTR_SET_VALUE(subAppType_, subAppType) };


      // subSourceType Field Functions 
      bool hasSubSourceType() const { return this->subSourceType_ != nullptr;};
      void deleteSubSourceType() { this->subSourceType_ = nullptr;};
      inline string getSubSourceType() const { DARABONBA_PTR_GET_DEFAULT(subSourceType_, "") };
      inline Data& setSubSourceType(string subSourceType) { DARABONBA_PTR_SET_VALUE(subSourceType_, subSourceType) };


      // subscribeCount Field Functions 
      bool hasSubscribeCount() const { return this->subscribeCount_ != nullptr;};
      void deleteSubscribeCount() { this->subscribeCount_ = nullptr;};
      inline int64_t getSubscribeCount() const { DARABONBA_PTR_GET_DEFAULT(subscribeCount_, 0L) };
      inline Data& setSubscribeCount(int64_t subscribeCount) { DARABONBA_PTR_SET_VALUE(subscribeCount_, subscribeCount) };


      // supplierId Field Functions 
      bool hasSupplierId() const { return this->supplierId_ != nullptr;};
      void deleteSupplierId() { this->supplierId_ = nullptr;};
      inline int64_t getSupplierId() const { DARABONBA_PTR_GET_DEFAULT(supplierId_, 0L) };
      inline Data& setSupplierId(int64_t supplierId) { DARABONBA_PTR_SET_VALUE(supplierId_, supplierId) };


      // userTag Field Functions 
      bool hasUserTag() const { return this->userTag_ != nullptr;};
      void deleteUserTag() { this->userTag_ = nullptr;};
      inline const vector<string> & getUserTag() const { DARABONBA_PTR_GET_CONST(userTag_, vector<string>) };
      inline vector<string> getUserTag() { DARABONBA_PTR_GET(userTag_, vector<string>) };
      inline Data& setUserTag(const vector<string> & userTag) { DARABONBA_PTR_SET_VALUE(userTag_, userTag) };
      inline Data& setUserTag(vector<string> && userTag) { DARABONBA_PTR_SET_RVALUE(userTag_, userTag) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // versionName Field Functions 
      bool hasVersionName() const { return this->versionName_ != nullptr;};
      void deleteVersionName() { this->versionName_ = nullptr;};
      inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
      inline Data& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


      // wamFileName Field Functions 
      bool hasWamFileName() const { return this->wamFileName_ != nullptr;};
      void deleteWamFileName() { this->wamFileName_ = nullptr;};
      inline string getWamFileName() const { DARABONBA_PTR_GET_DEFAULT(wamFileName_, "") };
      inline Data& setWamFileName(string wamFileName) { DARABONBA_PTR_SET_VALUE(wamFileName_, wamFileName) };


      // wamFilePath Field Functions 
      bool hasWamFilePath() const { return this->wamFilePath_ != nullptr;};
      void deleteWamFilePath() { this->wamFilePath_ = nullptr;};
      inline string getWamFilePath() const { DARABONBA_PTR_GET_DEFAULT(wamFilePath_, "") };
      inline Data& setWamFilePath(string wamFilePath) { DARABONBA_PTR_SET_VALUE(wamFilePath_, wamFilePath) };


      // wamFileRealName Field Functions 
      bool hasWamFileRealName() const { return this->wamFileRealName_ != nullptr;};
      void deleteWamFileRealName() { this->wamFileRealName_ = nullptr;};
      inline string getWamFileRealName() const { DARABONBA_PTR_GET_DEFAULT(wamFileRealName_, "") };
      inline Data& setWamFileRealName(string wamFileRealName) { DARABONBA_PTR_SET_VALUE(wamFileRealName_, wamFileRealName) };


      // wamFileSize Field Functions 
      bool hasWamFileSize() const { return this->wamFileSize_ != nullptr;};
      void deleteWamFileSize() { this->wamFileSize_ = nullptr;};
      inline int64_t getWamFileSize() const { DARABONBA_PTR_GET_DEFAULT(wamFileSize_, 0L) };
      inline Data& setWamFileSize(int64_t wamFileSize) { DARABONBA_PTR_SET_VALUE(wamFileSize_, wamFileSize) };


    protected:
      // An internal field. We do not recommend that you use this field.
      shared_ptr<vector<string>> adminTag_ {};
      // An internal field. We do not recommend that you use this field.
      shared_ptr<string> appAdminTag_ {};
      // The application registry identification information, returned as a string. This value can be used to match the name of an application registry entry.
      shared_ptr<string> appRegInfo_ {};
      // An internal field. We do not recommend that you use this field.
      shared_ptr<vector<string>> appTag_ {};
      // The application UID string, which is a different identifier from the numeric Id field.
      shared_ptr<string> appUid_ {};
      // The authorization dimension of the application.
      // 
      // Valid values:
      // - auth_type_user: Authorized by user.
      // - auth_type_resource_group: Authorized by resource group.
      shared_ptr<string> authType_ {};
      // **[Deprecated]**
      shared_ptr<bool> autoDeleteFlag_ {};
      // **[Deprecated]**
      shared_ptr<bool> autoInstallFlag_ {};
      // **[Deprecated]**
      shared_ptr<string> autoInstallType_ {};
      // The new automatic installation scope policy. Use this field together with AuthType to determine the authorization dimension. Valid values:
      // - 0: Automatically install for all visible users or resource groups.
      // - 1: Automatically install for some visible users or resource groups.
      // - 2: Disable automatic installation.
      // - 99: Unknown policy.
      // 
      // This field describes the configuration scope and does not indicate that the installation has been completed on the endpoint.
      shared_ptr<int32_t> autoInstallmentType_ {};
      // The display category ID of the application. The category ID is a dynamic identifier and is not a fixed enumeration.
      shared_ptr<int32_t> cateId_ {};
      // The display category name of the application.
      shared_ptr<string> cateName_ {};
      // **[Deprecated]**
      shared_ptr<string> clusterUid_ {};
      // The description of the application.
      shared_ptr<string> description_ {};
      // The name of the application developer.
      shared_ptr<string> developer_ {};
      // **[Deprecated]**
      shared_ptr<double> discountPrice_ {};
      // The authorization distribution scope of the application. This field must be interpreted together with AuthType. An empty value does not necessarily mean that the application is not distributed.
      // 
      // Valid values:
      // - ALL: Distributed to all.
      // - DESIGNATED: Distributed to a specified scope.
      // - NOTDISTRO: Not distributed.
      // - UNKNOWN: Unknown scope.
      // 
      // The distribution target is determined by AuthType.
      shared_ptr<string> distributeType_ {};
      // The authorization end time of the application. The value is returned as a string with a time zone, in the format of date, the letter T, hours-minutes-seconds, 3-digit milliseconds, and a time zone offset without colons. The +0000 in the example indicates UTC. This field may be empty or not returned if no value is available.
      shared_ptr<string> expireTime_ {};
      // The extended information of the application, returned as a string. There is no unified fixed field structure.
      shared_ptr<string> extend_ {};
      // The storage file name of the installation package, which may differ from the original file name.
      shared_ptr<string> fileName_ {};
      // The storage path of the installation package. This value is not a directly accessible download URL.
      shared_ptr<string> filePath_ {};
      // The original file name of the installation package.
      shared_ptr<string> fileRealName_ {};
      // The creation time of the application record. The value is returned as a string with a time zone, in the format of date, the letter T, hours-minutes-seconds, 3-digit milliseconds, and a time zone offset without colons. The +0000 in the example indicates UTC. This field may be empty or not returned if no value is available.
      shared_ptr<string> gmtCreate_ {};
      // The last modification time of the application record. The value is returned as a string with a time zone, in the format of date, the letter T, hours-minutes-seconds, 3-digit milliseconds, and a time zone offset without colons. The +0000 in the example indicates UTC. This field may be empty or not returned if no value is available.
      shared_ptr<string> gmtModified_ {};
      // **[Deprecated]**
      shared_ptr<bool> hasCert_ {};
      // The icon URL of the application.
      shared_ptr<string> iconUrl_ {};
      // The internal network icon URL of the application. Use this URL only when the corresponding network access conditions are met. The domain name in the example is for illustrative purposes only.
      shared_ptr<string> iconUrlInternal_ {};
      // The numeric ID of the application, used as the identity of the application and to associate what to do next.
      shared_ptr<int32_t> id_ {};
      // **[Deprecated]**
      shared_ptr<bool> install_ {};
      // **[Deprecated]**
      shared_ptr<int32_t> installMode_ {};
      // Specifies whether elevated privilege installation is configured. This does not indicate the administrator identity of the caller.
      // 
      // Valid values:
      // - true: Elevated privilege installation is configured.
      // - false: Elevated privilege installation is not configured.
      shared_ptr<bool> isAdmin_ {};
      // **[Deprecated]**
      shared_ptr<string> isFree_ {};
      // **[Deprecated]**
      shared_ptr<bool> isGame_ {};
      // An internal field. We do not recommend that you use this field.
      shared_ptr<int32_t> isWhiteList_ {};
      // **[Deprecated]**
      shared_ptr<string> itemCode_ {};
      // An internal field. We do not recommend that you use this field.
      shared_ptr<string> labels_ {};
      // An internal field. We do not recommend that you use this field.
      shared_ptr<string> licenseType_ {};
      // The English name of the management category of the application.
      shared_ptr<string> manageCateEnName_ {};
      // The management category ID of the application, which may differ from the display category CateId.
      shared_ptr<int32_t> manageCateId_ {};
      // The management category name of the application.
      shared_ptr<string> manageCateName_ {};
      // The name of the application.
      shared_ptr<string> name_ {};
      // The application type.
      // 
      // Valid values:
      // - ClientBase: Client-based application.
      // - WebBase: Web-based application.
      shared_ptr<string> originAppType_ {};
      // **[Deprecated]**
      shared_ptr<double> originalPrice_ {};
      // The operating system type of the application.
      // 
      // Valid values:
      // - WINDOWS: Windows.
      // - LINUX: Linux.
      // - ANDROID: Android.
      // - UNKNOWN: Unknown operating system.
      shared_ptr<string> osType_ {};
      // **[Deprecated]**
      shared_ptr<string> ownerOs_ {};
      // **[Deprecated]**
      shared_ptr<int32_t> paymentType_ {};
      // **[Deprecated]**
      shared_ptr<string> price_ {};
      // **[Deprecated]**
      shared_ptr<int32_t> priority_ {};
      // The publish time of the application. The value is returned as a string with a time zone, in the format of date, the letter T, hours-minutes-seconds, 3-digit milliseconds, and a time zone offset without colons. The +0000 in the example indicates UTC. This field may be empty or not returned if no value is available.
      shared_ptr<string> publishDate_ {};
      // The customer scope of the application.
      // 
      // Valid values:
      // - ENT: Enterprise.
      // - PER: Individual.
      // - BOTH: Enterprise and individual.
      shared_ptr<string> publishType_ {};
      // **[Deprecated]**
      shared_ptr<int32_t> sandboxMode_ {};
      // An internal field. We do not recommend that you use this field.
      shared_ptr<string> searchTag_ {};
      // **[Deprecated]**
      shared_ptr<int32_t> silenceDeleteFlag_ {};
      // **[Deprecated]**
      shared_ptr<string> silenceDeleteParam_ {};
      // Indicates whether silent installtion is supported. Valid values:
      // - 0: Not supported.
      // - 1: Supported.
      // 
      // This field indicates the application capability and does not represent the actual installation execute result.
      shared_ptr<int32_t> silenceFlag_ {};
      // The silent installtion parameters, used by the corresponding installation flow.
      shared_ptr<string> silenceParam_ {};
      // The size of the installation package.
      shared_ptr<int64_t> size_ {};
      // The application source. Valid values:
      // - MARKET: Alibaba Cloud Marketplace application.
      // - TENANT: Tenant-uploaded application.
      // - UNKNOWN: Unknown source.
      shared_ptr<string> sourceType_ {};
      // The start time of the application authorization. The value is returned as a string with time zone information, in the format of date, the letter T, hours-minutes-seconds, 3-digit milliseconds, and a time zone offset without colons. The +0000 in the example indicates UTC. This field may be empty or not returned if no value is available.
      shared_ptr<string> startTime_ {};
      // The application status. This field does not represent the installation status on the endpoint. Valid values:
      // - NORMAL: Normal.
      // - DELETE: Deleted.
      // - UNCHECK: Not reviewed or not verified.
      // - DISABLE: All versions are unavailable.
      // - UNKNOWN: Unknown status.
      // 
      // **The following historical statuses from the sandbox packaging and publishing process are deprecated. Do not use them: UNPACKED (not packaged), TESTING (packaged, pending testing), UNPUBLISHED (testing completed, not published), PUBLISHED (published).**
      shared_ptr<string> status_ {};
      // **[Deprecated]**
      shared_ptr<string> subAppType_ {};
      // The secondary source of the application. Valid values:
      // - ALI_MARKET: Alibaba Cloud Marketplace.
      // - ISV: Independent software vendor.
      // - OPS: Operations channel.
      // - UNKNOWN: Unknown source.
      shared_ptr<string> subSourceType_ {};
      // **[Deprecated]**
      shared_ptr<int64_t> subscribeCount_ {};
      // The account ID of the application supplier or uploader.
      shared_ptr<int64_t> supplierId_ {};
      // An internal field. We do not recommend that you use this field.
      shared_ptr<vector<string>> userTag_ {};
      // The application version number.
      shared_ptr<string> version_ {};
      // The display name of the application version.
      shared_ptr<string> versionName_ {};
      // **[Deprecated]**
      shared_ptr<string> wamFileName_ {};
      // **[Deprecated]**
      shared_ptr<string> wamFilePath_ {};
      // **[Deprecated]**
      shared_ptr<string> wamFileRealName_ {};
      // **[Deprecated]**
      shared_ptr<int64_t> wamFileSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTenantAppResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListTenantAppResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListTenantAppResponseBody::Data>) };
    inline vector<ListTenantAppResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListTenantAppResponseBody::Data>) };
    inline ListTenantAppResponseBody& setData(const vector<ListTenantAppResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTenantAppResponseBody& setData(vector<ListTenantAppResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTenantAppResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTenantAppResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTenantAppResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTenantAppResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTenantAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTenantAppResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTenantAppResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The business result code, returned as a string. The value is typically "200" when the request is successful.
    shared_ptr<string> code_ {};
    // The list of applications on the current page. Each element represents an application.
    shared_ptr<vector<ListTenantAppResponseBody::Data>> data_ {};
    // The HTTP status code field in the business response. This field may be empty. The actual transmission status is determined by the HTTP response status.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The description of the request processing result.
    shared_ptr<string> message_ {};
    // The actual page number of the query.
    shared_ptr<int32_t> pageNumber_ {};
    // The actual number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request tracking ID. Provide this value when reporting issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was processed successfully. Valid values:
    // - true: Succeeded.
    // - false: Failed.
    // 
    // Refer to the corresponding field descriptions for specific business meanings.
    shared_ptr<bool> success_ {};
    // The total number of applications that match the filter conditions. This value is not equal to the length of the array on the current page.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20210602
#endif
