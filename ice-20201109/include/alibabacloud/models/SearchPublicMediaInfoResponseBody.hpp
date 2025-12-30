// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHPUBLICMEDIAINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHPUBLICMEDIAINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchPublicMediaInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchPublicMediaInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PublicMediaInfos, publicMediaInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchPublicMediaInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PublicMediaInfos, publicMediaInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchPublicMediaInfoResponseBody() = default ;
    SearchPublicMediaInfoResponseBody(const SearchPublicMediaInfoResponseBody &) = default ;
    SearchPublicMediaInfoResponseBody(SearchPublicMediaInfoResponseBody &&) = default ;
    SearchPublicMediaInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchPublicMediaInfoResponseBody() = default ;
    SearchPublicMediaInfoResponseBody& operator=(const SearchPublicMediaInfoResponseBody &) = default ;
    SearchPublicMediaInfoResponseBody& operator=(SearchPublicMediaInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PublicMediaInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PublicMediaInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Authorized, authorized_);
        DARABONBA_PTR_TO_JSON(Favorite, favorite_);
        DARABONBA_PTR_TO_JSON(MediaInfo, mediaInfo_);
        DARABONBA_PTR_TO_JSON(RemainingAuthTime, remainingAuthTime_);
      };
      friend void from_json(const Darabonba::Json& j, PublicMediaInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Authorized, authorized_);
        DARABONBA_PTR_FROM_JSON(Favorite, favorite_);
        DARABONBA_PTR_FROM_JSON(MediaInfo, mediaInfo_);
        DARABONBA_PTR_FROM_JSON(RemainingAuthTime, remainingAuthTime_);
      };
      PublicMediaInfos() = default ;
      PublicMediaInfos(const PublicMediaInfos &) = default ;
      PublicMediaInfos(PublicMediaInfos &&) = default ;
      PublicMediaInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PublicMediaInfos() = default ;
      PublicMediaInfos& operator=(const PublicMediaInfos &) = default ;
      PublicMediaInfos& operator=(PublicMediaInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MediaInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MediaInfo& obj) { 
          DARABONBA_PTR_TO_JSON(DynamicMetaData, dynamicMetaData_);
          DARABONBA_PTR_TO_JSON(MediaBasicInfo, mediaBasicInfo_);
          DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        };
        friend void from_json(const Darabonba::Json& j, MediaInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(DynamicMetaData, dynamicMetaData_);
          DARABONBA_PTR_FROM_JSON(MediaBasicInfo, mediaBasicInfo_);
          DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        };
        MediaInfo() = default ;
        MediaInfo(const MediaInfo &) = default ;
        MediaInfo(MediaInfo &&) = default ;
        MediaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MediaInfo() = default ;
        MediaInfo& operator=(const MediaInfo &) = default ;
        MediaInfo& operator=(MediaInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MediaBasicInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MediaBasicInfo& obj) { 
            DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(DeletedTime, deletedTime_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
            DARABONBA_PTR_TO_JSON(MediaTags, mediaTags_);
            DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
            DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
            DARABONBA_PTR_TO_JSON(Source, source_);
            DARABONBA_PTR_TO_JSON(SpriteImages, spriteImages_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Title, title_);
            DARABONBA_PTR_TO_JSON(UserData, userData_);
          };
          friend void from_json(const Darabonba::Json& j, MediaBasicInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(DeletedTime, deletedTime_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
            DARABONBA_PTR_FROM_JSON(MediaTags, mediaTags_);
            DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
            DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
            DARABONBA_PTR_FROM_JSON(Source, source_);
            DARABONBA_PTR_FROM_JSON(SpriteImages, spriteImages_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
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
        && this->category_ == nullptr && this->coverURL_ == nullptr && this->createTime_ == nullptr && this->deletedTime_ == nullptr && this->description_ == nullptr
        && this->mediaId_ == nullptr && this->mediaTags_ == nullptr && this->mediaType_ == nullptr && this->modifiedTime_ == nullptr && this->source_ == nullptr
        && this->spriteImages_ == nullptr && this->status_ == nullptr && this->title_ == nullptr && this->userData_ == nullptr; };
          // businessType Field Functions 
          bool hasBusinessType() const { return this->businessType_ != nullptr;};
          void deleteBusinessType() { this->businessType_ = nullptr;};
          inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
          inline MediaBasicInfo& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline MediaBasicInfo& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


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


          // deletedTime Field Functions 
          bool hasDeletedTime() const { return this->deletedTime_ != nullptr;};
          void deleteDeletedTime() { this->deletedTime_ = nullptr;};
          inline string getDeletedTime() const { DARABONBA_PTR_GET_DEFAULT(deletedTime_, "") };
          inline MediaBasicInfo& setDeletedTime(string deletedTime) { DARABONBA_PTR_SET_VALUE(deletedTime_, deletedTime) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline MediaBasicInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


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


          // userData Field Functions 
          bool hasUserData() const { return this->userData_ != nullptr;};
          void deleteUserData() { this->userData_ = nullptr;};
          inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
          inline MediaBasicInfo& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


        protected:
          shared_ptr<string> businessType_ {};
          shared_ptr<string> category_ {};
          shared_ptr<string> coverURL_ {};
          shared_ptr<string> createTime_ {};
          shared_ptr<string> deletedTime_ {};
          shared_ptr<string> description_ {};
          // MediaId
          shared_ptr<string> mediaId_ {};
          shared_ptr<string> mediaTags_ {};
          shared_ptr<string> mediaType_ {};
          shared_ptr<string> modifiedTime_ {};
          shared_ptr<string> source_ {};
          shared_ptr<string> spriteImages_ {};
          shared_ptr<string> status_ {};
          shared_ptr<string> title_ {};
          shared_ptr<string> userData_ {};
        };

        class DynamicMetaData : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DynamicMetaData& obj) { 
            DARABONBA_PTR_TO_JSON(Data, data_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, DynamicMetaData& obj) { 
            DARABONBA_PTR_FROM_JSON(Data, data_);
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
        && this->type_ == nullptr; };
          // data Field Functions 
          bool hasData() const { return this->data_ != nullptr;};
          void deleteData() { this->data_ = nullptr;};
          inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
          inline DynamicMetaData& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline DynamicMetaData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> data_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->dynamicMetaData_ == nullptr
        && this->mediaBasicInfo_ == nullptr && this->mediaId_ == nullptr; };
        // dynamicMetaData Field Functions 
        bool hasDynamicMetaData() const { return this->dynamicMetaData_ != nullptr;};
        void deleteDynamicMetaData() { this->dynamicMetaData_ = nullptr;};
        inline const MediaInfo::DynamicMetaData & getDynamicMetaData() const { DARABONBA_PTR_GET_CONST(dynamicMetaData_, MediaInfo::DynamicMetaData) };
        inline MediaInfo::DynamicMetaData getDynamicMetaData() { DARABONBA_PTR_GET(dynamicMetaData_, MediaInfo::DynamicMetaData) };
        inline MediaInfo& setDynamicMetaData(const MediaInfo::DynamicMetaData & dynamicMetaData) { DARABONBA_PTR_SET_VALUE(dynamicMetaData_, dynamicMetaData) };
        inline MediaInfo& setDynamicMetaData(MediaInfo::DynamicMetaData && dynamicMetaData) { DARABONBA_PTR_SET_RVALUE(dynamicMetaData_, dynamicMetaData) };


        // mediaBasicInfo Field Functions 
        bool hasMediaBasicInfo() const { return this->mediaBasicInfo_ != nullptr;};
        void deleteMediaBasicInfo() { this->mediaBasicInfo_ = nullptr;};
        inline const MediaInfo::MediaBasicInfo & getMediaBasicInfo() const { DARABONBA_PTR_GET_CONST(mediaBasicInfo_, MediaInfo::MediaBasicInfo) };
        inline MediaInfo::MediaBasicInfo getMediaBasicInfo() { DARABONBA_PTR_GET(mediaBasicInfo_, MediaInfo::MediaBasicInfo) };
        inline MediaInfo& setMediaBasicInfo(const MediaInfo::MediaBasicInfo & mediaBasicInfo) { DARABONBA_PTR_SET_VALUE(mediaBasicInfo_, mediaBasicInfo) };
        inline MediaInfo& setMediaBasicInfo(MediaInfo::MediaBasicInfo && mediaBasicInfo) { DARABONBA_PTR_SET_RVALUE(mediaBasicInfo_, mediaBasicInfo) };


        // mediaId Field Functions 
        bool hasMediaId() const { return this->mediaId_ != nullptr;};
        void deleteMediaId() { this->mediaId_ = nullptr;};
        inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
        inline MediaInfo& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      protected:
        shared_ptr<MediaInfo::DynamicMetaData> dynamicMetaData_ {};
        // BasicInfo
        shared_ptr<MediaInfo::MediaBasicInfo> mediaBasicInfo_ {};
        shared_ptr<string> mediaId_ {};
      };

      virtual bool empty() const override { return this->authorized_ == nullptr
        && this->favorite_ == nullptr && this->mediaInfo_ == nullptr && this->remainingAuthTime_ == nullptr; };
      // authorized Field Functions 
      bool hasAuthorized() const { return this->authorized_ != nullptr;};
      void deleteAuthorized() { this->authorized_ = nullptr;};
      inline bool getAuthorized() const { DARABONBA_PTR_GET_DEFAULT(authorized_, false) };
      inline PublicMediaInfos& setAuthorized(bool authorized) { DARABONBA_PTR_SET_VALUE(authorized_, authorized) };


      // favorite Field Functions 
      bool hasFavorite() const { return this->favorite_ != nullptr;};
      void deleteFavorite() { this->favorite_ = nullptr;};
      inline bool getFavorite() const { DARABONBA_PTR_GET_DEFAULT(favorite_, false) };
      inline PublicMediaInfos& setFavorite(bool favorite) { DARABONBA_PTR_SET_VALUE(favorite_, favorite) };


      // mediaInfo Field Functions 
      bool hasMediaInfo() const { return this->mediaInfo_ != nullptr;};
      void deleteMediaInfo() { this->mediaInfo_ = nullptr;};
      inline const PublicMediaInfos::MediaInfo & getMediaInfo() const { DARABONBA_PTR_GET_CONST(mediaInfo_, PublicMediaInfos::MediaInfo) };
      inline PublicMediaInfos::MediaInfo getMediaInfo() { DARABONBA_PTR_GET(mediaInfo_, PublicMediaInfos::MediaInfo) };
      inline PublicMediaInfos& setMediaInfo(const PublicMediaInfos::MediaInfo & mediaInfo) { DARABONBA_PTR_SET_VALUE(mediaInfo_, mediaInfo) };
      inline PublicMediaInfos& setMediaInfo(PublicMediaInfos::MediaInfo && mediaInfo) { DARABONBA_PTR_SET_RVALUE(mediaInfo_, mediaInfo) };


      // remainingAuthTime Field Functions 
      bool hasRemainingAuthTime() const { return this->remainingAuthTime_ != nullptr;};
      void deleteRemainingAuthTime() { this->remainingAuthTime_ = nullptr;};
      inline string getRemainingAuthTime() const { DARABONBA_PTR_GET_DEFAULT(remainingAuthTime_, "") };
      inline PublicMediaInfos& setRemainingAuthTime(string remainingAuthTime) { DARABONBA_PTR_SET_VALUE(remainingAuthTime_, remainingAuthTime) };


    protected:
      shared_ptr<bool> authorized_ {};
      shared_ptr<bool> favorite_ {};
      shared_ptr<PublicMediaInfos::MediaInfo> mediaInfo_ {};
      shared_ptr<string> remainingAuthTime_ {};
    };

    virtual bool empty() const override { return this->publicMediaInfos_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // publicMediaInfos Field Functions 
    bool hasPublicMediaInfos() const { return this->publicMediaInfos_ != nullptr;};
    void deletePublicMediaInfos() { this->publicMediaInfos_ = nullptr;};
    inline const vector<SearchPublicMediaInfoResponseBody::PublicMediaInfos> & getPublicMediaInfos() const { DARABONBA_PTR_GET_CONST(publicMediaInfos_, vector<SearchPublicMediaInfoResponseBody::PublicMediaInfos>) };
    inline vector<SearchPublicMediaInfoResponseBody::PublicMediaInfos> getPublicMediaInfos() { DARABONBA_PTR_GET(publicMediaInfos_, vector<SearchPublicMediaInfoResponseBody::PublicMediaInfos>) };
    inline SearchPublicMediaInfoResponseBody& setPublicMediaInfos(const vector<SearchPublicMediaInfoResponseBody::PublicMediaInfos> & publicMediaInfos) { DARABONBA_PTR_SET_VALUE(publicMediaInfos_, publicMediaInfos) };
    inline SearchPublicMediaInfoResponseBody& setPublicMediaInfos(vector<SearchPublicMediaInfoResponseBody::PublicMediaInfos> && publicMediaInfos) { DARABONBA_PTR_SET_RVALUE(publicMediaInfos_, publicMediaInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchPublicMediaInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline SearchPublicMediaInfoResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<SearchPublicMediaInfoResponseBody::PublicMediaInfos>> publicMediaInfos_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
