// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIRECTORYORFILEPROPERTIESRESPONSEBODYENTRY_HPP_
#define ALIBABACLOUD_MODELS_GETDIRECTORYORFILEPROPERTIESRESPONSEBODYENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class GetDirectoryOrFilePropertiesResponseBodyEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDirectoryOrFilePropertiesResponseBodyEntry& obj) { 
      DARABONBA_PTR_TO_JSON(ATime, ATime_);
      DARABONBA_PTR_TO_JSON(CTime, CTime_);
      DARABONBA_PTR_TO_JSON(HasArchiveFile, hasArchiveFile_);
      DARABONBA_PTR_TO_JSON(HasInfrequentAccessFile, hasInfrequentAccessFile_);
      DARABONBA_PTR_TO_JSON(Inode, inode_);
      DARABONBA_PTR_TO_JSON(MTime, MTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RetrieveTime, retrieveTime_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDirectoryOrFilePropertiesResponseBodyEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(ATime, ATime_);
      DARABONBA_PTR_FROM_JSON(CTime, CTime_);
      DARABONBA_PTR_FROM_JSON(HasArchiveFile, hasArchiveFile_);
      DARABONBA_PTR_FROM_JSON(HasInfrequentAccessFile, hasInfrequentAccessFile_);
      DARABONBA_PTR_FROM_JSON(Inode, inode_);
      DARABONBA_PTR_FROM_JSON(MTime, MTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RetrieveTime, retrieveTime_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetDirectoryOrFilePropertiesResponseBodyEntry() = default ;
    GetDirectoryOrFilePropertiesResponseBodyEntry(const GetDirectoryOrFilePropertiesResponseBodyEntry &) = default ;
    GetDirectoryOrFilePropertiesResponseBodyEntry(GetDirectoryOrFilePropertiesResponseBodyEntry &&) = default ;
    GetDirectoryOrFilePropertiesResponseBodyEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDirectoryOrFilePropertiesResponseBodyEntry() = default ;
    GetDirectoryOrFilePropertiesResponseBodyEntry& operator=(const GetDirectoryOrFilePropertiesResponseBodyEntry &) = default ;
    GetDirectoryOrFilePropertiesResponseBodyEntry& operator=(GetDirectoryOrFilePropertiesResponseBodyEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ATime_ == nullptr
        && return this->CTime_ == nullptr && return this->hasArchiveFile_ == nullptr && return this->hasInfrequentAccessFile_ == nullptr && return this->inode_ == nullptr && return this->MTime_ == nullptr
        && return this->name_ == nullptr && return this->retrieveTime_ == nullptr && return this->size_ == nullptr && return this->storageType_ == nullptr && return this->type_ == nullptr; };
    // ATime Field Functions 
    bool hasATime() const { return this->ATime_ != nullptr;};
    void deleteATime() { this->ATime_ = nullptr;};
    inline string ATime() const { DARABONBA_PTR_GET_DEFAULT(ATime_, "") };
    inline GetDirectoryOrFilePropertiesResponseBodyEntry& setATime(string ATime) { DARABONBA_PTR_SET_VALUE(ATime_, ATime) };


    // CTime Field Functions 
    bool hasCTime() const { return this->CTime_ != nullptr;};
    void deleteCTime() { this->CTime_ = nullptr;};
    inline string CTime() const { DARABONBA_PTR_GET_DEFAULT(CTime_, "") };
    inline GetDirectoryOrFilePropertiesResponseBodyEntry& setCTime(string CTime) { DARABONBA_PTR_SET_VALUE(CTime_, CTime) };


    // hasArchiveFile Field Functions 
    bool hasHasArchiveFile() const { return this->hasArchiveFile_ != nullptr;};
    void deleteHasArchiveFile() { this->hasArchiveFile_ = nullptr;};
    inline bool hasArchiveFile() const { DARABONBA_PTR_GET_DEFAULT(hasArchiveFile_, false) };
    inline GetDirectoryOrFilePropertiesResponseBodyEntry& setHasArchiveFile(bool hasArchiveFile) { DARABONBA_PTR_SET_VALUE(hasArchiveFile_, hasArchiveFile) };


    // hasInfrequentAccessFile Field Functions 
    bool hasHasInfrequentAccessFile() const { return this->hasInfrequentAccessFile_ != nullptr;};
    void deleteHasInfrequentAccessFile() { this->hasInfrequentAccessFile_ = nullptr;};
    inline bool hasInfrequentAccessFile() const { DARABONBA_PTR_GET_DEFAULT(hasInfrequentAccessFile_, false) };
    inline GetDirectoryOrFilePropertiesResponseBodyEntry& setHasInfrequentAccessFile(bool hasInfrequentAccessFile) { DARABONBA_PTR_SET_VALUE(hasInfrequentAccessFile_, hasInfrequentAccessFile) };


    // inode Field Functions 
    bool hasInode() const { return this->inode_ != nullptr;};
    void deleteInode() { this->inode_ = nullptr;};
    inline string inode() const { DARABONBA_PTR_GET_DEFAULT(inode_, "") };
    inline GetDirectoryOrFilePropertiesResponseBodyEntry& setInode(string inode) { DARABONBA_PTR_SET_VALUE(inode_, inode) };


    // MTime Field Functions 
    bool hasMTime() const { return this->MTime_ != nullptr;};
    void deleteMTime() { this->MTime_ = nullptr;};
    inline string MTime() const { DARABONBA_PTR_GET_DEFAULT(MTime_, "") };
    inline GetDirectoryOrFilePropertiesResponseBodyEntry& setMTime(string MTime) { DARABONBA_PTR_SET_VALUE(MTime_, MTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDirectoryOrFilePropertiesResponseBodyEntry& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // retrieveTime Field Functions 
    bool hasRetrieveTime() const { return this->retrieveTime_ != nullptr;};
    void deleteRetrieveTime() { this->retrieveTime_ = nullptr;};
    inline string retrieveTime() const { DARABONBA_PTR_GET_DEFAULT(retrieveTime_, "") };
    inline GetDirectoryOrFilePropertiesResponseBodyEntry& setRetrieveTime(string retrieveTime) { DARABONBA_PTR_SET_VALUE(retrieveTime_, retrieveTime) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetDirectoryOrFilePropertiesResponseBodyEntry& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline GetDirectoryOrFilePropertiesResponseBodyEntry& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDirectoryOrFilePropertiesResponseBodyEntry& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The time when the file was queried.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
    // 
    // This parameter is returned only if the value of the Type parameter is File.
    std::shared_ptr<string> ATime_ = nullptr;
    // The time when the metadata was modified.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
    // 
    // This parameter is returned only if the value of the Type parameter is File.
    std::shared_ptr<string> CTime_ = nullptr;
    // Indicates whether the directory contains files stored in the Archive storage class.
    // 
    // This parameter is returned only if the Type parameter is set to Directory.
    // 
    // Valid values:
    // 
    // *   true: The directory contains files stored in the Archive storage class.
    // *   false: The directory does not contain files stored in the Archive storage class.
    std::shared_ptr<bool> hasArchiveFile_ = nullptr;
    // Indicates whether the directory contains files stored in the IA storage medium.
    // 
    // This parameter is returned only if the value of the Type parameter is Directory.
    // 
    // Valid values:
    // 
    // *   true: The directory contains files stored in the IA storage medium.
    // *   false: The directory does not contain files stored in the IA storage medium.
    std::shared_ptr<bool> hasInfrequentAccessFile_ = nullptr;
    // The file or directory inode.
    std::shared_ptr<string> inode_ = nullptr;
    // The time when the file was modified.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
    // 
    // This parameter is returned only if the value of the Type parameter is File.
    std::shared_ptr<string> MTime_ = nullptr;
    // The name of the file or directory.
    std::shared_ptr<string> name_ = nullptr;
    // The time when the last data retrieval task was run.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
    // 
    // This parameter is returned only if the value of the Type parameter is File.
    std::shared_ptr<string> retrieveTime_ = nullptr;
    // The size of the file.
    // 
    // Unit: bytes.
    // 
    // This parameter is returned only if the value of the Type parameter is File.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The storage class of the file.
    // 
    // This parameter is returned only if the value of the Type parameter is File.
    // 
    // Valid values:
    // 
    // *   standard: General-purpose NAS file system
    // *   InfrequentAccess: the IA storage class.
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
