// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTREAMJOBMANAGERLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTREAMJOBMANAGERLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListStreamJobManagerLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStreamJobManagerLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListStreamJobManagerLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListStreamJobManagerLogsResponseBody() = default ;
    ListStreamJobManagerLogsResponseBody(const ListStreamJobManagerLogsResponseBody &) = default ;
    ListStreamJobManagerLogsResponseBody(ListStreamJobManagerLogsResponseBody &&) = default ;
    ListStreamJobManagerLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStreamJobManagerLogsResponseBody() = default ;
    ListStreamJobManagerLogsResponseBody& operator=(const ListStreamJobManagerLogsResponseBody &) = default ;
    ListStreamJobManagerLogsResponseBody& operator=(ListStreamJobManagerLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(LogName, logName_);
        DARABONBA_PTR_TO_JSON(Mtime, mtime_);
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(LogName, logName_);
        DARABONBA_PTR_FROM_JSON(Mtime, mtime_);
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
      virtual bool empty() const override { return this->logName_ == nullptr
        && this->mtime_ == nullptr && this->size_ == nullptr; };
      // logName Field Functions 
      bool hasLogName() const { return this->logName_ != nullptr;};
      void deleteLogName() { this->logName_ = nullptr;};
      inline string getLogName() const { DARABONBA_PTR_GET_DEFAULT(logName_, "") };
      inline Data& setLogName(string logName) { DARABONBA_PTR_SET_VALUE(logName_, logName) };


      // mtime Field Functions 
      bool hasMtime() const { return this->mtime_ != nullptr;};
      void deleteMtime() { this->mtime_ = nullptr;};
      inline int64_t getMtime() const { DARABONBA_PTR_GET_DEFAULT(mtime_, 0L) };
      inline Data& setMtime(int64_t mtime) { DARABONBA_PTR_SET_VALUE(mtime_, mtime) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Data& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      // The original name of the log file, which corresponds to the LogName input parameter of GetStreamLogContent. Pass this value exactly as returned.
      shared_ptr<string> logName_ {};
      // The last modified time of the log file, as a millisecond timestamp since the Unix epoch.
      shared_ptr<int64_t> mtime_ {};
      // The size of the log file, in bytes.
      shared_ptr<int64_t> size_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListStreamJobManagerLogsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListStreamJobManagerLogsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListStreamJobManagerLogsResponseBody::Data>) };
    inline vector<ListStreamJobManagerLogsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListStreamJobManagerLogsResponseBody::Data>) };
    inline ListStreamJobManagerLogsResponseBody& setData(const vector<ListStreamJobManagerLogsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListStreamJobManagerLogsResponseBody& setData(vector<ListStreamJobManagerLogsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListStreamJobManagerLogsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListStreamJobManagerLogsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStreamJobManagerLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListStreamJobManagerLogsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The log file entries for JobManager or TaskManager. The logName parameter can be used to retrieve the log content.
    shared_ptr<vector<ListStreamJobManagerLogsResponseBody::Data>> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The details of the backend exception.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
