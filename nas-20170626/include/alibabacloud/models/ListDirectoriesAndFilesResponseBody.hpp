// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIRECTORIESANDFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIRECTORIESANDFILESRESPONSEBODY_HPP_
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
  class ListDirectoriesAndFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDirectoriesAndFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Entries, entries_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDirectoriesAndFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Entries, entries_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDirectoriesAndFilesResponseBody() = default ;
    ListDirectoriesAndFilesResponseBody(const ListDirectoriesAndFilesResponseBody &) = default ;
    ListDirectoriesAndFilesResponseBody(ListDirectoriesAndFilesResponseBody &&) = default ;
    ListDirectoriesAndFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDirectoriesAndFilesResponseBody() = default ;
    ListDirectoriesAndFilesResponseBody& operator=(const ListDirectoriesAndFilesResponseBody &) = default ;
    ListDirectoriesAndFilesResponseBody& operator=(ListDirectoriesAndFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Entries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entries& obj) { 
        DARABONBA_PTR_TO_JSON(Atime, atime_);
        DARABONBA_PTR_TO_JSON(Ctime, ctime_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(HasArchiveFile, hasArchiveFile_);
        DARABONBA_PTR_TO_JSON(HasInfrequentAccessFile, hasInfrequentAccessFile_);
        DARABONBA_PTR_TO_JSON(Inode, inode_);
        DARABONBA_PTR_TO_JSON(Mtime, mtime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(RetrieveTime, retrieveTime_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Entries& obj) { 
        DARABONBA_PTR_FROM_JSON(Atime, atime_);
        DARABONBA_PTR_FROM_JSON(Ctime, ctime_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(HasArchiveFile, hasArchiveFile_);
        DARABONBA_PTR_FROM_JSON(HasInfrequentAccessFile, hasInfrequentAccessFile_);
        DARABONBA_PTR_FROM_JSON(Inode, inode_);
        DARABONBA_PTR_FROM_JSON(Mtime, mtime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(RetrieveTime, retrieveTime_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Entries() = default ;
      Entries(const Entries &) = default ;
      Entries(Entries &&) = default ;
      Entries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Entries() = default ;
      Entries& operator=(const Entries &) = default ;
      Entries& operator=(Entries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->atime_ == nullptr
        && this->ctime_ == nullptr && this->fileId_ == nullptr && this->hasArchiveFile_ == nullptr && this->hasInfrequentAccessFile_ == nullptr && this->inode_ == nullptr
        && this->mtime_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->retrieveTime_ == nullptr && this->size_ == nullptr
        && this->storageType_ == nullptr && this->type_ == nullptr; };
      // atime Field Functions 
      bool hasAtime() const { return this->atime_ != nullptr;};
      void deleteAtime() { this->atime_ = nullptr;};
      inline string getAtime() const { DARABONBA_PTR_GET_DEFAULT(atime_, "") };
      inline Entries& setAtime(string atime) { DARABONBA_PTR_SET_VALUE(atime_, atime) };


      // ctime Field Functions 
      bool hasCtime() const { return this->ctime_ != nullptr;};
      void deleteCtime() { this->ctime_ = nullptr;};
      inline string getCtime() const { DARABONBA_PTR_GET_DEFAULT(ctime_, "") };
      inline Entries& setCtime(string ctime) { DARABONBA_PTR_SET_VALUE(ctime_, ctime) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Entries& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // hasArchiveFile Field Functions 
      bool hasHasArchiveFile() const { return this->hasArchiveFile_ != nullptr;};
      void deleteHasArchiveFile() { this->hasArchiveFile_ = nullptr;};
      inline string getHasArchiveFile() const { DARABONBA_PTR_GET_DEFAULT(hasArchiveFile_, "") };
      inline Entries& setHasArchiveFile(string hasArchiveFile) { DARABONBA_PTR_SET_VALUE(hasArchiveFile_, hasArchiveFile) };


      // hasInfrequentAccessFile Field Functions 
      bool hasHasInfrequentAccessFile() const { return this->hasInfrequentAccessFile_ != nullptr;};
      void deleteHasInfrequentAccessFile() { this->hasInfrequentAccessFile_ = nullptr;};
      inline bool getHasInfrequentAccessFile() const { DARABONBA_PTR_GET_DEFAULT(hasInfrequentAccessFile_, false) };
      inline Entries& setHasInfrequentAccessFile(bool hasInfrequentAccessFile) { DARABONBA_PTR_SET_VALUE(hasInfrequentAccessFile_, hasInfrequentAccessFile) };


      // inode Field Functions 
      bool hasInode() const { return this->inode_ != nullptr;};
      void deleteInode() { this->inode_ = nullptr;};
      inline string getInode() const { DARABONBA_PTR_GET_DEFAULT(inode_, "") };
      inline Entries& setInode(string inode) { DARABONBA_PTR_SET_VALUE(inode_, inode) };


      // mtime Field Functions 
      bool hasMtime() const { return this->mtime_ != nullptr;};
      void deleteMtime() { this->mtime_ = nullptr;};
      inline string getMtime() const { DARABONBA_PTR_GET_DEFAULT(mtime_, "") };
      inline Entries& setMtime(string mtime) { DARABONBA_PTR_SET_VALUE(mtime_, mtime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Entries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Entries& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // retrieveTime Field Functions 
      bool hasRetrieveTime() const { return this->retrieveTime_ != nullptr;};
      void deleteRetrieveTime() { this->retrieveTime_ = nullptr;};
      inline string getRetrieveTime() const { DARABONBA_PTR_GET_DEFAULT(retrieveTime_, "") };
      inline Entries& setRetrieveTime(string retrieveTime) { DARABONBA_PTR_SET_VALUE(retrieveTime_, retrieveTime) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Entries& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Entries& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Entries& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The time when the file was queried.
      // 
      // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
      // 
      // This parameter is returned and valid only if the value of the Type parameter is File.
      shared_ptr<string> atime_ {};
      // The time when the raw data was modified.
      // 
      // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
      // 
      // This parameter is returned and valid only if the value of the Type parameter is File.
      shared_ptr<string> ctime_ {};
      // The ID of the directory or file.
      shared_ptr<string> fileId_ {};
      // Indicates whether the directory contains files stored in the Archive storage class.
      // 
      // This parameter is returned and valid only if the value of the Type parameter is Directory.
      // 
      // Valid values:
      // 
      // *   true: The directory contains files stored in the Archive storage class.
      // *   false: The directory does not contain files stored in the Archive storage class.
      shared_ptr<string> hasArchiveFile_ {};
      // Indicates whether the directory contains files stored in the IA storage class.
      // 
      // This parameter is returned and valid only if the value of the Type parameter is Directory.
      // 
      // Valid values:
      // 
      // *   true: The directory contains files stored in the IA storage class.
      // *   false: The directory does not contain files stored in the IA storage class.
      shared_ptr<bool> hasInfrequentAccessFile_ {};
      // The file or directory inode.
      shared_ptr<string> inode_ {};
      // The time when the file was modified.
      // 
      // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
      // 
      // This parameter is returned and valid only if the value of the Type parameter is File.
      shared_ptr<string> mtime_ {};
      // The name of the file or directory.
      shared_ptr<string> name_ {};
      // The ID of the portable account. This parameter is returned and valid only if the value of the ProtocolType parameter is SMB and RAM-based access control is enabled.
      shared_ptr<string> owner_ {};
      // The time when the last data retrieval task was run.
      // 
      // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
      // 
      // This parameter is returned and valid only if the value of the Type parameter is File.
      shared_ptr<string> retrieveTime_ {};
      // The size of the file.
      // 
      // Unit: bytes.
      // 
      // This parameter is returned and valid only if the value of the Type parameter is File.
      shared_ptr<int64_t> size_ {};
      // The storage class.
      // 
      // This parameter is returned and valid only if the value of the Type parameter is File.
      // 
      // Valid values:
      // 
      // *   InfrequentAccess: the IA storage class.
      // *   Archive: the Archive storage class.
      shared_ptr<string> storageType_ {};
      // The type of the query result.
      // 
      // Valid values:
      // 
      // *   File
      // *   Directory
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->entries_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // entries Field Functions 
    bool hasEntries() const { return this->entries_ != nullptr;};
    void deleteEntries() { this->entries_ = nullptr;};
    inline const vector<ListDirectoriesAndFilesResponseBody::Entries> & getEntries() const { DARABONBA_PTR_GET_CONST(entries_, vector<ListDirectoriesAndFilesResponseBody::Entries>) };
    inline vector<ListDirectoriesAndFilesResponseBody::Entries> getEntries() { DARABONBA_PTR_GET(entries_, vector<ListDirectoriesAndFilesResponseBody::Entries>) };
    inline ListDirectoriesAndFilesResponseBody& setEntries(const vector<ListDirectoriesAndFilesResponseBody::Entries> & entries) { DARABONBA_PTR_SET_VALUE(entries_, entries) };
    inline ListDirectoriesAndFilesResponseBody& setEntries(vector<ListDirectoriesAndFilesResponseBody::Entries> && entries) { DARABONBA_PTR_SET_RVALUE(entries_, entries) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDirectoriesAndFilesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDirectoriesAndFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the files or directories.
    shared_ptr<vector<ListDirectoriesAndFilesResponseBody::Entries>> entries_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
