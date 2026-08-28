// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDISTRIBUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDISTRIBUTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateDistributionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDistributionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_TO_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_TO_JSON(Synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDistributionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_FROM_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_FROM_JSON(Synchro, synchro_);
    };
    CreateDistributionResponseBody() = default ;
    CreateDistributionResponseBody(const CreateDistributionResponseBody &) = default ;
    CreateDistributionResponseBody(CreateDistributionResponseBody &&) = default ;
    CreateDistributionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDistributionResponseBody() = default ;
    CreateDistributionResponseBody& operator=(const CreateDistributionResponseBody &) = default ;
    CreateDistributionResponseBody& operator=(CreateDistributionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(ArticleId, articleId_);
        DARABONBA_PTR_TO_JSON(BatchId, batchId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Drafts, drafts_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(ArticleId, articleId_);
        DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Drafts, drafts_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Drafts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Drafts& obj) { 
          DARABONBA_PTR_TO_JSON(AdaptStatus, adaptStatus_);
          DARABONBA_PTR_TO_JSON(AdaptedContent, adaptedContent_);
          DARABONBA_PTR_TO_JSON(AdaptedTitle, adaptedTitle_);
          DARABONBA_PTR_TO_JSON(Channel, channel_);
          DARABONBA_PTR_TO_JSON(ChannelAccount, channelAccount_);
          DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
          DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
          DARABONBA_PTR_TO_JSON(CoverImages, coverImages_);
          DARABONBA_PTR_TO_JSON(DraftId, draftId_);
          DARABONBA_PTR_TO_JSON(ExternalId, externalId_);
          DARABONBA_PTR_TO_JSON(ExternalUrl, externalUrl_);
          DARABONBA_PTR_TO_JSON(FailReason, failReason_);
          DARABONBA_PTR_TO_JSON(PublishConfig, publishConfig_);
          DARABONBA_PTR_TO_JSON(PublishedAt, publishedAt_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Drafts& obj) { 
          DARABONBA_PTR_FROM_JSON(AdaptStatus, adaptStatus_);
          DARABONBA_PTR_FROM_JSON(AdaptedContent, adaptedContent_);
          DARABONBA_PTR_FROM_JSON(AdaptedTitle, adaptedTitle_);
          DARABONBA_PTR_FROM_JSON(Channel, channel_);
          DARABONBA_PTR_FROM_JSON(ChannelAccount, channelAccount_);
          DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
          DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
          DARABONBA_PTR_FROM_JSON(CoverImages, coverImages_);
          DARABONBA_PTR_FROM_JSON(DraftId, draftId_);
          DARABONBA_PTR_FROM_JSON(ExternalId, externalId_);
          DARABONBA_PTR_FROM_JSON(ExternalUrl, externalUrl_);
          DARABONBA_PTR_FROM_JSON(FailReason, failReason_);
          DARABONBA_PTR_FROM_JSON(PublishConfig, publishConfig_);
          DARABONBA_PTR_FROM_JSON(PublishedAt, publishedAt_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Drafts() = default ;
        Drafts(const Drafts &) = default ;
        Drafts(Drafts &&) = default ;
        Drafts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Drafts() = default ;
        Drafts& operator=(const Drafts &) = default ;
        Drafts& operator=(Drafts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CoverImages : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CoverImages& obj) { 
            DARABONBA_PTR_TO_JSON(MaterialFileId, materialFileId_);
            DARABONBA_PTR_TO_JSON(OssUrl, ossUrl_);
            DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
          };
          friend void from_json(const Darabonba::Json& j, CoverImages& obj) { 
            DARABONBA_PTR_FROM_JSON(MaterialFileId, materialFileId_);
            DARABONBA_PTR_FROM_JSON(OssUrl, ossUrl_);
            DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
          };
          CoverImages() = default ;
          CoverImages(const CoverImages &) = default ;
          CoverImages(CoverImages &&) = default ;
          CoverImages(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CoverImages() = default ;
          CoverImages& operator=(const CoverImages &) = default ;
          CoverImages& operator=(CoverImages &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->materialFileId_ == nullptr
        && this->ossUrl_ == nullptr && this->sortOrder_ == nullptr; };
          // materialFileId Field Functions 
          bool hasMaterialFileId() const { return this->materialFileId_ != nullptr;};
          void deleteMaterialFileId() { this->materialFileId_ = nullptr;};
          inline string getMaterialFileId() const { DARABONBA_PTR_GET_DEFAULT(materialFileId_, "") };
          inline CoverImages& setMaterialFileId(string materialFileId) { DARABONBA_PTR_SET_VALUE(materialFileId_, materialFileId) };


          // ossUrl Field Functions 
          bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
          void deleteOssUrl() { this->ossUrl_ = nullptr;};
          inline string getOssUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
          inline CoverImages& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


          // sortOrder Field Functions 
          bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
          void deleteSortOrder() { this->sortOrder_ = nullptr;};
          inline int32_t getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, 0) };
          inline CoverImages& setSortOrder(int32_t sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


        protected:
          // The material center file ID.
          shared_ptr<string> materialFileId_ {};
          // The image CDN URL.
          shared_ptr<string> ossUrl_ {};
          // The sort order number.
          shared_ptr<int32_t> sortOrder_ {};
        };

        virtual bool empty() const override { return this->adaptStatus_ == nullptr
        && this->adaptedContent_ == nullptr && this->adaptedTitle_ == nullptr && this->channel_ == nullptr && this->channelAccount_ == nullptr && this->channelName_ == nullptr
        && this->channelType_ == nullptr && this->coverImages_ == nullptr && this->draftId_ == nullptr && this->externalId_ == nullptr && this->externalUrl_ == nullptr
        && this->failReason_ == nullptr && this->publishConfig_ == nullptr && this->publishedAt_ == nullptr && this->status_ == nullptr; };
        // adaptStatus Field Functions 
        bool hasAdaptStatus() const { return this->adaptStatus_ != nullptr;};
        void deleteAdaptStatus() { this->adaptStatus_ = nullptr;};
        inline string getAdaptStatus() const { DARABONBA_PTR_GET_DEFAULT(adaptStatus_, "") };
        inline Drafts& setAdaptStatus(string adaptStatus) { DARABONBA_PTR_SET_VALUE(adaptStatus_, adaptStatus) };


        // adaptedContent Field Functions 
        bool hasAdaptedContent() const { return this->adaptedContent_ != nullptr;};
        void deleteAdaptedContent() { this->adaptedContent_ = nullptr;};
        inline string getAdaptedContent() const { DARABONBA_PTR_GET_DEFAULT(adaptedContent_, "") };
        inline Drafts& setAdaptedContent(string adaptedContent) { DARABONBA_PTR_SET_VALUE(adaptedContent_, adaptedContent) };


        // adaptedTitle Field Functions 
        bool hasAdaptedTitle() const { return this->adaptedTitle_ != nullptr;};
        void deleteAdaptedTitle() { this->adaptedTitle_ = nullptr;};
        inline string getAdaptedTitle() const { DARABONBA_PTR_GET_DEFAULT(adaptedTitle_, "") };
        inline Drafts& setAdaptedTitle(string adaptedTitle) { DARABONBA_PTR_SET_VALUE(adaptedTitle_, adaptedTitle) };


        // channel Field Functions 
        bool hasChannel() const { return this->channel_ != nullptr;};
        void deleteChannel() { this->channel_ = nullptr;};
        inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
        inline Drafts& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


        // channelAccount Field Functions 
        bool hasChannelAccount() const { return this->channelAccount_ != nullptr;};
        void deleteChannelAccount() { this->channelAccount_ = nullptr;};
        inline string getChannelAccount() const { DARABONBA_PTR_GET_DEFAULT(channelAccount_, "") };
        inline Drafts& setChannelAccount(string channelAccount) { DARABONBA_PTR_SET_VALUE(channelAccount_, channelAccount) };


        // channelName Field Functions 
        bool hasChannelName() const { return this->channelName_ != nullptr;};
        void deleteChannelName() { this->channelName_ = nullptr;};
        inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
        inline Drafts& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


        // channelType Field Functions 
        bool hasChannelType() const { return this->channelType_ != nullptr;};
        void deleteChannelType() { this->channelType_ = nullptr;};
        inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
        inline Drafts& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


        // coverImages Field Functions 
        bool hasCoverImages() const { return this->coverImages_ != nullptr;};
        void deleteCoverImages() { this->coverImages_ = nullptr;};
        inline const vector<Drafts::CoverImages> & getCoverImages() const { DARABONBA_PTR_GET_CONST(coverImages_, vector<Drafts::CoverImages>) };
        inline vector<Drafts::CoverImages> getCoverImages() { DARABONBA_PTR_GET(coverImages_, vector<Drafts::CoverImages>) };
        inline Drafts& setCoverImages(const vector<Drafts::CoverImages> & coverImages) { DARABONBA_PTR_SET_VALUE(coverImages_, coverImages) };
        inline Drafts& setCoverImages(vector<Drafts::CoverImages> && coverImages) { DARABONBA_PTR_SET_RVALUE(coverImages_, coverImages) };


        // draftId Field Functions 
        bool hasDraftId() const { return this->draftId_ != nullptr;};
        void deleteDraftId() { this->draftId_ = nullptr;};
        inline string getDraftId() const { DARABONBA_PTR_GET_DEFAULT(draftId_, "") };
        inline Drafts& setDraftId(string draftId) { DARABONBA_PTR_SET_VALUE(draftId_, draftId) };


        // externalId Field Functions 
        bool hasExternalId() const { return this->externalId_ != nullptr;};
        void deleteExternalId() { this->externalId_ = nullptr;};
        inline string getExternalId() const { DARABONBA_PTR_GET_DEFAULT(externalId_, "") };
        inline Drafts& setExternalId(string externalId) { DARABONBA_PTR_SET_VALUE(externalId_, externalId) };


        // externalUrl Field Functions 
        bool hasExternalUrl() const { return this->externalUrl_ != nullptr;};
        void deleteExternalUrl() { this->externalUrl_ = nullptr;};
        inline string getExternalUrl() const { DARABONBA_PTR_GET_DEFAULT(externalUrl_, "") };
        inline Drafts& setExternalUrl(string externalUrl) { DARABONBA_PTR_SET_VALUE(externalUrl_, externalUrl) };


        // failReason Field Functions 
        bool hasFailReason() const { return this->failReason_ != nullptr;};
        void deleteFailReason() { this->failReason_ = nullptr;};
        inline string getFailReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
        inline Drafts& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


        // publishConfig Field Functions 
        bool hasPublishConfig() const { return this->publishConfig_ != nullptr;};
        void deletePublishConfig() { this->publishConfig_ = nullptr;};
        inline string getPublishConfig() const { DARABONBA_PTR_GET_DEFAULT(publishConfig_, "") };
        inline Drafts& setPublishConfig(string publishConfig) { DARABONBA_PTR_SET_VALUE(publishConfig_, publishConfig) };


        // publishedAt Field Functions 
        bool hasPublishedAt() const { return this->publishedAt_ != nullptr;};
        void deletePublishedAt() { this->publishedAt_ = nullptr;};
        inline int64_t getPublishedAt() const { DARABONBA_PTR_GET_DEFAULT(publishedAt_, 0L) };
        inline Drafts& setPublishedAt(int64_t publishedAt) { DARABONBA_PTR_SET_VALUE(publishedAt_, publishedAt) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Drafts& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The AI adaptation status. Valid values: NONE, ADAPTING, DONE, FAILED.
        shared_ptr<string> adaptStatus_ {};
        // The channel-adapted content body.
        shared_ptr<string> adaptedContent_ {};
        // The channel-adapted title.
        shared_ptr<string> adaptedTitle_ {};
        // The channel enumeration value.
        shared_ptr<string> channel_ {};
        // The publishing account snapshot. For overseas channels, this is the OWLAIS socialAccountNo.
        shared_ptr<string> channelAccount_ {};
        // The channel display name.
        shared_ptr<string> channelName_ {};
        // The channel type. Valid values: DOMESTIC, OVERSEA, INTERNAL.
        shared_ptr<string> channelType_ {};
        // The list of channel cover images.
        shared_ptr<vector<Drafts::CoverImages>> coverImages_ {};
        // The channel draft ID.
        shared_ptr<string> draftId_ {};
        // The ID returned by the platform.
        shared_ptr<string> externalId_ {};
        // The platform redirect URL.
        shared_ptr<string> externalUrl_ {};
        // The failure reason.
        shared_ptr<string> failReason_ {};
        // The channel-specific publish configuration in JSON format.
        shared_ptr<string> publishConfig_ {};
        // The publish time in millisecond timestamp.
        shared_ptr<int64_t> publishedAt_ {};
        // The status. Valid values: EDITING, PUBLISHING, SUCCESS, FAILED.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->articleId_ == nullptr
        && this->batchId_ == nullptr && this->createTime_ == nullptr && this->drafts_ == nullptr; };
      // articleId Field Functions 
      bool hasArticleId() const { return this->articleId_ != nullptr;};
      void deleteArticleId() { this->articleId_ = nullptr;};
      inline string getArticleId() const { DARABONBA_PTR_GET_DEFAULT(articleId_, "") };
      inline Module& setArticleId(string articleId) { DARABONBA_PTR_SET_VALUE(articleId_, articleId) };


      // batchId Field Functions 
      bool hasBatchId() const { return this->batchId_ != nullptr;};
      void deleteBatchId() { this->batchId_ = nullptr;};
      inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
      inline Module& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Module& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // drafts Field Functions 
      bool hasDrafts() const { return this->drafts_ != nullptr;};
      void deleteDrafts() { this->drafts_ = nullptr;};
      inline const vector<Module::Drafts> & getDrafts() const { DARABONBA_PTR_GET_CONST(drafts_, vector<Module::Drafts>) };
      inline vector<Module::Drafts> getDrafts() { DARABONBA_PTR_GET(drafts_, vector<Module::Drafts>) };
      inline Module& setDrafts(const vector<Module::Drafts> & drafts) { DARABONBA_PTR_SET_VALUE(drafts_, drafts) };
      inline Module& setDrafts(vector<Module::Drafts> && drafts) { DARABONBA_PTR_SET_RVALUE(drafts_, drafts) };


    protected:
      // The article ID.
      shared_ptr<string> articleId_ {};
      // The distribution batch ID.
      shared_ptr<string> batchId_ {};
      // The creation time in millisecond timestamp.
      shared_ptr<int64_t> createTime_ {};
      // The list of channel drafts within the batch.
      shared_ptr<vector<Module::Drafts>> drafts_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CreateDistributionResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline CreateDistributionResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateDistributionResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline CreateDistributionResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline CreateDistributionResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline CreateDistributionResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline CreateDistributionResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CreateDistributionResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, CreateDistributionResponseBody::Module) };
    inline CreateDistributionResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, CreateDistributionResponseBody::Module) };
    inline CreateDistributionResponseBody& setModule(const CreateDistributionResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CreateDistributionResponseBody& setModule(CreateDistributionResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDistributionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline CreateDistributionResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline CreateDistributionResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline CreateDistributionResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    // The detailed reason why access is denied.
    shared_ptr<string> accessDeniedDetail_ {};
    // Indicates whether retry is allowed. Valid values:
    // - false: Retry is not allowed.
    // - true: Retry is allowed.
    shared_ptr<bool> allowRetry_ {};
    // The application name.
    shared_ptr<string> appName_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message.
    shared_ptr<string> dynamicMessage_ {};
    // The returned error parameters.
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    // The response data.
    shared_ptr<CreateDistributionResponseBody::Module> module_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The error code.
    shared_ptr<string> rootErrorCode_ {};
    // The exception message.
    shared_ptr<string> rootErrorMsg_ {};
    // Indicates whether the request is processed synchronously.
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
