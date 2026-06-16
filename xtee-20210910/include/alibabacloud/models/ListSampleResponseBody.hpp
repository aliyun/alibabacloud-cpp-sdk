// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAMPLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSAMPLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class ListSampleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSampleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(TotalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListSampleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(TotalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListSampleResponseBody() = default ;
    ListSampleResponseBody(const ListSampleResponseBody &) = default ;
    ListSampleResponseBody(ListSampleResponseBody &&) = default ;
    ListSampleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSampleResponseBody() = default ;
    ListSampleResponseBody& operator=(const ListSampleResponseBody &) = default ;
    ListSampleResponseBody& operator=(ListSampleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
        DARABONBA_PTR_TO_JSON(SampleId, sampleId_);
        DARABONBA_PTR_TO_JSON(SampleName, sampleName_);
        DARABONBA_PTR_TO_JSON(Tab, tab_);
        DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
        DARABONBA_PTR_TO_JSON(UploadUserName, uploadUserName_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
        DARABONBA_PTR_FROM_JSON(SampleId, sampleId_);
        DARABONBA_PTR_FROM_JSON(SampleName, sampleName_);
        DARABONBA_PTR_FROM_JSON(Tab, tab_);
        DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
        DARABONBA_PTR_FROM_JSON(UploadUserName, uploadUserName_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileName_ == nullptr
        && this->fileSize_ == nullptr && this->remark_ == nullptr && this->rowCount_ == nullptr && this->sampleId_ == nullptr && this->sampleName_ == nullptr
        && this->tab_ == nullptr && this->uploadTime_ == nullptr && this->uploadUserName_ == nullptr; };
      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline ResultObject& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int32_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0) };
      inline ResultObject& setFileSize(int32_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline ResultObject& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // rowCount Field Functions 
      bool hasRowCount() const { return this->rowCount_ != nullptr;};
      void deleteRowCount() { this->rowCount_ = nullptr;};
      inline int32_t getRowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0) };
      inline ResultObject& setRowCount(int32_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


      // sampleId Field Functions 
      bool hasSampleId() const { return this->sampleId_ != nullptr;};
      void deleteSampleId() { this->sampleId_ = nullptr;};
      inline int32_t getSampleId() const { DARABONBA_PTR_GET_DEFAULT(sampleId_, 0) };
      inline ResultObject& setSampleId(int32_t sampleId) { DARABONBA_PTR_SET_VALUE(sampleId_, sampleId) };


      // sampleName Field Functions 
      bool hasSampleName() const { return this->sampleName_ != nullptr;};
      void deleteSampleName() { this->sampleName_ = nullptr;};
      inline string getSampleName() const { DARABONBA_PTR_GET_DEFAULT(sampleName_, "") };
      inline ResultObject& setSampleName(string sampleName) { DARABONBA_PTR_SET_VALUE(sampleName_, sampleName) };


      // tab Field Functions 
      bool hasTab() const { return this->tab_ != nullptr;};
      void deleteTab() { this->tab_ = nullptr;};
      inline string getTab() const { DARABONBA_PTR_GET_DEFAULT(tab_, "") };
      inline ResultObject& setTab(string tab) { DARABONBA_PTR_SET_VALUE(tab_, tab) };


      // uploadTime Field Functions 
      bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
      void deleteUploadTime() { this->uploadTime_ = nullptr;};
      inline string getUploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
      inline ResultObject& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


      // uploadUserName Field Functions 
      bool hasUploadUserName() const { return this->uploadUserName_ != nullptr;};
      void deleteUploadUserName() { this->uploadUserName_ = nullptr;};
      inline string getUploadUserName() const { DARABONBA_PTR_GET_DEFAULT(uploadUserName_, "") };
      inline ResultObject& setUploadUserName(string uploadUserName) { DARABONBA_PTR_SET_VALUE(uploadUserName_, uploadUserName) };


    protected:
      // File Name.
      shared_ptr<string> fileName_ {};
      // File Size. Unit: bytes.
      shared_ptr<int32_t> fileSize_ {};
      // Remarks.
      shared_ptr<string> remark_ {};
      // Table Row Count.
      shared_ptr<int32_t> rowCount_ {};
      // Sample ID.
      shared_ptr<int32_t> sampleId_ {};
      // Sample Name.
      shared_ptr<string> sampleName_ {};
      // Scenario.
      shared_ptr<string> tab_ {};
      // File Upload Time.
      shared_ptr<string> uploadTime_ {};
      // Uploader.
      shared_ptr<string> uploadUserName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->currentPage_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->resultObject_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSampleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListSampleResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline ListSampleResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSampleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSampleResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSampleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<ListSampleResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<ListSampleResponseBody::ResultObject>) };
    inline vector<ListSampleResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<ListSampleResponseBody::ResultObject>) };
    inline ListSampleResponseBody& setResultObject(const vector<ListSampleResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline ListSampleResponseBody& setResultObject(vector<ListSampleResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int32_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0) };
    inline ListSampleResponseBody& setTotalItem(int32_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListSampleResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Status code.
    shared_ptr<string> code_ {};
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // HTTP status code.
    shared_ptr<string> httpStatusCode_ {};
    // Error message.
    shared_ptr<string> message_ {};
    // Page size.
    shared_ptr<int32_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return Result.
    shared_ptr<vector<ListSampleResponseBody::ResultObject>> resultObject_ {};
    // Total Number of Returned Items.
    shared_ptr<int32_t> totalItem_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
