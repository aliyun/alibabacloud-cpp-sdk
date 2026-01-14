// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCELERATIONOFWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCELERATIONOFWORKSPACERESPONSEBODY_HPP_
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
  class ListAccelerationOfWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccelerationOfWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccelerationOfWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAccelerationOfWorkspaceResponseBody() = default ;
    ListAccelerationOfWorkspaceResponseBody(const ListAccelerationOfWorkspaceResponseBody &) = default ;
    ListAccelerationOfWorkspaceResponseBody(ListAccelerationOfWorkspaceResponseBody &&) = default ;
    ListAccelerationOfWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccelerationOfWorkspaceResponseBody() = default ;
    ListAccelerationOfWorkspaceResponseBody& operator=(const ListAccelerationOfWorkspaceResponseBody &) = default ;
    ListAccelerationOfWorkspaceResponseBody& operator=(ListAccelerationOfWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Next, next_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Pre, pre_);
        DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
        DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Next, next_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Pre, pre_);
        DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
        DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
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
          DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
          DARABONBA_PTR_TO_JSON(CubeName, cubeName_);
          DARABONBA_PTR_TO_JSON(EnableQuickindexTime, enableQuickindexTime_);
          DARABONBA_PTR_TO_JSON(JobHistoryId, jobHistoryId_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
          DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
          DARABONBA_PTR_TO_JSON(Size, size_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
          DARABONBA_PTR_FROM_JSON(CubeName, cubeName_);
          DARABONBA_PTR_FROM_JSON(EnableQuickindexTime, enableQuickindexTime_);
          DARABONBA_PTR_FROM_JSON(JobHistoryId, jobHistoryId_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
          DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
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
        virtual bool empty() const override { return this->creatorName_ == nullptr
        && this->cubeId_ == nullptr && this->cubeName_ == nullptr && this->enableQuickindexTime_ == nullptr && this->jobHistoryId_ == nullptr && this->jobId_ == nullptr
        && this->jobStatus_ == nullptr && this->lastModifyTime_ == nullptr && this->size_ == nullptr; };
        // creatorName Field Functions 
        bool hasCreatorName() const { return this->creatorName_ != nullptr;};
        void deleteCreatorName() { this->creatorName_ = nullptr;};
        inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
        inline Data& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


        // cubeId Field Functions 
        bool hasCubeId() const { return this->cubeId_ != nullptr;};
        void deleteCubeId() { this->cubeId_ = nullptr;};
        inline string getCubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
        inline Data& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


        // cubeName Field Functions 
        bool hasCubeName() const { return this->cubeName_ != nullptr;};
        void deleteCubeName() { this->cubeName_ = nullptr;};
        inline string getCubeName() const { DARABONBA_PTR_GET_DEFAULT(cubeName_, "") };
        inline Data& setCubeName(string cubeName) { DARABONBA_PTR_SET_VALUE(cubeName_, cubeName) };


        // enableQuickindexTime Field Functions 
        bool hasEnableQuickindexTime() const { return this->enableQuickindexTime_ != nullptr;};
        void deleteEnableQuickindexTime() { this->enableQuickindexTime_ = nullptr;};
        inline string getEnableQuickindexTime() const { DARABONBA_PTR_GET_DEFAULT(enableQuickindexTime_, "") };
        inline Data& setEnableQuickindexTime(string enableQuickindexTime) { DARABONBA_PTR_SET_VALUE(enableQuickindexTime_, enableQuickindexTime) };


        // jobHistoryId Field Functions 
        bool hasJobHistoryId() const { return this->jobHistoryId_ != nullptr;};
        void deleteJobHistoryId() { this->jobHistoryId_ = nullptr;};
        inline string getJobHistoryId() const { DARABONBA_PTR_GET_DEFAULT(jobHistoryId_, "") };
        inline Data& setJobHistoryId(string jobHistoryId) { DARABONBA_PTR_SET_VALUE(jobHistoryId_, jobHistoryId) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline Data& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // jobStatus Field Functions 
        bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
        void deleteJobStatus() { this->jobStatus_ = nullptr;};
        inline int32_t getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, 0) };
        inline Data& setJobStatus(int32_t jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


        // lastModifyTime Field Functions 
        bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
        void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
        inline string getLastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, "") };
        inline Data& setLastModifyTime(string lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
        inline Data& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      protected:
        shared_ptr<string> creatorName_ {};
        shared_ptr<string> cubeId_ {};
        shared_ptr<string> cubeName_ {};
        shared_ptr<string> enableQuickindexTime_ {};
        shared_ptr<string> jobHistoryId_ {};
        shared_ptr<string> jobId_ {};
        shared_ptr<int32_t> jobStatus_ {};
        shared_ptr<string> lastModifyTime_ {};
        shared_ptr<string> size_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->next_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->pre_ == nullptr && this->totalNum_ == nullptr
        && this->totalPages_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Result::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Result::Data>) };
      inline vector<Result::Data> getData() { DARABONBA_PTR_GET(data_, vector<Result::Data>) };
      inline Result& setData(const vector<Result::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Result& setData(vector<Result::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // next Field Functions 
      bool hasNext() const { return this->next_ != nullptr;};
      void deleteNext() { this->next_ = nullptr;};
      inline int32_t getNext() const { DARABONBA_PTR_GET_DEFAULT(next_, 0) };
      inline Result& setNext(int32_t next) { DARABONBA_PTR_SET_VALUE(next_, next) };


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


      // pre Field Functions 
      bool hasPre() const { return this->pre_ != nullptr;};
      void deletePre() { this->pre_ = nullptr;};
      inline int32_t getPre() const { DARABONBA_PTR_GET_DEFAULT(pre_, 0) };
      inline Result& setPre(int32_t pre) { DARABONBA_PTR_SET_VALUE(pre_, pre) };


      // totalNum Field Functions 
      bool hasTotalNum() const { return this->totalNum_ != nullptr;};
      void deleteTotalNum() { this->totalNum_ = nullptr;};
      inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
      inline Result& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
      inline Result& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    protected:
      shared_ptr<vector<Result::Data>> data_ {};
      shared_ptr<int32_t> next_ {};
      shared_ptr<int32_t> pageNum_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> pre_ {};
      shared_ptr<int32_t> totalNum_ {};
      shared_ptr<int32_t> totalPages_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccelerationOfWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListAccelerationOfWorkspaceResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListAccelerationOfWorkspaceResponseBody::Result) };
    inline ListAccelerationOfWorkspaceResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListAccelerationOfWorkspaceResponseBody::Result) };
    inline ListAccelerationOfWorkspaceResponseBody& setResult(const ListAccelerationOfWorkspaceResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListAccelerationOfWorkspaceResponseBody& setResult(ListAccelerationOfWorkspaceResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAccelerationOfWorkspaceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<ListAccelerationOfWorkspaceResponseBody::Result> result_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
