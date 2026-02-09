// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMDSCUBERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMDSCUBERESOURCESRESPONSEBODY_HPP_
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
  class ListMdsCubeResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMdsCubeResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMdsCubeResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMdsCubeResourcesResponseBody() = default ;
    ListMdsCubeResourcesResponseBody(const ListMdsCubeResourcesResponseBody &) = default ;
    ListMdsCubeResourcesResponseBody(ListMdsCubeResourcesResponseBody &&) = default ;
    ListMdsCubeResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMdsCubeResourcesResponseBody() = default ;
    ListMdsCubeResourcesResponseBody& operator=(const ListMdsCubeResourcesResponseBody &) = default ;
    ListMdsCubeResourcesResponseBody& operator=(ListMdsCubeResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultContent& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      };
      friend void from_json(const Darabonba::Json& j, ResultContent& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      };
      ResultContent() = default ;
      ResultContent(const ResultContent &) = default ;
      ResultContent(ResultContent &&) = default ;
      ResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultContent() = default ;
      ResultContent& operator=(const ResultContent &) = default ;
      ResultContent& operator=(ResultContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(RequestId, requestId_);
          DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
          DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
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
        class Content : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Content& obj) { 
            DARABONBA_PTR_TO_JSON(CurrentMaxAndroidVersion, currentMaxAndroidVersion_);
            DARABONBA_PTR_TO_JSON(CurrentMaxIosVersion, currentMaxIosVersion_);
            DARABONBA_PTR_TO_JSON(FirstPage, firstPage_);
            DARABONBA_PTR_TO_JSON(FirstResult, firstResult_);
            DARABONBA_PTR_TO_JSON(LastPage, lastPage_);
            DARABONBA_PTR_TO_JSON(List, list_);
            DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
            DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
            DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
            DARABONBA_PTR_TO_JSON(PrePage, prePage_);
            DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
          };
          friend void from_json(const Darabonba::Json& j, Content& obj) { 
            DARABONBA_PTR_FROM_JSON(CurrentMaxAndroidVersion, currentMaxAndroidVersion_);
            DARABONBA_PTR_FROM_JSON(CurrentMaxIosVersion, currentMaxIosVersion_);
            DARABONBA_PTR_FROM_JSON(FirstPage, firstPage_);
            DARABONBA_PTR_FROM_JSON(FirstResult, firstResult_);
            DARABONBA_PTR_FROM_JSON(LastPage, lastPage_);
            DARABONBA_PTR_FROM_JSON(List, list_);
            DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
            DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
            DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
            DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
            DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
          };
          Content() = default ;
          Content(const Content &) = default ;
          Content(Content &&) = default ;
          Content(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Content() = default ;
          Content& operator=(const Content &) = default ;
          Content& operator=(Content &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class List : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const List& obj) { 
              DARABONBA_PTR_TO_JSON(AndroidMaxVersion, androidMaxVersion_);
              DARABONBA_PTR_TO_JSON(AndroidMinVersion, androidMinVersion_);
              DARABONBA_PTR_TO_JSON(AppCode, appCode_);
              DARABONBA_PTR_TO_JSON(BinFileMd5, binFileMd5_);
              DARABONBA_PTR_TO_JSON(BinPrivateFileUrl, binPrivateFileUrl_);
              DARABONBA_PTR_TO_JSON(BinPublicFileUrl, binPublicFileUrl_);
              DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
              DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
              DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(IosMaxVersion, iosMaxVersion_);
              DARABONBA_PTR_TO_JSON(IosMinVersion, iosMinVersion_);
              DARABONBA_PTR_TO_JSON(JsonPrivateFileUrl, jsonPrivateFileUrl_);
              DARABONBA_PTR_TO_JSON(JsonPublicFileUrl, jsonPublicFileUrl_);
              DARABONBA_PTR_TO_JSON(MinCubeSdkVersion, minCubeSdkVersion_);
              DARABONBA_PTR_TO_JSON(MockDataDownloadUrl, mockDataDownloadUrl_);
              DARABONBA_PTR_TO_JSON(Operator, operator_);
              DARABONBA_PTR_TO_JSON(Platform, platform_);
              DARABONBA_PTR_TO_JSON(PreviewPictureUrl, previewPictureUrl_);
              DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
              DARABONBA_PTR_TO_JSON(Status, status_);
              DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
              DARABONBA_PTR_TO_JSON(TemplateResourceDesc, templateResourceDesc_);
              DARABONBA_PTR_TO_JSON(TemplateResourceVersion, templateResourceVersion_);
            };
            friend void from_json(const Darabonba::Json& j, List& obj) { 
              DARABONBA_PTR_FROM_JSON(AndroidMaxVersion, androidMaxVersion_);
              DARABONBA_PTR_FROM_JSON(AndroidMinVersion, androidMinVersion_);
              DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
              DARABONBA_PTR_FROM_JSON(BinFileMd5, binFileMd5_);
              DARABONBA_PTR_FROM_JSON(BinPrivateFileUrl, binPrivateFileUrl_);
              DARABONBA_PTR_FROM_JSON(BinPublicFileUrl, binPublicFileUrl_);
              DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
              DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
              DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(IosMaxVersion, iosMaxVersion_);
              DARABONBA_PTR_FROM_JSON(IosMinVersion, iosMinVersion_);
              DARABONBA_PTR_FROM_JSON(JsonPrivateFileUrl, jsonPrivateFileUrl_);
              DARABONBA_PTR_FROM_JSON(JsonPublicFileUrl, jsonPublicFileUrl_);
              DARABONBA_PTR_FROM_JSON(MinCubeSdkVersion, minCubeSdkVersion_);
              DARABONBA_PTR_FROM_JSON(MockDataDownloadUrl, mockDataDownloadUrl_);
              DARABONBA_PTR_FROM_JSON(Operator, operator_);
              DARABONBA_PTR_FROM_JSON(Platform, platform_);
              DARABONBA_PTR_FROM_JSON(PreviewPictureUrl, previewPictureUrl_);
              DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
              DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
              DARABONBA_PTR_FROM_JSON(TemplateResourceDesc, templateResourceDesc_);
              DARABONBA_PTR_FROM_JSON(TemplateResourceVersion, templateResourceVersion_);
            };
            List() = default ;
            List(const List &) = default ;
            List(List &&) = default ;
            List(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~List() = default ;
            List& operator=(const List &) = default ;
            List& operator=(List &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->androidMaxVersion_ == nullptr
        && this->androidMinVersion_ == nullptr && this->appCode_ == nullptr && this->binFileMd5_ == nullptr && this->binPrivateFileUrl_ == nullptr && this->binPublicFileUrl_ == nullptr
        && this->extendInfo_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->iosMaxVersion_ == nullptr
        && this->iosMinVersion_ == nullptr && this->jsonPrivateFileUrl_ == nullptr && this->jsonPublicFileUrl_ == nullptr && this->minCubeSdkVersion_ == nullptr && this->mockDataDownloadUrl_ == nullptr
        && this->operator_ == nullptr && this->platform_ == nullptr && this->previewPictureUrl_ == nullptr && this->resourceStatus_ == nullptr && this->status_ == nullptr
        && this->templateId_ == nullptr && this->templateResourceDesc_ == nullptr && this->templateResourceVersion_ == nullptr; };
            // androidMaxVersion Field Functions 
            bool hasAndroidMaxVersion() const { return this->androidMaxVersion_ != nullptr;};
            void deleteAndroidMaxVersion() { this->androidMaxVersion_ = nullptr;};
            inline string getAndroidMaxVersion() const { DARABONBA_PTR_GET_DEFAULT(androidMaxVersion_, "") };
            inline List& setAndroidMaxVersion(string androidMaxVersion) { DARABONBA_PTR_SET_VALUE(androidMaxVersion_, androidMaxVersion) };


            // androidMinVersion Field Functions 
            bool hasAndroidMinVersion() const { return this->androidMinVersion_ != nullptr;};
            void deleteAndroidMinVersion() { this->androidMinVersion_ = nullptr;};
            inline string getAndroidMinVersion() const { DARABONBA_PTR_GET_DEFAULT(androidMinVersion_, "") };
            inline List& setAndroidMinVersion(string androidMinVersion) { DARABONBA_PTR_SET_VALUE(androidMinVersion_, androidMinVersion) };


            // appCode Field Functions 
            bool hasAppCode() const { return this->appCode_ != nullptr;};
            void deleteAppCode() { this->appCode_ = nullptr;};
            inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
            inline List& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


            // binFileMd5 Field Functions 
            bool hasBinFileMd5() const { return this->binFileMd5_ != nullptr;};
            void deleteBinFileMd5() { this->binFileMd5_ = nullptr;};
            inline string getBinFileMd5() const { DARABONBA_PTR_GET_DEFAULT(binFileMd5_, "") };
            inline List& setBinFileMd5(string binFileMd5) { DARABONBA_PTR_SET_VALUE(binFileMd5_, binFileMd5) };


            // binPrivateFileUrl Field Functions 
            bool hasBinPrivateFileUrl() const { return this->binPrivateFileUrl_ != nullptr;};
            void deleteBinPrivateFileUrl() { this->binPrivateFileUrl_ = nullptr;};
            inline string getBinPrivateFileUrl() const { DARABONBA_PTR_GET_DEFAULT(binPrivateFileUrl_, "") };
            inline List& setBinPrivateFileUrl(string binPrivateFileUrl) { DARABONBA_PTR_SET_VALUE(binPrivateFileUrl_, binPrivateFileUrl) };


            // binPublicFileUrl Field Functions 
            bool hasBinPublicFileUrl() const { return this->binPublicFileUrl_ != nullptr;};
            void deleteBinPublicFileUrl() { this->binPublicFileUrl_ = nullptr;};
            inline string getBinPublicFileUrl() const { DARABONBA_PTR_GET_DEFAULT(binPublicFileUrl_, "") };
            inline List& setBinPublicFileUrl(string binPublicFileUrl) { DARABONBA_PTR_SET_VALUE(binPublicFileUrl_, binPublicFileUrl) };


            // extendInfo Field Functions 
            bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
            void deleteExtendInfo() { this->extendInfo_ = nullptr;};
            inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
            inline List& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


            // gmtCreate Field Functions 
            bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
            void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
            inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
            inline List& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


            // gmtModified Field Functions 
            bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
            void deleteGmtModified() { this->gmtModified_ = nullptr;};
            inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
            inline List& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline List& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // iosMaxVersion Field Functions 
            bool hasIosMaxVersion() const { return this->iosMaxVersion_ != nullptr;};
            void deleteIosMaxVersion() { this->iosMaxVersion_ = nullptr;};
            inline string getIosMaxVersion() const { DARABONBA_PTR_GET_DEFAULT(iosMaxVersion_, "") };
            inline List& setIosMaxVersion(string iosMaxVersion) { DARABONBA_PTR_SET_VALUE(iosMaxVersion_, iosMaxVersion) };


            // iosMinVersion Field Functions 
            bool hasIosMinVersion() const { return this->iosMinVersion_ != nullptr;};
            void deleteIosMinVersion() { this->iosMinVersion_ = nullptr;};
            inline string getIosMinVersion() const { DARABONBA_PTR_GET_DEFAULT(iosMinVersion_, "") };
            inline List& setIosMinVersion(string iosMinVersion) { DARABONBA_PTR_SET_VALUE(iosMinVersion_, iosMinVersion) };


            // jsonPrivateFileUrl Field Functions 
            bool hasJsonPrivateFileUrl() const { return this->jsonPrivateFileUrl_ != nullptr;};
            void deleteJsonPrivateFileUrl() { this->jsonPrivateFileUrl_ = nullptr;};
            inline string getJsonPrivateFileUrl() const { DARABONBA_PTR_GET_DEFAULT(jsonPrivateFileUrl_, "") };
            inline List& setJsonPrivateFileUrl(string jsonPrivateFileUrl) { DARABONBA_PTR_SET_VALUE(jsonPrivateFileUrl_, jsonPrivateFileUrl) };


            // jsonPublicFileUrl Field Functions 
            bool hasJsonPublicFileUrl() const { return this->jsonPublicFileUrl_ != nullptr;};
            void deleteJsonPublicFileUrl() { this->jsonPublicFileUrl_ = nullptr;};
            inline string getJsonPublicFileUrl() const { DARABONBA_PTR_GET_DEFAULT(jsonPublicFileUrl_, "") };
            inline List& setJsonPublicFileUrl(string jsonPublicFileUrl) { DARABONBA_PTR_SET_VALUE(jsonPublicFileUrl_, jsonPublicFileUrl) };


            // minCubeSdkVersion Field Functions 
            bool hasMinCubeSdkVersion() const { return this->minCubeSdkVersion_ != nullptr;};
            void deleteMinCubeSdkVersion() { this->minCubeSdkVersion_ = nullptr;};
            inline string getMinCubeSdkVersion() const { DARABONBA_PTR_GET_DEFAULT(minCubeSdkVersion_, "") };
            inline List& setMinCubeSdkVersion(string minCubeSdkVersion) { DARABONBA_PTR_SET_VALUE(minCubeSdkVersion_, minCubeSdkVersion) };


            // mockDataDownloadUrl Field Functions 
            bool hasMockDataDownloadUrl() const { return this->mockDataDownloadUrl_ != nullptr;};
            void deleteMockDataDownloadUrl() { this->mockDataDownloadUrl_ = nullptr;};
            inline string getMockDataDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(mockDataDownloadUrl_, "") };
            inline List& setMockDataDownloadUrl(string mockDataDownloadUrl) { DARABONBA_PTR_SET_VALUE(mockDataDownloadUrl_, mockDataDownloadUrl) };


            // operator Field Functions 
            bool hasOperator() const { return this->operator_ != nullptr;};
            void deleteOperator() { this->operator_ = nullptr;};
            inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
            inline List& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


            // platform Field Functions 
            bool hasPlatform() const { return this->platform_ != nullptr;};
            void deletePlatform() { this->platform_ = nullptr;};
            inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
            inline List& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


            // previewPictureUrl Field Functions 
            bool hasPreviewPictureUrl() const { return this->previewPictureUrl_ != nullptr;};
            void deletePreviewPictureUrl() { this->previewPictureUrl_ = nullptr;};
            inline string getPreviewPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(previewPictureUrl_, "") };
            inline List& setPreviewPictureUrl(string previewPictureUrl) { DARABONBA_PTR_SET_VALUE(previewPictureUrl_, previewPictureUrl) };


            // resourceStatus Field Functions 
            bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
            void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
            inline int64_t getResourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, 0L) };
            inline List& setResourceStatus(int64_t resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
            inline List& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // templateId Field Functions 
            bool hasTemplateId() const { return this->templateId_ != nullptr;};
            void deleteTemplateId() { this->templateId_ = nullptr;};
            inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
            inline List& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


            // templateResourceDesc Field Functions 
            bool hasTemplateResourceDesc() const { return this->templateResourceDesc_ != nullptr;};
            void deleteTemplateResourceDesc() { this->templateResourceDesc_ = nullptr;};
            inline string getTemplateResourceDesc() const { DARABONBA_PTR_GET_DEFAULT(templateResourceDesc_, "") };
            inline List& setTemplateResourceDesc(string templateResourceDesc) { DARABONBA_PTR_SET_VALUE(templateResourceDesc_, templateResourceDesc) };


            // templateResourceVersion Field Functions 
            bool hasTemplateResourceVersion() const { return this->templateResourceVersion_ != nullptr;};
            void deleteTemplateResourceVersion() { this->templateResourceVersion_ = nullptr;};
            inline string getTemplateResourceVersion() const { DARABONBA_PTR_GET_DEFAULT(templateResourceVersion_, "") };
            inline List& setTemplateResourceVersion(string templateResourceVersion) { DARABONBA_PTR_SET_VALUE(templateResourceVersion_, templateResourceVersion) };


          protected:
            shared_ptr<string> androidMaxVersion_ {};
            shared_ptr<string> androidMinVersion_ {};
            shared_ptr<string> appCode_ {};
            shared_ptr<string> binFileMd5_ {};
            shared_ptr<string> binPrivateFileUrl_ {};
            shared_ptr<string> binPublicFileUrl_ {};
            shared_ptr<string> extendInfo_ {};
            shared_ptr<string> gmtCreate_ {};
            shared_ptr<string> gmtModified_ {};
            shared_ptr<int64_t> id_ {};
            shared_ptr<string> iosMaxVersion_ {};
            shared_ptr<string> iosMinVersion_ {};
            shared_ptr<string> jsonPrivateFileUrl_ {};
            shared_ptr<string> jsonPublicFileUrl_ {};
            shared_ptr<string> minCubeSdkVersion_ {};
            shared_ptr<string> mockDataDownloadUrl_ {};
            shared_ptr<string> operator_ {};
            shared_ptr<string> platform_ {};
            shared_ptr<string> previewPictureUrl_ {};
            shared_ptr<int64_t> resourceStatus_ {};
            shared_ptr<int32_t> status_ {};
            shared_ptr<string> templateId_ {};
            shared_ptr<string> templateResourceDesc_ {};
            shared_ptr<string> templateResourceVersion_ {};
          };

          virtual bool empty() const override { return this->currentMaxAndroidVersion_ == nullptr
        && this->currentMaxIosVersion_ == nullptr && this->firstPage_ == nullptr && this->firstResult_ == nullptr && this->lastPage_ == nullptr && this->list_ == nullptr
        && this->nextPage_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->prePage_ == nullptr && this->totalCount_ == nullptr; };
          // currentMaxAndroidVersion Field Functions 
          bool hasCurrentMaxAndroidVersion() const { return this->currentMaxAndroidVersion_ != nullptr;};
          void deleteCurrentMaxAndroidVersion() { this->currentMaxAndroidVersion_ = nullptr;};
          inline string getCurrentMaxAndroidVersion() const { DARABONBA_PTR_GET_DEFAULT(currentMaxAndroidVersion_, "") };
          inline Content& setCurrentMaxAndroidVersion(string currentMaxAndroidVersion) { DARABONBA_PTR_SET_VALUE(currentMaxAndroidVersion_, currentMaxAndroidVersion) };


          // currentMaxIosVersion Field Functions 
          bool hasCurrentMaxIosVersion() const { return this->currentMaxIosVersion_ != nullptr;};
          void deleteCurrentMaxIosVersion() { this->currentMaxIosVersion_ = nullptr;};
          inline string getCurrentMaxIosVersion() const { DARABONBA_PTR_GET_DEFAULT(currentMaxIosVersion_, "") };
          inline Content& setCurrentMaxIosVersion(string currentMaxIosVersion) { DARABONBA_PTR_SET_VALUE(currentMaxIosVersion_, currentMaxIosVersion) };


          // firstPage Field Functions 
          bool hasFirstPage() const { return this->firstPage_ != nullptr;};
          void deleteFirstPage() { this->firstPage_ = nullptr;};
          inline bool getFirstPage() const { DARABONBA_PTR_GET_DEFAULT(firstPage_, false) };
          inline Content& setFirstPage(bool firstPage) { DARABONBA_PTR_SET_VALUE(firstPage_, firstPage) };


          // firstResult Field Functions 
          bool hasFirstResult() const { return this->firstResult_ != nullptr;};
          void deleteFirstResult() { this->firstResult_ = nullptr;};
          inline int64_t getFirstResult() const { DARABONBA_PTR_GET_DEFAULT(firstResult_, 0L) };
          inline Content& setFirstResult(int64_t firstResult) { DARABONBA_PTR_SET_VALUE(firstResult_, firstResult) };


          // lastPage Field Functions 
          bool hasLastPage() const { return this->lastPage_ != nullptr;};
          void deleteLastPage() { this->lastPage_ = nullptr;};
          inline bool getLastPage() const { DARABONBA_PTR_GET_DEFAULT(lastPage_, false) };
          inline Content& setLastPage(bool lastPage) { DARABONBA_PTR_SET_VALUE(lastPage_, lastPage) };


          // list Field Functions 
          bool hasList() const { return this->list_ != nullptr;};
          void deleteList() { this->list_ = nullptr;};
          inline const vector<Content::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Content::List>) };
          inline vector<Content::List> getList() { DARABONBA_PTR_GET(list_, vector<Content::List>) };
          inline Content& setList(const vector<Content::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
          inline Content& setList(vector<Content::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


          // nextPage Field Functions 
          bool hasNextPage() const { return this->nextPage_ != nullptr;};
          void deleteNextPage() { this->nextPage_ = nullptr;};
          inline int64_t getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, 0L) };
          inline Content& setNextPage(int64_t nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


          // pageNo Field Functions 
          bool hasPageNo() const { return this->pageNo_ != nullptr;};
          void deletePageNo() { this->pageNo_ = nullptr;};
          inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
          inline Content& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


          // pageSize Field Functions 
          bool hasPageSize() const { return this->pageSize_ != nullptr;};
          void deletePageSize() { this->pageSize_ = nullptr;};
          inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
          inline Content& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


          // prePage Field Functions 
          bool hasPrePage() const { return this->prePage_ != nullptr;};
          void deletePrePage() { this->prePage_ = nullptr;};
          inline int64_t getPrePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, 0L) };
          inline Content& setPrePage(int64_t prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


          // totalCount Field Functions 
          bool hasTotalCount() const { return this->totalCount_ != nullptr;};
          void deleteTotalCount() { this->totalCount_ = nullptr;};
          inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
          inline Content& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


        protected:
          shared_ptr<string> currentMaxAndroidVersion_ {};
          shared_ptr<string> currentMaxIosVersion_ {};
          shared_ptr<bool> firstPage_ {};
          shared_ptr<int64_t> firstResult_ {};
          shared_ptr<bool> lastPage_ {};
          shared_ptr<vector<Content::List>> list_ {};
          shared_ptr<int64_t> nextPage_ {};
          shared_ptr<int32_t> pageNo_ {};
          shared_ptr<int32_t> pageSize_ {};
          shared_ptr<int64_t> prePage_ {};
          shared_ptr<int32_t> totalCount_ {};
        };

        virtual bool empty() const override { return this->content_ == nullptr
        && this->errorCode_ == nullptr && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline const Data::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, Data::Content) };
        inline Data::Content getContent() { DARABONBA_PTR_GET(content_, Data::Content) };
        inline Data& setContent(const Data::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
        inline Data& setContent(Data::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // requestId Field Functions 
        bool hasRequestId() const { return this->requestId_ != nullptr;};
        void deleteRequestId() { this->requestId_ = nullptr;};
        inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
        inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


        // resultMsg Field Functions 
        bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
        void deleteResultMsg() { this->resultMsg_ = nullptr;};
        inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
        inline Data& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        shared_ptr<Data::Content> content_ {};
        shared_ptr<string> errorCode_ {};
        shared_ptr<string> requestId_ {};
        shared_ptr<string> resultMsg_ {};
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const ResultContent::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ResultContent::Data) };
      inline ResultContent::Data getData() { DARABONBA_PTR_GET(data_, ResultContent::Data) };
      inline ResultContent& setData(const ResultContent::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline ResultContent& setData(ResultContent::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline ResultContent& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    protected:
      shared_ptr<ResultContent::Data> data_ {};
      shared_ptr<string> requestId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultCode_ == nullptr && this->resultContent_ == nullptr && this->resultMessage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMdsCubeResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMdsCubeResourcesResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultContent Field Functions 
    bool hasResultContent() const { return this->resultContent_ != nullptr;};
    void deleteResultContent() { this->resultContent_ = nullptr;};
    inline const ListMdsCubeResourcesResponseBody::ResultContent & getResultContent() const { DARABONBA_PTR_GET_CONST(resultContent_, ListMdsCubeResourcesResponseBody::ResultContent) };
    inline ListMdsCubeResourcesResponseBody::ResultContent getResultContent() { DARABONBA_PTR_GET(resultContent_, ListMdsCubeResourcesResponseBody::ResultContent) };
    inline ListMdsCubeResourcesResponseBody& setResultContent(const ListMdsCubeResourcesResponseBody::ResultContent & resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };
    inline ListMdsCubeResourcesResponseBody& setResultContent(ListMdsCubeResourcesResponseBody::ResultContent && resultContent) { DARABONBA_PTR_SET_RVALUE(resultContent_, resultContent) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMdsCubeResourcesResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<ListMdsCubeResourcesResponseBody::ResultContent> resultContent_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
