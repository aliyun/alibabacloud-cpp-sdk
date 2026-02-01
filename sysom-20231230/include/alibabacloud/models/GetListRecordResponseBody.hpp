// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLISTRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetListRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetListRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    GetListRecordResponseBody() = default ;
    GetListRecordResponseBody(const GetListRecordResponseBody &) = default ;
    GetListRecordResponseBody(GetListRecordResponseBody &&) = default ;
    GetListRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListRecordResponseBody() = default ;
    GetListRecordResponseBody& operator=(const GetListRecordResponseBody &) = default ;
    GetListRecordResponseBody& operator=(GetListRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(analysisId, analysisId_);
        DARABONBA_PTR_TO_JSON(analysisTime, analysisTime_);
        DARABONBA_PTR_TO_JSON(arguments, arguments_);
        DARABONBA_PTR_TO_JSON(failedLog, failedLog_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(analysisId, analysisId_);
        DARABONBA_PTR_FROM_JSON(analysisTime, analysisTime_);
        DARABONBA_PTR_FROM_JSON(arguments, arguments_);
        DARABONBA_PTR_FROM_JSON(failedLog, failedLog_);
        DARABONBA_PTR_FROM_JSON(status, status_);
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
      virtual bool empty() const override { return this->analysisId_ == nullptr
        && this->analysisTime_ == nullptr && this->arguments_ == nullptr && this->failedLog_ == nullptr && this->status_ == nullptr; };
      // analysisId Field Functions 
      bool hasAnalysisId() const { return this->analysisId_ != nullptr;};
      void deleteAnalysisId() { this->analysisId_ = nullptr;};
      inline string getAnalysisId() const { DARABONBA_PTR_GET_DEFAULT(analysisId_, "") };
      inline Data& setAnalysisId(string analysisId) { DARABONBA_PTR_SET_VALUE(analysisId_, analysisId) };


      // analysisTime Field Functions 
      bool hasAnalysisTime() const { return this->analysisTime_ != nullptr;};
      void deleteAnalysisTime() { this->analysisTime_ = nullptr;};
      inline string getAnalysisTime() const { DARABONBA_PTR_GET_DEFAULT(analysisTime_, "") };
      inline Data& setAnalysisTime(string analysisTime) { DARABONBA_PTR_SET_VALUE(analysisTime_, analysisTime) };


      // arguments Field Functions 
      bool hasArguments() const { return this->arguments_ != nullptr;};
      void deleteArguments() { this->arguments_ = nullptr;};
      inline string getArguments() const { DARABONBA_PTR_GET_DEFAULT(arguments_, "") };
      inline Data& setArguments(string arguments) { DARABONBA_PTR_SET_VALUE(arguments_, arguments) };


      // failedLog Field Functions 
      bool hasFailedLog() const { return this->failedLog_ != nullptr;};
      void deleteFailedLog() { this->failedLog_ = nullptr;};
      inline string getFailedLog() const { DARABONBA_PTR_GET_DEFAULT(failedLog_, "") };
      inline Data& setFailedLog(string failedLog) { DARABONBA_PTR_SET_VALUE(failedLog_, failedLog) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> analysisId_ {};
      shared_ptr<string> analysisTime_ {};
      shared_ptr<string> arguments_ {};
      shared_ptr<string> failedLog_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetListRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetListRecordResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetListRecordResponseBody::Data>) };
    inline vector<GetListRecordResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetListRecordResponseBody::Data>) };
    inline GetListRecordResponseBody& setData(const vector<GetListRecordResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetListRecordResponseBody& setData(vector<GetListRecordResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetListRecordResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetListRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetListRecordResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetListRecordResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
