// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVALIDATEFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVALIDATEFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ListValidateFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListValidateFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListValidateFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    ListValidateFileResponseBody() = default ;
    ListValidateFileResponseBody(const ListValidateFileResponseBody &) = default ;
    ListValidateFileResponseBody(ListValidateFileResponseBody &&) = default ;
    ListValidateFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListValidateFileResponseBody() = default ;
    ListValidateFileResponseBody& operator=(const ListValidateFileResponseBody &) = default ;
    ListValidateFileResponseBody& operator=(ListValidateFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Files : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Files& obj) { 
        DARABONBA_PTR_TO_JSON(CatchAllNum, catchAllNum_);
        DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_TO_JSON(DoNotMailNum, doNotMailNum_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(InvalidNum, invalidNum_);
        DARABONBA_PTR_TO_JSON(IsDownloadable, isDownloadable_);
        DARABONBA_PTR_TO_JSON(Percentage, percentage_);
        DARABONBA_PTR_TO_JSON(ProcessedNum, processedNum_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
        DARABONBA_PTR_TO_JSON(UnknownNum, unknownNum_);
        DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
        DARABONBA_PTR_TO_JSON(ValidNum, validNum_);
      };
      friend void from_json(const Darabonba::Json& j, Files& obj) { 
        DARABONBA_PTR_FROM_JSON(CatchAllNum, catchAllNum_);
        DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_FROM_JSON(DoNotMailNum, doNotMailNum_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(InvalidNum, invalidNum_);
        DARABONBA_PTR_FROM_JSON(IsDownloadable, isDownloadable_);
        DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
        DARABONBA_PTR_FROM_JSON(ProcessedNum, processedNum_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
        DARABONBA_PTR_FROM_JSON(UnknownNum, unknownNum_);
        DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
        DARABONBA_PTR_FROM_JSON(ValidNum, validNum_);
      };
      Files() = default ;
      Files(const Files &) = default ;
      Files(Files &&) = default ;
      Files(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Files() = default ;
      Files& operator=(const Files &) = default ;
      Files& operator=(Files &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->catchAllNum_ == nullptr
        && this->completeTime_ == nullptr && this->doNotMailNum_ == nullptr && this->fileId_ == nullptr && this->fileName_ == nullptr && this->invalidNum_ == nullptr
        && this->isDownloadable_ == nullptr && this->percentage_ == nullptr && this->processedNum_ == nullptr && this->status_ == nullptr && this->totalNum_ == nullptr
        && this->unknownNum_ == nullptr && this->uploadTime_ == nullptr && this->validNum_ == nullptr; };
      // catchAllNum Field Functions 
      bool hasCatchAllNum() const { return this->catchAllNum_ != nullptr;};
      void deleteCatchAllNum() { this->catchAllNum_ = nullptr;};
      inline string getCatchAllNum() const { DARABONBA_PTR_GET_DEFAULT(catchAllNum_, "") };
      inline Files& setCatchAllNum(string catchAllNum) { DARABONBA_PTR_SET_VALUE(catchAllNum_, catchAllNum) };


      // completeTime Field Functions 
      bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
      void deleteCompleteTime() { this->completeTime_ = nullptr;};
      inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
      inline Files& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


      // doNotMailNum Field Functions 
      bool hasDoNotMailNum() const { return this->doNotMailNum_ != nullptr;};
      void deleteDoNotMailNum() { this->doNotMailNum_ = nullptr;};
      inline string getDoNotMailNum() const { DARABONBA_PTR_GET_DEFAULT(doNotMailNum_, "") };
      inline Files& setDoNotMailNum(string doNotMailNum) { DARABONBA_PTR_SET_VALUE(doNotMailNum_, doNotMailNum) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Files& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Files& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // invalidNum Field Functions 
      bool hasInvalidNum() const { return this->invalidNum_ != nullptr;};
      void deleteInvalidNum() { this->invalidNum_ = nullptr;};
      inline string getInvalidNum() const { DARABONBA_PTR_GET_DEFAULT(invalidNum_, "") };
      inline Files& setInvalidNum(string invalidNum) { DARABONBA_PTR_SET_VALUE(invalidNum_, invalidNum) };


      // isDownloadable Field Functions 
      bool hasIsDownloadable() const { return this->isDownloadable_ != nullptr;};
      void deleteIsDownloadable() { this->isDownloadable_ = nullptr;};
      inline bool getIsDownloadable() const { DARABONBA_PTR_GET_DEFAULT(isDownloadable_, false) };
      inline Files& setIsDownloadable(bool isDownloadable) { DARABONBA_PTR_SET_VALUE(isDownloadable_, isDownloadable) };


      // percentage Field Functions 
      bool hasPercentage() const { return this->percentage_ != nullptr;};
      void deletePercentage() { this->percentage_ = nullptr;};
      inline string getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, "") };
      inline Files& setPercentage(string percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


      // processedNum Field Functions 
      bool hasProcessedNum() const { return this->processedNum_ != nullptr;};
      void deleteProcessedNum() { this->processedNum_ = nullptr;};
      inline string getProcessedNum() const { DARABONBA_PTR_GET_DEFAULT(processedNum_, "") };
      inline Files& setProcessedNum(string processedNum) { DARABONBA_PTR_SET_VALUE(processedNum_, processedNum) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Files& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalNum Field Functions 
      bool hasTotalNum() const { return this->totalNum_ != nullptr;};
      void deleteTotalNum() { this->totalNum_ = nullptr;};
      inline string getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, "") };
      inline Files& setTotalNum(string totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


      // unknownNum Field Functions 
      bool hasUnknownNum() const { return this->unknownNum_ != nullptr;};
      void deleteUnknownNum() { this->unknownNum_ = nullptr;};
      inline string getUnknownNum() const { DARABONBA_PTR_GET_DEFAULT(unknownNum_, "") };
      inline Files& setUnknownNum(string unknownNum) { DARABONBA_PTR_SET_VALUE(unknownNum_, unknownNum) };


      // uploadTime Field Functions 
      bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
      void deleteUploadTime() { this->uploadTime_ = nullptr;};
      inline string getUploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
      inline Files& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


      // validNum Field Functions 
      bool hasValidNum() const { return this->validNum_ != nullptr;};
      void deleteValidNum() { this->validNum_ = nullptr;};
      inline string getValidNum() const { DARABONBA_PTR_GET_DEFAULT(validNum_, "") };
      inline Files& setValidNum(string validNum) { DARABONBA_PTR_SET_VALUE(validNum_, validNum) };


    protected:
      shared_ptr<string> catchAllNum_ {};
      shared_ptr<string> completeTime_ {};
      shared_ptr<string> doNotMailNum_ {};
      shared_ptr<string> fileId_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<string> invalidNum_ {};
      shared_ptr<bool> isDownloadable_ {};
      shared_ptr<string> percentage_ {};
      shared_ptr<string> processedNum_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> totalNum_ {};
      shared_ptr<string> unknownNum_ {};
      shared_ptr<string> uploadTime_ {};
      shared_ptr<string> validNum_ {};
    };

    virtual bool empty() const override { return this->files_ == nullptr
        && this->hasNext_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalPages_ == nullptr
        && this->totalSize_ == nullptr; };
    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<ListValidateFileResponseBody::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<ListValidateFileResponseBody::Files>) };
    inline vector<ListValidateFileResponseBody::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<ListValidateFileResponseBody::Files>) };
    inline ListValidateFileResponseBody& setFiles(const vector<ListValidateFileResponseBody::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline ListValidateFileResponseBody& setFiles(vector<ListValidateFileResponseBody::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // hasNext Field Functions 
    bool hasHasNext() const { return this->hasNext_ != nullptr;};
    void deleteHasNext() { this->hasNext_ = nullptr;};
    inline bool getHasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
    inline ListValidateFileResponseBody& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListValidateFileResponseBody& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListValidateFileResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListValidateFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline ListValidateFileResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline ListValidateFileResponseBody& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    shared_ptr<vector<ListValidateFileResponseBody::Files>> files_ {};
    shared_ptr<bool> hasNext_ {};
    shared_ptr<int32_t> page_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalPages_ {};
    shared_ptr<int32_t> totalSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
