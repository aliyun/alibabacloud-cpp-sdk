// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIRECTORIESANDFILESRESPONSEBODYENTRIES_HPP_
#define ALIBABACLOUD_MODELS_LISTDIRECTORIESANDFILESRESPONSEBODYENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ListDirectoriesAndFilesResponseBodyEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDirectoriesAndFilesResponseBodyEntries& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListDirectoriesAndFilesResponseBodyEntries& obj) { 
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
    ListDirectoriesAndFilesResponseBodyEntries() = default ;
    ListDirectoriesAndFilesResponseBodyEntries(const ListDirectoriesAndFilesResponseBodyEntries &) = default ;
    ListDirectoriesAndFilesResponseBodyEntries(ListDirectoriesAndFilesResponseBodyEntries &&) = default ;
    ListDirectoriesAndFilesResponseBodyEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDirectoriesAndFilesResponseBodyEntries() = default ;
    ListDirectoriesAndFilesResponseBodyEntries& operator=(const ListDirectoriesAndFilesResponseBodyEntries &) = default ;
    ListDirectoriesAndFilesResponseBodyEntries& operator=(ListDirectoriesAndFilesResponseBodyEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->atime_ == nullptr
        && return this->ctime_ == nullptr && return this->fileId_ == nullptr && return this->hasArchiveFile_ == nullptr && return this->hasInfrequentAccessFile_ == nullptr && return this->inode_ == nullptr
        && return this->mtime_ == nullptr && return this->name_ == nullptr && return this->owner_ == nullptr && return this->retrieveTime_ == nullptr && return this->size_ == nullptr
        && return this->storageType_ == nullptr && return this->type_ == nullptr; };
    // atime Field Functions 
    bool hasAtime() const { return this->atime_ != nullptr;};
    void deleteAtime() { this->atime_ = nullptr;};
    inline string atime() const { DARABONBA_PTR_GET_DEFAULT(atime_, "") };
    inline ListDirectoriesAndFilesResponseBodyEntries& setAtime(string atime) { DARABONBA_PTR_SET_VALUE(atime_, atime) };


    // ctime Field Functions 
    bool hasCtime() const { return this->ctime_ != nullptr;};
    void deleteCtime() { this->ctime_ = nullptr;};
    inline string ctime() const { DARABONBA_PTR_GET_DEFAULT(ctime_, "") };
    inline ListDirectoriesAndFilesResponseBodyEntries& setCtime(string ctime) { DARABONBA_PTR_SET_VALUE(ctime_, ctime) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline ListDirectoriesAndFilesResponseBodyEntries& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // hasArchiveFile Field Functions 
    bool hasHasArchiveFile() const { return this->hasArchiveFile_ != nullptr;};
    void deleteHasArchiveFile() { this->hasArchiveFile_ = nullptr;};
    inline string hasArchiveFile() const { DARABONBA_PTR_GET_DEFAULT(hasArchiveFile_, "") };
    inline ListDirectoriesAndFilesResponseBodyEntries& setHasArchiveFile(string hasArchiveFile) { DARABONBA_PTR_SET_VALUE(hasArchiveFile_, hasArchiveFile) };


    // hasInfrequentAccessFile Field Functions 
    bool hasHasInfrequentAccessFile() const { return this->hasInfrequentAccessFile_ != nullptr;};
    void deleteHasInfrequentAccessFile() { this->hasInfrequentAccessFile_ = nullptr;};
    inline bool hasInfrequentAccessFile() const { DARABONBA_PTR_GET_DEFAULT(hasInfrequentAccessFile_, false) };
    inline ListDirectoriesAndFilesResponseBodyEntries& setHasInfrequentAccessFile(bool hasInfrequentAccessFile) { DARABONBA_PTR_SET_VALUE(hasInfrequentAccessFile_, hasInfrequentAccessFile) };


    // inode Field Functions 
    bool hasInode() const { return this->inode_ != nullptr;};
    void deleteInode() { this->inode_ = nullptr;};
    inline string inode() const { DARABONBA_PTR_GET_DEFAULT(inode_, "") };
    inline ListDirectoriesAndFilesResponseBodyEntries& setInode(string inode) { DARABONBA_PTR_SET_VALUE(inode_, inode) };


    // mtime Field Functions 
    bool hasMtime() const { return this->mtime_ != nullptr;};
    void deleteMtime() { this->mtime_ = nullptr;};
    inline string mtime() const { DARABONBA_PTR_GET_DEFAULT(mtime_, "") };
    inline ListDirectoriesAndFilesResponseBodyEntries& setMtime(string mtime) { DARABONBA_PTR_SET_VALUE(mtime_, mtime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDirectoriesAndFilesResponseBodyEntries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListDirectoriesAndFilesResponseBodyEntries& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // retrieveTime Field Functions 
    bool hasRetrieveTime() const { return this->retrieveTime_ != nullptr;};
    void deleteRetrieveTime() { this->retrieveTime_ = nullptr;};
    inline string retrieveTime() const { DARABONBA_PTR_GET_DEFAULT(retrieveTime_, "") };
    inline ListDirectoriesAndFilesResponseBodyEntries& setRetrieveTime(string retrieveTime) { DARABONBA_PTR_SET_VALUE(retrieveTime_, retrieveTime) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListDirectoriesAndFilesResponseBodyEntries& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline ListDirectoriesAndFilesResponseBodyEntries& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDirectoriesAndFilesResponseBodyEntries& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The time when the file was queried.
    // 
    // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
    // 
    // This parameter is returned and valid only if the value of the Type parameter is File.
    std::shared_ptr<string> atime_ = nullptr;
    // The time when the raw data was modified.
    // 
    // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
    // 
    // This parameter is returned and valid only if the value of the Type parameter is File.
    std::shared_ptr<string> ctime_ = nullptr;
    // The ID of the directory or file.
    std::shared_ptr<string> fileId_ = nullptr;
    // Indicates whether the directory contains files stored in the Archive storage class.
    // 
    // This parameter is returned and valid only if the value of the Type parameter is Directory.
    // 
    // Valid values:
    // 
    // *   true: The directory contains files stored in the Archive storage class.
    // *   false: The directory does not contain files stored in the Archive storage class.
    std::shared_ptr<string> hasArchiveFile_ = nullptr;
    // Indicates whether the directory contains files stored in the IA storage class.
    // 
    // This parameter is returned and valid only if the value of the Type parameter is Directory.
    // 
    // Valid values:
    // 
    // *   true: The directory contains files stored in the IA storage class.
    // *   false: The directory does not contain files stored in the IA storage class.
    std::shared_ptr<bool> hasInfrequentAccessFile_ = nullptr;
    // The file or directory inode.
    std::shared_ptr<string> inode_ = nullptr;
    // The time when the file was modified.
    // 
    // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
    // 
    // This parameter is returned and valid only if the value of the Type parameter is File.
    std::shared_ptr<string> mtime_ = nullptr;
    // The name of the file or directory.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the portable account. This parameter is returned and valid only if the value of the ProtocolType parameter is SMB and RAM-based access control is enabled.
    std::shared_ptr<string> owner_ = nullptr;
    // The time when the last data retrieval task was run.
    // 
    // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
    // 
    // This parameter is returned and valid only if the value of the Type parameter is File.
    std::shared_ptr<string> retrieveTime_ = nullptr;
    // The size of the file.
    // 
    // Unit: bytes.
    // 
    // This parameter is returned and valid only if the value of the Type parameter is File.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The storage class.
    // 
    // This parameter is returned and valid only if the value of the Type parameter is File.
    // 
    // Valid values:
    // 
    // *   InfrequentAccess: the IA storage class.
    // *   Archive: the Archive storage class.
    std::shared_ptr<string> storageType_ = nullptr;
    // The type of the query result.
    // 
    // Valid values:
    // 
    // *   File
    // *   Directory
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
