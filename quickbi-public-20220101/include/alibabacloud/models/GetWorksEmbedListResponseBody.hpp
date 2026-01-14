// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSEMBEDLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSEMBEDLISTRESPONSEBODY_HPP_
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
  class GetWorksEmbedListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorksEmbedListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorksEmbedListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetWorksEmbedListResponseBody() = default ;
    GetWorksEmbedListResponseBody(const GetWorksEmbedListResponseBody &) = default ;
    GetWorksEmbedListResponseBody(GetWorksEmbedListResponseBody &&) = default ;
    GetWorksEmbedListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorksEmbedListResponseBody() = default ;
    GetWorksEmbedListResponseBody& operator=(const GetWorksEmbedListResponseBody &) = default ;
    GetWorksEmbedListResponseBody& operator=(GetWorksEmbedListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
        DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
          DARABONBA_PTR_TO_JSON(EmbedTime, embedTime_);
          DARABONBA_PTR_TO_JSON(WorksId, worksId_);
          DARABONBA_PTR_TO_JSON(WorksName, worksName_);
          DARABONBA_PTR_TO_JSON(WorksType, worksType_);
          DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(EmbedTime, embedTime_);
          DARABONBA_PTR_FROM_JSON(WorksId, worksId_);
          DARABONBA_PTR_FROM_JSON(WorksName, worksName_);
          DARABONBA_PTR_FROM_JSON(WorksType, worksType_);
          DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
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
        virtual bool empty() const override { return this->embedTime_ == nullptr
        && this->worksId_ == nullptr && this->worksName_ == nullptr && this->worksType_ == nullptr && this->workspaceId_ == nullptr; };
        // embedTime Field Functions 
        bool hasEmbedTime() const { return this->embedTime_ != nullptr;};
        void deleteEmbedTime() { this->embedTime_ = nullptr;};
        inline string getEmbedTime() const { DARABONBA_PTR_GET_DEFAULT(embedTime_, "") };
        inline Data& setEmbedTime(string embedTime) { DARABONBA_PTR_SET_VALUE(embedTime_, embedTime) };


        // worksId Field Functions 
        bool hasWorksId() const { return this->worksId_ != nullptr;};
        void deleteWorksId() { this->worksId_ = nullptr;};
        inline string getWorksId() const { DARABONBA_PTR_GET_DEFAULT(worksId_, "") };
        inline Data& setWorksId(string worksId) { DARABONBA_PTR_SET_VALUE(worksId_, worksId) };


        // worksName Field Functions 
        bool hasWorksName() const { return this->worksName_ != nullptr;};
        void deleteWorksName() { this->worksName_ = nullptr;};
        inline string getWorksName() const { DARABONBA_PTR_GET_DEFAULT(worksName_, "") };
        inline Data& setWorksName(string worksName) { DARABONBA_PTR_SET_VALUE(worksName_, worksName) };


        // worksType Field Functions 
        bool hasWorksType() const { return this->worksType_ != nullptr;};
        void deleteWorksType() { this->worksType_ = nullptr;};
        inline string getWorksType() const { DARABONBA_PTR_GET_DEFAULT(worksType_, "") };
        inline Data& setWorksType(string worksType) { DARABONBA_PTR_SET_VALUE(worksType_, worksType) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
        inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      protected:
        // Embed time
        shared_ptr<string> embedTime_ {};
        // Report ID
        shared_ptr<string> worksId_ {};
        // Report name
        shared_ptr<string> worksName_ {};
        // Report type
        shared_ptr<string> worksType_ {};
        // Workspace ID
        shared_ptr<string> workspaceId_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->totalNum_ == nullptr && this->totalPages_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Result::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Result::Data>) };
      inline vector<Result::Data> getData() { DARABONBA_PTR_GET(data_, vector<Result::Data>) };
      inline Result& setData(const vector<Result::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Result& setData(vector<Result::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Result& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Result& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalNum Field Functions 
      bool hasTotalNum() const { return this->totalNum_ != nullptr;};
      void deleteTotalNum() { this->totalNum_ = nullptr;};
      inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
      inline Result& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int64_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0L) };
      inline Result& setTotalPages(int64_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    protected:
      // Array of reports
      shared_ptr<vector<Result::Data>> data_ {};
      // Page number
      shared_ptr<int64_t> pageNo_ {};
      // Number of items per page
      shared_ptr<int64_t> pageSize_ {};
      // Total number of items
      shared_ptr<int64_t> totalNum_ {};
      // Total number of pages
      shared_ptr<int64_t> totalPages_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorksEmbedListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetWorksEmbedListResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetWorksEmbedListResponseBody::Result) };
    inline GetWorksEmbedListResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetWorksEmbedListResponseBody::Result) };
    inline GetWorksEmbedListResponseBody& setResult(const GetWorksEmbedListResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetWorksEmbedListResponseBody& setResult(GetWorksEmbedListResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetWorksEmbedListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID
    shared_ptr<string> requestId_ {};
    // Array of report objects
    shared_ptr<GetWorksEmbedListResponseBody::Result> result_ {};
    // Whether the request was successful
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
