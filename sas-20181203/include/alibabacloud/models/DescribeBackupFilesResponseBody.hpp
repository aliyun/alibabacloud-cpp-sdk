// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackupFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupFiles, backupFiles_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupFiles, backupFiles_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupFilesResponseBody() = default ;
    DescribeBackupFilesResponseBody(const DescribeBackupFilesResponseBody &) = default ;
    DescribeBackupFilesResponseBody(DescribeBackupFilesResponseBody &&) = default ;
    DescribeBackupFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupFilesResponseBody() = default ;
    DescribeBackupFilesResponseBody& operator=(const DescribeBackupFilesResponseBody &) = default ;
    DescribeBackupFilesResponseBody& operator=(DescribeBackupFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of backup files returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page. Default value: **10**.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of backup files returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class BackupFiles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackupFiles& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Subtree, subtree_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, BackupFiles& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Subtree, subtree_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      BackupFiles() = default ;
      BackupFiles(const BackupFiles &) = default ;
      BackupFiles(BackupFiles &&) = default ;
      BackupFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackupFiles() = default ;
      BackupFiles& operator=(const BackupFiles &) = default ;
      BackupFiles& operator=(BackupFiles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->size_ == nullptr && this->subtree_ == nullptr && this->type_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline BackupFiles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline BackupFiles& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // subtree Field Functions 
      bool hasSubtree() const { return this->subtree_ != nullptr;};
      void deleteSubtree() { this->subtree_ = nullptr;};
      inline string getSubtree() const { DARABONBA_PTR_GET_DEFAULT(subtree_, "") };
      inline BackupFiles& setSubtree(string subtree) { DARABONBA_PTR_SET_VALUE(subtree_, subtree) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline BackupFiles& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The name of the anti-ransomware policy.
      shared_ptr<string> name_ {};
      // The size of the backup file. Unit: bytes.
      shared_ptr<int64_t> size_ {};
      // The path to the subdirectory of the backup file.
      shared_ptr<string> subtree_ {};
      // The type of the protected file. Valid values:
      // 
      // *   **file**: files
      // *   **dir**: folders
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->backupFiles_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // backupFiles Field Functions 
    bool hasBackupFiles() const { return this->backupFiles_ != nullptr;};
    void deleteBackupFiles() { this->backupFiles_ = nullptr;};
    inline const vector<DescribeBackupFilesResponseBody::BackupFiles> & getBackupFiles() const { DARABONBA_PTR_GET_CONST(backupFiles_, vector<DescribeBackupFilesResponseBody::BackupFiles>) };
    inline vector<DescribeBackupFilesResponseBody::BackupFiles> getBackupFiles() { DARABONBA_PTR_GET(backupFiles_, vector<DescribeBackupFilesResponseBody::BackupFiles>) };
    inline DescribeBackupFilesResponseBody& setBackupFiles(const vector<DescribeBackupFilesResponseBody::BackupFiles> & backupFiles) { DARABONBA_PTR_SET_VALUE(backupFiles_, backupFiles) };
    inline DescribeBackupFilesResponseBody& setBackupFiles(vector<DescribeBackupFilesResponseBody::BackupFiles> && backupFiles) { DARABONBA_PTR_SET_RVALUE(backupFiles_, backupFiles) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeBackupFilesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeBackupFilesResponseBody::PageInfo) };
    inline DescribeBackupFilesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeBackupFilesResponseBody::PageInfo) };
    inline DescribeBackupFilesResponseBody& setPageInfo(const DescribeBackupFilesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeBackupFilesResponseBody& setPageInfo(DescribeBackupFilesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the backup files returned.
    shared_ptr<vector<DescribeBackupFilesResponseBody::BackupFiles>> backupFiles_ {};
    // The pagination information.
    shared_ptr<DescribeBackupFilesResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
