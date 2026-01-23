// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCANMALICIOUSFILEBYTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCANMALICIOUSFILEBYTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListScanMaliciousFileByTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScanMaliciousFileByTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScanMaliciousFiles, scanMaliciousFiles_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListScanMaliciousFileByTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScanMaliciousFiles, scanMaliciousFiles_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListScanMaliciousFileByTaskResponseBody() = default ;
    ListScanMaliciousFileByTaskResponseBody(const ListScanMaliciousFileByTaskResponseBody &) = default ;
    ListScanMaliciousFileByTaskResponseBody(ListScanMaliciousFileByTaskResponseBody &&) = default ;
    ListScanMaliciousFileByTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScanMaliciousFileByTaskResponseBody() = default ;
    ListScanMaliciousFileByTaskResponseBody& operator=(const ListScanMaliciousFileByTaskResponseBody &) = default ;
    ListScanMaliciousFileByTaskResponseBody& operator=(ListScanMaliciousFileByTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScanMaliciousFiles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScanMaliciousFiles& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(FirstScanTime, firstScanTime_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(MaliciousMd5, maliciousMd5_);
        DARABONBA_PTR_TO_JSON(MaliciousName, maliciousName_);
        DARABONBA_PTR_TO_JSON(ScanTaskId, scanTaskId_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, ScanMaliciousFiles& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(FirstScanTime, firstScanTime_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(MaliciousMd5, maliciousMd5_);
        DARABONBA_PTR_FROM_JSON(MaliciousName, maliciousName_);
        DARABONBA_PTR_FROM_JSON(ScanTaskId, scanTaskId_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      ScanMaliciousFiles() = default ;
      ScanMaliciousFiles(const ScanMaliciousFiles &) = default ;
      ScanMaliciousFiles(ScanMaliciousFiles &&) = default ;
      ScanMaliciousFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScanMaliciousFiles() = default ;
      ScanMaliciousFiles& operator=(const ScanMaliciousFiles &) = default ;
      ScanMaliciousFiles& operator=(ScanMaliciousFiles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->filePath_ == nullptr && this->firstScanTime_ == nullptr && this->level_ == nullptr && this->maliciousMd5_ == nullptr && this->maliciousName_ == nullptr
        && this->scanTaskId_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ScanMaliciousFiles& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline ScanMaliciousFiles& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // firstScanTime Field Functions 
      bool hasFirstScanTime() const { return this->firstScanTime_ != nullptr;};
      void deleteFirstScanTime() { this->firstScanTime_ = nullptr;};
      inline int64_t getFirstScanTime() const { DARABONBA_PTR_GET_DEFAULT(firstScanTime_, 0L) };
      inline ScanMaliciousFiles& setFirstScanTime(int64_t firstScanTime) { DARABONBA_PTR_SET_VALUE(firstScanTime_, firstScanTime) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline ScanMaliciousFiles& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // maliciousMd5 Field Functions 
      bool hasMaliciousMd5() const { return this->maliciousMd5_ != nullptr;};
      void deleteMaliciousMd5() { this->maliciousMd5_ = nullptr;};
      inline string getMaliciousMd5() const { DARABONBA_PTR_GET_DEFAULT(maliciousMd5_, "") };
      inline ScanMaliciousFiles& setMaliciousMd5(string maliciousMd5) { DARABONBA_PTR_SET_VALUE(maliciousMd5_, maliciousMd5) };


      // maliciousName Field Functions 
      bool hasMaliciousName() const { return this->maliciousName_ != nullptr;};
      void deleteMaliciousName() { this->maliciousName_ = nullptr;};
      inline string getMaliciousName() const { DARABONBA_PTR_GET_DEFAULT(maliciousName_, "") };
      inline ScanMaliciousFiles& setMaliciousName(string maliciousName) { DARABONBA_PTR_SET_VALUE(maliciousName_, maliciousName) };


      // scanTaskId Field Functions 
      bool hasScanTaskId() const { return this->scanTaskId_ != nullptr;};
      void deleteScanTaskId() { this->scanTaskId_ = nullptr;};
      inline string getScanTaskId() const { DARABONBA_PTR_GET_DEFAULT(scanTaskId_, "") };
      inline ScanMaliciousFiles& setScanTaskId(string scanTaskId) { DARABONBA_PTR_SET_VALUE(scanTaskId_, scanTaskId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline ScanMaliciousFiles& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the image was created.
      shared_ptr<int64_t> createTime_ {};
      // The path of the file.
      shared_ptr<string> filePath_ {};
      // The time when the image was first scanned.
      shared_ptr<int64_t> firstScanTime_ {};
      // The severity of the malicious file.
      shared_ptr<string> level_ {};
      // The MD5 hash value of the malicious file.
      shared_ptr<string> maliciousMd5_ {};
      // The type of the malicious file.
      shared_ptr<string> maliciousName_ {};
      // The ID of the image scan task.
      shared_ptr<string> scanTaskId_ {};
      // The time when the image was updated.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->isSuccess_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->scanMaliciousFiles_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListScanMaliciousFileByTaskResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListScanMaliciousFileByTaskResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListScanMaliciousFileByTaskResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListScanMaliciousFileByTaskResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScanMaliciousFileByTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanMaliciousFiles Field Functions 
    bool hasScanMaliciousFiles() const { return this->scanMaliciousFiles_ != nullptr;};
    void deleteScanMaliciousFiles() { this->scanMaliciousFiles_ = nullptr;};
    inline const vector<ListScanMaliciousFileByTaskResponseBody::ScanMaliciousFiles> & getScanMaliciousFiles() const { DARABONBA_PTR_GET_CONST(scanMaliciousFiles_, vector<ListScanMaliciousFileByTaskResponseBody::ScanMaliciousFiles>) };
    inline vector<ListScanMaliciousFileByTaskResponseBody::ScanMaliciousFiles> getScanMaliciousFiles() { DARABONBA_PTR_GET(scanMaliciousFiles_, vector<ListScanMaliciousFileByTaskResponseBody::ScanMaliciousFiles>) };
    inline ListScanMaliciousFileByTaskResponseBody& setScanMaliciousFiles(const vector<ListScanMaliciousFileByTaskResponseBody::ScanMaliciousFiles> & scanMaliciousFiles) { DARABONBA_PTR_SET_VALUE(scanMaliciousFiles_, scanMaliciousFiles) };
    inline ListScanMaliciousFileByTaskResponseBody& setScanMaliciousFiles(vector<ListScanMaliciousFileByTaskResponseBody::ScanMaliciousFiles> && scanMaliciousFiles) { DARABONBA_PTR_SET_RVALUE(scanMaliciousFiles_, scanMaliciousFiles) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListScanMaliciousFileByTaskResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The return value.
    shared_ptr<int32_t> code_ {};
    // Indicates whether the API request is successful. Valid values:
    // 
    // *   `true`: successful
    // *   `false`: failed
    shared_ptr<bool> isSuccess_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried malicious files.
    shared_ptr<vector<ListScanMaliciousFileByTaskResponseBody::ScanMaliciousFiles>> scanMaliciousFiles_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
