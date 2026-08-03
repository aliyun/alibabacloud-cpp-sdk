// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECYCLEDDIRECTORIESANDFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRECYCLEDDIRECTORIESANDFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ListRecycledDirectoriesAndFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecycledDirectoriesAndFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecycledDirectoriesAndFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListRecycledDirectoriesAndFilesRequest() = default ;
    ListRecycledDirectoriesAndFilesRequest(const ListRecycledDirectoriesAndFilesRequest &) = default ;
    ListRecycledDirectoriesAndFilesRequest(ListRecycledDirectoriesAndFilesRequest &&) = default ;
    ListRecycledDirectoriesAndFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecycledDirectoriesAndFilesRequest() = default ;
    ListRecycledDirectoriesAndFilesRequest& operator=(const ListRecycledDirectoriesAndFilesRequest &) = default ;
    ListRecycledDirectoriesAndFilesRequest& operator=(ListRecycledDirectoriesAndFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileId_ == nullptr
        && this->fileSystemId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline ListRecycledDirectoriesAndFilesRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ListRecycledDirectoriesAndFilesRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListRecycledDirectoriesAndFilesRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRecycledDirectoriesAndFilesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The FileId of the directory to query.
    // 
    // If the recycle bin is empty, you can call this operation with FileId=2 (root directory inode) to verify the reachability of the operation or query the recycle bin content under the root directory. You can obtain other valid FileId values by calling the [ListRecentlyRecycledDirectories](https://help.aliyun.com/document_detail/2412173.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> fileId_ {};
    // The file system ID.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The number of files or directories returned per query.
    // 
    // Valid values: 10 to 1000.
    // 
    // Default value: 100.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token for the next page. You do not need to specify this parameter for the first query.
    // 
    // If a single query does not return all files and directories, a non-empty NextToken is returned. You can specify the correct NextToken in subsequent queries to continue listing.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
