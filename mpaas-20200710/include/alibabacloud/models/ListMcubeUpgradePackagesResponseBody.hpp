// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEUPGRADEPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEUPGRADEPACKAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
namespace Models
{
  class ListMcubeUpgradePackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeUpgradePackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(ListPackagesResult, listPackagesResult_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeUpgradePackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(ListPackagesResult, listPackagesResult_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMcubeUpgradePackagesResponseBody() = default ;
    ListMcubeUpgradePackagesResponseBody(const ListMcubeUpgradePackagesResponseBody &) = default ;
    ListMcubeUpgradePackagesResponseBody(ListMcubeUpgradePackagesResponseBody &&) = default ;
    ListMcubeUpgradePackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeUpgradePackagesResponseBody() = default ;
    ListMcubeUpgradePackagesResponseBody& operator=(const ListMcubeUpgradePackagesResponseBody &) = default ;
    ListMcubeUpgradePackagesResponseBody& operator=(ListMcubeUpgradePackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListPackagesResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListPackagesResult& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(Packages, packages_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, ListPackagesResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(Packages, packages_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      ListPackagesResult() = default ;
      ListPackagesResult(const ListPackagesResult &) = default ;
      ListPackagesResult(ListPackagesResult &&) = default ;
      ListPackagesResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListPackagesResult() = default ;
      ListPackagesResult& operator=(const ListPackagesResult &) = default ;
      ListPackagesResult& operator=(ListPackagesResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Packages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Packages& obj) { 
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
          DARABONBA_PTR_TO_JSON(Md5, md5_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(NeedCheck, needCheck_);
          DARABONBA_PTR_TO_JSON(PackageType, packageType_);
          DARABONBA_PTR_TO_JSON(Platform, platform_);
          DARABONBA_PTR_TO_JSON(ProductId, productId_);
          DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_TO_JSON(PublishPeriod, publishPeriod_);
          DARABONBA_PTR_TO_JSON(VerificationCode, verificationCode_);
        };
        friend void from_json(const Darabonba::Json& j, Packages& obj) { 
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
          DARABONBA_PTR_FROM_JSON(Md5, md5_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(NeedCheck, needCheck_);
          DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
          DARABONBA_PTR_FROM_JSON(Platform, platform_);
          DARABONBA_PTR_FROM_JSON(ProductId, productId_);
          DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_FROM_JSON(PublishPeriod, publishPeriod_);
          DARABONBA_PTR_FROM_JSON(VerificationCode, verificationCode_);
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
        virtual bool empty() const override { return this->allowCreateTask_ == nullptr
        && this->appCode_ == nullptr && this->appstoreUrl_ == nullptr && this->changeLog_ == nullptr && this->creator_ == nullptr && this->downloadUrl_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->isEnterprise_ == nullptr && this->md5_ == nullptr
        && this->modifier_ == nullptr && this->needCheck_ == nullptr && this->packageType_ == nullptr && this->platform_ == nullptr && this->productId_ == nullptr
        && this->productVersion_ == nullptr && this->publishPeriod_ == nullptr && this->verificationCode_ == nullptr; };
        // allowCreateTask Field Functions 
        bool hasAllowCreateTask() const { return this->allowCreateTask_ != nullptr;};
        void deleteAllowCreateTask() { this->allowCreateTask_ = nullptr;};
        inline bool getAllowCreateTask() const { DARABONBA_PTR_GET_DEFAULT(allowCreateTask_, false) };
        inline Packages& setAllowCreateTask(bool allowCreateTask) { DARABONBA_PTR_SET_VALUE(allowCreateTask_, allowCreateTask) };


        // appCode Field Functions 
        bool hasAppCode() const { return this->appCode_ != nullptr;};
        void deleteAppCode() { this->appCode_ = nullptr;};
        inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
        inline Packages& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


        // appstoreUrl Field Functions 
        bool hasAppstoreUrl() const { return this->appstoreUrl_ != nullptr;};
        void deleteAppstoreUrl() { this->appstoreUrl_ = nullptr;};
        inline string getAppstoreUrl() const { DARABONBA_PTR_GET_DEFAULT(appstoreUrl_, "") };
        inline Packages& setAppstoreUrl(string appstoreUrl) { DARABONBA_PTR_SET_VALUE(appstoreUrl_, appstoreUrl) };


        // changeLog Field Functions 
        bool hasChangeLog() const { return this->changeLog_ != nullptr;};
        void deleteChangeLog() { this->changeLog_ = nullptr;};
        inline string getChangeLog() const { DARABONBA_PTR_GET_DEFAULT(changeLog_, "") };
        inline Packages& setChangeLog(string changeLog) { DARABONBA_PTR_SET_VALUE(changeLog_, changeLog) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline Packages& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // downloadUrl Field Functions 
        bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
        void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
        inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
        inline Packages& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Packages& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Packages& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Packages& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isEnterprise Field Functions 
        bool hasIsEnterprise() const { return this->isEnterprise_ != nullptr;};
        void deleteIsEnterprise() { this->isEnterprise_ = nullptr;};
        inline int32_t getIsEnterprise() const { DARABONBA_PTR_GET_DEFAULT(isEnterprise_, 0) };
        inline Packages& setIsEnterprise(int32_t isEnterprise) { DARABONBA_PTR_SET_VALUE(isEnterprise_, isEnterprise) };


        // md5 Field Functions 
        bool hasMd5() const { return this->md5_ != nullptr;};
        void deleteMd5() { this->md5_ = nullptr;};
        inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
        inline Packages& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline Packages& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // needCheck Field Functions 
        bool hasNeedCheck() const { return this->needCheck_ != nullptr;};
        void deleteNeedCheck() { this->needCheck_ = nullptr;};
        inline int32_t getNeedCheck() const { DARABONBA_PTR_GET_DEFAULT(needCheck_, 0) };
        inline Packages& setNeedCheck(int32_t needCheck) { DARABONBA_PTR_SET_VALUE(needCheck_, needCheck) };


        // packageType Field Functions 
        bool hasPackageType() const { return this->packageType_ != nullptr;};
        void deletePackageType() { this->packageType_ = nullptr;};
        inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
        inline Packages& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline Packages& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


        // productId Field Functions 
        bool hasProductId() const { return this->productId_ != nullptr;};
        void deleteProductId() { this->productId_ = nullptr;};
        inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
        inline Packages& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


        // productVersion Field Functions 
        bool hasProductVersion() const { return this->productVersion_ != nullptr;};
        void deleteProductVersion() { this->productVersion_ = nullptr;};
        inline string getProductVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
        inline Packages& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


        // publishPeriod Field Functions 
        bool hasPublishPeriod() const { return this->publishPeriod_ != nullptr;};
        void deletePublishPeriod() { this->publishPeriod_ = nullptr;};
        inline int32_t getPublishPeriod() const { DARABONBA_PTR_GET_DEFAULT(publishPeriod_, 0) };
        inline Packages& setPublishPeriod(int32_t publishPeriod) { DARABONBA_PTR_SET_VALUE(publishPeriod_, publishPeriod) };


        // verificationCode Field Functions 
        bool hasVerificationCode() const { return this->verificationCode_ != nullptr;};
        void deleteVerificationCode() { this->verificationCode_ = nullptr;};
        inline string getVerificationCode() const { DARABONBA_PTR_GET_DEFAULT(verificationCode_, "") };
        inline Packages& setVerificationCode(string verificationCode) { DARABONBA_PTR_SET_VALUE(verificationCode_, verificationCode) };


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
        shared_ptr<string> md5_ {};
        shared_ptr<string> modifier_ {};
        shared_ptr<int32_t> needCheck_ {};
        shared_ptr<string> packageType_ {};
        shared_ptr<string> platform_ {};
        shared_ptr<string> productId_ {};
        shared_ptr<string> productVersion_ {};
        shared_ptr<int32_t> publishPeriod_ {};
        shared_ptr<string> verificationCode_ {};
      };

      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->packages_ == nullptr && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline ListPackagesResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // packages Field Functions 
      bool hasPackages() const { return this->packages_ != nullptr;};
      void deletePackages() { this->packages_ = nullptr;};
      inline const vector<ListPackagesResult::Packages> & getPackages() const { DARABONBA_PTR_GET_CONST(packages_, vector<ListPackagesResult::Packages>) };
      inline vector<ListPackagesResult::Packages> getPackages() { DARABONBA_PTR_GET(packages_, vector<ListPackagesResult::Packages>) };
      inline ListPackagesResult& setPackages(const vector<ListPackagesResult::Packages> & packages) { DARABONBA_PTR_SET_VALUE(packages_, packages) };
      inline ListPackagesResult& setPackages(vector<ListPackagesResult::Packages> && packages) { DARABONBA_PTR_SET_RVALUE(packages_, packages) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline ListPackagesResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline ListPackagesResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline ListPackagesResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<vector<ListPackagesResult::Packages>> packages_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->hasMore_ == nullptr && this->listPackagesResult_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->resultCode_ == nullptr
        && this->resultMessage_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListMcubeUpgradePackagesResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListMcubeUpgradePackagesResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // listPackagesResult Field Functions 
    bool hasListPackagesResult() const { return this->listPackagesResult_ != nullptr;};
    void deleteListPackagesResult() { this->listPackagesResult_ = nullptr;};
    inline const ListMcubeUpgradePackagesResponseBody::ListPackagesResult & getListPackagesResult() const { DARABONBA_PTR_GET_CONST(listPackagesResult_, ListMcubeUpgradePackagesResponseBody::ListPackagesResult) };
    inline ListMcubeUpgradePackagesResponseBody::ListPackagesResult getListPackagesResult() { DARABONBA_PTR_GET(listPackagesResult_, ListMcubeUpgradePackagesResponseBody::ListPackagesResult) };
    inline ListMcubeUpgradePackagesResponseBody& setListPackagesResult(const ListMcubeUpgradePackagesResponseBody::ListPackagesResult & listPackagesResult) { DARABONBA_PTR_SET_VALUE(listPackagesResult_, listPackagesResult) };
    inline ListMcubeUpgradePackagesResponseBody& setListPackagesResult(ListMcubeUpgradePackagesResponseBody::ListPackagesResult && listPackagesResult) { DARABONBA_PTR_SET_RVALUE(listPackagesResult_, listPackagesResult) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMcubeUpgradePackagesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeUpgradePackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMcubeUpgradePackagesResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMcubeUpgradePackagesResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListMcubeUpgradePackagesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<bool> hasMore_ {};
    shared_ptr<ListMcubeUpgradePackagesResponseBody::ListPackagesResult> listPackagesResult_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif
