// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMEXCEPTIONSTACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRUMEXCEPTIONSTACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumExceptionStackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumExceptionStackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumExceptionStackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRumExceptionStackResponseBody() = default ;
    GetRumExceptionStackResponseBody(const GetRumExceptionStackResponseBody &) = default ;
    GetRumExceptionStackResponseBody(GetRumExceptionStackResponseBody &&) = default ;
    GetRumExceptionStackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumExceptionStackResponseBody() = default ;
    GetRumExceptionStackResponseBody& operator=(const GetRumExceptionStackResponseBody &) = default ;
    GetRumExceptionStackResponseBody& operator=(GetRumExceptionStackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BinaryImages, binaryImages_);
        DARABONBA_PTR_TO_JSON(CrashAddress, crashAddress_);
        DARABONBA_PTR_TO_JSON(CrashReason, crashReason_);
        DARABONBA_PTR_TO_JSON(Lines, lines_);
        DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
        DARABONBA_PTR_TO_JSON(ThreadId, threadId_);
        DARABONBA_PTR_TO_JSON(ThreadInfoList, threadInfoList_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BinaryImages, binaryImages_);
        DARABONBA_PTR_FROM_JSON(CrashAddress, crashAddress_);
        DARABONBA_PTR_FROM_JSON(CrashReason, crashReason_);
        DARABONBA_PTR_FROM_JSON(Lines, lines_);
        DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
        DARABONBA_PTR_FROM_JSON(ThreadId, threadId_);
        DARABONBA_PTR_FROM_JSON(ThreadInfoList, threadInfoList_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
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
      class ThreadInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ThreadInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(ThreadDetail, threadDetail_);
          DARABONBA_PTR_TO_JSON(ThreadTag, threadTag_);
        };
        friend void from_json(const Darabonba::Json& j, ThreadInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(ThreadDetail, threadDetail_);
          DARABONBA_PTR_FROM_JSON(ThreadTag, threadTag_);
        };
        ThreadInfoList() = default ;
        ThreadInfoList(const ThreadInfoList &) = default ;
        ThreadInfoList(ThreadInfoList &&) = default ;
        ThreadInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ThreadInfoList() = default ;
        ThreadInfoList& operator=(const ThreadInfoList &) = default ;
        ThreadInfoList& operator=(ThreadInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->threadDetail_ == nullptr
        && this->threadTag_ == nullptr; };
        // threadDetail Field Functions 
        bool hasThreadDetail() const { return this->threadDetail_ != nullptr;};
        void deleteThreadDetail() { this->threadDetail_ = nullptr;};
        inline string getThreadDetail() const { DARABONBA_PTR_GET_DEFAULT(threadDetail_, "") };
        inline ThreadInfoList& setThreadDetail(string threadDetail) { DARABONBA_PTR_SET_VALUE(threadDetail_, threadDetail) };


        // threadTag Field Functions 
        bool hasThreadTag() const { return this->threadTag_ != nullptr;};
        void deleteThreadTag() { this->threadTag_ = nullptr;};
        inline string getThreadTag() const { DARABONBA_PTR_GET_DEFAULT(threadTag_, "") };
        inline ThreadInfoList& setThreadTag(string threadTag) { DARABONBA_PTR_SET_VALUE(threadTag_, threadTag) };


      protected:
        // Thread stack details.
        shared_ptr<string> threadDetail_ {};
        // The thread tag, including the thread number and name.
        shared_ptr<string> threadTag_ {};
      };

      virtual bool empty() const override { return this->binaryImages_ == nullptr
        && this->crashAddress_ == nullptr && this->crashReason_ == nullptr && this->lines_ == nullptr && this->moduleName_ == nullptr && this->threadId_ == nullptr
        && this->threadInfoList_ == nullptr && this->uuid_ == nullptr; };
      // binaryImages Field Functions 
      bool hasBinaryImages() const { return this->binaryImages_ != nullptr;};
      void deleteBinaryImages() { this->binaryImages_ = nullptr;};
      inline string getBinaryImages() const { DARABONBA_PTR_GET_DEFAULT(binaryImages_, "") };
      inline Data& setBinaryImages(string binaryImages) { DARABONBA_PTR_SET_VALUE(binaryImages_, binaryImages) };


      // crashAddress Field Functions 
      bool hasCrashAddress() const { return this->crashAddress_ != nullptr;};
      void deleteCrashAddress() { this->crashAddress_ = nullptr;};
      inline string getCrashAddress() const { DARABONBA_PTR_GET_DEFAULT(crashAddress_, "") };
      inline Data& setCrashAddress(string crashAddress) { DARABONBA_PTR_SET_VALUE(crashAddress_, crashAddress) };


      // crashReason Field Functions 
      bool hasCrashReason() const { return this->crashReason_ != nullptr;};
      void deleteCrashReason() { this->crashReason_ = nullptr;};
      inline string getCrashReason() const { DARABONBA_PTR_GET_DEFAULT(crashReason_, "") };
      inline Data& setCrashReason(string crashReason) { DARABONBA_PTR_SET_VALUE(crashReason_, crashReason) };


      // lines Field Functions 
      bool hasLines() const { return this->lines_ != nullptr;};
      void deleteLines() { this->lines_ = nullptr;};
      inline const vector<string> & getLines() const { DARABONBA_PTR_GET_CONST(lines_, vector<string>) };
      inline vector<string> getLines() { DARABONBA_PTR_GET(lines_, vector<string>) };
      inline Data& setLines(const vector<string> & lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };
      inline Data& setLines(vector<string> && lines) { DARABONBA_PTR_SET_RVALUE(lines_, lines) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline Data& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      // threadId Field Functions 
      bool hasThreadId() const { return this->threadId_ != nullptr;};
      void deleteThreadId() { this->threadId_ = nullptr;};
      inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
      inline Data& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


      // threadInfoList Field Functions 
      bool hasThreadInfoList() const { return this->threadInfoList_ != nullptr;};
      void deleteThreadInfoList() { this->threadInfoList_ = nullptr;};
      inline const vector<Data::ThreadInfoList> & getThreadInfoList() const { DARABONBA_PTR_GET_CONST(threadInfoList_, vector<Data::ThreadInfoList>) };
      inline vector<Data::ThreadInfoList> getThreadInfoList() { DARABONBA_PTR_GET(threadInfoList_, vector<Data::ThreadInfoList>) };
      inline Data& setThreadInfoList(const vector<Data::ThreadInfoList> & threadInfoList) { DARABONBA_PTR_SET_VALUE(threadInfoList_, threadInfoList) };
      inline Data& setThreadInfoList(vector<Data::ThreadInfoList> && threadInfoList) { DARABONBA_PTR_SET_RVALUE(threadInfoList_, threadInfoList) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The name and UUID of the symbol table required for parsing the exception stack. This parameter is exposed during the parsing of PC errors.
      shared_ptr<string> binaryImages_ {};
      // The crash address. This parameter is exposed during the parsing of PC errors.
      shared_ptr<string> crashAddress_ {};
      // The cause of the exception. This parameter is exposed during the parsing of PC errors.
      shared_ptr<string> crashReason_ {};
      // The list of stacks.
      shared_ptr<vector<string>> lines_ {};
      // The name of the crash parsing module. This parameter is exposed during the parsing of PC errors.
      shared_ptr<string> moduleName_ {};
      // The thread ID.
      shared_ptr<string> threadId_ {};
      // The thread stack information captured during PC crashes.
      shared_ptr<vector<Data::ThreadInfoList>> threadInfoList_ {};
      // The UUID of the symbol table required for parsing the stack. This parameter is exposed during the parsing of PC errors.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRumExceptionStackResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRumExceptionStackResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRumExceptionStackResponseBody::Data) };
    inline GetRumExceptionStackResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRumExceptionStackResponseBody::Data) };
    inline GetRumExceptionStackResponseBody& setData(const GetRumExceptionStackResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRumExceptionStackResponseBody& setData(GetRumExceptionStackResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline GetRumExceptionStackResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRumExceptionStackResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRumExceptionStackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetRumExceptionStackResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The responses code. The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The response message.
    shared_ptr<GetRumExceptionStackResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<string> httpStatusCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> message_ {};
    // Id of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`
    // *   `false`
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
