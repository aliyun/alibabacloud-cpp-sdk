// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACHEDMEDIAINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETATTACHEDMEDIAINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAttachedMediaInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttachedMediaInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttachedMediaList, attachedMediaList_);
      DARABONBA_PTR_TO_JSON(NonExistMediaIds, nonExistMediaIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttachedMediaInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachedMediaList, attachedMediaList_);
      DARABONBA_PTR_FROM_JSON(NonExistMediaIds, nonExistMediaIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAttachedMediaInfoResponseBody() = default ;
    GetAttachedMediaInfoResponseBody(const GetAttachedMediaInfoResponseBody &) = default ;
    GetAttachedMediaInfoResponseBody(GetAttachedMediaInfoResponseBody &&) = default ;
    GetAttachedMediaInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttachedMediaInfoResponseBody() = default ;
    GetAttachedMediaInfoResponseBody& operator=(const GetAttachedMediaInfoResponseBody &) = default ;
    GetAttachedMediaInfoResponseBody& operator=(GetAttachedMediaInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttachedMediaList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttachedMediaList& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(Categories, categories_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(URL, URL_);
      };
      friend void from_json(const Darabonba::Json& j, AttachedMediaList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(Categories, categories_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(URL, URL_);
      };
      AttachedMediaList() = default ;
      AttachedMediaList(const AttachedMediaList &) = default ;
      AttachedMediaList(AttachedMediaList &&) = default ;
      AttachedMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttachedMediaList() = default ;
      AttachedMediaList& operator=(const AttachedMediaList &) = default ;
      AttachedMediaList& operator=(AttachedMediaList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Categories : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Categories& obj) { 
          DARABONBA_PTR_TO_JSON(CateId, cateId_);
          DARABONBA_PTR_TO_JSON(CateName, cateName_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
        };
        friend void from_json(const Darabonba::Json& j, Categories& obj) { 
          DARABONBA_PTR_FROM_JSON(CateId, cateId_);
          DARABONBA_PTR_FROM_JSON(CateName, cateName_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
        };
        Categories() = default ;
        Categories(const Categories &) = default ;
        Categories(Categories &&) = default ;
        Categories(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Categories() = default ;
        Categories& operator=(const Categories &) = default ;
        Categories& operator=(Categories &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cateId_ == nullptr
        && this->cateName_ == nullptr && this->level_ == nullptr && this->parentId_ == nullptr; };
        // cateId Field Functions 
        bool hasCateId() const { return this->cateId_ != nullptr;};
        void deleteCateId() { this->cateId_ = nullptr;};
        inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
        inline Categories& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


        // cateName Field Functions 
        bool hasCateName() const { return this->cateName_ != nullptr;};
        void deleteCateName() { this->cateName_ = nullptr;};
        inline string getCateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
        inline Categories& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline int64_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
        inline Categories& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
        inline Categories& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      protected:
        // The ID of the category.
        shared_ptr<int64_t> cateId_ {};
        // The name of the category.
        shared_ptr<string> cateName_ {};
        // The level of the category.
        shared_ptr<int64_t> level_ {};
        // The ID of the parent category.
        shared_ptr<int64_t> parentId_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->categories_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->mediaId_ == nullptr && this->modificationTime_ == nullptr
        && this->status_ == nullptr && this->storageLocation_ == nullptr && this->tags_ == nullptr && this->title_ == nullptr && this->type_ == nullptr
        && this->URL_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline AttachedMediaList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // categories Field Functions 
      bool hasCategories() const { return this->categories_ != nullptr;};
      void deleteCategories() { this->categories_ = nullptr;};
      inline const vector<AttachedMediaList::Categories> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<AttachedMediaList::Categories>) };
      inline vector<AttachedMediaList::Categories> getCategories() { DARABONBA_PTR_GET(categories_, vector<AttachedMediaList::Categories>) };
      inline AttachedMediaList& setCategories(const vector<AttachedMediaList::Categories> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
      inline AttachedMediaList& setCategories(vector<AttachedMediaList::Categories> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline AttachedMediaList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AttachedMediaList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline AttachedMediaList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // modificationTime Field Functions 
      bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
      void deleteModificationTime() { this->modificationTime_ = nullptr;};
      inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
      inline AttachedMediaList& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AttachedMediaList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageLocation Field Functions 
      bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
      void deleteStorageLocation() { this->storageLocation_ = nullptr;};
      inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
      inline AttachedMediaList& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline AttachedMediaList& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline AttachedMediaList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AttachedMediaList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // URL Field Functions 
      bool hasURL() const { return this->URL_ != nullptr;};
      void deleteURL() { this->URL_ = nullptr;};
      inline string getURL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
      inline AttachedMediaList& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // The categories.
      shared_ptr<vector<AttachedMediaList::Categories>> categories_ {};
      // The time when the auxiliary media asset was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The description of the auxiliary media asset.
      // 
      // >  This parameter is returned only when a description is specified for the auxiliary media asset.
      shared_ptr<string> description_ {};
      // The ID of the auxiliary media asset.
      shared_ptr<string> mediaId_ {};
      // The time when the auxiliary media asset was last updated. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> modificationTime_ {};
      // The status of the auxiliary media asset. Valid values:
      // 
      // *   **Uploading**
      // *   **Normal**
      // *   **UploadFail**
      shared_ptr<string> status_ {};
      // The storage address of the auxiliary media asset.
      shared_ptr<string> storageLocation_ {};
      // The tags of the auxiliary media asset.
      // 
      // >  This parameter is returned only when tags are specified for the auxiliary media asset.
      shared_ptr<string> tags_ {};
      // The title of the auxiliary media asset.
      shared_ptr<string> title_ {};
      // The type of the auxiliary media asset.
      // 
      // *   **watermark**
      // *   **subtitle**
      // *   **material**
      shared_ptr<string> type_ {};
      // The URL of the auxiliary media asset.
      // 
      // >  If a CDN domain name is specified, a CDN URL is returned. Otherwise, an OSS URL is returned.
      shared_ptr<string> URL_ {};
    };

    virtual bool empty() const override { return this->attachedMediaList_ == nullptr
        && this->nonExistMediaIds_ == nullptr && this->requestId_ == nullptr; };
    // attachedMediaList Field Functions 
    bool hasAttachedMediaList() const { return this->attachedMediaList_ != nullptr;};
    void deleteAttachedMediaList() { this->attachedMediaList_ = nullptr;};
    inline const vector<GetAttachedMediaInfoResponseBody::AttachedMediaList> & getAttachedMediaList() const { DARABONBA_PTR_GET_CONST(attachedMediaList_, vector<GetAttachedMediaInfoResponseBody::AttachedMediaList>) };
    inline vector<GetAttachedMediaInfoResponseBody::AttachedMediaList> getAttachedMediaList() { DARABONBA_PTR_GET(attachedMediaList_, vector<GetAttachedMediaInfoResponseBody::AttachedMediaList>) };
    inline GetAttachedMediaInfoResponseBody& setAttachedMediaList(const vector<GetAttachedMediaInfoResponseBody::AttachedMediaList> & attachedMediaList) { DARABONBA_PTR_SET_VALUE(attachedMediaList_, attachedMediaList) };
    inline GetAttachedMediaInfoResponseBody& setAttachedMediaList(vector<GetAttachedMediaInfoResponseBody::AttachedMediaList> && attachedMediaList) { DARABONBA_PTR_SET_RVALUE(attachedMediaList_, attachedMediaList) };


    // nonExistMediaIds Field Functions 
    bool hasNonExistMediaIds() const { return this->nonExistMediaIds_ != nullptr;};
    void deleteNonExistMediaIds() { this->nonExistMediaIds_ = nullptr;};
    inline const vector<string> & getNonExistMediaIds() const { DARABONBA_PTR_GET_CONST(nonExistMediaIds_, vector<string>) };
    inline vector<string> getNonExistMediaIds() { DARABONBA_PTR_GET(nonExistMediaIds_, vector<string>) };
    inline GetAttachedMediaInfoResponseBody& setNonExistMediaIds(const vector<string> & nonExistMediaIds) { DARABONBA_PTR_SET_VALUE(nonExistMediaIds_, nonExistMediaIds) };
    inline GetAttachedMediaInfoResponseBody& setNonExistMediaIds(vector<string> && nonExistMediaIds) { DARABONBA_PTR_SET_RVALUE(nonExistMediaIds_, nonExistMediaIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAttachedMediaInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the media assets.
    shared_ptr<vector<GetAttachedMediaInfoResponseBody::AttachedMediaList>> attachedMediaList_ {};
    // The IDs of the auxiliary media assets that do not exist.
    shared_ptr<vector<string>> nonExistMediaIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
