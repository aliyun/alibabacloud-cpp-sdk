// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECYCLEDDIRECTORIESANDFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECYCLEDDIRECTORIESANDFILESRESPONSEBODY_HPP_
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
  class ListRecycledDirectoriesAndFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecycledDirectoriesAndFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Entries, entries_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecycledDirectoriesAndFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Entries, entries_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRecycledDirectoriesAndFilesResponseBody() = default ;
    ListRecycledDirectoriesAndFilesResponseBody(const ListRecycledDirectoriesAndFilesResponseBody &) = default ;
    ListRecycledDirectoriesAndFilesResponseBody(ListRecycledDirectoriesAndFilesResponseBody &&) = default ;
    ListRecycledDirectoriesAndFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecycledDirectoriesAndFilesResponseBody() = default ;
    ListRecycledDirectoriesAndFilesResponseBody& operator=(const ListRecycledDirectoriesAndFilesResponseBody &) = default ;
    ListRecycledDirectoriesAndFilesResponseBody& operator=(ListRecycledDirectoriesAndFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Entries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entries& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Entries& obj) { 
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
      virtual bool empty() const override { return this->ATime_ == nullptr
        && this->CTime_ == nullptr && this->deleteTime_ == nullptr && this->fileId_ == nullptr && this->inode_ == nullptr && this->MTime_ == nullptr
        && this->name_ == nullptr && this->size_ == nullptr && this->type_ == nullptr; };
      // ATime Field Functions 
      bool hasATime() const { return this->ATime_ != nullptr;};
      void deleteATime() { this->ATime_ = nullptr;};
      inline string getATime() const { DARABONBA_PTR_GET_DEFAULT(ATime_, "") };
      inline Entries& setATime(string ATime) { DARABONBA_PTR_SET_VALUE(ATime_, ATime) };


      // CTime Field Functions 
      bool hasCTime() const { return this->CTime_ != nullptr;};
      void deleteCTime() { this->CTime_ = nullptr;};
      inline string getCTime() const { DARABONBA_PTR_GET_DEFAULT(CTime_, "") };
      inline Entries& setCTime(string CTime) { DARABONBA_PTR_SET_VALUE(CTime_, CTime) };


      // deleteTime Field Functions 
      bool hasDeleteTime() const { return this->deleteTime_ != nullptr;};
      void deleteDeleteTime() { this->deleteTime_ = nullptr;};
      inline string getDeleteTime() const { DARABONBA_PTR_GET_DEFAULT(deleteTime_, "") };
      inline Entries& setDeleteTime(string deleteTime) { DARABONBA_PTR_SET_VALUE(deleteTime_, deleteTime) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Entries& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // inode Field Functions 
      bool hasInode() const { return this->inode_ != nullptr;};
      void deleteInode() { this->inode_ = nullptr;};
      inline string getInode() const { DARABONBA_PTR_GET_DEFAULT(inode_, "") };
      inline Entries& setInode(string inode) { DARABONBA_PTR_SET_VALUE(inode_, inode) };


      // MTime Field Functions 
      bool hasMTime() const { return this->MTime_ != nullptr;};
      void deleteMTime() { this->MTime_ = nullptr;};
      inline string getMTime() const { DARABONBA_PTR_GET_DEFAULT(MTime_, "") };
      inline Entries& setMTime(string MTime) { DARABONBA_PTR_SET_VALUE(MTime_, MTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Entries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Entries& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Entries& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The time when the file or directory was last accessed.
      shared_ptr<string> ATime_ {};
      // The time when the metadata was last modified.
      shared_ptr<string> CTime_ {};
      // The time when the file or directory was deleted.
      shared_ptr<string> deleteTime_ {};
      // The IDs of the files or directories.
      shared_ptr<string> fileId_ {};
      // The inode of the file or directory.
      shared_ptr<string> inode_ {};
      // The time when the file or directory was last modified.
      shared_ptr<string> MTime_ {};
      // The name of the file or directory before it was deleted.
      shared_ptr<string> name_ {};
      // The size of the file. Unit: bytes.
      // 
      // The value 0 is returned for this parameter if Directory is returned for the Type parameter.
      shared_ptr<int64_t> size_ {};
      // The type of the returned object. Valid values:
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
    inline const vector<ListRecycledDirectoriesAndFilesResponseBody::Entries> & getEntries() const { DARABONBA_PTR_GET_CONST(entries_, vector<ListRecycledDirectoriesAndFilesResponseBody::Entries>) };
    inline vector<ListRecycledDirectoriesAndFilesResponseBody::Entries> getEntries() { DARABONBA_PTR_GET(entries_, vector<ListRecycledDirectoriesAndFilesResponseBody::Entries>) };
    inline ListRecycledDirectoriesAndFilesResponseBody& setEntries(const vector<ListRecycledDirectoriesAndFilesResponseBody::Entries> & entries) { DARABONBA_PTR_SET_VALUE(entries_, entries) };
    inline ListRecycledDirectoriesAndFilesResponseBody& setEntries(vector<ListRecycledDirectoriesAndFilesResponseBody::Entries> && entries) { DARABONBA_PTR_SET_RVALUE(entries_, entries) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRecycledDirectoriesAndFilesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecycledDirectoriesAndFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about files or directories in the recycle bin.
    shared_ptr<vector<ListRecycledDirectoriesAndFilesResponseBody::Entries>> entries_ {};
    // A pagination token.
    // 
    // If all the files and directories are incompletely returned in a query, the return value of the NextToken parameter is not empty. In this case, you can specify a valid value for the NextToken parameter to continue the query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
