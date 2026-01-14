// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListApiDatasourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiDatasourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiDatasourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListApiDatasourceResponseBody() = default ;
    ListApiDatasourceResponseBody(const ListApiDatasourceResponseBody &) = default ;
    ListApiDatasourceResponseBody(ListApiDatasourceResponseBody &&) = default ;
    ListApiDatasourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiDatasourceResponseBody() = default ;
    ListApiDatasourceResponseBody& operator=(const ListApiDatasourceResponseBody &) = default ;
    ListApiDatasourceResponseBody& operator=(ListApiDatasourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(Body, body_);
          DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
          DARABONBA_PTR_TO_JSON(DateUpdateTime, dateUpdateTime_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(Parameters, parameters_);
          DARABONBA_PTR_TO_JSON(ShowName, showName_);
          DARABONBA_PTR_TO_JSON(StatusType, statusType_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(Body, body_);
          DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
          DARABONBA_PTR_FROM_JSON(DateUpdateTime, dateUpdateTime_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(ShowName, showName_);
          DARABONBA_PTR_FROM_JSON(StatusType, statusType_);
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
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->body_ == nullptr && this->dataSize_ == nullptr && this->dateUpdateTime_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->jobId_ == nullptr && this->parameters_ == nullptr && this->showName_ == nullptr && this->statusType_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline Data& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // body Field Functions 
        bool hasBody() const { return this->body_ != nullptr;};
        void deleteBody() { this->body_ = nullptr;};
        inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
        inline Data& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


        // dataSize Field Functions 
        bool hasDataSize() const { return this->dataSize_ != nullptr;};
        void deleteDataSize() { this->dataSize_ = nullptr;};
        inline float getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0.0) };
        inline Data& setDataSize(float dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


        // dateUpdateTime Field Functions 
        bool hasDateUpdateTime() const { return this->dateUpdateTime_ != nullptr;};
        void deleteDateUpdateTime() { this->dateUpdateTime_ = nullptr;};
        inline string getDateUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(dateUpdateTime_, "") };
        inline Data& setDateUpdateTime(string dateUpdateTime) { DARABONBA_PTR_SET_VALUE(dateUpdateTime_, dateUpdateTime) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline Data& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
        inline Data& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


        // showName Field Functions 
        bool hasShowName() const { return this->showName_ != nullptr;};
        void deleteShowName() { this->showName_ = nullptr;};
        inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
        inline Data& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


        // statusType Field Functions 
        bool hasStatusType() const { return this->statusType_ != nullptr;};
        void deleteStatusType() { this->statusType_ = nullptr;};
        inline int32_t getStatusType() const { DARABONBA_PTR_GET_DEFAULT(statusType_, 0) };
        inline Data& setStatusType(int32_t statusType) { DARABONBA_PTR_SET_VALUE(statusType_, statusType) };


      protected:
        // The ID of the API data source.
        shared_ptr<string> apiId_ {};
        // The parameter configuration of the query statement in JSON format. You can customize the parameter configuration.
        shared_ptr<string> body_ {};
        // The data volume of the API data source.
        // 
        // *   Unit: Kbit/s
        shared_ptr<float> dataSize_ {};
        // The last synchronization time of the API data source.
        shared_ptr<string> dateUpdateTime_ {};
        // The time when the quota plan was created.
        shared_ptr<string> gmtCreate_ {};
        // The time when the optimization job was modified.
        shared_ptr<string> gmtModified_ {};
        // The job ID.
        shared_ptr<string> jobId_ {};
        // The parameter configurations in the JSONArray format.
        // 
        // *   name: parameter name
        // *   value: the parameter value
        shared_ptr<string> parameters_ {};
        // The name of the API data source.
        shared_ptr<string> showName_ {};
        // The status of the API data source synchronization task.
        // 
        // Valid values:
        // 
        // *   0: the to be run.
        // *   1: The is running.
        // *   2: The is successfully.
        // *   3: failed.
        shared_ptr<int32_t> statusType_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->totalNum_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Result::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Result::Data>) };
      inline vector<Result::Data> getData() { DARABONBA_PTR_GET(data_, vector<Result::Data>) };
      inline Result& setData(const vector<Result::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Result& setData(vector<Result::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Result& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Result& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalNum Field Functions 
      bool hasTotalNum() const { return this->totalNum_ != nullptr;};
      void deleteTotalNum() { this->totalNum_ = nullptr;};
      inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
      inline Result& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    protected:
      // The list of API data sources that were queried.
      shared_ptr<vector<Result::Data>> data_ {};
      // The page number.
      shared_ptr<int32_t> pageNum_ {};
      // The number of rows per page set when the interface is requested.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of rows.
      shared_ptr<int32_t> totalNum_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApiDatasourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListApiDatasourceResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListApiDatasourceResponseBody::Result) };
    inline ListApiDatasourceResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListApiDatasourceResponseBody::Result) };
    inline ListApiDatasourceResponseBody& setResult(const ListApiDatasourceResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListApiDatasourceResponseBody& setResult(ListApiDatasourceResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListApiDatasourceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The query results are returned.
    shared_ptr<ListApiDatasourceResponseBody::Result> result_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
