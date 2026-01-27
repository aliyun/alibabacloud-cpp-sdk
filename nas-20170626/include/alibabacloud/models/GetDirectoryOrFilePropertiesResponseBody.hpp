// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIRECTORYORFILEPROPERTIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDIRECTORYORFILEPROPERTIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class GetDirectoryOrFilePropertiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDirectoryOrFilePropertiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Entry, entry_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDirectoryOrFilePropertiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Entry, entry_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDirectoryOrFilePropertiesResponseBody() = default ;
    GetDirectoryOrFilePropertiesResponseBody(const GetDirectoryOrFilePropertiesResponseBody &) = default ;
    GetDirectoryOrFilePropertiesResponseBody(GetDirectoryOrFilePropertiesResponseBody &&) = default ;
    GetDirectoryOrFilePropertiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDirectoryOrFilePropertiesResponseBody() = default ;
    GetDirectoryOrFilePropertiesResponseBody& operator=(const GetDirectoryOrFilePropertiesResponseBody &) = default ;
    GetDirectoryOrFilePropertiesResponseBody& operator=(GetDirectoryOrFilePropertiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Entry : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entry& obj) { 
        DARABONBA_PTR_TO_JSON(ATime, ATime_);
        DARABONBA_PTR_TO_JSON(CTime, CTime_);
        DARABONBA_PTR_TO_JSON(HasArchiveFile, hasArchiveFile_);
        DARABONBA_PTR_TO_JSON(HasInfrequentAccessFile, hasInfrequentAccessFile_);
        DARABONBA_PTR_TO_JSON(Inode, inode_);
        DARABONBA_PTR_TO_JSON(MTime, MTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OfflineDuration, offlineDuration_);
        DARABONBA_PTR_TO_JSON(OfflineUnchangedDuration, offlineUnchangedDuration_);
        DARABONBA_PTR_TO_JSON(RetrieveTime, retrieveTime_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Entry& obj) { 
        DARABONBA_PTR_FROM_JSON(ATime, ATime_);
        DARABONBA_PTR_FROM_JSON(CTime, CTime_);
        DARABONBA_PTR_FROM_JSON(HasArchiveFile, hasArchiveFile_);
        DARABONBA_PTR_FROM_JSON(HasInfrequentAccessFile, hasInfrequentAccessFile_);
        DARABONBA_PTR_FROM_JSON(Inode, inode_);
        DARABONBA_PTR_FROM_JSON(MTime, MTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OfflineDuration, offlineDuration_);
        DARABONBA_PTR_FROM_JSON(OfflineUnchangedDuration, offlineUnchangedDuration_);
        DARABONBA_PTR_FROM_JSON(RetrieveTime, retrieveTime_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Entry() = default ;
      Entry(const Entry &) = default ;
      Entry(Entry &&) = default ;
      Entry(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Entry() = default ;
      Entry& operator=(const Entry &) = default ;
      Entry& operator=(Entry &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ATime_ == nullptr
        && this->CTime_ == nullptr && this->hasArchiveFile_ == nullptr && this->hasInfrequentAccessFile_ == nullptr && this->inode_ == nullptr && this->MTime_ == nullptr
        && this->name_ == nullptr && this->offlineDuration_ == nullptr && this->offlineUnchangedDuration_ == nullptr && this->retrieveTime_ == nullptr && this->size_ == nullptr
        && this->storageType_ == nullptr && this->type_ == nullptr; };
      // ATime Field Functions 
      bool hasATime() const { return this->ATime_ != nullptr;};
      void deleteATime() { this->ATime_ = nullptr;};
      inline string getATime() const { DARABONBA_PTR_GET_DEFAULT(ATime_, "") };
      inline Entry& setATime(string ATime) { DARABONBA_PTR_SET_VALUE(ATime_, ATime) };


      // CTime Field Functions 
      bool hasCTime() const { return this->CTime_ != nullptr;};
      void deleteCTime() { this->CTime_ = nullptr;};
      inline string getCTime() const { DARABONBA_PTR_GET_DEFAULT(CTime_, "") };
      inline Entry& setCTime(string CTime) { DARABONBA_PTR_SET_VALUE(CTime_, CTime) };


      // hasArchiveFile Field Functions 
      bool hasHasArchiveFile() const { return this->hasArchiveFile_ != nullptr;};
      void deleteHasArchiveFile() { this->hasArchiveFile_ = nullptr;};
      inline bool getHasArchiveFile() const { DARABONBA_PTR_GET_DEFAULT(hasArchiveFile_, false) };
      inline Entry& setHasArchiveFile(bool hasArchiveFile) { DARABONBA_PTR_SET_VALUE(hasArchiveFile_, hasArchiveFile) };


      // hasInfrequentAccessFile Field Functions 
      bool hasHasInfrequentAccessFile() const { return this->hasInfrequentAccessFile_ != nullptr;};
      void deleteHasInfrequentAccessFile() { this->hasInfrequentAccessFile_ = nullptr;};
      inline bool getHasInfrequentAccessFile() const { DARABONBA_PTR_GET_DEFAULT(hasInfrequentAccessFile_, false) };
      inline Entry& setHasInfrequentAccessFile(bool hasInfrequentAccessFile) { DARABONBA_PTR_SET_VALUE(hasInfrequentAccessFile_, hasInfrequentAccessFile) };


      // inode Field Functions 
      bool hasInode() const { return this->inode_ != nullptr;};
      void deleteInode() { this->inode_ = nullptr;};
      inline string getInode() const { DARABONBA_PTR_GET_DEFAULT(inode_, "") };
      inline Entry& setInode(string inode) { DARABONBA_PTR_SET_VALUE(inode_, inode) };


      // MTime Field Functions 
      bool hasMTime() const { return this->MTime_ != nullptr;};
      void deleteMTime() { this->MTime_ = nullptr;};
      inline string getMTime() const { DARABONBA_PTR_GET_DEFAULT(MTime_, "") };
      inline Entry& setMTime(string MTime) { DARABONBA_PTR_SET_VALUE(MTime_, MTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Entry& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // offlineDuration Field Functions 
      bool hasOfflineDuration() const { return this->offlineDuration_ != nullptr;};
      void deleteOfflineDuration() { this->offlineDuration_ = nullptr;};
      inline int64_t getOfflineDuration() const { DARABONBA_PTR_GET_DEFAULT(offlineDuration_, 0L) };
      inline Entry& setOfflineDuration(int64_t offlineDuration) { DARABONBA_PTR_SET_VALUE(offlineDuration_, offlineDuration) };


      // offlineUnchangedDuration Field Functions 
      bool hasOfflineUnchangedDuration() const { return this->offlineUnchangedDuration_ != nullptr;};
      void deleteOfflineUnchangedDuration() { this->offlineUnchangedDuration_ = nullptr;};
      inline int64_t getOfflineUnchangedDuration() const { DARABONBA_PTR_GET_DEFAULT(offlineUnchangedDuration_, 0L) };
      inline Entry& setOfflineUnchangedDuration(int64_t offlineUnchangedDuration) { DARABONBA_PTR_SET_VALUE(offlineUnchangedDuration_, offlineUnchangedDuration) };


      // retrieveTime Field Functions 
      bool hasRetrieveTime() const { return this->retrieveTime_ != nullptr;};
      void deleteRetrieveTime() { this->retrieveTime_ = nullptr;};
      inline string getRetrieveTime() const { DARABONBA_PTR_GET_DEFAULT(retrieveTime_, "") };
      inline Entry& setRetrieveTime(string retrieveTime) { DARABONBA_PTR_SET_VALUE(retrieveTime_, retrieveTime) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Entry& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Entry& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Entry& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The time when the file was queried.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
      // 
      // This parameter is returned only if the value of the Type parameter is File.
      shared_ptr<string> ATime_ {};
      // The time when the metadata was modified.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
      // 
      // This parameter is returned only if the value of the Type parameter is File.
      shared_ptr<string> CTime_ {};
      // Indicates whether the directory contains files stored in the Archive storage class.
      // 
      // This parameter is returned only if the Type parameter is set to Directory.
      // 
      // Valid values:
      // 
      // *   true: The directory contains files stored in the Archive storage class.
      // *   false: The directory does not contain files stored in the Archive storage class.
      shared_ptr<bool> hasArchiveFile_ {};
      // Indicates whether the directory contains files stored in the IA storage medium.
      // 
      // This parameter is returned only if the value of the Type parameter is Directory.
      // 
      // Valid values:
      // 
      // *   true: The directory contains files stored in the IA storage medium.
      // *   false: The directory does not contain files stored in the IA storage medium.
      shared_ptr<bool> hasInfrequentAccessFile_ {};
      // The file or directory inode.
      shared_ptr<string> inode_ {};
      // The time when the file was modified.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
      // 
      // This parameter is returned only if the value of the Type parameter is File.
      shared_ptr<string> MTime_ {};
      // The name of the file or directory.
      shared_ptr<string> name_ {};
      shared_ptr<int64_t> offlineDuration_ {};
      shared_ptr<int64_t> offlineUnchangedDuration_ {};
      // The time when the last data retrieval task was run.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
      // 
      // This parameter is returned only if the value of the Type parameter is File.
      shared_ptr<string> retrieveTime_ {};
      // The size of the file.
      // 
      // Unit: bytes.
      // 
      // This parameter is returned only if the value of the Type parameter is File.
      shared_ptr<int64_t> size_ {};
      // The storage class of the file.
      // 
      // This parameter is returned only if the value of the Type parameter is File.
      // 
      // Valid values:
      // 
      // *   standard: General-purpose NAS file system
      // *   InfrequentAccess: the IA storage class.
      shared_ptr<string> storageType_ {};
      // The type of the query result.
      // 
      // Valid values:
      // 
      // *   File
      // *   Directory
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->entry_ == nullptr
        && this->requestId_ == nullptr; };
    // entry Field Functions 
    bool hasEntry() const { return this->entry_ != nullptr;};
    void deleteEntry() { this->entry_ = nullptr;};
    inline const GetDirectoryOrFilePropertiesResponseBody::Entry & getEntry() const { DARABONBA_PTR_GET_CONST(entry_, GetDirectoryOrFilePropertiesResponseBody::Entry) };
    inline GetDirectoryOrFilePropertiesResponseBody::Entry getEntry() { DARABONBA_PTR_GET(entry_, GetDirectoryOrFilePropertiesResponseBody::Entry) };
    inline GetDirectoryOrFilePropertiesResponseBody& setEntry(const GetDirectoryOrFilePropertiesResponseBody::Entry & entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };
    inline GetDirectoryOrFilePropertiesResponseBody& setEntry(GetDirectoryOrFilePropertiesResponseBody::Entry && entry) { DARABONBA_PTR_SET_RVALUE(entry_, entry) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDirectoryOrFilePropertiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the file or directory.
    shared_ptr<GetDirectoryOrFilePropertiesResponseBody::Entry> entry_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
