// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAMPLEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSAMPLEDETAILRESPONSEBODY_HPP_
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
  class GetSampleDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSampleDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, GetSampleDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    GetSampleDetailResponseBody() = default ;
    GetSampleDetailResponseBody(const GetSampleDetailResponseBody &) = default ;
    GetSampleDetailResponseBody(GetSampleDetailResponseBody &&) = default ;
    GetSampleDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSampleDetailResponseBody() = default ;
    GetSampleDetailResponseBody& operator=(const GetSampleDetailResponseBody &) = default ;
    GetSampleDetailResponseBody& operator=(GetSampleDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(ColumnStats, columnStats_);
        DARABONBA_PTR_TO_JSON(DateType, dateType_);
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(PreviewData, previewData_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
        DARABONBA_PTR_TO_JSON(SampleId, sampleId_);
        DARABONBA_PTR_TO_JSON(SampleName, sampleName_);
        DARABONBA_PTR_TO_JSON(Tab, tab_);
        DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
        DARABONBA_PTR_TO_JSON(UploadUserName, uploadUserName_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(ColumnStats, columnStats_);
        DARABONBA_PTR_FROM_JSON(DateType, dateType_);
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(PreviewData, previewData_);
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
        // De-duplication count.
        shared_ptr<int32_t> distinctNumber_ {};
        // De-duplication rate.
        shared_ptr<string> distinctRate_ {};
        // Field Name.
        shared_ptr<string> fieldName_ {};
        // Number of missing values.
        shared_ptr<int32_t> missNumber_ {};
        // Missing rate.
        shared_ptr<string> missRate_ {};
        // Row number of the record.
        shared_ptr<int32_t> rowNumber_ {};
      };

      virtual bool empty() const override { return this->columnStats_ == nullptr
        && this->dateType_ == nullptr && this->downloadUrl_ == nullptr && this->fileName_ == nullptr && this->fileSize_ == nullptr && this->previewData_ == nullptr
        && this->remark_ == nullptr && this->rowCount_ == nullptr && this->sampleId_ == nullptr && this->sampleName_ == nullptr && this->tab_ == nullptr
        && this->uploadTime_ == nullptr && this->uploadUserName_ == nullptr; };
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


      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline ResultObject& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


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


      // previewData Field Functions 
      bool hasPreviewData() const { return this->previewData_ != nullptr;};
      void deletePreviewData() { this->previewData_ = nullptr;};
      inline const ResultObject::PreviewData & getPreviewData() const { DARABONBA_PTR_GET_CONST(previewData_, ResultObject::PreviewData) };
      inline ResultObject::PreviewData getPreviewData() { DARABONBA_PTR_GET(previewData_, ResultObject::PreviewData) };
      inline ResultObject& setPreviewData(const ResultObject::PreviewData & previewData) { DARABONBA_PTR_SET_VALUE(previewData_, previewData) };
      inline ResultObject& setPreviewData(ResultObject::PreviewData && previewData) { DARABONBA_PTR_SET_RVALUE(previewData_, previewData) };


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
      // Columns.
      shared_ptr<vector<ResultObject::ColumnStats>> columnStats_ {};
      // The time filter Type. You can filter by the last 7 Days, last 30 Days, last 6 months, or Custom.
      shared_ptr<string> dateType_ {};
      // The download URL of the file.
      shared_ptr<string> downloadUrl_ {};
      // File name.  
      // > The file name must end with .txt or .sql. For example, test.txt or test.sql.
      shared_ptr<string> fileName_ {};
      // File Size (bytes).
      shared_ptr<int32_t> fileSize_ {};
      // Table data.
      shared_ptr<ResultObject::PreviewData> previewData_ {};
      // Remarks.
      shared_ptr<string> remark_ {};
      // The number of result records returned.
      shared_ptr<int32_t> rowCount_ {};
      // The sample ID.
      shared_ptr<int32_t> sampleId_ {};
      // Sample name.
      shared_ptr<string> sampleName_ {};
      // Scenario.
      shared_ptr<string> tab_ {};
      // File upload time.
      shared_ptr<string> uploadTime_ {};
      // Uploader.
      shared_ptr<string> uploadUserName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSampleDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline GetSampleDetailResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSampleDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSampleDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const GetSampleDetailResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, GetSampleDetailResponseBody::ResultObject) };
    inline GetSampleDetailResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, GetSampleDetailResponseBody::ResultObject) };
    inline GetSampleDetailResponseBody& setResultObject(const GetSampleDetailResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline GetSampleDetailResponseBody& setResultObject(GetSampleDetailResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<string> httpStatusCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Request result.
    shared_ptr<GetSampleDetailResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
