// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPICTURESEARCHJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPICTURESEARCHJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryPictureSearchJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPictureSearchJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPictureSearchJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryPictureSearchJobResponseBody() = default ;
    QueryPictureSearchJobResponseBody(const QueryPictureSearchJobResponseBody &) = default ;
    QueryPictureSearchJobResponseBody(QueryPictureSearchJobResponseBody &&) = default ;
    QueryPictureSearchJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPictureSearchJobResponseBody() = default ;
    QueryPictureSearchJobResponseBody& operator=(const QueryPictureSearchJobResponseBody &) = default ;
    QueryPictureSearchJobResponseBody& operator=(QueryPictureSearchJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
        DARABONBA_PTR_TO_JSON(PageData, pageData_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
        DARABONBA_PTR_FROM_JSON(PageData, pageData_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PageData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageData& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
          DARABONBA_PTR_TO_JSON(SearchPicUrl, searchPicUrl_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        };
        friend void from_json(const Darabonba::Json& j, PageData& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
          DARABONBA_PTR_FROM_JSON(SearchPicUrl, searchPicUrl_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        };
        PageData() = default ;
        PageData(const PageData &) = default ;
        PageData(PageData &&) = default ;
        PageData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageData() = default ;
        PageData& operator=(const PageData &) = default ;
        PageData& operator=(PageData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->endTime_ == nullptr && this->jobId_ == nullptr && this->jobStatus_ == nullptr && this->searchPicUrl_ == nullptr && this->startTime_ == nullptr
        && this->threshold_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline PageData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline PageData& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline PageData& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // jobStatus Field Functions 
        bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
        void deleteJobStatus() { this->jobStatus_ = nullptr;};
        inline int32_t getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, 0) };
        inline PageData& setJobStatus(int32_t jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


        // searchPicUrl Field Functions 
        bool hasSearchPicUrl() const { return this->searchPicUrl_ != nullptr;};
        void deleteSearchPicUrl() { this->searchPicUrl_ = nullptr;};
        inline string getSearchPicUrl() const { DARABONBA_PTR_GET_DEFAULT(searchPicUrl_, "") };
        inline PageData& setSearchPicUrl(string searchPicUrl) { DARABONBA_PTR_SET_VALUE(searchPicUrl_, searchPicUrl) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline PageData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
        inline PageData& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      protected:
        // The time when the image search job was created. The time is a 13-digit timestamp in milliseconds.
        shared_ptr<int64_t> createTime_ {};
        // The end time of the search range. The time is a 13-digit timestamp in milliseconds.
        shared_ptr<int64_t> endTime_ {};
        // The ID of the image search job.
        shared_ptr<string> jobId_ {};
        // The job status. Valid values:
        // - 0: Initialized.
        // - 1: No data.
        // - 2: Running.
        // - 3: Succeeded.
        // - 4: Failed.
        shared_ptr<int32_t> jobStatus_ {};
        // The URL of the searched image.
        shared_ptr<string> searchPicUrl_ {};
        // The start time of the search range. The time is a 13-digit timestamp in milliseconds.
        shared_ptr<int64_t> startTime_ {};
        // The search similarity.
        shared_ptr<float> threshold_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageCount_ == nullptr && this->pageData_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageCount Field Functions 
      bool hasPageCount() const { return this->pageCount_ != nullptr;};
      void deletePageCount() { this->pageCount_ = nullptr;};
      inline int32_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0) };
      inline Data& setPageCount(int32_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


      // pageData Field Functions 
      bool hasPageData() const { return this->pageData_ != nullptr;};
      void deletePageData() { this->pageData_ = nullptr;};
      inline const vector<Data::PageData> & getPageData() const { DARABONBA_PTR_GET_CONST(pageData_, vector<Data::PageData>) };
      inline vector<Data::PageData> getPageData() { DARABONBA_PTR_GET(pageData_, vector<Data::PageData>) };
      inline Data& setPageData(const vector<Data::PageData> & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
      inline Data& setPageData(vector<Data::PageData> && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The current page number.
      shared_ptr<int32_t> currentPage_ {};
      // The total number of pages.
      shared_ptr<int32_t> pageCount_ {};
      // The list of applications.
      shared_ptr<vector<Data::PageData>> pageData_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryPictureSearchJobResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryPictureSearchJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryPictureSearchJobResponseBody::Data) };
    inline QueryPictureSearchJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryPictureSearchJobResponseBody::Data) };
    inline QueryPictureSearchJobResponseBody& setData(const QueryPictureSearchJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryPictureSearchJobResponseBody& setData(QueryPictureSearchJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryPictureSearchJobResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPictureSearchJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryPictureSearchJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the call fails. For more information, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<QueryPictureSearchJobResponseBody::Data> data_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // The unique identifier generated by Alibaba Cloud for the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
