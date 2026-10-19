// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTATTRIBUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class GetAccountAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAccountAttributesResponseBody() = default ;
    GetAccountAttributesResponseBody(const GetAccountAttributesResponseBody &) = default ;
    GetAccountAttributesResponseBody(GetAccountAttributesResponseBody &&) = default ;
    GetAccountAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountAttributesResponseBody() = default ;
    GetAccountAttributesResponseBody& operator=(const GetAccountAttributesResponseBody &) = default ;
    GetAccountAttributesResponseBody& operator=(GetAccountAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(LogEnabled, logEnabled_);
        DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
        DARABONBA_PTR_TO_JSON(MessageTraceEnabled, messageTraceEnabled_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(LogEnabled, logEnabled_);
        DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
        DARABONBA_PTR_FROM_JSON(MessageTraceEnabled, messageTraceEnabled_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
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
      virtual bool empty() const override { return this->logEnabled_ == nullptr
        && this->logStoreName_ == nullptr && this->messageTraceEnabled_ == nullptr && this->projectName_ == nullptr; };
      // logEnabled Field Functions 
      bool hasLogEnabled() const { return this->logEnabled_ != nullptr;};
      void deleteLogEnabled() { this->logEnabled_ = nullptr;};
      inline bool getLogEnabled() const { DARABONBA_PTR_GET_DEFAULT(logEnabled_, false) };
      inline Data& setLogEnabled(bool logEnabled) { DARABONBA_PTR_SET_VALUE(logEnabled_, logEnabled) };


      // logStoreName Field Functions 
      bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
      void deleteLogStoreName() { this->logStoreName_ = nullptr;};
      inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
      inline Data& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


      // messageTraceEnabled Field Functions 
      bool hasMessageTraceEnabled() const { return this->messageTraceEnabled_ != nullptr;};
      void deleteMessageTraceEnabled() { this->messageTraceEnabled_ = nullptr;};
      inline bool getMessageTraceEnabled() const { DARABONBA_PTR_GET_DEFAULT(messageTraceEnabled_, false) };
      inline Data& setMessageTraceEnabled(bool messageTraceEnabled) { DARABONBA_PTR_SET_VALUE(messageTraceEnabled_, messageTraceEnabled) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Data& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    protected:
      // Indicates whether the Log Management feature is enabled.
      shared_ptr<bool> logEnabled_ {};
      // The name of the Simple Log Service Logstore.
      shared_ptr<string> logStoreName_ {};
      // Indicates whether the message trace feature is enabled.
      shared_ptr<bool> messageTraceEnabled_ {};
      // The name of the Simple Log Service project.
      shared_ptr<string> projectName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetAccountAttributesResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAccountAttributesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAccountAttributesResponseBody::Data) };
    inline GetAccountAttributesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAccountAttributesResponseBody::Data) };
    inline GetAccountAttributesResponseBody& setData(const GetAccountAttributesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAccountAttributesResponseBody& setData(GetAccountAttributesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAccountAttributesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAccountAttributesResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAccountAttributesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<int64_t> code_ {};
    // The response data.
    shared_ptr<GetAccountAttributesResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The response status.
    shared_ptr<string> status_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
