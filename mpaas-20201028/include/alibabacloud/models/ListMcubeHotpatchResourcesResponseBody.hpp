// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEHOTPATCHRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEHOTPATCHRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeHotpatchResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeHotpatchResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListHotpatchResourceResult, listHotpatchResourceResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeHotpatchResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListHotpatchResourceResult, listHotpatchResourceResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMcubeHotpatchResourcesResponseBody() = default ;
    ListMcubeHotpatchResourcesResponseBody(const ListMcubeHotpatchResourcesResponseBody &) = default ;
    ListMcubeHotpatchResourcesResponseBody(ListMcubeHotpatchResourcesResponseBody &&) = default ;
    ListMcubeHotpatchResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeHotpatchResourcesResponseBody() = default ;
    ListMcubeHotpatchResourcesResponseBody& operator=(const ListMcubeHotpatchResourcesResponseBody &) = default ;
    ListMcubeHotpatchResourcesResponseBody& operator=(ListMcubeHotpatchResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListHotpatchResourceResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListHotpatchResourceResult& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
        DARABONBA_PTR_TO_JSON(HotpatchResourceInfo, hotpatchResourceInfo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ListHotpatchResourceResult& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
        DARABONBA_PTR_FROM_JSON(HotpatchResourceInfo, hotpatchResourceInfo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      ListHotpatchResourceResult() = default ;
      ListHotpatchResourceResult(const ListHotpatchResourceResult &) = default ;
      ListHotpatchResourceResult(ListHotpatchResourceResult &&) = default ;
      ListHotpatchResourceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListHotpatchResourceResult() = default ;
      ListHotpatchResourceResult& operator=(const ListHotpatchResourceResult &) = default ;
      ListHotpatchResourceResult& operator=(ListHotpatchResourceResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HotpatchResourceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotpatchResourceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AppCode, appCode_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
          DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(HotpatchVersion, hotpatchVersion_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Md5, md5_);
          DARABONBA_PTR_TO_JSON(Memo, memo_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(PackageId, packageId_);
          DARABONBA_PTR_TO_JSON(Platform, platform_);
          DARABONBA_PTR_TO_JSON(ProductId, productId_);
          DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_TO_JSON(PublishPeriod, publishPeriod_);
          DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
          DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
        };
        friend void from_json(const Darabonba::Json& j, HotpatchResourceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
          DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(HotpatchVersion, hotpatchVersion_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Md5, md5_);
          DARABONBA_PTR_FROM_JSON(Memo, memo_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
          DARABONBA_PTR_FROM_JSON(Platform, platform_);
          DARABONBA_PTR_FROM_JSON(ProductId, productId_);
          DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_FROM_JSON(PublishPeriod, publishPeriod_);
          DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
          DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
        };
        HotpatchResourceInfo() = default ;
        HotpatchResourceInfo(const HotpatchResourceInfo &) = default ;
        HotpatchResourceInfo(HotpatchResourceInfo &&) = default ;
        HotpatchResourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotpatchResourceInfo() = default ;
        HotpatchResourceInfo& operator=(const HotpatchResourceInfo &) = default ;
        HotpatchResourceInfo& operator=(HotpatchResourceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appCode_ == nullptr
        && this->creator_ == nullptr && this->downloadUrl_ == nullptr && this->fileSize_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->hotpatchVersion_ == nullptr && this->id_ == nullptr && this->md5_ == nullptr && this->memo_ == nullptr && this->modifier_ == nullptr
        && this->packageId_ == nullptr && this->platform_ == nullptr && this->productId_ == nullptr && this->productVersion_ == nullptr && this->publishPeriod_ == nullptr
        && this->releaseVersion_ == nullptr && this->sourceName_ == nullptr; };
        // appCode Field Functions 
        bool hasAppCode() const { return this->appCode_ != nullptr;};
        void deleteAppCode() { this->appCode_ = nullptr;};
        inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
        inline HotpatchResourceInfo& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline HotpatchResourceInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // downloadUrl Field Functions 
        bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
        void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
        inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
        inline HotpatchResourceInfo& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline string getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
        inline HotpatchResourceInfo& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline HotpatchResourceInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline HotpatchResourceInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // hotpatchVersion Field Functions 
        bool hasHotpatchVersion() const { return this->hotpatchVersion_ != nullptr;};
        void deleteHotpatchVersion() { this->hotpatchVersion_ = nullptr;};
        inline string getHotpatchVersion() const { DARABONBA_PTR_GET_DEFAULT(hotpatchVersion_, "") };
        inline HotpatchResourceInfo& setHotpatchVersion(string hotpatchVersion) { DARABONBA_PTR_SET_VALUE(hotpatchVersion_, hotpatchVersion) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline HotpatchResourceInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // md5 Field Functions 
        bool hasMd5() const { return this->md5_ != nullptr;};
        void deleteMd5() { this->md5_ = nullptr;};
        inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
        inline HotpatchResourceInfo& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


        // memo Field Functions 
        bool hasMemo() const { return this->memo_ != nullptr;};
        void deleteMemo() { this->memo_ = nullptr;};
        inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
        inline HotpatchResourceInfo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline HotpatchResourceInfo& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // packageId Field Functions 
        bool hasPackageId() const { return this->packageId_ != nullptr;};
        void deletePackageId() { this->packageId_ = nullptr;};
        inline int64_t getPackageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, 0L) };
        inline HotpatchResourceInfo& setPackageId(int64_t packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline HotpatchResourceInfo& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


        // productId Field Functions 
        bool hasProductId() const { return this->productId_ != nullptr;};
        void deleteProductId() { this->productId_ = nullptr;};
        inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
        inline HotpatchResourceInfo& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


        // productVersion Field Functions 
        bool hasProductVersion() const { return this->productVersion_ != nullptr;};
        void deleteProductVersion() { this->productVersion_ = nullptr;};
        inline string getProductVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
        inline HotpatchResourceInfo& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


        // publishPeriod Field Functions 
        bool hasPublishPeriod() const { return this->publishPeriod_ != nullptr;};
        void deletePublishPeriod() { this->publishPeriod_ = nullptr;};
        inline int64_t getPublishPeriod() const { DARABONBA_PTR_GET_DEFAULT(publishPeriod_, 0L) };
        inline HotpatchResourceInfo& setPublishPeriod(int64_t publishPeriod) { DARABONBA_PTR_SET_VALUE(publishPeriod_, publishPeriod) };


        // releaseVersion Field Functions 
        bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
        void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
        inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
        inline HotpatchResourceInfo& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


        // sourceName Field Functions 
        bool hasSourceName() const { return this->sourceName_ != nullptr;};
        void deleteSourceName() { this->sourceName_ = nullptr;};
        inline string getSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
        inline HotpatchResourceInfo& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


      protected:
        shared_ptr<string> appCode_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> downloadUrl_ {};
        shared_ptr<string> fileSize_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> hotpatchVersion_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> md5_ {};
        shared_ptr<string> memo_ {};
        shared_ptr<string> modifier_ {};
        shared_ptr<int64_t> packageId_ {};
        shared_ptr<string> platform_ {};
        shared_ptr<string> productId_ {};
        shared_ptr<string> productVersion_ {};
        shared_ptr<int64_t> publishPeriod_ {};
        shared_ptr<string> releaseVersion_ {};
        shared_ptr<string> sourceName_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->errorCode_ == nullptr && this->hasMore_ == nullptr && this->hotpatchResourceInfo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->resultMsg_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline ListHotpatchResourceResult& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline ListHotpatchResourceResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // hasMore Field Functions 
      bool hasHasMore() const { return this->hasMore_ != nullptr;};
      void deleteHasMore() { this->hasMore_ = nullptr;};
      inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
      inline ListHotpatchResourceResult& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


      // hotpatchResourceInfo Field Functions 
      bool hasHotpatchResourceInfo() const { return this->hotpatchResourceInfo_ != nullptr;};
      void deleteHotpatchResourceInfo() { this->hotpatchResourceInfo_ = nullptr;};
      inline const vector<ListHotpatchResourceResult::HotpatchResourceInfo> & getHotpatchResourceInfo() const { DARABONBA_PTR_GET_CONST(hotpatchResourceInfo_, vector<ListHotpatchResourceResult::HotpatchResourceInfo>) };
      inline vector<ListHotpatchResourceResult::HotpatchResourceInfo> getHotpatchResourceInfo() { DARABONBA_PTR_GET(hotpatchResourceInfo_, vector<ListHotpatchResourceResult::HotpatchResourceInfo>) };
      inline ListHotpatchResourceResult& setHotpatchResourceInfo(const vector<ListHotpatchResourceResult::HotpatchResourceInfo> & hotpatchResourceInfo) { DARABONBA_PTR_SET_VALUE(hotpatchResourceInfo_, hotpatchResourceInfo) };
      inline ListHotpatchResourceResult& setHotpatchResourceInfo(vector<ListHotpatchResourceResult::HotpatchResourceInfo> && hotpatchResourceInfo) { DARABONBA_PTR_SET_RVALUE(hotpatchResourceInfo_, hotpatchResourceInfo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListHotpatchResourceResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline ListHotpatchResourceResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline ListHotpatchResourceResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline ListHotpatchResourceResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline ListHotpatchResourceResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<string> errorCode_ {};
      shared_ptr<bool> hasMore_ {};
      shared_ptr<vector<ListHotpatchResourceResult::HotpatchResourceInfo>> hotpatchResourceInfo_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->listHotpatchResourceResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // listHotpatchResourceResult Field Functions 
    bool hasListHotpatchResourceResult() const { return this->listHotpatchResourceResult_ != nullptr;};
    void deleteListHotpatchResourceResult() { this->listHotpatchResourceResult_ = nullptr;};
    inline const ListMcubeHotpatchResourcesResponseBody::ListHotpatchResourceResult & getListHotpatchResourceResult() const { DARABONBA_PTR_GET_CONST(listHotpatchResourceResult_, ListMcubeHotpatchResourcesResponseBody::ListHotpatchResourceResult) };
    inline ListMcubeHotpatchResourcesResponseBody::ListHotpatchResourceResult getListHotpatchResourceResult() { DARABONBA_PTR_GET(listHotpatchResourceResult_, ListMcubeHotpatchResourcesResponseBody::ListHotpatchResourceResult) };
    inline ListMcubeHotpatchResourcesResponseBody& setListHotpatchResourceResult(const ListMcubeHotpatchResourcesResponseBody::ListHotpatchResourceResult & listHotpatchResourceResult) { DARABONBA_PTR_SET_VALUE(listHotpatchResourceResult_, listHotpatchResourceResult) };
    inline ListMcubeHotpatchResourcesResponseBody& setListHotpatchResourceResult(ListMcubeHotpatchResourcesResponseBody::ListHotpatchResourceResult && listHotpatchResourceResult) { DARABONBA_PTR_SET_RVALUE(listHotpatchResourceResult_, listHotpatchResourceResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeHotpatchResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMcubeHotpatchResourcesResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMcubeHotpatchResourcesResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<ListMcubeHotpatchResourcesResponseBody::ListHotpatchResourceResult> listHotpatchResourceResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
