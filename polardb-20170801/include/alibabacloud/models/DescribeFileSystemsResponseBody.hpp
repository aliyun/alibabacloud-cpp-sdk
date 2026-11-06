// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeFileSystemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BucketId, bucketId_);
      DARABONBA_PTR_TO_JSON(FileCount, fileCount_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FileSystems, fileSystems_);
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketId, bucketId_);
      DARABONBA_PTR_FROM_JSON(FileCount, fileCount_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FileSystems, fileSystems_);
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFileSystemsResponseBody() = default ;
    DescribeFileSystemsResponseBody(const DescribeFileSystemsResponseBody &) = default ;
    DescribeFileSystemsResponseBody(DescribeFileSystemsResponseBody &&) = default ;
    DescribeFileSystemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsResponseBody() = default ;
    DescribeFileSystemsResponseBody& operator=(const DescribeFileSystemsResponseBody &) = default ;
    DescribeFileSystemsResponseBody& operator=(DescribeFileSystemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FileSystems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileSystems& obj) { 
        DARABONBA_PTR_TO_JSON(Capacity, capacity_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      };
      friend void from_json(const Darabonba::Json& j, FileSystems& obj) { 
        DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      };
      FileSystems() = default ;
      FileSystems(const FileSystems &) = default ;
      FileSystems(FileSystems &&) = default ;
      FileSystems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileSystems() = default ;
      FileSystems& operator=(const FileSystems &) = default ;
      FileSystems& operator=(FileSystems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->capacity_ == nullptr
        && this->fileName_ == nullptr && this->lastModified_ == nullptr && this->storageType_ == nullptr; };
      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline string getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, "") };
      inline FileSystems& setCapacity(string capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline FileSystems& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // lastModified Field Functions 
      bool hasLastModified() const { return this->lastModified_ != nullptr;};
      void deleteLastModified() { this->lastModified_ = nullptr;};
      inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
      inline FileSystems& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline FileSystems& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    protected:
      // The capacity of the file.
      shared_ptr<string> capacity_ {};
      // The name of the file.
      shared_ptr<string> fileName_ {};
      // The time when the file was last modified. The time is in the RFC 3339 UTC format.
      shared_ptr<string> lastModified_ {};
      // The storage type of the file.
      shared_ptr<string> storageType_ {};
    };

    virtual bool empty() const override { return this->bucketId_ == nullptr
        && this->fileCount_ == nullptr && this->fileSystemId_ == nullptr && this->fileSystems_ == nullptr && this->isTruncated_ == nullptr && this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // bucketId Field Functions 
    bool hasBucketId() const { return this->bucketId_ != nullptr;};
    void deleteBucketId() { this->bucketId_ = nullptr;};
    inline string getBucketId() const { DARABONBA_PTR_GET_DEFAULT(bucketId_, "") };
    inline DescribeFileSystemsResponseBody& setBucketId(string bucketId) { DARABONBA_PTR_SET_VALUE(bucketId_, bucketId) };


    // fileCount Field Functions 
    bool hasFileCount() const { return this->fileCount_ != nullptr;};
    void deleteFileCount() { this->fileCount_ = nullptr;};
    inline int32_t getFileCount() const { DARABONBA_PTR_GET_DEFAULT(fileCount_, 0) };
    inline DescribeFileSystemsResponseBody& setFileCount(int32_t fileCount) { DARABONBA_PTR_SET_VALUE(fileCount_, fileCount) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeFileSystemsResponseBody& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fileSystems Field Functions 
    bool hasFileSystems() const { return this->fileSystems_ != nullptr;};
    void deleteFileSystems() { this->fileSystems_ = nullptr;};
    inline const vector<DescribeFileSystemsResponseBody::FileSystems> & getFileSystems() const { DARABONBA_PTR_GET_CONST(fileSystems_, vector<DescribeFileSystemsResponseBody::FileSystems>) };
    inline vector<DescribeFileSystemsResponseBody::FileSystems> getFileSystems() { DARABONBA_PTR_GET(fileSystems_, vector<DescribeFileSystemsResponseBody::FileSystems>) };
    inline DescribeFileSystemsResponseBody& setFileSystems(const vector<DescribeFileSystemsResponseBody::FileSystems> & fileSystems) { DARABONBA_PTR_SET_VALUE(fileSystems_, fileSystems) };
    inline DescribeFileSystemsResponseBody& setFileSystems(vector<DescribeFileSystemsResponseBody::FileSystems> && fileSystems) { DARABONBA_PTR_SET_RVALUE(fileSystems_, fileSystems) };


    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline DescribeFileSystemsResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeFileSystemsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeFileSystemsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFileSystemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the bucket.
    shared_ptr<string> bucketId_ {};
    // The total number of files that meet the specified conditions.
    shared_ptr<int32_t> fileCount_ {};
    // The ID of the file system.
    shared_ptr<string> fileSystemId_ {};
    // The list of files.
    shared_ptr<vector<DescribeFileSystemsResponseBody::FileSystems>> fileSystems_ {};
    // Indicates whether the results are truncated. If the value is true, you can use NextToken to query subsequent results.
    shared_ptr<bool> isTruncated_ {};
    // The maximum number of records returned for this request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
