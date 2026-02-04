// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFOLDERSFORPARENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFOLDERSFORPARENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListFoldersForParentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFoldersForParentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Folders, folders_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFoldersForParentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Folders, folders_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFoldersForParentResponseBody() = default ;
    ListFoldersForParentResponseBody(const ListFoldersForParentResponseBody &) = default ;
    ListFoldersForParentResponseBody(ListFoldersForParentResponseBody &&) = default ;
    ListFoldersForParentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFoldersForParentResponseBody() = default ;
    ListFoldersForParentResponseBody& operator=(const ListFoldersForParentResponseBody &) = default ;
    ListFoldersForParentResponseBody& operator=(ListFoldersForParentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Folders : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Folders& obj) { 
        DARABONBA_PTR_TO_JSON(Folder, folder_);
      };
      friend void from_json(const Darabonba::Json& j, Folders& obj) { 
        DARABONBA_PTR_FROM_JSON(Folder, folder_);
      };
      Folders() = default ;
      Folders(const Folders &) = default ;
      Folders(Folders &&) = default ;
      Folders(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Folders() = default ;
      Folders& operator=(const Folders &) = default ;
      Folders& operator=(Folders &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Folder : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Folder& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(FolderId, folderId_);
          DARABONBA_PTR_TO_JSON(FolderName, folderName_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, Folder& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
          DARABONBA_PTR_FROM_JSON(FolderName, folderName_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        Folder() = default ;
        Folder(const Folder &) = default ;
        Folder(Folder &&) = default ;
        Folder(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Folder() = default ;
        Folder& operator=(const Folder &) = default ;
        Folder& operator=(Folder &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The key of the tag.
            shared_ptr<string> key_ {};
            // The value of the tag.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->folderId_ == nullptr && this->folderName_ == nullptr && this->tags_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Folder& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // folderId Field Functions 
        bool hasFolderId() const { return this->folderId_ != nullptr;};
        void deleteFolderId() { this->folderId_ = nullptr;};
        inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
        inline Folder& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


        // folderName Field Functions 
        bool hasFolderName() const { return this->folderName_ != nullptr;};
        void deleteFolderName() { this->folderName_ = nullptr;};
        inline string getFolderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
        inline Folder& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Folder::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Folder::Tags) };
        inline Folder::Tags getTags() { DARABONBA_PTR_GET(tags_, Folder::Tags) };
        inline Folder& setTags(const Folder::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Folder& setTags(Folder::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The time when the folder was created.
        shared_ptr<string> createTime_ {};
        // The ID of the folder.
        shared_ptr<string> folderId_ {};
        // The name of the folder.
        shared_ptr<string> folderName_ {};
        // The tags added to the folder.
        shared_ptr<Folder::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->folder_ == nullptr; };
      // folder Field Functions 
      bool hasFolder() const { return this->folder_ != nullptr;};
      void deleteFolder() { this->folder_ = nullptr;};
      inline const vector<Folders::Folder> & getFolder() const { DARABONBA_PTR_GET_CONST(folder_, vector<Folders::Folder>) };
      inline vector<Folders::Folder> getFolder() { DARABONBA_PTR_GET(folder_, vector<Folders::Folder>) };
      inline Folders& setFolder(const vector<Folders::Folder> & folder) { DARABONBA_PTR_SET_VALUE(folder_, folder) };
      inline Folders& setFolder(vector<Folders::Folder> && folder) { DARABONBA_PTR_SET_RVALUE(folder_, folder) };


    protected:
      shared_ptr<vector<Folders::Folder>> folder_ {};
    };

    virtual bool empty() const override { return this->folders_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // folders Field Functions 
    bool hasFolders() const { return this->folders_ != nullptr;};
    void deleteFolders() { this->folders_ = nullptr;};
    inline const ListFoldersForParentResponseBody::Folders & getFolders() const { DARABONBA_PTR_GET_CONST(folders_, ListFoldersForParentResponseBody::Folders) };
    inline ListFoldersForParentResponseBody::Folders getFolders() { DARABONBA_PTR_GET(folders_, ListFoldersForParentResponseBody::Folders) };
    inline ListFoldersForParentResponseBody& setFolders(const ListFoldersForParentResponseBody::Folders & folders) { DARABONBA_PTR_SET_VALUE(folders_, folders) };
    inline ListFoldersForParentResponseBody& setFolders(ListFoldersForParentResponseBody::Folders && folders) { DARABONBA_PTR_SET_RVALUE(folders_, folders) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListFoldersForParentResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFoldersForParentResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFoldersForParentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListFoldersForParentResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The folders.
    shared_ptr<ListFoldersForParentResponseBody::Folders> folders_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
