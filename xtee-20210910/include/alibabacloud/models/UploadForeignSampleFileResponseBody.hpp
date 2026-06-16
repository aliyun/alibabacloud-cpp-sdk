// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADFOREIGNSAMPLEFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADFOREIGNSAMPLEFILERESPONSEBODY_HPP_
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
  class UploadForeignSampleFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadForeignSampleFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, UploadForeignSampleFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    UploadForeignSampleFileResponseBody() = default ;
    UploadForeignSampleFileResponseBody(const UploadForeignSampleFileResponseBody &) = default ;
    UploadForeignSampleFileResponseBody(UploadForeignSampleFileResponseBody &&) = default ;
    UploadForeignSampleFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadForeignSampleFileResponseBody() = default ;
    UploadForeignSampleFileResponseBody& operator=(const UploadForeignSampleFileResponseBody &) = default ;
    UploadForeignSampleFileResponseBody& operator=(UploadForeignSampleFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(BeyondBacktrackingPeriodNum, beyondBacktrackingPeriodNum_);
        DARABONBA_PTR_TO_JSON(ColumnStats, columnStats_);
        DARABONBA_PTR_TO_JSON(DateType, dateType_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_TO_JSON(NotExistScenes, notExistScenes_);
        DARABONBA_PTR_TO_JSON(PhoneInvalidList, phoneInvalidList_);
        DARABONBA_PTR_TO_JSON(PreviewData, previewData_);
        DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(BeyondBacktrackingPeriodNum, beyondBacktrackingPeriodNum_);
        DARABONBA_PTR_FROM_JSON(ColumnStats, columnStats_);
        DARABONBA_PTR_FROM_JSON(DateType, dateType_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_FROM_JSON(NotExistScenes, notExistScenes_);
        DARABONBA_PTR_FROM_JSON(PhoneInvalidList, phoneInvalidList_);
        DARABONBA_PTR_FROM_JSON(PreviewData, previewData_);
        DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
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
      class PreviewData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PreviewData& obj) { 
          DARABONBA_PTR_TO_JSON(Headers, headers_);
          DARABONBA_PTR_TO_JSON(Rows, rows_);
        };
        friend void from_json(const Darabonba::Json& j, PreviewData& obj) { 
          DARABONBA_PTR_FROM_JSON(Headers, headers_);
          DARABONBA_PTR_FROM_JSON(Rows, rows_);
        };
        PreviewData() = default ;
        PreviewData(const PreviewData &) = default ;
        PreviewData(PreviewData &&) = default ;
        PreviewData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PreviewData() = default ;
        PreviewData& operator=(const PreviewData &) = default ;
        PreviewData& operator=(PreviewData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->headers_ == nullptr
        && this->rows_ == nullptr; };
        // headers Field Functions 
        bool hasHeaders() const { return this->headers_ != nullptr;};
        void deleteHeaders() { this->headers_ = nullptr;};
        inline const vector<string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, vector<string>) };
        inline vector<string> getHeaders() { DARABONBA_PTR_GET(headers_, vector<string>) };
        inline PreviewData& setHeaders(const vector<string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
        inline PreviewData& setHeaders(vector<string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


        // rows Field Functions 
        bool hasRows() const { return this->rows_ != nullptr;};
        void deleteRows() { this->rows_ = nullptr;};
        inline const vector<vector<string>> & getRows() const { DARABONBA_PTR_GET_CONST(rows_, vector<vector<string>>) };
        inline vector<vector<string>> getRows() { DARABONBA_PTR_GET(rows_, vector<vector<string>>) };
        inline PreviewData& setRows(const vector<vector<string>> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
        inline PreviewData& setRows(vector<vector<string>> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


      protected:
        // Header information returned.
        shared_ptr<vector<string>> headers_ {};
        // Row data.
        shared_ptr<vector<vector<string>>> rows_ {};
      };

      class ColumnStats : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ColumnStats& obj) { 
          DARABONBA_PTR_TO_JSON(DistinctNumber, distinctNumber_);
          DARABONBA_PTR_TO_JSON(DistinctRate, distinctRate_);
          DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
          DARABONBA_PTR_TO_JSON(MissNumber, missNumber_);
          DARABONBA_PTR_TO_JSON(MissRate, missRate_);
          DARABONBA_PTR_TO_JSON(RowNumber, rowNumber_);
        };
        friend void from_json(const Darabonba::Json& j, ColumnStats& obj) { 
          DARABONBA_PTR_FROM_JSON(DistinctNumber, distinctNumber_);
          DARABONBA_PTR_FROM_JSON(DistinctRate, distinctRate_);
          DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
          DARABONBA_PTR_FROM_JSON(MissNumber, missNumber_);
          DARABONBA_PTR_FROM_JSON(MissRate, missRate_);
          DARABONBA_PTR_FROM_JSON(RowNumber, rowNumber_);
        };
        ColumnStats() = default ;
        ColumnStats(const ColumnStats &) = default ;
        ColumnStats(ColumnStats &&) = default ;
        ColumnStats(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ColumnStats() = default ;
        ColumnStats& operator=(const ColumnStats &) = default ;
        ColumnStats& operator=(ColumnStats &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->distinctNumber_ == nullptr
        && this->distinctRate_ == nullptr && this->fieldName_ == nullptr && this->missNumber_ == nullptr && this->missRate_ == nullptr && this->rowNumber_ == nullptr; };
        // distinctNumber Field Functions 
        bool hasDistinctNumber() const { return this->distinctNumber_ != nullptr;};
        void deleteDistinctNumber() { this->distinctNumber_ = nullptr;};
        inline int32_t getDistinctNumber() const { DARABONBA_PTR_GET_DEFAULT(distinctNumber_, 0) };
        inline ColumnStats& setDistinctNumber(int32_t distinctNumber) { DARABONBA_PTR_SET_VALUE(distinctNumber_, distinctNumber) };


        // distinctRate Field Functions 
        bool hasDistinctRate() const { return this->distinctRate_ != nullptr;};
        void deleteDistinctRate() { this->distinctRate_ = nullptr;};
        inline string getDistinctRate() const { DARABONBA_PTR_GET_DEFAULT(distinctRate_, "") };
        inline ColumnStats& setDistinctRate(string distinctRate) { DARABONBA_PTR_SET_VALUE(distinctRate_, distinctRate) };


        // fieldName Field Functions 
        bool hasFieldName() const { return this->fieldName_ != nullptr;};
        void deleteFieldName() { this->fieldName_ = nullptr;};
        inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
        inline ColumnStats& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


        // missNumber Field Functions 
        bool hasMissNumber() const { return this->missNumber_ != nullptr;};
        void deleteMissNumber() { this->missNumber_ = nullptr;};
        inline int32_t getMissNumber() const { DARABONBA_PTR_GET_DEFAULT(missNumber_, 0) };
        inline ColumnStats& setMissNumber(int32_t missNumber) { DARABONBA_PTR_SET_VALUE(missNumber_, missNumber) };


        // missRate Field Functions 
        bool hasMissRate() const { return this->missRate_ != nullptr;};
        void deleteMissRate() { this->missRate_ = nullptr;};
        inline string getMissRate() const { DARABONBA_PTR_GET_DEFAULT(missRate_, "") };
        inline ColumnStats& setMissRate(string missRate) { DARABONBA_PTR_SET_VALUE(missRate_, missRate) };


        // rowNumber Field Functions 
        bool hasRowNumber() const { return this->rowNumber_ != nullptr;};
        void deleteRowNumber() { this->rowNumber_ = nullptr;};
        inline int32_t getRowNumber() const { DARABONBA_PTR_GET_DEFAULT(rowNumber_, 0) };
        inline ColumnStats& setRowNumber(int32_t rowNumber) { DARABONBA_PTR_SET_VALUE(rowNumber_, rowNumber) };


      protected:
        // De-duplication Count.
        shared_ptr<int32_t> distinctNumber_ {};
        // De-duplication rate.
        shared_ptr<string> distinctRate_ {};
        // Field Name.
        shared_ptr<string> fieldName_ {};
        // Missing count.
        shared_ptr<int32_t> missNumber_ {};
        // Missing rate.
        shared_ptr<string> missRate_ {};
        // Row number of the record.
        shared_ptr<int32_t> rowNumber_ {};
      };

      virtual bool empty() const override { return this->beyondBacktrackingPeriodNum_ == nullptr
        && this->columnStats_ == nullptr && this->dateType_ == nullptr && this->fileName_ == nullptr && this->fileSize_ == nullptr && this->fileUrl_ == nullptr
        && this->notExistScenes_ == nullptr && this->phoneInvalidList_ == nullptr && this->previewData_ == nullptr && this->rowCount_ == nullptr; };
      // beyondBacktrackingPeriodNum Field Functions 
      bool hasBeyondBacktrackingPeriodNum() const { return this->beyondBacktrackingPeriodNum_ != nullptr;};
      void deleteBeyondBacktrackingPeriodNum() { this->beyondBacktrackingPeriodNum_ = nullptr;};
      inline int32_t getBeyondBacktrackingPeriodNum() const { DARABONBA_PTR_GET_DEFAULT(beyondBacktrackingPeriodNum_, 0) };
      inline ResultObject& setBeyondBacktrackingPeriodNum(int32_t beyondBacktrackingPeriodNum) { DARABONBA_PTR_SET_VALUE(beyondBacktrackingPeriodNum_, beyondBacktrackingPeriodNum) };


      // columnStats Field Functions 
      bool hasColumnStats() const { return this->columnStats_ != nullptr;};
      void deleteColumnStats() { this->columnStats_ = nullptr;};
      inline const vector<ResultObject::ColumnStats> & getColumnStats() const { DARABONBA_PTR_GET_CONST(columnStats_, vector<ResultObject::ColumnStats>) };
      inline vector<ResultObject::ColumnStats> getColumnStats() { DARABONBA_PTR_GET(columnStats_, vector<ResultObject::ColumnStats>) };
      inline ResultObject& setColumnStats(const vector<ResultObject::ColumnStats> & columnStats) { DARABONBA_PTR_SET_VALUE(columnStats_, columnStats) };
      inline ResultObject& setColumnStats(vector<ResultObject::ColumnStats> && columnStats) { DARABONBA_PTR_SET_RVALUE(columnStats_, columnStats) };


      // dateType Field Functions 
      bool hasDateType() const { return this->dateType_ != nullptr;};
      void deleteDateType() { this->dateType_ = nullptr;};
      inline string getDateType() const { DARABONBA_PTR_GET_DEFAULT(dateType_, "") };
      inline ResultObject& setDateType(string dateType) { DARABONBA_PTR_SET_VALUE(dateType_, dateType) };


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


      // fileUrl Field Functions 
      bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
      void deleteFileUrl() { this->fileUrl_ = nullptr;};
      inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
      inline ResultObject& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


      // notExistScenes Field Functions 
      bool hasNotExistScenes() const { return this->notExistScenes_ != nullptr;};
      void deleteNotExistScenes() { this->notExistScenes_ = nullptr;};
      inline const vector<string> & getNotExistScenes() const { DARABONBA_PTR_GET_CONST(notExistScenes_, vector<string>) };
      inline vector<string> getNotExistScenes() { DARABONBA_PTR_GET(notExistScenes_, vector<string>) };
      inline ResultObject& setNotExistScenes(const vector<string> & notExistScenes) { DARABONBA_PTR_SET_VALUE(notExistScenes_, notExistScenes) };
      inline ResultObject& setNotExistScenes(vector<string> && notExistScenes) { DARABONBA_PTR_SET_RVALUE(notExistScenes_, notExistScenes) };


      // phoneInvalidList Field Functions 
      bool hasPhoneInvalidList() const { return this->phoneInvalidList_ != nullptr;};
      void deletePhoneInvalidList() { this->phoneInvalidList_ = nullptr;};
      inline const vector<string> & getPhoneInvalidList() const { DARABONBA_PTR_GET_CONST(phoneInvalidList_, vector<string>) };
      inline vector<string> getPhoneInvalidList() { DARABONBA_PTR_GET(phoneInvalidList_, vector<string>) };
      inline ResultObject& setPhoneInvalidList(const vector<string> & phoneInvalidList) { DARABONBA_PTR_SET_VALUE(phoneInvalidList_, phoneInvalidList) };
      inline ResultObject& setPhoneInvalidList(vector<string> && phoneInvalidList) { DARABONBA_PTR_SET_RVALUE(phoneInvalidList_, phoneInvalidList) };


      // previewData Field Functions 
      bool hasPreviewData() const { return this->previewData_ != nullptr;};
      void deletePreviewData() { this->previewData_ = nullptr;};
      inline const ResultObject::PreviewData & getPreviewData() const { DARABONBA_PTR_GET_CONST(previewData_, ResultObject::PreviewData) };
      inline ResultObject::PreviewData getPreviewData() { DARABONBA_PTR_GET(previewData_, ResultObject::PreviewData) };
      inline ResultObject& setPreviewData(const ResultObject::PreviewData & previewData) { DARABONBA_PTR_SET_VALUE(previewData_, previewData) };
      inline ResultObject& setPreviewData(ResultObject::PreviewData && previewData) { DARABONBA_PTR_SET_RVALUE(previewData_, previewData) };


      // rowCount Field Functions 
      bool hasRowCount() const { return this->rowCount_ != nullptr;};
      void deleteRowCount() { this->rowCount_ = nullptr;};
      inline int32_t getRowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0) };
      inline ResultObject& setRowCount(int32_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


    protected:
      // Number of jobs.
      shared_ptr<int32_t> beyondBacktrackingPeriodNum_ {};
      // Column.
      shared_ptr<vector<ResultObject::ColumnStats>> columnStats_ {};
      // Time type.
      shared_ptr<string> dateType_ {};
      // File name.
      shared_ptr<string> fileName_ {};
      // File Size.
      shared_ptr<int32_t> fileSize_ {};
      // File URL.
      shared_ptr<string> fileUrl_ {};
      // Non-existent scenarios.
      shared_ptr<vector<string>> notExistScenes_ {};
      // PhoneInvalidList.
      shared_ptr<vector<string>> phoneInvalidList_ {};
      // Table data.
      shared_ptr<ResultObject::PreviewData> previewData_ {};
      // Number of rows.
      shared_ptr<int32_t> rowCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UploadForeignSampleFileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline UploadForeignSampleFileResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UploadForeignSampleFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadForeignSampleFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const UploadForeignSampleFileResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, UploadForeignSampleFileResponseBody::ResultObject) };
    inline UploadForeignSampleFileResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, UploadForeignSampleFileResponseBody::ResultObject) };
    inline UploadForeignSampleFileResponseBody& setResultObject(const UploadForeignSampleFileResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline UploadForeignSampleFileResponseBody& setResultObject(UploadForeignSampleFileResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // status code.
    shared_ptr<string> code_ {};
    // HTTP status code.
    shared_ptr<string> httpStatusCode_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // request ID.
    shared_ptr<string> requestId_ {};
    // Return Result.
    shared_ptr<UploadForeignSampleFileResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
