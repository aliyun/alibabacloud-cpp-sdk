// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPTEMPLATESRESPONSEBODY_HPP_
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
  class ListAppTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_TO_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_TO_JSON(Synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_FROM_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_FROM_JSON(Synchro, synchro_);
    };
    ListAppTemplatesResponseBody() = default ;
    ListAppTemplatesResponseBody(const ListAppTemplatesResponseBody &) = default ;
    ListAppTemplatesResponseBody(ListAppTemplatesResponseBody &&) = default ;
    ListAppTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppTemplatesResponseBody() = default ;
    ListAppTemplatesResponseBody& operator=(const ListAppTemplatesResponseBody &) = default ;
    ListAppTemplatesResponseBody& operator=(ListAppTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Next, next_);
        DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(PrePage, prePage_);
        DARABONBA_PTR_TO_JSON(ResultLimit, resultLimit_);
        DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
        DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Next, next_);
        DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
        DARABONBA_PTR_FROM_JSON(ResultLimit, resultLimit_);
        DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
        DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
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
      class Next : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Next& obj) { 
          DARABONBA_PTR_TO_JSON(AppType, appType_);
          DARABONBA_PTR_TO_JSON(BizId, bizId_);
          DARABONBA_PTR_TO_JSON(ColorScheme, colorScheme_);
          DARABONBA_PTR_TO_JSON(ColorSchemeName, colorSchemeName_);
          DARABONBA_PTR_TO_JSON(CopyCount, copyCount_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
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
        friend void from_json(const Darabonba::Json& j, Next& obj) { 
          DARABONBA_PTR_FROM_JSON(AppType, appType_);
          DARABONBA_PTR_FROM_JSON(BizId, bizId_);
          DARABONBA_PTR_FROM_JSON(ColorScheme, colorScheme_);
          DARABONBA_PTR_FROM_JSON(ColorSchemeName, colorSchemeName_);
          DARABONBA_PTR_FROM_JSON(CopyCount, copyCount_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
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
        Next() = default ;
        Next(const Next &) = default ;
        Next(Next &&) = default ;
        Next(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Next() = default ;
        Next& operator=(const Next &) = default ;
        Next& operator=(Next &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appType_ == nullptr
        && this->bizId_ == nullptr && this->colorScheme_ == nullptr && this->colorSchemeName_ == nullptr && this->copyCount_ == nullptr && this->creator_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->industry_ == nullptr && this->industryName_ == nullptr
        && this->lastModifier_ == nullptr && this->likeCount_ == nullptr && this->liked_ == nullptr && this->metadata_ == nullptr && this->previewUrl_ == nullptr
        && this->productVersion_ == nullptr && this->productVersionName_ == nullptr && this->shareCount_ == nullptr && this->status_ == nullptr && this->templateId_ == nullptr
        && this->templateName_ == nullptr && this->thumbnailUrl_ == nullptr && this->viewCount_ == nullptr && this->weight_ == nullptr; };
        // appType Field Functions 
        bool hasAppType() const { return this->appType_ != nullptr;};
        void deleteAppType() { this->appType_ = nullptr;};
        inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
        inline Next& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


        // bizId Field Functions 
        bool hasBizId() const { return this->bizId_ != nullptr;};
        void deleteBizId() { this->bizId_ = nullptr;};
        inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
        inline Next& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


        // colorScheme Field Functions 
        bool hasColorScheme() const { return this->colorScheme_ != nullptr;};
        void deleteColorScheme() { this->colorScheme_ = nullptr;};
        inline string getColorScheme() const { DARABONBA_PTR_GET_DEFAULT(colorScheme_, "") };
        inline Next& setColorScheme(string colorScheme) { DARABONBA_PTR_SET_VALUE(colorScheme_, colorScheme) };


        // colorSchemeName Field Functions 
        bool hasColorSchemeName() const { return this->colorSchemeName_ != nullptr;};
        void deleteColorSchemeName() { this->colorSchemeName_ = nullptr;};
        inline string getColorSchemeName() const { DARABONBA_PTR_GET_DEFAULT(colorSchemeName_, "") };
        inline Next& setColorSchemeName(string colorSchemeName) { DARABONBA_PTR_SET_VALUE(colorSchemeName_, colorSchemeName) };


        // copyCount Field Functions 
        bool hasCopyCount() const { return this->copyCount_ != nullptr;};
        void deleteCopyCount() { this->copyCount_ = nullptr;};
        inline int32_t getCopyCount() const { DARABONBA_PTR_GET_DEFAULT(copyCount_, 0) };
        inline Next& setCopyCount(int32_t copyCount) { DARABONBA_PTR_SET_VALUE(copyCount_, copyCount) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline Next& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Next& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Next& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Next& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // industry Field Functions 
        bool hasIndustry() const { return this->industry_ != nullptr;};
        void deleteIndustry() { this->industry_ = nullptr;};
        inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
        inline Next& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


        // industryName Field Functions 
        bool hasIndustryName() const { return this->industryName_ != nullptr;};
        void deleteIndustryName() { this->industryName_ = nullptr;};
        inline string getIndustryName() const { DARABONBA_PTR_GET_DEFAULT(industryName_, "") };
        inline Next& setIndustryName(string industryName) { DARABONBA_PTR_SET_VALUE(industryName_, industryName) };


        // lastModifier Field Functions 
        bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
        void deleteLastModifier() { this->lastModifier_ = nullptr;};
        inline string getLastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
        inline Next& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


        // likeCount Field Functions 
        bool hasLikeCount() const { return this->likeCount_ != nullptr;};
        void deleteLikeCount() { this->likeCount_ = nullptr;};
        inline int32_t getLikeCount() const { DARABONBA_PTR_GET_DEFAULT(likeCount_, 0) };
        inline Next& setLikeCount(int32_t likeCount) { DARABONBA_PTR_SET_VALUE(likeCount_, likeCount) };


        // liked Field Functions 
        bool hasLiked() const { return this->liked_ != nullptr;};
        void deleteLiked() { this->liked_ = nullptr;};
        inline bool getLiked() const { DARABONBA_PTR_GET_DEFAULT(liked_, false) };
        inline Next& setLiked(bool liked) { DARABONBA_PTR_SET_VALUE(liked_, liked) };


        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline string getMetadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
        inline Next& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


        // previewUrl Field Functions 
        bool hasPreviewUrl() const { return this->previewUrl_ != nullptr;};
        void deletePreviewUrl() { this->previewUrl_ = nullptr;};
        inline string getPreviewUrl() const { DARABONBA_PTR_GET_DEFAULT(previewUrl_, "") };
        inline Next& setPreviewUrl(string previewUrl) { DARABONBA_PTR_SET_VALUE(previewUrl_, previewUrl) };


        // productVersion Field Functions 
        bool hasProductVersion() const { return this->productVersion_ != nullptr;};
        void deleteProductVersion() { this->productVersion_ = nullptr;};
        inline string getProductVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
        inline Next& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


        // productVersionName Field Functions 
        bool hasProductVersionName() const { return this->productVersionName_ != nullptr;};
        void deleteProductVersionName() { this->productVersionName_ = nullptr;};
        inline string getProductVersionName() const { DARABONBA_PTR_GET_DEFAULT(productVersionName_, "") };
        inline Next& setProductVersionName(string productVersionName) { DARABONBA_PTR_SET_VALUE(productVersionName_, productVersionName) };


        // shareCount Field Functions 
        bool hasShareCount() const { return this->shareCount_ != nullptr;};
        void deleteShareCount() { this->shareCount_ = nullptr;};
        inline int32_t getShareCount() const { DARABONBA_PTR_GET_DEFAULT(shareCount_, 0) };
        inline Next& setShareCount(int32_t shareCount) { DARABONBA_PTR_SET_VALUE(shareCount_, shareCount) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Next& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
        inline Next& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline Next& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


        // thumbnailUrl Field Functions 
        bool hasThumbnailUrl() const { return this->thumbnailUrl_ != nullptr;};
        void deleteThumbnailUrl() { this->thumbnailUrl_ = nullptr;};
        inline string getThumbnailUrl() const { DARABONBA_PTR_GET_DEFAULT(thumbnailUrl_, "") };
        inline Next& setThumbnailUrl(string thumbnailUrl) { DARABONBA_PTR_SET_VALUE(thumbnailUrl_, thumbnailUrl) };


        // viewCount Field Functions 
        bool hasViewCount() const { return this->viewCount_ != nullptr;};
        void deleteViewCount() { this->viewCount_ = nullptr;};
        inline int32_t getViewCount() const { DARABONBA_PTR_GET_DEFAULT(viewCount_, 0) };
        inline Next& setViewCount(int32_t viewCount) { DARABONBA_PTR_SET_VALUE(viewCount_, viewCount) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline Next& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The application type.
        shared_ptr<string> appType_ {};
        // The BizId of the associated application instance.
        shared_ptr<string> bizId_ {};
        // The color.
        shared_ptr<string> colorScheme_ {};
        // The color name.
        shared_ptr<string> colorSchemeName_ {};
        // The actual amount of data copied from the original table during a DMS lock-free schema change.
        shared_ptr<int32_t> copyCount_ {};
        // The tenant user information.
        shared_ptr<string> creator_ {};
        // The creation time.
        shared_ptr<string> gmtCreate_ {};
        // The modification time.
        shared_ptr<string> gmtModified_ {};
        // The primary key.
        shared_ptr<int64_t> id_ {};
        // The industry. Default value: **common** (general industry). Valid values:
        // 
        // - **microVideo**: short video industry.
        // 
        // - **common**: general industry.
        shared_ptr<string> industry_ {};
        // The industry name.
        shared_ptr<string> industryName_ {};
        // The ID of the last modifier.
        shared_ptr<string> lastModifier_ {};
        // The number of likes.
        shared_ptr<int32_t> likeCount_ {};
        // Indicates whether the current user has liked this template.
        shared_ptr<bool> liked_ {};
        // The remediation content.
        shared_ptr<string> metadata_ {};
        // The preview URL.
        shared_ptr<string> previewUrl_ {};
        // The product version. Valid values:
        // - **BasicVersion**: Basic edition.
        // - **EnterpriseVersion**: Enterprise edition.
        // > This parameter is required only when ProductForm is set to IntegrationForm.
        shared_ptr<string> productVersion_ {};
        // The Edition name.
        shared_ptr<string> productVersionName_ {};
        // The number of shares.
        shared_ptr<int32_t> shareCount_ {};
        // Valid values: unknown, init, testing, online.
        shared_ptr<string> status_ {};
        // The template ID.
        shared_ptr<string> templateId_ {};
        // The template name.
        shared_ptr<string> templateName_ {};
        // The application thumbnail URL.
        shared_ptr<string> thumbnailUrl_ {};
        // The number of views.
        shared_ptr<int32_t> viewCount_ {};
        // The weight.
        shared_ptr<int32_t> weight_ {};
      };

      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
        inline Data& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


        // bizId Field Functions 
        bool hasBizId() const { return this->bizId_ != nullptr;};
        void deleteBizId() { this->bizId_ = nullptr;};
        inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
        inline Data& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


        // colorScheme Field Functions 
        bool hasColorScheme() const { return this->colorScheme_ != nullptr;};
        void deleteColorScheme() { this->colorScheme_ = nullptr;};
        inline string getColorScheme() const { DARABONBA_PTR_GET_DEFAULT(colorScheme_, "") };
        inline Data& setColorScheme(string colorScheme) { DARABONBA_PTR_SET_VALUE(colorScheme_, colorScheme) };


        // colorSchemeName Field Functions 
        bool hasColorSchemeName() const { return this->colorSchemeName_ != nullptr;};
        void deleteColorSchemeName() { this->colorSchemeName_ = nullptr;};
        inline string getColorSchemeName() const { DARABONBA_PTR_GET_DEFAULT(colorSchemeName_, "") };
        inline Data& setColorSchemeName(string colorSchemeName) { DARABONBA_PTR_SET_VALUE(colorSchemeName_, colorSchemeName) };


        // copyCount Field Functions 
        bool hasCopyCount() const { return this->copyCount_ != nullptr;};
        void deleteCopyCount() { this->copyCount_ = nullptr;};
        inline int32_t getCopyCount() const { DARABONBA_PTR_GET_DEFAULT(copyCount_, 0) };
        inline Data& setCopyCount(int32_t copyCount) { DARABONBA_PTR_SET_VALUE(copyCount_, copyCount) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline Data& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // gmtCreateTime Field Functions 
        bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
        void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
        inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
        inline Data& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


        // gmtModifiedTime Field Functions 
        bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
        void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
        inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
        inline Data& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // industry Field Functions 
        bool hasIndustry() const { return this->industry_ != nullptr;};
        void deleteIndustry() { this->industry_ = nullptr;};
        inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
        inline Data& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


        // industryName Field Functions 
        bool hasIndustryName() const { return this->industryName_ != nullptr;};
        void deleteIndustryName() { this->industryName_ = nullptr;};
        inline string getIndustryName() const { DARABONBA_PTR_GET_DEFAULT(industryName_, "") };
        inline Data& setIndustryName(string industryName) { DARABONBA_PTR_SET_VALUE(industryName_, industryName) };


        // lastModifier Field Functions 
        bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
        void deleteLastModifier() { this->lastModifier_ = nullptr;};
        inline string getLastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
        inline Data& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


        // likeCount Field Functions 
        bool hasLikeCount() const { return this->likeCount_ != nullptr;};
        void deleteLikeCount() { this->likeCount_ = nullptr;};
        inline int32_t getLikeCount() const { DARABONBA_PTR_GET_DEFAULT(likeCount_, 0) };
        inline Data& setLikeCount(int32_t likeCount) { DARABONBA_PTR_SET_VALUE(likeCount_, likeCount) };


        // liked Field Functions 
        bool hasLiked() const { return this->liked_ != nullptr;};
        void deleteLiked() { this->liked_ = nullptr;};
        inline bool getLiked() const { DARABONBA_PTR_GET_DEFAULT(liked_, false) };
        inline Data& setLiked(bool liked) { DARABONBA_PTR_SET_VALUE(liked_, liked) };


        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline string getMetadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
        inline Data& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


        // previewUrl Field Functions 
        bool hasPreviewUrl() const { return this->previewUrl_ != nullptr;};
        void deletePreviewUrl() { this->previewUrl_ = nullptr;};
        inline string getPreviewUrl() const { DARABONBA_PTR_GET_DEFAULT(previewUrl_, "") };
        inline Data& setPreviewUrl(string previewUrl) { DARABONBA_PTR_SET_VALUE(previewUrl_, previewUrl) };


        // productVersion Field Functions 
        bool hasProductVersion() const { return this->productVersion_ != nullptr;};
        void deleteProductVersion() { this->productVersion_ = nullptr;};
        inline string getProductVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
        inline Data& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


        // productVersionName Field Functions 
        bool hasProductVersionName() const { return this->productVersionName_ != nullptr;};
        void deleteProductVersionName() { this->productVersionName_ = nullptr;};
        inline string getProductVersionName() const { DARABONBA_PTR_GET_DEFAULT(productVersionName_, "") };
        inline Data& setProductVersionName(string productVersionName) { DARABONBA_PTR_SET_VALUE(productVersionName_, productVersionName) };


        // shareCount Field Functions 
        bool hasShareCount() const { return this->shareCount_ != nullptr;};
        void deleteShareCount() { this->shareCount_ = nullptr;};
        inline int32_t getShareCount() const { DARABONBA_PTR_GET_DEFAULT(shareCount_, 0) };
        inline Data& setShareCount(int32_t shareCount) { DARABONBA_PTR_SET_VALUE(shareCount_, shareCount) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
        inline Data& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline Data& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


        // thumbnailUrl Field Functions 
        bool hasThumbnailUrl() const { return this->thumbnailUrl_ != nullptr;};
        void deleteThumbnailUrl() { this->thumbnailUrl_ = nullptr;};
        inline string getThumbnailUrl() const { DARABONBA_PTR_GET_DEFAULT(thumbnailUrl_, "") };
        inline Data& setThumbnailUrl(string thumbnailUrl) { DARABONBA_PTR_SET_VALUE(thumbnailUrl_, thumbnailUrl) };


        // viewCount Field Functions 
        bool hasViewCount() const { return this->viewCount_ != nullptr;};
        void deleteViewCount() { this->viewCount_ = nullptr;};
        inline int32_t getViewCount() const { DARABONBA_PTR_GET_DEFAULT(viewCount_, 0) };
        inline Data& setViewCount(int32_t viewCount) { DARABONBA_PTR_SET_VALUE(viewCount_, viewCount) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline Data& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The application type.
        shared_ptr<string> appType_ {};
        // The application instance ID.
        shared_ptr<string> bizId_ {};
        // The color.
        shared_ptr<string> colorScheme_ {};
        // The color name.
        shared_ptr<string> colorSchemeName_ {};
        // The actual amount of data copied from the original table during a DMS lock-free schema change.
        shared_ptr<int32_t> copyCount_ {};
        // The creator ID.
        shared_ptr<string> creator_ {};
        // The creation time.
        // 
        // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
        shared_ptr<string> gmtCreateTime_ {};
        // The modification time.
        // 
        // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
        shared_ptr<string> gmtModifiedTime_ {};
        // The primary key.
        shared_ptr<int64_t> id_ {};
        // The industry of the file to be analyzed. Default value: **common** (general industry). Select an appropriate industry so that the backend matches the applicable algorithm combination. Valid values: 
        // 
        // - **microVideo**: short video industry.
        // - **common**: general industry.
        shared_ptr<string> industry_ {};
        // The industry name.
        shared_ptr<string> industryName_ {};
        // The ID of the last modifier.
        shared_ptr<string> lastModifier_ {};
        // The number of likes.
        shared_ptr<int32_t> likeCount_ {};
        // Indicates whether the current user has liked this template.
        shared_ptr<bool> liked_ {};
        // The remediation action.
        shared_ptr<string> metadata_ {};
        // The preview URL.
        shared_ptr<string> previewUrl_ {};
        // The product version. Valid values:
        // - **BasicVersion**: Basic edition.
        // - **EnterpriseVersion**: Enterprise edition.
        shared_ptr<string> productVersion_ {};
        // The Edition name.
        shared_ptr<string> productVersionName_ {};
        // The number of shares.
        shared_ptr<int32_t> shareCount_ {};
        // The file status.
        shared_ptr<string> status_ {};
        // The template ID.
        shared_ptr<string> templateId_ {};
        // The template name.
        // - Maximum length: 128.
        shared_ptr<string> templateName_ {};
        // The application thumbnail URL.
        shared_ptr<string> thumbnailUrl_ {};
        // The number of views.
        shared_ptr<int32_t> viewCount_ {};
        // The weight.
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->data_ == nullptr && this->next_ == nullptr && this->nextPage_ == nullptr && this->pageSize_ == nullptr && this->prePage_ == nullptr
        && this->resultLimit_ == nullptr && this->totalItemNum_ == nullptr && this->totalPageNum_ == nullptr; };
      // currentPageNum Field Functions 
      bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
      void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
      inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
      inline Module& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Module::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Module::Data>) };
      inline vector<Module::Data> getData() { DARABONBA_PTR_GET(data_, vector<Module::Data>) };
      inline Module& setData(const vector<Module::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Module& setData(vector<Module::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // next Field Functions 
      bool hasNext() const { return this->next_ != nullptr;};
      void deleteNext() { this->next_ = nullptr;};
      inline const Module::Next & getNext() const { DARABONBA_PTR_GET_CONST(next_, Module::Next) };
      inline Module::Next getNext() { DARABONBA_PTR_GET(next_, Module::Next) };
      inline Module& setNext(const Module::Next & next) { DARABONBA_PTR_SET_VALUE(next_, next) };
      inline Module& setNext(Module::Next && next) { DARABONBA_PTR_SET_RVALUE(next_, next) };


      // nextPage Field Functions 
      bool hasNextPage() const { return this->nextPage_ != nullptr;};
      void deleteNextPage() { this->nextPage_ = nullptr;};
      inline bool getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, false) };
      inline Module& setNextPage(bool nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Module& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // prePage Field Functions 
      bool hasPrePage() const { return this->prePage_ != nullptr;};
      void deletePrePage() { this->prePage_ = nullptr;};
      inline bool getPrePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, false) };
      inline Module& setPrePage(bool prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


      // resultLimit Field Functions 
      bool hasResultLimit() const { return this->resultLimit_ != nullptr;};
      void deleteResultLimit() { this->resultLimit_ = nullptr;};
      inline bool getResultLimit() const { DARABONBA_PTR_GET_DEFAULT(resultLimit_, false) };
      inline Module& setResultLimit(bool resultLimit) { DARABONBA_PTR_SET_VALUE(resultLimit_, resultLimit) };


      // totalItemNum Field Functions 
      bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
      void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
      inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
      inline Module& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


      // totalPageNum Field Functions 
      bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
      void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
      inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
      inline Module& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


    protected:
      // The current page number.
      shared_ptr<int32_t> currentPageNum_ {};
      // The request result.
      shared_ptr<vector<Module::Data>> data_ {};
      // The decision weight.
      shared_ptr<Module::Next> next_ {};
      // Indicates whether a next page exists.
      shared_ptr<bool> nextPage_ {};
      // The page size.
      shared_ptr<int32_t> pageSize_ {};
      // Indicates whether a previous page exists.
      shared_ptr<bool> prePage_ {};
      // In addition to the pagination limit, the server processes a maximum of 1000 recent records per query. If the results exceed 1000 records, **ResultLimit** is **true**. Narrow the time range and search again. Otherwise, **ResultLimit** is **false**.
      shared_ptr<bool> resultLimit_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalItemNum_ {};
      // The total number of pages.
      shared_ptr<int32_t> totalPageNum_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->maxResults_ == nullptr && this->module_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr
        && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListAppTemplatesResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline ListAppTemplatesResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAppTemplatesResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListAppTemplatesResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListAppTemplatesResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline ListAppTemplatesResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline ListAppTemplatesResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAppTemplatesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const ListAppTemplatesResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, ListAppTemplatesResponseBody::Module) };
    inline ListAppTemplatesResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, ListAppTemplatesResponseBody::Module) };
    inline ListAppTemplatesResponseBody& setModule(const ListAppTemplatesResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline ListAppTemplatesResponseBody& setModule(ListAppTemplatesResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAppTemplatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline ListAppTemplatesResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline ListAppTemplatesResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline ListAppTemplatesResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    // The detailed reason why access was denied.
    shared_ptr<string> accessDeniedDetail_ {};
    // Indicates whether retry is allowed.
    shared_ptr<bool> allowRetry_ {};
    // The application name.
    shared_ptr<string> appName_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic message. This parameter is not in use. Ignore this parameter.
    shared_ptr<string> dynamicMessage_ {};
    // The error arguments.
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    // The number of entries per query.
    // 
    // Valid values: 10 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The response data.
    shared_ptr<ListAppTemplatesResponseBody::Module> module_ {};
    // The token for the next query. This parameter is empty if no more results exist.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The error code.
    shared_ptr<string> rootErrorCode_ {};
    // The exception message.
    shared_ptr<string> rootErrorMsg_ {};
    // The reserved parameter.
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
