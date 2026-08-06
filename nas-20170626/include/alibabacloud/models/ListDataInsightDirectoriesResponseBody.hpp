// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAINSIGHTDIRECTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAINSIGHTDIRECTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ListDataInsightDirectoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataInsightDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Directory, directory_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataInsightDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Directory, directory_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataInsightDirectoriesResponseBody() = default ;
    ListDataInsightDirectoriesResponseBody(const ListDataInsightDirectoriesResponseBody &) = default ;
    ListDataInsightDirectoriesResponseBody(ListDataInsightDirectoriesResponseBody &&) = default ;
    ListDataInsightDirectoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataInsightDirectoriesResponseBody() = default ;
    ListDataInsightDirectoriesResponseBody& operator=(const ListDataInsightDirectoriesResponseBody &) = default ;
    ListDataInsightDirectoriesResponseBody& operator=(ListDataInsightDirectoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Directory : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Directory& obj) { 
        DARABONBA_PTR_TO_JSON(DirCapacity, dirCapacity_);
        DARABONBA_PTR_TO_JSON(DirCapacityOffline, dirCapacityOffline_);
        DARABONBA_PTR_TO_JSON(DirCapacityOnline, dirCapacityOnline_);
        DARABONBA_PTR_TO_JSON(FileCount, fileCount_);
        DARABONBA_PTR_TO_JSON(FileCountOffline, fileCountOffline_);
        DARABONBA_PTR_TO_JSON(FileCountOnline, fileCountOnline_);
        DARABONBA_PTR_TO_JSON(SubDirectories, subDirectories_);
      };
      friend void from_json(const Darabonba::Json& j, Directory& obj) { 
        DARABONBA_PTR_FROM_JSON(DirCapacity, dirCapacity_);
        DARABONBA_PTR_FROM_JSON(DirCapacityOffline, dirCapacityOffline_);
        DARABONBA_PTR_FROM_JSON(DirCapacityOnline, dirCapacityOnline_);
        DARABONBA_PTR_FROM_JSON(FileCount, fileCount_);
        DARABONBA_PTR_FROM_JSON(FileCountOffline, fileCountOffline_);
        DARABONBA_PTR_FROM_JSON(FileCountOnline, fileCountOnline_);
        DARABONBA_PTR_FROM_JSON(SubDirectories, subDirectories_);
      };
      Directory() = default ;
      Directory(const Directory &) = default ;
      Directory(Directory &&) = default ;
      Directory(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Directory() = default ;
      Directory& operator=(const Directory &) = default ;
      Directory& operator=(Directory &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubDirectories : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubDirectories& obj) { 
          DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
          DARABONBA_PTR_TO_JSON(DirCapacity, dirCapacity_);
          DARABONBA_PTR_TO_JSON(DirCapacityOffline, dirCapacityOffline_);
          DARABONBA_PTR_TO_JSON(DirCapacityOnline, dirCapacityOnline_);
          DARABONBA_PTR_TO_JSON(DirLevel, dirLevel_);
          DARABONBA_PTR_TO_JSON(DirName, dirName_);
          DARABONBA_PTR_TO_JSON(FileCount, fileCount_);
          DARABONBA_PTR_TO_JSON(FileCountOffline, fileCountOffline_);
          DARABONBA_PTR_TO_JSON(FileCountOnline, fileCountOnline_);
          DARABONBA_PTR_TO_JSON(LastAccessTime, lastAccessTime_);
          DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
        };
        friend void from_json(const Darabonba::Json& j, SubDirectories& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(DirCapacity, dirCapacity_);
          DARABONBA_PTR_FROM_JSON(DirCapacityOffline, dirCapacityOffline_);
          DARABONBA_PTR_FROM_JSON(DirCapacityOnline, dirCapacityOnline_);
          DARABONBA_PTR_FROM_JSON(DirLevel, dirLevel_);
          DARABONBA_PTR_FROM_JSON(DirName, dirName_);
          DARABONBA_PTR_FROM_JSON(FileCount, fileCount_);
          DARABONBA_PTR_FROM_JSON(FileCountOffline, fileCountOffline_);
          DARABONBA_PTR_FROM_JSON(FileCountOnline, fileCountOnline_);
          DARABONBA_PTR_FROM_JSON(LastAccessTime, lastAccessTime_);
          DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
        };
        SubDirectories() = default ;
        SubDirectories(const SubDirectories &) = default ;
        SubDirectories(SubDirectories &&) = default ;
        SubDirectories(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubDirectories() = default ;
        SubDirectories& operator=(const SubDirectories &) = default ;
        SubDirectories& operator=(SubDirectories &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->dirCapacity_ == nullptr && this->dirCapacityOffline_ == nullptr && this->dirCapacityOnline_ == nullptr && this->dirLevel_ == nullptr && this->dirName_ == nullptr
        && this->fileCount_ == nullptr && this->fileCountOffline_ == nullptr && this->fileCountOnline_ == nullptr && this->lastAccessTime_ == nullptr && this->updatedAt_ == nullptr; };
        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
        inline SubDirectories& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // dirCapacity Field Functions 
        bool hasDirCapacity() const { return this->dirCapacity_ != nullptr;};
        void deleteDirCapacity() { this->dirCapacity_ = nullptr;};
        inline int64_t getDirCapacity() const { DARABONBA_PTR_GET_DEFAULT(dirCapacity_, 0L) };
        inline SubDirectories& setDirCapacity(int64_t dirCapacity) { DARABONBA_PTR_SET_VALUE(dirCapacity_, dirCapacity) };


        // dirCapacityOffline Field Functions 
        bool hasDirCapacityOffline() const { return this->dirCapacityOffline_ != nullptr;};
        void deleteDirCapacityOffline() { this->dirCapacityOffline_ = nullptr;};
        inline int64_t getDirCapacityOffline() const { DARABONBA_PTR_GET_DEFAULT(dirCapacityOffline_, 0L) };
        inline SubDirectories& setDirCapacityOffline(int64_t dirCapacityOffline) { DARABONBA_PTR_SET_VALUE(dirCapacityOffline_, dirCapacityOffline) };


        // dirCapacityOnline Field Functions 
        bool hasDirCapacityOnline() const { return this->dirCapacityOnline_ != nullptr;};
        void deleteDirCapacityOnline() { this->dirCapacityOnline_ = nullptr;};
        inline int64_t getDirCapacityOnline() const { DARABONBA_PTR_GET_DEFAULT(dirCapacityOnline_, 0L) };
        inline SubDirectories& setDirCapacityOnline(int64_t dirCapacityOnline) { DARABONBA_PTR_SET_VALUE(dirCapacityOnline_, dirCapacityOnline) };


        // dirLevel Field Functions 
        bool hasDirLevel() const { return this->dirLevel_ != nullptr;};
        void deleteDirLevel() { this->dirLevel_ = nullptr;};
        inline int32_t getDirLevel() const { DARABONBA_PTR_GET_DEFAULT(dirLevel_, 0) };
        inline SubDirectories& setDirLevel(int32_t dirLevel) { DARABONBA_PTR_SET_VALUE(dirLevel_, dirLevel) };


        // dirName Field Functions 
        bool hasDirName() const { return this->dirName_ != nullptr;};
        void deleteDirName() { this->dirName_ = nullptr;};
        inline string getDirName() const { DARABONBA_PTR_GET_DEFAULT(dirName_, "") };
        inline SubDirectories& setDirName(string dirName) { DARABONBA_PTR_SET_VALUE(dirName_, dirName) };


        // fileCount Field Functions 
        bool hasFileCount() const { return this->fileCount_ != nullptr;};
        void deleteFileCount() { this->fileCount_ = nullptr;};
        inline int64_t getFileCount() const { DARABONBA_PTR_GET_DEFAULT(fileCount_, 0L) };
        inline SubDirectories& setFileCount(int64_t fileCount) { DARABONBA_PTR_SET_VALUE(fileCount_, fileCount) };


        // fileCountOffline Field Functions 
        bool hasFileCountOffline() const { return this->fileCountOffline_ != nullptr;};
        void deleteFileCountOffline() { this->fileCountOffline_ = nullptr;};
        inline int64_t getFileCountOffline() const { DARABONBA_PTR_GET_DEFAULT(fileCountOffline_, 0L) };
        inline SubDirectories& setFileCountOffline(int64_t fileCountOffline) { DARABONBA_PTR_SET_VALUE(fileCountOffline_, fileCountOffline) };


        // fileCountOnline Field Functions 
        bool hasFileCountOnline() const { return this->fileCountOnline_ != nullptr;};
        void deleteFileCountOnline() { this->fileCountOnline_ = nullptr;};
        inline int64_t getFileCountOnline() const { DARABONBA_PTR_GET_DEFAULT(fileCountOnline_, 0L) };
        inline SubDirectories& setFileCountOnline(int64_t fileCountOnline) { DARABONBA_PTR_SET_VALUE(fileCountOnline_, fileCountOnline) };


        // lastAccessTime Field Functions 
        bool hasLastAccessTime() const { return this->lastAccessTime_ != nullptr;};
        void deleteLastAccessTime() { this->lastAccessTime_ = nullptr;};
        inline string getLastAccessTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessTime_, "") };
        inline SubDirectories& setLastAccessTime(string lastAccessTime) { DARABONBA_PTR_SET_VALUE(lastAccessTime_, lastAccessTime) };


        // updatedAt Field Functions 
        bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
        void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
        inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
        inline SubDirectories& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      protected:
        shared_ptr<string> createdAt_ {};
        shared_ptr<int64_t> dirCapacity_ {};
        shared_ptr<int64_t> dirCapacityOffline_ {};
        shared_ptr<int64_t> dirCapacityOnline_ {};
        shared_ptr<int32_t> dirLevel_ {};
        shared_ptr<string> dirName_ {};
        shared_ptr<int64_t> fileCount_ {};
        shared_ptr<int64_t> fileCountOffline_ {};
        shared_ptr<int64_t> fileCountOnline_ {};
        shared_ptr<string> lastAccessTime_ {};
        shared_ptr<string> updatedAt_ {};
      };

      virtual bool empty() const override { return this->dirCapacity_ == nullptr
        && this->dirCapacityOffline_ == nullptr && this->dirCapacityOnline_ == nullptr && this->fileCount_ == nullptr && this->fileCountOffline_ == nullptr && this->fileCountOnline_ == nullptr
        && this->subDirectories_ == nullptr; };
      // dirCapacity Field Functions 
      bool hasDirCapacity() const { return this->dirCapacity_ != nullptr;};
      void deleteDirCapacity() { this->dirCapacity_ = nullptr;};
      inline int64_t getDirCapacity() const { DARABONBA_PTR_GET_DEFAULT(dirCapacity_, 0L) };
      inline Directory& setDirCapacity(int64_t dirCapacity) { DARABONBA_PTR_SET_VALUE(dirCapacity_, dirCapacity) };


      // dirCapacityOffline Field Functions 
      bool hasDirCapacityOffline() const { return this->dirCapacityOffline_ != nullptr;};
      void deleteDirCapacityOffline() { this->dirCapacityOffline_ = nullptr;};
      inline int64_t getDirCapacityOffline() const { DARABONBA_PTR_GET_DEFAULT(dirCapacityOffline_, 0L) };
      inline Directory& setDirCapacityOffline(int64_t dirCapacityOffline) { DARABONBA_PTR_SET_VALUE(dirCapacityOffline_, dirCapacityOffline) };


      // dirCapacityOnline Field Functions 
      bool hasDirCapacityOnline() const { return this->dirCapacityOnline_ != nullptr;};
      void deleteDirCapacityOnline() { this->dirCapacityOnline_ = nullptr;};
      inline int64_t getDirCapacityOnline() const { DARABONBA_PTR_GET_DEFAULT(dirCapacityOnline_, 0L) };
      inline Directory& setDirCapacityOnline(int64_t dirCapacityOnline) { DARABONBA_PTR_SET_VALUE(dirCapacityOnline_, dirCapacityOnline) };


      // fileCount Field Functions 
      bool hasFileCount() const { return this->fileCount_ != nullptr;};
      void deleteFileCount() { this->fileCount_ = nullptr;};
      inline int64_t getFileCount() const { DARABONBA_PTR_GET_DEFAULT(fileCount_, 0L) };
      inline Directory& setFileCount(int64_t fileCount) { DARABONBA_PTR_SET_VALUE(fileCount_, fileCount) };


      // fileCountOffline Field Functions 
      bool hasFileCountOffline() const { return this->fileCountOffline_ != nullptr;};
      void deleteFileCountOffline() { this->fileCountOffline_ = nullptr;};
      inline int64_t getFileCountOffline() const { DARABONBA_PTR_GET_DEFAULT(fileCountOffline_, 0L) };
      inline Directory& setFileCountOffline(int64_t fileCountOffline) { DARABONBA_PTR_SET_VALUE(fileCountOffline_, fileCountOffline) };


      // fileCountOnline Field Functions 
      bool hasFileCountOnline() const { return this->fileCountOnline_ != nullptr;};
      void deleteFileCountOnline() { this->fileCountOnline_ = nullptr;};
      inline int64_t getFileCountOnline() const { DARABONBA_PTR_GET_DEFAULT(fileCountOnline_, 0L) };
      inline Directory& setFileCountOnline(int64_t fileCountOnline) { DARABONBA_PTR_SET_VALUE(fileCountOnline_, fileCountOnline) };


      // subDirectories Field Functions 
      bool hasSubDirectories() const { return this->subDirectories_ != nullptr;};
      void deleteSubDirectories() { this->subDirectories_ = nullptr;};
      inline const vector<Directory::SubDirectories> & getSubDirectories() const { DARABONBA_PTR_GET_CONST(subDirectories_, vector<Directory::SubDirectories>) };
      inline vector<Directory::SubDirectories> getSubDirectories() { DARABONBA_PTR_GET(subDirectories_, vector<Directory::SubDirectories>) };
      inline Directory& setSubDirectories(const vector<Directory::SubDirectories> & subDirectories) { DARABONBA_PTR_SET_VALUE(subDirectories_, subDirectories) };
      inline Directory& setSubDirectories(vector<Directory::SubDirectories> && subDirectories) { DARABONBA_PTR_SET_RVALUE(subDirectories_, subDirectories) };


    protected:
      shared_ptr<int64_t> dirCapacity_ {};
      shared_ptr<int64_t> dirCapacityOffline_ {};
      shared_ptr<int64_t> dirCapacityOnline_ {};
      shared_ptr<int64_t> fileCount_ {};
      shared_ptr<int64_t> fileCountOffline_ {};
      shared_ptr<int64_t> fileCountOnline_ {};
      shared_ptr<vector<Directory::SubDirectories>> subDirectories_ {};
    };

    virtual bool empty() const override { return this->directory_ == nullptr
        && this->fileSystemId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline const ListDataInsightDirectoriesResponseBody::Directory & getDirectory() const { DARABONBA_PTR_GET_CONST(directory_, ListDataInsightDirectoriesResponseBody::Directory) };
    inline ListDataInsightDirectoriesResponseBody::Directory getDirectory() { DARABONBA_PTR_GET(directory_, ListDataInsightDirectoriesResponseBody::Directory) };
    inline ListDataInsightDirectoriesResponseBody& setDirectory(const ListDataInsightDirectoriesResponseBody::Directory & directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };
    inline ListDataInsightDirectoriesResponseBody& setDirectory(ListDataInsightDirectoriesResponseBody::Directory && directory) { DARABONBA_PTR_SET_RVALUE(directory_, directory) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ListDataInsightDirectoriesResponseBody& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataInsightDirectoriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataInsightDirectoriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataInsightDirectoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListDataInsightDirectoriesResponseBody::Directory> directory_ {};
    shared_ptr<string> fileSystemId_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
