// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESOURCEUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESOURCEUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetJobResourceUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetJobResourceUsageResponseBody() = default ;
    GetJobResourceUsageResponseBody(const GetJobResourceUsageResponseBody &) = default ;
    GetJobResourceUsageResponseBody(GetJobResourceUsageResponseBody &&) = default ;
    GetJobResourceUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResourceUsageResponseBody() = default ;
    GetJobResourceUsageResponseBody& operator=(const GetJobResourceUsageResponseBody &) = default ;
    GetJobResourceUsageResponseBody& operator=(GetJobResourceUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(jobResourceUsageList, jobResourceUsageList_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(jobResourceUsageList, jobResourceUsageList_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
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
      class JobResourceUsageList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobResourceUsageList& obj) { 
          DARABONBA_PTR_TO_JSON(cuUsage, cuUsage_);
          DARABONBA_PTR_TO_JSON(date, date_);
          DARABONBA_PTR_TO_JSON(jobOwner, jobOwner_);
          DARABONBA_PTR_TO_JSON(memoryUsage, memoryUsage_);
          DARABONBA_PTR_TO_JSON(quotaNickname, quotaNickname_);
        };
        friend void from_json(const Darabonba::Json& j, JobResourceUsageList& obj) { 
          DARABONBA_PTR_FROM_JSON(cuUsage, cuUsage_);
          DARABONBA_PTR_FROM_JSON(date, date_);
          DARABONBA_PTR_FROM_JSON(jobOwner, jobOwner_);
          DARABONBA_PTR_FROM_JSON(memoryUsage, memoryUsage_);
          DARABONBA_PTR_FROM_JSON(quotaNickname, quotaNickname_);
        };
        JobResourceUsageList() = default ;
        JobResourceUsageList(const JobResourceUsageList &) = default ;
        JobResourceUsageList(JobResourceUsageList &&) = default ;
        JobResourceUsageList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JobResourceUsageList() = default ;
        JobResourceUsageList& operator=(const JobResourceUsageList &) = default ;
        JobResourceUsageList& operator=(JobResourceUsageList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cuUsage_ == nullptr
        && this->date_ == nullptr && this->jobOwner_ == nullptr && this->memoryUsage_ == nullptr && this->quotaNickname_ == nullptr; };
        // cuUsage Field Functions 
        bool hasCuUsage() const { return this->cuUsage_ != nullptr;};
        void deleteCuUsage() { this->cuUsage_ = nullptr;};
        inline int64_t getCuUsage() const { DARABONBA_PTR_GET_DEFAULT(cuUsage_, 0L) };
        inline JobResourceUsageList& setCuUsage(int64_t cuUsage) { DARABONBA_PTR_SET_VALUE(cuUsage_, cuUsage) };


        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline JobResourceUsageList& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // jobOwner Field Functions 
        bool hasJobOwner() const { return this->jobOwner_ != nullptr;};
        void deleteJobOwner() { this->jobOwner_ = nullptr;};
        inline string getJobOwner() const { DARABONBA_PTR_GET_DEFAULT(jobOwner_, "") };
        inline JobResourceUsageList& setJobOwner(string jobOwner) { DARABONBA_PTR_SET_VALUE(jobOwner_, jobOwner) };


        // memoryUsage Field Functions 
        bool hasMemoryUsage() const { return this->memoryUsage_ != nullptr;};
        void deleteMemoryUsage() { this->memoryUsage_ = nullptr;};
        inline int64_t getMemoryUsage() const { DARABONBA_PTR_GET_DEFAULT(memoryUsage_, 0L) };
        inline JobResourceUsageList& setMemoryUsage(int64_t memoryUsage) { DARABONBA_PTR_SET_VALUE(memoryUsage_, memoryUsage) };


        // quotaNickname Field Functions 
        bool hasQuotaNickname() const { return this->quotaNickname_ != nullptr;};
        void deleteQuotaNickname() { this->quotaNickname_ = nullptr;};
        inline string getQuotaNickname() const { DARABONBA_PTR_GET_DEFAULT(quotaNickname_, "") };
        inline JobResourceUsageList& setQuotaNickname(string quotaNickname) { DARABONBA_PTR_SET_VALUE(quotaNickname_, quotaNickname) };


      protected:
        shared_ptr<int64_t> cuUsage_ {};
        shared_ptr<string> date_ {};
        shared_ptr<string> jobOwner_ {};
        shared_ptr<int64_t> memoryUsage_ {};
        shared_ptr<string> quotaNickname_ {};
      };

      virtual bool empty() const override { return this->jobResourceUsageList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // jobResourceUsageList Field Functions 
      bool hasJobResourceUsageList() const { return this->jobResourceUsageList_ != nullptr;};
      void deleteJobResourceUsageList() { this->jobResourceUsageList_ = nullptr;};
      inline const vector<Data::JobResourceUsageList> & getJobResourceUsageList() const { DARABONBA_PTR_GET_CONST(jobResourceUsageList_, vector<Data::JobResourceUsageList>) };
      inline vector<Data::JobResourceUsageList> getJobResourceUsageList() { DARABONBA_PTR_GET(jobResourceUsageList_, vector<Data::JobResourceUsageList>) };
      inline Data& setJobResourceUsageList(const vector<Data::JobResourceUsageList> & jobResourceUsageList) { DARABONBA_PTR_SET_VALUE(jobResourceUsageList_, jobResourceUsageList) };
      inline Data& setJobResourceUsageList(vector<Data::JobResourceUsageList> && jobResourceUsageList) { DARABONBA_PTR_SET_RVALUE(jobResourceUsageList_, jobResourceUsageList) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::JobResourceUsageList>> jobResourceUsageList_ {};
      shared_ptr<int64_t> pageNumber_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetJobResourceUsageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetJobResourceUsageResponseBody::Data) };
    inline GetJobResourceUsageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetJobResourceUsageResponseBody::Data) };
    inline GetJobResourceUsageResponseBody& setData(const GetJobResourceUsageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetJobResourceUsageResponseBody& setData(GetJobResourceUsageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetJobResourceUsageResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetJobResourceUsageResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetJobResourceUsageResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobResourceUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetJobResourceUsageResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
