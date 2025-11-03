// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECYCLEDDIRECTORIESANDFILESRESPONSEBODYENTRIES_HPP_
#define ALIBABACLOUD_MODELS_LISTRECYCLEDDIRECTORIESANDFILESRESPONSEBODYENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ListRecycledDirectoriesAndFilesResponseBodyEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecycledDirectoriesAndFilesResponseBodyEntries& obj) { 
      DARABONBA_PTR_TO_JSON(ATime, ATime_);
      DARABONBA_PTR_TO_JSON(CTime, CTime_);
      DARABONBA_PTR_TO_JSON(DeleteTime, deleteTime_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(Inode, inode_);
      DARABONBA_PTR_TO_JSON(MTime, MTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecycledDirectoriesAndFilesResponseBodyEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(ATime, ATime_);
      DARABONBA_PTR_FROM_JSON(CTime, CTime_);
      DARABONBA_PTR_FROM_JSON(DeleteTime, deleteTime_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(Inode, inode_);
      DARABONBA_PTR_FROM_JSON(MTime, MTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListRecycledDirectoriesAndFilesResponseBodyEntries() = default ;
    ListRecycledDirectoriesAndFilesResponseBodyEntries(const ListRecycledDirectoriesAndFilesResponseBodyEntries &) = default ;
    ListRecycledDirectoriesAndFilesResponseBodyEntries(ListRecycledDirectoriesAndFilesResponseBodyEntries &&) = default ;
    ListRecycledDirectoriesAndFilesResponseBodyEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecycledDirectoriesAndFilesResponseBodyEntries() = default ;
    ListRecycledDirectoriesAndFilesResponseBodyEntries& operator=(const ListRecycledDirectoriesAndFilesResponseBodyEntries &) = default ;
    ListRecycledDirectoriesAndFilesResponseBodyEntries& operator=(ListRecycledDirectoriesAndFilesResponseBodyEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ATime_ == nullptr
        && return this->CTime_ == nullptr && return this->deleteTime_ == nullptr && return this->fileId_ == nullptr && return this->inode_ == nullptr && return this->MTime_ == nullptr
        && return this->name_ == nullptr && return this->size_ == nullptr && return this->type_ == nullptr; };
    // ATime Field Functions 
    bool hasATime() const { return this->ATime_ != nullptr;};
    void deleteATime() { this->ATime_ = nullptr;};
    inline string ATime() const { DARABONBA_PTR_GET_DEFAULT(ATime_, "") };
    inline ListRecycledDirectoriesAndFilesResponseBodyEntries& setATime(string ATime) { DARABONBA_PTR_SET_VALUE(ATime_, ATime) };


    // CTime Field Functions 
    bool hasCTime() const { return this->CTime_ != nullptr;};
    void deleteCTime() { this->CTime_ = nullptr;};
    inline string CTime() const { DARABONBA_PTR_GET_DEFAULT(CTime_, "") };
    inline ListRecycledDirectoriesAndFilesResponseBodyEntries& setCTime(string CTime) { DARABONBA_PTR_SET_VALUE(CTime_, CTime) };


    // deleteTime Field Functions 
    bool hasDeleteTime() const { return this->deleteTime_ != nullptr;};
    void deleteDeleteTime() { this->deleteTime_ = nullptr;};
    inline string deleteTime() const { DARABONBA_PTR_GET_DEFAULT(deleteTime_, "") };
    inline ListRecycledDirectoriesAndFilesResponseBodyEntries& setDeleteTime(string deleteTime) { DARABONBA_PTR_SET_VALUE(deleteTime_, deleteTime) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline ListRecycledDirectoriesAndFilesResponseBodyEntries& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // inode Field Functions 
    bool hasInode() const { return this->inode_ != nullptr;};
    void deleteInode() { this->inode_ = nullptr;};
    inline string inode() const { DARABONBA_PTR_GET_DEFAULT(inode_, "") };
    inline ListRecycledDirectoriesAndFilesResponseBodyEntries& setInode(string inode) { DARABONBA_PTR_SET_VALUE(inode_, inode) };


    // MTime Field Functions 
    bool hasMTime() const { return this->MTime_ != nullptr;};
    void deleteMTime() { this->MTime_ = nullptr;};
    inline string MTime() const { DARABONBA_PTR_GET_DEFAULT(MTime_, "") };
    inline ListRecycledDirectoriesAndFilesResponseBodyEntries& setMTime(string MTime) { DARABONBA_PTR_SET_VALUE(MTime_, MTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRecycledDirectoriesAndFilesResponseBodyEntries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListRecycledDirectoriesAndFilesResponseBodyEntries& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListRecycledDirectoriesAndFilesResponseBodyEntries& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The time when the file or directory was last accessed.
    std::shared_ptr<string> ATime_ = nullptr;
    // The time when the metadata was last modified.
    std::shared_ptr<string> CTime_ = nullptr;
    // The time when the file or directory was deleted.
    std::shared_ptr<string> deleteTime_ = nullptr;
    // The IDs of the files or directories.
    std::shared_ptr<string> fileId_ = nullptr;
    // The inode of the file or directory.
    std::shared_ptr<string> inode_ = nullptr;
    // The time when the file or directory was last modified.
    std::shared_ptr<string> MTime_ = nullptr;
    // The name of the file or directory before it was deleted.
    std::shared_ptr<string> name_ = nullptr;
    // The size of the file. Unit: bytes.
    // 
    // The value 0 is returned for this parameter if Directory is returned for the Type parameter.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The type of the returned object. Valid values:
    // 
    // *   File
    // *   Directory
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
