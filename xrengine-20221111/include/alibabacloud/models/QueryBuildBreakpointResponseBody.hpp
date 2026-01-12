// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBUILDBREAKPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYBUILDBREAKPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class QueryBuildBreakpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBuildBreakpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorName, errorName_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBuildBreakpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorName, errorName_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryBuildBreakpointResponseBody() = default ;
    QueryBuildBreakpointResponseBody(const QueryBuildBreakpointResponseBody &) = default ;
    QueryBuildBreakpointResponseBody(QueryBuildBreakpointResponseBody &&) = default ;
    QueryBuildBreakpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBuildBreakpointResponseBody() = default ;
    QueryBuildBreakpointResponseBody& operator=(const QueryBuildBreakpointResponseBody &) = default ;
    QueryBuildBreakpointResponseBody& operator=(QueryBuildBreakpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Breakpoints, breakpoints_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Breakpoints, breakpoints_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
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
      class Breakpoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Breakpoints& obj) { 
          DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
        };
        friend void from_json(const Darabonba::Json& j, Breakpoints& obj) { 
          DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        };
        Breakpoints() = default ;
        Breakpoints(const Breakpoints &) = default ;
        Breakpoints(Breakpoints &&) = default ;
        Breakpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Breakpoints() = default ;
        Breakpoints& operator=(const Breakpoints &) = default ;
        Breakpoints& operator=(Breakpoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->jobId_ == nullptr; };
        // algorithm Field Functions 
        bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
        void deleteAlgorithm() { this->algorithm_ = nullptr;};
        inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
        inline Breakpoints& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline Breakpoints& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      protected:
        shared_ptr<string> algorithm_ {};
        shared_ptr<string> jobId_ {};
      };

      virtual bool empty() const override { return this->breakpoints_ == nullptr
        && this->projectId_ == nullptr; };
      // breakpoints Field Functions 
      bool hasBreakpoints() const { return this->breakpoints_ != nullptr;};
      void deleteBreakpoints() { this->breakpoints_ = nullptr;};
      inline const vector<Data::Breakpoints> & getBreakpoints() const { DARABONBA_PTR_GET_CONST(breakpoints_, vector<Data::Breakpoints>) };
      inline vector<Data::Breakpoints> getBreakpoints() { DARABONBA_PTR_GET(breakpoints_, vector<Data::Breakpoints>) };
      inline Data& setBreakpoints(const vector<Data::Breakpoints> & breakpoints) { DARABONBA_PTR_SET_VALUE(breakpoints_, breakpoints) };
      inline Data& setBreakpoints(vector<Data::Breakpoints> && breakpoints) { DARABONBA_PTR_SET_RVALUE(breakpoints_, breakpoints) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline Data& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      shared_ptr<vector<Data::Breakpoints>> breakpoints_ {};
      shared_ptr<string> projectId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorName_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryBuildBreakpointResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryBuildBreakpointResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryBuildBreakpointResponseBody::Data) };
    inline QueryBuildBreakpointResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryBuildBreakpointResponseBody::Data) };
    inline QueryBuildBreakpointResponseBody& setData(const QueryBuildBreakpointResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryBuildBreakpointResponseBody& setData(QueryBuildBreakpointResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorName Field Functions 
    bool hasErrorName() const { return this->errorName_ != nullptr;};
    void deleteErrorName() { this->errorName_ = nullptr;};
    inline string getErrorName() const { DARABONBA_PTR_GET_DEFAULT(errorName_, "") };
    inline QueryBuildBreakpointResponseBody& setErrorName(string errorName) { DARABONBA_PTR_SET_VALUE(errorName_, errorName) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline QueryBuildBreakpointResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryBuildBreakpointResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryBuildBreakpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryBuildBreakpointResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryBuildBreakpointResponseBody::Data> data_ {};
    shared_ptr<string> errorName_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
