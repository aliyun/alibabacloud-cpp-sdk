// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPTEMPLATERESPONSEBODY_HPP_
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
  class GetAppTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppTemplateResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetAppTemplateResponseBody& obj) { 
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
    GetAppTemplateResponseBody() = default ;
    GetAppTemplateResponseBody(const GetAppTemplateResponseBody &) = default ;
    GetAppTemplateResponseBody(GetAppTemplateResponseBody &&) = default ;
    GetAppTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppTemplateResponseBody() = default ;
    GetAppTemplateResponseBody& operator=(const GetAppTemplateResponseBody &) = default ;
    GetAppTemplateResponseBody& operator=(GetAppTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(AppType, appType_);
        DARABONBA_PTR_TO_JSON(BizId, bizId_);
        DARABONBA_PTR_TO_JSON(ColorScheme, colorScheme_);
        DARABONBA_PTR_TO_JSON(ColorSchemeName, colorSchemeName_);
        DARABONBA_PTR_TO_JSON(CopyCount, copyCount_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Industry, industry_);
        DARABONBA_PTR_TO_JSON(IndustryName, industryName_);
        DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
        DARABONBA_PTR_TO_JSON(LikeCount, likeCount_);
        DARABONBA_PTR_TO_JSON(Liked, liked_);
        DARABONBA_PTR_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(PreviewUrl, previewUrl_);
        DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
        DARABONBA_PTR_TO_JSON(ProductVersionName, productVersionName_);
        DARABONBA_PTR_TO_JSON(ShareCount, shareCount_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(ThumbnailUrl, thumbnailUrl_);
        DARABONBA_PTR_TO_JSON(ViewCount, viewCount_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(AppType, appType_);
        DARABONBA_PTR_FROM_JSON(BizId, bizId_);
        DARABONBA_PTR_FROM_JSON(ColorScheme, colorScheme_);
        DARABONBA_PTR_FROM_JSON(ColorSchemeName, colorSchemeName_);
        DARABONBA_PTR_FROM_JSON(CopyCount, copyCount_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Industry, industry_);
        DARABONBA_PTR_FROM_JSON(IndustryName, industryName_);
        DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
        DARABONBA_PTR_FROM_JSON(LikeCount, likeCount_);
        DARABONBA_PTR_FROM_JSON(Liked, liked_);
        DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(PreviewUrl, previewUrl_);
        DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
        DARABONBA_PTR_FROM_JSON(ProductVersionName, productVersionName_);
        DARABONBA_PTR_FROM_JSON(ShareCount, shareCount_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(ThumbnailUrl, thumbnailUrl_);
        DARABONBA_PTR_FROM_JSON(ViewCount, viewCount_);
        DARABONBA_PTR_FROM_JSON(Weight, weight_);
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
      virtual bool empty() const override { return this->appType_ == nullptr
        && this->bizId_ == nullptr && this->colorScheme_ == nullptr && this->colorSchemeName_ == nullptr && this->copyCount_ == nullptr && this->creator_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->id_ == nullptr && this->industry_ == nullptr && this->industryName_ == nullptr
        && this->lastModifier_ == nullptr && this->likeCount_ == nullptr && this->liked_ == nullptr && this->metadata_ == nullptr && this->previewUrl_ == nullptr
        && this->productVersion_ == nullptr && this->productVersionName_ == nullptr && this->shareCount_ == nullptr && this->status_ == nullptr && this->templateId_ == nullptr
        && this->templateName_ == nullptr && this->thumbnailUrl_ == nullptr && this->viewCount_ == nullptr && this->weight_ == nullptr; };
      // appType Field Functions 
      bool hasAppType() const { return this->appType_ != nullptr;};
      void deleteAppType() { this->appType_ = nullptr;};
      inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
      inline Module& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


      // bizId Field Functions 
      bool hasBizId() const { return this->bizId_ != nullptr;};
      void deleteBizId() { this->bizId_ = nullptr;};
      inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
      inline Module& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


      // colorScheme Field Functions 
      bool hasColorScheme() const { return this->colorScheme_ != nullptr;};
      void deleteColorScheme() { this->colorScheme_ = nullptr;};
      inline string getColorScheme() const { DARABONBA_PTR_GET_DEFAULT(colorScheme_, "") };
      inline Module& setColorScheme(string colorScheme) { DARABONBA_PTR_SET_VALUE(colorScheme_, colorScheme) };


      // colorSchemeName Field Functions 
      bool hasColorSchemeName() const { return this->colorSchemeName_ != nullptr;};
      void deleteColorSchemeName() { this->colorSchemeName_ = nullptr;};
      inline string getColorSchemeName() const { DARABONBA_PTR_GET_DEFAULT(colorSchemeName_, "") };
      inline Module& setColorSchemeName(string colorSchemeName) { DARABONBA_PTR_SET_VALUE(colorSchemeName_, colorSchemeName) };


      // copyCount Field Functions 
      bool hasCopyCount() const { return this->copyCount_ != nullptr;};
      void deleteCopyCount() { this->copyCount_ = nullptr;};
      inline int32_t getCopyCount() const { DARABONBA_PTR_GET_DEFAULT(copyCount_, 0) };
      inline Module& setCopyCount(int32_t copyCount) { DARABONBA_PTR_SET_VALUE(copyCount_, copyCount) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Module& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline Module& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline Module& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Module& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // industry Field Functions 
      bool hasIndustry() const { return this->industry_ != nullptr;};
      void deleteIndustry() { this->industry_ = nullptr;};
      inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
      inline Module& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


      // industryName Field Functions 
      bool hasIndustryName() const { return this->industryName_ != nullptr;};
      void deleteIndustryName() { this->industryName_ = nullptr;};
      inline string getIndustryName() const { DARABONBA_PTR_GET_DEFAULT(industryName_, "") };
      inline Module& setIndustryName(string industryName) { DARABONBA_PTR_SET_VALUE(industryName_, industryName) };


      // lastModifier Field Functions 
      bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
      void deleteLastModifier() { this->lastModifier_ = nullptr;};
      inline string getLastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
      inline Module& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


      // likeCount Field Functions 
      bool hasLikeCount() const { return this->likeCount_ != nullptr;};
      void deleteLikeCount() { this->likeCount_ = nullptr;};
      inline int32_t getLikeCount() const { DARABONBA_PTR_GET_DEFAULT(likeCount_, 0) };
      inline Module& setLikeCount(int32_t likeCount) { DARABONBA_PTR_SET_VALUE(likeCount_, likeCount) };


      // liked Field Functions 
      bool hasLiked() const { return this->liked_ != nullptr;};
      void deleteLiked() { this->liked_ = nullptr;};
      inline bool getLiked() const { DARABONBA_PTR_GET_DEFAULT(liked_, false) };
      inline Module& setLiked(bool liked) { DARABONBA_PTR_SET_VALUE(liked_, liked) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline string getMetadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
      inline Module& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


      // previewUrl Field Functions 
      bool hasPreviewUrl() const { return this->previewUrl_ != nullptr;};
      void deletePreviewUrl() { this->previewUrl_ = nullptr;};
      inline string getPreviewUrl() const { DARABONBA_PTR_GET_DEFAULT(previewUrl_, "") };
      inline Module& setPreviewUrl(string previewUrl) { DARABONBA_PTR_SET_VALUE(previewUrl_, previewUrl) };


      // productVersion Field Functions 
      bool hasProductVersion() const { return this->productVersion_ != nullptr;};
      void deleteProductVersion() { this->productVersion_ = nullptr;};
      inline string getProductVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
      inline Module& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


      // productVersionName Field Functions 
      bool hasProductVersionName() const { return this->productVersionName_ != nullptr;};
      void deleteProductVersionName() { this->productVersionName_ = nullptr;};
      inline string getProductVersionName() const { DARABONBA_PTR_GET_DEFAULT(productVersionName_, "") };
      inline Module& setProductVersionName(string productVersionName) { DARABONBA_PTR_SET_VALUE(productVersionName_, productVersionName) };


      // shareCount Field Functions 
      bool hasShareCount() const { return this->shareCount_ != nullptr;};
      void deleteShareCount() { this->shareCount_ = nullptr;};
      inline int32_t getShareCount() const { DARABONBA_PTR_GET_DEFAULT(shareCount_, 0) };
      inline Module& setShareCount(int32_t shareCount) { DARABONBA_PTR_SET_VALUE(shareCount_, shareCount) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Module& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Module& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Module& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // thumbnailUrl Field Functions 
      bool hasThumbnailUrl() const { return this->thumbnailUrl_ != nullptr;};
      void deleteThumbnailUrl() { this->thumbnailUrl_ = nullptr;};
      inline string getThumbnailUrl() const { DARABONBA_PTR_GET_DEFAULT(thumbnailUrl_, "") };
      inline Module& setThumbnailUrl(string thumbnailUrl) { DARABONBA_PTR_SET_VALUE(thumbnailUrl_, thumbnailUrl) };


      // viewCount Field Functions 
      bool hasViewCount() const { return this->viewCount_ != nullptr;};
      void deleteViewCount() { this->viewCount_ = nullptr;};
      inline int32_t getViewCount() const { DARABONBA_PTR_GET_DEFAULT(viewCount_, 0) };
      inline Module& setViewCount(int32_t viewCount) { DARABONBA_PTR_SET_VALUE(viewCount_, viewCount) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline Module& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      shared_ptr<string> appType_ {};
      shared_ptr<string> bizId_ {};
      shared_ptr<string> colorScheme_ {};
      shared_ptr<string> colorSchemeName_ {};
      shared_ptr<int32_t> copyCount_ {};
      shared_ptr<string> creator_ {};
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
      shared_ptr<string> gmtCreateTime_ {};
      // modify time
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> industry_ {};
      shared_ptr<string> industryName_ {};
      shared_ptr<string> lastModifier_ {};
      shared_ptr<int32_t> likeCount_ {};
      shared_ptr<bool> liked_ {};
      shared_ptr<string> metadata_ {};
      shared_ptr<string> previewUrl_ {};
      shared_ptr<string> productVersion_ {};
      shared_ptr<string> productVersionName_ {};
      shared_ptr<int32_t> shareCount_ {};
      // trial,draft,live,refunded,expired,released
      shared_ptr<string> status_ {};
      shared_ptr<string> templateId_ {};
      shared_ptr<string> templateName_ {};
      shared_ptr<string> thumbnailUrl_ {};
      shared_ptr<int32_t> viewCount_ {};
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetAppTemplateResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline GetAppTemplateResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetAppTemplateResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetAppTemplateResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetAppTemplateResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline GetAppTemplateResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline GetAppTemplateResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const GetAppTemplateResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, GetAppTemplateResponseBody::Module) };
    inline GetAppTemplateResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, GetAppTemplateResponseBody::Module) };
    inline GetAppTemplateResponseBody& setModule(const GetAppTemplateResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline GetAppTemplateResponseBody& setModule(GetAppTemplateResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline GetAppTemplateResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline GetAppTemplateResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline GetAppTemplateResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<bool> allowRetry_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    shared_ptr<GetAppTemplateResponseBody::Module> module_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> rootErrorCode_ {};
    shared_ptr<string> rootErrorMsg_ {};
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
