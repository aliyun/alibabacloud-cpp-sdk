// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class SearchMediaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MediaInfoList, mediaInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScrollToken, scrollToken_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MediaInfoList, mediaInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScrollToken, scrollToken_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    SearchMediaResponseBody() = default ;
    SearchMediaResponseBody(const SearchMediaResponseBody &) = default ;
    SearchMediaResponseBody(SearchMediaResponseBody &&) = default ;
    SearchMediaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBody() = default ;
    SearchMediaResponseBody& operator=(const SearchMediaResponseBody &) = default ;
    SearchMediaResponseBody& operator=(SearchMediaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(CustomFields, customFields_);
        DARABONBA_PTR_TO_JSON(FileInfoList, fileInfoList_);
        DARABONBA_PTR_TO_JSON(MediaBasicInfo, mediaBasicInfo_);
        DARABONBA_PTR_TO_JSON(MediaDynamicInfo, mediaDynamicInfo_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      };
      friend void from_json(const Darabonba::Json& j, MediaInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomFields, customFields_);
        DARABONBA_PTR_FROM_JSON(FileInfoList, fileInfoList_);
        DARABONBA_PTR_FROM_JSON(MediaBasicInfo, mediaBasicInfo_);
        DARABONBA_PTR_FROM_JSON(MediaDynamicInfo, mediaDynamicInfo_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      };
      MediaInfoList() = default ;
      MediaInfoList(const MediaInfoList &) = default ;
      MediaInfoList(MediaInfoList &&) = default ;
      MediaInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaInfoList() = default ;
      MediaInfoList& operator=(const MediaInfoList &) = default ;
      MediaInfoList& operator=(MediaInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MediaDynamicInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MediaDynamicInfo& obj) { 
          DARABONBA_PTR_TO_JSON(DynamicMetaData, dynamicMetaData_);
          DARABONBA_PTR_TO_JSON(MediaExtraInfo, mediaExtraInfo_);
        };
        friend void from_json(const Darabonba::Json& j, MediaDynamicInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(DynamicMetaData, dynamicMetaData_);
          DARABONBA_PTR_FROM_JSON(MediaExtraInfo, mediaExtraInfo_);
        };
        MediaDynamicInfo() = default ;
        MediaDynamicInfo(const MediaDynamicInfo &) = default ;
        MediaDynamicInfo(MediaDynamicInfo &&) = default ;
        MediaDynamicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MediaDynamicInfo() = default ;
        MediaDynamicInfo& operator=(const MediaDynamicInfo &) = default ;
        MediaDynamicInfo& operator=(MediaDynamicInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MediaExtraInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MediaExtraInfo& obj) { 
            DARABONBA_PTR_TO_JSON(AiAuditJobId, aiAuditJobId_);
            DARABONBA_PTR_TO_JSON(AiAuditLabel, aiAuditLabel_);
            DARABONBA_PTR_TO_JSON(AiAuditResult, aiAuditResult_);
            DARABONBA_PTR_TO_JSON(AiAuditStatus, aiAuditStatus_);
            DARABONBA_PTR_TO_JSON(AiAuditTemplate, aiAuditTemplate_);
            DARABONBA_PTR_TO_JSON(ManualAuditResult, manualAuditResult_);
            DARABONBA_PTR_TO_JSON(ManualAuditStatus, manualAuditStatus_);
          };
          friend void from_json(const Darabonba::Json& j, MediaExtraInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(AiAuditJobId, aiAuditJobId_);
            DARABONBA_PTR_FROM_JSON(AiAuditLabel, aiAuditLabel_);
            DARABONBA_PTR_FROM_JSON(AiAuditResult, aiAuditResult_);
            DARABONBA_PTR_FROM_JSON(AiAuditStatus, aiAuditStatus_);
            DARABONBA_PTR_FROM_JSON(AiAuditTemplate, aiAuditTemplate_);
            DARABONBA_PTR_FROM_JSON(ManualAuditResult, manualAuditResult_);
            DARABONBA_PTR_FROM_JSON(ManualAuditStatus, manualAuditStatus_);
          };
          MediaExtraInfo() = default ;
          MediaExtraInfo(const MediaExtraInfo &) = default ;
          MediaExtraInfo(MediaExtraInfo &&) = default ;
          MediaExtraInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MediaExtraInfo() = default ;
          MediaExtraInfo& operator=(const MediaExtraInfo &) = default ;
          MediaExtraInfo& operator=(MediaExtraInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->aiAuditJobId_ == nullptr
        && this->aiAuditLabel_ == nullptr && this->aiAuditResult_ == nullptr && this->aiAuditStatus_ == nullptr && this->aiAuditTemplate_ == nullptr && this->manualAuditResult_ == nullptr
        && this->manualAuditStatus_ == nullptr; };
          // aiAuditJobId Field Functions 
          bool hasAiAuditJobId() const { return this->aiAuditJobId_ != nullptr;};
          void deleteAiAuditJobId() { this->aiAuditJobId_ = nullptr;};
          inline string getAiAuditJobId() const { DARABONBA_PTR_GET_DEFAULT(aiAuditJobId_, "") };
          inline MediaExtraInfo& setAiAuditJobId(string aiAuditJobId) { DARABONBA_PTR_SET_VALUE(aiAuditJobId_, aiAuditJobId) };


          // aiAuditLabel Field Functions 
          bool hasAiAuditLabel() const { return this->aiAuditLabel_ != nullptr;};
          void deleteAiAuditLabel() { this->aiAuditLabel_ = nullptr;};
          inline string getAiAuditLabel() const { DARABONBA_PTR_GET_DEFAULT(aiAuditLabel_, "") };
          inline MediaExtraInfo& setAiAuditLabel(string aiAuditLabel) { DARABONBA_PTR_SET_VALUE(aiAuditLabel_, aiAuditLabel) };


          // aiAuditResult Field Functions 
          bool hasAiAuditResult() const { return this->aiAuditResult_ != nullptr;};
          void deleteAiAuditResult() { this->aiAuditResult_ = nullptr;};
          inline string getAiAuditResult() const { DARABONBA_PTR_GET_DEFAULT(aiAuditResult_, "") };
          inline MediaExtraInfo& setAiAuditResult(string aiAuditResult) { DARABONBA_PTR_SET_VALUE(aiAuditResult_, aiAuditResult) };


          // aiAuditStatus Field Functions 
          bool hasAiAuditStatus() const { return this->aiAuditStatus_ != nullptr;};
          void deleteAiAuditStatus() { this->aiAuditStatus_ = nullptr;};
          inline string getAiAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(aiAuditStatus_, "") };
          inline MediaExtraInfo& setAiAuditStatus(string aiAuditStatus) { DARABONBA_PTR_SET_VALUE(aiAuditStatus_, aiAuditStatus) };


          // aiAuditTemplate Field Functions 
          bool hasAiAuditTemplate() const { return this->aiAuditTemplate_ != nullptr;};
          void deleteAiAuditTemplate() { this->aiAuditTemplate_ = nullptr;};
          inline string getAiAuditTemplate() const { DARABONBA_PTR_GET_DEFAULT(aiAuditTemplate_, "") };
          inline MediaExtraInfo& setAiAuditTemplate(string aiAuditTemplate) { DARABONBA_PTR_SET_VALUE(aiAuditTemplate_, aiAuditTemplate) };


          // manualAuditResult Field Functions 
          bool hasManualAuditResult() const { return this->manualAuditResult_ != nullptr;};
          void deleteManualAuditResult() { this->manualAuditResult_ = nullptr;};
          inline string getManualAuditResult() const { DARABONBA_PTR_GET_DEFAULT(manualAuditResult_, "") };
          inline MediaExtraInfo& setManualAuditResult(string manualAuditResult) { DARABONBA_PTR_SET_VALUE(manualAuditResult_, manualAuditResult) };


          // manualAuditStatus Field Functions 
          bool hasManualAuditStatus() const { return this->manualAuditStatus_ != nullptr;};
          void deleteManualAuditStatus() { this->manualAuditStatus_ = nullptr;};
          inline string getManualAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(manualAuditStatus_, "") };
          inline MediaExtraInfo& setManualAuditStatus(string manualAuditStatus) { DARABONBA_PTR_SET_VALUE(manualAuditStatus_, manualAuditStatus) };


        protected:
          shared_ptr<string> aiAuditJobId_ {};
          shared_ptr<string> aiAuditLabel_ {};
          shared_ptr<string> aiAuditResult_ {};
          shared_ptr<string> aiAuditStatus_ {};
          shared_ptr<string> aiAuditTemplate_ {};
          shared_ptr<string> manualAuditResult_ {};
          shared_ptr<string> manualAuditStatus_ {};
        };

        class DynamicMetaData : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DynamicMetaData& obj) { 
            DARABONBA_PTR_TO_JSON(Data, data_);
            DARABONBA_PTR_TO_JSON(EntityId, entityId_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, DynamicMetaData& obj) { 
            DARABONBA_PTR_FROM_JSON(Data, data_);
            DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          DynamicMetaData() = default ;
          DynamicMetaData(const DynamicMetaData &) = default ;
          DynamicMetaData(DynamicMetaData &&) = default ;
          DynamicMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DynamicMetaData() = default ;
          DynamicMetaData& operator=(const DynamicMetaData &) = default ;
          DynamicMetaData& operator=(DynamicMetaData &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->data_ == nullptr
        && this->entityId_ == nullptr && this->type_ == nullptr; };
          // data Field Functions 
          bool hasData() const { return this->data_ != nullptr;};
          void deleteData() { this->data_ = nullptr;};
          inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
          inline DynamicMetaData& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


          // entityId Field Functions 
          bool hasEntityId() const { return this->entityId_ != nullptr;};
          void deleteEntityId() { this->entityId_ = nullptr;};
          inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
          inline DynamicMetaData& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline DynamicMetaData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> data_ {};
          shared_ptr<string> entityId_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->dynamicMetaData_ == nullptr
        && this->mediaExtraInfo_ == nullptr; };
        // dynamicMetaData Field Functions 
        bool hasDynamicMetaData() const { return this->dynamicMetaData_ != nullptr;};
        void deleteDynamicMetaData() { this->dynamicMetaData_ = nullptr;};
        inline const MediaDynamicInfo::DynamicMetaData & getDynamicMetaData() const { DARABONBA_PTR_GET_CONST(dynamicMetaData_, MediaDynamicInfo::DynamicMetaData) };
        inline MediaDynamicInfo::DynamicMetaData getDynamicMetaData() { DARABONBA_PTR_GET(dynamicMetaData_, MediaDynamicInfo::DynamicMetaData) };
        inline MediaDynamicInfo& setDynamicMetaData(const MediaDynamicInfo::DynamicMetaData & dynamicMetaData) { DARABONBA_PTR_SET_VALUE(dynamicMetaData_, dynamicMetaData) };
        inline MediaDynamicInfo& setDynamicMetaData(MediaDynamicInfo::DynamicMetaData && dynamicMetaData) { DARABONBA_PTR_SET_RVALUE(dynamicMetaData_, dynamicMetaData) };


        // mediaExtraInfo Field Functions 
        bool hasMediaExtraInfo() const { return this->mediaExtraInfo_ != nullptr;};
        void deleteMediaExtraInfo() { this->mediaExtraInfo_ = nullptr;};
        inline const MediaDynamicInfo::MediaExtraInfo & getMediaExtraInfo() const { DARABONBA_PTR_GET_CONST(mediaExtraInfo_, MediaDynamicInfo::MediaExtraInfo) };
        inline MediaDynamicInfo::MediaExtraInfo getMediaExtraInfo() { DARABONBA_PTR_GET(mediaExtraInfo_, MediaDynamicInfo::MediaExtraInfo) };
        inline MediaDynamicInfo& setMediaExtraInfo(const MediaDynamicInfo::MediaExtraInfo & mediaExtraInfo) { DARABONBA_PTR_SET_VALUE(mediaExtraInfo_, mediaExtraInfo) };
        inline MediaDynamicInfo& setMediaExtraInfo(MediaDynamicInfo::MediaExtraInfo && mediaExtraInfo) { DARABONBA_PTR_SET_RVALUE(mediaExtraInfo_, mediaExtraInfo) };


      protected:
        shared_ptr<MediaDynamicInfo::DynamicMetaData> dynamicMetaData_ {};
        shared_ptr<MediaDynamicInfo::MediaExtraInfo> mediaExtraInfo_ {};
      };

      class MediaBasicInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MediaBasicInfo& obj) { 
          DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
          DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EntityId, entityId_);
          DARABONBA_PTR_TO_JSON(InputURL, inputURL_);
          DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
          DARABONBA_PTR_TO_JSON(MediaTags, mediaTags_);
          DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(SpriteImages, spriteImages_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(TranscodeStatus, transcodeStatus_);
          DARABONBA_PTR_TO_JSON(UploadSource, uploadSource_);
          DARABONBA_PTR_TO_JSON(UserData, userData_);
        };
        friend void from_json(const Darabonba::Json& j, MediaBasicInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
          DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
          DARABONBA_PTR_FROM_JSON(InputURL, inputURL_);
          DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
          DARABONBA_PTR_FROM_JSON(MediaTags, mediaTags_);
          DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(SpriteImages, spriteImages_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(TranscodeStatus, transcodeStatus_);
          DARABONBA_PTR_FROM_JSON(UploadSource, uploadSource_);
          DARABONBA_PTR_FROM_JSON(UserData, userData_);
        };
        MediaBasicInfo() = default ;
        MediaBasicInfo(const MediaBasicInfo &) = default ;
        MediaBasicInfo(MediaBasicInfo &&) = default ;
        MediaBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MediaBasicInfo() = default ;
        MediaBasicInfo& operator=(const MediaBasicInfo &) = default ;
        MediaBasicInfo& operator=(MediaBasicInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->businessType_ == nullptr
        && this->categoryId_ == nullptr && this->categoryName_ == nullptr && this->coverURL_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr
        && this->entityId_ == nullptr && this->inputURL_ == nullptr && this->mediaId_ == nullptr && this->mediaTags_ == nullptr && this->mediaType_ == nullptr
        && this->modifiedTime_ == nullptr && this->snapshots_ == nullptr && this->source_ == nullptr && this->spriteImages_ == nullptr && this->status_ == nullptr
        && this->title_ == nullptr && this->transcodeStatus_ == nullptr && this->uploadSource_ == nullptr && this->userData_ == nullptr; };
        // businessType Field Functions 
        bool hasBusinessType() const { return this->businessType_ != nullptr;};
        void deleteBusinessType() { this->businessType_ = nullptr;};
        inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
        inline MediaBasicInfo& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


        // categoryId Field Functions 
        bool hasCategoryId() const { return this->categoryId_ != nullptr;};
        void deleteCategoryId() { this->categoryId_ = nullptr;};
        inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
        inline MediaBasicInfo& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


        // categoryName Field Functions 
        bool hasCategoryName() const { return this->categoryName_ != nullptr;};
        void deleteCategoryName() { this->categoryName_ = nullptr;};
        inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
        inline MediaBasicInfo& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


        // coverURL Field Functions 
        bool hasCoverURL() const { return this->coverURL_ != nullptr;};
        void deleteCoverURL() { this->coverURL_ = nullptr;};
        inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
        inline MediaBasicInfo& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline MediaBasicInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline MediaBasicInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline MediaBasicInfo& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // inputURL Field Functions 
        bool hasInputURL() const { return this->inputURL_ != nullptr;};
        void deleteInputURL() { this->inputURL_ = nullptr;};
        inline string getInputURL() const { DARABONBA_PTR_GET_DEFAULT(inputURL_, "") };
        inline MediaBasicInfo& setInputURL(string inputURL) { DARABONBA_PTR_SET_VALUE(inputURL_, inputURL) };


        // mediaId Field Functions 
        bool hasMediaId() const { return this->mediaId_ != nullptr;};
        void deleteMediaId() { this->mediaId_ = nullptr;};
        inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
        inline MediaBasicInfo& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


        // mediaTags Field Functions 
        bool hasMediaTags() const { return this->mediaTags_ != nullptr;};
        void deleteMediaTags() { this->mediaTags_ = nullptr;};
        inline string getMediaTags() const { DARABONBA_PTR_GET_DEFAULT(mediaTags_, "") };
        inline MediaBasicInfo& setMediaTags(string mediaTags) { DARABONBA_PTR_SET_VALUE(mediaTags_, mediaTags) };


        // mediaType Field Functions 
        bool hasMediaType() const { return this->mediaType_ != nullptr;};
        void deleteMediaType() { this->mediaType_ = nullptr;};
        inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
        inline MediaBasicInfo& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline MediaBasicInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // snapshots Field Functions 
        bool hasSnapshots() const { return this->snapshots_ != nullptr;};
        void deleteSnapshots() { this->snapshots_ = nullptr;};
        inline string getSnapshots() const { DARABONBA_PTR_GET_DEFAULT(snapshots_, "") };
        inline MediaBasicInfo& setSnapshots(string snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline MediaBasicInfo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // spriteImages Field Functions 
        bool hasSpriteImages() const { return this->spriteImages_ != nullptr;};
        void deleteSpriteImages() { this->spriteImages_ = nullptr;};
        inline string getSpriteImages() const { DARABONBA_PTR_GET_DEFAULT(spriteImages_, "") };
        inline MediaBasicInfo& setSpriteImages(string spriteImages) { DARABONBA_PTR_SET_VALUE(spriteImages_, spriteImages) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline MediaBasicInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline MediaBasicInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // transcodeStatus Field Functions 
        bool hasTranscodeStatus() const { return this->transcodeStatus_ != nullptr;};
        void deleteTranscodeStatus() { this->transcodeStatus_ = nullptr;};
        inline string getTranscodeStatus() const { DARABONBA_PTR_GET_DEFAULT(transcodeStatus_, "") };
        inline MediaBasicInfo& setTranscodeStatus(string transcodeStatus) { DARABONBA_PTR_SET_VALUE(transcodeStatus_, transcodeStatus) };


        // uploadSource Field Functions 
        bool hasUploadSource() const { return this->uploadSource_ != nullptr;};
        void deleteUploadSource() { this->uploadSource_ = nullptr;};
        inline string getUploadSource() const { DARABONBA_PTR_GET_DEFAULT(uploadSource_, "") };
        inline MediaBasicInfo& setUploadSource(string uploadSource) { DARABONBA_PTR_SET_VALUE(uploadSource_, uploadSource) };


        // userData Field Functions 
        bool hasUserData() const { return this->userData_ != nullptr;};
        void deleteUserData() { this->userData_ = nullptr;};
        inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
        inline MediaBasicInfo& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      protected:
        shared_ptr<string> businessType_ {};
        shared_ptr<int64_t> categoryId_ {};
        shared_ptr<string> categoryName_ {};
        shared_ptr<string> coverURL_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> entityId_ {};
        shared_ptr<string> inputURL_ {};
        shared_ptr<string> mediaId_ {};
        shared_ptr<string> mediaTags_ {};
        shared_ptr<string> mediaType_ {};
        shared_ptr<string> modifiedTime_ {};
        shared_ptr<string> snapshots_ {};
        shared_ptr<string> source_ {};
        shared_ptr<string> spriteImages_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> title_ {};
        shared_ptr<string> transcodeStatus_ {};
        shared_ptr<string> uploadSource_ {};
        shared_ptr<string> userData_ {};
      };

      class FileInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
        };
        friend void from_json(const Darabonba::Json& j, FileInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
        };
        FileInfoList() = default ;
        FileInfoList(const FileInfoList &) = default ;
        FileInfoList(FileInfoList &&) = default ;
        FileInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileInfoList() = default ;
        FileInfoList& operator=(const FileInfoList &) = default ;
        FileInfoList& operator=(FileInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FileBasicInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FileBasicInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(FileName, fileName_);
            DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
            DARABONBA_PTR_TO_JSON(FileStatus, fileStatus_);
            DARABONBA_PTR_TO_JSON(FileType, fileType_);
            DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
            DARABONBA_PTR_TO_JSON(FormatName, formatName_);
            DARABONBA_PTR_TO_JSON(Height, height_);
            DARABONBA_PTR_TO_JSON(ImagesInput, imagesInput_);
            DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(Width, width_);
          };
          friend void from_json(const Darabonba::Json& j, FileBasicInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(FileName, fileName_);
            DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
            DARABONBA_PTR_FROM_JSON(FileStatus, fileStatus_);
            DARABONBA_PTR_FROM_JSON(FileType, fileType_);
            DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
            DARABONBA_PTR_FROM_JSON(FormatName, formatName_);
            DARABONBA_PTR_FROM_JSON(Height, height_);
            DARABONBA_PTR_FROM_JSON(ImagesInput, imagesInput_);
            DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(Width, width_);
          };
          FileBasicInfo() = default ;
          FileBasicInfo(const FileBasicInfo &) = default ;
          FileBasicInfo(FileBasicInfo &&) = default ;
          FileBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FileBasicInfo() = default ;
          FileBasicInfo& operator=(const FileBasicInfo &) = default ;
          FileBasicInfo& operator=(FileBasicInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->createTime_ == nullptr && this->duration_ == nullptr && this->fileName_ == nullptr && this->fileSize_ == nullptr && this->fileStatus_ == nullptr
        && this->fileType_ == nullptr && this->fileUrl_ == nullptr && this->formatName_ == nullptr && this->height_ == nullptr && this->imagesInput_ == nullptr
        && this->modifiedTime_ == nullptr && this->region_ == nullptr && this->width_ == nullptr; };
          // bitrate Field Functions 
          bool hasBitrate() const { return this->bitrate_ != nullptr;};
          void deleteBitrate() { this->bitrate_ = nullptr;};
          inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
          inline FileBasicInfo& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline FileBasicInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
          inline FileBasicInfo& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // fileName Field Functions 
          bool hasFileName() const { return this->fileName_ != nullptr;};
          void deleteFileName() { this->fileName_ = nullptr;};
          inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
          inline FileBasicInfo& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


          // fileSize Field Functions 
          bool hasFileSize() const { return this->fileSize_ != nullptr;};
          void deleteFileSize() { this->fileSize_ = nullptr;};
          inline string getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
          inline FileBasicInfo& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


          // fileStatus Field Functions 
          bool hasFileStatus() const { return this->fileStatus_ != nullptr;};
          void deleteFileStatus() { this->fileStatus_ = nullptr;};
          inline string getFileStatus() const { DARABONBA_PTR_GET_DEFAULT(fileStatus_, "") };
          inline FileBasicInfo& setFileStatus(string fileStatus) { DARABONBA_PTR_SET_VALUE(fileStatus_, fileStatus) };


          // fileType Field Functions 
          bool hasFileType() const { return this->fileType_ != nullptr;};
          void deleteFileType() { this->fileType_ = nullptr;};
          inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
          inline FileBasicInfo& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


          // fileUrl Field Functions 
          bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
          void deleteFileUrl() { this->fileUrl_ = nullptr;};
          inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
          inline FileBasicInfo& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


          // formatName Field Functions 
          bool hasFormatName() const { return this->formatName_ != nullptr;};
          void deleteFormatName() { this->formatName_ = nullptr;};
          inline string getFormatName() const { DARABONBA_PTR_GET_DEFAULT(formatName_, "") };
          inline FileBasicInfo& setFormatName(string formatName) { DARABONBA_PTR_SET_VALUE(formatName_, formatName) };


          // height Field Functions 
          bool hasHeight() const { return this->height_ != nullptr;};
          void deleteHeight() { this->height_ = nullptr;};
          inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
          inline FileBasicInfo& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


          // imagesInput Field Functions 
          bool hasImagesInput() const { return this->imagesInput_ != nullptr;};
          void deleteImagesInput() { this->imagesInput_ = nullptr;};
          inline string getImagesInput() const { DARABONBA_PTR_GET_DEFAULT(imagesInput_, "") };
          inline FileBasicInfo& setImagesInput(string imagesInput) { DARABONBA_PTR_SET_VALUE(imagesInput_, imagesInput) };


          // modifiedTime Field Functions 
          bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
          void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
          inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
          inline FileBasicInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline FileBasicInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // width Field Functions 
          bool hasWidth() const { return this->width_ != nullptr;};
          void deleteWidth() { this->width_ = nullptr;};
          inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
          inline FileBasicInfo& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


        protected:
          shared_ptr<string> bitrate_ {};
          shared_ptr<string> createTime_ {};
          shared_ptr<string> duration_ {};
          shared_ptr<string> fileName_ {};
          shared_ptr<string> fileSize_ {};
          shared_ptr<string> fileStatus_ {};
          shared_ptr<string> fileType_ {};
          shared_ptr<string> fileUrl_ {};
          shared_ptr<string> formatName_ {};
          shared_ptr<string> height_ {};
          shared_ptr<string> imagesInput_ {};
          shared_ptr<string> modifiedTime_ {};
          shared_ptr<string> region_ {};
          shared_ptr<string> width_ {};
        };

        virtual bool empty() const override { return this->fileBasicInfo_ == nullptr; };
        // fileBasicInfo Field Functions 
        bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
        void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
        inline const FileInfoList::FileBasicInfo & getFileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, FileInfoList::FileBasicInfo) };
        inline FileInfoList::FileBasicInfo getFileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, FileInfoList::FileBasicInfo) };
        inline FileInfoList& setFileBasicInfo(const FileInfoList::FileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
        inline FileInfoList& setFileBasicInfo(FileInfoList::FileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


      protected:
        shared_ptr<FileInfoList::FileBasicInfo> fileBasicInfo_ {};
      };

      virtual bool empty() const override { return this->customFields_ == nullptr
        && this->fileInfoList_ == nullptr && this->mediaBasicInfo_ == nullptr && this->mediaDynamicInfo_ == nullptr && this->mediaId_ == nullptr; };
      // customFields Field Functions 
      bool hasCustomFields() const { return this->customFields_ != nullptr;};
      void deleteCustomFields() { this->customFields_ = nullptr;};
      inline string getCustomFields() const { DARABONBA_PTR_GET_DEFAULT(customFields_, "") };
      inline MediaInfoList& setCustomFields(string customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };


      // fileInfoList Field Functions 
      bool hasFileInfoList() const { return this->fileInfoList_ != nullptr;};
      void deleteFileInfoList() { this->fileInfoList_ = nullptr;};
      inline const vector<MediaInfoList::FileInfoList> & getFileInfoList() const { DARABONBA_PTR_GET_CONST(fileInfoList_, vector<MediaInfoList::FileInfoList>) };
      inline vector<MediaInfoList::FileInfoList> getFileInfoList() { DARABONBA_PTR_GET(fileInfoList_, vector<MediaInfoList::FileInfoList>) };
      inline MediaInfoList& setFileInfoList(const vector<MediaInfoList::FileInfoList> & fileInfoList) { DARABONBA_PTR_SET_VALUE(fileInfoList_, fileInfoList) };
      inline MediaInfoList& setFileInfoList(vector<MediaInfoList::FileInfoList> && fileInfoList) { DARABONBA_PTR_SET_RVALUE(fileInfoList_, fileInfoList) };


      // mediaBasicInfo Field Functions 
      bool hasMediaBasicInfo() const { return this->mediaBasicInfo_ != nullptr;};
      void deleteMediaBasicInfo() { this->mediaBasicInfo_ = nullptr;};
      inline const MediaInfoList::MediaBasicInfo & getMediaBasicInfo() const { DARABONBA_PTR_GET_CONST(mediaBasicInfo_, MediaInfoList::MediaBasicInfo) };
      inline MediaInfoList::MediaBasicInfo getMediaBasicInfo() { DARABONBA_PTR_GET(mediaBasicInfo_, MediaInfoList::MediaBasicInfo) };
      inline MediaInfoList& setMediaBasicInfo(const MediaInfoList::MediaBasicInfo & mediaBasicInfo) { DARABONBA_PTR_SET_VALUE(mediaBasicInfo_, mediaBasicInfo) };
      inline MediaInfoList& setMediaBasicInfo(MediaInfoList::MediaBasicInfo && mediaBasicInfo) { DARABONBA_PTR_SET_RVALUE(mediaBasicInfo_, mediaBasicInfo) };


      // mediaDynamicInfo Field Functions 
      bool hasMediaDynamicInfo() const { return this->mediaDynamicInfo_ != nullptr;};
      void deleteMediaDynamicInfo() { this->mediaDynamicInfo_ = nullptr;};
      inline const MediaInfoList::MediaDynamicInfo & getMediaDynamicInfo() const { DARABONBA_PTR_GET_CONST(mediaDynamicInfo_, MediaInfoList::MediaDynamicInfo) };
      inline MediaInfoList::MediaDynamicInfo getMediaDynamicInfo() { DARABONBA_PTR_GET(mediaDynamicInfo_, MediaInfoList::MediaDynamicInfo) };
      inline MediaInfoList& setMediaDynamicInfo(const MediaInfoList::MediaDynamicInfo & mediaDynamicInfo) { DARABONBA_PTR_SET_VALUE(mediaDynamicInfo_, mediaDynamicInfo) };
      inline MediaInfoList& setMediaDynamicInfo(MediaInfoList::MediaDynamicInfo && mediaDynamicInfo) { DARABONBA_PTR_SET_RVALUE(mediaDynamicInfo_, mediaDynamicInfo) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline MediaInfoList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    protected:
      shared_ptr<string> customFields_ {};
      shared_ptr<vector<MediaInfoList::FileInfoList>> fileInfoList_ {};
      shared_ptr<MediaInfoList::MediaBasicInfo> mediaBasicInfo_ {};
      shared_ptr<MediaInfoList::MediaDynamicInfo> mediaDynamicInfo_ {};
      shared_ptr<string> mediaId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->mediaInfoList_ == nullptr && this->requestId_ == nullptr && this->scrollToken_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchMediaResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // mediaInfoList Field Functions 
    bool hasMediaInfoList() const { return this->mediaInfoList_ != nullptr;};
    void deleteMediaInfoList() { this->mediaInfoList_ = nullptr;};
    inline const vector<SearchMediaResponseBody::MediaInfoList> & getMediaInfoList() const { DARABONBA_PTR_GET_CONST(mediaInfoList_, vector<SearchMediaResponseBody::MediaInfoList>) };
    inline vector<SearchMediaResponseBody::MediaInfoList> getMediaInfoList() { DARABONBA_PTR_GET(mediaInfoList_, vector<SearchMediaResponseBody::MediaInfoList>) };
    inline SearchMediaResponseBody& setMediaInfoList(const vector<SearchMediaResponseBody::MediaInfoList> & mediaInfoList) { DARABONBA_PTR_SET_VALUE(mediaInfoList_, mediaInfoList) };
    inline SearchMediaResponseBody& setMediaInfoList(vector<SearchMediaResponseBody::MediaInfoList> && mediaInfoList) { DARABONBA_PTR_SET_RVALUE(mediaInfoList_, mediaInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchMediaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scrollToken Field Functions 
    bool hasScrollToken() const { return this->scrollToken_ != nullptr;};
    void deleteScrollToken() { this->scrollToken_ = nullptr;};
    inline string getScrollToken() const { DARABONBA_PTR_GET_DEFAULT(scrollToken_, "") };
    inline SearchMediaResponseBody& setScrollToken(string scrollToken) { DARABONBA_PTR_SET_VALUE(scrollToken_, scrollToken) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline SearchMediaResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline SearchMediaResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<SearchMediaResponseBody::MediaInfoList>> mediaInfoList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> scrollToken_ {};
    shared_ptr<string> success_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
