// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSLATECHANNELDRAFTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRANSLATECHANNELDRAFTRESPONSEBODY_HPP_
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
  class TranslateChannelDraftResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TranslateChannelDraftResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, TranslateChannelDraftResponseBody& obj) { 
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
    TranslateChannelDraftResponseBody() = default ;
    TranslateChannelDraftResponseBody(const TranslateChannelDraftResponseBody &) = default ;
    TranslateChannelDraftResponseBody(TranslateChannelDraftResponseBody &&) = default ;
    TranslateChannelDraftResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TranslateChannelDraftResponseBody() = default ;
    TranslateChannelDraftResponseBody& operator=(const TranslateChannelDraftResponseBody &) = default ;
    TranslateChannelDraftResponseBody& operator=(TranslateChannelDraftResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
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
        // The file ID in the material center.
        shared_ptr<string> materialFileId_ {};
        // The CDN URL of the image.
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
      inline Module& setAdaptStatus(string adaptStatus) { DARABONBA_PTR_SET_VALUE(adaptStatus_, adaptStatus) };


      // adaptedContent Field Functions 
      bool hasAdaptedContent() const { return this->adaptedContent_ != nullptr;};
      void deleteAdaptedContent() { this->adaptedContent_ = nullptr;};
      inline string getAdaptedContent() const { DARABONBA_PTR_GET_DEFAULT(adaptedContent_, "") };
      inline Module& setAdaptedContent(string adaptedContent) { DARABONBA_PTR_SET_VALUE(adaptedContent_, adaptedContent) };


      // adaptedTitle Field Functions 
      bool hasAdaptedTitle() const { return this->adaptedTitle_ != nullptr;};
      void deleteAdaptedTitle() { this->adaptedTitle_ = nullptr;};
      inline string getAdaptedTitle() const { DARABONBA_PTR_GET_DEFAULT(adaptedTitle_, "") };
      inline Module& setAdaptedTitle(string adaptedTitle) { DARABONBA_PTR_SET_VALUE(adaptedTitle_, adaptedTitle) };


      // channel Field Functions 
      bool hasChannel() const { return this->channel_ != nullptr;};
      void deleteChannel() { this->channel_ = nullptr;};
      inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
      inline Module& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


      // channelAccount Field Functions 
      bool hasChannelAccount() const { return this->channelAccount_ != nullptr;};
      void deleteChannelAccount() { this->channelAccount_ = nullptr;};
      inline string getChannelAccount() const { DARABONBA_PTR_GET_DEFAULT(channelAccount_, "") };
      inline Module& setChannelAccount(string channelAccount) { DARABONBA_PTR_SET_VALUE(channelAccount_, channelAccount) };


      // channelName Field Functions 
      bool hasChannelName() const { return this->channelName_ != nullptr;};
      void deleteChannelName() { this->channelName_ = nullptr;};
      inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
      inline Module& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


      // channelType Field Functions 
      bool hasChannelType() const { return this->channelType_ != nullptr;};
      void deleteChannelType() { this->channelType_ = nullptr;};
      inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
      inline Module& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


      // coverImages Field Functions 
      bool hasCoverImages() const { return this->coverImages_ != nullptr;};
      void deleteCoverImages() { this->coverImages_ = nullptr;};
      inline const vector<Module::CoverImages> & getCoverImages() const { DARABONBA_PTR_GET_CONST(coverImages_, vector<Module::CoverImages>) };
      inline vector<Module::CoverImages> getCoverImages() { DARABONBA_PTR_GET(coverImages_, vector<Module::CoverImages>) };
      inline Module& setCoverImages(const vector<Module::CoverImages> & coverImages) { DARABONBA_PTR_SET_VALUE(coverImages_, coverImages) };
      inline Module& setCoverImages(vector<Module::CoverImages> && coverImages) { DARABONBA_PTR_SET_RVALUE(coverImages_, coverImages) };


      // draftId Field Functions 
      bool hasDraftId() const { return this->draftId_ != nullptr;};
      void deleteDraftId() { this->draftId_ = nullptr;};
      inline string getDraftId() const { DARABONBA_PTR_GET_DEFAULT(draftId_, "") };
      inline Module& setDraftId(string draftId) { DARABONBA_PTR_SET_VALUE(draftId_, draftId) };


      // externalId Field Functions 
      bool hasExternalId() const { return this->externalId_ != nullptr;};
      void deleteExternalId() { this->externalId_ = nullptr;};
      inline string getExternalId() const { DARABONBA_PTR_GET_DEFAULT(externalId_, "") };
      inline Module& setExternalId(string externalId) { DARABONBA_PTR_SET_VALUE(externalId_, externalId) };


      // externalUrl Field Functions 
      bool hasExternalUrl() const { return this->externalUrl_ != nullptr;};
      void deleteExternalUrl() { this->externalUrl_ = nullptr;};
      inline string getExternalUrl() const { DARABONBA_PTR_GET_DEFAULT(externalUrl_, "") };
      inline Module& setExternalUrl(string externalUrl) { DARABONBA_PTR_SET_VALUE(externalUrl_, externalUrl) };


      // failReason Field Functions 
      bool hasFailReason() const { return this->failReason_ != nullptr;};
      void deleteFailReason() { this->failReason_ = nullptr;};
      inline string getFailReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
      inline Module& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


      // publishConfig Field Functions 
      bool hasPublishConfig() const { return this->publishConfig_ != nullptr;};
      void deletePublishConfig() { this->publishConfig_ = nullptr;};
      inline string getPublishConfig() const { DARABONBA_PTR_GET_DEFAULT(publishConfig_, "") };
      inline Module& setPublishConfig(string publishConfig) { DARABONBA_PTR_SET_VALUE(publishConfig_, publishConfig) };


      // publishedAt Field Functions 
      bool hasPublishedAt() const { return this->publishedAt_ != nullptr;};
      void deletePublishedAt() { this->publishedAt_ = nullptr;};
      inline int64_t getPublishedAt() const { DARABONBA_PTR_GET_DEFAULT(publishedAt_, 0L) };
      inline Module& setPublishedAt(int64_t publishedAt) { DARABONBA_PTR_SET_VALUE(publishedAt_, publishedAt) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Module& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The AI adaptation status. Valid values: NONE, ADAPTING, DONE, FAILED.
      shared_ptr<string> adaptStatus_ {};
      // The channel-adapted content body.
      shared_ptr<string> adaptedContent_ {};
      // The channel-adapted title.
      shared_ptr<string> adaptedTitle_ {};
      // The channel enumeration value.
      shared_ptr<string> channel_ {};
      // The snapshot of the publishing account.
      shared_ptr<string> channelAccount_ {};
      // The display name of the channel.
      shared_ptr<string> channelName_ {};
      // The channel type. Valid values: DOMESTIC, OVERSEA, INTERNAL.
      shared_ptr<string> channelType_ {};
      // The list of channel cover images.
      shared_ptr<vector<Module::CoverImages>> coverImages_ {};
      // The ID of the channel draft.
      shared_ptr<string> draftId_ {};
      // The ID returned by the platform.
      shared_ptr<string> externalId_ {};
      // The redirect URL on the platform.
      shared_ptr<string> externalUrl_ {};
      // The reason for the failure.
      shared_ptr<string> failReason_ {};
      // The channel-specific publishing configuration in JSON format.
      shared_ptr<string> publishConfig_ {};
      // The publishing time, in millisecond timestamp format.
      shared_ptr<int64_t> publishedAt_ {};
      // The status. Valid values: EDITING, PUBLISHING, SUCCESS, FAILED.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline TranslateChannelDraftResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline TranslateChannelDraftResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline TranslateChannelDraftResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline TranslateChannelDraftResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline TranslateChannelDraftResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline TranslateChannelDraftResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline TranslateChannelDraftResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TranslateChannelDraftResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, TranslateChannelDraftResponseBody::Module) };
    inline TranslateChannelDraftResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, TranslateChannelDraftResponseBody::Module) };
    inline TranslateChannelDraftResponseBody& setModule(const TranslateChannelDraftResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TranslateChannelDraftResponseBody& setModule(TranslateChannelDraftResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TranslateChannelDraftResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline TranslateChannelDraftResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline TranslateChannelDraftResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline TranslateChannelDraftResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    // The detailed reason why access is denied.
    shared_ptr<string> accessDeniedDetail_ {};
    // Indicates whether a retry is allowed.
    shared_ptr<bool> allowRetry_ {};
    // The application name. The application with this name is queried.
    shared_ptr<string> appName_ {};
    // The dynamic code. This parameter is not in use. Ignore this parameter.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message, which is used to replace the `%s` variable in the **ErrMessage** parameter.
    // > For example, if the value of **ErrMessage** is **The Value of Input Parameter %s is not valid** and the value of **DynamicMessage** is **DtsJobId**, the specified **DtsJobId** request parameter is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // The error arguments.
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    // Indicates whether the deletion is successful.
    shared_ptr<TranslateChannelDraftResponseBody::Module> module_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The error code.
    shared_ptr<string> rootErrorCode_ {};
    // The root error message.
    shared_ptr<string> rootErrorMsg_ {};
    // Indicates whether the request is processed synchronously.
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
