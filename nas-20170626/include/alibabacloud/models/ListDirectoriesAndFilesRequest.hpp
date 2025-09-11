// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIRECTORIESANDFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDIRECTORIESANDFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ListDirectoriesAndFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDirectoriesAndFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryOnly, directoryOnly_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, ListDirectoriesAndFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryOnly, directoryOnly_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    ListDirectoriesAndFilesRequest() = default ;
    ListDirectoriesAndFilesRequest(const ListDirectoriesAndFilesRequest &) = default ;
    ListDirectoriesAndFilesRequest(ListDirectoriesAndFilesRequest &&) = default ;
    ListDirectoriesAndFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDirectoriesAndFilesRequest() = default ;
    ListDirectoriesAndFilesRequest& operator=(const ListDirectoriesAndFilesRequest &) = default ;
    ListDirectoriesAndFilesRequest& operator=(ListDirectoriesAndFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->directoryOnly_ != nullptr
        && this->fileSystemId_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->path_ != nullptr && this->storageType_ != nullptr; };
    // directoryOnly Field Functions 
    bool hasDirectoryOnly() const { return this->directoryOnly_ != nullptr;};
    void deleteDirectoryOnly() { this->directoryOnly_ = nullptr;};
    inline bool directoryOnly() const { DARABONBA_PTR_GET_DEFAULT(directoryOnly_, false) };
    inline ListDirectoriesAndFilesRequest& setDirectoryOnly(bool directoryOnly) { DARABONBA_PTR_SET_VALUE(directoryOnly_, directoryOnly) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ListDirectoriesAndFilesRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListDirectoriesAndFilesRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDirectoriesAndFilesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListDirectoriesAndFilesRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline ListDirectoriesAndFilesRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // Specifies whether to query only directories.
    // 
    // Valid values:
    // 
    // *   false (default): queries both directories and files.
    // *   true: queries only directories.
    // 
    // >  If you set the StorageType parameter to All, you must set the DirectoryOnly parameter to true.
    std::shared_ptr<bool> directoryOnly_ = nullptr;
    // The ID of the file system.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The maximum number of directories or files to include in the results of each query.
    // 
    // Valid values: 10 to 128.
    // 
    // Default value: 100.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The absolute path of the directory.
    // 
    // The path must start with a forward slash (/) and must be a path that exists in the mount target.
    // 
    // This parameter is required.
    std::shared_ptr<string> path_ = nullptr;
    // The storage class.
    // 
    // *   InfrequentAccess: the Infrequent Access (IA) storage class.
    // *   Archive: the Archive storage class.
    // *   All: all stored data.
    // 
    // >  If you set the StorageType parameter to All, you must set the DirectoryOnly parameter to true.
    // 
    // This parameter is required.
    std::shared_ptr<string> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
